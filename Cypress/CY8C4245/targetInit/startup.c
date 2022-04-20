#include "main.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void Reset()
{
  asm("ldr R0, =_estack");
  asm("mov sp, R0");
  
  volatile unsigned long *pdwSrc = &_etext;
  volatile unsigned long *pdwDest = &_data;
  
  while( pdwDest < &_edata )
    *pdwDest++ = *pdwSrc++;
  
  pdwDest = &_bss;
  while ( pdwDest < &_ebss )
    *pdwDest++ = 0;
  
  main();
}

void nmiHandler()         { asm("b ."); }
void hardFaultHandler()   { asm("b ."); }
void svCallHanlder()      { asm("b ."); }
void pendSVHandler()      { asm("b ."); }
void sysTickHandler()     { asm("b ."); }

void TimerInterruptHandler()
{
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack), // The initial stack pointer
  Reset,                      // The reset handler
  nmiHandler,                 // The NMI handler
  hardFaultHandler,           // The hard fault handler
  0,                          // Reserved
  0,                          // Reserved
  0,                          // Reserved
  0,                          // Reserved
  0,                          // Reserved
  0,                          // Reserved
  0,                          // Reserved
  svCallHanlder,              // SVCall handler
  0,                          // Reserved
  0,                          // Reserved
  pendSVHandler,              // The PendSV handler
  sysTickHandler,             // The SysTick handler
};