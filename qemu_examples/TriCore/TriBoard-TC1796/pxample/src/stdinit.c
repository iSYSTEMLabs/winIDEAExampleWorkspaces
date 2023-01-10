/*====================================================================
* Project:
* Developed using:
* Function: Standard PXROS Initialization
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include <string.h>
#include <stdarg.h>


#include "pxdef.h"
#include "pxerrtexts.h"
#include "pxtrap.h"
#include "clock.h"
#include "timer.h"
#include "stdinit.h"

#ifdef PXMON
#ifdef PXMonitorsTaskTimings
#include "pxmtt.h"
#endif /* PXMonitorsTaskTimings */
#elif defined(PXVIEW)
#include "pxview.h"
#endif /* PXMON */

/* Here, we define our own PXROS error reporting function.  */

static void
errmsg(PxMessageClass_t severity, PxError_t errno, ...)
{
	static char message[256];
	va_list ap;

	va_start(ap, errno);
	sprintf(message, "%s: ", severity == 2 ? "fatal" :
							 severity == 1 ? "error" : "warning");
	vsprintf(&message[strlen(message)], errtext[errno], ap);
	va_end(ap);
	PxPanic();
}

/****************************************************************/
/* Standard Initialization: without Transfer Buffer Limitation. */
/****************************************************************/

PxTask_t StdInit(
	PxUInt_t	 objno,			/* number of available non-task objects */
	PxAligned_t	*firstblk_start,/* start address of 1st memory block managed by PXROS */
	PxSize_t	 firstblk_size,	/* size of the first memory block in bytes */
	char		*inittask_name,	/* initialization task name */
	PxUChar_t 	 inittask_prio	/* its priority */
				)
{
	return StdInit_Tbl(objno, firstblk_start, firstblk_size, inittask_name, inittask_prio, (PxSize_t)-1);
}

/****************************************************************/
/* Standard Initialization: with Transfer Buffer Limitation.    */
/****************************************************************/

PxTask_t StdInit_Tbl(
	PxUInt_t	 objno,				/* number of available non-task objects */
	PxAligned_t	*firstblk_start,	/* start address of 1st memory block managed by PXROS */
	PxSize_t	 firstblk_size,		/* size of the first memory block in bytes */
	char		*inittask_name,		/* initialization task name */
	PxUChar_t	 inittask_prio,		/* its priority */
	PxSize_t	 inittask_tblimit	/* its communication buffer limit */
					)
{
	PxTaskSpec_T ts =
	{
		inittask_name,
		0,
		PXMcSystemdefault,
		PXOpoolSystemdefault,
		{},
		inittask_tblimit,
		inittask_prio,
	};

	PxInitSpec_T is =
	{
		PXMcVarsized,
		0,
		firstblk_start,
		firstblk_size,
		objno,
		0,
		&ts,
#ifdef PXMON
		PXMonitorNewTasks | PXMonitorMemory
#else
		0
#endif /* PXMON */
	};
	PxTask_t inittask;

	ts.ts_taskstack.stk_type = PXProcGetInitstackSpectype;
	ts.ts_taskstack.stk_size = PXProcGetInitstackSize;
	ts.ts_taskstack.stk_src  = PXProcGetInitstackStart;

#ifdef PXMON
#ifdef PXMonitorsTaskTimings
	is.is_schedext = &PxmTasktimeGlobalSchedExt;
#endif /* PXMonitorsTaskTimings */
#elif defined(PXVIEW)
	is.is_schedext = &PxvGlobalSchedExt;
#endif /* PXMON */

	if (!(inittask = PxInit(&is)))
	{
		PxPanic();
	}


	TrapInit();		/* initialize C interrupt interface */


	/* Start PXROS time base with HZ (defined in clock.h) ticks per second. */
	TicksInit(hz);

	/* Install the PXROS error reporting function. */
	PxCtrl(PXCtrlSetMessageFun, errmsg);

	return inittask;
}
