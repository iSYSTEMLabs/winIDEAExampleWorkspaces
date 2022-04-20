
extern int main(void);

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;
#define SCB_VTOR_ADDRESS 0xE000ED08 // Vector Table Offset Register

void Reset()
{
  //Disable watchdog
  #define WDT_MR          (*((volatile unsigned int *) 0x400E1854)) 
  #define WDT_MR_WDDIS    1 << 15
  WDT_MR &= ~WDT_MR_WDDIS;
  
  //wait loop so we get CPU under control before it initializes because of SoC reset
  int i = 0;
  while(i < 200000)
  {
    i++;
  }
  
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
  
  //Enable FPU
  // CPACR is located at address 0xE000ED88
  __asm__("LDR.W R0, =0xE000ED88");
  // Read CPACR
  __asm__("LDR R1, [R0]");
  // Set bits 20-23 to enable CP10 and CP11 coprocessors
  __asm__("ORR R1, R1, #(0xF << 20)");
  // Write back the modified value to the CPACR
  __asm__("STR R1, [R0]");
  __asm__("DSB");
  // reset pipeline now the FPU is enabled
  __asm__("ISB");
  
  main();
}

void TimerInterruptHandler(){
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
//    (void (*)(void))((unsigned long)pulStack + sizeof(pulStack)),
   (void (*)(void))(&_estack),
                                            // The initial stack pointer
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
    TimerInterruptHandler,                      // The SysTick handler
    IntDefaultHandler,                      // GPIO Port A
    IntDefaultHandler,                      // GPIO Port B
    IntDefaultHandler,                      // GPIO Port C
    IntDefaultHandler,                      // GPIO Port D
    IntDefaultHandler,                      // GPIO Port E
    IntDefaultHandler,                      // UART0 Rx and Tx
    IntDefaultHandler,                      // UART1 Rx and Tx
    IntDefaultHandler,                      // SSI Rx and Tx
    IntDefaultHandler,                      // I2C Master and Slave
    IntDefaultHandler,                      // PWM Fault
    IntDefaultHandler,                      // PWM Generator 0
    IntDefaultHandler,                      // PWM Generator 1
    IntDefaultHandler,                      // PWM Generator 2
    IntDefaultHandler,                      // Quadrature Encoder
    IntDefaultHandler,                      // ADC Sequence 0
    IntDefaultHandler,                      // ADC Sequence 1
    IntDefaultHandler,                      // ADC Sequence 2
    IntDefaultHandler,                          // ADC Sequence 3
    IntDefaultHandler,                      // Watchdog timer
    IntDefaultHandler,                      // Timer 0 subtimer A
    IntDefaultHandler,                      // Timer 0 subtimer B
    IntDefaultHandler,                      // Timer 1 subtimer A
    IntDefaultHandler,                      // Timer 1 subtimer B
    IntDefaultHandler,                      // Timer 2 subtimer A
    IntDefaultHandler,                      // Timer 2 subtimer B
    IntDefaultHandler,                      // Analog Comparator 0
    IntDefaultHandler,                      // Analog Comparator 1
    IntDefaultHandler,                      // Analog Comparator 2
    IntDefaultHandler,                      // System Control (PLL, OSC, BO)
    IntDefaultHandler                       // FLASH Control
};



// 
// struct SISRType
// {
//   union
//   {
//     pfnISR        m_pfnISR;
//     unsigned long m_dword;
//   };
// }g_ISRTable[] =
// {
//   (unsigned long)& _estack,     // Initial stack pointer                            
//   Reset,                        // Reset handler
//   IntDefaultHandler,            // NMI handler
//   IntDefaultHandler,            // Hard fault handler
//   IntDefaultHandler,            // MPU fault handler
//   IntDefaultHandler,            // Bus fault handler
//   IntDefaultHandler,            // Usage fault handler
//   0,                            // Reserved
//   0,                            // Reserved
//   0,                            // Reserved
//   0,                            // Reserved
//   IntDefaultHandler,            // SVCall handler
//   IntDefaultHandler,            // Debug monitor handler
//   0,                            // Reserved
//   IntDefaultHandler,            // PendSV handler
//   IntDefaultHandler,            // SysTick handler
// };

