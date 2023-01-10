/*====================================================================
* Project:
* Developed using:
* Function: Main module for pxample demo application.
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <stdio.h>
#include "pxdef.h"

#include "clock.h"
#include "ttytask.h"

#include "task.h"
#include "ledserver.h"

#include "stdinit.h"
#include "stdtask.h"


/* Allocate system memory (in bytes) */

#define SYSMEMSIZE	0x10000

PxAligned_t Sysmem[(SYSMEMSIZE + sizeof(PxAligned_t) - 1)/sizeof(PxAligned_t)];


#ifdef PXMON
#include "pxmon.h"
#define PXMON_PRIO 	 6

#ifdef PXMRT
#include "pxmbpt.h"

#define PXMBptBreakpoints		16	/* number supported breakpoints */
#define PXMBptCodesaves			16	/* number of addresses with breakpoints */
#define PXMBptProtectedTasks		2	/* PXMon and its communication driver */
#define PXMBptBreakEvents		10	/* maximal number of pending breakpoint events */
/***************************************************************************
Resource Allocation for Breakpoint Handling
  the support macro uses the fact, that all related pieces
  have uniform names:
    the resource memory block           _pxm<type>
    the length macro                    PXMBptSize<type>
    the number parameter                PXM<type>
*/

#define PXMAllocateResource(type)       /* support macros */    \
  PxAligned_t _pxm##type[PXConvertByteToAlignedSize_Up(         \
    PXMBptSize##type(PXMBpt##type))]

PXMAllocateResource(ProtectedTasks);
PXMAllocateResource(Breakpoints);
PXMAllocateResource(Codesaves);
PXMAllocateResource(BreakEvents);
/***************************************************************************
The configuration specification for breakpoint handling
  Again: naming conventions are heavily used!
  We use static resource allocation and let the configuration
    figure out, how much resource elements it can get out of it.
*/

