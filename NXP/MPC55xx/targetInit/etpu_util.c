/**************************************************************************/
/* FILE NAME: etpu__util.c     COPYRIGHT (c) Freescale Semiconductor 2004 */
/* VERSION:  0.05                                 All Rights Reserved     */
/*                                                                        */
/* DESCRIPTION:                                                           */
/* This file contains useful macros and prototypes for using the modules  */
/* on MPC5500 devices.                                                    */
/*========================================================================*/
/* UPDATE HISTORY                                                         */
/* REV      AUTHOR      DATE       DESCRIPTION OF CHANGE                  */
/* ---   -----------  ---------    ---------------------                  */
/* 0.01  J. Loeliger  13/Jun/03  Initial version of file.                 */
/* 0.02  J. Loeliger  19/Mar/04  Change function prefix to fs_ for        */
/*                                Freescale semiconductor.                */
/* 0.03  J. Loeliger  26/Mar/04  Updated after debug.                     */
/* 0.04  J. Loeliger  26/May/04  Updated comments.                        */
/*       M. Brejl                Fixed problem with *fs_etpu_data_ram.    */
/*       M.Princ                 Renamed fs_mpc5500_timer_start to        */
/*                                fs_timer_start.                         */
/*                               Added new functions to access parameter  */
/*                                Ram using different data sizes.         */
/* 0.05  J. Loeliger  16/Jul/04  Updated to match new mpc5554 header files.*/
/**************************************************************************/
#ifndef _ETPU_UTIL_C_
#define _ETPU_UTIL_C_

#include "etpu_config.h"
#include "etpu_util.h"
#define CODE_RAM  (*( uint32_t *)             0xC3FD0000)

extern uint32_t *fs_free_param;

/******************************************************************************
FUNCTION     : etpu_init
PURPOSE      : To initialize the eTPU module.
		        1. Load eTPU code into memory.
		        2. Initialize global registers.
		          a. MISC vale
		          b. TCR pre-scalers
		        3. Copy initial values of global variables to data RAM

INPUTS NOTES : This function has 1 parameter:
RETURNS NOTES: Error code is channel could not be initialized. Error code that
                 can be returned are:
WARNING      : *This function does not configure the pin only the eTPU. In a
******************************************************************************/
uint32_t fs_etpu_init(struct etpu_config_t p_etpu_config, uint32_t *code, \
                  uint32_t code_size, uint32_t *globals, uint32_t globals_size)
{
  uint32_t *code_end;
  int32_t unused_code_ram;

  unused_code_ram = ((ETPU.MCR.B.SCMSIZE + 1 ) * 2048) - code_size;
  if ( unused_code_ram < 0 ) return((uint32_t)FS_ETPU_ERROR_CODESIZE);

  /* 1. Load microcode */
  /* In order for the MISC function to work with a SCM that is not completely */
  /* filled, any unsed SCM memory must be set to zero.                        */
  /* enable writting to SCM */
  ETPU.ECR_A.B.MDIS = 1;
  ETPU.ECR_B.B.MDIS = 1;
  ETPU.MCR.B.VIS = 1;
  /* Copy microcode */
  code_end = fs_memcpy32( &CODE_RAM, code, code_size);
  /* Clear rest of program memory */
  memset( code_end, 0, unused_code_ram);
  /* disable writting to SCM */
  ETPU.MCR.B.VIS = 0;
  ETPU.ECR_A.B.MDIS = 0;
  ETPU.ECR_B.B.MDIS = 0;

	/* 2. Initialize global registers */
  ETPU.MISCCMPR.R = p_etpu_config.misc; //write MISC value before it is enable in MCR
//	ETPU.MCR.R = p_etpu_config.mcr;

  /* Configure Engine 1 */
  /*ETPU.ECR_A.R = p_etpu_config.ecr_a;
  ETPU.TBCR_A.R = p_etpu_config.tbcr_a;
  ETPU.REDCR_A.R = p_etpu_config.stacr_a;*/

  /* Configure Engine 2 */
  /*ETPU.ECR_B.R = p_etpu_config.ecr_b;
  ETPU.TBCR_B.R = p_etpu_config.tbcr_b;
  ETPU.REDCR_B.R = p_etpu_config.stacr_b; */

  /* 3. Copy intial global values to parameter RAM. */
  fs_free_param = fs_memcpy32 ( &ETPU_DATA_RAM, globals, globals_size);
}

