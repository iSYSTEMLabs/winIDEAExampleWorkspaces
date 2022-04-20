/** @file rti.c 
*   @brief RTI Driver Source File
*   @date 03.Apr.2015
*   @version 04.04.00
*
*   This file contains:
*   - API Functions
*   - Interrupt Handlers
*   .
*   which are relevant for the RTI driver.
*/

/* 
* Copyright (C) 2009-2015 Texas Instruments Incorporated - www.ti.com 
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
/* Include Files */

#include "rti.h"
#include "sys_vim.h"

#include "TMS570LS2125.h"


/** @fn void rtiInit(void)
*   @brief Initializes RTI Driver
*
*   This function initializes the RTI driver.
*
*/

/* SourceId : RTI_SourceId_001 */
/* DesignId : RTI_DesignId_001 */
/* Requirements : HL_SR76 */
void rtiInit(void)
{
    /** @b Initialize @b RTI1: */
    /** - Setup NTU source, debug options and disable both counter blocks */
    rtiREG1->GCTRL = (uint32)((uint32)0x0U << 16U) | 0x00000000U;

    /** - Setup timebase for free running counter 0 */
    rtiREG1->TBCTRL = 0x00000000U;

    /** - Enable/Disable capture event sources for both counter blocks */
    rtiREG1->CAPCTRL = 0U | 0U;

    /** - Setup input source compare 0-3 */
    rtiREG1->COMPCTRL = 0x00001000U | 0x00000100U | 0x00000000U | 0x00000000U;

    /** - Reset up counter 0 */
    rtiREG1->CNT[0U].UCx = 0x00000000U;

    /** - Reset free running counter 0 */
    rtiREG1->CNT[0U].FRCx = 0x00000000U;

    /** - Setup up counter 0 compare value 
    *     - 0x00000000: Divide by 2^32
    *     - 0x00000001-0xFFFFFFFF: Divide by (CPUC0 + 1)
    */
    rtiREG1->CNT[0U].CPUCx = 7U;

    /** - Reset up counter 1 */
    rtiREG1->CNT[1U].UCx = 0x00000000U;

    /** - Reset free running counter 1 */
    rtiREG1->CNT[1U].FRCx  = 0x00000000U;

    /** - Setup up counter 1 compare value 
    *     - 0x00000000: Divide by 2^32
    *     - 0x00000001-0xFFFFFFFF: Divide by (CPUC1 + 1)
    */
    rtiREG1->CNT[1U].CPUCx = 7U;

    /** - Setup compare 0 value. This value is compared with selected free running counter. */
    rtiREG1->CMP[0U].COMPx = 10000U;

    /** - Setup update compare 0 value. This value is added to the compare 0 value on each compare match. */
    //rtiREG1->CMP[0U].UDCPx = 0x2BD4U;   // cca 11220  - 176.6/160 MHz freq
    //rtiREG1->CMP[0U].UDCPx = 0x2BCFU;   // cca 11220  - 176.6/160 MHz freq
    rtiREG1->CMP[0U].UDCPx = 0x579EU;   // cca 11220  - 176.6/160 MHz freq

    /** - Setup compare 1 value. This value is compared with selected free running counter. */
    rtiREG1->CMP[1U].COMPx = 50000U;

    /** - Setup update compare 1 value. This value is added to the compare 1 value on each compare match. */
    rtiREG1->CMP[1U].UDCPx = 50000U;

    /** - Setup compare 2 value. This value is compared with selected free running counter. */
    rtiREG1->CMP[2U].COMPx = 80000U;

    /** - Setup update compare 2 value. This value is added to the compare 2 value on each compare match. */
    rtiREG1->CMP[2U].UDCPx = 80000U;

    /** - Setup compare 3 value. This value is compared with selected free running counter. */
    rtiREG1->CMP[3U].COMPx = 100000U;

    /** - Setup update compare 3 value. This value is added to the compare 3 value on each compare match. */
    rtiREG1->CMP[3U].UDCPx = 100000U;

    /** - Clear all pending interrupts */
    rtiREG1->INTFLAG = 0x0007000FU;

    /** - Disable all interrupts */
    rtiREG1->CLEARINTENA = 0x00070F0FU;

    /**   @note This function has to be called before the driver can be used.\n
    *           This function has to be executed in privileged mode.\n
    *           This function does not start the counters.
    */
}

