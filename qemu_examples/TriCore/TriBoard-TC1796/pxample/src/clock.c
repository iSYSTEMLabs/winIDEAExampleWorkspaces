/*====================================================================
* Project:
* Developed using:
* Function: A task to transmit the current running time via the
*           communication channel.
*           The periodic timer sends an event every second which then is
*           used to transmit the PXROS tick count in "hh:mm:ss" format.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include <string.h>
#include <time.h>

#include "pxdef.h"
#include "pxpe.h"
#include "clock.h"
#include "ttytask.h"
#include "ledserver.h"

#define EV_SEC	1

unsigned int hz = HZ;

static void ClockTask(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs)
{
	PxPe_T pe;
	char buf[16];
	PxTicks_t ticks;
	time_t t;
	struct tm tm;
	unsigned int _hz = hz;

	PxPeInit(&pe, _hz, EV_SEC);
	PxPeStart(&pe);

	while (1)
	{
		ticks = PxTickGetCount();
		t = (time_t)ticks / _hz;
		LedServerSendMsg(LED_RED, LED_ACTION_TOGGLE);
		
		/* We convert the time (in seconds) to "struct tm" containing the
		   fields "tm_hour", "tm_sec", etc., using the reentrent version of
		   gmtime(), since this is a multitasking environment and gmtime()
		   uses a local buffer to store the result.
		 */
		(void) gmtime_r(&t, &tm);

		sprintf(buf, "\n%02d:%02d:%02d", tm.tm_hour, tm.tm_min, tm.tm_sec);
		TtyWrite(buf, strlen(buf));

		if (hz != _hz)
		{
			_hz = hz;
			PxPeChange(&pe, _hz, EV_SEC);
		}
		PxAwaitEvents(EV_SEC);
	}
}

PxTask_t CreateClockTask(int prio)
{
	PxTaskSpec_T ts;
	PxTask_t task;

	PxBzero((PxUChar_t *)&ts, sizeof(ts));

	/* Create Tasks */
	/* no tblimit restrictions */
	ts.ts_tblimit = (PxSize_t)-1;
	
	ts.ts_mc = PXMcSystemdefault;
	
	ts.ts_opool = PXOpoolSystemdefault;
	

	/* Specify the task's stack.  */
	ts.ts_taskstack.stk_type = PXStackAlloc;
	ts.ts_taskstack.stk_src  = PXMcSystemdefault;
	ts.ts_taskstack.stk_size = 1000;

	ts.ts_actevents = 1;

	ts.ts_abortstacksize = 0;
	ts.ts_abortstack = 0;
	ts.ts_name = "ClockTask";
	ts.ts_fun  = ClockTask;

	ts.ts_prio = prio;
	PxTaskCreate(&task, &ts);
	return task;
}
