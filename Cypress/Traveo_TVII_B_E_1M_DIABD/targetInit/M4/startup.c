#include "startup.h"

extern unsigned long _estackB, __DATA_ROM, __DATA_RAM, __DATA_END, __BSS_START, __BSS_END;
extern int main(void);
extern void InterruptRoutine(void);

void ResetM4(void)
{
  asm ("ldr R0, =_estackB");
  asm ("mov sp, R0");
 
  unsigned volatile long *pulSrc = &__DATA_ROM;
  unsigned volatile long *pulDest = &__DATA_RAM;
  
  while( pulDest < &__DATA_END )
    *pulDest++ = *pulSrc++;

  pulDest = &__BSS_START;
  while ( pulDest < &__BSS_END )
    *pulDest++ = 0;       
    
  main();
}

__interrupt__ void TimerInterruptHandler(void)
{
}

__interrupt__ void TimerInterruptHandlerSleep(void)
{
}

__interrupt__ void RTCInterruptHandler(void)
{
}

__interrupt__ void IntDefaultHandler(void)
{
  while(1);
}

__attribute__((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estackB),               // Initial stack pointer           
  ResetM4,               // Reset handler
  IntDefaultHandler,      // NMI handler
  IntDefaultHandler,      // Hard fault handler
  IntDefaultHandler,      // MPU fault handler
  IntDefaultHandler,      // Bus fault handler
  IntDefaultHandler,      // Usage fault handler
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  IntDefaultHandler,      // SVCall handler
  IntDefaultHandler,      // Debug monitor handler
  0,                      // Reserved
  IntDefaultHandler,      // PendSV handler
  IntDefaultHandler,      // SysTick handler
};