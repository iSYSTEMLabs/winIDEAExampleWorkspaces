/**************************************************************************
 * FILE NAME: $RCSfile: etpu_util.c,v $      COPYRIGHT (c) Freescale 2004 *
 * DESCRIPTION:                                     All Rights Reserved   *
 * This file contains useful macros and functions for using the eTPU.     *
 *========================================================================*
 * ORIGINAL AUTHOR: Jeff Loeliger [r12110]                                *
 * $Log: etpu_util.c,v $
 * Revision 2.0  2004/11/30 16:10:32  r12110
 * -Updated functions to remove requirement for etpu_config.h file.
 * -Added new memset32 function to clear eTPU code memory.
 *
 * Revision 1.1  2004/11/12 10:39:23  r12110
 * Initial version checked into CVS.
 *........................................................................*
 * 0.01  J. Loeliger  13/Jun/03  Initial version of file.                 *
 * 0.02  J. Loeliger  19/Mar/04  Change function prefix to fs_ for        *
 *                                Freescale semiconductor.                *
 * 0.03  J. Loeliger  26/Mar/04  Updated after debug.                     *
 * 0.04  J. Loeliger  26/May/04  Updated comments.                        *
 *       M. Brejl                Fixed problem with *fs_etpu_data_ram.    *
 *       M.Princ                 Renamed fs_mpc5500_timer_start to        *
 *                                fs_timer_start.                         *
 *                               Added new functions to access parameter  *
 *                                Ram using different data sizes.         *
 * 0.05  J. Loeliger  16/Jul/04  Updated to match new mpc5554 header files*
 * 0.06  J. Loeliger  16/Aug/04  Updated malloc to round correctly.       *
 * 0.1   J. Loeliger  01/Sep/04  Added fs_etpu_malloc2 function.          *
 **************************************************************************/
//#ifndef _ETPU_UTIL_C_
//#define _ETPU_UTIL_C_

#include "etpu_util.h"    /* prototypes and useful defines */
#include "mpc5746m.h"

extern uint32_t fs_etpu_code_start;
extern uint32_t fs_etpu_data_ram_start;
extern uint32_t fs_etpu_data_ram_end;
extern uint32_t fs_etpu_data_ram_ext;

/******************************************************************************
FUNCTION     : fs_etpu_init
PURPOSE      : To initialize the eTPU module.
		        1. Load eTPU code into memory.
		        2. Initialize global registers.
		          a. MISC vale
		          b. TCR pre-scalers
		        3. Copy initial values of global variables to data RAM
INPUTS NOTES : This function has 5 parameters:
                 p_etpu_config: This is the structure used to initialize the eTPU
                 *code: This is a pointer to an image of the eTPU code.
                 code_size: This is the size of the eTPU code in bytes.
                 *globals: This is a pointer to the global eTPU data that needs
                     to be initialized.
                 globals_size: This is the size of the global data in bytes.
RETURNS NOTES: Error code is channel could not be initialized. Error code that
                 can be returned are:
                 FS_ETPU_ERROR_CODESIZE: When the code is to big for the
                    available memory.
WARNING      : This function does not configure the pins only the eTPU->
******************************************************************************/
uint32_t fs_etpu_init(struct etpu_config_t p_etpu_config, uint32_t *code,
                  uint32_t code_size, uint32_t *globals, uint32_t globals_size)
{
	uint32_t *code_end;
  int32_t unused_code_ram;
  int8_t x;

  unused_code_ram = ((ETPU.MCR.B.SCMSIZE + 1 ) * 2048) - code_size;
  if(unused_code_ram < 0) return((uint32_t)FS_ETPU_ERROR_CODESIZE);

  /* 1. Load microcode */
  /* In order for the MISC function to work with code that is small than
   * the code memory any unused locations must be set to zero. */
  ETPU.ECR_A.B.MDIS = 1;    /* stop eTPU_A */
  ETPU.ECR_B.B.MDIS = 1;    /* stop eTPU_B */
  ETPU.MCR.B.VIS = 1;       /* enable CPU writes to eTPU code memory */

  x = 0;
  while(x < 5)
  {
    if(ETPU.MCR.B.VIS == 1) break;
    x++;
  }

  if(x > 4) return (FS_ETPU_ERROR_VIS_BIT_NOT_SET);

  /* Copy microcode */
  code_end = fs_memcpy32((uint32_t*)fs_etpu_code_start, code, code_size);

  /* Clear rest of program memory */
  fs_memset32(code_end, 0, unused_code_ram);

  ETPU.MCR.B.VIS = 0;    /* disable CPU writes to eTPU code memory */

  /* Configure MISC */
  ETPU.MISCCMPR.R = p_etpu_config.misc; /*write MISC value before enabled in MCR */
  ETPU.MCR.R = p_etpu_config.mcr;

  /* Configure Engine 1 */
  ETPU.ECR_A.R = p_etpu_config.ecr_a;
  if(ETPU.ECR_A.B.MDIS == 0)
  {
    ETPU.TBCR_A.R = p_etpu_config.tbcr_a;
    ETPU.REDCR_A.R = p_etpu_config.stacr_a;
  }

  /* Configure Engine 2 */
  /* Not all parts have a second eTPU engine, if yes, these write are ignored. */
  ETPU.ECR_B.R = p_etpu_config.ecr_b;
  if(ETPU.ECR_B.B.MDIS == 0)
  {
    ETPU.TBCR_B.R = p_etpu_config.tbcr_b;
    ETPU.REDCR_B.R = p_etpu_config.stacr_b;
  }

// added
  fs_memset32((uint32_t*)fs_etpu_data_ram_start, 0, 0x3FFF);
  
  /* 3. Copy initial global values to parameter RAM. */
  fs_free_param = fs_memcpy32((uint32_t*)fs_etpu_data_ram_start, globals, globals_size);
  fs_free_param = (uint32_t*)((((uint32_t)fs_free_param + 7) >> 3) << 3); /* round up to 8s */

  return(0);
}

