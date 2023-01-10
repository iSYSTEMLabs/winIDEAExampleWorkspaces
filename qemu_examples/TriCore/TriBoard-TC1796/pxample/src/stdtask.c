/*====================================================================
* Project:
* Developed using:
* Function:  Function to create a "standard task".

Standard tasks only have a few variations in their parameters.
The remaining task parameters are predetermined.

   Variable Parameters:
	Name
	Function
	Stack Size
	Priority

   Predetermined Parameters:
	Default Memory Class		inherited from creator
	Default Memory Pool			inherited from creator
	Stack Specifications		allocated by PXROS
	Stack Source				System Memory Class
	Defaults for all remaining specification
*
*
* Copyright HighTec EDV-Systeme GmbH 1982 - 2007
*====================================================================*/

#include <pxdef.h>
#include <stdtask.h>


/*****************************************************************
	Creating a standard task:
		- without transfer buffer limitation and
		- without abort stack
*****************************************************************/

PxError_t CreateStdtask(
	PxTask_t	*Task,							/* created Task's Taskid  */
	char		*name,							/* Task Name              */
	void (*fun)(PxTask_t, PxMbx_t, PxEvents_t),	/* Task Executed Function */
	PxUInt_t	 stksize,						/* Stack Size in Integers */
	PxUChar_t	 prio,							/* Task Priority          */
	PxEvents_t	 actevent)						/* Activation Event       */

{
	return CreateStdtask_TblAbort(Task, name, fun, stksize, prio, (PxSize_t)-1, 0, actevent);
}


/*****************************************************************
	Creating a standard task:
		- without transfer buffer limitation and
		- with abort stack
*****************************************************************/

PxError_t CreateStdtask_Abort(
	PxTask_t	*Task,							/* created task's Taskid  */
	char		*name,							/* Task Name              */
	void (*fun)(PxTask_t, PxMbx_t, PxEvents_t),	/* Task Executed Function */
	PxUInt_t	 stksize,						/* Stack Size in Integers */
	PxUChar_t	 prio,							/* Task Priority          */
	PxUInt_t	 abortfr)						/* Number of Abort Frames */
{
	return CreateStdtask_TblAbort(Task, name, fun, stksize, prio, (PxSize_t)-1, abortfr, 0);
}



/*****************************************************************
	Creating a standard task:
		- with transfer buffer limitation and
		- without abort stack
*****************************************************************/

PxError_t CreateStdtask_Tbl(
	PxTask_t	*Task,							/* created task's Taskid  */
	char		*name,							/* Task Name              */
	void (*fun)(PxTask_t, PxMbx_t, PxEvents_t),	/* Task Executed Function */
	PxUInt_t	 stksize,						/* Stack Size in Integers */
	PxUChar_t	 prio,							/* Task Priority          */
	PxSize_t	 tblimit)						/* Task's TBLimit         */
{
	return CreateStdtask_TblAbort(Task, name, fun, stksize, prio, tblimit, 0, 0);
}

/*****************************************************************
	Creating a standard task:
		- with transfer buffer limitation and
		- with abort stack
*****************************************************************/

PxError_t CreateStdtask_TblAbort(
	PxTask_t	*Task,							/* created task's Taskid  */
	char		*name,							/* Task Name              */
	void (*fun)(PxTask_t, PxMbx_t, PxEvents_t),	/* Task Executed Function */
	PxUInt_t	 stksize,						/* Stack Size in Integers */
	PxUChar_t	 prio,							/* Task Priority          */
	PxSize_t	 tblimit,						/* Task's TBLimit         */
	PxUInt_t	 abortfr,						/* Number of Abort Frames */
	PxEvents_t	 actevent)						/* Activation Event       */

{
	PxTaskSpec_T	ts;

	/* initialize with "0" --- Default values */
	PxBzero((PxUChar_t *) &ts, sizeof(ts));

	if (abortfr)
	{
		PxChar_t	*abort_stack;
		PxError_t	 err;
		PxSize_t	 size = GETABORTSTACK_SIZE(abortfr);	/* allocate AbortStack */
		if ((err = PxMcTakeBlk(PXMcSystemdefault,
							   (PxAligned_t **)(void *)&abort_stack,
							    size)) != PXERR_NOERROR)
			return err;
		/* Abort stacks are falling and predecremented!
		 * In this case the Address is specified behind the stack
		 */
		ts.ts_abortstack = (ABORTSTACK_TYPE)&abort_stack[size];
			/* Abort stack size in abort frame */
		ts.ts_abortstacksize = abortfr;
	}
	ts.ts_name	= name;
	ts.ts_fun	= fun;
	ts.ts_mc	= PXMcTaskdefault;
	ts.ts_opool	= PXOpoolTaskdefault;
	ts.ts_taskstack.stk_type = PXStackAlloc;
	ts.ts_taskstack.stk_size = stksize;
	ts.ts_taskstack.stk_src  = PXMcSystemdefault;
	ts.ts_prio		= prio;
	ts.ts_tblimit	= tblimit;
	ts.ts_actevents	= actevent;
	/* So you need to explicitly wake up the tasks by sending them this event/signal. */

	return PxTaskCreate(Task, &ts);
}
