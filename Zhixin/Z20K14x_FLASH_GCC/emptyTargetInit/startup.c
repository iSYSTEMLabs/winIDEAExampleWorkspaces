#include "Z20K14x.h"

extern int main();
extern void InterruptRoutine();
extern void TimerInterruptHandler();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void Reset()
{
  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&_estack;    //rt BreakPoint: id=testLatchAndStopReset
  
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

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MemManage fault handler
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
    IntDefaultHandler,                      // Command complete
    IntDefaultHandler,                      // ECC error
    IntDefaultHandler,                      // LVD, LVW
    IntDefaultHandler,                      // Watch dog
    IntDefaultHandler,                      // External watchdog monitor
    IntDefaultHandler,                      // System reset and mode control
    IntDefaultHandler,                      // I2C0 Interrupt
    IntDefaultHandler,                      // I2C1 Interrupt
    IntDefaultHandler,                      // SPI0 txe Interrupt
    IntDefaultHandler,                      // SPI0 txo Interrupt
    IntDefaultHandler,                      // SPI0 rxf Interrupt
    IntDefaultHandler,                      // SPI0 rxo Interrupt 
    IntDefaultHandler,                      // SPI0 rxu Interrupt
    0,                                      // Reserved 
    IntDefaultHandler,                      // SPI1 txe Interrupt
    IntDefaultHandler,                      // SPI1 txo Interrupt
    IntDefaultHandler,                      // SPI1 rxf Interrupt
    IntDefaultHandler,                      // SPI1 rxo Interrupt 
    IntDefaultHandler,                      // SPI1 rxu Interrupt
    0,                                      // Reserved 
    IntDefaultHandler,                      // SPI2 txe Interrupt
    IntDefaultHandler,                      // SPI2 txo Interrupt
    IntDefaultHandler,                      // SPI2 rxf Interrupt
    IntDefaultHandler,                      // SPI2 rxo Interrupt 
    IntDefaultHandler,                      // SPI2 rxu Interrupt
    0,                                      // Reserved 
    IntDefaultHandler,                      // SPI3 txe Interrupt
    IntDefaultHandler,                      // SPI3 txo Interrupt
    IntDefaultHandler,                      // SPI3 rxf Interrupt
    IntDefaultHandler,                      // SPI3 rxo Interrupt 
    IntDefaultHandler,                      // SPI3 rxu Interrupt
    0,                                      // Reserved 
    IntDefaultHandler,                      // UART0 Interrupt
    IntDefaultHandler,                      // UART1 Interrupt
    IntDefaultHandler,                      // UART2 Interrupt
    IntDefaultHandler,                      // UART3 Interrupt 
    IntDefaultHandler,                      // UART4 Interrupt
    IntDefaultHandler,                      // UART5 Interrupt
    IntDefaultHandler,                      // CAN0 bus off    
    IntDefaultHandler,                      // CAN0 tx warning
    IntDefaultHandler,                      // CAN0 rx warning
    IntDefaultHandler,                      // CAN0 error Interrupt
    IntDefaultHandler,                      // CAN0 FD error Interrupt
    IntDefaultHandler,                      // CAN0 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN0 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN0 ECC interrupt
    IntDefaultHandler,                      // CAN0 Message buffer (0-15)
    IntDefaultHandler,                      // CAN0 Message buffer (16-31)
    IntDefaultHandler,                      // CAN0 Message buffer (32-47)
    IntDefaultHandler,                      // CAN0 Message buffer (48-63)
    IntDefaultHandler,                      // CAN1 bus off    
    IntDefaultHandler,                      // CAN1 tx warning
    IntDefaultHandler,                      // CAN1 rx warning
    IntDefaultHandler,                      // CAN1 error Interrupt
    IntDefaultHandler,                      // CAN1 FD error Interrupt
    IntDefaultHandler,                      // CAN1 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN1 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN1 ECC interrupt
    IntDefaultHandler,                      // CAN1 Message buffer (0-15)
    IntDefaultHandler,                      // CAN1 Message buffer (16-31)
    IntDefaultHandler,                      // CAN1 Message buffer (32-47)
    IntDefaultHandler,                      // CAN1 Message buffer (48-63)
    IntDefaultHandler,                      // CAN2 bus off    
    IntDefaultHandler,                      // CAN2 tx warning
    IntDefaultHandler,                      // CAN2 rx warning
    IntDefaultHandler,                      // CAN2 error Interrupt
    IntDefaultHandler,                      // CAN2 FD error Interrupt
    IntDefaultHandler,                      // CAN2 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN2 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN2 ECC interrupt
    IntDefaultHandler,                      // CAN2 Message buffer (0-15)
    IntDefaultHandler,                      // CAN2 Message buffer (16-31)
    IntDefaultHandler,                      // CAN2 Message buffer (32-47)
    IntDefaultHandler,                      // CAN2 Message buffer (48-63)
    IntDefaultHandler,                      // CAN3 bus off    
    IntDefaultHandler,                      // CAN3 tx warning
    IntDefaultHandler,                      // CAN3 rx warning
    IntDefaultHandler,                      // CAN3 error Interrupt
    IntDefaultHandler,                      // CAN3 FD error Interrupt
    IntDefaultHandler,                      // CAN3 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN3 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN3 ECC interrupt
    IntDefaultHandler,                      // CAN3 Message buffer (0-15)
    IntDefaultHandler,                      // CAN3 Message buffer (16-31)
    IntDefaultHandler,                      // CAN3 Message buffer (32-47)
    IntDefaultHandler,                      // CAN3 Message buffer (48-63)
    IntDefaultHandler,                      // CAN4 bus off    
    IntDefaultHandler,                      // CAN4 tx warning
    IntDefaultHandler,                      // CAN4 rx warning
    IntDefaultHandler,                      // CAN4 error Interrupt
    IntDefaultHandler,                      // CAN4 FD error Interrupt
    IntDefaultHandler,                      // CAN4 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN4 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN4 ECC interrupt
    IntDefaultHandler,                      // CAN4 Message buffer (0-15)
    IntDefaultHandler,                      // CAN4 Message buffer (16-31)
    IntDefaultHandler,                      // CAN4 Message buffer (32-47)
    IntDefaultHandler,                      // CAN4 Message buffer (48-63)
    IntDefaultHandler,                      // CAN5 bus off    
    IntDefaultHandler,                      // CAN5 tx warning
    IntDefaultHandler,                      // CAN5 rx warning
    IntDefaultHandler,                      // CAN5 error Interrupt
    IntDefaultHandler,                      // CAN5 FD error Interrupt
    IntDefaultHandler,                      // CAN5 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN5 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN5 ECC interrupt
    IntDefaultHandler,                      // CAN5 Message buffer (0-15)
    IntDefaultHandler,                      // CAN5 Message buffer (16-31)
    IntDefaultHandler,                      // CAN5 Message buffer (32-47)
    IntDefaultHandler,                      // CAN5 Message buffer (48-63)
    IntDefaultHandler,                      // CAN6 bus off    
    IntDefaultHandler,                      // CAN6 tx warning
    IntDefaultHandler,                      // CAN6 rx warning
    IntDefaultHandler,                      // CAN6 error Interrupt
    IntDefaultHandler,                      // CAN6 FD error Interrupt
    IntDefaultHandler,                      // CAN6 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN6 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN6 ECC interrupt
    IntDefaultHandler,                      // CAN6 Message buffer (0-31)
    IntDefaultHandler,                      // CAN6 Message buffer (32-63)
    IntDefaultHandler,                      // CAN6 Message buffer (64-95)
    IntDefaultHandler,                      // CAN6 Message buffer (96-127)
    IntDefaultHandler,                      // CAN7 bus off
    IntDefaultHandler,                      // CAN7 tx warning
    IntDefaultHandler,                      // CAN7 rx warning
    IntDefaultHandler,                      // CAN7 error Interrupt
    IntDefaultHandler,                      // CAN7 FD error Interrupt
    IntDefaultHandler,                      // CAN7 pretended network wakeup Interrupt
    IntDefaultHandler,                      // CAN7 self-wakeup Interrupt
    IntDefaultHandler,                      // CAN7 ECC interrupt
    IntDefaultHandler,                      // CAN7 Message buffer (0-31)
    IntDefaultHandler,                      // CAN7 Message buffer (32-63)
    IntDefaultHandler,                      // CAN7 Message buffer (64-95)
    IntDefaultHandler,                      // CAN7 Message buffer (96-127)
    0,                                      // Reserved 
    0,                                      // Reserved 
    0,                                      // Reserved 
    IntDefaultHandler,                      // TIM0 channel interrupt
    IntDefaultHandler,                      // TIM0 fault interrupt
    IntDefaultHandler,                      // TIM0 overflow interrupt
    IntDefaultHandler,                      // TIM0 reload interrupt
    IntDefaultHandler,                      // TIM1 channel interrupt
    IntDefaultHandler,                      // TIM1 fault interrupt
    IntDefaultHandler,                      // TIM1 overflow interrupt
    IntDefaultHandler,                      // TIM1 reload interrupt
    IntDefaultHandler,                      // TIM2 channel interrupt
    IntDefaultHandler,                      // TIM2 fault interrupt
    IntDefaultHandler,                      // TIM2 overflow interrupt
    IntDefaultHandler,                      // TIM2 reload interrupt
    IntDefaultHandler,                      // TIM3 channel interrupt
    IntDefaultHandler,                      // TIM3 fault interrupt
    IntDefaultHandler,                      // TIM3 overflow interrupt
    IntDefaultHandler,                      // TIM3 reload interrupt
    IntDefaultHandler,                      // TDG0 tco interrupt
    IntDefaultHandler,                      // TDG0 err interrupt
    IntDefaultHandler,                      // TDG1 tco interrupt
    IntDefaultHandler,                      // TDG1 err interrupt
    IntDefaultHandler,                      // I2S0 interrupt
    IntDefaultHandler,                      // I2S1 interrupt
    IntDefaultHandler,                      // PORTA Interrupt
    IntDefaultHandler,                      // PORTB Interrupt
    IntDefaultHandler,                      // PORTC Interrupt
    IntDefaultHandler,                      // PORTD Interrupt
    IntDefaultHandler,                      // PORTE Interrupt
    IntDefaultHandler,                      // STIM interrupt
    IntDefaultHandler,                      // RTC alarm
    IntDefaultHandler,                      // RTC second
    IntDefaultHandler,                      // AES interrupt
    IntDefaultHandler,                      // TRNG interrupt
    0,                                      // Reserved
    IntDefaultHandler,                      // CMU1 interrupt
    IntDefaultHandler,                      // CMU2 interrupt
    IntDefaultHandler,                      // SERU parity error interrupt
    IntDefaultHandler,                      // SERU channel error interrupt1
    IntDefaultHandler,                      // SCC System clock controller
    IntDefaultHandler,                      // MCPWM0 CH interrupt
    IntDefaultHandler,                      // MCPWM0 FAULT interrupt
    IntDefaultHandler,                      // MCPWM0 OVFL interrupt
    IntDefaultHandler,                      // MCPWM0 RLFL interrupt
    IntDefaultHandler,                      // MCPWM1 CH interrupt
    IntDefaultHandler,                      // MCPWM1 FAULT interrupt
    IntDefaultHandler,                      // MCPWM1 OVFL interrupt
    IntDefaultHandler,                      // MCPWM1 RLFL interrupt
    IntDefaultHandler,                      // ADC0 interrupt request.
    IntDefaultHandler,                      // ADC1 interrupt request.
    IntDefaultHandler,                      // CMP interrupt request
    IntDefaultHandler,                      // FPU error interrupt
    IntDefaultHandler,                      // cache error interrupt
};

