#include "Kinetis-KV46.h"

//rt FunctionMinGrossTime: toleranceInPercent = 1
//rt FunctionMaxGrossTime: toleranceInPercent = 1
//rt FunctionMinNetTime: toleranceInPercent = 1 
//rt FunctionMaxNetTime: toleranceInPercent = 1



void ITMInit(void)
{
   
}   

void targetEnableInterrupts(void)
{
  INT_32_63_SET_EN |= (1 << INT_32_63_SET_EN_PIT0); /* Interrupt vector assignments */ 
  asm("CPSIE i"); /* Enable IRQ by clearing PRIMASK */
  PIT_TCTRL |= (1 << PIT_TCTRL_TE); /*Timer Enable*/
  PIT_TCTRL |= (1 << PIT_TCTRL_TIE); /*Timer Interrupt Enable*/
}

void targetDisableInterrupts(void)
{
  PIT_TCTRL &= ~(1 << PIT_TCTRL_TIE); /*Timer Interrupt Disable*/
  asm("CPSID i"); /* Enable IRQ by clearing PRIMASK */
}

void initClock()
{
  
  OSC_CR |= (1 << OSC_CR_ERCLKEN);  /*External reference clock is enabled.*/
  
  /* FEI transition to FBE mode */
  
  MCG_C2 |= (0x2 << MCG_C2_RANGE);     /* Very high frequency range selected for the crystal oscillator. */
  MCG_C2 |= (1 << MCG_C2_HGO);         /* Configure crystal oscillator for high-gain operation. */
  MCG_C2 |= (1 << MCG_C2_EREFS);       /* Oscillator requested. */
  
  MCG_C1 |= (0x2 << MCG_C1_CLKS);      /* External reference clock is selected */
  MCG_C1 &= ~(1 << MCG_C1_IREFS);      /* External reference clock is selected.*/
  MCG_C1 |= (0x4 << MCG_C1_FRDIV);     /* Divide Factor is 16*/

  while(!(MCG_S &(1 << MCG_S_OSCINIT0)));         /* Wait for crystal selected by C2[EREFS0] to be initialized */
  while(MCG_S &(1 << MCG_S_IREFST));              /* Wait for signal that external reference is the current source for the reference clock */
  while((MCG_S &(0x3 << MCG_S_CLKST)) != 0x08);   /* Wait for signal indicating that the external reference clock is selected to feed MCGOUTCLK. */

  MCG_C5 &= ~(0x7 << MCG_C5_PRDIV);  /* Divide factor 1 */
  
  MCG_C6 &= ~(0x1F << MCG_C6_VDIV); /* Multiply factor 30 */
  MCG_C6 |= (0xE << MCG_C6_VDIV);
  
  SIM_CLKDIV1 &= ~(0xF << SIM_CLKDIV1_OUTDIV4);
  SIM_CLKDIV1 |= (0x5 << SIM_CLKDIV1_OUTDIV4); /* Divide factor 6 */
  
  /* FBE transition to BLPE */
  
  MCG_C2 |= (1 << MCG_C2_LP); /* Low power selected */
  MCG_C6 |= (1 << MCG_C6_PLLS); /* PLL is selected*/
  

  
  /* Switch to PBE */
  MCG_C2 &= ~(1 << MCG_C2_LP); 
  
  while((MCG_S & (1 << MCG_S_PLLST)) != 0x20);  /* Wait until current source for the PLLS clock is the PLL */
  while((MCG_S & (1 << MCG_S_LOCK0)) != 0x40);  /* Wait for indication that the PLL has acquired lock */
  
  /* PBE transition to PEE */
  
  MCG_C1 &= ~(0x3 << MCG_C1_CLKS);  /* PLL system clock source */
  while((MCG_S & (0x3 << MCG_S_CLKST)) != 0xC);   /* Wait for indication that the PLL output is selected to feed MCGOUTCLK in the current clock mode*/

}  

void GPIOPinToggle()
{
  GPIO_PTOR |= (1 << GPIO_PIN);
} 

void initGPIO()
{
  SIM_SCG5 |= (1 << SIM_SCG5_PORTE);    /* enable clock for PORTE */
  PORTE_PCR4 |= (1 << PORTE_PCR4_MUX);  /* set as GPIO */
  GPIO_PDDR = (1 << GPIO_PIN);          /* set as output */
}

void initTimer()
{
  SIM_SGC5 = (1 << SIM_SGC5_PIT);   /* PIT Clock Gate Control enable */
  PIT_MCR &= ~(1 << PIT_MCR_MDIS); /*Module Disable - (PIT section)*/
  PIT_LDVAL = 0x4E1F;               /* Timer Start Value - 1ms */  


}
                     
void targetInit(void)
{ 
  #ifndef EMPTY_TARGET_INIT
  initClock();
  initGPIO();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

  //rt TimerInterrupt: profilerFunctionName=ProfilerC_Interrupt, timeoutMSec=1.000, maxDeltaPeriodPct=5
  //rt DaqTimerInterrupt: daqItem=daqInterruptCounter, periodInMicroSeconds=50000, maxDeltaPeriodInPercents=4


void profilerAddTestMessages(void)
{

}

void disableWatchdog()
{
    *((unsigned short *)0x4005200E) = 0xC520;     // Unlock WDOG
    *((unsigned short *)0x4005200E) = 0xD928;     // Unlock WDOG
    *((unsigned short *)0x40052000) = 0;          // WDOG_STCTRL
}
