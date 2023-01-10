/*====================================================================
* Project:
* Developed using:
* Function: A task to handle the LEDs on the target board.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include "pxdef.h"
#include "ledserver.h"
#include "led.h"

PxMbx_t LedServerMailbox;

/*
 *	function to send a message to the ledserver
 */
PxError_t LedServerSendMsg(char led, char action)
{
	PxMsg_t		PxMsg;		/* PXROS message */
	PxError_t	PxError;	/* PXROS error code */
	LedData_t	*LedData;

	PxError = PxMsgRequest(&PxMsg, sizeof(LedData_t), PXMcTaskdefault, PXOpoolTaskdefault);
	if (PxError != PXERR_NOERROR)
	{
		/*
		 *	no PXROS message available
		 */
		return PxError;
	}

	/*
	 *	fill parameters into data structure for ledserver
	 */
	LedData			= (LedData_t *) PxMsgGetData(PxMsg);
	LedData->led	= led;
	LedData->action = action;
	/*
	 *	send the message to ledserver
	 */
	return PxMsgSend(&PxMsg, LedServerMailbox);
}

/*
 *	LED server task
 *
 *	Receives messages from other task to manipulate the LEDs
 */
void LedServer(PxTask_t LedTask, PxMbx_t LedMbx, PxEvents_t LedEvents)
{
	LedData_t	*LedData;	/* pointer to message */
	PxMsg_t		LedMsg;		/* message from other task */

	InitLED();

	for (;;)
	{
		/*
		 *	wait for message
		 */
		PxMsgReceive(&LedMsg, LedMbx);
		LedData = (LedData_t *) PxMsgGetData(LedMsg);
		/*
		 *	execute LED action
		 */
		switch (LedData->action)
		{
			case LED_ACTION_ON:
				LEDON(LedData->led);
				break;
			case LED_ACTION_OFF:
				LEDOFF(LedData->led);
				break;
			case LED_ACTION_TOGGLE:
				LEDTOGGLE(LedData->led);
				break;
		}
		/*
		 *	release message
		 */
		PxMsgRelease(&LedMsg);
	}
}
