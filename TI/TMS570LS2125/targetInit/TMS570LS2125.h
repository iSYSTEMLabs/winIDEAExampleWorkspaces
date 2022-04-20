#ifndef __CPUTest_h__
#define __CPUTest_h__

void CPU_Init(void);
void CPU_Pointers(void);
void CPU_Recursion(void);

//extern void phantomInterrupt(void) __attribute__ ((interrupt("IRQ")));
extern void TimerInterruptHandler(void)  __attribute__ ((interrupt("IRQ")));

#endif

