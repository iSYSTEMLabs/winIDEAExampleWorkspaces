#include "MPFSxxxT.h"


void targetEnableInterrupts(void)
{
  // Disable all Hart0 global interrupts in PLIC
  for (unsigned long iRegAddress = PLIC_Hart0_IE1; iRegAddress <= PLIC_Hart0_IE6; iRegAddress += sizeof(unsigned int))
  {
    *(volatile unsigned int*)iRegAddress = 0;
  }
	
  // Set mtvec
  asm("la x28, __VECTOR_TABLE");
  asm("csrw mtvec, x28");
  
  // Set interrupt priority
  PLIC_IP_Timer1 = 7;
  
  // Set PLIC priority threshold
  PLIC_Hart0_IPT = 6; // Interrupts with priorities less or equal to 6 are masked
  
  // Enable Timer1 interrupt for Hart0 in PLIC
  PLIC_Hart0_IE3 |= PLIC_IE3_Timer1_Msk;
  
  // Enable global interrupt for M-mode
  asm("csrsi mstatus, 8");
  
  // Enable global interrupts in mie CSR
  asm("li x28, 0x800");
  asm("csrw mie, x28");
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void initClock(void)
{
  // Reset all MSS_PLL registers
  IOSCB_PLL_MSS_SOFT_RESET = SOFT_RESET_V_MAP_MASK | SOFT_RESET_NV_MAP_MASK;

  // Select RFCKL[0] as reference clock for PLL
  IOSCB_PLL_MSS_PLL_CTRL.REG_RFCLK_SEL = 0;
  
  // Configure PLL dividers (80 MHz * 1906 / 61 / 4 = 625 MHz)
  IOSCB_PLL_MSS_PLL_REF_FB.RFDIV = 61; // reference divider
  IOSCB_PLL_MSS_SSCG_REG_2.INTIN = 1906; // feedback divider
  
  // Set PLL the value of out divider
  IOSCB_PLL_MSS_PLL_DIV_0_1.POST0DIV = 1; // set PLL out divider to 1
  
  // Bypass SSMOD (Spread Spectrum Modulator)
  IOSCB_PLL_MSS_SSCG_REG_3.SSE_B = 1;
  
  // Reference clock mux selections (Select 80 MHz SCB clock)
  IOSCB_CFM_MSS_PLL_CKMUX.pll0_rfclk0_sel = PLL_CKMUX_SCB;
  IOSCB_CFM_MSS_PLL_CKMUX.pll0_rfclk1_sel = PLL_CKMUX_SCB;
  IOSCB_CFM_MSS_PLL_CKMUX.pll1_rfclk0_sel = PLL_CKMUX_SCB;
  IOSCB_CFM_MSS_PLL_CKMUX.pll1_rfclk1_sel = PLL_CKMUX_SCB;
  
  // Enable PLL core
  IOSCB_PLL_MSS_PLL_CTRL.REG_POWERDOWN_B = 1;
  
  // Set dividers: CPU: /1, AXI: /2, AHB/APB: /4
  struct CLOCK_CONFIG_CR_type SClockConfig = {0};
  SClockConfig.divider_CPU = CLOCK_CONFIG_DIV_1;
  SClockConfig.divider_AXI = CLOCK_CONFIG_DIV_2;
  SClockConfig.divider_AHB_APB = CLOCK_CONFIG_DIV_4;
  CLOCK_CONFIG_CR = SClockConfig;
  
  // Wait for PLL lock
  while (IOSCB_PLL_MSS_PLL_CTRL.LOCK == 0);
  
  // Select PLL out for MSS clock
  MSSCLKMUX.mux_sel = MUX_SEL_MSS_PLL;
}


void initTimer(void)
{
  // Load value for Timer 1 (1 ms period)
  MSTIMER_TIM1LOADVAL = 625000000 / 4 / 1000; // Timer clk is 625 MHz / 4
  
  // Set periodic mode
  MSTIMER_TIM1CONTROL.TIM1MODE = 0;
  
  // Enable Timer1 interrupts
  MSTIMER_TIM1CONTROL.TIM1INTEN = 1;
  
  // Enable the timer
  MSTIMER_TIM1CONTROL.TIM1ENABLE = 1;
}


void disableWatchdog(void)
{
}
