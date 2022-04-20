#include "CortexM0_LPC13xx.h"


void targetEnableInterrupts()
{        
  LOAD = 0xBA55; // reload value for 1ms intervals
  CTRL |= 7;  //enable SysTick timer, enable SysTick interrupt, CPU clock
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  //ITMInit();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void ITMInit(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; //unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; //enable stimulus port 0-31 
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; //set privilege
}


void disableWatchdog()
{
}
