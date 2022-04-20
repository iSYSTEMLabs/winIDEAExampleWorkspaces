#include "startup.h"


extern unsigned long _estackA, __DATA_ROM, __DATA_RAM, __DATA_END, __BSS_START, __BSS_END, _isrVectAddr;
extern int main(void);
extern void InterruptRoutine(void);
//extern unsigned long _cm4Vect;

void ResetM0()
{
  // Move stack pointer to _estack address
  asm volatile ("ldr R0, =_estackA");
  asm volatile ("mov sp, R0");
 
  VTOR = &_isrVectAddr; // Move vector table
  
  unsigned volatile long *pulSrc = &__DATA_ROM;
  unsigned volatile long *pulDest = &__DATA_RAM;
  
  while( pulDest < &__DATA_END )
    *pulDest++ = *pulSrc++;

  pulDest = &__BSS_START;
  while ( pulDest < &__BSS_END )
    *pulDest++ = 0;       
  
  /*
  
  if (BACKUP_REG_0 == 0x12341234) {
    BACKUP_REG_0 = 0;
    onExitLowPowerModeTestBreakpoint(FROM_RESET);
  }
  */
  
  main();
}

__interrupt__ void TimerInterruptHandler(void)
{
  TCPWM0_GRP0_CNT0_INTR = 0x00000003; // Clear CC0_MATCH flag
  TCPWM0_GRP0_CNT0_COUNTER = 0x00000000; // Reset COUNTER0
  InterruptRoutine();
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