#include "mpc5744p.h"

#ifndef __PANTHER_H__
#define __PANTHER_H__

extern const uint32_t intc_sw_mode_isr_vector_table[];
extern void __start(void);
// int dummyRead;
void initResetReg(void);
void MC_MODE_INIT(void);;
void initWatchdog();
void initPIT();
void initIrqVectors();
void initINTC();
void InterruptRoutine();
void initLPM();
void enterAndExitHaltMode();
void enterAndExitStopMode();
void targetEnterAndExitLowPowerMode();
void targetDisableWakeupInterrupts();

#define SWT_SR 0xfff38010
#define SWT_CR 0xfff38000         

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))

#endif  __PANTHER_H__