/** @fn void rtiStartCounter(uint32 counter)
*   @brief Starts RTI Counter block
*   @param[in] counter Select counter block to be started:
*              - rtiCOUNTER_BLOCK0: RTI counter block 0 will be started
*              - rtiCOUNTER_BLOCK1: RTI counter block 1 will be started
*
*   This function starts selected counter block of the selected RTI module.
*/
/* SourceId : RTI_SourceId_002 */
/* DesignId : RTI_DesignId_002 */
/* Requirements : HL_SR77 */
void rtiStartCounter(uint32 counter)
{
    rtiREG1->GCTRL |= ((uint32)1U << (counter & 3U));

    /**   @note The function rtiInit has to be called before this function can be used.\n
    *           This function has to be executed in privileged mode.
    */
}

/** @fn void rtiStopCounter(uint32 counter)
*   @brief Stops RTI Counter block
*   @param[in] counter Select counter to be stopped:
*              - rtiCOUNTER_BLOCK0: RTI counter block 0 will be stopped
*              - rtiCOUNTER_BLOCK1: RTI counter block 1 will be stopped
*
*   This function stops selected counter block of the selected RTI module.
*/
/* SourceId : RTI_SourceId_003 */
/* DesignId : RTI_DesignId_003 */
/* Requirements : HL_SR78 */
void rtiStopCounter(uint32 counter)
{
    rtiREG1->GCTRL &= ~(uint32)((uint32)1U << (counter & 3U));

    /**   @note The function rtiInit has to be called before this function can be used.\n
    *           This function has to be executed in privileged mode.
    */
}

/** @fn uint32 rtiResetCounter(uint32 counter)
*   @brief Reset RTI Counter block
*   @param[in] counter Select counter block to be reset:
*              - rtiCOUNTER_BLOCK0: RTI counter block 0 will be reset
*              - rtiCOUNTER_BLOCK1: RTI counter block 1 will be reset
*   @return The function will return:
*           - 0: When the counter reset wasn't successful   
*           - 1: When the counter reset was successful   
*
*   This function resets selected counter block of the selected RTI module.
*/
/* SourceId : RTI_SourceId_004 */
/* DesignId : RTI_DesignId_004 */
/* Requirements : HL_SR79 */
uint32 rtiResetCounter(uint32 counter)
{
    uint32 success = 0U;
    /*SAFETYMCUSW 134 S MR:12.2 <APPROVED> "LDRA Tool issue" */
    if ((rtiREG1->GCTRL & (uint32)((uint32)1U << (counter & 3U))) == 0U)
    {
        rtiREG1->CNT[counter].UCx = 0x00000000U;
        rtiREG1->CNT[counter].FRCx = 0x00000000U;

        success = 1U;
    }

    /**   @note The function rtiInit has to be called before this function can be used.\n
    *           This function has to be executed in privileged mode.\n
    *           The selected counter block has to be stopped before it can reset.
    */

    return success;
}

/** @fn void rtiSetPeriod(uint32 compare, uint32 period)
*   @brief Set new period of RTI compare
*   @param[in] compare Select compare to change period:
*              - rtiCOMPARE0: RTI compare 0 will change the period
*              - rtiCOMPARE1: RTI compare 1 will change the period
*              - rtiCOMPARE2: RTI compare 2 will change the period
*              - rtiCOMPARE3: RTI compare 3 will change the period
*   @param[in] period new period in [ticks - 1]:
*              - 0x00000000: Divide by 1
*              - n: Divide by n + 1
*
*   This function will change the period of the selected compare.
*/

/* SourceId : RTI_SourceId_005 */
/* DesignId : RTI_DesignId_005 */
/* Requirements : HL_SR80 */
void rtiSetPeriod(uint32 compare, uint32 period)
{

  rtiREG1->CMP[compare].UDCPx = period;

    /**   @note The function rtiInit has to be called before this function can be used.\n
    *           This function has to be executed in privileged mode.\n
    *           When the corresponding counter block is not stopped,\n
    *           the period will change on the next compare match of the old period.
    */

}


