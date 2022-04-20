extern unsigned long _estack, _sidata, _sdata, _edata, _sbss, _ebss;
extern int main(void);

void resetHandler()
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
  
  main();
  asm(" BRK #0");
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

__attribute__ ((section(".isr_vector")))
void reset()
{
  asm(" B _rst");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm("_rst:");
  asm(" LDR X0, =_estack");
  asm(" MOV SP, X0");
  asm(" B resetHandler");
}