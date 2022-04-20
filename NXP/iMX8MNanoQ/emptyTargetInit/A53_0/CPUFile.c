#include "iMX8MNanoQ_sfr.h"        

void *memcpy(char *pDest, const char *pSrc, unsigned long int nBytes);


#define GICD_BASE 0x38800000
#define CCM_CCGR92 0x303845C0
#define GICR_BASE 0x38880000

extern void InterruptRoutine();

extern unsigned long long _bootAddrA53_1;
extern unsigned long long _bootAddrA53_2;
extern unsigned long long _bootAddrA53_3;

void setupVBAR(void);
void setupSystemRegisters(void);
void setupGICD(void);
void setupGICR(void);
void setupGICC(void);


void setupVBAR(void) 
{
  //setup vbar (vector base register), points to the interrupt vector table in startup.c
  asm(".global _vector_table"); 
  asm("LDR X0, =_vector_table"); 
  asm("MSR VBAR_EL3, X0");
}

void setupSystemRegisters(void)
{
  //enable clock for GICD, but now is enabled in initialize.ini
  //*((int *) CCM_CCGR92) = 0x00000003;
  
  //enable system registers for GIC
  asm("MOV X0, #(0x0)"); 
  asm("MSR SCR_EL3, X0"); // sets SCR_EL3 to 0x0 -> NS bit is 0x0
  asm("MOV X0, #(0x1)"); 
  asm("MSR S3_6_C12_C12_5, X0"); // enable ICC_SRE_EL3.SRE (enable system registers for EL3, secure version)
  asm("MSR S3_0_C12_C12_5, X0"); // enable ICC_SRE_EL1.SRE (enable system registers for EL1, secure version)
  
  asm("MOV X1, #(0x1)");
  asm("MSR SCR_EL3, X1"); // set SCR_EL3.NS to 1, now we can set Non Secure copy of register
  
  asm("MSR S3_6_C12_C12_5, X0"); // enable ICC_SRE_EL3.SRE (enable system registers for EL3, non secure version)
  asm("MSR S3_0_C12_C12_5, X0"); // enable ICC_SRE_EL1.SRE (enable system registers for EL1, non secure version)
  
  //setup SCR_EL3
  asm("MOV X0, #0"); 
  asm("ORR X0, X0, #(1 << 11)"); // set ST bit
  asm("ORR X0, X0, #(1 << 10)"); // set RW bit, EL1 is AArch64
  asm("ORR X0, X0, #(1 << 3)");  // set EA bit, SError routed to EL3
  asm("ORR X0, X0, #(1 << 2)");  // set FIQ bit, FIQ routed to EL3
  asm("ORR X0, X0, #(1 << 1)");  // set IRQ bit, IRQ routed to EL3 
  asm("MSR SCR_EL3, X0"); 
}

void setupGICD(void)
{
  //sets affinity routing. Affinity routing, a hierarchical scheme, to identify connected cores and for routing interrupts to specific cores
  *((int *) GICD_BASE) = 0x30;
  
  //register format changes, sets affinity routing and enable group 1S, 1NS and group 0
  *((int *) GICD_BASE) = 0x37;
}

void setupGICR(void)
{
  //GICR setup
  *((int *) (GICR_BASE + 0x14)) &= (0x0 << 1); // awake CPU (sends signal)
  
  while(*((int *) (GICR_BASE + 0x14)) & 0x4); // wait until CPU is awake   
}

void setupGICC(void)
{
  //set interrupt priority to highest priority level
  asm("MOV X0, #0xFF");
  asm("MSR S3_0_C4_C6_0, X0"); // ICC_PMR_EL1
  
  //enable group 0 interrupts
  asm("MOV X0, #1");
  asm("MSR S3_0_C12_C12_7, X0"); //ICC_IGRPEN1_EL1
  
  //enable group 1 secure and non secure interrupts
  asm("MOV X0, #3");
  asm("MSR S3_6_C12_C12_7, X0"); //ICC_IGRPEN1_EL3
}


void targetEnableInterrupts(void)
{
  asm("MSR DAIFClr, 0x3"); // enables interrupts
  GPT1.GPT1_CR.B.EN = 0x1; // enable GPT1 (timer)
}

void targetDisableInterrupts(void)
{
  asm("MSR DAIFSet, 0x3"); // disables interrupts
  GPT1.GPT1_CR.B.EN = 0x0; // disable GPT1 (timer)
}

