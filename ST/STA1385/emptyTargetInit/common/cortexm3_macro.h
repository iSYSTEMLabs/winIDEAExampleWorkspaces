/**
 * @file cortexm3_macro.h
 * @brief Header file for cortexm3_macro.s.
 *
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */

#ifndef __CORTEXM3_MACRO_H__
#define __CORTEXM3_MACRO_H__

#include "sta_type.h"

void __WFI(void);
void __WFE(void);
void __SEV(void);
void __ISB(void);
void __DSB(void);
void __DMB(void);
void __SVC(void);
uint32_t __MRS_CONTROL(void);
void __MSR_CONTROL(uint32_t Control);
void __SETPRIMASK(void);
void __RESETPRIMASK(void);
void __SETFAULTMASK(void);
void __RESETFAULTMASK(void);
void __BASEPRICONFIG(uint32_t NewPriority);
uint32_t __GetBASEPRI(void);
uint16_t __REV_HalfWord(uint16_t Data);
uint32_t __REV_Word(uint32_t Data);

#endif /* __CORTEXM3_MACRO_H */

