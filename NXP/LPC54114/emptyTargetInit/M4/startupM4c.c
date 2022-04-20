#include "chip.h"

void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
void SVC_Handler(void);
void DebugMon_Handler(void);
void PendSV_Handler(void);
void SysTick_Handler(void);
void IntDefaultHandler(void);
void TimerInterruptHandler(void);
                                  

extern int main(void);
extern void InterruptRoutine(void);

extern unsigned long _estackA;  // import as constant, convert to pointer later on
extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void ResetISR(void) {
  asm volatile(".set   cpu_ctrl,       0x40000800\t\n");
    asm volatile(".set   coproc_boot,    0x40000804\t\n");
    asm volatile(".set   coproc_stack,   0x40000808\t\n");  
    asm volatile("MOVS   R5, #1\t\n");
    asm volatile("LDR    R0, =0xE000ED00\t\n");
    asm volatile("LDR    R1, [R0]\t\n");           // READ CPUID register
    asm volatile("LDR    R2,=0x410CC601\t\n");     // CM0 R0p1 identifier
    asm volatile("EORS   R1,R1,R2\t\n");           // XOR to see if we are CM0
    asm volatile("LDR    R3, =cpu_ctrl\t\n");      // get address of CPU_CTRL
    asm volatile("LDR    R1,[R3]\t\n");            // read cpu_ctrl reg into R1
    asm volatile("BEQ.N  cm0_boot\t\n");
  asm volatile("cm4_boot:\t\n");
    asm volatile("LDR    R0,=coproc_boot\t\n");    // coproc boot address
    asm volatile("LDR    R0,[R0]\t\n");            // get address to branch to
    asm volatile("MOVS   R0,R0\t\n");              // Check if 0
    asm volatile("BEQ.N  check_master_m4\t\n");    // if zero in boot reg, we just branch to real reset
    asm volatile("BX     R0\t\n");                 // otherwise, we branch to boot address
  asm volatile("commonboot:\t\n");
    asm volatile("LDR    R0, =reset\t\n");    // Jump to 'real' reset handler
    asm volatile("BX     R0\t\n");
  asm volatile("cm0_boot:\t\n");
    asm volatile("LDR    R0,=coproc_boot\t\n");   // coproc boot address
    asm volatile("LDR    R0,[R0]\t\n");            // get address to branch to
    asm volatile("MOVS   R0,R0\t\n");              // Check if 0
//         asm volatile("B .");
    asm volatile("BEQ.N  check_master_m0\t\n");    // if zero in boot reg, we just branch to  real reset
    asm volatile("LDR    R1,=coproc_stack\t\n");   // pickup coprocesor stackpointer (from syscon CPSTACK)
    asm volatile("LDR    R1,[R1]\t\n");
    asm volatile("MOV    SP,R1\t\n");     
    asm volatile("BX     R0\t\n");                 // goto boot address
  asm volatile("check_master_m0:\t\n");
    asm volatile("ANDS   R1,R1,R5\t\n");           // bit test bit0
    asm volatile("BEQ.N  commonboot\t\n");         // if we get 0, that means we are masters
    asm volatile("B.N    goto_sleep_pending_reset\t\n");   // Otherwise, there is no startup vector for slave, so we go to sleep
  asm volatile("check_master_m4:\t\n");
    asm volatile("ANDS   R1,R1,R5\t\n");           // bit test bit0
    asm volatile("BNE.N  commonboot\t\n");         // if we get 1, that means we are masters
  asm volatile("goto_sleep_pending_reset:\t\n");
    asm volatile("MOV     SP,R5\t\n");             // load 0x1 into SP so that any stacking (eg on NMI) will not cause us to wakeup
        // and write to uninitialised Stack area (instead it will LOCK us up before we cause damage)
        // this code should only be reached if debugger bypassed ROM or we changed master without giving
        // correct start address, the only way out of this is through a debugger change of SP and PC
  asm volatile("sleepo:\t\n");
    asm volatile("WFI\t\n" );                      // go to sleep
    asm volatile("B.N    sleepo\t\n");
}

