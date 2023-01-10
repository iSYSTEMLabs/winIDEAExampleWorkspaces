#ifndef __TASK_H__
#define __TASK_H__
/*====================================================================
* Project:
* Developed using:
* Function: function interface to example PXROS tasks
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#define EV_SIG		2		/* Event signalled from Task2 to Task1 */
#define EV_DELAY	4		/* Event signalled from the Delay Function */

#define BUFLEN		256		/* Length of local buffers */

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

void Task1Func(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs);
void Task2Func(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs);
void Task3Func(PxTask_t myid, PxMbx_t mymbx, PxEvents_t myevs);

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __TASK_H__ */
