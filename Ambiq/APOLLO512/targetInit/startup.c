extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;
#define SCB_VTOR_ADDRESS 0xE000ED08 // Vector Table Offset Register
#define CPACR (*(volatile unsigned int*)0xE000ED88)  // Coprocessor access control register
#define CPACR_CP10_CP11 20  // CP10 and CP11 coprocessors registers

void reset()
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    
  
  //relocate NVIC
  __asm__("cpsid i"); //disable interrupts   
  *(unsigned long *)SCB_VTOR_ADDRESS = (unsigned long)&_VTOR;
  __asm__("cpsie i"); //enable interrupts
  
  CPACR |= (0xF << CPACR_CP10_CP11);  // enable FPU
  
  main();
}

static void NMIHandler()
{
  while(1);
}

static void HardFaultHandler()
{
  while(1);
}

static void SVCallHandler()
{
  while(1);
}

static void PendableSrvReqHandler()
{
  while(1);
}

static void SysTickHandler()
{
  while(1);
}

static void IntDefaultHandler()
{
  while(1);
}

extern void InterruptRoutine();
extern void clearTimerFlag();

static void TimerInterruptHandler()
{
  clearTimerFlag();
  InterruptRoutine();
}

/*
  Interrupt vector table
*/

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
//    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),
   (void (*)(void))(&_estack),
                                            // The initial stack pointer
    reset,                                  // The reset handler
    NMIHandler,                             // The NMI handler
    HardFaultHandler,                       // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    SVCallHandler,                          // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
    0,                                      // Reserved
    PendableSrvReqHandler,                  // The PendSV handler
    SysTickHandler,                         // The SysTick handler
    IntDefaultHandler,                      // Brownout detection handler
    IntDefaultHandler,                      // Watchdog timer handler
    IntDefaultHandler,                      // Clock control and RTC handler
    IntDefaultHandler,                      // Voltage comparator handler
    IntDefaultHandler,                      // I2C/SPI slave handler
    IntDefaultHandler,                      // I2C/SPI slave register access handler
    IntDefaultHandler,                      // I2C/SPI Master0 handler
    IntDefaultHandler,                      // I2C/SPI Master1 handler
    IntDefaultHandler,                      // ADC handler
    IntDefaultHandler,                      // GPIO handler
    TimerInterruptHandler,                  // Counter/Timers handler
    IntDefaultHandler,                      // UART handler
};
