#include "ZEPHYR.h"
#include "main.h"


void __attribute__ ((interrupt ("IRQ"))) TimerInterruptHandler(void) 
{
  targetDisableInterrupts();
  /*Set timer 3 L value to 32000 (input clock = 12 MHz)*/
  TIMER3_CNTVAL = 0x2EE0;
  InterruptRoutine();
  targetEnableInterrupts();
}

void targetEnableInterrupts()
{
  /*Enable timer 3 L interrupt*/
  NVIC_ISER |= (0x01 << IRQ4);
  /*Clear overflow flag*/
  TIMER3_CSRL |= (0x01 << OFLL);
  /*Enable timer 3 L*/
  TIMER3_CSRL |= (0x01 << ENAL);
}

void targetDisableInterrupts()
{
  /*Disable timer 3 L*/
  TIMER3_CSRL &= ~(0x01 << ENAL);
  /*Disable interrupt*/
  NVIC_ICER |= (0x01 << IRQ4);
  /*Clear pending interrupts*/
  NVIC_ICPR |= (0x01 << IRQ4);
}


void disableWatchdog()
{
}

/*Timer counts down only. Set the counter value and when it reaches 0 it triggers interrupt.*/
void initTimer()
{
  /*Clear timer registers (CPU has no reset line and bits stay stuck until power cycle)*/
  TIMER3_CFGL = 0x00000000;
  TIMER3_CSRL = 0x00000000;
  TIMER3_CNTVAL = 0x0000000;
  
  TIMER3_RLDVAL = 0x00000000;
  
  targetDisableInterrupts();
  /*Set timer 3 in 16 bit mode*/
  TIMER3_CFGL |= (0x01 << TMRCFG);
  
  /*Set timer 3 L value to 32000 (input clock = 12 MHz)*/
  TIMER3_CNTVAL = 0x2EE0;

  /*Enable timer 3 L overflow interrupts*/
  TIMER3_CSRL |= (0x01 << IRQENAL);
  
}

/*Clock source is 32 MHz external osc. Device has no PLL and maximum clock is 32 MHz*/
void initClock(void)
{
  /*Change external osc. speed to 32MHz*/
  CRGA_CLKOCKCFG |= (0x01 << CRGA_HFXOFREQ);
  /*Enable 32 MHz source*/
  CRGA_CLKOCKSRC |= (0x01 << CRGA_HFXOENA);
  /*Change clock source to 32MHz osc.*/
  CRGA_CLKOCKSRC |= (0x01 << CRGA_HFCLKSELSTS);
  
} 


/*This function hard resets the device if any interrups are active.
  This is a temp solution until proper reset in implemented in connect script.*/
void hardReset()
{
  if(ISCR & 0xFF)
  {
    CRGA_HARDRST |= 0x01;
  }
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();      
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}
