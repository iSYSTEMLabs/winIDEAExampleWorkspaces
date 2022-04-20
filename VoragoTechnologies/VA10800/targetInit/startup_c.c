#include "startup.h"
#include "main.h"

/**************************************************************************************************/
// TODO: Include target main header
/**************************************************************************************************/
#include "__VA10800__.h"

/* Linker defined variables */
extern unsigned long __stack_top;
extern unsigned long __etext;
extern unsigned long __data_start__;
extern unsigned long __data_end__;
extern unsigned long __bss_start__;
extern unsigned long __bss_end__;

extern int main(void);
extern void reset(void); // startup_s.S entry point reset function

/* Exception/Interrupt handlers */ 
#define WEAK_PROTOTYPE1 __attribute__ ((weak, alias("Default_Handler1")))
#define WEAK_PROTOTYPE2 __attribute__ ((weak, alias("Default_Handler2")))
#define WEAK_PROTOTYPE3 __attribute__ ((weak, alias("Default_Handler3")))
#define WEAK_PROTOTYPE4 __attribute__ ((weak, alias("Default_Handler4")))
#define WEAK_PROTOTYPE5 __attribute__ ((weak, alias("Default_Handler5")))
#define WEAK_PROTOTYPE6 __attribute__ ((weak, alias("Default_Handler6")))
#define WEAK_PROTOTYPE7 __attribute__ ((weak, alias("Default_Handler7")))
#define WEAK_PROTOTYPE8 __attribute__ ((weak, alias("Default_Handler8")))
#define WEAK_PROTOTYPE9 __attribute__ ((weak, alias("Default_Handler9")))
void Default_Handler(void);
void Default_Handler1(void);
void Default_Handler2(void);
void Default_Handler3(void);
void Default_Handler4(void);
void Default_Handler6(void);
void Default_Handler7(void);
void Default_Handler8(void);
void Default_Handler9(void);
WEAK_PROTOTYPE1 void NMI_Handler(void);
WEAK_PROTOTYPE2 void HardFault_Handler(void);
WEAK_PROTOTYPE3 void MemManage_Handler(void);
WEAK_PROTOTYPE4 void BusFault_Handler(void);
WEAK_PROTOTYPE5 void UsageFault_Handler(void);
WEAK_PROTOTYPE6 void SVC_Handler(void);
WEAK_PROTOTYPE7 void DebugMon_Handler(void);
WEAK_PROTOTYPE8 void PendSV_Handler(void);
WEAK_PROTOTYPE9 void SysTick_Handler(void);
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
  NMI_Handler,            /* -14 NMI Handler */
  HardFault_Handler,      /* -13 Hard Fault Handler */
  MemManage_Handler,      /* -12 MPU Fault Handler */
  BusFault_Handler,       /* -11 Bus Fault Handler */
  UsageFault_Handler,     /* -10 Usage Fault Handler */
  0,                      /*     Reserved */
  0,                      /*     Reserved */
  0,                      /*     Reserved */
  0,                      /*     Reserved */
  SVC_Handler,            /*  -5 SVCall Handler */
  DebugMon_Handler,       /*  -4 Debug Monitor Handler */
  0,                      /*     Reserved */
  PendSV_Handler,         /*  -2 PendSV Handler */
  SysTick_Handler,        /*  -1 SysTick Handler */

  /************************************************************************************************/
  // TODO: Add Target Specific Interrupts (from reference manual)
  /************************************************************************************************/
  Default_Handler,     /*  0 - EMU       */
  Default_Handler,     /*  1 - WDOG0       */
  Default_Handler,     /*  2 - LDMA       */
  Default_Handler,     /*  3 - GPIO_EVEN       */
  Default_Handler,     /*  4 - SMU       */
  TimerInterruptHandler  /*  5 - TIMER0       */
  // ...           
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
  /*
  #if defined (__VTOR_PRESENT) && (__VTOR_PRESENT == 1U)
    SCB->VTOR = (uint32_t) &interruptVectorTable;
  #endif

  #if defined (__FPU_USED) && (__FPU_USED == 1U)
    SCB->CPACR |= ((3U << 10U*2U) | (3U << 11U*2U)  );  // enable CP10 and CP11 Full Access
  #endif

  #ifdef UNALIGNED_SUPPORT_DISABLE
    SCB->CCR |= SCB_CCR_UNALIGN_TRP_Msk;
  #endif

  #if defined (__ARM_FEATURE_CMSE) && (__ARM_FEATURE_CMSE == 3U)
    TZ_SAU_Setup();
  #endif
  */
}

void Default_Handler(void){
}

void Default_Handler1(void){
  while(1){
  }
}
void Default_Handler2(void){
  while(1){
  }
}
void Default_Handler3(void){
  while(1){
  }
}
void Default_Handler4(void){
  while(1){
  }
}
void Default_Handler5(void){
  while(1){
  }
}
void Default_Handler6(void){
  while(1){
  }
}
void Default_Handler7(void){
  while(1){
  }
}
void Default_Handler8(void){
  while(1){
  }
}
void Default_Handler9(void){
  while(1){
  }
}

/************************************************************************************************/
// TODO: Add Target Specific Interrupt function handlers
/************************************************************************************************/
void TimerInterruptHandler(void){
  // handle timer interrupt flags and call:
  InterruptRoutine();

}