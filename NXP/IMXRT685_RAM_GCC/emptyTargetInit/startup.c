#define SCB_VTOR *((volatile unsigned long*)0xE000ED08)
#include "iMXRT685_sfr.h"

__attribute__ ((naked)) __attribute__((optimize("align-functions=16"))) void Reset_Handler();
void TimerInterruptHandler();

extern int main(void);

extern unsigned long __stack;
extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;

void IntDefaultHandler()
{
  while(1);
}

void NMIHandler()
{
  while(1);
}

void HardFaultHandler()
{
  while(1);
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&__stack),  // Initial stack pointer
  Reset_Handler,                       // Reset handler
  NMIHandler,                  // NMI handler
  HardFaultHandler,            // Hard fault handler
  IntDefaultHandler,           
  IntDefaultHandler,           
  IntDefaultHandler,           
  0,                           
  0,                           
  0,                           
  0,                            
  IntDefaultHandler,           
  IntDefaultHandler,           
  0,                           
  IntDefaultHandler,           
  IntDefaultHandler,
  
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  TimerInterruptHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler
};

__attribute__ ((naked)) __attribute__((optimize("align-functions=16")))
void Reset_Handler()
{
  SCB_VTOR = 0x20000000;
  __asm__("ldr R0, =__stack");
  __asm__("mov sp, R0");

  volatile unsigned long *pulSrc = &__etext;
  volatile unsigned long *pulDest = &__data_start__;
  
  while( pulDest < &__data_end__ )
    *pulDest++ = *pulSrc++;
  
  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__ )
    *pulDest++ = 0;       
  
  main();
}

void TimerInterruptHandler()
{
  InterruptRoutine();
  CTIMER0.IR.B.MR0INT = 1;
}