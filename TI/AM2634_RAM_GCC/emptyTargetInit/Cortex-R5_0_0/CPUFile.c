#include "AM2634.h" 


void disableWatchdog(void)
{
  /*Disabled by script.*/
}


void enableSecondaryCore()
{
  /*Secondary cores are already booted,
    only thing needed is core reset for all secondary cores.*/
  MSS_RCM_R5SS0_CORE1_LRST_CTRL = 0x07;
  MSS_RCM_R5SS1_CORE0_LRST_CTRL = 0x07;
  MSS_RCM_R5SS1_CORE1_LRST_CTRL = 0x07;
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCore();

  #endif /* EMPTY_TARGET_INIT */
}
