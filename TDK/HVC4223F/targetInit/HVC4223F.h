#ifndef __HVC4223F_h__
#define __HVC4223F_h__

void profilerAddTestMessages();

/*
  This file defines interface for target specific code.
 */


int iInterruprCounter;

/** Should contain target specific initialization code. This function is the
    first one called fro mmain().
 */
void targetInit();


/** Should enable interrupts for trace/coverage/profiler tests.
    Interrupt function should also be defined in this file, but it is
    not part of public interface. The requirement for interrupt function
    is, that it increments iInterruprCounter when called.
 */
void targetEnableInterrupts();


/**
   This function is periodically called from debug test infinite loop.
 */
void targetDebug();


/**
   Any action required at end of tests
*/
void targetShutdown();

void Flash_Unlock(void);
void CPU_Init(void);
void GPIO_Init(void);
void InterruptRoutine(void);
void TimerInterruptHandler(void);

#endif

#define SYSCTRL_CCR             (*(volatile unsigned int*)    (0x40000000))
#define SYSCTRL_CPUDIV          (*(volatile unsigned int*)    (0x40000004))
#define SYSCTRL_IMR             (*(volatile unsigned int*)    (0x40000038))
#define FLASH_ULA               (*(volatile unsigned int*)    (0x00280008))
#define FLASH_ULB               (*(volatile unsigned int*)    (0x00280014))
#define FLASH_IEN               (*(volatile unsigned int*)    (0x00280020))
#define TIM0_AR                 (*(volatile unsigned int*)    (0x4000200C))
#define TIM0_PS                 (*(volatile unsigned int*)    (0x40002008))
#define TIM0_CR                 (*(volatile unsigned int*)    (0x40002000)) 
#define TIM0_IEN                (*(volatile unsigned int*)    (0x40002014))
#define TIM0_EIPND              (*(volatile unsigned int*)    (0x4000201C))

#define INT_0_31_SET_EN         (*(volatile unsigned int*)    (0xE000E100))
#define INT_0_3_PRI             (*(volatile unsigned int*)    (0xE000E400))
#define INT_0_31_CLR_PEND       (*(volatile unsigned int*)    (0xE000E280))
#define LGPIO_DO                (*(volatile unsigned int*)    (0x40001000))
#define LGPIO_DD                (*(volatile unsigned int*)    (0x40001008))
#define LGPIO_C0                (*(volatile unsigned int*)    (0x4000100C))
#define LGPIO_C1                (*(volatile unsigned int*)    (0x40001010))

#define ITM_BASE_ADDRESS_32     (*(volatile unsigned int*)    (0xE0000000))
#define ITM_BASE_ADDRESS_16     (*(volatile unsigned short*)  (0xE0000000))
#define ITM_BASE_ADDRESS_8      (*(volatile unsigned char*)   (0xE0000000))