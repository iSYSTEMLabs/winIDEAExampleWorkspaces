#include "LPC54100.h"

extern int main(void);
static void TimerInterruptHandler(void);

extern unsigned long _estackA;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;  
extern unsigned long _bss;
extern unsigned long _ebss;

__attribute__ ((naked))
void ResetISR()
{
        asm volatile(".set   cpu_ctrl,       0x40000300\t\n");
        asm volatile(".set   coproc_boot,    0x40000304\t\n");
        asm volatile(".set   coproc_stack,   0x40000308\t\n");  
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
        asm volatile("ANDS   R1,R1,R5\t\n");           // bit test bit0 of cpuctrl
        asm volatile("BNE.N  commonboot\t\n");         // if we get 1, that means M4 is master -> commonboot
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
void ResetM4()
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
  
__attribute__( ( naked ) )  
void IntDefaultHandler()  
{  
  register SCortexM3ExContext * psCortexM3ExContext __asm("r0");  
  register unsigned long dwLR __asm("lr");  
  
  if ( dwLR & 4 )  
    asm(" mrs r0, psp");  
  else  
    asm(" mrs r0, msp");  
  
  asm(" BKPT");  
  while ( 1 );  
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
  (unsigned long)& _estackA,               // Initial stack pointer
                             
  ResetISR,               // Reset handler
  IntDefaultHandler,      // NMI handler
  IntDefaultHandler,      // Hard fault handler
  IntDefaultHandler,      // MPU fault handler
  IntDefaultHandler,      // Bus fault handler
  IntDefaultHandler,      // Usage fault handler
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  IntDefaultHandler,      // SVCall handler
  IntDefaultHandler,      // Debug monitor handler
  0,                      // Reserved
  IntDefaultHandler,      // PendSV handler
  IntDefaultHandler,      // SysTick handler
  // External interrupts
  IntDefaultHandler,      // WDT interrupt
  IntDefaultHandler,      // BOD interrupt
  0,                      // Reserved
  IntDefaultHandler,      // DMA interrupts
  IntDefaultHandler,      // GPIO group 0 interrupt
  IntDefaultHandler,      // Pin interrupt 0
  IntDefaultHandler,      // Pin interrupt 1
  IntDefaultHandler,      // Pin interrupt 2
  IntDefaultHandler,      // Pin interrupt 3
  IntDefaultHandler,      // Micro-tick timer interrupt
  IntDefaultHandler,      // Multi-rate timer interrupt
  TimerInterruptHandler,  // CT32B0 interrupt
  IntDefaultHandler,      // CT32B1 interrupt
  IntDefaultHandler,      // CT32B2 interrupt
  IntDefaultHandler,      // CT32B3 interrupt
  IntDefaultHandler,      // CT32B4 interrupt
  IntDefaultHandler,      // SCT interrupt
  IntDefaultHandler,      // USART0 interrupt
  IntDefaultHandler,      // USART1 interrupt
  IntDefaultHandler,      // USART2 interrupt
  IntDefaultHandler,      // USART3 interrupt
  IntDefaultHandler,      // I2C0 interrupt
  IntDefaultHandler,      // I2C1 interrupt
  IntDefaultHandler,      // I2C2 interrupt
  IntDefaultHandler,      // SPI0 interrupt
  IntDefaultHandler,      // SPI1 interrupt
  IntDefaultHandler,      // ADC0 sequence A completion
  IntDefaultHandler,      // ADC0 sequence B completion
  IntDefaultHandler,      // ADC0 threshold compare and error
  IntDefaultHandler,      // RTC alarm/wake-up interrupts
  0,                      // Reserved
  IntDefaultHandler,      // Mailbox interrupt
  
  // External interrupts - M4 only
  IntDefaultHandler,      // GPIO group 1 interrupt
  IntDefaultHandler,      // Pin interrupt 4
  IntDefaultHandler,      // Pin interrupt 5
  IntDefaultHandler,      // Pin interrupt 6
  IntDefaultHandler,      // Pin interrupt 7
  0,                      // Reserved
  0,                      // Reserved
  0,                      // Reserved
  IntDefaultHandler,      // Repetitive interrupt timer
};

extern void InterruptRoutine();

static void TimerInterruptHandler(void)
{
  CT32B0_BASE |= (0x1 << CT32B0_IR_MR0INT);
	InterruptRoutine();
}

