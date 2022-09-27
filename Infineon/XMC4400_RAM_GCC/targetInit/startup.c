#include "XMC4400.h"

extern int main(void);
extern void InterruptRoutine(void);
extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

void SysTickHandler(void);
void IntDefaultHandler(void);
void Reset(void);

__attribute__ ((section(".isr_vector")))
void (* const g_ISRTable[])(void) =
{
  (void (*)(void))&_estack,               // Initial stack pointer
                             
  Reset,                  // Reset handler
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
  SysTickHandler,      // SysTick handler
};


void Reset()
{

  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  VTOR = (unsigned long)g_ISRTable;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void SysTickHandler(void)
{
  __asm volatile ("cpsid i");
  InterruptRoutine();
  PPB_NVIC_ICSR |= (1 << 25);
  __asm volatile ("cpsie i");
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}







