#include "RSL10.h"
#include "RSL10_sfr.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;
extern unsigned long _isrVector;

// Reset handler must be located right after ISR table in order to boot properly.
void Reset() __attribute__ ((naked));
void Reset()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_sdata;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    
  
  main();
}

void IntDefaultHandler(void)
{
  while(1)
  {
  }
}

void TimerInterruptHandler(void) 
{
  TIMER.TIMER_CTRL_0.B.TIMER_START = 0x0; // Stop the timer
  
  NVIC.NVIC_ICPR0.B.TIMER0 = 0x1; // Clear any pending in NVIC on TIMER0
  
  InterruptRoutine();
}

__attribute__((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),              // The initial stack pointer
    Reset,                                  // The reset handler
    0,                                      // NMI
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    IntDefaultHandler,                      // The PendSV handler
    IntDefaultHandler,                      // The SysTick handler
    IntDefaultHandler,                      // Wake-up timer
    IntDefaultHandler,                      // External Interrupt 0 (P0.3)
    IntDefaultHandler,                      // External Interrupt 1 (P0.4)
    IntDefaultHandler,                      // Watchdog timer 
    TimerInterruptHandler,                  // General-Purpose Timer 0
    IntDefaultHandler,                      // ADC
    IntDefaultHandler,                      // Flash
    IntDefaultHandler,                      // SPI
    IntDefaultHandler,                      // LIN0: LIN header or frame interrupt
    IntDefaultHandler,                      // LIN1: LIN error detected interrupt
    IntDefaultHandler,                      // LIN2: LIN sleep or wake-up event interrupt
    IntDefaultHandler,                      // High voltage interface interrupt
    IntDefaultHandler,                      // CALOSC: oscillator calibration interrupt
    IntDefaultHandler                       // SRAM ECC interrupt
}; 

