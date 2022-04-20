#include "TVII_4M_CYT3DL.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

extern unsigned long _VTOR;

#define CPACR (*(unsigned volatile int *)0xE000ED88)
#define CPACR_CP10 20
#define CPACR_CP11 22

void enableFPU()
{
  CPACR |= (0x3 << CPACR_CP10) | (0x3 << CPACR_CP11);
}

__attribute__ ((naked,  section(".resetFunct")))
void Reset()
{
  asm("ldr sp,=_estack");
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  
  enableFPU();
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}

void TimerInterruptHandler()
{
  System_Control_Space_NVIC.INT_0_31_CLR_PEND = (1<<3);
  TCPWM0_GRP_0_CNT_1.INTR.R = (1<<1); // Clear interrupt pending
  
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

