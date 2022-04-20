#include "ADuCM331.h"

extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;
#define SCB_VTOR_ADDRESS 0xE000ED08 // Vector Table Offset Register

void Reset()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  

  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    
  
  //relocate NVIC
  __asm__("cpsid i"); //disable interrupts   
  *(unsigned long *)SCB_VTOR_ADDRESS = (unsigned long)&_VTOR;
  __asm__("cpsie i"); //enable interrupts

  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

extern void InterruptRoutine();

void TimerInterruptHandler(){
  T0CLRI |= (1 << 2);
  InterruptRoutine();  
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
//    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),
   (void (*)(void))(&_estack),              // The initial stack pointer
    Reset,                                  // The reset handler
    0,                                      // Reserved
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

