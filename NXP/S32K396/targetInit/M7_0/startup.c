extern int main();
extern void TimerInterruptHandler();

extern unsigned long __stack;

extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;
extern unsigned long __VTOR;


__attribute__ ((naked))
void Reset()
{

  __asm__("  ldr R0, =__stack"); 
  __asm__("  mov sp, R0         ");

  volatile unsigned long *pulSrc = &__etext;
  volatile unsigned long *pulDest = &__data_start__;

  while( pulDest < &__data_end__ )
    *pulDest++ = *pulSrc++;

  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__)
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

void TimerInterruptHandler()
{
}
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
   (void (*)(void))(&__stack),              // Tplhe initial stack pointer
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
    0,
    IntDefaultHandler,                      // Pendable request for system service (PendableSrvReq)
    IntDefaultHandler,                      // System tick timer (SysTick)
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,                      // DMA transfer complete and error CH0 (dma_ipi_int[0] | dma_ipi_err_int[0])
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    TimerInterruptHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    0,
    0,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
    IntDefaultHandler,
};