__attribute__ ((naked))
void ResetM4(void)
{
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
   
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

typedef struct  
{  
  unsigned long m_dwExR0;  
  unsigned long m_dwExR1;  
  unsigned long m_dwExR2;  
  unsigned long m_dwExR3;  
  unsigned long m_dwExR12;  
  unsigned long m_dwExLR;  
  unsigned long m_dwExPC;  
  unsigned long m_dwExPSR;  
}SCortexM3ExContext;  
  
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
  //pointer on function with void parameter and void return value, address of _estackA
  (void (*)(void)) (&_estackA), // Initial stack pointer
  
  ResetISR,                // Reset handler
  NMI_Handler,            // The NMI handler
  HardFault_Handler,      // The hard fault handler
  MemManage_Handler,      // The MPU fault handler
  BusFault_Handler,       // The bus fault handler
  UsageFault_Handler,     // The usage fault handler
  IntDefaultHandler,      // LPC MCU Checksum
  0,      // Reserved
  0,      // Reserved
  0,      // Reserved
  SVC_Handler,            // SVCall handler
  DebugMon_Handler,       // Debug monitor handler
  0,      // Reserved
  PendSV_Handler,         // The PendSV handler
  SysTick_Handler,        // The SysTick handler

  // External Interrupts - Available on M0/M4
  IntDefaultHandler,     // Watchdog / Brown Out Detect
  IntDefaultHandler,         // DMA Controller
  IntDefaultHandler,       // GPIO Group0 Interrupt
  IntDefaultHandler,       // GPIO Group1 Interrupt
  IntDefaultHandler,    // PIO INT0
  IntDefaultHandler,    // PIO INT1
  IntDefaultHandler,    // PIO INT2
  IntDefaultHandler,    // PIO INT3
  IntDefaultHandler,       // UTICK timer
  IntDefaultHandler,         // Multi-Rate Timer
  TimerInterruptHandler,      // Counter Timer 0
  IntDefaultHandler,      // Counter Timer 1
  IntDefaultHandler,        // Smart Counter Timer
  IntDefaultHandler,      // Counter Timer 3
  IntDefaultHandler,   // Flexcomm0 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm1 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm2 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm3 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm4 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm5 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm6 (USART, SPI, I2C)
  IntDefaultHandler,   // Flexcomm7 (USART, SPI, I2C)
  IntDefaultHandler,    // ADC SEQA
  IntDefaultHandler,    // ADC SEQB
  IntDefaultHandler,   // ADC THCMP and OVERRUN ORed
  IntDefaultHandler,		// Digital mic & audio subsystem
  IntDefaultHandler,		// Hardware voice activity detection
  IntDefaultHandler,	// USB Activity
  IntDefaultHandler,		    // USB device
  IntDefaultHandler,         // RTC Timer
  IntDefaultHandler,         // IOH
  IntDefaultHandler,     // Mailbox
  
    //External Interrupts - For M4 only
  IntDefaultHandler,    // PIO INT4
  IntDefaultHandler,    // PIO INT5
  IntDefaultHandler,    // PIO INT6
  IntDefaultHandler,    // PIO INT7
  IntDefaultHandler,      // Counter Timer 2
  IntDefaultHandler,      // Counter Timer 4
  IntDefaultHandler,  // Reserved
  IntDefaultHandler,       // SPIFI
};

                                 
void NMI_Handler(void)
{ while(1) {}
}
                                    
void HardFault_Handler(void)
{ while(1) {}
}
                                   
void MemManage_Handler(void)
{ while(1) {}
}
                                    
void BusFault_Handler(void)
{ while(1) {}
}
                                   
void UsageFault_Handler(void)
{ while(1) {}
}
                                  
void SVC_Handler(void)
{ while(1) {}
}
                                   
void DebugMon_Handler(void)
{ while(1) {}
}
                                    
void PendSV_Handler(void)
{ while(1) {}
}
                                    
void SysTick_Handler(void)
{ while(1) {}
}

//*****************************************************************************
//
// Processor ends up here if an unexpected interrupt occurs or a specific
// handler is not present in the application code.
//
//*****************************************************************************            
void IntDefaultHandler(void) {
    while (1) {
    }
}

void TimerInterruptHandler()
{
  if (Chip_TIMER_MatchPending(LPC_TIMER0, 1)) {
		Chip_TIMER_ClearMatch(LPC_TIMER0, 1);
    
    InterruptRoutine();    
	}
}
