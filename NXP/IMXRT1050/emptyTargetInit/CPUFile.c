#include "IMXRT1050.h"


void initClock()
{
  // VDD_SOC needs to be at least 1.25V in order to reach 600MHz
  DCDC_REG3 &= ~(0b1111 << DCDC_REG3_TRG);
  DCDC_REG3 |= (0x12 << DCDC_REG3_TRG);
  
  // Temporarily switch cpu clock to reference clock (crystal) of ARM_PLL (PLL1)
  CCM_CBCMR |= (0b01 << CCM_CBCMR_PERIPH_CLK2_SEL);
  CCM_CBCDR |= (1 << CCM_CBCDR_PERIPH_CLK_SEL);

  // Set up ARM_PLL and wait for lock
  // fOUT = fIN * DIV_SELECT/4 -> DIV_SELECT = 4fOUT/fIN = 4*600/24 = 100
  CCM_ANALOG_PLL_ARM = (1 << CCM_ANALOG_PLL_ARM_ENABLE) | 100;
  while(!(CCM_ANALOG_PLL_ARM & (1 << CCM_ANALOG_PLL_ARM_LOCK)));
  
  // Switch cpu clock to ARM_PLL output
  CCM_CBCDR &= ~(1 << CCM_CBCDR_PERIPH_CLK_SEL);
}


void initTimer(){
  SYSTICK_RVR  = 600000;  // 600k/600MHz = 1ms
  SYSTICK_CVR = 0;
  SYSTICK_CSR = (1 << SYSTICK_CSR_ENABLE) |
                (1 << SYSTICK_CSR_TICKINT) |
                (1 << SYSTICK_CSR_CLKSOURCE);
}

void initITM(void) {
  ITM_LOCK_ACCESS_REGISTER      = 0xC5ACCE55; // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER     = 0xFFFFFFFF; // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER  = 0x1;        // Set privilege
}

void targetEnableInterrupts(void) {
  __asm volatile ("cpsie i");
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  initITM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog() {
  WDOG3_CNT = 0xD928C520; // Unlock watchdog
  WDOG3_CS   = 0;         // Disable watchdog
}
