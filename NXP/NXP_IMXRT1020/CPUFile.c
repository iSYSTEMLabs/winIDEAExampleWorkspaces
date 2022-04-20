#include "imxrt1020_sfr.h"


extern unsigned long _isrVectorStart;

void initINT()
{
  /*Set priority of interrupt 100 (GPT1) to highest.*/
  System_Control_Space_NVIC.INT_100_103_PRI.R |= 0xFF;
  /*Enable interrupt 100.*/
  System_Control_Space_NVIC.INT_96_127_SET_EN |= (0x1<<4);
}


void initTimer()
{
  /*Enable GPT1 serial clock.*/
  CCM_CCGR1 |= (0x03 << 22);
  /*Set peripheral clock as clock source*/
  GPT1_CR |= (0x01 << 6);
  /*Enable Output Compare 1 interrupt*/
  GPT1_IR |= 0x01;
  /*Set compare 1 value to ??*/
  GPT1_OCR1 = 23000;
}

void initClock()
{
  /*Power up the external osc*/
  CCM_ANALOG_MISC0_CLR |= (0x01 << 30);
  /*Set osc delay to 5ms*/
  CCM_ANALOG_MISC0_SET |= (0x5 << 26);
  /*Wait until external osc is stable*/
  while(!(XTALOSC24M_LOWPWR_CTRL & ~(0x01 << 16)));
  /*Set external osc as 24 MHz source*/
  XTALOSC24M_LOWPWR_CTRL_CLR |= (0x01 << 0x04);
  /*This pretty much finishes clock initialization. PLL2 gets set to 528 MHz and 
    goes directly to the CPU by default.*/
}

void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  initINT();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void targetEnableInterrupts()
{
  /*Start timer.*/
  GPT1_CR |= 0x01;
  /*Enable interrupts*/
  __asm__("cpsie i");
}

void targetDisableInterrupts()
{
  /*Disable interrupts*/
  __asm__("cpsid i");
  /*Stop timer.*/
  GPT1_CR &= ~0x01;
}

void disableWatchdog()
{
  unsigned int regVal;
  
  /*Disable the WDT.*/
  WDOG3_TOVAL |= 0x80;
  regVal = WDOG3_CS;
  regVal &= ~(0xA0);
  regVal |= (0x20);
  WDOG3_CS = regVal;
}
