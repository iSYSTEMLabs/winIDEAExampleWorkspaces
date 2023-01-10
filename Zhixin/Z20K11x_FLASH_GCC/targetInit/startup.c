void call_main();
extern void main();
extern void TimerInterruptHandler();
extern void LPTIMER_IRQHandler();
extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;
extern unsigned long __StackTop;

void ResetISR(void) __attribute__((naked));
void ResetISR(void)
{
  unsigned long *pulSrc, *pulDest;

  register unsigned long stackreg __asm("sp");
  stackreg = (unsigned long)&__StackTop;

  //
  // Copy the data segment initializers from flash to SRAM.
  //
  pulSrc = &__etext;
  for (pulDest = &__data_start__; pulDest < &__data_end__;)
  {
      *pulDest++ = *pulSrc++;
  }

  //
  // Zero fill the bss segment.
  //
  for (pulDest = &__bss_start__; pulDest < &__bss_end__;)
  {
      *pulDest++ = 0;
  }

  //
  // Call the application's entry point.
  //
  main();
}

static void IntDefaultHandler(void)
{
  //
  // Enter an infinite loop.
  //
  while (1)
  {
  }
}

static void NmiSR(void)
{
  //
  // Enter an infinite loop.
  //
  while (1)
  {
  }
}

static void FaultISR(void)
{
  //
  // Enter an infinite loop.
  //
  while (1)
  {
  }
}

__attribute__((section(".vectors"))) void (*const g_pfnVectors[])(void) =
    {
        (void (*)(void))(&__StackTop),
        ResetISR,               /* Reset Handler                              */
        NmiSR,                  /* NMI Handler                                */ 
        FaultISR,               /* Hard Fault Handler                         */
        IntDefaultHandler,      /* Reserved                                   */
        IntDefaultHandler,      /* Reserved                                   */
        IntDefaultHandler,      /* Reserved                                   */
        0,                      /* Reserved                                   */
        0,                      /* Reserved                                   */
        0,                      /* Reserved                                   */
        0,                      /* Reserved                                   */
        IntDefaultHandler,      /* SVCall Handler                             */
        IntDefaultHandler,      /* Reserved                                   */
        0,                      /* Reserved                                   */
        IntDefaultHandler,      /* PendSV Handler                             */
        IntDefaultHandler,      /* SysTick Handler                            */ 
        
        // External interrupts
        IntDefaultHandler,      /* DMA channel 0-3 transfer complete          */
        IntDefaultHandler,      /* DMA channel 4-7 transfer complete          */
        IntDefaultHandler,      /* DMA channel 8-11 transfer complete         */
        IntDefaultHandler,      /* DMA channel 12-15 transfer complete        */
        IntDefaultHandler,      /* DMA error interrupt channels 0-16          */
        IntDefaultHandler,      /* Inter-Integrated Circuit 0                 */
        IntDefaultHandler,      /* Inter-Integrated Circuit 1                 */
        IntDefaultHandler,      /* Serial Peripheral Interface 0              */
        IntDefaultHandler,      /* Serial Peripheral Interface 1              */   
        IntDefaultHandler,      /* Serial Peripheral Interface 2              */
        IntDefaultHandler,      /* UART0                                      */
        IntDefaultHandler,      /* UART1                                      */
        IntDefaultHandler,      /* UART2                                      */
        IntDefaultHandler,      /* UART3                                      */
        IntDefaultHandler,      /* Analog-to-Digital Converter                */
        IntDefaultHandler,      /* Flash Controller                           */
        IntDefaultHandler,      /* Analog Comparator                          */
        IntDefaultHandler,      /* TIM0 or channel 0-7                        */
        IntDefaultHandler,      /* TIM1 or channel 0-7                        */
        IntDefaultHandler,      /* TIM2 or channel 0-7                        */
        IntDefaultHandler,      /* CAN FD controller 0                        */
        IntDefaultHandler,      /* CAN FD controller 1                        */
        IntDefaultHandler,      /* RTC second, alarm                          */
        IntDefaultHandler,      /* LVD, LVW                                   */
        IntDefaultHandler,      /* tcoint, errint                             */
        IntDefaultHandler,      /* system clock controller                    */
        IntDefaultHandler,      /* watch dog                                  */
        IntDefaultHandler,      /* external watchdog monitor                  */
        IntDefaultHandler,      /* System timer                               */
        IntDefaultHandler,      /* system reset and mode control              */
        IntDefaultHandler,      /* PORT A/B/C                                 */
        IntDefaultHandler,      /* PORT D/E                                   */
};