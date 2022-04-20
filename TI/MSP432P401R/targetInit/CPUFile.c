#include "MSP432.h"
#include "VectM.h"


void InitClocks(void)
{
  /* Unlocks write access to power mode register by setting a key to 695A_xxxx */
  PCMCTL0 = 0x695A0000;
  /* Current power mode is set to maximum cpu working frequency - 48 Mhz */
  PCMCTL0 |= 0x00000100;
  
  /* Unlock write access to CS registers */
  CSKEY = 0x695A;  
  /* Select pins for HFXT crystal mode operation */
  PJSEL0 |= 0xC; 
  /* Make HFXT ex. osc. for clock source and set it to 40 - 48Mhz range (110b) */  
  CSCTL2 = 0x01610000;  
  /* Enable MCLK, SMCLK and HSMCLK clocks. */
  CSCLKEN = 0x0000000E;  
  /* Wait until clocks MCLK, SMCLK and HSMCLK are in READY state and then switch the clock source */
  while(!(0x0E000000 == (CSSTAT & 0x0E000000)))
  {}  
  /* Select MCLK, SMCLK and HSMCLK. */
  CSCTL1 = 0x55;  
  /* Ascertain that clock sources MCLK, SMCLK and HSMCLK are sourced out of HFXT */
  while(!(0x0E000000 == (CSSTAT & 0x0E000000)))
  {}    
}  

void InitTimer()
{
  /* Set interrupt priority to highest */
  TA0IV = 0x0002;
  /* Select SMCLK for clock source and count mode to Up count */  
  TA0CTL = 0x0210;  
  /* Start the timer by writing a nonzero value tin timer control register */
  TA0CCR0 = 0x1400;  
}


void targetEnableInterrupts(void)
{
  /* Timer_A interrupt enable. This bit enables the TAIFG interrupt request. */
  TA0CTL |= 0x0002;
  
  INT_0_31_SET_EN     = 0x00000200; //Enables timer0A interrupt.
  INT_8_11_PRI        = 0x0000E000; //Sets interrupt priority.
  INT_0_31_CLR_PEND   = 0x00000200; //Clears interrupt pending flag. 
}


void disableWatchdog()
{
  /* Disable watchdog */
  WDTCTL = 0x5A80; 
}

void targetInit(void)
{  
  #ifndef EMPTY_TARGET_INIT

  InitClocks();  
  InitTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