/** @fn uint32 rtiGetPeriod(uint32 compare)
*   @brief Get current period of RTI compare
*   @param[in] compare Select compare to return the current period:
*              - rtiCOMPARE0: RTI compare 0 will return the current period
*              - rtiCOMPARE1: RTI compare 1 will return the current period
*              - rtiCOMPARE2: RTI compare 2 will return the current period
*              - rtiCOMPARE3: RTI compare 3 will return the current period
*   @return Current period of selected compare in [ticks - 1]:
*           - 0x00000000: Divide by 1
*           - n: Divide by n + 1
*
*   This function will return the period of the selected compare.
*/

/* SourceId : RTI_SourceId_006 */
/* DesignId : RTI_DesignId_006 */
/* Requirements : HL_SR81 */
uint32 rtiGetPeriod(uint32 compare)
{
    uint32 period;

    period = rtiREG1->CMP[compare].UDCPx;

    /**   @note The function rtiInit has to be called before this function can be used.
    */
    
    return period;
}

/** @fn uint32 rtiGetCurrentTick(uint32 compare)
*   @brief Get current tick of RTI compare
*   @param[in] compare Select compare to return the current tick:
*              - rtiCOMPARE0: RTI compare 0 will return the current tick
*              - rtiCOMPARE1: RTI compare 1 will return the current tick
*              - rtiCOMPARE2: RTI compare 2 will return the current tick
*              - rtiCOMPARE3: RTI compare 3 will return the current tick
*   @return Current tick of selected compare
*
*   This function will return the current tick of the selected compare.
*/
/* SourceId : RTI_SourceId_007 */
/* DesignId : RTI_DesignId_007 */
/* Requirements : HL_SR82 */
uint32 rtiGetCurrentTick(uint32 compare)
{
    uint32 tick;
    uint32 counter = ((rtiREG1->COMPCTRL & (uint32)((uint32)1U << (compare << 2U))) != 0U ) ? 1U : 0U;
	uint32 RTI_CNT_FRCx = rtiREG1->CNT[counter].FRCx;
	uint32 RTI_CMP_COMPx = rtiREG1->CMP[compare].COMPx;
	uint32 RTI_CMP_UDCPx = rtiREG1->CMP[compare].UDCPx;
    tick = RTI_CNT_FRCx - (RTI_CMP_COMPx - RTI_CMP_UDCPx);

    /**   @note The function rtiInit has to be called before this function can be used.
    */
    return tick;
}
/** @fn void dwdInit(uint16 dwdPreload)
*   @brief Initialize DWD Expiration Period 
*   @param[in] dwdPreload DWD Preload value for expiration time.
*              - Texp = (dwdPreload +1) / RTICLK
*              - n: Divide by n + 1
*
*   This function can be called to set the DWD expiration
*   
*/
/* SourceId : RTI_SourceId_008 */
/* DesignId : RTI_DesignId_010 */
/* Requirements : HL_SR85 */
void dwdInit(uint16 dwdPreload)
{
  /* Clear the violations if already present */
	rtiREG1->WDSTATUS = 0xFFU;
	
	rtiREG1->DWDPRLD = dwdPreload;
}
/** @fn void dwwdInit(dwwdReaction_t Reaction, uint16 dwdPreload, dwwdWindowSize_t Window_Size)
*   @brief Initialize DWD Expiration Period 
*   @param[in] Reaction DWWD reaction if the watchdog is serviced outside the time window.
*              - Generate_Reset  
*              - Generate_NMI
*   @param[in] dwdPreload DWWD Preload value for the watchdog expiration time.
*              - Texp = (dwdPreload +1) / RTICLK
*              - n: Divide by n + 1
*   @param[in] Window_Size DWWD time window size
*              - Size_100_Percent
*              - Size_50_Percent
*              - Size_25_Percent
*              - Size_12_5_Percent
*              - Size_6_25_Percent
*              - Size_3_125_Percent
*
*   This function can be called to set the DWD expiration
*   
*/
/* SourceId : RTI_SourceId_009 */
/* DesignId : RTI_DesignId_011 */
/* Requirements : HL_SR86 */
void dwwdInit(dwwdReaction_t Reaction, uint16 dwdPreload, dwwdWindowSize_t Window_Size)
{
    /* Clear the violations if already present */
	rtiREG1->WDSTATUS = 0xFFU;

    rtiREG1->WWDSIZECTRL = (uint32) Window_Size;
	rtiREG1->DWDPRLD     = (uint32) dwdPreload;
	rtiREG1->WWDRXNCTRL  = (uint32) Reaction;
}

