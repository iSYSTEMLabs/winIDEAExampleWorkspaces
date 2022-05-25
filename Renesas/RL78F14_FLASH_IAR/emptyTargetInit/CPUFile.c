#include "rl78.h"


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void)
{
  // Disabled in Option byte 0 (check rl78.h)
} 