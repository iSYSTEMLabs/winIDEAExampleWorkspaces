
extern int main(int Core);
unsigned long getCoreIndex();

extern unsigned long _estackC0;
extern unsigned long _estackC1;
extern unsigned long _estackC2;
extern unsigned long _estackC3;
extern unsigned long _estackC4;
extern unsigned long _estackC5;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;

__attribute__ ((naked))
void Reset()
{
// In this workspace all R52 cores starts here
// As first core must be identified that SP is correctly set
  __asm__("     MRC    p15, 0, r3, c0, c0, 5 "); // read MPIDR
  __asm__("     lsr    r3,r3,#8              "); // check MPIDR.AFF1 first to findout R52 cluster
  __asm__("     uxtb   r3,r3                 ");
  __asm__("     cmp    r3,#0                 "); 
  __asm__("     beq    c01                   "); // MPIDR.AFF1 = 0
  __asm__("     cmp    r3,#1                 "); 
  __asm__("     beq    c23                   "); // MPIDR.AFF1 = 1
  __asm__("     b      c45                   "); // MPIDR.AFF1 = other
  __asm__("c01: MRC    p15, 0, r3, c0, c0, 5 "); 
  __asm__("     uxtb   r3,r3                 ");
  __asm__("     cmp    r3,#1                 ");
  __asm__("     beq    c1                    ");
  __asm__("c0:  ldr    R0, =_estackC0        "); // cluster0 core 0
  __asm__("     mov    sp, R0                ");
  __asm__("     b      e12345                ");
  __asm__("c1:  ldr    R0, =_estackC1        "); // cluster0 core 1
  __asm__("     mov    sp, R0                ");
  __asm__("     b      e12345                ");
  __asm__("c23: MRC    p15, 0, r3, c0, c0, 5 ");
  __asm__("     uxtb   r3,r3                 ");
  __asm__("     cmp    r3,#1                 ");
  __asm__("     beq    c3                    ");
  __asm__("c2:  ldr    R0, =_estackC2        ");  // cluster1 core 0
  __asm__("     mov    sp, R0                ");
  __asm__("     b      e12345                ");
  __asm__("c3:  ldr    R0, =_estackC3        ");  // cluster1 core 1
  __asm__("     mov    sp, R0                ");
  __asm__("     b      e0                    ");
  __asm__("c45: MRC    p15, 0, r3, c0, c0, 5 ");
  __asm__("     uxtb   r3,r3                 ");
  __asm__("     cmp    r3,#1                 ");
  __asm__("     beq    c5                    ");
  __asm__("c4:  ldr    R0, =_estackC4        ");  // cluster2 core 0
  __asm__("     mov    sp, R0                ");
  __asm__("     b      e12345                ");
  __asm__("c5:  ldr    R0, =_estackC5        ");  // cluster2 core 1
  __asm__("     mov    sp, R0                ");
  __asm__("     b      e12345                ");
  
 // cluster 0 core 1 entry point
 // some initialization
  __asm__("e0:  nop");
  {
    volatile unsigned long *pulSrc = &_etext;
    volatile unsigned long *pulDest = &_data;
  
    while( pulDest < &_edata )
      *pulDest++ = *pulSrc++;
  
    pulDest = &_bss;
    while ( pulDest < &_ebss )
      *pulDest++ = 0;       
  }
// entry point for all other cores 
  __asm__("e12345:  nop");  
  
  int ci=getCoreIndex();
  main(ci);
}

unsigned long getMPIDR()
{
  __asm(" MRC    p15, 0, r3, c0, c0, 5");
}

unsigned long getCoreIndex()
{
  unsigned long index;
  unsigned long mpidr=getMPIDR();
  switch((mpidr>>8)&0xFF)
  {
  case 0 :index=0; break;
  case 1 :index=2; break;
  default:index=4; break;
  }
  if(mpidr&0xFF)
     index+=1;
  return index;
}

__attribute__ ((section(".boot_headers")))
void (* const g_pBootHeaders[])() =
{
    0xA55A0001l,                            // magic header                
    Reset,                                  // The reset handler
    0,                                      // 
    0,                                      // 
    0,                                      // 
    0,                                      // 
};


