
extern int main(void);


extern unsigned long _estack_usr;

extern unsigned long _etext;
extern unsigned long _sdata;
extern unsigned long _edata;
extern unsigned long _sbss;
extern unsigned long _ebss;


__attribute__((naked)) 
void Reset()
{ 
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_sdata;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_sbss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

void IntDefaultHandler()
{
  asm(" BKPT");
  while(1)
  {
  }
}

__attribute__ ((section (".mcu_1_r5_boot_vectors")))
__attribute__ ((naked))
void reset()
{
  asm(" B Reset_Handler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
  asm(" B IntDefaultHandler");
}



