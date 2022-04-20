#include "TriCore.h"
#include "main.h"


void enableSecondaryCores()
{
  PC1 = 0xA0000800;           //reset address for CPU1
  PC2 = 0xA0001000;          //reset address for CPU2
  CPU1_SYSCON = 0;
  CPU2_SYSCON = 0;
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCores();

  #endif /* EMPTY_TARGET_INIT */
}


/* This function disables watchdog timers that are enabled by default */
void disableWatchdog()
{
}
