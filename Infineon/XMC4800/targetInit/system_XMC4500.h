/**************************************************************************//**
 * @file     system_XMC4500.h
 * @brief    CMSIS Cortex-M4 Device Peripheral Access Layer Header File
 *           for the Infineon XMC4500 Device Series
 * @version  V1.1
 * @date     20. December 2011
 *
 * @note
 * Copyright (C) 2011 ARM Limited. All rights reserved.
 *
 * @par
 * ARM Limited (ARM) is supplying this software for use with Cortex-M 
 * processor based microcontrollers.  This file can be freely distributed 
 * within development tools that are supporting such ARM based processors. 
 *
 * @par
 * THIS SOFTWARE IS PROVIDED "AS IS".  NO WARRANTIES, WHETHER EXPRESS, IMPLIED
 * OR STATUTORY, INCLUDING, BUT NOT LIMITED TO, IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE APPLY TO THIS SOFTWARE.
 * ARM SHALL NOT, IN ANY CIRCUMSTANCES, BE LIABLE FOR SPECIAL, INCIDENTAL, OR
 * CONSEQUENTIAL DAMAGES, FOR ANY REASON WHATSOEVER.
 *
 ******************************************************************************/

#ifndef __SYSTEM_XMC4500_H
#define __SYSTEM_XMC4500_H

#include <stdint.h>
				
#define	CLOCK_CRYSTAL_FREQUENCY	12000000		
				
/* OSC_HP setup parameters */				
#define	OSC_HP_MODE	0		
#define OSCHPWDGDIV 2
				
/* MAIN PLL setup parameters */				
//#define 	PLL_NDIV	79  //240 MHz
#define 	PLL_NDIV	39  //120 MHz
#define 	PLL_K2DIV	1
#define 	PLL_PDIV	1

#endif
