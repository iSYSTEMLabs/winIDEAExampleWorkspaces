#include "lpc1549.h"
#include "LPC15xx.h"


void maxClockInit()
{
  LPC_SYSCON->PDRUNCFG = LPC_SYSCON->PDRUNCFG & ~(1<<22); //Enable PLL. 
  LPC_SYSCON->SYSPLLCLKSEL = 0x0; //IRC OSC
  LPC_SYSCON->SYSPLLCTRL = 0x45; //72MHz(max) - from UM example 
  while(LPC_SYSCON->SYSPLLSTAT == 0); //wait for lock
  LPC_SYSCON->SYSAHBCLKDIV = 0x1; //SYS clock divided by 1
  LPC_SYSCON->MAINCLKSELB = 0x1; //Select SYSPLL as a clock 
}  

void sysTickInit()
{
  SysTick->CTRL = SysTick->CTRL | (1<<2); //Select CPU clock as source
  LPC_SYSCON->SYSTICKCLKDIV = 1; // Do not divide systick clock
  SysTick->LOAD = 0x3000; //Set load value for 1ms
  SysTick->CTRL = SysTick->CTRL | (1<<0); //Enable systick timer
}


void targetEnableInterrupts()
{
  SysTick->CTRL = SysTick->CTRL | (1<<1); //Enable systick interrupts
  
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  maxClockInit();
  sysTickInit();  
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
