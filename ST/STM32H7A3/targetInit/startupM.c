
extern void SystemInit(void);
extern int main(void);
extern void TimerInterruptHandler();

extern unsigned long _estack;

extern unsigned long _etext;
extern unsigned long _data;
extern unsigned long _edata;
extern unsigned long _bss;
extern unsigned long _ebss;


__attribute__ ((naked))
void Reset()
{
  asm("ldr sp,=_estack"); //rt BreakPoint: id=testLatchAndStopReset
  
  volatile unsigned long *pulSrc = &_etext;
  volatile unsigned long *pulDest = &_data;
  
  while( pulDest < &_edata )
  {
    *pulDest++ = *pulSrc++;
  }
    
  
  pulDest = &_bss;
  while ( pulDest < &_ebss )
  {
    *pulDest++ = 0;
  }

  SystemInit();
  
  main();
}

void IntDefaultHandler()
{
  while(1);
}


__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) =
{
  (void (*)(void))(&_estack),               // The initial stack pointer
  Reset,                                  // The reset handler
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
  0,
  IntDefaultHandler,
  TimerInterruptHandler,

  IntDefaultHandler, /* Window WatchDog              */
  IntDefaultHandler, /* PVD/PVM through EXTI Line detection */
  IntDefaultHandler, /*Tamper and TimeStamps through the EXTI line */
  IntDefaultHandler, /* RTC Wakeup through the EXTI line */
  IntDefaultHandler, /* FLASH                        */
  IntDefaultHandler, /* RCC                          */
  IntDefaultHandler, /* EXTI Line0                   */
  IntDefaultHandler, /* EXTI Line1                   */
  IntDefaultHandler, /* EXTI Line2                   */
  IntDefaultHandler, /* EXTI Line3                   */
  IntDefaultHandler, /* EXTI Line4                   */
  IntDefaultHandler, /* DMA1 Stream 0                */
  IntDefaultHandler, /* DMA1 Stream 1                */
  IntDefaultHandler, /* DMA1 Stream 2                */
  IntDefaultHandler, /* DMA1 Stream 3                */
  IntDefaultHandler, /* DMA1 Stream 4                */
  IntDefaultHandler, /* DMA1 Stream 5                */
  IntDefaultHandler, /* DMA1 Stream 6                */
  IntDefaultHandler, /* ADC1, ADC2 and ADC3s         */
  IntDefaultHandler, /* FDCAN1 interrupt line 0      */
  IntDefaultHandler, /* FDCAN2 interrupt line 0      */
  IntDefaultHandler, /* FDCAN1 interrupt line 1      */
  IntDefaultHandler, /* FDCAN2 interrupt line 1      */
  IntDefaultHandler, /* External Line[9:5]s          */
  IntDefaultHandler, /* TIM1 Break interrupt         */
  IntDefaultHandler, /* TIM1 Update interrupt        */
  IntDefaultHandler, /* TIM1 Trigger and Commutation interrupt */
  IntDefaultHandler, /* TIM1 Capture Compare         */
  IntDefaultHandler, /* TIM2                         */
  IntDefaultHandler, /* TIM3                         */
  IntDefaultHandler, /* TIM4                         */
  IntDefaultHandler, /* I2C1 Event                   */
  IntDefaultHandler, /* I2C1 Error                   */
  IntDefaultHandler, /* I2C2 Event                   */
  IntDefaultHandler, /* I2C2 Error                   */
  IntDefaultHandler, /* SPI1                         */
  IntDefaultHandler, /* SPI2                         */
  IntDefaultHandler, /* USART1                       */
  IntDefaultHandler, /* USART2                       */
  IntDefaultHandler, /* USART3                       */
  IntDefaultHandler, /* External Line[15:10]s        */
  IntDefaultHandler, /* RTC Alarm (A and B) through EXTI Line */
  IntDefaultHandler, /* DFSDM2 Interrupt             */
  IntDefaultHandler, /* TIM8 Break and TIM12         */
  IntDefaultHandler, /* TIM8 Update and TIM13        */
  IntDefaultHandler, /* TIM8 Trigger and Commutation and TIM14 */
  IntDefaultHandler, /* TIM8 Capture Compare         */
  IntDefaultHandler, /* DMA1 Stream7                 */
  IntDefaultHandler, /* FMC                          */
  IntDefaultHandler, /* SDMMC1                       */
  IntDefaultHandler, /* TIM5                         */
  IntDefaultHandler, /* SPI3                         */
  IntDefaultHandler, /* UART4                        */
  IntDefaultHandler, /* UART5                        */
  IntDefaultHandler, /* TIM6 and DAC1&2 underrun errors */
  IntDefaultHandler, /* TIM7                         */
  IntDefaultHandler, /* DMA2 Stream 0                */
  IntDefaultHandler, /* DMA2 Stream 1                */
  IntDefaultHandler, /* DMA2 Stream 2                */
  IntDefaultHandler, /* DMA2 Stream 3                */
  IntDefaultHandler, /* DMA2 Stream 4                */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* FDCAN calibration unit interrupt*/
  IntDefaultHandler, /* DFSDM Filter4 Interrupt      */
  IntDefaultHandler, /* DFSDM Filter5 Interrupt      */
  IntDefaultHandler, /* DFSDM Filter6 Interrupt      */
  IntDefaultHandler, /* DFSDM Filter7 Interrupt      */
  IntDefaultHandler, /* DMA2 Stream 5                */
  IntDefaultHandler, /* DMA2 Stream 6                */
  IntDefaultHandler, /* DMA2 Stream 7                */
  IntDefaultHandler, /* USART6                       */
  IntDefaultHandler, /* I2C3 event                   */
  IntDefaultHandler, /* I2C3 error                   */
  IntDefaultHandler, /* USB OTG HS End Point 1 Out   */
  IntDefaultHandler, /* USB OTG HS End Point 1 In    */
  IntDefaultHandler, /* USB OTG HS Wakeup through EXTI */
  IntDefaultHandler, /* USB OTG HS                   */
  IntDefaultHandler, /* DCMI, PSSI                   */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* RNG                          */
  IntDefaultHandler, /* FPU                          */
  IntDefaultHandler, /* UART7                        */
  IntDefaultHandler, /* UART8                        */
  IntDefaultHandler, /* SPI4                         */
  IntDefaultHandler, /* SPI5                         */
  IntDefaultHandler, /* SPI6                         */
  IntDefaultHandler, /* SAI1                         */
  IntDefaultHandler, /* LTDC                         */
  IntDefaultHandler, /* LTDC error                   */
  IntDefaultHandler, /* DMA2D                        */
  IntDefaultHandler, /* SAI2                         */
  IntDefaultHandler, /* OCTOSPI1                     */
  IntDefaultHandler, /* LPTIM1                       */
  IntDefaultHandler, /* HDMI_CEC                     */
  IntDefaultHandler, /* I2C4 Event                   */
  IntDefaultHandler, /* I2C4 Error                   */
  IntDefaultHandler, /* SPDIF_RX                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* DMAMUX1 Overrun interrupt    */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* DFSDM Filter0 Interrupt      */
  IntDefaultHandler, /* DFSDM Filter1 Interrupt      */
  IntDefaultHandler, /* DFSDM Filter2 Interrupt      */
  IntDefaultHandler, /* DFSDM Filter3 Interrupt      */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Serial Wire Interface 1 global interrupt */
  IntDefaultHandler, /* TIM15 global Interrupt      */
  IntDefaultHandler, /* TIM16 global Interrupt      */
  IntDefaultHandler, /* TIM17 global Interrupt      */
  IntDefaultHandler, /* MDIOS Wakeup  Interrupt     */
  IntDefaultHandler, /* MDIOS global Interrupt      */
  IntDefaultHandler, /* JPEG global Interrupt       */
  IntDefaultHandler, /* MDMA global Interrupt       */
  IntDefaultHandler, /* Reserved                    */
  IntDefaultHandler, /* SDMMC2 global Interrupt     */
  IntDefaultHandler, /* HSEM1 global Interrupt      */
  IntDefaultHandler, /* Reserved                    */
  IntDefaultHandler, /* DAC2 global Interrupt       */
  IntDefaultHandler, /* DMAMUX Overrun interrupt    */
  IntDefaultHandler, /* BDMA2 Channel 0 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 1 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 2 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 3 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 4 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 5 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 6 global Interrupt */
  IntDefaultHandler, /* BDMA2 Channel 7 global Interrupt */
  IntDefaultHandler, /* COMP global Interrupt      */
  IntDefaultHandler, /* LP TIM2 global interrupt     */
  IntDefaultHandler, /* LP TIM3 global interrupt     */
  IntDefaultHandler, /* UART9 global interrupt       */
  IntDefaultHandler, /* USART10 global interrupt     */
  IntDefaultHandler, /* LP UART1 interrupt           */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Clock Recovery Global Interrupt */
  IntDefaultHandler, /* ECC diagnostic Global Interrupt */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* DTS                          */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Interrupt for all 6 wake-up pins */
  IntDefaultHandler, /* OCTOSPI2                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* Reserved                     */
  IntDefaultHandler, /* GFXMMU                       */
  IntDefaultHandler  /* BDMA1                        */
};

