#ifndef __STDINIT_H__
#define __STDINIT_H__
/*====================================================================
* Project:
* Developed using:
* Function: Header for Standard PXROS Initialization
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

/*******************************************************************************
* Standard Initialization: with Transfer Buffer Limitation.
*******************************************************************************/
PxTask_t StdInit_Tbl(
	PxUInt_t	 objno,				/* number of available non-task objects */
	PxAligned_t	*firstblk_start,	/* start address of 1st memory block managed by PXROS */
	PxSize_t	 firstblk_size,		/* size of the first memory block in bytes */
	char		*inittask_name,		/* initialization task name */
	PxUChar_t	 inittask_prio,		/* its priority */
	PxSize_t	 inittask_tblimit	/* its communication buffer limit */
					);

	/* initialize PXROS, returns the Id of the Initial Task
	   initialize C-Interrupt interface
	   calls TicksInit(hz) to programm the PXROS Timer
	*/

/*******************************************************************************
* Standard Initialization: without Transfer Buffer Limitation.
*******************************************************************************/
PxTask_t StdInit(
	PxUInt_t	 objno,			/* number of available non-task objects */
	PxAligned_t	*firstblk_start,/* start address of 1st memory block managed by PXROS */
	PxSize_t	 firstblk_size,	/* size of the first memory block in bytes */
	char		*inittask_name,	/* initialization task name */
	PxUChar_t	 inittask_prio	/* its priority */
				);

	/* initialize PXROS, returns the Id of the Initial Task
	   initialize C-Interrupt interface
	   calls TicksInit(hz) to programm the PXROS Timer
	*/

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __STDINIT_H__ */
