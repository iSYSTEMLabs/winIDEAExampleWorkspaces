#include "ZUBAT.h"
#include "ARMCM0.h"


//Timer 0 initialization function
void initTimer()
{
	TIMER0_CFG = 0x00000000;                      // Reset timer
  TIMER0_COUNT = 0x00000000;                    // Set timer to zero
  targetDisableInterrupts();                    // Disable interrupts
  TIMER0_COUNT = -6400;                         // Set timer0 to reach overflow every 1ms
}


//Timer0 interrupt enable function
void targetEnableInterrupts()
{
  NVIC_ISER |= (0x01 << IRQ16);                 // Enable timer interrupt
  TIMER0_CFG |= (0x01 << ENA);                  // Enable timer
}

//Timer0 interrupt disable function
void targetDisableInterrupts()
{
  TIMER0_CFG &= ~(0x01 << ENA);                 // Disable interrupt
  NVIC_ICER |= (0x01 << IRQ2);                  // Interrupt clear enable interrupt 
  NVIC_ICPR |= (0x01 << IRQ2);                  // Interrupt clear pending interrupt
}


//Hard reset function
void hardReset()                                // This function hard resets the device if any interrups are active.
{                                               // This is a temp solution until proper reset in implemented in connect script.
  if(ISCR & 0xFF)                               // Check if all interrupt flags are set
  {
    CRGA_RESET |= (0x01 << HREQ);               // Hard reset request
  }
}

//Fast clock initialization function
void CPU_Init()
{
  CRGA_CLKOCKSRC |= (0x01 << SYSCLKSEL );       // Fast clock (16MHz) enable
  CRGA_CLKOCKSRC |= (0x01 << HFRCENA);          // 16MHz RC oscillator enable
}


//Target init function
void targetInit()
{
  #ifndef EMPTY_TARGET_INIT

  CPU_Init();
  initTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

//Disable WTDG funciton
void disableWatchdog()
{
  //WDTA_STOP = 0x6DA475C3;
}

//Timer0 interrupt handler function
void __attribute__ ((interrupt ("IRQ"))) TimerInterruptHandler(void) 
{
  targetDisableInterrupts();                      // Disable interrupts
  InterruptRoutine();                             // Do what you need to do 
  TIMER0_COUNT = -6400;                           // Reset counter, this is a MUST, counter doesnt do that
  targetEnableInterrupts();                       // Enable timer0 interrupt
}