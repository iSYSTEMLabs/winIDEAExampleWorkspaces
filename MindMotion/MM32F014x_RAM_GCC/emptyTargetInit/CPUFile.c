#include "MM32F014x.h"


void ITMInit(void)
{
  /*
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
  */
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  /* Interrupts not implemented in the RAM sample */
  //targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  
}
