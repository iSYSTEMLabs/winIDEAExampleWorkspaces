#include "AC7811Q.h"

extern int main();
extern void InterruptRoutine();

extern unsigned long _estack, _sbss, _ebss, _etext, _sdata, _edata;

__attribute__ ((naked))
void Reset()
{
  volatile unsigned long *pulDest = &_sdata;
  volatile unsigned long *pulSrc = &_etext;
  
  SCB_VTOR = 0x08000000;
  
  while (pulDest < &_edata)
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  {
  while ( pulDest < &_ebss )
    *pulDest++ = 0;
  }
  
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
  // clear interrupt
  TIMER0_TF |= (1 << 0);
  
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estack),  // Initial stack pointer
    Reset,                      // Reset handler
    IntDefaultHandler,          // NMI handler
    IntDefaultHandler,          // Hard fault handler
    IntDefaultHandler,          // Memory management handler
    IntDefaultHandler,          // Bus Fault handler
    IntDefaultHandler,          // Usage Fault handler
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    0,                          // Reserved
    IntDefaultHandler,          // SVCall handler
    IntDefaultHandler,          // Debug Monitor handler
    0,                          // Reserved
    IntDefaultHandler,          // PendSV handler
    IntDefaultHandler,          // SysTick handler
    IntDefaultHandler,          // PWDT interrupt
    IntDefaultHandler,          // UART1 interrupt
    IntDefaultHandler,          // UART2 interrupt
    IntDefaultHandler,          // UART3 interrupt
    IntDefaultHandler,          // UART4 interrupt
    IntDefaultHandler,          // UART5 interrupt
    IntDefaultHandler,          // UART6 interrupt
    IntDefaultHandler,          // EXTI Line0 interrupt
    IntDefaultHandler,          // EXTI Line1 interrupt
    IntDefaultHandler,          // EXTI Line2 interrupt
    IntDefaultHandler,          // EXTI Line3 interrupt
    IntDefaultHandler,          // EXTI Line4 interrupt
    IntDefaultHandler,          // EXTI Line5 interrupt
    IntDefaultHandler,          // SPI0 interrupt
    IntDefaultHandler,          // SPI1 interrupt
    IntDefaultHandler,          // IIC0 interrupt
    IntDefaultHandler,          // IIC1 interrupt
    IntDefaultHandler,          // DMA channel 0 interrupt
    IntDefaultHandler,          // DMA channel 1 interrupt
    IntDefaultHandler,          // DMA channel 2 interrupt
    IntDefaultHandler,          // DMA channel 3 interrupt
    IntDefaultHandler,          // DMA channel 4 interrupt
    IntDefaultHandler,          // DMA channel 5 interrupt
    IntDefaultHandler,          // DMA channel 6 interrupt
    IntDefaultHandler,          // DMA channel 7 interrupt
    IntDefaultHandler,          // DMA channel 8 interrupt
    IntDefaultHandler,          // DMA channel 9 interrupt
    IntDefaultHandler,          // DMA channel 10 interrupt
    IntDefaultHandler,          // DMA channel 11 interrupt
    TimerInterruptHandler,      // Timer 0 interrupt
    IntDefaultHandler,          // Timer 1 interrupt
    IntDefaultHandler,          // BKP tamper interrupt
    IntDefaultHandler,          // RTC interrupt
    IntDefaultHandler,          // Watch dog timer interrupt
    IntDefaultHandler,          // PWM 0 interrupt
    IntDefaultHandler,          // PWM 1 interrupt
    IntDefaultHandler,          // PWM 2 interrupt
    IntDefaultHandler,          // Power detect interrupt
    IntDefaultHandler,          // LIN interrupt
    IntDefaultHandler,          // EXTI Line6 interrupt
    IntDefaultHandler,          // System power manager interrupt
    0,                          // Reserved
    IntDefaultHandler,          // CAN 1 interrupt
    IntDefaultHandler,          // CAN 2 interrupt
    IntDefaultHandler,          // ADC interrupt
    IntDefaultHandler,          // ACMP 0 interrupt
    IntDefaultHandler,          // ACMP 1 interrupt
    IntDefaultHandler,          // TIMER 2 interrupt
    IntDefaultHandler,          // TIMER 3 interrupt
    IntDefaultHandler,          // TIMER 4 interrupt
    IntDefaultHandler,          // TIMER 5 interrupt
    IntDefaultHandler,          // TIMER 6 interrupt
    IntDefaultHandler,          // TIMER 7 interrupt
    IntDefaultHandler,          // PWM 3 interrupt
    IntDefaultHandler,          // Embedded flash interrupt
};

