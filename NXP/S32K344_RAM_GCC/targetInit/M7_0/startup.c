#include "startup.h"

__attribute__ ((naked))
void Reset()
{
  __asm__("  ldr R0, =__stack"); 
  __asm__("  mov sp, R0         ");

  volatile unsigned long *pulSrc = &__etext;
  volatile unsigned long *pulDest = &__data_start__;

  setVTOR();

  while( pulDest < &__data_end__ )
    *pulDest++ = *pulSrc++;

  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__)
    *pulDest++ = 0;       

  enableFPU();
  
  main();
}

void setVTOR(void) 
{
  System_Control_Space_System_Control_Block.VTOR.R = (unsigned volatile long)&__VTOR;
}

void enableFPU(void)
{
  System_Control_Space_System_Control_Block.CPACR.R = (0xF << 20);
}

void IntDefaultHandler(void)
{
  while(1)
  {
  }
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
};
