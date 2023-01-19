#ifndef __STDTASK_H__
#define __STDTASK_H__
/*====================================================================
* Project:
* Developed using:
* Function: Header for Standard PXROS task generation
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

#define GETABORTSTACK_SIZE(afr)	(PxGetAbortFrameSize() * (afr))
#define ABORTSTACK_TYPE			PxAbortFrame_t

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
	PxEvents_t	 actevent);						/* Activation Event       */

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
	PxUInt_t	 abortfr);						/* Number of Abort Frames */

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
	PxSize_t	 tblimit);						/* Task's TBLimit         */

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
	PxEvents_t	 actevent);						/* Activation Event       */

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __STDTASK_H__ */
