#include "MKL25Z4.h"


/*
  Core is running on 48 MHz internal oscillator, becouse MCU does not support PLL and ext. osc. is 8 MHz   
*/
void initClock(){
  MCG_MC |= (1 << MCG_MC_HIRCEN);
  SIM_CLKDIV1 &= ~(0xF << SIM_CLKDIV1_OUTDIV1);
  SIM_CLKDIV1 |= (1 << SIM_CLKDIV1_OUTDIV4);
  MCG_C1 &= ~(0b11 << MCG_C1_CLKS);
}


void initTimer(){
  SIM_SCGC6 |= (1 << SIM_SCGC6_PIT0);         // Enable clock for PIT0
  PIT0_MCR |= (1 << PIT0_MCR_MDIS);           // Disable clock
  PIT0_LDVAL0 = 0x5DC0;                       // Load value
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TIE);      // Enable interrupt
  PIT0_TCTRL0 |= (1 << PIT0_TCTRL0_TEN);      // Enable timer
  PIT0_MCR &= ~(1 << PIT0_MCR_MDIS);          // Enable clock
}


void CPU_Init(void)
{
  SIM_COPC = 0; //disable watchdog
}

void targetEnableInterrupts(void)
{
  __asm__("CPSIE i");
  NVIC_INT_0_31_SET_EN |= (1 << NIVC_PIT0); 
}


void targetInit(void)
{   
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  initClock();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
  SIM_COPC &= ~((1 << 2) | (1 << 3));
}
