#include "EFM32GG11.h"
/*
  EFM32GG11, Cortex-M4, single core
  
  Note:  8-bit access does not work, so bitfields are used with temporary 
          variables of the same type and write-back to register 
*/


void initTimer()
{
  
  CMU.CTRL.R |= (1 << 20);    // enable HFPERCLK
  CMU.HFPERPRESCB.R |= (1 << 8); // divide clock by 2
  CMU.HFPERCLKEN0.R |= (1 << 0); // enable TIMER0 clock

  // stop timer
  TIMER0.CMD.R |= (1 << 1); 
  
  TIMER0.CTRL.R |= (1 << 0);  // count down mode
  
  TIMER0.CTRL.R |= (1 << 24); // divide HFPERCLK by 2
  
  TIMER0.TOP.R = 0x464F;  // timer reload value - 17999 - for 72MHz CPU clock
}

void initClock()
{                            
  // Enable USHFRCO clock
  CMU.OSCENCMD.R |= (1 << 10);

  // enable write to MSC controller
  while(CMU.SYNCBUSY.R & (1 << 24)); // synchronization wait
  MSC.WRITECTRL.R |= ((1 << 5) | (1 << 0)); // enable read-while-write, write to MSC controller
  
  // configure flash wait state
  while(MSC.STATUS.R & (1 << 0));
  MSC.CTRL.R |= (1 << 12);
  
  // configure read/fetch flash wait state
  while(MSC.STATUS.R & (1 << 0));
  MSC.READCTRL.R = (3 << 24); // Three wait-states inserted for eatch fetch or read transfer
  
  // generate factory calibrated 4 MHz on HFRCO
  while(CMU.SYNCBUSY.R & (1 << 24));  // wait HFRCOCTRL when it is ready for an update
  // CMU.HFRCOCTRL.R = HFRCOCAL16_4MHZ;
  CMU.HFRCOCTRL.R = HFRCOCAL16_72MHZ;
  while(CMU.SYNCBUSY.R & (1 << 24));

  // CMU_HFCLKSEL - High Frequency Clock Select Command Register
  CMU.HFCLKSEL.R = (1 << 0); // select HFRCO
}


void initITM(void)
{
  ITM_LOCK_ACCESS_REGISTER = 0xC5ACCE55; // Unlock write access to ITM
  ITM_TRACE_ENABLE_REGISTER = 0xFFFFFFFF; // Enable stimulus port 0-31
  ITM_TRACE_PRIVILEGE_REGISTER = 0x1; // Set privilege
}

void targetEnableInterrupts()
{
  TIMER0.IEN.R |= (1 << 1); // enable underflow interrupt
  TIMER0.IFC.R |= (1 << 1); // clear interrupt flag
  TIMER0.CMD.R |= (1 << 0); // start timer
  
  asm volatile("cpsie i"); // enable interrupts
  System_Control_Space_NVIC.INT_0_31_SET_EN |= (1 << 5); // ISER0 
}


void targetInit(void)
{           
  #ifndef EMPTY_TARGET_INIT

  initClock();
  initTimer();
  initITM();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}


//rt FunctionMinNetTime: toleranceInPercent = 2