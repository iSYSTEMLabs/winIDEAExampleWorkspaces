#include "CortexM0_LPC13xx.h"


void CPU_Init()
{
  MAINCLKSEL = 0;             //use IRC oscillator
  PDRUNCFG  |= 0xA0;          //system PLL power down
  
  SYSPLLCLKSEL = 1;           //select external 12 MHz oscillator
  SYSPLLCTRL=0x25;            //P=2, M=6
  PDRUNCFG  &= ~0xA0;         //system PLL and ext oscillator power up
  while(!(SYSPLLSTAT & 0x01));   //wait for LOCK=1
  SYSAHBCLKDIV = 1;           //divide by 1
  MAINCLKSEL = 3;             
  
  //setup trace
  SYSAHBCLKCTRL = 0x0001005F;
  TRACECLKDIV = 0x1;
  IOCON_PIO0_9 = 0x3;
  
  //set up ports as output
  GPIO_DIR0 |= (1 << 7); // set pin P0_7 as output
  
}

void targetEnableInterrupts()
{        
  SYST_RVR = 71999; // reload value for 1ms intervals
  SYST_CSR |= 7;  //enable SysTick timer, enable SysTick interrupt, CPU clock

}


void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
