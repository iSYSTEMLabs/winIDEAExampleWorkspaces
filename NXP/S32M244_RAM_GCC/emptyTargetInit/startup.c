#include "S32M244.h"

void start(void);
static void NmiISR(void);
static void FaultISR(void);
static void IntDefaultHandler(void);
static void TimerInterruptHandler(void);
extern void InterruptRoutine(void);
extern void main(void);

extern unsigned long _VTOR;
extern unsigned long _estack;
extern unsigned long _vect;
extern unsigned long _vect_end;
extern unsigned long _text;
extern unsigned long _text_end;
extern unsigned long _data;
extern unsigned long _data_end;
extern unsigned long _bss;
extern unsigned long _bss_end;

__attribute__((section(".stack")))
static unsigned long pulStack[256];

__attribute__((section(".heap")))
static unsigned long heap[256];

//
// Vector table
//
__attribute__((section(".isr_vector")))
void (* const g_pfnVectors[172])(void) = 
{
    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),
    start,
    NmiISR,
    FaultISR,
    [4 ... 63] = IntDefaultHandler,
    TimerInterruptHandler,
    [65 ... 171] = IntDefaultHandler
};

//
// Start up function
//
void start(void)
{
  volatile unsigned long *pulSrc, *pulDest;
  register unsigned long stackReg __asm("sp");
  stackReg = (unsigned long)&_estack;        //Sets initial Stack pointer
  
  pulSrc = &_vect;
  
  VTOR = 0x1FFF8000;
  
  /* Sets uninitialized data to 0 */
  for(pulDest = &_bss; pulDest < &_bss_end;)
  {
    *pulDest++ = 0;
  }
  
  /* Calls main() function */
   main();
}

static void NmiISR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}


static void FaultISR(void)
{
    //
    // Enter an infinite loop.
    //
    while(1)
    {
    }
}


static void IntDefaultHandler(void)
{
    //
    // Go into an infinite loop.
    //
    while(1)
    {
    }
}

//
// Handler for LPIT0 Interrupt
//
static void TimerInterruptHandler(void)
{
  LPIT_TCTRL0 &= ~(LPIT_CFG); 
  InterruptRoutine();
  LPIT_MSR |= LPIT_TFLG;
  NVIC_ICPR1 |= (1 << NVIC_LPIT0);
  LPIT_TCTRL0 |= LPIT_CFG;
}