void setupInterrupts()
{
  //sets priority
  *((int *) (GICD_BASE + 0x438)) |= (0x08 << 24);
  
  //sets group and modifier (GPT1 interrupt is Secure group 1)
  *((int *) (GICD_BASE + 0x088)) &= ~(1 << 23); // GROUP
  *((int *) (GICD_BASE + 0xD08)) |= (1 << 23); // MOD
  
  //sets routing
  *((int *) (GICD_BASE + 0x61C0)) = 0x0;
  
  //sets interrupt type as level sensitive
  *((int *) (GICD_BASE + 0xC10)) |= (0x0 << 7);
  
  //enable interrupt
  *((int *) (GICD_BASE + 0x108)) |= (1 << 23);
}

void enableAllCores()
{
  
  // Set A53 core 1 boot address and enable said core
  unsigned long long bootAddr = (unsigned long long)&_bootAddrA53_1;
  SRC.SRC_GPR3.R = (bootAddr >> 24);
  SRC.SRC_GPR4.R = (bootAddr >> 2);
  SRC.SRC_A53RCR1.B.A53_CORE1_ENABLE = 1;
  
  // Set A53 core 2 boot address and enable said core
  bootAddr = (unsigned long long)&_bootAddrA53_2;
  SRC.SRC_GPR5.R = (bootAddr >> 24);
  SRC.SRC_GPR6.R = (bootAddr >> 2);
  SRC.SRC_A53RCR1.B.A53_CORE2_ENABLE = 1;
  
  // Set A53 core 3 boot address and enable said core
  bootAddr = (unsigned long long)&_bootAddrA53_3;
  SRC.SRC_GPR7.R = (bootAddr >> 24);
  SRC.SRC_GPR8.R = (bootAddr >> 2);
  SRC.SRC_A53RCR1.B.A53_CORE3_ENABLE = 1;
  
  // Release the M4 core reset
  IOMUXC_GPR.IOMUXC_GPR_GPR22.B.CM7_CPUWAIT = 0;
}

void setupTimer()
{
  //GPT1 setup (general purpose timer)
  GPT1.GPT1_CR.B.EN = 0x0; //disable GPT1
  GPT1.GPT1_IR.R = 0x0; // disable interrupts
  
  GPT1.GPT1_CR.B.SWR = 0x1; // software reset timer 
  
  GPT1.GPT1_CR.B.EN_24M = 0x1; // enable 24M clock
  GPT1.GPT1_CR.B.CLKSRC = 0x5; // selects 24M clock as input
  
  GPT1.GPT1_SR.R = 0x3F; // clears interrupt flags
  
  GPT1.GPT1_CR.B.FRR = 0x0; // free run mode (after compare reset counter to 0)
  
  //clock frequency after prescaler is 1.6 MHz 
  GPT1.GPT1_OCR1.B.COMP = 1600; //compare register (set for 1ms)
  
  GPT1.GPT1_CR.B.ENMOD = 0x1; // reset counter on enable
  
  GPT1.GPT1_PR.R = 0xE000; // set 24M prescaler to 15 and default prescaler to 0
  
  GPT1.GPT1_CR.B.EN = 0x1; //enable GPT1
  
  GPT1.GPT1_IR.R = 0x1; //enable interrupt
}


void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  enableAllCores();

  setupVBAR();
  setupSystemRegisters();
  setupGICD();
  setupGICR();
  setupGICC();

  //sets GPT1 interrupt
  setupInterrupts();

  setupTimer();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}

void disableWatchdog()
{
}


void TimerInterruptHandler()
{
  targetDisableInterrupts(); // disables interrupts and timer
  
  unsigned int INTID = 0;
  
  //S3_0_C12_C12_0 = ICC_IAR1_EL1
  //copy ID of current acknowledge interrupt to INTID
  asm("MRS %0, S3_0_C12_C12_0"
      :"=r"(INTID));
  
  //checks if ID is 0x57 - INTID of GPT1
  if(INTID == 0x57) { 
    InterruptRoutine();
    GPT1.GPT1_SR.R = 0x3F; //clear interrupt
  }
  
  //S3_0_C12_C12_1 = ICC_EOIR1_EL1
  //write 0x57 to end of interrupt register, clears interrupt IAR
  asm("MSR S3_0_C12_C12_1, %0"
      :
      :"r"(INTID));
  
  targetEnableInterrupts(); // enables interrupts and timer
}


// Current workaround for ARMv8-A samples which do not use MMU. If MMU is not used,
// core cannot do unaligned accesses and library memcpy version does them,
// so we need to make our own memcpy. GCC insists on using memcpy for some cases
// (e.g. in extended iTests), even though we specifically request build with no libraries
void *memcpy(char *pDest, const char *pSrc, unsigned long int nBytes)
{
  unsigned long int i;
  
  void *pOrigDest = pDest;
  
  for (i=0; i<nBytes;i++)
  {
    *pDest++ = *pSrc++;
  }
  
  return pOrigDest;
}
