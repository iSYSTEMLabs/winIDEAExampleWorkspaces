#include "PSoC4HV.h"

extern int main(void);
extern void InterruptRoutine(void);

extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


void Reset() __attribute__ ( ( naked ) );
void Reset()
{  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_estack )  // Initialise entire RAM section
    *pulDest++ = 0;  
  
  main();
  
  while(1);
}



void IntDefaultHandler()
{
  while(1)
  {
  }
}


void TimerInterruptHandler()
{
  TCPWM_CNT0_INTR |= (TCPWM_CNT0_INTR_TC| TCPWM_CNT0_INTR_CC_MATCH);   // Reset interrupt request register
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),              // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler2
    IntDefaultHandler,                      // The hard fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // PendSV handler
    IntDefaultHandler,                      // SysTick handler
    IntDefaultHandler,                      // IRQ0, SRSS
    IntDefaultHandler,                      // IRQ1, WDT
    IntDefaultHandler,                      // IRQ2, GPIO All
    IntDefaultHandler,                      // IRQ3, GPIO Port0
    IntDefaultHandler,                      // IRQ4, GPIO Port1 
    IntDefaultHandler,                      // IRQ5, GPIO Port2
    IntDefaultHandler,                      // IRQ6, HVSS LIN Interface
    IntDefaultHandler,                      // IRQ7, SCB0
    IntDefaultHandler,                      // IRQ8, DMA
    IntDefaultHandler,                      // IRQ9, SPCIF Controller 0
    IntDefaultHandler,                      // IRQ10, SPICF Controller 1
    IntDefaultHandler,                      // IRQ11, Fault structure 0
    IntDefaultHandler,                      // IRQ12, Fault structure 1
    IntDefaultHandler,                      // IRQ13, LIN Channel 0
    IntDefaultHandler,                      // IRQ14, LIN Channel 1
    TimerInterruptHandler,                  // IRQ15, TCPWM0
    IntDefaultHandler,                      // IRQ16, TCPWM1
    IntDefaultHandler,                      // IRQ17, TCPWM2
    IntDefaultHandler,                      // IRQ18, TCPWM3
    IntDefaultHandler,                      // IRQ19, PACSS Consolidated
    IntDefaultHandler,                      // IRQ20, PACSS Digital Channel 0
    IntDefaultHandler,                      // IRQ21, PACSS Digital Channel 1
    IntDefaultHandler,                      // IRQ22, PACSS Digital Channel 2
    IntDefaultHandler,                      // IRQ23, reserved
    IntDefaultHandler,                      // IRQ24, reserved
    IntDefaultHandler,                      // IRQ25, reserved
    IntDefaultHandler,                      // IRQ26, reserved
    IntDefaultHandler,                      // IRQ27, reserved
    IntDefaultHandler,                      // IRQ28, reserved
    IntDefaultHandler,                      // IRQ29, reserved
    IntDefaultHandler,                      // IRQ30, reserved
    IntDefaultHandler,                      // IRQ31, reserved
};