#ifndef __v850_fx4_h__
#define __v850_fx4_h__

#pragma language=extended

extern void watchdogUpdate();

//void CPU_Init();   
//void targetInit();
//void targetEnableInterrupts();
//void targetDebug();
//void targetShutdown();

void RtcTimerInterruptHandler();
void InitClocks();
void InitOSTM();

int iInterruptCounter;

#define OSTM0CMP    *(volatile unsigned long *)0xFFEC0000
#define OSTM0CTL    *(volatile unsigned char *)0xFFEC0020
#define OSTM0TS     *(volatile unsigned char *)0xFFEC0014
#define ICOSTM0     *(volatile unsigned char *)0xFFFFA098
#define MOSCSTPM    *(volatile unsigned char *)0xFFF81118
#define ROSCSTPM    *(volatile unsigned char *)0xFFF81018

/*Realtime clock registers*/
#define SOSCE   *(volatile unsigned long *)0xFFF81200//RTC OSC enable register
#define SOSCS   *(volatile unsigned long *)0xFFF81204//RTC OSC status register
#define CKSC_ARTCAS_CTL *(volatile unsigned long *)0xFFF82300//RTCA clock source register
#define CKSC_ARTCAD_CTL *(volatile unsigned long *)0xFFF82400//RTCA clock divider register
#define CKSC_ARTCAS_ACT *(volatile unsigned long *)0xFFF82308//RTCA clock source status register


#define ICRTCA01S   *(volatile unsigned char *)0xFFFFA192//Interupt mask register

#define RTCA0CTL0   *(volatile unsigned char *)0xFFE78000
#define RTCA0CTL1   *(volatile unsigned char *)0xFFE78004
#define RTCA0CTL2   *(volatile unsigned char *)0xFFE78008
#define CKSC_ARTCAD_STPM *(volatile unsigned char *)0xFFF82418//RTCA stop in standby register

/*Realtime clock bits*/
#define RTCA0CE     7
#define RTCA0EN1S   3
#define RTCA0EN1HZ  5
#define RTCA0CT     0
#define SOSCENTRG   0
#define ARTCASCSID  0
#define ARTCADCSID  0

/*Stop mode registers*/
#define STBC0STPT   *(volatile unsigned long *)0xFFF80110 //Stop mode enable register

#define WUFMSK0     *(volatile unsigned long *)0xFFF80404 //Wake up interrupt enable
#define WUFMSK20    *(volatile unsigned long *)0xFFF80524 //Wake up interrupt enable 2

#define WUF0        *(volatile unsigned long *)0xFFF80400 //Wake up interrupt status
#define WUF20       *(volatile unsigned long *)0xFFF80520 //Wake up interrupt status 2

#define WUFC0       *(volatile unsigned long *)0xFFF80408 //Wake up interrupt clean
#define WUFC20      *(volatile unsigned long *)0xFFF80528 //Wake up interrupt clean 2

#define STBC0PSC    *(volatile unsigned long *)0xFFF80100 //Deep stop mode enable register


/*Stop mode bits*/
#define STBC0STPTRG 0
#define STBC0DISTRG 1
#define WUF0_28     28
#define WUF20_10    10
#endif