/******************************************************************************
FUNCTION     : fs_etpu_data_ram
PURPOSE      : This function returns a pointer to the start of the data RAM for
                 the specified channel.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: A pointer to the start of the data RAM for the channel.
WARNING      : This function does no error cheching, if the channel has not
                 been initialized then an undefined value will be returned
                 (normally this will be a value of 0).
******************************************************************************/
uint32_t *fs_etpu_data_ram(uint8_t channel)
{
    return((uint32_t*)((uint8_t*)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA << 3)));
}

/******************************************************************************
FUNCTION     : fs_etpu_set_hsr
PURPOSE      : This function sets the Host Service Request (HSR) register of the
                 specified eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
                 hsr: The HSR value to send to the channel.
RETURNS NOTES: none
WARNING      : The CPU should check that the HSR field is 0 before calling this
                 routine. If the HSR field is not 0 then the 2 values will be
                 ORed together.
******************************************************************************/
void fs_etpu_set_hsr(uint8_t channel, uint8_t hsr)
{
    ETPU.CHAN[channel].HSRR.R = hsr;
}

/******************************************************************************
FUNCTION     : fs_etpu_get_hsr
PURPOSE      : This function returns the current value of the Host Service
                 Request (HSR) register of the specified eTPU channel.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: Value of HSR register.
WARNING      :
******************************************************************************/
uint8_t fs_etpu_get_hsr(uint8_t channel)
{
    return( (uint8_t)ETPU.CHAN[channel].HSRR.R );
}

/******************************************************************************
FUNCTION     : fs_etpu_enable
PURPOSE      : This function enables or changes the priority of an eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
                 priority: The priority to be assigned to the channel. This
                   should be assigned a value of: FS_ETPU_PRIORITY_HIGH,
                   FS_ETPU_PRIORITY_MIDDLE or FS_ETPU_PRIORITY_LOW.
RETURNS NOTES: none.
WARNING      :
******************************************************************************/
void fs_etpu_enable(uint8_t channel, uint8_t priority)
{
    ETPU.CHAN[channel].CR.B.CPR = priority;
}

/******************************************************************************
FUNCTION     : fs_etpu_disable
PURPOSE      : This function disables an eTPU channel.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: none
WARNING      : If the channel is currently being serviced then the service will
                 complete.
******************************************************************************/
void fs_etpu_disable(uint8_t channel)
{
  ETPU.CHAN[channel].CR.B.CPR = FS_ETPU_PRIORITY_DISABLE;
}

/******************************************************************************
FUNCTION     : fs_etpu_interrupt_enable
PURPOSE      : This function enables an eTPU channel to generate interrupts.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: none
WARNING      : This enables the eTPU to send interrupts to an interruput
                 controller. Additional configuration may be required for
                 the CPU to recieve the interrupt.
******************************************************************************/
void fs_etpu_interrupt_enable(uint8_t channel)
{
  ETPU.CHAN[channel].CR.B.CIE = TRUE;
}

/******************************************************************************
FUNCTION     : fs_etpu_interrupt_disable
PURPOSE      : This function disables an ETPU channel from generating interrupts.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: none
WARNING      : When interupts are disabled the eTPU interrupt status bits are
                 still set and can be used to poll the interrupt status.
******************************************************************************/
void fs_etpu_interrupt_disable(uint8_t channel)
{
  ETPU.CHAN[channel].CR.B.CIE = FALSE;
}

