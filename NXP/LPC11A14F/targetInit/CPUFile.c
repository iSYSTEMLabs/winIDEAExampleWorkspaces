#include "CortexM0_LPC11xx.h"


void CPU_Init()
{
  MAINCLKSEL = 0;             //use IRC oscillator
  MAINCLKUEN = 0;
  MAINCLKUEN = 1;
  PDRUNCFG  |= 0x80;          //system PLL power down
  SYSPLLCTRL=0x03;            //P=1, M=4
  PDRUNCFG  &= ~0x80;         //system PLL power up
  while (SYSPLLSTAT & 0x01);   //wait for LOCK=1
  SYSAHBCLKDIV = 1;           //divide by 1
  MAINCLKSEL = 3;             
  MAINCLKUEN = 0;
  MAINCLKUEN = 1;             //use PLL output as system clock
}

void targetEnableInterrupts()
{
  SYST_RVR = 0x5DF0; // reload value for 1ms intervals
  SYST_CSR|=3;  //enable SysTick timer, enable SysTick exeception request
  __asm volatile ("cpsie i"); //enable interrupts
}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init(); 
  GPIO0DIR = 0xFFFFFFFF; //set up ports as output
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
