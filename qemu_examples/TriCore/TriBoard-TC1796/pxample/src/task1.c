/*====================================================================
* Project:
* Developed using:
* Function: Task1 for PXROS demo application.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include <string.h>

#include "pxdef.h"
#include "ttytask.h"
#include "clock.h"
#include "task.h"
#include "ledserver.h"


static unsigned long Task1EvCnt;


/* Send the task ARG a delay event.  */
static void DelayFunc(PxArg_t arg)
{
	PxTaskSignalEvents_Hnd((PxTask_t)arg, EV_DELAY);
}


void Task1Func(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs)
{
	PxDelay_t	delay;
	PxEvents_t	ev;
	PxMsg_t		msg;
	PxTask_t	task2Id;
	char		buf[32];

	PxDelayRequest(&delay, PXOpoolSystemdefault);

	sprintf(buf, "\nTask1 started");
	TtyWrite(buf, strlen(buf));
	
	Task1EvCnt = 0;

	/* Wait for the Task id of task 2 */
	PxMsgReceive(&msg, mymbx);
	task2Id = *(PxTask_t *)PxMsgGetData(msg);
	PxMsgRelease(&msg);

	while (1)
	{
		PxDelaySched(delay, (PxTicks_t)5*hz, DelayFunc, (PxArg_t)task2Id);
		ev = PxAwaitEvents(EV_SIG);

		sprintf(buf, "\n Task1         %08ld", ++Task1EvCnt);
		TtyWrite(buf, strlen(buf));

		LedServerSendMsg(LED_GREEN, LED_ACTION_TOGGLE);
	}
}	
