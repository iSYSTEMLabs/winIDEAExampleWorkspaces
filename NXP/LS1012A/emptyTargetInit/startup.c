#include "Layerscape.h" 

extern unsigned long _estack, _sidata, _sdata, _edata, _sbss, _ebss;

void InitializeMMU();
void EnableMMU_EL3();
int main();

void resetHandler()
{
  // Set VBAR_EL3 to start of RAM
  asm("LDR X1, =0x10002000");
  asm("MSR VBAR_EL3, X1");
  
  unsigned long long *pulSrc = (unsigned long long*)&_sidata;
  unsigned long long *pulDest = (unsigned long long*)&_sdata;
 
  while( pulDest < (unsigned long long*)&_edata )
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = (unsigned long long*)&_sbss;
  while ( pulDest < (unsigned long long*)&_ebss )
  {
    *pulDest++ = 0;
  }
  
  //InitializeMMU();
  //EnableMMU_EL3();  
  main();
  asm(" BRK #0");
  while( 1 );    
}

void SynchronousHandler()
{
  while( 1 );    
}

void SErrorHandler()
{
  asm(" BRK #0");
  while( 1 );    
}

void TimerInterruptHandler()
{ 
  SYS_COUNTER_CNTCR = 0;              // Stop System counter
  SYS_COUNTER_CNCTV1 = 0;             // Set counter to 0 (32 LSB)
  SYS_COUNTER_CNCTV2 = 0;             // Set counter to 0 (32 MSB)
  InterruptRoutine();
  
  SYS_COUNTER_CNTCR |= (0x1 << 0);    // Start timer
  
  asm("MSR DAIFCLR, #0x2");           // Enable interrupt
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
  asm(".balign 0x200");
  asm(" B SynchronousHandler");
  asm(".balign 0x80");
  asm(" B TimerInterruptHandler");
  asm(".balign 0x80");
  asm(" B FIQExHandler");
  asm(".balign 0x80");
  asm(" B SErrorHandler");
  
  asm("_rst:");
  asm(" LDR X7,=_estack");
  asm(" MOV SP,X7");
  asm(" B resetHandler");
  asm(" MOV X0,#0xBAAD");
  asm(" MOV X0,#0x600D");
}

void InitializeMMU()
{
  asm("LDR X1, =0x3520"); // 4GB space 4KB granularity
  // Inner-shareable.
  asm("MSR TCR_EL3, X1"); // Normal Inner and Outer Cacheable.
  asm("LDR X1, =0xFF440400"); // ATTR0 Device-nGnRnE ATTR1 Device.
  asm("MSR MAIR_EL3, X1"); // ATTR2 Normal Non-Cacheable. 
  asm("ADR X0, ttb0_base"); // ttb0_base must be a 4KB-aligned address.
  asm("MSR TTBR0_EL3, X0");
  // Set up translation table entries in memory with looped store
  // instructions.
  // Set the level 1 translation table.
  // The first entry points to level2_pagetable.
  asm("LDR X1, = level2_pagetable"); // Must be a 4KB align address.
  asm("LDR X2, =0xFFFFF000");
  asm("AND X2, X1, X2"); // NSTable=0 APTable=0 XNTable=0 PXNTable=0.
  asm("ORR X2, X2, 0x3");
  asm("STR X2, [X0], #8");
  // The second entry is 1GB block from 0x40000000 to 0x7FFFFFFF.
  asm("LDR X2, =0x40000741"); // Executable Inner and Outer Shareable.
  asm("STR X2, [X0], #8"); // R/W at all ELs secure memory
  // AttrIdx=000 Device-nGnRnE.
  // The third entry is 1GB block from 0x80000000 to 0xBFFFFFFF.
  asm("LDR X2, =0x80000741");
  asm("STR X2, [X0], #8");
  // The fourth entry is 1GB block from 0xC0000000 to 0xFFFFFFFF.
  asm("LDR X2, =0xC0000741");
  asm("STR X2, [X0], #8");
  // Set level 2 translation table.
  asm("LDR X0, =level2_pagetable"); // Base address of level2_pagetable.
  asm("LDR X2, =0x00000749"); // Executable Inner and Outer Shareable.
  // R/W at all ELs secure memory.
  // AttrIdx=010 Normal Not Cacheable.
  asm("MOV X4, #512"); // Set 512 level2 block entries.
  asm("LDR X5, =0x00200000");// Increase 2MB address each time.
  asm("loop:");
  asm("STR X2, [X0], #8"); // Each entry occupies 2 words.
  asm("ADD X2, X2, X5");
  asm("SUBS X4, X4, #1");
  asm("BNE loop");
  //And enable mmu on EL3
  
}

void EnableMMU_EL3()
{
  // It is implemented in the CPUECTLR register.
  asm("MRS X0, S3_1_C15_C2_1");
  asm("ORR X0, X0, #(0x1 << 6)"); // The SMP bit.
  asm("MSR S3_1_C15_C2_1, X0");
  // Enable caches and the MMU.
  asm("MRS X0, SCTLR_EL3");
  asm("ORR X0, X0, #(0x1 << 2)"); // The C bit (data cache).
  asm("ORR X0, X0, #(0x1 << 12)"); // The I bit (instruction cache).
  asm("ORR X0, X0, #0x1"); // The M bit (MMU).
  asm("MSR SCTLR_EL3, X0");
  asm("DSB SY");
  asm("ISB");
}

