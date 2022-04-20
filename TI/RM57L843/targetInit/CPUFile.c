#include "RM75L843.h"
extern void InterruptRoutine();

void targetEnableInterrupts(void)
{
  /*Stop the timer*/
  RTIGCTRL = 0;
  /*Clear the pending interupt register*/
  INTREQ0 |= 0xFFFFFFFF;//1 << RTI_CMP0_INT;
  /*Clear the timer interrupt flags*/
  RTIINTFLAG = 1;
  /*Enable the ETI CMP0 interrupt*/
  REQENASET0 |= 1 << RTI_CMP0_INT;
  /*Set the FRC0 value*/
  RTIFRC0 = 0;
  /*Set the UC0 value*/
  RTIUC0 = 0;
  /*Enable SETINT0 (compare interrupt 0)*/
  RTISETINTENA = 1 << SETINT0;
  /*Start the timer*/
  RTIGCTRL = 1;
  /*Enable IRQ*/
  __asm("cpsie i");
}


void resetTimer(void)
{
  /*Stop the timer*/
  RTIGCTRL = 0;
  /*Clear the pending interupt register*/
  INTREQ0 |= 0xFFFFFFFF;//1 << RTI_CMP0_INT;
  /*Clear the timer interrupt flags*/
  RTIINTFLAG = 1;
  /*Enable the ETI CMP0 interrupt*/
  REQENASET0 |= 1 << RTI_CMP0_INT;
  /*Set the FRC0 value*/
  RTIFRC0 = 0;
  /*Set the UC0 value*/
  RTIUC0 = 0;
  /*Enable SETINT0 (compare interrupt 0)*/
  RTISETINTENA = 1 << SETINT0;
  /*Start the timer*/
  RTIGCTRL = 1;
}


void TimerInterruptHandler()
{
  InterruptRoutine();
  resetTimer();
}


void initClocks(void)
{
  /*Enable the external oscillator*/
  CSDISCLR |= 1 << CLRCLKSR_OSC;
  /*Wait for the oscillator to settle*/
  while(!(CSVSTAT & 1 << CLKSR0V_OSC));
  /*Reset the PLLCTL1 register*/
  PLLCTL1 = 0x00000000;

  /*ClkSpeed = ((Clock/REFCLKDIV) * PLLMUL)/PLLDIV
  /*Set the REFCLKDIV*/
  PLLCTL1 |= OD << PLLDIV;
  /*Set the REFCLKDIV*/
  PLLCTL1 |= NR << REFCLKDIV;
  /*Set the PLLMUL*/
  PLLCTL1 |= PLL << PLLMUL;
  /*Disable the bypass of PLL slip*/
  PLLCTL1 |= 2 << BPOS;
  /*Set the SPREADINGRATE*/
  PLLCTL2 |= SPRING;
  /*Reset PLL1 settings*/
  PLLCTL3 = 0;
  /*Set flash waitstates to 8 HCLK cycles*/
  FRDCNTL |= 0x0F << RWAIT;
  /*Set the EEPROM waitstates*/
  EEPROM_CONFIG |= 0x0F << EWAIT;
  /*Enable the PLL*/
  CSDISCLR |= 1 << CLRCLKSR_PLL;
  /*Wait for the PLL to settle*/
  while(!(CSVSTAT & 1 << CLKSR0V_PLL));
  HCLKCNTL |= HCLK << HCLK_PRESCALER;
  /*Select Clock source 1 (PLL) as clock source*/
  GHVSRC = 0x01010001;
  GHVSRC |= 0x01010001;
}

void initTimer(void)
{
  /*Reset the timer control register*/
  RTIGCTRL = 0;
  /*INC = 0 (RTIUC0 clocks RTIFRC0), INC = 0(RTIFRC0 inc at rising edge)*/
  RTITBCTRL = 0;
  /* Reset the RTICOMPCTRL register*/
  RTICOMPCTRL = 0;
  /*Enable compare select 0*/
  //RTICOMPCTRL |= 1 << COMPSEL0;
  /*Set the FRC0 value*/
  RTIFRC0 = 0;
  /*Set the UC0 value*/
  RTIUC0 = 0;
  /*Set the CUC0 value*/
  RTICPUC0 = RTI_CUC;
  /*Set up the COMP0 regiter*/
  RTICOMP0 = RTI_CFRC;
  /*Enable SETINT0 (compare interrupt 0)*/
  RTISETINTENA = 1 << SETINT0;
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClocks();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}
