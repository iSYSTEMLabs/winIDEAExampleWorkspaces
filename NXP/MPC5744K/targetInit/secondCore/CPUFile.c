#include "mcKinley.h"

#ifdef METROWERKS_2_5_NONSTRIP_DEADCODE
#pragma force_active on
#endif


unsigned char gotoStopLowPowerMode;  
unsigned char gotoHaltLowPowerMode;  
unsigned char mustInitLPM;
unsigned char isEnableSecondCore;

extern const uint32_t IntcIsrVectorTable[];
//extern void e200zX_Interrupt_Setup(void);
void TimerInterruptHandler();

void TimerInterruptHandler()
{
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
