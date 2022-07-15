#include "AWR2944.h"


void initClock(void) {
  // Make sure CPU isn't using PLL by switching to the default clock
  MSS_CR5_CLK_SRC_SEL = 0x000;
  
  // Crystal is 40MHz, max fCPU is 300MHz
  // fDCO = fIN * M/(N+1) = 40MHz * 600/40 = 600MHz
  // fOUT = fDCO * 1/M2 = 600MHz * 1/2 = 300MHz
  MSS_TOPRCM_PLL_CORE_M2NDIV = (39 << MSS_TOPRCM_PLL_CORE_M2NDIV_N) |
                               (2  << MSS_TOPRCM_PLL_CORE_M2NDIV_M2);
  MSS_TOPRCM_PLL_CORE_MN2DIV = (600 << MSS_TOPRCM_PLL_CORE_MN2DIV_M);
  
  MSS_TOPRCM_PLL_CORE_CLKCTRL &= ~(1 << MSS_TOPRCM_PLL_CORE_CLKCTRL_IDLE); // Enable PLL
  MSS_TOPRCM_PLL_CORE_TENABLE = 1;  // Latch N and M values (has to be toggled)
  MSS_TOPRCM_PLL_CORE_TENABLE = 0;
  MSS_TOPRCM_PLL_CORE_CLKCTRL |= (1 << MSS_TOPRCM_PLL_CORE_CKLCTRL_TINTZ); // Soft reset PLL
  MSS_TOPRCM_PLL_CORE_TENABLEDIV = 1; // Latch M2 value (has to be toggled)
  MSS_TOPRCM_PLL_CORE_TENABLEDIV = 0;
  while(!(MSS_TOPRCM_PLL_CORE_STATUS & (1 << MSS_TOPRCM_PLL_CORE_STATUS_PHASELOCK))); // Wait until PLL gets lock
  
  // Disable additional output divider
  MSS_TOPRCM_PLL_CORE_CLKOUT2 = (1 << MSS_TOPRCM_PLL_CORE_CLKOUT2_DIV);
  MSS_TOPRCM_PLL_CORE_HSDIVIDER |= (1 << MSS_TOPRCM_PLL_CORE_HSDIVIDER_TENABLEDIV);
  MSS_TOPRCM_PLL_CORE_HSDIVIDER &= ~(1 << MSS_TOPRCM_PLL_CORE_HSDIVIDER_TENABLEDIV);
  MSS_TOPRCM_PLL_CORE_CLKOUT2 |= (1 << MSS_TOPRCM_PLL_CORE_CLKOUT2_GATE_CTRL);
  
  // Select PLL_CORE as the input clock source to the CPU
  MSS_CR5_CLK_SRC_SEL = 0x222;
}


__attribute__((interrupt("irq"))) __attribute__((target("arm")))
void extern TimerInterruptHandler(void);

void initTimer(void) {
  // Make sure counter 0 is stopped
  MSS_RTIA_RTIGCTRL &= ~(1 << MSS_RTIA_RTIGCTRL_CNT0EN);
  
  // Unused comparators use the powered down timer
  MSS_RTIA_RTICOMPCTRL = (1 << MSS_RTIA_RTICOMPCTRL_COMPSEL1) |
                         (1 << MSS_RTIA_RTICOMPCTRL_COMPSEL2) |
                         (1 << MSS_RTIA_RTICOMPCTRL_COMPSEL3);
  
  // Select SYS_CLK (fCPU) as input clock
  MSS_RTIA_CLK_SRC_SEL = 0x222;
  
  // Disable interrupts for timer 0 and clear the interrupt flag
  MSS_RTIA_RTICLEARINTENA = (1 << MSS_RTIA_RTICLEARINTENA_CLEARINT0);
  MSS_RTIA_RTIINTFLAG = (1 << MSS_RTIA_RTIINTFLAG_INT0);
  
  // System clock is half of CPU clock, so fSYS = 300MHz/2 = 150MHz
  // Set the input clock divider so that 150k/150MHz = 1ms
  MSS_RTIA_RTICPUC0 = 150000;
  
  // Compare with 1, increment by 1, set current value to 0
  MSS_RTIA_RTICOMP0 = 1;
  MSS_RTIA_RTIUDCP0 = 1;
  MSS_RTIA_RTIFRC0 = 0;
  
  // Enable timer compare match interrupt
  MSS_RTIA_RTISETINTENA = (1 << MSS_RTIA_RTISETINTENA_SETINT0);
  
  // Enable VIM timer interrupt
  MSS_VIM_R5A_INTVECTOR_3 = (unsigned long)TimerInterruptHandler;
  MSS_VIM_R5A_INTR_EN_SET = (1 << MSS_VIM_R5A_INTR_EN_SET_MSS_RTIA_INT0);
}

void targetEnableInterrupts(void) {
  __asm volatile ("cpsie i");
  MSS_RTIA_RTIGCTRL |= (1 << MSS_RTIA_RTIGCTRL_CNT0EN); // Start timer
}


void targetInit(void) {
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog(void) {
  
}
