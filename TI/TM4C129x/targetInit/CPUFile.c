#include "TM4C129x.h"


void sysTickInit()
{
  SYST_CSR = 0x03;
  SYST_RVR = 0xF8F; // set timer to 1.00ms  
}


void targetEnableInterrupts()
{ 
  sysTickInit(); 
  __asm volatile ("CPSIE i");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
