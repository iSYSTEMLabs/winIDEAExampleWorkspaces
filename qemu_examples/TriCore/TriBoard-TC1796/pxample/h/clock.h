#ifndef __CLOCK_H__
#define __CLOCK_H__
/*====================================================================
* Project:
* Developed using:
* Function: function interface to clock task
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */

#define HZ	1000		/* Number of PXROS ticks per second. */


extern unsigned int hz;

PxTask_t CreateClockTask(int prio);

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __CLOCK_H__ */
