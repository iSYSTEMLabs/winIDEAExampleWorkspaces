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

#define RCGC1 (*(volatile unsigned int*) (0x400FE104))
#define RCGC2 (*(volatile unsigned int*) (0x400FE108))
#define INT_0_31_SET_EN  (*(volatile unsigned int*) (0xE000E100))
#define GPTMTAMR (*(volatile unsigned int*) (0x40030004))
#define GPTMCTL (*(volatile unsigned int*) (0x4003000C))
#define GPTMIMR (*(volatile unsigned int*) (0x40030018))
#define GPTMTAILR (*(volatile unsigned int*) (0x40030028))
#define GPTMICR (*(volatile unsigned int*) (0x40030024))
#define GPIOHBCTL (*(volatile unsigned int*) (0x400FE06C))
#define GPIO_PORTD_DATA_R       (*((volatile unsigned long *)0x4005b000))
#define GPIO_PORTD_DIR_R        (*((volatile unsigned long *)0x4005b400))
#define GPIO_PORTD_AFSEL_R      (*((volatile unsigned long *)0x4005b420))
#define GPIO_PORTD_DEN_R        (*((volatile unsigned long *)0x4005b51c))
#define SYSCTL_RCGC2_R          (*((volatile unsigned long *)0x400FE108))
#define SYSCTL_RCGC2_GPIOD      0x00000008  // port D Clock Gating Control
#define LED                    (*((volatile unsigned long *)0x4005b03C))
