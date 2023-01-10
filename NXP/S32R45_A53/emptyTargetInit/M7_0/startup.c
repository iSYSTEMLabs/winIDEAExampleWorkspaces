
extern int main();

extern unsigned long _estackC0;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;
extern unsigned long _sidata;
extern unsigned long _sdata;
extern unsigned long _sbss;

__attribute__ ((naked))
void Reset()
{

  __asm__("  ldr R0, =_estackC0 "); 
  __asm__("  mov sp, R0         ");

  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;

  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;

  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;       
  /*Enable FPU*/
  __asm__("LDR.W   R0, =0xE000ED88");       // CPACR is located at address 0xE000ED88
  __asm__("LDR     R1, [R0]");              // Read CPACR
  __asm__("ORR     R1, R1, #(0xF << 20)");  // Set bits 20-23 to enable CP10 and CP11 coprocessors
  __asm__("STR     R1, [R0]");              // Write back the modified value to the CPACR
  __asm__("DSB");                           // Wait for store to complete
  __asm__("ISB");                           // Reset pipeline now the FPU is enabled
  main();
}

void IntDefaultHandler()
{
  while(1)
  {
  }
}

__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&_estackC0),            // Tplhe initial stack pointer
    Reset,                                  // The reset handler
    IntDefaultHandler,                      // The NMI handler
    IntDefaultHandler,                      // The hard fault handler
    IntDefaultHandler,                      // The MPU fault handler
    IntDefaultHandler,                      // The bus fault handler
    IntDefaultHandler,                      // The usage fault handler
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    0,                                      // Reserved
    IntDefaultHandler,                      // SVCall handler
    IntDefaultHandler,                      // Debug monitor handler
};