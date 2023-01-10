#ifndef __TTYTASK_H__
#define __TTYTASK_H__
/*====================================================================
* Project:
* Developed using:
* Function: function interface to the tty task
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

PxTask_t CreateTtyTask(int prio);
int TtyWrite(char *buf, int length);
int TtyRead(char *buf, int length);

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __TTYTASK_H__ */
