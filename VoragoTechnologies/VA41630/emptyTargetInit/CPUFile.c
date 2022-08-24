#include "VA41630.h"


void initInterrupts() {
  // Interrupts for TIM0, SPI, UART, ..., are left enabled by the bootloader, best to disable them all here
  // Some periperals are also left initialised and running, such as TIM0
  NVIC_INT_0_31_CLR_EN = 0xFFFFFFFF;
  NVIC_INT_32_63_CLR_EN = 0xFFFFFFFF;
  NVIC_INT_64_95_CLR_EN = 0xFFFFFFFF;
}

void initITM() {
  ITM_LOCK_ACCESS_REGISTER     = 0xC5ACCE55;  // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER    = 0xFFFFFFFF;  // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1;         // Set privilege
}


void initTimer() {
  SYSTICK_RVR = 100000; // 100k/100MHz = 1ms
  SYSTICK_CVR = 0;
  SYSTICK_CSR = (1 << SYSTICK_CSR_ENABLE)  |
                (1 << SYSTICK_CSR_TICKINT) |
                (1 << SYSTICK_CSR_CLKSOURCE);
}

void targetEnableInterrupts() {
  __asm volatile ("cpsie i");
}


void targetInit() {
  #ifndef EMPTY_TARGET_INIT

  initInterrupts();
  initITM();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog() {
  
}
