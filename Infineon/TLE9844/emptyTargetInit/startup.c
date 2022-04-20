#include "TLE9844.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;
#define SCB_VTOR_ADDRESS 0xE000ED08 // Vector Table Offset Register

__attribute__ ((naked))
void Reset()
{ 
  __asm__("ldr R0, =_estack");
  __asm__("mov sp, R0");
    
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  

  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    
  
  //relocate NVIC
  __asm__("cpsid i"); //disable interrupts   
  *(unsigned long *)SCB_VTOR_ADDRESS = (unsigned long)&_VTOR;
  __asm__("cpsie i"); //enable interrupts
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}

static void TimerInterruptHandler(void)
{
  InterruptRoutine();
  GPT1_T3 = 0x2510;
  GPT12ICLR |= (0x1 << GPT12ICLR_T3C);
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),
                                            // The initial stack pointer
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
    TimerInterruptHandler,                  // GPT12 port 0
    IntDefaultHandler,                      // GPT12 port 1
    IntDefaultHandler,                      // MU
    IntDefaultHandler,                      // ADC1
    IntDefaultHandler,                      // CCU0
    IntDefaultHandler,                      // CCU1
    IntDefaultHandler,                      // CCU2
    IntDefaultHandler,                      // CCU3
    IntDefaultHandler,                      // SSC1
    IntDefaultHandler,                      // SSC2
    IntDefaultHandler,                      // UART1
    IntDefaultHandler,                      // UART2
    IntDefaultHandler,                      // EXINT0
    IntDefaultHandler,                      // EXINT1
    IntDefaultHandler,                      // WAKE-UP
    IntDefaultHandler,                      // LS1 
    IntDefaultHandler,                      // LS2
    IntDefaultHandler,                      // HS1
    IntDefaultHandler,                      // HS2
    IntDefaultHandler,                      // DU
    IntDefaultHandler,                      // MON1-5
    IntDefaultHandler,                      // Port 2.x 
};