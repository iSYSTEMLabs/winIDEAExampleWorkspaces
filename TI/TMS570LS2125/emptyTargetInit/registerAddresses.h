/** @file system.h
*   @brief TMS570LS2125 IC Register Address  Header File
*   
*   This file contains:
*   - Definitions
*   - Types
*   .
*   which are relevant for the TMS570LS2125 HW.
*/

/* 
* Copyright (C) 2015 Asystem Electronic d.o.o, iSYSTEM 
* 
* 
*  Redistribution and use in source and binary forms, with or without 
*  modification, are permitted provided that the following conditions 
*  are met:
*
*    Redistributions of source code must retain the above copyright 
*    notice, this list of conditions and the following disclaimer.
*
*    Redistributions in binary form must reproduce the above copyright
*    notice, this list of conditions and the following disclaimer in the 
*    documentation and/or other materials provided with the   
*    distribution.
*
*    Neither the name of Texas Instruments Incorporated nor the names of
*    its contributors may be used to endorse or promote products derived
*    from this software without specific prior written permission.
*
*  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS 
*  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT 
*  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
*  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT 
*  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, 
*  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT 
*  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
*  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
*  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT 
*  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE 
*  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
*
*/
#include  "hal_stdtypes.h"

#ifndef __REGISTERADDRESSES_H__
#define __REGISTERADDRESSES_H__ 

#define _FRDCNTL       *(volatile unsigned long *)0xFFF87000
#define _FBFALLBACK    *(volatile unsigned long *)0xFFF87040
#define FLW           *(volatile unsigned long *)0xFFFFE100
#define _PLLCTL1       *(volatile unsigned long *)0xFFFFFF70
#define _PLLCTL2       *(volatile unsigned long *)0xFFFFFF74
#define _CSDISCLR      *(volatile unsigned long *)0xFFFFFF38
#define _CSVSTAT       *(volatile unsigned long *)0xFFFFFF54
#define _GHVSRC        *(volatile unsigned long *)0xFFFFFF48
#define _PSPWRDWNCLR0  *(volatile unsigned long *)0xFFFFE0A0
#define _PSPWRDWNCLR1  *(volatile unsigned long *)0xFFFFE0A4
#define _PSPWRDWNCLR2  *(volatile unsigned long *)0xFFFFE0A8
#define _PSPWRDWNCLR3  *(volatile unsigned long *)0xFFFFE0AC
#define _CLKCNTL       *(volatile unsigned long *)0xFFFFFFD0
#define _RCLKSRC       *(volatile unsigned long *)0xFFFFFF50
#define _VCLKASRC      *(volatile unsigned long *)0xFFFFFF4C
#define EEPROM_CONFIG *(volatile unsigned long *)0xFFF872B8


#endif  /* __REGISTERADDRESSES_H__ */