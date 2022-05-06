#include "SR5E1.h"


void disableWatchdog()
{
  
}


void enableSecondaryCores()
{
  C2_VTOR_INIT_REG = C2_BOOT_ADDRESS;
  C2_BOOT_CTRL_REG |= 0x03;
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT
  enableSecondaryCores();
  #endif /* EMPTY_TARGET_INIT */
}