/******************************************************************************
FUNCTION     : fs_etpu_dma_enable
PURPOSE      : This function enables an ETPU channel to request DMA service.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: none
WARNING      : In a given device not all of the DMA requests may be connected
                 to DMA channels.
******************************************************************************/
void fs_etpu_dma_enable(uint8_t channel)
{
  ETPU.CHAN[channel].CR.B.DTRE = TRUE;
}

/******************************************************************************
FUNCTION     : fs_etpu_dma_disable
PURPOSE      : This function disables an eTPU channel from generating DMA requests.
INPUTS NOTES : This function has 1 parameter:
                 channel: The eTPU channel number.
RETURNS NOTES: none
WARNING      : When DMA requests are disabled the eTPU DMA request status bits are
                 still set and can be used to poll the DMA request status.
******************************************************************************/
void fs_etpu_dma_disable(uint8_t channel)
{
  ETPU.CHAN[channel].CR.B.DTRE = FALSE;
}

/******************************************************************************
FUNCTION     : fs_timer_start
PURPOSE      : This function start the timebases.
INPUTS NOTES : none
RETURNS NOTES: none
WARNING      : This functions start the timebases of all timer modules on a device.
******************************************************************************/
void fs_timer_start(void)
{
	ETPU.MCR.B.GTBE = 1;  /* Global Time Base enabled - synchronous start of TCRs */
}

/******************************************************************************
FUNCTION     : fs_etpu_malloc
PURPOSE      : This function allocates data RAM (parameter RAM) for a channel.
INPUTS NOTES : This function has 1 parameter:
                 num_bytes: this is the number of bytes of data RAM that is
                              required by a channel. The number of bytes requested
                              must be a multiple of 8 bytes because the eTPU
                              alloactes memory in 8 byte blocks.
RETURNS NOTES: A pointer to allocated data RAM. If the requested amount of memory
                 is larger than the available amount of memory then 0 will be
                 returned.
WARNING      : This function is non-reentrant and uses the fr_free_param global.
******************************************************************************/
uint32_t *fs_etpu_malloc(uint16_t num_bytes){

uint32_t *pba;
uint32_t x;

    pba = fs_free_param;
    fs_free_param += (((num_bytes+7)>>3)<<1);
    x = (((num_bytes+7)>>3)<<1);

    if (fs_free_param > (uint32_t *)fs_etpu_data_ram_end)
        return(0);
    else
        return(pba);
}

/******************************************************************************
FUNCTION     : fs_etpu_malloc2
PURPOSE      : This function is similar to fs_etpu_malloc. The difference is
                 that this function first checks to see if the CPBA is not sero.
                 If it is not zero then it assumes the channel has already
                 been initialized and does not allocate more data RAM to the
                 channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
                 num_bytes: this is the number of bytes of data RAM that is
                              required by a channel. The number of bytes requested
                              must be a multiple of 8 bytes because the eTPU
                              alloactes memory in 8 byte blocks.
RETURNS NOTES: A pointer to allocated data RAM. If the requested amount of memory
                 is larger than the available amount of memory then 0 will be
                 returned.
WARNING      : This function is non-reentrant and uses the fr_free_param global.
******************************************************************************/
uint32_t *fs_etpu_malloc2(uint8_t channel, uint16_t num_bytes)
{
	uint32_t *pba;

    if (ETPU.CHAN[channel].CR.B.CPBA == 0 )
    {
	    pba = fs_free_param;
    	fs_free_param += (((num_bytes+7)>>3)<<1);

    	if (fs_free_param > (uint32_t *)fs_etpu_data_ram_end)
        	return(0);
    	else
        	return(pba);
	}
	else
    	return(fs_etpu_data_ram(channel));
}

/* set local variables */
/******************************************************************************
FUNCTION     : fs_etpu_set_chan_local_32
PURPOSE      : This function sets a 32 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 3 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 32bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_chan_local_32(uint8_t channel, uint32_t offset, uint32_t value)
{
    *(uint32_t *)((uint32_t)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset) = value;
}

/******************************************************************************
FUNCTION     : fs_etpu_set_chan_local_24
PURPOSE      : This function sets a 24 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 3 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 24bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.F
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      : This function uses the sign extended location of the data memory
                 to write only 24 bits to the data memory. This 24 bit write is
                 an atomic operation and does not effect the upper 8 bits of the
                 32 bit value associated with the 24 bits.
******************************************************************************/
void fs_etpu_set_chan_local_24(uint8_t channel, uint32_t offset, uint24_t value)
{
    *(uint32_t *)((uint32_t)fs_etpu_data_ram_ext + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset-1) = value;
}

