#ifndef __BlueNRG_h__
#define __BlueNRG_h__


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

void targetInit(void);
void InterruptRoutine(void);

#endif

#define MFT1_TNMCTRL                (*(volatile unsigned int*)    (0x40D00018))
#define MFT1_TNCRA                  (*(volatile unsigned int*)    (0x40D00004))
#define MFT1_TNICTRL                (*(volatile unsigned int*)    (0x40D0001C))
#define MFT1_TNCKC                  (*(volatile unsigned int*)    (0x40D00014))
#define MFT1_TNPRSC                 (*(volatile unsigned int*)    (0x40D00010))
#define MFT1_TNICLR                 (*(volatile unsigned int*)    (0x40D00020))
#define BLUE_CTRL_RADIO_CONFIG      (*(volatile unsigned int*)    (0x4080000C))
#define SYSTEM_CTRL                 (*(volatile unsigned int*)    (0x40200008))
#define AHBUPCONV                   (*(volatile unsigned int*)    (0x40C00000))
#define GPIO_DATA                   (*(volatile unsigned int*)    (0x40000000))
#define GPIO_OEN                    (*(volatile unsigned int*)    (0x40000004))
#define GPIO_MODE0                  (*(volatile unsigned int*)    (0x4000002C))

#define INT_0_31_SET_EN             (*(volatile unsigned int*)    (0xE000E100))
#define INT_16_19_PRI               (*(volatile unsigned int*)    (0xE000E410))
#define INT_0_31_CLR_PEND           (*(volatile unsigned int*)    (0xE000E280))
#define INT_0_31_ACT                (*(volatile unsigned int*)    (0xE000E300))

