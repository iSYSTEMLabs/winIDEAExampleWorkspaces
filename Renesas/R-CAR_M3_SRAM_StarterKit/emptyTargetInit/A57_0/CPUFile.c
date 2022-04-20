#include "rcar_m3.h"


unsigned int CoreStop;


// By default A57 core traps all accesses to SVE, SIMD and
// floating point functionality.
// To enable float operations we need to disable trapping
// of those accesses (TFP bit in CPTR_EL3).
void enableVFPRegistersAccess()
{                          
  asm("MRS X0, CPTR_EL3"); 
  asm("LDR X1, =0xFFFFFBFF");
  asm("AND X0, X0, X1");
  asm("MSR CPTR_EL3, X0");
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT


  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
