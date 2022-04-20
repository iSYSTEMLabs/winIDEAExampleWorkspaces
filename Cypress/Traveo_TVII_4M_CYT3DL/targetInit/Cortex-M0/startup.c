#include "TVII_4M_CYT3DL.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _cm0_vect;

__attribute__ ((naked,  section(".resetFunct")))
void Reset()
{
  asm("ldr R0, =_estack"); //rt BreakPoint: id=testLatchAndStopReset
  asm("mov sp, R0");
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  
  // Set VTOR
  System_Control_Space_System_Control_Block.VTOR.R = (uint32_t)&_cm0_vect;
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}

void TimerInterruptHandler()
{
  System_Control_Space_NVIC.INT_0_31_CLR_PEND = (1<<3);
  TCPWM0_GRP_0_CNT_0.INTR.R = (1<<1); // Clear interrupt pending
  
  InterruptRoutine();
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    IntDefaultHandler,                      // The PendSV handler
    IntDefaultHandler,                      // The SysTick handler
    // Interrupts
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    TimerInterruptHandler,
    IntDefaultHandler,
};