/** @fn uint32 dwwdGetCurrentDownCounter(void)
*   @brief Get the current DWWD Down Counter 
*   @return Current tick of selected compare
*
*   This function will get the current DWWD down counter value.
*   
*/
/* SourceId : RTI_SourceId_010 */
/* DesignId : RTI_DesignId_012 */
/* Requirements : HL_SR87 */
uint32 dwwdGetCurrentDownCounter(void)
{
    return (rtiREG1->DWDCNTR);
}
/** @fn void dwdCounterEnable(void)
*   @brief Enable DWD
*
*   This function will Enable the DWD counter.
*   
*/
/* SourceId : RTI_SourceId_011 */
/* DesignId : RTI_DesignId_013 */
/* Requirements : HL_SR88 */
void dwdCounterEnable(void)
{	rtiREG1->DWDCTRL = 0xA98559DAU;
	
}
/** @fn void dwdSetPreload(uint16 dwdPreload)
*   @brief Initialize DWD Expiration Period 
*   @param[in] dwdPreload DWD Preload value for the watchdog expiration time.
*              - Texp = (dwdPreload +1) / RTICLK
*              - n: Divide by n + 1
*
*   This function can be called to set the Preload value for the watchdog expiration time.
*   
*/
/* SourceId : RTI_SourceId_012 */
/* DesignId : RTI_DesignId_014 */
/* Requirements : HL_SR85 */
void dwdSetPreload(uint16 dwdPreload)
{
	rtiREG1->DWDPRLD = dwdPreload;
}

/** @fn void dwdReset(void)
*   @brief Reset Digital Watchdog 
*
*   This function can be called to reset Digital Watchdog.
*   
*/
/* SourceId : RTI_SourceId_013 */
/* DesignId : RTI_DesignId_015 */
/* Requirements : HL_SR89 */
void dwdReset(void)
{
	rtiREG1->WDKEY = 0x0000E51AU;
	rtiREG1->WDKEY = 0x0000A35CU;

}

/** @fn void dwdGenerateSysReset(void)
*   @brief Generate System Reset through DWD
*
*   This function can be called to generate system reset using DWD.
*   
*/
/* SourceId : RTI_SourceId_014 */
/* DesignId : RTI_DesignId_016 */
/* Requirements : HL_SR90 */
void dwdGenerateSysReset(void)
{
	rtiREG1->WDKEY = 0x0000E51AU;
	rtiREG1->WDKEY = 0x00002345U;
}

/** @fn boolean IsdwdKeySequenceCorrect(void)
*   @brief Check if DWD Key sequence correct.
*   @return The function will return:
*           - TRUE: When the DWD key sequence is written correctly.
*           - FALSE: When the DWD key sequence is written incorrectly / not written.
*
*   This function will get status of the DWD Key sequence.
*   
*/
/* SourceId : RTI_SourceId_015 */
/* DesignId : RTI_DesignId_017 */
/* Requirements : HL_SR91 */
boolean IsdwdKeySequenceCorrect(void)
{
	boolean Status;

	if((rtiREG1->WDSTATUS & 0x4U) == 0x4U)
	{
		Status = FALSE;
	}
	else
	{
		Status = TRUE;
	}

	return Status;
}
/** @fn dwdResetStatus_t dwdGetStatus(void)
*   @brief Check if Reset is generated due to DWD.
*   @return The function will return:
*           - Reset_Generated: When the Reset is generated due to DWD.
*           - No_Reset_Generated: No Reset is generated due to DWD.
*
*   This function will get dwd Reset status.
*   
*/
/* SourceId : RTI_SourceId_016 */
/* DesignId : RTI_DesignId_018 */
/* Requirements : HL_SR92 */
dwdResetStatus_t dwdGetStatus(void)
{
	dwdResetStatus_t Reset_Status;
	if((rtiREG1->WDSTATUS & 0x2U) == 0x2U)
	{
		Reset_Status = Reset_Generated;
	}
	else
	{
		Reset_Status = No_Reset_Generated;
	}

	return Reset_Status;
}

