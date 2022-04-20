#include "NCJ29D5.h"


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT



  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
  WDOG_REG = 0x00000000; 
}
