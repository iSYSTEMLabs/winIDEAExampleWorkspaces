#include "startup.h"
#include "main.h"

/**************************************************************************************************/
// TODO: Include target main header
/**************************************************************************************************/
#include "KW36.h"


/* Linker defined variables */
extern unsigned long __stack_top;
extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;

extern int main(void);
extern int reset(void); // startup_s.S entry point reset function

/* Exception/Interrupt handlers */ 
#define WEAK_PROTOTYPE __attribute__ ((weak, alias("Default_Handler")))
void Default_Handler(void);
WEAK_PROTOTYPE void NMI_Handler(void);
WEAK_PROTOTYPE void HardFault_Handler(void);
WEAK_PROTOTYPE void MemManage_Handler(void);
WEAK_PROTOTYPE void BusFault_Handler(void);
WEAK_PROTOTYPE void UsageFault_Handler(void);
WEAK_PROTOTYPE void SVC_Handler(void);
WEAK_PROTOTYPE void DebugMon_Handler(void);
WEAK_PROTOTYPE void PendSV_Handler(void);
WEAK_PROTOTYPE void SysTick_Handler(void);
/**************************************************************************************************/
// TODO: Add target specific interrupt handler functions
/**************************************************************************************************/
void TimerInterruptHandler(void);

/* Exception/Interrupt vector table */
typedef void (* functionPointer)(void); // pointer on function with (void) arguments and 'void' return value
const functionPointer interruptVectorTable[48] __attribute__ ((section(".vectors"))) = {
  (functionPointer)(&__stack_top),   /*     Initial Stack Pointer */
  
  reset,                  /*     Reset Handler in startup_s.S file */
  
  /************************************************************************************************/
  // TODO: set core default core exception handlers
  // Note: This table can be copied from examples from \CMSIS\ARM\ x core \Source\GCC\startup_ARMCMx.c file
  /************************************************************************************************/
  NMI_Handler,                              /* -14 NMI Handler */
  HardFault_Handler,                        /* -13 Hard Fault Handler */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  SVC_Handler,                              /*  -5 SVCall Handler */
  0,                                        /*     Reserved */
  0,                                        /*     Reserved */
  PendSV_Handler,                           /*  -2 PendSV Handler */
  SysTick_Handler,                          /*  -1 SysTick Handler */

  /************************************************************************************************/
  // TODO: Add Target Specific Interrupts (from reference manual)
  /************************************************************************************************/
  
  Default_Handler,/* DMA channel 0 transfer complete*/
  Default_Handler,/* DMA channel 1 transfer complete*/
  Default_Handler,/* DMA channel 2 transfer complete*/
  Default_Handler,/* DMA channel 3 transfer complete*/
  Default_Handler,/* Reserved interrupt*/
  Default_Handler,/* Command complete and read collision, Flash ECC Errors*/
  Default_Handler,/* Low-voltage detect, low-voltage warning, DCDC*/
  Default_Handler,/* Low leakage wakeup Unit*/
  Default_Handler,/* I2C0 interrupt*/
  Default_Handler,/* I2C1 interrupt*/
  Default_Handler,/* SPI0 single interrupt vector for all sources*/
  Default_Handler,/* FlexCAN0 ORed Error, Bus off, Transmit/Receive Warning, Wake up*/
  Default_Handler,/* LPUART0 or LPUART1 status and error*/
  Default_Handler,/* TRNG0 interrupt*/
  Default_Handler,/* CMT interrupt*/
  Default_Handler,/* ADC0 interrupt*/
  Default_Handler,/* CMP0 interrupt*/
  TimerInterruptHandler, /* TPM0 single interrupt vector for all sources*/
  Default_Handler,/* TPM1 single interrupt vector for all sources*/
  Default_Handler,/* TPM2 single interrupt vector for all sources*/
  Default_Handler,/* RTC alarm*/
  Default_Handler,/* RTC seconds*/
  Default_Handler,/* PIT interrupt*/
  Default_Handler,/* LTC0 interrupt*/
  Default_Handler,/* BTLE, ZIGBEE, ANT, GENFSK interrupt 0*/
  Default_Handler,/* FlexCAN0 ORed Message Buffer (MB0-31) interrupt*/
  Default_Handler,/* BTLE, ZIGBEE, ANT, GENFSK interrupt 1*/
  Default_Handler,/* MCG interrupt*/
  Default_Handler,/* LPTMR0 interrupt*/
  Default_Handler,/* SPI1 single interrupt vector for all sources*/
  Default_Handler,/* PORTA Pin detect*/
  Default_Handler /* PORTB and PORTC Pin detect*/
};

void Reset_Handler(){
  volatile unsigned long *pulSrc = &__etext;
  volatile unsigned long *pulDest = &__data_start__;
  
  // copy data  
  while(pulDest < &__data_end__ ){
    *pulDest++ = *pulSrc++;
  }
  
  // initialise to zero
  pulDest = &__bss_start__;
  while ( pulDest < &__bss_end__ ){
    *pulDest++ = 0;
  }

  systemInit();

  main();
}

void systemInit(void){
  /************************************************************************************************/
  // TODO: Add core specific initialisation
  // Note: This can be copied from examples from \CMSIS\ARM\ x core \Source\system_ARMCMx.c file in SystemInit()
    // change __Vectors to interruptVectorTable
  /************************************************************************************************/
  SCB->VTOR = (uint32_t) &interruptVectorTable; // VECTOR TABLE
  
  SIM.SIM_COPC.R = (uint32_t)0x00u;  // disable watchdog

}

void Default_Handler(void){
  while(1){}
  
}

/************************************************************************************************/
// TODO: Add Target Specific Interrupt function handlers
/************************************************************************************************/
void TimerInterruptHandler(void){
  // handle timer interrupt flags 
  TPM0.TPM0_SC.R  |= 0x1 << 7 ;
  
  //and call:
  InterruptRoutine();

}