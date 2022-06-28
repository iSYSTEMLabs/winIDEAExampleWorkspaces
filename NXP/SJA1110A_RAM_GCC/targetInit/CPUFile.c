#include "SJA1110A.h"


void initITM() {
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55;  // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1;     // Set privilege
}


void initTimer() {
  SYSTICK_RVR = 200000; // 200k/200MHz = 1ms
  SYSTICK_CVR = 0;
  SYSTICK_CSR = (1 << SYSTICK_CSR_ENABLE) |
                (1 << SYSTICK_CSR_TICKINT) |
                (1 << SYSTICK_CSR_CLKSOURCE);
}

void targetEnableInterrupts() {
  __asm volatile ("cpsie i");
}


void targetInit() {
  #ifndef EMPTY_TARGET_INIT

  initITM();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog() {
  SWT_CR = 0;
}
