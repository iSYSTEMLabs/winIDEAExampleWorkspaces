#ifndef REG_TESTS_TARGET__H
#define REG_TESTS_TARGET__H

// PLL
#define FRDCNTL *(volatile unsigned long *)0xFFF87000
#define FBFALLBACK *(volatile unsigned long *)0xFFF87040
#define FLW     *(volatile unsigned long *)0xFFFFE100
#define PLLCTL1 *(volatile unsigned long *)0xFFFFFF70
#define PLLCTL2 *(volatile unsigned long *)0xFFFFFF74
#define CSDISCLR *(volatile unsigned long *)0xFFFFFF38
#define CSVSTAT *(volatile unsigned long *)0xFFFFFF54
#define GHVSRC *(volatile unsigned long *)0xFFFFFF48
#define CLKCNTL *(volatile unsigned long *)0xFFFFFFD0
#define RCLKSRC *(volatile unsigned long *)0xFFFFFF50
#define VCLKASRC *(volatile unsigned long *)0xFFFFFF4C
#define RTIGCTRL *(volatile unsigned long *)0xFFFFFC00
#define RTIFRC0 *(volatile unsigned long *)0xFFFFFC10
#define RTIUC0 *(volatile unsigned long *)0xFFFFFC14
#define RTICPUC0 *(volatile unsigned long *)0xFFFFFC18
#define RTICOMP0 *(volatile unsigned long *)0xFFFFFC50
#define RTIINTFLAG *(volatile unsigned long *)0xFFFFFC88
#define RTISETINTENA *(volatile unsigned long *)0xFFFFFC80
#define RTICLEARINTENA *(volatile unsigned long *)0xFFFFFC84
#define REQENASET0 *(volatile unsigned long *)0xFFFFFE30
#define VECTORADDRESS *(volatile unsigned long *)0xFFF8200C
#define GIODOUTB *(volatile unsigned long *)0xFFF7BC5C
#define GIODIRB *(volatile unsigned long *)0xFFF7BC54
#define GIOGCR0 *(volatile unsigned long *)0xFFF7BC00
#define HCLK1CTRL *(volatile unsigned long *)0xFFFFE154    
#define FSM_WR_ENA *(volatile unsigned long *)0xFFF87288
#define EEPROM_CONFIG *(volatile unsigned long *)0xFFF872B8

void targetInit(void);
void targetEnableInterrupts(void);
void targetShutdown(void);

void initClocks(void);
void initTimer(void);
void initVIM(void);

#endif  // REG_TESTS_TARGET__H
