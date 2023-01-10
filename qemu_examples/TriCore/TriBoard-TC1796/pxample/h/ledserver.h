#ifndef __LEDSERVER_H__
#define __LEDSERVER_H__
/*====================================================================
* Project:
* Developed using:
* Function: A task to handle the LEDs on the target board.
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */


/*
 *	LED actions: on | off | toggle
 */
#define LED_ACTION_ON		1
#define LED_ACTION_OFF		2
#define LED_ACTION_TOGGLE	3

/*
 *	defines for red and green LED
 */
#define LED_GREEN		0
#define LED_RED			1

/*
 *	communication structure
 */
typedef struct
{
	char	led;	/* specifies the LED 		*/
	char	action;	/* action (on|off|toggle)	*/
} LedData_t;

/*
 *	ledserver's mailbox
 */
extern PxMbx_t	LedServerMailbox;

/*
 *	function prototypes
 */

PxError_t LedServerSendMsg(char led, char action);

void LedServer(PxTask_t LedTask, PxMbx_t LedMbx, PxEvents_t LedEvents);

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __LEDSERVER_H__ */
