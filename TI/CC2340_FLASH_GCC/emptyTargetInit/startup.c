
extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata; 
extern unsigned long _sbss;
extern unsigned long _ebss; 
extern int main(void);
extern void InterruptRoutine();


void Reset_Handler() __attribute__((naked));
void Reset_Handler()
{
  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&_estack;
  
  unsigned long *pdwSource = &_etext; 
  unsigned long *pdwDest = &_sdata;
  unsigned long *pdwEnd = &_edata;
  unsigned long *pdwBssStart = &_sbss;
  unsigned long *pdwBssEnd = &_ebss;
  
  while (pdwDest < pdwEnd)
  {
    *pdwDest = *pdwSource;
    pdwDest++;
    pdwSource++;
  }
  
  while (pdwBssStart < pdwBssEnd)
  {
    *pdwBssStart = 0;
    pdwBssStart++;
  }
  
  main();
  while(1);
}

static void NMI_Handler()
{
  while(1);
}

static void HardFault_Handler()
{
  while(1);
}

static void SVC_Handler()
{
  while(1);
}

static void PendSV_Handler()
{
  while(1);
}

static void IntDefaultHandler()
{
  while(1);
}

static void TimerInterruptHandler()
{
  InterruptRoutine();
}


/*
  Interrupt vector table
*/
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),   // Initial sp
    Reset_Handler,                // Reset
    NMI_Handler,                  // NMI
    HardFault_Handler,            // HardFault
    0,                            // Reserved
    0,                            // Reserved  
    0,                            // Reserved 
    0,                            // Reserved  
    0,                            // Reserved  
    0,                            // Reserved  
    0,                            // Reserved  
    SVC_Handler,                  // SVCall
    0,                            // Reserved
    0,                            // Reserved  
    PendSV_Handler,               // PendSV
    TimerInterruptHandler,        // SysTick
    IntDefaultHandler,            // Watchdog Timer
    IntDefaultHandler,            // PDV
    IntDefaultHandler,            // RTC global interrupt 
    IntDefaultHandler,            // Flash memory and data EEPROM global interrupt
    IntDefaultHandler,            // RCC global interrupt
    IntDefaultHandler,            // EXTI Line0 and 1 interrupts
    IntDefaultHandler,            // EXTI Line2 and 3 interrupts
    IntDefaultHandler,            // EXTI Line4 to 15 interrupts
    0,                            // Reserved
    IntDefaultHandler,            // DMA1 Channel1 global interrupt
    IntDefaultHandler,            // DMA1 Channel2 and 3 interrupts
    IntDefaultHandler,            // DMA1 Channel4 to 7 interrupts
    IntDefaultHandler,            // ADC and comparator interrupts through EXTI21 and 22 
    IntDefaultHandler,            // LPTIMER1 interrupt through EXTI29
    IntDefaultHandler,            // USART4/USART5 global interrupt
    IntDefaultHandler,            // TIMER2 global interrupt
    IntDefaultHandler,            // TIMER3 global interrupt
    IntDefaultHandler,            // TIMER6 global interrupt
    IntDefaultHandler,            // TIMER7 global interrupt
    0,                            // Reserved
    IntDefaultHandler,            // TIMER21 global interrupt
    IntDefaultHandler,            // I2C3 global interrupt
    IntDefaultHandler,            // TIMER22 global interrupt 
    IntDefaultHandler,            // I2C1 global interrupt through EXTI23
    IntDefaultHandler,            // I2C2 global interrupt
    IntDefaultHandler,            // SPI1 global interrupt
    IntDefaultHandler,            // SPI2 global interrupt
    IntDefaultHandler,            // USART1 global interrupt through EXTI25
    IntDefaultHandler,            // USART2 global interrupt through EXTI26
    IntDefaultHandler,            // LPUART1 global interrupt through EXTI28 + AES global interrupt
};