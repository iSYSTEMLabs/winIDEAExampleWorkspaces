#ifndef REG_TESTS_TARGET__H
#define REG_TESTS_TARGET__H



/*
  This file defines interface for target specific code.
 */


int iInterruprCounter;

/** Should contain target specific initialization code. This function is the
    first one called fro mmain().
 */
void targetInit();


/** Should enable interrupts for trace/coverage/profiler tests.
    Interrupt function should also be defined in this file, but it is
    not part of public interface. The requirement for interrupt function
    is, that it increments iInterruprCounter when called.
 */
void targetEnableInterrupts();


/**
   This function is periodically called from debug test infinite loop.
 */
void targetDebug();


/**
   Any action required at end of tests
*/
void targetShutdown();

void InitClocks();
void InitTimer();

#endif  // REG_TESTS_TARGET__H

#define CSKEY             (*(volatile unsigned int*)    (0x40010400))
#define CSCTL1            (*(volatile unsigned int*)    (0x40010408))
#define CSCTL2            (*(volatile unsigned int*)    (0x4001040C))
#define PMAPKEYID         (*(volatile unsigned short*)  (0x40005000))
#define P1OUT             (*(volatile unsigned char*)   (0x40004C02))
#define P1DIR             (*(volatile unsigned char*)   (0x40004C04))
#define TA0CTL            (*(volatile unsigned short*)  (0x40000000))
#define TA0CCTL0          (*(volatile unsigned short*)  (0x40000002))
#define TA0R              (*(volatile unsigned short*)  (0x40000010))
#define TA0CCR0           (*(volatile unsigned short*)  (0x40000012))
#define PJSEL0            (*(volatile unsigned char*)   (0x40004D2A))
#define CSCLRIFG          (*(volatile unsigned int*)    (0x40010450))
#define TA0IV             (*(volatile unsigned short*)  (0x4000002E))
#define WDTCTL            (*(volatile unsigned short*)  (0x4000480C))
#define CSCLKEN           (*(volatile unsigned int*)    (0x40010430))
#define CSSTAT            (*(volatile unsigned int*)    (0x40010434))
#define PCMCTL0           (*(volatile unsigned int*)    (0x40010000))

#define INT_0_31_SET_EN   (*(volatile unsigned int*)    (0xE000E100))
#define INT_8_11_PRI      (*(volatile unsigned int*)    (0xE000E408))
#define INT_0_31_CLR_PEND (*(volatile unsigned int*)    (0xE000E280))
