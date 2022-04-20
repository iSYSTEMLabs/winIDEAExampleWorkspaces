#ifndef R7F702Z02_H
#define R7F702Z02_H

extern void InterruptRoutine(void);
extern void watchdogUpdate(void);

void initClock(void);
void initTimer(void);

int iInterruptCounter;

#define DISABLE_WRITE_PROTECTED_REG   0xA5A5A500
#define ENABLE_WRITE_PROTECTED_REG    0xA5A5A501
#define PLL_STABLE                    0x00000002
#define SELECT_PLL                    0x00000001
#define PLL_NO_DIVISION               0x00000001
#define INT_MASK_EN                   0x0080
#define INT_VECT_TABLE_REF            0x0040

#define CLK_LSB_FREQ                  40000000            // 40MHz
#define OSTM_RELOAD                   CLK_LSB_FREQ/1000   // Req. counts till 1ms

#endif /* R7F702Z02_H */