/******************************************************************************
FUNCTION     : fs_etpu_set_chan_local_16
PURPOSE      : This function sets a 16 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 3 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 16bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_chan_local_16(uint8_t channel, uint32_t offset, uint16_t value)
{
    *(uint16_t *)((uint32_t)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset) = value;
}

/******************************************************************************
FUNCTION     : fs_etpu_set_chan_local_8
PURPOSE      : This function sets a 8 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 3 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 8bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_chan_local_8(uint8_t channel, uint32_t offset, uint8_t value)
{
    *(uint8_t *)((uint32_t)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset) = value;
}

/* get local variables */
/******************************************************************************
FUNCTION     : fs_etpu_get_chan_local_32
PURPOSE      : This function reads a 32 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 32bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The 32 bit value of the parameter.
WARNING      :
******************************************************************************/
uint32_t fs_etpu_get_chan_local_32(uint8_t channel, uint32_t offset)
{
    return(*(uint32_t *)((uint32_t)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_chan_local_24s
PURPOSE      : This function reads a signed 24 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 24bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The signed 24 bit value of the parameter.
WARNING      : This function uses the signed area of the data memory.
******************************************************************************/
int24_t fs_etpu_get_chan_local_24s(uint8_t channel, uint32_t offset)
{
    return(*(uint32_t *)((uint32_t)fs_etpu_data_ram_ext + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset-1));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_chan_local_24
PURPOSE      : This function reads a unsigned 24 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 24bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The unsigned 24 bit value of the parameter.
WARNING      :
******************************************************************************/
uint24_t fs_etpu_get_chan_local_24(uint8_t channel, uint32_t offset)
{
    return( 0x00FFFFFF & (*(uint32_t *)((uint32_t)fs_etpu_data_ram_ext + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset-1)));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_chan_local_16
PURPOSE      : This function reads a 16 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 16bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The 16 bit value of the parameter.
WARNING      :
******************************************************************************/
uint16_t fs_etpu_get_chan_local_16(uint8_t channel, uint32_t offset)
{

    return(*(uint16_t *)((uint32_t)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_chan_local_8
PURPOSE      : This function reads a 8 bit parameter for an eTPU channel.
INPUTS NOTES : This function has 2 parameters:
                 channel: The eTPU channel number.
				 offset: The offset to the variable. This must be a 8bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The 8 bit value of the parameter.
WARNING      :
******************************************************************************/
uint8_t fs_etpu_get_chan_local_8(uint8_t channel, uint32_t offset)
{
    return(*(uint8_t *)((uint32_t)fs_etpu_data_ram_start + (ETPU.CHAN[channel].CR.B.CPBA<<3) + offset));
}


/* set global variables */
/******************************************************************************
FUNCTION     : fs_etpu_set_global_32
PURPOSE      : This function write to a 32 bit global variable.
INPUTS NOTES : This function has 2 parameters:
				 offset: The offset to the variable. This must be a 32bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_global_32(uint32_t offset, uint32_t value)
{

    *(uint32_t *)((uint32_t)fs_etpu_data_ram_start + offset) = value;
}

/******************************************************************************
FUNCTION     : fs_etpu_set_global_24
PURPOSE      : This function write to a 24 bit global variable.
INPUTS NOTES : This function has 2 parameters:
				 offset: The offset to the variable. This must be a 24bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_global_24(uint32_t offset, uint24_t value)
{
    *(uint32_t *)((uint32_t)fs_etpu_data_ram_ext + offset-1) = value;
}

/******************************************************************************
FUNCTION     : fs_etpu_set_global_16
PURPOSE      : This function write to a 16 bit global variable.
INPUTS NOTES : This function has 2 parameters:
				 offset: The offset to the variable. This must be a 16bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_global_16(uint32_t offset, uint16_t value)
{

    *(uint16_t *)((uint32_t)fs_etpu_data_ram_start + offset) = value;
}

/******************************************************************************
FUNCTION     : fs_etpu_set_global_8
PURPOSE      : This function write to a 8 bit global variable.
INPUTS NOTES : This function has 2 parameters:
				 offset: The offset to the variable. This must be a 8bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
				 value: The value to write to the paramater.
RETURNS NOTES: none
WARNING      :
******************************************************************************/
void fs_etpu_set_global_8(uint32_t offset, uint8_t value)
{

    *(uint8_t *)((uint32_t)fs_etpu_data_ram_start + offset) = value;
}


/* get global variables */
/******************************************************************************
FUNCTION     : fs_etpu_get_global32
PURPOSE      : This function reads a 32 bit global variable.
INPUTS NOTES : This function has 1 parameter:
				 offset: The offset to the variable. This must be a 32bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The 32 bit value of the parameter.
WARNING      :
******************************************************************************/
uint32_t fs_etpu_get_global32(uint32_t offset)
{
    return(*(uint32_t *)((uint32_t)fs_etpu_data_ram_start + offset));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_global_24s
PURPOSE      : This function reads a signed 24 bit global variable.
INPUTS NOTES : This function has 1 parameter:
				 offset: The offset to the variable. This must be a 24bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The signed 24 bit value of the parameter.
WARNING      : This function uses the sign extended location of the data memory
                 to write only 24 bits to the data memory. This 24 bit write is
                 an atomic operation and does not effect the upper 8 bits of the
                 32 bit value associated with the 24 bits.
******************************************************************************/
int24_t fs_etpu_get_global_24s(uint32_t offset)
{
    return(*(uint32_t *)((uint32_t)fs_etpu_data_ram_ext + offset-1));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_global_24
PURPOSE      : This function reads an unsigned 24 bit global variable.
INPUTS NOTES : This function has 1 parameter:
				 offset: The offset to the variable. This must be a 24bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The unsigned 24 bit value of the parameter.
WARNING      :
******************************************************************************/
uint24_t fs_etpu_get_global_24(uint32_t offset)
{
    return( 0x00FFFFFF & (*(uint32_t *)((uint32_t)fs_etpu_data_ram_ext + offset-1)));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_global_16
PURPOSE      : This function reads a 16 bit global variable.
INPUTS NOTES : This function has 1 parameter:
				 offset: The offset to the variable. This must be a 16bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The 16 bit value of the parameter.
WARNING      :
******************************************************************************/
uint16_t fs_etpu_get_global_16(uint32_t offset)
{

    return(*(uint16_t *)((uint32_t)fs_etpu_data_ram_start + offset));
}

/******************************************************************************
FUNCTION     : fs_etpu_get_global_8
PURPOSE      : This function reads a 8 bit global variable.
INPUTS NOTES : This function has 1 parameter:
				 offset: The offset to the variable. This must be a 8bit
				           aligned value. This value is normally provided by
				           the eTPU compiler.
RETURNS NOTES: The 8 bit value of the parameter.
WARNING      :
******************************************************************************/
uint8_t fs_etpu_get_global_8(uint32_t offset)
{
    return(*(uint8_t *)((uint32_t)fs_etpu_data_ram_start + offset));
}


/******************************************************************************
FUNCTION     : fs_memcpy32
PURPOSE      : This function is similar to the standard C memcpy() function
                 however it copies 32 bit words rather than bytes.
INPUTS NOTES : This function has 3 parameters:
                 *dest: This is a pointer to the destination location
                 *source this is a pointer to the source location
                 size: This is the size of the data to copy in bytes.
RETURNS NOTES: A pointer to the end of the copied data.
WARNING      : The *dest and *source pointers should be aligned to a 32 bit
                 address. If they are not it may cause memory exceptions. Moving
                 data to the eTPU code memory that is not 32 bit aligned is
                 undefined. The size should be a multiple of 4 to copy 32 bit
                 value. If it is not it is rounded down.
******************************************************************************/
uint32_t *fs_memcpy32(uint32_t *dest, uint32_t *source, uint32_t size)
{
	uint32_t *p = dest;
	uint32_t *q = source;

	size = size >>2;

	while(size--)
		*p++ = *q++;

	return (p);
}

/******************************************************************************
FUNCTION     : fs_memset32
PURPOSE      : This function is similar to the standard C memset() function
                 however it sets 32 bit words rather than bytes.
INPUTS NOTES : This function has 3 parameters:
                 *start: This is a pointer to the start location
                 value: This is the value to write to memory
                 size: This is the size of the data to copy in bytes.
RETURNS NOTES: none.
WARNING      : The *start pointer should be aligned to a 32 bit address. If
                 it is not it may cause memory exceptions. Writing data to the
                eTPU code memory that is not 32 bit aligned is undefined. The
                 size should be a multiple of 4 to copy 32 bit  value. If it
                 is not it is rounded down.
******************************************************************************/
void      fs_memset32(uint32_t *start, uint32_t value, int32_t size)
{
	uint32_t *p = start;

	size = size >>2;

	while(size--)
	*p++ = value;
}

//#endif
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