uint32_t *fs_etpu_chan_init(uint8_t channel, uint8_t function, uint8_t mode, \
                uint8_t hsr, uint8_t num_param, uint32_t config, uint32_t *func_frame)
{

  if (func_frame == 0) 
  {
    func_frame = fs_etpu_malloc(num_param);
    if (func_frame == 0) 
      return((uint32_t *)FS_ETPU_ERROR_MALLOC);
  }

  ETPU.CHAN[channel].CR.R = config + (function<<16) + ((*func_frame - (uint32_t)&ETPU_DATA_RAM)>>3);
  ETPU.CHAN[channel].SCR.R = mode;
  ETPU.CHAN[channel].HSRR.R = hsr;

  return(func_frame);
}


uint32_t *fs_etpu_data_ram(uint8_t channel)
{
    return((uint32_t*)((uint8_t*)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA << 3)));
}

void fs_etpu_set_hsr(uint8_t channel, uint8_t hsr)
{
    ETPU.CHAN[channel].HSRR.R = hsr;
}

uint8_t fs_etpu_get_hsr(uint8_t channel)
{
    return( (uint8_t)ETPU.CHAN[channel].HSRR.R );
}

void fs_etpu_enable(uint8_t channel, uint8_t priority)
{
    ETPU.CHAN[channel].CR.B.CPR = priority;
}

void fs_etpu_disable(uint8_t channel)
{
    ETPU.CHAN[channel].CR.B.CPR = FS_ETPU_PRIORITY_DISABLE;
}

void fs_etpu_interrupt_enable(uint8_t channel)
{
    ETPU.CHAN[channel].CR.B.CIE = TRUE;
}

void fs_etpu_interrupt_disable(uint8_t channel)
{
    ETPU.CHAN[channel].CR.B.CIE = FALSE;
}

void fs_etpu_dma_enable(uint8_t channel)
{
    ETPU.CHAN[channel].CR.B.DTRE = TRUE;
}

void fs_etpu_dma_disable(uint8_t channel)
{
    ETPU.CHAN[channel].CR.B.DTRE = FALSE;
}

/* this file is standard for all applications */


void fs_timer_start(void)
{
	ETPU.MCR.B.GTBE = 1;  /* Global Time Base enabled - synchronous start of TCRs */
}

uint32_t *fs_etpu_malloc(uint16_t num_params){

uint32_t *pba;
uint32_t y;

	pba = fs_free_param;

	y = num_params + 1;
	y = y >> 1;
	y = y << 1;
	fs_free_param = fs_free_param + (y>>2);

	if (fs_free_param > (uint32_t *)ETPU_DATA_RAM_END)
		return(0);
	else
		return(pba);
}

uint32_t fs_inttofract24( uint32_t fract ){

}

/* set local variables */
void fs_etpu_set_chan_local_32(uint8_t channel, uint32_t offset, uint32_t value)
{
    *(uint32_t *)((uint32_t)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset) = value;
}

void fs_etpu_set_chan_local_24(uint8_t channel, uint32_t offset, uint24_t value)
{
    *(uint24_t *)((uint32_t)&ETPU_DATA_RAM_EXT + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset-1) = value;
}

void fs_etpu_set_chan_local_16(uint8_t channel, uint32_t offset, uint16_t value)
{
    *(uint16_t *)((uint32_t)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset) = value;
}

void fs_etpu_set_chan_local_8(uint8_t channel, uint32_t offset, uint8_t value)
{
    *(uint8_t *)((uint32_t)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset) = value;
}

/* get local variables */
uint32_t fs_etpu_get_chan_local_32(uint8_t channel, uint32_t offset)
{
    return(*(uint32_t *)((uint32_t)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset));
}

