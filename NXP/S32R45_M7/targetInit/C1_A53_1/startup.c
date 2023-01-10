#include "main.h"    

extern unsigned long _estack, _sidata, _sdata, _edata, _sbss, _ebss;

#define AARCH64INST_MSR(o0, op1, CRn, CRm, op2, Rt) ((((o0) & 1) << 19) | (((op1) & 7) << 16) | (((CRn) & 0xF) << 12) | (((CRm) & 0xF) << 8) | (((op2) & 0x7) << 5) | ((Rt) & 0x1F) | 0xD5100000)
#define AARCH64INST_MSR_X0(o0, op1, CRn, CRm, op2) AARCH64INST_MSR(o0, op1, CRn, CRm, op2, 0)

volatile unsigned valueThroughR0(unsigned val) { return val; } 
#define WRITE_SYS_REG(reg, val) { volatile unsigned _vaaaal_ = valueThroughR0(val); asm(" MSR "#reg", X0"); } 

void dropToEL1()
{
/*=============================================================*/
/*      Enable FP/SIMD at EL1                                  */
/*=============================================================*/
  __asm(" mov x0, #3 << 20        ");
  __asm(" msr cpacr_el1, x0       ");    /* Enable FP/SIMD at EL1 */

/*=============================================================*/
/*      Initialize sctlr_el1                                   */
/*=============================================================*/
  __asm(" mov x0, xzr             ");
  __asm(" orr x0, x0, #(1 << 29)  ");        /* Checking http://infocenter.arm.com/help/index.jsp?topic=/com.arm.doc.ddi0500d/CIHDIEBD.html */
  __asm(" orr x0, x0, #(1 << 28)  ");        /* Bits 29,28,23,22,20,11 should be 1 (res1 on documentation) */
  __asm(" orr x0, x0, #(1 << 23)  ");
  __asm(" orr x0, x0, #(1 << 22)  ");
  __asm(" orr x0, x0, #(1 << 20)  ");
  __asm(" orr x0, x0, #(1 << 11)  ");
  __asm(" msr sctlr_el1, x0       ");

/*=============================================================*/
/*      Initialize scr_el3                                     */
/*=============================================================*/
  __asm(" mrs x0, scr_el3         ");
  __asm(" orr x0, x0, #(1<<10)    ");    /* Lower EL is 64bits */
  __asm(" msr scr_el3, x0         ");

/*=============================================================*/
/*      Initialize spsr_el3                                    */
/*=============================================================*/
  __asm(" mov x0, xzr             ");
  __asm(" mov x0, #0b00101        ");    /* EL1 */
  __asm(" orr x0, x0, #(1 << 8)   ");    /* Enable SError and External Abort. */
  __asm(" orr x0, x0, #(1 << 7)   ");    /* IRQ interrupt Process state mask. */
  __asm(" orr x0, x0, #(1 << 6)   ");    /* FIQ interrupt Process state mask. */
  __asm(" msr spsr_el3, x0        ");

/*=============================================================*/
/*      Initialize elr_el3                                     */
/*=============================================================*/
  __asm(" adr x0, el1_secure      ");
  __asm(" msr elr_el3, x0         ");
  __asm("                         ");
  __asm(" eret                    ");

  __asm("el1_secure:              ");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" NOP");
  __asm(" b .");
}

void resetHandler()
{
  // Needs full AARCH64 initialization. E.g.:
  // - stack pointers for all privilege levels
  // - MMU
  // - vector table offset
 
  WRITE_SYS_REG(CONTEXTIDR_EL1, 6);

  volatile unsigned long long *pulSrc = &_sidata;
  volatile unsigned long long *pulDest = &_sdata;
  while(pulDest < &_edata )
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }

  main();

  asm(" BRK #0");
  while( 1 );    
}

void UndefinedInstructionExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void HypervisorCalExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void PrefetchAbortExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void DataAbortExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void HypTrapExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void IRQExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void FIQExHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

__attribute__ ((section(".isr_vector")))
void reset()
{
  asm(" B _rst");
  asm(" B UndefinedInstructionExHandler");
  asm(" B HypervisorCalExHandler");
  asm(" B PrefetchAbortExHandler");
  asm(" B DataAbortExHandler");
  asm(" B HypTrapExHandler");
  asm(" B IRQExHandler");
  asm(" B FIQExHandler");
  asm("_rst:");
  asm(" LDR X7,=_estack");
  asm(" MOV SP,X7");
  asm(" B resetHandler");
  asm(" MOV X0,#0xBAAD");
  asm(" MOV X0,#0x600D");
}

