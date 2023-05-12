#include "FC4150.h"


void ITMInit(void)
{
  memW32(ITM_LOCK_ACCESS_REGISTER) = 0xC5ACCE55; //unlock write access to ITM
  memW32(ITM_TRACE_ENABLE_REGISTER) = 0xFFFFFFFF; //enable stimulus port 0-31 
  memW32(ITM_TRACE_PRIVILEGE_REGISTER) = 0x1; //set privilege
}


void targetEnableInterrupts()
{ 
  __asm volatile ("cpsie i");   
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT
  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
