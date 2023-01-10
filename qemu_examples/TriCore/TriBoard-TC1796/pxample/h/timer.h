#ifndef __TIMER_H__
#define __TIMER_H__
/*====================================================================
* Project:
* Developed using:
* Function: Initialize PXROS time base
*
* Copyright HighTec EDV-Systeme GmbH 1982-2006
*====================================================================*/

#include "pxdef.h"

#ifdef __cplusplus
  extern "C" {
#endif /* __cplusplus */


/* Initialize PXROS time base */

void TicksInit(unsigned int hz);

#if defined(PXVIEW) || (defined(PXMON) && defined (PXMonitorsTaskTimings))
PxUInt_t GetTimerReload(void);

PxUInt_t GetSubTicks(void);
#endif /* PXVIEW || (PXMON && PXMonitorsTaskTimings) */

#ifdef __cplusplus
  }
#endif /* __cplusplus */

#endif /* __TIMER_H__ */
