#ifndef __CPUTest_h__
#define __CPUTest_h__

void CPU_Init(void);
void CPU_Pointers(void);
void CPU_Recursion(void);
void InterruptRoutine(void);

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS 0xE0000000

#define INT_0_31_SET_EN     (*(volatile unsigned int*)0xE000E100)
#define TIMER0_MODE         (*(volatile unsigned int*)0x40008504)
#define TIMER0_BITMODE      (*(volatile unsigned int*)0x40008508)
#define TIMER0_CC0          (*(volatile unsigned int*)0x40008540)
#define TIMER0_INTENSET     (*(volatile unsigned int*)0x40008304)
#define TIMER0_INTENCLR     (*(volatile unsigned int*)0x40008308)
#define TIMER0_PRESCALER    (*(volatile unsigned int*)0x40008510)
#define TIMER0_SHORTS       (*(volatile unsigned int*)0x40008200)
#define TIMER0_TASKS_START  (*(volatile unsigned int*)0x40008000)
#define TIMER0_TASKS_CLEAR  (*(volatile unsigned int*)0x4000800C)
#define TIMER0_TASKS_EVENTS_COMPARE0 (*(volatile unsigned int*)0x40008140)

#define COMPARE0 16
#define COMPARE0_STOP 8

#define P0_OUT    (*(volatile unsigned int*)0x50000504)
#define P0_PIN12  (*(volatile unsigned int*)0x50000730)

#define DIR 0
#define PULL 2
#define PIN12 12

#endif

