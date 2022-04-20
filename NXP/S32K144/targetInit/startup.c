#include "s32k144.h"

extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void Reset()
{
  __asm__("ldr sp,=_estack"); //rt BreakPoint: id=testLatchAndStopReset
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
              
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void TimerInterruptHandler(void)
{
  LPIT0_MSR |= (0x1 << LPIT0_MSR_TIF0);
  InterruptRoutine();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
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
    IntDefaultHandler,                      // DMA channel 0 transfer complete
    IntDefaultHandler,                      // DMA channel 1 transfer complete
    IntDefaultHandler,                      // DMA channel 2 transfer complete
    IntDefaultHandler,                      // DMA channel 3 transfer complete
    IntDefaultHandler,                      // DMA channel 4 transfer complete
    IntDefaultHandler,                      // DMA channel 5 transfer complete 
    IntDefaultHandler,                      // DMA channel 6 transfer complete
    IntDefaultHandler,                      // DMA channel 7 transfer complete
    IntDefaultHandler,                      // DMA channel 8 transfer complete
    IntDefaultHandler,                      // DMA channel 9 transfer complete
    IntDefaultHandler,                      // DMA channel 10 transfer complete
    IntDefaultHandler,                      // DMA channel 11 transfer complete
    IntDefaultHandler,                      // DMA channel 12 transfer complete
    IntDefaultHandler,                      // DMA channel 13 transfer complete
    IntDefaultHandler,                      // DMA channel 14 transfer complete
    IntDefaultHandler,                      // DMA channel 15 transfer complete
    IntDefaultHandler,                      // DMA error interrupt channels 0-15
    IntDefaultHandler,                      // MCM FPU sources
    IntDefaultHandler,                      // Flash memory Command complete
    IntDefaultHandler,                      // Flash memory Read collision
    IntDefaultHandler,                      // PMC Low-voltage detect, low-voltage warning
    IntDefaultHandler,                      // Flash memory Double bit fault detect interrupt
    IntDefaultHandler,                      // WDOG or EWM Both watchdog modules share this interrupt
    0,                                      // Reserved
    IntDefaultHandler,                      // LPI2C0
    IntDefaultHandler,                      // LPI2C1
    IntDefaultHandler,                      // LPSPI0 Single interrupt vector for all sources
    IntDefaultHandler,                      // LPSPI1 Single interrupt vector for all sources
    0,                                      // Reserved 
    IntDefaultHandler,                      // PWT
    0,                                      // Reserved 
    IntDefaultHandler,                      // LPUART0 LPUART0 transmit interrupt 
    IntDefaultHandler,                      // LPUART0 receive interrupt 
    IntDefaultHandler,                      // LPUART1 transmit interrupt 
    IntDefaultHandler,                      // LPUART1 receive interrupt 
    IntDefaultHandler,                      // LPUART2 transmit interrupt 
    IntDefaultHandler,                      // LPUART2 receive interrupt 
    0,                                      // Reserved 
    0,                                      // Reserved 
    IntDefaultHandler,                      // ADC0 
    IntDefaultHandler,                      // CMP0 
    IntDefaultHandler,                      // CMP1 
    IntDefaultHandler,                      // FTM0 Single interrupt vector for all sources
    IntDefaultHandler,                      // FTM1 Single interrupt vector for all sources
    IntDefaultHandler,                      // FTM2 Single interrupt vector for all sources
    0,                                      // Reserved 
    IntDefaultHandler,                      // RTC 
    IntDefaultHandler,                      // RTC Seconds interrupt 
    TimerInterruptHandler,                  // LPIT Channel 0
    IntDefaultHandler,                      // LPIT Channel 1
    IntDefaultHandler,                      // LPIT Channel 2
    IntDefaultHandler                       // LPIT Channel 3
};