int24_t fs_etpu_get_chan_local_24s(uint8_t channel, uint32_t offset)
{
    return(*(uint24_t *)((uint32_t)&ETPU_DATA_RAM_EXT + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset-1));
}

uint24_t fs_etpu_get_chan_local_24(uint8_t channel, uint32_t offset)
{
    return( 0x00FFFFFF & (*(uint24_t *)((uint32_t)&ETPU_DATA_RAM_EXT + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset-1)));
}

uint16_t fs_etpu_get_chan_local_16(uint8_t channel, uint32_t offset)
{

    return(*(uint16_t *)((uint32_t)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset));
}

uint8_t fs_etpu_get_chan_local_8(uint8_t channel, uint32_t offset)
{
    return(*(uint8_t *)((uint32_t)&ETPU_DATA_RAM + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset));
}


/* set global variables */
void fs_etpu_set_global_32(uint32_t offset, uint32_t value)
{

    *(uint32_t *)((uint32_t)&ETPU_DATA_RAM + offset) = value;
}

void fs_etpu_set_global_24(uint32_t offset, uint24_t value)
{
    *(uint24_t *)((uint32_t)&ETPU_DATA_RAM_EXT + offset-1) = value;
}

void fs_etpu_set_global_16(uint32_t offset, uint16_t value)
{

    *(uint16_t *)((uint32_t)&ETPU_DATA_RAM + offset) = value;
}

void fs_etpu_set_global_8(uint32_t offset, uint8_t value)
{

    *(uint8_t *)((uint32_t)&ETPU_DATA_RAM + offset) = value;
}


/* get global variables */
uint32_t fs_etpu_get_global32(uint32_t offset)
{
    return(*(uint32_t *)((uint32_t)&ETPU_DATA_RAM + offset));
}

int24_t fs_etpu_get_global_24s(uint32_t offset)
{
    return(*(uint24_t *)((uint32_t)&ETPU_DATA_RAM_EXT + offset-1));
}

uint24_t fs_etpu_get_global_24(uint32_t offset)
{
    return( 0x00FFFFFF & (*(uint24_t *)((uint32_t)&ETPU_DATA_RAM_EXT + offset-1)));
}

uint16_t fs_etpu_get_global_16(uint32_t offset)
{

    return(*(uint16_t *)((uint32_t)&ETPU_DATA_RAM + offset));
}

uint8_t fs_etpu_get_global_8(uint32_t offset)
{
    return(*(uint8_t *)((uint32_t)&ETPU_DATA_RAM + offset));
}


uint32_t *fs_memcpy32(uint32_t *dest, uint32_t *source, uint32_t size)
{
	uint32_t *p = dest;
	uint32_t *q = source;

	size = size >>2;

	while(size--)
		*p++ = *q++;

	return (p);
}

#endif
/*********************************************************************
 *
 * Copyright:
 *	Freescale Semiconductor, INC. All Rights Reserved.
 *  You are hereby granted a copyright license to use, modify, and
 *  distribute the SOFTWARE so long as this entire notice is
 *  retained without alteration in any modified and/or redistributed
 *  versions, and that such modified versions are clearly identified
 *  as such. No licenses are granted by implication, estoppel or
 *  otherwise under any patents or trademarks of Freescale
 *  Semiconductor, Inc. This software is provided on an "AS IS"
 *  basis and without warranty.
 *
 *  To the maximum extent permitted by applicable law, Freescale
 *  Semiconductor DISCLAIMS ALL WARRANTIES WHETHER EXPRESS OR IMPLIED,
 *  INCLUDING IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A
 *  PARTICULAR PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH
 *  REGARD TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS THEREOF)
 *  AND ANY ACCOMPANYING WRITTEN MATERIALS.
 *
 *  To the maximum extent permitted by applicable law, IN NO EVENT
 *  SHALL Freescale Semiconductor BE LIABLE FOR ANY DAMAGES WHATSOEVER
 *  (INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS,
 *  BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER
 *  PECUNIARY LOSS) ARISING OF THE USE OR INABILITY TO USE THE SOFTWARE.
 *
 *  Freescale Semiconductor assumes no responsibility for the
 *  maintenance and support of this software
 ********************************************************************/