/** @fn void dwdClearFlag(void)
*   @brief Clear the DWD violation flag.
*
*   This function will clear dwd status register.
*   
*/
/* SourceId : RTI_SourceId_017 */
/* DesignId : RTI_DesignId_020 */
/* Requirements : HL_SR94 */
void dwdClearFlag(void)
{

	rtiREG1->WDSTATUS = 0xFFU;

}

/** @fn dwdViolation_t dwdGetViolationStatus(void)
*   @brief Check the status of the DWD or DWWD violation happened.
*   @return The function will return one of following violations occured:
*           - NoTime_Violation
*           - Key_Seq_Violation
*           - Time_Window_Violation
*           - EndTime_Window_Violation
*           - StartTime_Window_Violation
*
*   This function will get status of the DWD or DWWD violation status.
*   
*/
/* SourceId : RTI_SourceId_018 */
/* DesignId : RTI_DesignId_019 */
/* Requirements : HL_SR93 */
dwdViolation_t dwdGetViolationStatus(void)
{
	dwdViolation_t Violation_Status;

	if ((rtiREG1->WDSTATUS & 0x04U) == 0x04U)
	{
		Violation_Status = Key_Seq_Violation;
	}	
	else if((rtiREG1->WDSTATUS & 0x8U) == 0x8U)
	{
		Violation_Status = StartTime_Window_Violation;
	}
	else if ((rtiREG1->WDSTATUS & 0x10U) == 0x10U)
	{
		Violation_Status = EndTime_Window_Violation;
	}
	else if ((rtiREG1->WDSTATUS & 0x20U) == 0x20U)
	{
		Violation_Status = Time_Window_Violation;
	}
	else
	{
		Violation_Status = NoTime_Violation;
	}

	return Violation_Status;
}

/** @fn void rtiEnableNotification(uint32 notification)
*   @brief Enable notification of RTI module
*   @param[in] notification Select notification of RTI module:
*              - rtiNOTIFICATION_COMPARE0: RTI compare 0 notification
*              - rtiNOTIFICATION_COMPARE1: RTI compare 1 notification
*              - rtiNOTIFICATION_COMPARE2: RTI compare 2 notification
*              - rtiNOTIFICATION_COMPARE3: RTI compare 3 notification
*              - rtiNOTIFICATION_TIMEBASE: RTI Timebase notification
*              - rtiNOTIFICATION_COUNTER0: RTI counter 0 overflow notification
*              - rtiNOTIFICATION_COUNTER1: RTI counter 1 overflow notification
*
*   This function will enable the selected notification of a RTI module.
*   It is possible to enable multiple notifications masked.
*/

/* SourceId : RTI_SourceId_019 */
/* DesignId : RTI_DesignId_008 */
/* Requirements : HL_SR83 */
void rtiEnableNotification(uint32 notification)
{
    rtiREG1->INTFLAG = notification;
    rtiREG1->SETINTENA   = notification;

    /**   @note The function rtiInit has to be called before this function can be used.\n
    *           This function has to be executed in privileged mode.
    */
}

