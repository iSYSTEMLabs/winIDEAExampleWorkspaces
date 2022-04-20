#include "BerninaC2.h"

#ifndef __EIGER_H__
#define __EIGER_H__

#define CRP_Z0VEC  0xFFFEC054

extern const uint32_t intc_sw_mode_isr_vector_table[];
extern void __start(void);
// int dummyRead;
void initResetReg(void);
void MC_MODE_INIT(void);
void initWatchdog(void);
void initPIT(void);
void initIrqVectors(void);
void initINTC(void);
void InterruptRoutine(void);
void initLPM(void);
void enterAndExitHaltMode(void);
void enterAndExitStopMode(void);
void targetEnterAndExitLowPowerMode(void);
void targetDisableWakeupInterrupts(void);

#define SWT_SR 0xfff38010
#define SWT_CR 0xfff38000         

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))

#endif  __EIGER_H__