#include "startup.h"

extern unsigned long _estackB, _text, _etext, _data, _edata, _bss, _ebss, _cm4Vect;
extern int main(void);
extern void InterruptRoutine(void);

__attribute__ ((naked))
void ResetM4()
{
  // Move stack pointer to _estack address
  asm volatile ("ldr R0, =_estackB");
  asm volatile ("mov sp, R0");
  
  unsigned volatile long *pulSrc = &_etext;
  unsigned volatile long *pulDest = &_data;
  
  VTOR = (unsigned long)&_cm4Vect;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void IntDefaultHandler(void)
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