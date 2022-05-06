#include "rl78.h"

void targetEnableInterrupts(void)
{
} 


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
} 