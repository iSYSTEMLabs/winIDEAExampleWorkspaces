#include "iMXRT1170_CM4.h"


void initClock()
{
  // Reduce CM4 core clock frequency
  CLOCK_ROOT1_CONTROL_REG &= ~(0xFF << CLOCK_ROOT1_CONTROL_REG_DIV);
  CLOCK_ROOT1_CONTROL_REG |= (0x5 << CLOCK_ROOT1_CONTROL_REG_DIV);
}


void disableWatchdog()
{
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();

  #endif /* EMPTY_TARGET_INIT */
}
