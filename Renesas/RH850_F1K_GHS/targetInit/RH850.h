#ifndef __rh850_f1k_h__
#define __rh850_f1k_h__
#include "dr7f701587_0.h"
#include "dr7f701587_irq.h"

extern void watchdogUpdate();

//void CPU_Init();   
//void targetInit();
//void targetEnableInterrupts();
//void targetDebug();
//void targetShutdown();

void InitClocks();
void InitOSTM();

int iInterruptCounter;

#define OSTM0CMP    *(volatile unsigned long *)0xFFD70000
#define OSTM0CTL    *(volatile unsigned char *)0xFFD70020
#define OSTM0TS     *(volatile unsigned char *)0xFFD70014
#define ICOSTM0     *(volatile unsigned char *)0xFFFFB0A8
#define P10         *(volatile unsigned char *)0xFFC10028
#define PM10        *(volatile unsigned char *)0xFFC10328
#define CKSC_CPUCLKD_CTL *(volatile unsigned int *)0xFFF8A100

#define protected_write(preg,reg,value)   preg=0xa5;\
                                          reg=value;\
                                          reg=~value;\
                                          reg=value;

#define protected_write1(preg,pstatus,reg,value)   do {\
                                                  (preg) = 0xA5u;   \
                                                  (reg) = (value);  \
                                                  (reg) = ~(value); \
                                                  (reg) = (value);  \
                                                  } while((pstatus) == 1u)

#define PROTCMD0 WPROTRPROTCMD0
#define PROTS0 WPROTRPROTS0
#define PROTCMD1 WPROTRPROTCMD1
#define PROTS1 WPROTRPROTS1

#define RESFC RESCTLRESFC
#define RESF  RESCTLRESF

#define ROSCS CLKCTLROSCS
#define ROSCE CLKCTLROSCE
#define MOSCSTPM CLKCTLMOSCSTPM
#define ROSCSTPM CLKCTLROSCSTPM
#define MOSCC  CLKCTLMOSCC
#define MOSCST CLKCTLMOSCST
#define MOSCS CLKCTLMOSCS
#define MOSCE CLKCTLMOSCE
#define PLLE CLKCTLPLLE
#define PLLS CLKCTLPLLS
#define PLLC CLKCTLPLLC
#define CKSC_CPUCLKS_CTL  CLKCTLCKSC_CPUCLKS_CTL 
#define CKSC_CPUCLKS_ACT  CLKCTLCKSC_CPUCLKS_ACT 
#define CKSC_PPLLCLKS_CTL CLKCTLCKSC_PPLLCLKS_CTL
#define CKSC_PPLLCLKS_ACT CLKCTLCKSC_PPLLCLKS_ACT
#define CKSC_CPUCLKD_CTL  CLKCTLCKSC_CPUCLKD_CTL 
#define CKSC_CPUCLKD_ACT  CLKCTLCKSC_CPUCLKD_ACT 
#define ICOSTM0 INTC2ICOSTM0
#define IMR2EIMK84 INTC2IMR2EIMK84
#define PNOT8 PORTPNOT8
#endif

