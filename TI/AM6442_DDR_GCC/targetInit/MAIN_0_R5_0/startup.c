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
  while(1)
  {
  }
}

__attribute__ ((section (".main_0_r5_0_boot_vectors")))
__attribute__ ((naked))
void vector_table()
{
  asm(" B Setup_MPU");
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

__attribute__ ((section (".main_0_r5_0_boot_vectors")))
__attribute__ ((naked))
void Setup_MPU()
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
  
  asm("ldr r6,=#0x00000000");         // Base address: 0x0000'0000
  asm("MCR p15, 0, r6, c6, c1, 0 ");  

  asm("mov r6, #0x0011");             // 512B
  asm("MCR p15, 0, r6, c6, c1, 2 ");  
  
  asm("mov r6, #0x053F");             // Read/write access, executable
  asm("MCR p15, 0, r6, c6, c1, 4 ");
  
  asm("mov r6, #0x0002");             // Region 2
  asm("MCR p15, 0, r6, c6, c2, 0 ");  
  
  asm("mov r6, #0x78000000");         // Base address: 0x7800'0000, RAM memory
  asm("MCR p15, 0, r6, c6, c1, 0 ");  

  asm("mov r6, #0x002F");             // 16MB
  asm("MCR p15, 0, r6, c6, c1, 2 ");
  
  asm("mov r6, #0x053F");             // Read/write access, executable
  asm("MCR p15, 0, r6, c6, c1, 4 ");
  
  asm("mov r6, #0x0003");             // Region 3
  asm("MCR p15, 0, r6, c6, c2, 0 ");  
  
  asm("mov r6, #0x80000000");         // Base address: 0x8000'0000, DDR memory
  asm("MCR p15, 0, r6, c6, c1, 0 ");  

  asm("mov r6, #0x003D");             // 2GB
  asm("MCR p15, 0, r6, c6, c1, 2 ");
  
  asm("mov r6, #0x030B");             // R/W access, executable 
  asm("MCR p15, 0, r6, c6, c1, 4 ");
  
  asm("mov r6, #0x0004");             // Region 4
  asm("MCR p15, 0, r6, c6, c2, 0 ");  
  
  asm("mov r6, #0x70000000");         // Base address: 0x7000'0000, RAM memory
  asm("MCR p15, 0, r6, c6, c1, 0 ");  

  asm("mov r6, #0x002F");             // 16MB
  asm("MCR p15, 0, r6, c6, c1, 2 ");
  
  asm("mov r6, #0x053F");             // Read/write access, executable
  asm("MCR p15, 0, r6, c6, c1, 4 ");  
  
  asm("MRC p15, 0, r6, c1, c0, 0 ");  // Read System Control register
  asm("ORR r6, r6, #0x1");            // Enable MPU
  asm("BIC r6, r6, #0x1000");         // Disable I-Cache
  asm("BIC r6, r6, #0x04");           // Disable D-Cache
  asm("ORR r6, r6, #0x01000000");     // VIC controller provides interrupt for IRQ
  
  asm("DSB");
  asm("MOV r0, #0");
  asm("MCR p15, 0, r0, c7, c5, 0");   // Invalidate Instruction Cache
  asm("MCR p15, 0, r0, c7, c5, 6");   // Invalidate branch prediction array
  asm("MCR p15, 0, r6, c1, c0, 0 ");  // Write back control register
  asm("ISB");
  
  asm(" B Reset_Handler");            // Jump to reset handler in DDR memory
}