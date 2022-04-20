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

#define memW32(address) (*(unsigned long*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)

#endif  // REG_TESTS_TARGET__H

//rt SRamPerformances: readInBps=178807, writeInBps=186576
