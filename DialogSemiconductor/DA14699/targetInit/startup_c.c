#include "startup.h"

/**************************************************************************************************/
// TODO: Include target main header
/**************************************************************************************************/
#include "DA14699.h"

/* Linker defined variables */
extern unsigned long __stack_top;
extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;

extern int main(void);
extern int reset(void); // startup_s.S entry point reset function
extern void TimerInterruptHandler();
/* Exception/Interrupt handlers */ 
#define WEAK_PROTOTYPE __attribute__ ((weak, alias("Default_Handler")))
void Default_Handler(void);
WEAK_PROTOTYPE void NMI_Handler(void);
WEAK_PROTOTYPE void HardFault_Handler(void);
WEAK_PROTOTYPE void MemManage_Handler(void);
WEAK_PROTOTYPE void BusFault_Handler(void);
WEAK_PROTOTYPE void UsageFault_Handler(void);
WEAK_PROTOTYPE void SecureFault_Handler(void);
WEAK_PROTOTYPE void SVC_Handler(void);
WEAK_PROTOTYPE void DebugMon_Handler(void);
WEAK_PROTOTYPE void PendSV_Handler(void);
WEAK_PROTOTYPE void SysTick_Handler(void);
WEAK_PROTOTYPE void SNC_IRQ_Handler(void);
WEAK_PROTOTYPE void DMA_IRQ_Handler(void);
WEAK_PROTOTYPE void CHARGER_STATE_IRQ_Handler(void);
WEAK_PROTOTYPE void CHARGER_ERROR_IRQ_Handler(void);
WEAK_PROTOTYPE void CMAC2SYS_IRQ_Handler(void);
WEAK_PROTOTYPE void UART_IRQ_Handler(void);
WEAK_PROTOTYPE void UART2_IRQ_Handler(void);
WEAK_PROTOTYPE void UART3_IRQ_Handler(void);
WEAK_PROTOTYPE void I2C_IRQ_Handler(void);
WEAK_PROTOTYPE void I2C2_IRQ_Handler(void);
WEAK_PROTOTYPE void SPI_IRQ_Handler(void);
WEAK_PROTOTYPE void SPI2_IRQ_Handler(void);
WEAK_PROTOTYPE void PCM_IRQ_Handler(void);
WEAK_PROTOTYPE void SRC_IN_IRQ_Handler(void);
WEAK_PROTOTYPE void SRC_OUT_IRQ_Handler(void);
WEAK_PROTOTYPE void USB_IRQ_Handler(void);
WEAK_PROTOTYPE void TIMER2_IRQ_Handler(void);


/**************************************************************************************************/
// TODO: Add target specific interrupt handler functions
/**************************************************************************************************/
void TimerInterruptHandler(void);

/* Exception/Interrupt vector table */
typedef void (* functionPointer)(void); // pointer on function with (void) arguments and 'void' return value
const functionPointer interruptVectorTable[240] __attribute__ ((section(".vectors"))) = {
  (functionPointer)(&__stack_top),   /*     Initial Stack Pointer */
  
  reset,                  /*     Reset Handler in startup_s.S file */
  
  /************************************************************************************************/
  // TODO: set core default core exception handlers
  // Note: This table can be copied from examples from \CMSIS\ARM\ x core \Source\GCC\startup_ARMCMx.c file
  /************************************************************************************************/
  NMI_Handler,          /* -14 NMI Handler */
  HardFault_Handler,    /* -13 Hard Fault Handler */
  MemManage_Handler,    /* -12 MPU Fault Handler */
  BusFault_Handler,     /* -11 Bus Fault Handler */
  UsageFault_Handler,   /* -10 Usage Fault Handler */
  SecureFault_Handler,  /*  -9 Secure Fault Handler */
  0,                    /*     Reserved */
  0,                    /*     Reserved */
  0,                    /*     Reserved */
  SVC_Handler,          /*  -5 SVCall Handler */
  DebugMon_Handler,     /*  -4 Debug Monitor Handler */
  0,                    /*     Reserved */
  PendSV_Handler,       /*  -2 PendSV Handler */
  SysTick_Handler,       /*  -1 SysTick Handler */
  
  

  /************************************************************************************************/
  // TODO: Add Target Specific Interrupts (from reference manual)
  /************************************************************************************************/
  // ...          
  SNC_IRQ_Handler, 
  DMA_IRQ_Handler, 
  CHARGER_STATE_IRQ_Handler,
  CHARGER_ERROR_IRQ_Handler,
  CMAC2SYS_IRQ_Handler,
  UART_IRQ_Handler,
  UART2_IRQ_Handler,
  UART3_IRQ_Handler,
  I2C_IRQ_Handler,
  I2C2_IRQ_Handler,
  SPI_IRQ_Handler,
  SPI2_IRQ_Handler,
  PCM_IRQ_Handler,
  SRC_IN_IRQ_Handler,
  SRC_OUT_IRQ_Handler,
  USB_IRQ_Handler,
  TimerInterruptHandler, /*Timer 1 interrupt*/
  TIMER2_IRQ_Handler
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
  /************************************************************************************************/
  #if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t) &interruptVectorTable;
  #endif

  #if defined (__FPU_USED) && (__FPU_USED == 1U)
    SCB->CPACR |= ((3U << 10U*2U) |           /* enable CP10 Full Access */
                  (3U << 11U*2U)  );         /* enable CP11 Full Access */
  #endif

  #ifdef UNALIGNED_SUPPORT_DISABLE
    SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;
  #endif

  #if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    TZ_SAU_Setup();
  #endif
}

void Default_Handler(void){
  while(1){
  }
}