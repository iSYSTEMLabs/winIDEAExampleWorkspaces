#define VTOR    (*(unsigned volatile long*) 0xE000ED08)

extern unsigned long _isrVectAddr;
extern unsigned long _estack;
extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata; 
extern unsigned long _sbss;
extern unsigned long _ebss; 
extern int main(void);
extern void InterruptRoutine();


void reset()
{
  unsigned long *pdwSource = &_etext; 
  unsigned long *pdwDest = &_sdata;
  unsigned long *pdwEnd = &_edata;
  unsigned long *pdwBssStart = &_sbss;
  unsigned long *pdwBssEnd = &_ebss;
  
  VTOR = (unsigned long volatile)&_isrVectAddr;
  
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
    reset,                        // Reset           0x0000_0004
    NMIHandler,                   // NMI             0x0000_0008
    HardFaultHandler,             // HardFault       0x0000_000C
    IntDefaultHandler,            // MemManage       0x0000_0010
    IntDefaultHandler,            // BusFault        0x0000_0014
    IntDefaultHandler,            // UsageFault      0x0000_0018
    0,                            // Reserved        0x0000_001C                                             
    0,                            // Reserved        0x0000_0020
    0,                            // Reserved        0x0000_0024
    0,                            // Reserved        0x0000_0028
    IntDefaultHandler,            // SVCall          0x0000_002C
    IntDefaultHandler,            // Debug Monitor   0x0000_0030
    0,                            // Reserved        0x0000_0034
    IntDefaultHandler,            // PendSV          0x0000_0038
    TimerInterruptHandler,        // SysTick         0x0000_003C
    IntDefaultHandler,            // NESSIE Interface
    IntDefaultHandler,            // Clock Reset Module
    IntDefaultHandler,            // Watchdog Timer
    IntDefaultHandler,            // UART
    IntDefaultHandler,            // SPI
    IntDefaultHandler,            // LINS
    IntDefaultHandler,
    IntDefaultHandler,            // CAN
    IntDefaultHandler,            // I2C_0
    IntDefaultHandler,            // I2C_1
    IntDefaultHandler,            // PWM_0
    IntDefaultHandler,            // PWM_1
    IntDefaultHandler,            // PWM_2
    IntDefaultHandler,            // PWM_3
    IntDefaultHandler,            // PWM_4
    IntDefaultHandler,            // TSENSE
    IntDefaultHandler,            // S3_CTRL
    IntDefaultHandler,            // HKADC
    IntDefaultHandler,            // GPIOA Activity Detection
    IntDefaultHandler,            // PWM5
    IntDefaultHandler,            // PWM6
    IntDefaultHandler,            // PWM7
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    IntDefaultHandler,            // SYSCTRLA
    IntDefaultHandler,            // 1.5V Power Management
    IntDefaultHandler,            // 5V Power Management
    0,                            // Reserved
    0,                            // Reserved
    IntDefaultHandler,            // CM4
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    0,                            // Reserved
    IntDefaultHandler,            // PL080 DMA Controller Terminal Count Interrupt
    IntDefaultHandler,            // PL080 DMA Controller Error Interrupt 
    IntDefaultHandler,            // NESSIE Interface Master Interrupt
    IntDefaultHandler,            // Timer 2 Lower
    IntDefaultHandler,            // Timer 2 Upper
    IntDefaultHandler,            // Timer 1 Lower
    IntDefaultHandler,            // Timer 1 Upper
    IntDefaultHandler,            // Timer 0 Lower
    IntDefaultHandler,            // Timer 0 Upper
};