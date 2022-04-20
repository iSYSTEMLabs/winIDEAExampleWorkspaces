#ifndef __STA1385_CM3_h__
#define __STA1385_CM3_h__

#include "Types.h"

#define HIGH 1
#define LOW  0

#define WDT_M3_BASE_ADDR  0x47010000
#define WDT_MAGIC	        0x1ACCE551

#define REG(adr)    (*((volatile DWORD *) (adr)))
#define MTU0_BASE    0x40018000
#define IRQ0_BASE    0x40038000
#define IRQ1_BASE    0x40039000
#define IRQ2_BASE    0x4003A000
#define IRQ3_BASE    0x4003B000
#define INT0_BASE    0xE000E100
#define GPIO_M3_BASE 0x40008000

#define WDT_CR      REG(WDT_M3_BASE_ADDR + 0x008)
#define WDT_ICR     REG(WDT_M3_BASE_ADDR + 0x0C0)
#define WDT_LOCK    REG(WDT_M3_BASE_ADDR + 0xC00)

#define A7_0_RAM_ADDRESS 0x10000000
#define A7_0_DESTINATION 0x70000000
#define A7_1_RAM_ADDRESS 0x1000000C
#define A7_1_DESTINATION 0x70040000
#define NORMAL_MODE 0x04

/*Timer registers*/
#define MTU0_IMSC     (*(unsigned volatile long *)(MTU0_BASE))
#define MTU0_RIS      (*(unsigned volatile long *)(MTU0_BASE + 0x04))
#define MTU0_MIS      (*(unsigned volatile long *)(MTU0_BASE + 0x08))
#define MTU0_ICR      (*(unsigned volatile long *)(MTU0_BASE + 0x0C))
#define MTU0_T0LR     (*(unsigned volatile long *)(MTU0_BASE + 0x10))
#define MTU0_T0VAL    (*(unsigned volatile long *)(MTU0_BASE + 0x14))
#define MTU0_T0CR     (*(unsigned volatile long *)(MTU0_BASE + 0x18))
#define MTU0_T0BGLR   (*(unsigned volatile long *)(MTU0_BASE + 0x1C))

/*Timer bits*/
#define TEN  7 //Enable timer 
#define TMOD 6 //Timer mode (periodic or free running)
#define TPRE 2 //Timer prescaler
#define TSZ  1 //Timer size (16bit or 32bit)
#define TOS  0 //Timer mode (wrapping or free running)
#define T0IM 0 //Timer 0 interrupt
#define T0IC 0 //Timer 0 interrupt clear
void WD_CM3_Disable();

/*Interrupt registers*/
#define IRQ0_MASKSET     (*(unsigned volatile long *)(IRQ0_BASE))
#define IRQ0_MASKCLR     (*(unsigned volatile long *)(IRQ0_BASE + 0x04))
#define IRQ0_MASKRD      (*(unsigned volatile long *)(IRQ0_BASE + 0x08))
#define IRQ0_INTPEND     (*(unsigned volatile long *)(IRQ0_BASE + 0x0C))
#define IRQ0_IRQSEL_LOW  (*(unsigned volatile long *)(IRQ0_BASE + 0x10))
#define IRQ0_IRQSEL_HIGH (*(unsigned volatile long *)(IRQ0_BASE + 0x14))
#define IRQ0_STAT0       (*(unsigned volatile long *)(IRQ0_BASE + 0x20))
#define IRQ0_STAT1       (*(unsigned volatile long *)(IRQ0_BASE + 0x24))
#define IRQ0_STAT2       (*(unsigned volatile long *)(IRQ0_BASE + 0x28))
#define IRQ0_STAT3       (*(unsigned volatile long *)(IRQ0_BASE + 0x2C))
#define INT0_SET         (*(unsigned volatile long *)(INT0_BASE))
#define INT0_CLR         (*(unsigned volatile long *)(INT0_BASE + 0x80))
#define INT0_SET_PEN     (*(unsigned volatile long *)(INT0_BASE + 0x100))
#define INT0_CLR_PEN     (*(unsigned volatile long *)(INT0_BASE + 0x180))

/*Interrupt bits*/
#define INT2 2

/*GPIO registers*/
#define GPIO_M3_DAT      (*(unsigned volatile long *)(GPIO_M3_BASE))
#define GPIO_M3_DATS     (*(unsigned volatile long *)(GPIO_M3_BASE + 0x04))
#define GPIO_M3_DATC     (*(unsigned volatile long *)(GPIO_M3_BASE + 0x08))
#define GPIO_M3_PIDS     (*(unsigned volatile long *)(GPIO_M3_BASE + 0x0C))
#define GPIO_M3_DIR      (*(unsigned volatile long *)(GPIO_M3_BASE + 0x10))
#define GPIO_M3_DIRS     (*(unsigned volatile long *)(GPIO_M3_BASE + 0x14))
#define GPIO_M3_DIRC     (*(unsigned volatile long *)(GPIO_M3_BASE + 0x18))

/*GPIO bits*/
#define GPIO2 2

void InterruptRoutine();

static inline void writeReg(unsigned int value, unsigned int addr)
{
	*(volatile unsigned int *)addr = value;
}

#endif