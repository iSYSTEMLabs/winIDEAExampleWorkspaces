extern int main(void);   
extern unsigned long long _estack, _sidata, _sdata, _edata, _sbss, _ebss;

volatile unsigned valueThroughR0(unsigned val) { return val; } 
#define WRITE_SYS_REG(reg, val) { volatile unsigned _val_ = valueThroughR0(val); asm(" MSR "#reg", X0"); } 

void enableFloatingPoint(void){
  __asm(" mov x0, #3 << 20");
  __asm(" msr cpacr_el1, x0");  // Enable FP/SIMD at EL1
  
  __asm(" mov x0, #3 << 20");
  __asm(" msr CPTR_EL2, x0");   // Enable FP/SIMD at EL2
  
  __asm(" mov x0, #3 << 20");
  __asm(" msr CPTR_EL3, x0");   // Enable FP/SIMD at EL3 
}

void resetHandler(void)
{ 
  unsigned long long *pulSrc = &_sidata;
  unsigned long long *pulDest = &_sdata;
  
  while( pulDest < &_edata )
  {
    *pulDest++ = *pulSrc++;
  }
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }
 
  WRITE_SYS_REG(CONTEXTIDR_EL1, 6);
  enableFloatingPoint();

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

__attribute__ ((section(".A53_1_boot_vectors")))
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

