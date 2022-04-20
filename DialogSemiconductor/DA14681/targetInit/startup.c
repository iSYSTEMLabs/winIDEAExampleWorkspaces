extern int main(void);
extern void InterruptRoutine();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;
extern unsigned long _VTOR;

__attribute__ ((naked))
void Reset()
{ 
  __asm__("ldr R0, =_estack");
  __asm__("mov sp, R0");
    
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
    *pulDest++ = *pulSrc++;
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
    *pulDest++ = 0;    
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}

static void TimerInterruptHandler(void)
{
  InterruptRoutine();
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
    (void (*)(void))(&_estack),
                                            //  The initial stack pointer
    Reset,                                  //  The reset handler
    IntDefaultHandler,                      //  The NMI handler
    IntDefaultHandler,                      //  The hard fault handler
    0,                                      //  Reserved
    0,                                      //  Reserved
    0,                                      //  Reserved
    0,                                      //  Reserved
    0,                                      //  Reserved
    0,                                      //  Reserved
    0,                                      //  Reserved
    IntDefaultHandler,                      //  SVCall handler
    0,                                      //  Reserved
    0,                                      //  Reserved
    IntDefaultHandler,                      //  PendSV
    IntDefaultHandler,                      //  SysTick
    IntDefaultHandler,                      //  BLE_WAKEUP_LP_IRQ
    IntDefaultHandler,                      //  BLE_GEN_IRQ
    0,                                      //  Reserved
    0,                                      //  Reserved
    IntDefaultHandler,                      //  RFCAL_IRQ
    0,                                      //  Reserved 
    IntDefaultHandler,                      //  CRYPTO_IRQ
    IntDefaultHandler,                      //  MRM_IRQ
    IntDefaultHandler,                      //  UART_IRQ
    IntDefaultHandler,                      //  UART2_IRQ
    IntDefaultHandler,                      //  I2C_IRQ
    IntDefaultHandler,                      //  I2C2_IRQ
    IntDefaultHandler,                      //  SPI_IRQ
    IntDefaultHandler,                      //  SPI2_IRQ
    IntDefaultHandler,                      //  ADC_IRQ
    IntDefaultHandler,                      //  KEYBRD_IRQ
    IntDefaultHandler,                      //  IRGEN_IRQ
    IntDefaultHandler,                      //  WKUP_GPIO_IRQ
    TimerInterruptHandler,                  //  SWTIM0_IRQ
    IntDefaultHandler,                      //  SWTIM1_IRQ
    IntDefaultHandler,                      //  QUADEC_IRQ
    IntDefaultHandler,                      //  USB_IRQ
    IntDefaultHandler,                      //  PCM_IRQ
    IntDefaultHandler,                      //  SRC_IN_IRQ
    IntDefaultHandler,                      //  SRC_OUT_IRQ
    IntDefaultHandler,                      //  VBUS_IRQ
    IntDefaultHandler,                      //  DMA_IRQ
    IntDefaultHandler,                      //  RF_DIAG_IRQ
    IntDefaultHandler,                      //  TRNG_IRQ
    IntDefaultHandler,                      //  DCDC_IRQ
    IntDefaultHandler,                      //  XTAL16RDY_IRQ
    0,                                      //  Reserved 
};
