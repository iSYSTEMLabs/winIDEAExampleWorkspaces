#include "startup.h"

__attribute__ ((naked))
void Reset()
{

  __asm__("  ldr R0, =__stack"); 
  __asm__("  mov sp, R0         ");

  volatile unsigned long *pulSrc = &__etext;
  volatile unsigned long *pulDest = &__data_start__;

  while( pulDest < &__data_end__ )
    *pulDest++ = *pulSrc++;

  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__)
    *pulDest++ = 0;       

  main();
}

void IntDefaultHandler(void)
{
  while(1)
  {
  }
}

void TimerInterruptHandler(void)
{
  /*Clear interrupt flag*/
  PIT_2_TFLG1 = 0x01;
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&__stack),              // The initial stack pointer
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
    0,
    IntDefaultHandler,                      // Pendable request for system service (PendableSrvReq)
    IntDefaultHandler,                      // System tick timer (SysTick)
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,                      // DMA transfer complete and error CH0 (dma_ipi_int[0] | dma_ipi_err_int[0])
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    TimerInterruptHandler, // I do not know why this interrupt is sent by the timer, does not seem to align with the interrupt map documentation
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
};
