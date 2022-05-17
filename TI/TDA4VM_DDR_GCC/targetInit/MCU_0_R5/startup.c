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

__attribute__ ((section (".resetCommonR5Sect")))
__attribute__ ((naked))
void resetCommonR5()
{
  // MPU setup required before proceeding with execution from DDR
  
  asm("mov r6, #0x0000");             // Region 0
  asm("MCR p15, 0, r6, c6, c2, 0 ");  // Write RNGR
  
  asm("mov r6, #0x0000");             // Base address: 0x0000'0000
  asm("MCR p15, 0, r6, c6, c1, 0 ");  // Write MPU Region Base Address Register

  asm("mov r6, #0x003F");             // 4GB
  asm("MCR p15, 0, r6, c6, c1, 2 ");  // Write MPU Region Base Address Register
  
  asm("mov r6, #0x1310");             // Not executable memory
  asm("MCR p15, 0, r6, c6, c1, 4 ");  // Write MPU Region Access Control Register
  
  
  asm("mov r6, #0x0001");             // Region 1
  asm("MCR p15, 0, r6, c6, c2, 0 ");  
  
  asm("ldr r6,=#0x00000000");         // Base address: 0x0000'0000, RAM
  asm("MCR p15, 0, r6, c6, c1, 0 ");  

  asm("mov r6, #0x0015");             // 2KB
  asm("MCR p15, 0, r6, c6, c1, 2 ");  
  
  asm("mov r6, #0x053B");             // Read/write access, executable
  asm("MCR p15, 0, r6, c6, c1, 4 ");
  
  
  asm("mov r6, #0x0002");             // Region 2
  asm("MCR p15, 0, r6, c6, c2, 0 ");  
  
  asm("mov r6, #0x80000000");         // Base address: 0x8000'0000, DDR memory
  asm("MCR p15, 0, r6, c6, c1, 0 ");  

  asm("mov r6, #0x003D");             // 2GB
  asm("MCR p15, 0, r6, c6, c1, 2 ");
  
  asm("mov r6, #0x033B");             // R/W access, executable   
  asm("MCR p15, 0, r6, c6, c1, 4 ");
  
  asm("MRC p15, 0, r6, c1, c0, 0 ");  // Read System Control register
  asm("ORR r6, r6, #0x1");
  asm("DSB");
  asm("MCR p15, 0, r6, c1, c0, 0 ");  // Enable MPU
  asm("ISB");
  
  register int nCore __asm("r1");
  asm(" MRC    p15, 0, r1, c0, c0, 5"); // Core index in r1
  nCore &= 0xFFF;
  if (nCore == 0x001)
  {
    asm("ldr r15,=_appAddrMCU_1_R5");
  }
  else if(nCore == 0x100)
  {
    asm("ldr r15,=_appAddrMAIN_0_R5_0");
  }
  else if(nCore == 0x101)
  {
    asm("ldr r15,=_appAddrMAIN_0_R5_1");
  }
  else if(nCore == 0x200)
  {
    asm("ldr r15,=_appAddrMAIN_1_R5_0");
  }
  else if(nCore == 0x201)
  {
    asm("ldr r15,=_appAddrMAIN_1_R5_1");
  }
  else
    asm("BKPT");
  
  asm(" B Reset_Handler");            // Jump to reset handler in DDR memory
}

__attribute__ ((section (".vectors")))
__attribute__ ((naked))
void vectors()
{
  asm(" B resetCommonR5");
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



