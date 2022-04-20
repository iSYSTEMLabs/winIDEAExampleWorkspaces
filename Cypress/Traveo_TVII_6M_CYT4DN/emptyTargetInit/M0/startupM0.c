#include "traveo2_M0.h"
#include "lowPowerMode.h"
#include "main.h"

extern int main(void);
extern int reset(void);

extern unsigned long _estackM0;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void ResetM0()
{
  __asm__("ldr R0, =_estackM0");
  __asm__("mov sp, R0");

  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  (*(unsigned int volatile*)0xE000ED08) = 0x10000000; //Set VTOR to VECT address
  
  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

void TimerInterruptHandler(void)
{
  TCPWM0_GRP0_CNT0_INTR = 0x00000003;
  TCPWM0_GRP0_CNT0_COUNTER = 0x00000000;
  InterruptRoutine();
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
  (void (*)(void))(unsigned long)& _estackM0,               // Initial stack pointer
                             
  ResetM0,                  // Reset handler
  IntDefaultHandler,      // NMI handler
  IntDefaultHandler,      // Hard fault handler
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  IntDefaultHandler,      // SVCall handler
  0,                      // Reserved
  0,                      // Reserved
  IntDefaultHandler,      // PendSV handler
  IntDefaultHandler,      // SysTick handler
  /* External interrupts */
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,          // BACKUP / RTC
  TimerInterruptHandler,        // TCPWM0_GRP0_CNT0
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,   // TCPWM0_GRP2_CNT0
  /* Internal (SW only) interrupts */
  IntDefaultHandler,       // Unconfigured
  IntDefaultHandler,       // Unconfigured
  IntDefaultHandler,       // Unconfigured
  IntDefaultHandler,       // Unconfigured  
  IntDefaultHandler,       // Unconfigured
  IntDefaultHandler,       // Unconfigured
  IntDefaultHandler,       // Unconfigured
  IntDefaultHandler,       // Unconfigured
};
