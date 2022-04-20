#include "startup.h"


extern unsigned long _estackA, _text, _etext, _data, _edata, _bss, _ebss, _isrVectAddr;
extern int main(void);
extern void InterruptRoutine(void);

__attribute__ ((naked))
void ResetM0()
{
  // Move stack pointer to _estack address
  asm volatile ("ldr R0, =_estackA");
  asm volatile ("mov sp, R0");
 
  VTOR = &_isrVectAddr; // Move vector table
  
  unsigned volatile long *pulSrc = &_etext;
  unsigned volatile long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void TimerInterruptHandler(void)
{
  TCPWM0_GRP0_CNT0_INTR = 0x00000003; // Clear CC0_MATCH flag
  TCPWM0_GRP0_CNT0_COUNTER = 0x00000000; // Reset COUNTER0
  InterruptRoutine();
}

void IntDefaultHandler(void)
{
  while(1);
}

void TimerInterruptHandlerSleep(void)
{
  IntDefaultHandler();
}

void RTCInterruptHandler(void)
{
  IntDefaultHandler();
}

__attribute__((section(".isr_vector")))
const unsigned long g_adwVectors[] =
{
  (unsigned long)(&_estackA),               // Initial stack pointer
  (unsigned long)ResetM0,                  // Reset handler
  (unsigned long)IntDefaultHandler,      // NMI handler
  (unsigned long)IntDefaultHandler,      // Hard fault handler
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  (unsigned long)IntDefaultHandler,      // SVCall handler
  0,                      // Reserved
  0,                      // Reserved
  (unsigned long)IntDefaultHandler,      // PendSV handler
  (unsigned long)IntDefaultHandler,      // SysTick handler
  /* External interrupts */
  (unsigned long)IntDefaultHandler,            // Unconfigured
  (unsigned long)IntDefaultHandler,            // Unconfigured
  (unsigned long)RTCInterruptHandler,          // BACKUP / RTC
  (unsigned long)TimerInterruptHandler,        // TCPWM0_GRP0_CNT0
  (unsigned long)IntDefaultHandler,            // Unconfigured
  (unsigned long)IntDefaultHandler,            // Unconfigured
  (unsigned long)IntDefaultHandler,            // Unconfigured
  (unsigned long)TimerInterruptHandlerSleep,   // TCPWM0_GRP2_CNT0
  /* Internal (SW only) interrupts */
  (unsigned long)IntDefaultHandler,       // Unconfigured
  (unsigned long)IntDefaultHandler,       // Unconfigured
  (unsigned long)IntDefaultHandler,       // Unconfigured
  (unsigned long)IntDefaultHandler,       // Unconfigured  
  (unsigned long)IntDefaultHandler,       // Unconfigured
  (unsigned long)IntDefaultHandler,       // Unconfigured
  (unsigned long)IntDefaultHandler,       // Unconfigured
  (unsigned long)IntDefaultHandler,       // Unconfigured
};