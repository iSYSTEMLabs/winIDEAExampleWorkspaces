#ifndef __TARGET_H__
#define __TARGET_H__

#include "DA14699_sfr.h"
#include "startup.h"


#define WATCHDOG_REG                  *((unsigned long *)0x50000700)  
#define WATCHDOG_CTRL_REG             *((unsigned long *)0x50000704)
#define WATCHDOG_CTRL_WRITE_BUSY      (1<<3)
#define WATCHDOG_CTRL_WDOG_FREEZE_EN  (1<<2)
#define WATCHDOG_CTRL_NMI_RST         (1<<0)

#define SET_FREEZE_REG                *((unsigned long *)0x50040300)
#define SET_FREEZE_REG_CMAC_WDOG      (1<<10)
#define SET_FREEZE_REG_SYS_WDOG       (1<<3)

/*Clock register*/
#define CLK_CTRL_REG                  *((unsigned long *)0x50000014)//Clock control register
#define PLL_SYS_CTRL1_REG             *((unsigned long *)0x50010060)//PLL setup register 1
#define PLL_SYS_CTRL2_REG             *((unsigned long *)0x50010064)//PLL setup register 2
#define PLL_SYS_CTRL3_REG             *((unsigned long *)0x50010068)//PLL setup register 3
#define PLL_SYS_STATUS_REG            *((unsigned long *)0x50010070)//PLL status register

/*Clock bit*/
#define PLL_EN         1
#define LDO_PLL_ENABLE 2
#define PLL_LOCK_FINE  0
#define SYS_CLK_SEL    0

/*Timer registers*/
#define TIMER_CTRL_REG                  *((unsigned long *)0x50010200)//Timer control register
#define TIMER_RELOAD_REG                *((unsigned long *)0x50010214)//Timer count max value
#define TIMER_CLEAR_GPIO_EVENT_REG      *((unsigned long *)0x50010244)//Timer clear interrupt GPIO
#define TIMER_CLEAR_IRQ_REG             *((unsigned long *)0x50010248)//Timer clear interrupt

/*Timer bits*/
#define TIM_CLK_EN        8
#define TIM_IRQ_EN        5
#define TIM_COUNT_DOWN_EN 2
#define TIM_EN            0
#define TIM_IN1_EVENT_FALL_EN 3
#define TIM_CLEAR_IRQ     0
#define TIM_SYS_CLK_EN    7

/*Interrupt registers*/
#define NVIC_ISER0                      *((unsigned long *)0xE000E100)//Interrupt enable register 0
#define NVIC_ICPR0                      *((unsigned long *)0xE000E280)//Interrupt clear pending register 0
#define NVIC_ICER0                      *((unsigned long *)0xE000E180)//Interrupt clear enable register 0

/*Interrupt bits*/
#define TIMER_IRQ 16

/*GPIO registers*/
#define P0_00_MODE_REG                  *((unsigned long *)0x50020A18)//GPIO0_00 mode register
#define P0_DATA_REG                     *((unsigned long *)0x50020A00)//GPIO0 data register
#define GPIO_CLK_SEL_REG                *((unsigned long *)0x50020AFC)//GPIO clock register
 
/*GPIO bits*/
#define GPIO_00         0
#define PPOD           10
#define PUPD            8
#define PID             0
#define FUNC_CLOCK_EN   3

void initClock(void);


void InterruptRoutine();

#endif

