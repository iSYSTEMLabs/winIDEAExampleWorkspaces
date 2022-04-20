#include "startup.h"
#include "LPC1769.h"

extern int main(void);
extern void InterruptRoutine();
void TimerInterruptHandler();

extern unsigned long _estack;

extern unsigned long _isrVectAddr;
extern unsigned long _etext;
extern unsigned long _sidata;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;

__attribute__((naked))
void Reset()
{
  asm("ldr sp,=_estack"); //rt BreakPoint: id=testLatchAndStopReset
  
  volatile unsigned long *pulSrc = &_sidata;
  volatile unsigned long *pulDest = &_sdata;
  
  VTOR = (unsigned volatile long)&_isrVectAddr; // Move vector table
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_sbss;
  
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}

void TimerInterruptHandler()
{
  STCTRL &= ~(1 << 1);
  InterruptRoutine();
  STCTRL |= (1 << 1);
}

__attribute__((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0xEFFF3C46,                             // Bootloader checksum - replace with value at 0x1C
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    IntDefaultHandler,                      // The PendSV handler
    TimerInterruptHandler,                  // The SysTick handler,

    IntDefaultHandler,                      // WDT interrupt
    IntDefaultHandler,                      // Timer 0 match, capture
    IntDefaultHandler,                      // Timer 1 match, capture
    IntDefaultHandler,                      // Timer 2 match, capture
    IntDefaultHandler,                      // Timer 3 match, capture
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
    IntDefaultHandler
};

