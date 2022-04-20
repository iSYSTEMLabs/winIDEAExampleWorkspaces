#ifndef __STM32H7A3_h__
#define __STM32H7A3_h__


#include "stm32h7xx.h"
#include "stm32h7a3xx.h"

#define OUT_PIN 0
#define OUT_PORT GPIOB

#define MCO1_PIN 8
#define MCO1_PORT GPIOA

#define MCO2_PIN 9
#define MCO2_PORT GPIOC

#define GPIOA_EN_BIT 0
#define GPIOB_EN_BIT 1
#define GPIOC_EN_BIT 2
#define GPIO_MODE_OUT_BIT

#define HSECTRL_BIT 16
#define HSERDY_BIT 17

#define PLL1_DIVM1_BIT 4
#define PLL1VCOSEL_BIT 1
#define PLL1RGE_BIT 2
#define DIVP1EN_BIT 16
#define DIVR1EN_BIT 18
#define DIVN1_BIT 0
#define DIVP1_BIT 9
#define DIVR1_BIT 24
#define PLL1ON_BIT 24
#define PLL1RDY_BIT 25

#define RCC_SW_BIT 0
#define RCC_SWS_BIT 3
#define MCO1PRE_BIT 18
#define MCO1SEL_BIT 22
#define MCO2PRE_BIT 25
#define MCO2SEL_BIT 29

#define ITM_ENABLE_BIT 0
#define ITM_SELECTED_PORT 0

#define PWR_LDO_BIT 1
#define PWR_SMPS_BIT 2
#define PWR_SMPSLEVEL_BIT 4
#define PWR_ACTVOSRDY_BIT 13
#define PWR_VOS_BIT 14
#define PWR_VOSRDY_BIT 13

void targetInit(void);
void targetShutdown(void);
void targetEnableInterrupts(void);
void disableWatchdog(void);
void TimerInterruptHandler(void);

void initPWR(void);
void initClock(void);
void initITM(void);

void SysTick_Handler(void);

#endif

