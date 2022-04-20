#include "M2S050.h"


void traceSettings()
{
  PERIPH_CLK_MUX_SEL_CR = PERIPH_CLK_MUX_SEL_CR | TRACECLK_DIV2_SEL;
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  traceSettings();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