#define PXMSpecifyResource(type)        /* support macro */     \
	{0,_pxm##type,sizeof(_pxm##type),}

const PxmBptSpec_T bptSpec =
{
	PXMBptVersion,                        /* this is REQUIRED */
	PXMSpecifyResource(ProtectedTasks),
	PXMSpecifyResource(Breakpoints),
	PXMSpecifyResource(Codesaves),
	PXMSpecifyResource(BreakEvents)
};

#endif /* PXMRT */

#ifdef PXMonitorsTaskTimings
#include "pxmtt.h"
#include "timer.h"

#define TRACE_RING_SIZE	40

PxmTasktimeTraceRecord_T tracebuffer[TRACE_RING_SIZE];
#endif /* PXMonitorsTaskTimings */
#endif /* PXMON */

#ifdef PXVIEW
#include "pxview.h"
#include "timer.h"

#define PRIOPXVIEW		15
#define SOCK_PORT		10320
#define NO_PXV_ENTRIES		1024

PxUChar_t PxvArray[PXV_ARRAY_SIZE(NO_PXV_ENTRIES)];
#endif /* PXVIEW */


#define MINPRIO			31		/* lowest priority (32-bit architecture) */
#define MAXPRIO			0		/* highest priority */

#define TTYTASK_PRIO		9
#define CLOCKTASK_PRIO		8		/* define the task priorities */
#define TASK1_PRIO		10
#define TASK2_PRIO		11
#define TASK3_PRIO		11
#define LEDSERVER_PRIO		12

#define TASK1_ACTIVATION_EVENT		1	/* activation events */
#define TASK2_ACTIVATION_EVENT		1
#define TASK3_ACTIVATION_EVENT		1
#define CLOCK_ACTIVATION_EVENT		1
#define LEDSERVER_ACTIVATION_EVENT	1


#define TASK_STKSZ		 1000	/* stack size used for task 1-3 */
#define LEDS_STKSZ		 1000	/* stack size used for LedServer task */
#define PXVIEW_STKSZ		 700	/* stack size used for PxView task */
#define PXROS_OBJNO		 30		/* Number of pxros objects */

static PxTask_t InitTaskId;
static PxTask_t TtyTaskId;
static PxTask_t ClockTaskId;
static PxTask_t Task1Id, Task2Id, Task3Id;
static PxTask_t LedServerId;


static PxError_t SendTaskId(PxTask_t dst, PxTask_t id);

extern void PxIntEnable(void);


int main(void)
{
	/* Initialize PXROS and start the PXROS time base with HZ ticks per second
	 * (defined in clock.h) ticks per second.
	 */
	InitTaskId = StdInit(PXROS_OBJNO, Sysmem, SYSMEMSIZE, "InitTask", MAXPRIO);
	if (InitTaskId == NULL)
	{
		/* Initialization of PXROS failed */
		PxPanic();
	}

#ifdef PXMRT
	/* Configure breakpoint handling */
	{
		PxmBptConferr_t err;

		if ((err = PxmBptConf(&bptSpec)))
			PxPanic();
	}
#endif /* PXMRT */

	/* Enable processor interrupts */
	PxIntEnable();

	/* Create the communication task */
	TtyTaskId = CreateTtyTask(TTYTASK_PRIO);
	if (TtyTaskId == NULL)	/* creation failed */
	{
		PxPanic();
	}

	/* Create the clock task */
	ClockTaskId = CreateClockTask(CLOCKTASK_PRIO);
	if (ClockTaskId == NULL)	/* creation failed */
	{
		PxPanic();
	}

	if (CreateStdtask(&LedServerId, "LedServer", LedServer, LEDS_STKSZ, LEDSERVER_PRIO,
					  LEDSERVER_ACTIVATION_EVENT))
		/* the creation fails */
		PxPanic();

	/* initialize ledserver's mailbox */
	LedServerMailbox = PxTaskGetMbx(LedServerId);


	/*
		Decrease initialization task's priority; this will start the communication
		task as it is runnable and currently has the highest priority.  We
		return from the function call below as soon as all other tasks are
		waiting for events or messages in blocking mode.
	 */
	PxTaskSetPrio(PxGetId(), MINPRIO);

	/* Now activate the clock task by sending it an event */
	PxTaskSignalEvents(ClockTaskId, CLOCK_ACTIVATION_EVENT);


	/* creating the task 1-3 */
	if (CreateStdtask(&Task1Id, "Task1", Task1Func, TASK_STKSZ, TASK1_PRIO,
					  TASK1_ACTIVATION_EVENT))
		/* the creation fails */
		PxPanic();
	if (CreateStdtask(&Task2Id, "Task2", Task2Func, TASK_STKSZ, TASK2_PRIO,
					  TASK2_ACTIVATION_EVENT))
		/* the creation fails */
		PxPanic();
	if (CreateStdtask(&Task3Id, "Task3", Task3Func, TASK_STKSZ, TASK3_PRIO,
					  TASK3_ACTIVATION_EVENT))
		/* the creation fails */
		PxPanic();


	/* Ready tasks 1-3 by sending them an event */
	PxTaskSignalEvents(Task1Id, TASK1_ACTIVATION_EVENT);
	PxTaskSignalEvents(Task2Id, TASK2_ACTIVATION_EVENT);
	PxTaskSignalEvents(Task3Id, TASK3_ACTIVATION_EVENT);
	/* Ready ledserver task by sending it an event */
	PxTaskSignalEvents(LedServerId, LEDSERVER_ACTIVATION_EVENT);

	/* sending the Id of task 2 to task 1 */
	if (SendTaskId(Task1Id, Task2Id))
		PxPanic();

	/* sending the Id of task 1 to task 2 */
	if (SendTaskId(Task2Id, Task1Id))
		PxPanic();


#ifdef PXMON
	/* start driver for PXMON communication */
#ifdef PXM_USE_TTY
#ifdef PXM_USE_TTY1
	if (PxmTtyStart(PXMON_PRIO, "tty1", 38400) != PXERR_NOERROR)
#else
	if (PxmTtyStart(PXMON_PRIO, "tty0", 38400) != PXERR_NOERROR)
#endif /* PXM_USE_TTY1 */

#endif /* PXM_USE_TTY */
	{
		printf("Initialization of PXMON failed\n");
		PxPanic();
	}
#ifdef PXMonitorsTaskTimings
	/* initialize trace ring */
	PxmTasktimeInit(tracebuffer, sizeof(tracebuffer), GetSubTicks, GetTimerReload());
#endif /* PXMonitorsTaskTimings */
#endif /* PXMON */

#ifdef PXVIEW
#ifdef PXVIEW_USE_TTY
#ifdef PXVIEW_USE_TTY1
	/* communication of PXview via UART and ASC1 */
	if (PxviewOpen_uart(PRIOPXVIEW, TTY1, 115200, PXVIEW_STKSZ) == (PxTask_t) 0)
		PxPanic();
#else
	/* communication of PXview via UART and ASC0 */
	if (PxviewOpen_uart(PRIOPXVIEW, TTY0, 115200, PXVIEW_STKSZ) == (PxTask_t) 0)
		PxPanic();
#endif /* PXVIEW_USE_TTY1 */
#else
	/* communication of PXview via TCP */
	if (PxviewOpen_tcp(PRIOPXVIEW, SOCK_PORT, PXVIEW_STKSZ) == (PxTask_t) 0)
		PxPanic();
#endif /* PXVIEW_USE_TTY */

	PxvInit(GetSubTicks, GetTimerReload(), NO_PXV_ENTRIES, PxvArray);
	PxvSetTicksperSecond(HZ);
	PxvTraceEnable(PXVT_ALL);
	/* activate tracing of PXROS functions */
	PxvSetPxrosTrace(TRACE_START);
	PxvStart();
#endif /* PXVIEW */


	/* Idle loop */
	while (1)
	{
		;
	}

	/* We never come here, but the "return" prevents a compiler warning. */
	return 0;
}

static PxError_t SendTaskId(PxTask_t dst, PxTask_t id)
{
	PxMsg_t msg;
	PxError_t error;
	PxTask_t *data;

	/* allocate a message object with enough memory to hold the id */
	error = PxMsgRequest(&msg, sizeof(PxTask_t), PXMcTaskdefault, PXOpoolTaskdefault);
	if (error != PXERR_NOERROR)
		return error;

	data  = (PxTask_t *)PxMsgGetData(msg);
	*data = id;		/* fill in the id */
	PxMsgSend(&msg, PxTaskGetMbx(dst));

	return PXERR_NOERROR;
}
