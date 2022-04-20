#include "EFM32GG11.h"

/* Linker defined variables */
extern unsigned long _isrVectAddr;
extern unsigned long _stack_top;
extern unsigned long _etext;
extern unsigned long _sidata;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

extern int main(void);
extern void InterruptRoutine();

__attribute__((naked))
void reset(){
  volatile unsigned long *pulSrc = &_sidata;
  volatile unsigned long *pulDest = &_sdata;
  
  asm("ldr sp, =_stack_top"); 
  
  System_Control_Space_System_Control_Block.VTOR.R = (unsigned long volatile)&_isrVectAddr;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    

  main();
}

void IntDefaultHandler(void)
{
  while(1);
}


void TimerInterruptHandler(void)
{
  
  TIMER0.IFC.R |= (1 << 1); // clear underflow flag
  System_Control_Space_NVIC.INT_0_31_CLR_PEND |= (1 << 5); // clear pending interrupt
  
  InterruptRoutine();
}


__attribute__((section(".vectors")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_stack_top),            // The initial stack pointer
    reset,                                  // The reset handler
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
    IntDefaultHandler,                      // The SysTick handler,

    IntDefaultHandler,                      //
    IntDefaultHandler,                      //
    IntDefaultHandler,                      //
    IntDefaultHandler,                      //
    IntDefaultHandler,                      //
    TimerInterruptHandler                   // TIMER0 interrupt
};
