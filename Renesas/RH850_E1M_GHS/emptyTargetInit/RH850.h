#ifndef __v850_fx4_h__
#define __v850_fx4_h__

extern void watchdogUpdate();
extern void wait(); 

void InitClocks();
void InitOSTM();

int iInterruptCounter;

#define OSTM0CMP    *(volatile unsigned long *)0xFFDD8000
#define OSTM0CTL    *(volatile unsigned char *)0xFFDD8020
#define OSTM0TS     *(volatile unsigned char *)0xFFDD8014
#define EIC74       *(volatile unsigned char *)0xFFFFB094

#define PM0         *(volatile unsigned char *)0xFFC10010
#define P0          *(volatile unsigned char *)0xFFC10000

#define PLL0CLKS    *(unsigned long*)0xFFF88004
#define PROT1PHCMD  *(unsigned long*)0xFFF8B000
#define PROT1PS     *(unsigned long*)0xFFF8B004
#define CKSC0CTL    *(unsigned long*)0xFFF89000
#define CKSC1CTL    *(unsigned long*)0xFFF89040
#define CKSC0ACT    *(unsigned long*)0xFFF89008
#define CKSC1ACT    *(unsigned long*)0xFFF89048
#define CLKD0DIV    *(unsigned long*)0xFFF88800
#define CLKD0STAT   *(unsigned long*)0xFFF88804

//registers for OSTM0
#define OSTM0CMP   *(unsigned long*)0xFFEC0000
#define OSTM0CNT   *(unsigned long*)0xFFEC0004
#define OSTM0TO    *(unsigned long*)0xFFEC0008
#define OSTM0TOE   *(unsigned long*)0xFFEC000C
#define OSTM0TE    *(unsigned long*)0xFFEC0010
#define OSTM0TS    *(unsigned long*)0xFFEC0014
#define OSTM0TT    *(unsigned long*)0xFFEC0018
#define OSTM0CTL   *(unsigned long*)0xFFEC0020

//registers for interrupts for OSTM0
#define EIC25   *(unsigned long*)0xFFFEEA32



#endif

#define protected_write(preg,pstatus,reg,value)   do{\
                                                  (preg)=0xa5u;\
                                                  (reg)=(value);\
                                                  (reg)=~(value);\
                                                  (reg)=(value);\
                                                  }while((pstatus)==1u)