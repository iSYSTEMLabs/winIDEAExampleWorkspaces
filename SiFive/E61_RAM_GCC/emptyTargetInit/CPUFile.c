#include "E61.h"

void targetEnableInterrupts()
{
}

void TimerInterruptHandler()
{
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
