
extern int main();
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
  // Set sp to core stack
  __asm__("     ldr    R0, =_estackC2        ");
  __asm__("     mov    sp, R0                ");  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;

  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  
  main();
}

__attribute__ ((section(".vector_table"))) __attribute__ ((naked))
void rst()
{
  __asm__(" B Reset");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
  __asm__(" B intDefaultHandler");
}