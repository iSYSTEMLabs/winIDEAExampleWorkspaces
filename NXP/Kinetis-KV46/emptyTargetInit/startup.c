
extern int main(void);
extern void disableWatchdog();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

#include "Kinetis-KV46.h"


__attribute__ ((naked))
void Reset()
{ 
  __asm__("ldr sp,=_estack");
  
  disableWatchdog();
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  

  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();

}

void IntDefaultHandler()
{
  while(1)
  {
  }
}


void TimerInterruptHandler()
{
  PIT_TCTRL &= ~(1 << PIT_TCTRL_TE);
  PIT_TFLG |= (1 << PIT_TFLG_TIF);
  InterruptRoutine();
  PIT_TCTRL |= (1 << PIT_TCTRL_TE);
}

typedef void (*pfnISR)(void);

__attribute__ ((section(".isr_vector")))
struct SISRType
{
  union
  {
    pfnISR        m_pfnISR;
    unsigned long m_dword;
  };
}g_ISRTable[] =
{
  (unsigned long)&_estack,     // Initial stack pointer                            
  Reset,                        // Reset handler
  IntDefaultHandler,            // NMI handler
  IntDefaultHandler,            // Hard fault handler
  IntDefaultHandler,            // MPU fault handler
  IntDefaultHandler,            // Bus fault handler
  IntDefaultHandler,            // Usage fault handler
  0,                            // Reserved
  0,                            // Reserved
  0,                            // Reserved
  0,                            // Reserved
  IntDefaultHandler,            // SVCall handler
  IntDefaultHandler,            // Debug monitor handler
  0,                            // Reserved
  IntDefaultHandler,            // PendSV handler
  IntDefaultHandler,            // SysTick handler
  IntDefaultHandler,            // DMA channel 0, 16 transfer complete
  IntDefaultHandler,            // DMA channel 1, 17 transfer complete
  IntDefaultHandler,            // DMA channel 2, 18 transfer complete
  IntDefaultHandler,            // DMA channel 3, 19 transfer complete
  IntDefaultHandler,            // DMA channel 4, 20 transfer complete
  IntDefaultHandler,            // DMA channel 5, 21 transfer complete
  IntDefaultHandler,            // DMA channel 6, 22 transfer complete
  IntDefaultHandler,            // DMA channel 7, 23 transfer complete
  IntDefaultHandler,            // DMA channel 8, 24 transfer complete
  IntDefaultHandler,            // DMA channel 9, 25 transfer complete
  IntDefaultHandler,            // DMA channel 10, 26 transfer complete
  IntDefaultHandler,            // DMA channel 11, 27 transfer complete
  IntDefaultHandler,            // DMA channel 12, 28 transfer complete
  IntDefaultHandler,            // DMA channel 13, 29 transfer complete
  IntDefaultHandler,            // DMA channel 14, 30 transfer complete
  IntDefaultHandler,            // DMA channel 15, 31 transfer complete
  IntDefaultHandler,            // DMA error interrupt channels 0-1531
  IntDefaultHandler,            // MCM interrupt
  IntDefaultHandler,            // Command complete
  IntDefaultHandler,            // Read collision
  IntDefaultHandler,            // Low-voltage detect, low-voltage warning
  IntDefaultHandler,            // Low Leakage Wakeup
  IntDefaultHandler,            // Both watchdog modules share this interrupt
  IntDefaultHandler,            // 
  IntDefaultHandler,            // I2C0
  0,                            // Reserved
  IntDefaultHandler,            // SPI0
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  IntDefaultHandler,            // UART0 status sources
  IntDefaultHandler,            // UART0 error sources
  IntDefaultHandler,            // UART1 status sources
  IntDefaultHandler,            // UART1 error sources
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  IntDefaultHandler,            // ADC_ERR A&B ( zero cross, high/low limit)
  IntDefaultHandler,            // ADCA Scan complete
  IntDefaultHandler,            // CMP0
  IntDefaultHandler,            // CMP1
  IntDefaultHandler,            // FTM0 8 channels
  IntDefaultHandler,            // FTM1 2 channels
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  IntDefaultHandler,            // 
  0,                            // Reserved
  TimerInterruptHandler,         // PIT Channel 0                              

  
};

