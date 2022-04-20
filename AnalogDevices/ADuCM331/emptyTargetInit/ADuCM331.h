#ifndef __CPUTest_h__
#define __CPUTest_h__

extern unsigned int iInterruptCounter;
extern unsigned int daqInterruptCounter;

/*
  GPIO registers
*/
#define GPIO_GP0CON (*(unsigned long volatile*)0x40006000)    // control register
#define GPIO_GP0OEN (*(unsigned long volatile*)0x40006004)    // enable register
#define GPIO_GP0TGL (*(unsigned long volatile*)0x40006024)    // toggle pin register

/*
  TIM0 registers
*/
#define T0VAL0 (*(unsigned long volatile*)0x40000000)   // current timer value register
#define T0CON (*(unsigned long volatile*)0x40000008)    // control register
#define T0EN (*(unsigned long volatile*)0x4000000C)     // enable register
#define T0TOFC0 (*(unsigned long volatile*)0x40000020)  // counter value (LSB)
#define T0TOFC1 (*(unsigned long volatile*)0x40000024)  // counter value (MSB)
#define T0IEN (*(unsigned long volatile*)0x40000028)    // interrupt enable register
#define T0ISTA (*(unsigned long volatile*)0x4000002C)   // interrupt status register
#define T0CLRI (*(unsigned long volatile*)0x40000030)   // clear interrupt register

/*
  NVIC registers   
*/
#define ISER0 (*(unsigned long volatile*)0xE000E100)


void CPU_Init(void);
void CPU_Pointers(void);
void CPU_Recursion(void);
void InterruptRoutine(void);

#endif