/** @fn void rtiDisableNotification(uint32 notification)
*   @brief Disable notification of RTI module
*   @param[in] notification Select notification of RTI module:
*              - rtiNOTIFICATION_COMPARE0: RTI compare 0 notification
*              - rtiNOTIFICATION_COMPARE1: RTI compare 1 notification
*              - rtiNOTIFICATION_COMPARE2: RTI compare 2 notification
*              - rtiNOTIFICATION_COMPARE3: RTI compare 3 notification
*              - rtiNOTIFICATION_TIMEBASE: RTI Timebase notification
*              - rtiNOTIFICATION_COUNTER0: RTI counter 0 overflow notification
*              - rtiNOTIFICATION_COUNTER1: RTI counter 1 overflow notification
*
*   This function will disable the selected notification of a RTI module.
*   It is possible to disable multiple notifications masked.
*/

/* SourceId : RTI_SourceId_020 */
/* DesignId : RTI_DesignId_009 */
/* Requirements : HL_SR84 */
void rtiDisableNotification(uint32 notification)
{
    rtiREG1->CLEARINTENA = notification;

    /**   @note The function rtiInit has to be called before this function can be used.\n
    *           This function has to be executed in privileged mode.
    */

}

/** @fn void rtiGetConfigValue(rti_config_reg_t *config_reg, config_value_type_t type)
*   @brief Get the initial or current values of the configuration registers
*
*	@param[in] *config_reg: pointer to the struct to which the initial or current value of the configuration registers need to be stored
*	@param[in] type: 	whether initial or current value of the configuration registers need to be stored
*						- InitialValue: initial value of the configuration registers will be stored in the struct pointed by config_reg
*						- CurrentValue: initial value of the configuration registers will be stored in the struct pointed by config_reg
*
*   This function will copy the initial or current value (depending on the parameter 'type') of the configuration 
*   registers to the struct pointed by config_reg
*
*/
/* SourceId : RTI_SourceId_021 */
/* DesignId : RTI_DesignId_021 */
/* Requirements : HL_SR97 */
void rtiGetConfigValue(rti_config_reg_t *config_reg, config_value_type_t type)
{
	if (type == InitialValue)
	{
		config_reg->CONFIG_GCTRL = RTI_GCTRL_CONFIGVALUE;
		config_reg->CONFIG_TBCTRL = RTI_TBCTRL_CONFIGVALUE;
		config_reg->CONFIG_CAPCTRL = RTI_CAPCTRL_CONFIGVALUE;
		config_reg->CONFIG_COMPCTRL = RTI_COMPCTRL_CONFIGVALUE;
		config_reg->CONFIG_UDCP0 = RTI_UDCP0_CONFIGVALUE;
		config_reg->CONFIG_UDCP1 = RTI_UDCP1_CONFIGVALUE;
		config_reg->CONFIG_UDCP2 = RTI_UDCP2_CONFIGVALUE;
		config_reg->CONFIG_UDCP3 = RTI_UDCP3_CONFIGVALUE;
	}
	else
	{
	/*SAFETYMCUSW 134 S MR:12.2 <APPROVED> "LDRA Tool issue" */
		config_reg->CONFIG_GCTRL = rtiREG1->GCTRL;
		config_reg->CONFIG_TBCTRL = rtiREG1->TBCTRL;
		config_reg->CONFIG_CAPCTRL = rtiREG1->CAPCTRL;
		config_reg->CONFIG_COMPCTRL = rtiREG1->COMPCTRL;
		config_reg->CONFIG_UDCP0 = rtiREG1->CMP[0U].UDCPx;
		config_reg->CONFIG_UDCP1 = rtiREG1->CMP[1U].UDCPx;
		config_reg->CONFIG_UDCP2 = rtiREG1->CMP[2U].UDCPx;
		config_reg->CONFIG_UDCP3 = rtiREG1->CMP[3U].UDCPx;
	}
}
/** @fn void rtiCompare0Interrupt(void)
*   @brief RTI1 Compare 0 Interrupt Handler
*
*   RTI1 Compare 0 interrupt handler 
*
*/

/* SourceId : RTI_SourceId_022 */
/* DesignId : RTI_DesignId_022 */
/* Requirements : HL_SR95 */
#if 0
void rtiCompare0Interrupt(void)
{

  InterruptRoutine();

  rtiREG1->INTFLAG = 1U;
  rtiNotification(rtiNOTIFICATION_COMPARE0);

}
#endif






