/*====================================================================
* Project:
* Developed using:
* Function: Task2 for PXROS demo application.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include <string.h>

#include "pxdef.h"
#include "ttytask.h"
#include "task.h"


static unsigned long Task2EvCnt;

void Task2Func(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs)
{
	PxEvents_t	ev;
	char		buf[32];
	PxMsg_t		msg;
	PxTask_t	task1Id;

	sprintf(buf, "\nTask2 started");
	TtyWrite(buf, strlen(buf));

	Task2EvCnt = 0;

	/* Wait for the Task id of task 1 */
	PxMsgReceive(&msg, mymbx);
	task1Id = *(PxTask_t *)PxMsgGetData(msg);
	PxMsgRelease(&msg);

	while (1)
	{
		ev = PxAwaitEvents(EV_DELAY);
	
		sprintf(buf, "\n Task2         %08ld", ++Task2EvCnt);
		TtyWrite(buf, strlen(buf));
		
		PxTaskSignalEvents(task1Id, EV_SIG);
	}
}
