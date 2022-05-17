#include "TDA4VM.h" 


void disableWatchdog(void)
{
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  __asm(" mov x0, #3 << 20        ");
  __asm(" msr cpacr_el1, x0       ");    /* Enable FP/SIMD at EL1 */

  __asm(" mov x0, #3 << 20        ");
  __asm(" msr CPTR_EL2, x0       ");    // no fp trapping

  __asm(" mov x0, #3 << 20        ");
  __asm(" msr CPTR_EL3, x0       ");    // no fp trapping


  #endif /* EMPTY_TARGET_INIT */
}
