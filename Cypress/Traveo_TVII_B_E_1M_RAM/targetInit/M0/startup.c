#include "traveo2_M0.h"
#include "lowPowerMode.h"
#include "main.h"

extern int main(void);

extern unsigned long _estackA;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

extern unsigned long _cm4Vect;

extern void reset();

__attribute__ ((naked))
void ResetM0()
{
  __asm__("ldr R0, =_estackA");
  __asm__("mov sp, R0");
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
    
  (*(unsigned int volatile*)0xE000ED08) = 0x08001000; //Set VTOR to VECT address
     
  if (BACKUP_REG_0 == 0x12341234) {
    BACKUP_REG_0 = 0;
   // onExitLowPowerModeTestBreakpoint(FROM_RESET);
  }
  
  main();
}

void TimerInterruptHandler(void)
{
  TCPWM0_GRP0_CNT0_INTR = 0x00000003;
  TCPWM0_GRP0_CNT0_COUNTER = 0x00000000;
  InterruptRoutine();
}

void TimerInterruptHandlerSleep(void)
{
  TCPWM0_GRP2_CNT0_INTR = 0x00000003;
  TCPWM0_GRP2_CNT0_COUNTER = 0x00000000;
  //onExitLowPowerModeTestBreakpoint(FROM_INTERRUPT);
}

void RTCInterruptHandler()
{
  BACKUP_RTC_RW |= (0x1 << BACKUP_RTC_RW_WRITE);
  BACKUP_RTC_TIME &= ~(0x3F << 0);
  BACKUP_INTR |= (0x1 << 0);
  BACKUP_RTC_RW &= ~(0x1 << BACKUP_RTC_RW_WRITE);
}

void IntDefaultHandler()
{
  while(1)
  {
  }
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
  (void (*)(void))(unsigned long)& _estackA,               // Initial stack pointer
                             
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
  RTCInterruptHandler,          // BACKUP / RTC
  TimerInterruptHandler,        // TCPWM0_GRP0_CNT0
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,            // Unconfigured
  IntDefaultHandler,            // Unconfigured
  TimerInterruptHandlerSleep,   // TCPWM0_GRP2_CNT0
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

