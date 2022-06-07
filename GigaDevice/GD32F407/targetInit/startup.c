extern int main();

extern unsigned long _estack, _sbss, _ebss, _etext, _sdata, _edata;

__attribute__ ((naked))
void Reset()
{
  volatile unsigned long *pulDest = &_sdata;
  volatile unsigned long *pulSrc = &_etext;
  
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
  InterruptRoutine();
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),              // The initial stack pointer
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
    IntDefaultHandler,                      // PendSV
    TimerInterruptHandler,                  // SysTick
    IntDefaultHandler,                      // WWDGT interrupt - IRQ0
    IntDefaultHandler,                      // LVD from EXTI interrupt
    IntDefaultHandler,                      // RTC Tamper and TimeStamp from EXTI interrupt
    IntDefaultHandler,                      // RTC wakeup from EXTI interrupt
    IntDefaultHandler,                      // FMC global interrupt
    IntDefaultHandler,                      // RCU and CTC interrupt
    IntDefaultHandler,                      // EXTI Line0 interrupt
    IntDefaultHandler,                      // EXTI Line1 interrupt
    IntDefaultHandler,                      // EXTI Line2 interrupt
    IntDefaultHandler,                      // EXTI Line3 interrupt
    IntDefaultHandler,                      // EXTI Line4 interrupt
    IntDefaultHandler,                      // DMA0 channel0 global interrupt
    IntDefaultHandler,                      // DMA0 channel1 global interrupt
    IntDefaultHandler,                      // DMA0 channel2 global interrupt
    IntDefaultHandler,                      // DMA0 channel3 global interrupt
    IntDefaultHandler,                      // DMA0 channel4 global interrupt
    IntDefaultHandler,                      // DMA0 channel5 global interrupt
    IntDefaultHandler,                      // DMA0 channel6 global interrupt
    IntDefaultHandler,                      // ADC global interrupt
    IntDefaultHandler,                      // CAN0 TX interrupts
    IntDefaultHandler,                      // CAN0 RX0 interrupts
    IntDefaultHandler,                      // CAN0 RX1 interrupts
    IntDefaultHandler,                      // CAN0 EWMC interrupts
    IntDefaultHandler,                      // EXTI line[9:5] interrupts
    IntDefaultHandler,                      // TIMER0 break interrupt and TIMER8 global interrupt
    IntDefaultHandler,                      // TIMER0 update interrupt and TIMER9 global interrupt
    IntDefaultHandler,                      // TIMER0 trigger and Channel commutation interrupts and TIMER10 global interrupt
    IntDefaultHandler,                      // TIMER0 capture compare interrupt
    IntDefaultHandler                       // Timer1 global interrupt - IRQ28
};