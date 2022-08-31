#include "S32R372.h"

void disableWatchdog()
{

}


void enableSecondaryCore()
{
  // Set Z7B to run in all modes except Reset, Halt and Stop
  MC_ME_CCTL3 = 0xFE;
  // Set Z7B boot address to 0x01040000 and set RMC bit
  MC_ME_CADDR3 = 0x50822000 | 1;
  
  // Request transition into DRUN mode
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_KEY;
  MC_ME_MCTL = ( MC_ME_MCTL_DRUN << MC_ME_MCTL_TARGET_MODE ) | MC_ME_INVERTED_KEY;
  
  // Wait for transition to finish
  while (MC_ME_GS & (1 << MC_ME_GS_S_MTRANS) == 1)
  {
    
  }
  
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  enableSecondaryCore();

  #endif /* EMPTY_TARGET_INIT */
}