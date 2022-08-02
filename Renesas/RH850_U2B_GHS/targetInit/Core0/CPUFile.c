#include "RH850.h"
#include "main.h"


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT


  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}

void targetEnableInterrupts()
{
}
