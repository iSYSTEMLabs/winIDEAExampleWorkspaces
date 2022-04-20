#include "nRF52840.h"

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
  __asm__("ldr sp,=_estack");
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  

  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

void TimerInterruptHandler()
{
  TIMER0_TASKS_CLEAR = 1; //reset timer to 0
  TIMER0_TASKS_EVENTS_COMPARE0 = 0; //clear interrupt
  InterruptRoutine();
  TIMER0_TASKS_START = 1; // start timer
}

typedef void (*pfnISR)(void);

__attribute__ ((section(".isr_vector")))
struct SISRType
{
  union
  {
    pfnISR        m_pfnISR;
    unsigned long m_dword;
  };
}g_ISRTable[] =
{
  (unsigned long)& _estack,     // Initial stack pointer                            
  Reset,                        // Reset handler
  IntDefaultHandler,            // NMI handler
  IntDefaultHandler,            // Hard fault handler
  IntDefaultHandler,            // MPU fault handler
  IntDefaultHandler,            // Bus fault handler
  IntDefaultHandler,            // Usage fault handler
  0,                            // Reserved
  0,                            // Reserved
  0,                            // Reserved
  0,                            // Reserved
  IntDefaultHandler,            // SVCall handler
  IntDefaultHandler,            // Debug monitor handler
  0,                            // Reserved
  IntDefaultHandler,            // PendSV handler
  IntDefaultHandler,            // SysTick handler
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  IntDefaultHandler,
  TimerInterruptHandler
};

