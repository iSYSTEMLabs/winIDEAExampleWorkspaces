#include "Tayrona.h"


void disableWatchdog()
{
}

void targetEnableInterrupts()
{
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

