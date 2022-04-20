/**************************************************************************
 * FILE NAME: MPC5744P.h                     COPYRIGHT (c) Freescale 2012 * 
 * REVISION:  0.7.12                                   All Rights Reserved *
 *                                                                        *
 * DESCRIPTION:                                                           *
 * This file contains all of the register and bit field definitions for   *
 * the MPC5744P.                                                          *
 *========================================================================*
 * UPDATE HISTORY                                                         *
 * REV      AUTHOR      DATE       	DESCRIPTION OF CHANGE                 *
 * ---   -----------  ---------    	---------------------                 *
 * 0.2      P.A.      16-APR-12     -XBIC and PRAMC modules were added.   *
 *                                  -PWM module name was modified as      * 
 *                                  FlexPWM (Just in the header file).    *
 *                                  -In FlexPWM, DCHMID, DCHPRI and TCDs  *
 *                                  were arranged in an array.            *
 *                                  -In the MEMU, SYS_RAM_CERR_STS and    *
 *                                  SYS_RAM_CERR_ADDR were organized as   *
 *                                  an array of 10 channels.              *
 *                                  FLASH_CERR_STS and FLASH_CERR _ADDR   *
 *                                  were organized as an array of 20      *
 *                                  channels. PERIPH_RAM_CERR_STS and     *
 *                                  PERIPH_RAM_CERR _ADDR were organized  *
 *                                  as an array of 2 channels.            *
 *                                  -In the PIT, LDVAL, CVAL, TCTRL,      *
 *                                  TFLG were organized as an array of    *
 *                                  4 timers.                             *   
 *                                  -In the SMPU, EAR and EDR were        *
 *                                  organized as an array of 16 channels. *
 *                                  -In the STM, CCR, CIR and CMP were    *
 *                                  organized as an array of 4 channels.  *
 *                                  -In the XBAR, PRS and CRS were        *
 *                                  organized as an array of 8 channels.  *
 *                                  -In the DMAMUX, CHCFG was organized   *
 *                                  as an array of 16 channels.           *
 *                                  -In the DSPI, RXFR was organized as   *
 *                                  an array of 5 registers and TXFR was  *
 *                                  organized as an array of 5 registers. * 
 *                                  -In the FR, SSR was organized as an   *
 *                                  array of 8 registers. SSCR was        *
 *                                  organized as an array of 4 registers. *
 *                                  NMVR was organized as an array of 6   *
 *                                  registers. MBCCSR, MBCCFR, MBFIDR,    *
 *                                  MBIDXR were organized as an array of  *
 *                                  64. MBDOR was organized as an array   *
 *                                  of 68 registers. LEETR was organized  *
 *                                  as an array of 6 registers.           *
 *                                  -In the INTC, CPR was organized as    *
 *                                  an array of 4 registers. IACKR was    *
 *                                  organized as an array of 4 registers. *
 *                                  EOIR was organized as an array of     *
 *                                  4 registers.                          *
 *                                  -In the ME, RUN_MC was organized as   *
 *                                  an array of 4 registers. RUN_PC was   *
 *                                  organized as an array of 8 registers. *
 *                                  LP_PC was organized as an array of    *
 *                                  8 registers.                          *
 *                                                                        *
 * 0.3      P.A.      07-MAY-12     -Adding PFLASH module.                *
 *                                                                        *
 * 0.4      P.A.      12-JUN-12     -Adding AIPS, C55FMC, LINFlexD, and   *
 *                                  SIUL2 modules.                        *
 *                                  -All the other modules are from the   *
 *                                  previous release.                     *
 *                                                                        *                                                                          *
 * 0.5      P.A.      13-JUN-12     -Generated using the last update of   *
 *                                  of AIPS, C55FMC, LINFlexD, and        *
 *                                  SIUL2 modules.                        *
 *                                                                        *
 * 0.6      P.A.      14-JUN-12     -Fix filter issues in AIPS module.    *
 *                                                                        *
 * 0.6.1    P.A.      14-JUN-12     -The IMCR register of SIUL2 module was*
 *                                  modified in the size of the array     *
 *                                  adding 32 more and decreasing the     *
 *                                  previous memory spot in 128.          *
 *                                  -Next drop of XML files is going to   *
 *                                  include this change.                  *                                    
 *                                                                        *
 * 0.7      P.A.      27-JUN-12     -Adding latest files sended by Nick   *
 *                                  Evans.                                *
 *                                                                        *
 * 0.7.1    P.A.      28-JUN-12     -Some registers were arranged in      *
 *                                  arrays.                               *
 *                                                                        *
 * 0.7.2    P.A.      29-JUN-12     -Registers NCFS_CFG, NCFS_CFG, NCF_S, *
 *                                  NCF_E, NCF_TOE, IRQ_ALARM_EN, NMI_EN, *
 *                                  and EOUT_SIG_EN were expanded from    *
 *                                  arrays and they were indexed with     *
 *                                  their corresponding number.           *                                                 
 *                                                                        *
 * 0.7.3    P.A.      29-JUN-12     -Registers NCFS_CFG, NCFS_CFG, NCF_S, *
 *                                  NCF_E, NCF_TOE, IRQ_ALARM_EN, NMI_EN, *
 *                                  and EOUT_SIG_EN were changed to get   *
 *                                  something similar to McKinley.        *
 *                                                                        *
 * 0.7.4    P.A.      12-JUL-12     -GPDO and GPDI registers were added   *
 *                                  into an array.                        *
 *                                  -FCCU XML files has an incorrect      *
 *                                  address value for the tag             *
 *                                  componentUnitAddrAsHex. Nick Evans    *
 *                                  has the fixed one and he is going     *
 *                                  to send it untill the next release.   *
 *                                  I'm changing manually the value from  *
 *                                  0xFEED0000UL to 0xFBF58000UL.         *
 *                                                                        *
 * 0.7.5    P.A.      24-JUL-12     -CDRx_MCR_WLSIDE_n registers were     *
 *                                  removed. Also, CDRx_MCR_WLSIDE_0      *
 *                                  registers were put into an array and  *
 *                                  its name were modified to CDR_MCR.    *
 *                                  -Bit CIF of STM_CCR register was      *
 *                                  corrected to CEN.                     *
 *                                  -Registers T0CR-T7CR were put into    *
 *                                  an array.                             *
 *                                  -CLR_x_n were put into a struct named *
 *                                  CHANNEL.                              *
 *                                                                        *
 * 0.7.6    P.A.      26-JUL-12     -THRHLR registers were included into  *
 *                                  two arrays. First one includes from   *
 *                                  THRHLR0 to THRHLR3 and it was named   *
 *                                  as THRHLR. Second one includes from   *
 *                                  THRHLR4 to THRHLR15 and it was named  *
 *                                  as THRHLRx.                           *
 *                                                                        *
 *                                                                        *
 * 0.7.7    P.A.      27-JUL-12     -eTIMER channel registers were added  *
 *                                  into a structure call CHANNEL.        *
 *                                                                        *
 * 0.7.8    P.A.      31-JUL-12     -PS5 was removed from MC_ME module.   *
 *                                                                        *
 * 0.7.9    P.A.      06-AUG-12     -GPDO and GPDI registers were         *
 *                                   modified from vuint32_t to           *
 *                                   vuint8_t.                            *
 *                                                                        *
 * 0.7.10   P.A.      06-AUG-12     -PS5 was added again because Nick     *
 *                                  Evans notified about an errata in the *
 *                                  RM where PS5 was not included.        *
 *                                  -TCD array was modified from 64 to 32 *
 *                                  channels.                             *
 *                                                                        *
 * 0.7.11   P.A.      14-AUG-12     -CTR0_SLAVE module was removed.       *
 *                                  -Registers CPR, IACKR, and EOIR were  *
 *                                  removed for processor 1 and up. A     *
 *                                  reserved space was added for each one.*
 *                                                                        *
 * 0.7.12   P.A.      21-AUG-12     -PS5 was removed.                     *
 *                                                                        *
 *========================================================================*
 * COPYRIGHT:                                                             *
 *	Freescale Semiconductor, INC. All Rights Reserved. You are hereby     *
 *  granted a copyright license to use, modify, and distribute the        *
 *  SOFTWARE so long as this entire notice is retained without alteration *
 *  in any modified and/or redistributed versions, and that such modified *
 *  versions are clearly identified as such. No licenses are granted by   *
 *  implication, estoppel or otherwise under any patentsor trademarks     *
 *  of Freescale Semiconductor, Inc. This software is provided on an      *
 *  "AS IS" basis and without warranty.                                   *
 *                                                                        *
 *  To the maximum extent permitted by applicable law, Freescale          *
 *  Semiconductor DISCLAIMS ALL WARRANTIES WHETHER EXPRESS OR IMPLIED,    *
 *  INCLUDING IMPLIED WARRANTIES OF MERCHANTABILITY OR FITNESS FOR A      *
 *  PARTICULAR PURPOSE AND ANY WARRANTY AGAINST INFRINGEMENT WITH REGARD  *
 *  TO THE SOFTWARE (INCLUDING ANY MODIFIED VERSIONS THEREOF) AND ANY     *
 *  ACCOMPANYING WRITTEN MATERIALS.                                       *
 *                                                                        *
 *  To the maximum extent permitted by applicable law, IN NO EVENT        *
 *  SHALL Freescale Semiconductor BE LIABLE FOR ANY DAMAGES WHATSOEVER    *
 *  (INCLUDING WITHOUT LIMITATION, DAMAGES FOR LOSS OF BUSINESS PROFITS,  *
 *  BUSINESS INTERRUPTION, LOSS OF BUSINESS INFORMATION, OR OTHER         *
 *  PECUNIARY LOSS) ARISING OF THE USE OR INABILITY TO USE THE SOFTWARE.  *
 *                                                                        *
 *  Freescale Semiconductor assumes no responsibility for the             *
 *  maintenance and support of this software                              *
 *                                                                        *
 **************************************************************************/ 
    
/*>>>>>>> NOTE! this file is auto-generated please do not edit it! <<<<<<<*/ 
    
/**************************************************************************
 * Example register & bit field write:                                    *
 *                                                                        *
 *  <MODULE>.<REGISTER>.B.<BIT> = 1;                                      *
 *  <MODULE>.<REGISTER>.R       = 0x10000000;                             *
 *                                                                        *
 **************************************************************************/

#ifndef _MPC5744P_H_
#define _MPC5744P_H_
#include "typedefs.h"
#ifdef  __cplusplus
extern "C" {
#endif
#ifdef __MWERKS__
#pragma push
#pragma ANSI_strict off
#endif


/* ============================================================================
   =============================== Module: ADC ================================
   ============================================================================ */

struct ADC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t OWREN:1;					 /* Overwrite enable. */
        vuint32_t WLSIDE:1;					 /* WriteLeft /Right alligned. */
        vuint32_t MODE:1;					 /* One_Shot/Scan. */
        vuint32_t EDGLEV:1;					 /* Edge or level selection for external start trigger. */
        vuint32_t TRGEN:1;					 /* External trigger enable. */
        vuint32_t EDGE:1;					 /* Start trigger edge/ level detection. */
        vuint32_t XSTRTEN:1;					 /* External Start enable. */
        vuint32_t NSTART:1;					 /* Start conversion. */
        vuint32_t  :1;					 /*  */
        vuint32_t JTRGEN:1;					 /* Injection external trigger enable. */
        vuint32_t JEDGE:1;					 /* Injection trigger edge selection. */
        vuint32_t JSTART:1;					 /* Injection start. */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t CTUEN:1;					 /* Crosstrigger Unit Enable. */
        vuint32_t  :1;					 /*  */
        vuint32_t STCL:1;					 /* Self Testing Configuration Lock. */
        vuint32_t  :6;					 /*  */
        vuint32_t ADCLKSEL:1;					 /* Analog Clock frequency Selector. */
        vuint32_t ABORT_CHAIN:1;					 /* Abort Chain. */
        vuint32_t ABORT:1;					 /* Abort Conversion. */
        vuint32_t ACKO:1;					 /* Auto clock off enable. */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t REFSEL:2;					 /* Reference voltage selection for ADC analog part. */
        vuint32_t PWDN:1;					 /* Power down enable. */
    } B;
  } MCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t CALIBRTD:1;					 /* This bit indicates the ADC calibration status. */
        vuint32_t  :6;					 /*  */
        vuint32_t NSTART:1;					 /* This status bit is used to signal that a Normal conversion is ongoing. */
        vuint32_t JABORT:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t JSTART:1;					 /* This status bit is used to signal that an Injected conversion is ongoing. */
        vuint32_t  :1;					 /*  */
        vuint32_t SELF_TEST_S:1;					 /* This status bit signals that self test conversion is ongoing. */
        vuint32_t  :1;					 /*  */
        vuint32_t CTUSTART:1;					 /* This status bit is used to signal that a CTU conversion is ongoing. */
        vuint32_t CHADDR:7;					 /* Channel under measure address. */
        vuint32_t  :3;					 /*  */
        vuint32_t ACKO:1;					 /* Auto clock off enable. */
        vuint32_t  :2;					 /*  */
        vuint32_t ADCSTATUS:3;					 /* The value of this parameter depends on ADC status as described in the table above. */
    } B;
  } MSR;

  uint8_t ADC_reserved0[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :27;					 /*  */
        vuint32_t EOCTU:1;					 /* End of CTU conversion. */
        vuint32_t JEOC:1;					 /* End of injected channel conversion. */
        vuint32_t JECH:1;					 /* End of injected chain conversion. */
        vuint32_t EOC:1;					 /* End of channel conversion. */
        vuint32_t ECH:1;					 /* End of chain conversion. */
    } B;
  } ISR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t EOCCH15:1;					 /* EOC Channel n. */
        vuint32_t EOCCH14:1;					 /* EOC Channel n. */
        vuint32_t EOCCH13:1;					 /* EOC Channel n. */
        vuint32_t EOCCH12:1;					 /* EOC Channel n. */
        vuint32_t EOCCH11:1;					 /* EOC Channel n. */
        vuint32_t EOCCH10:1;					 /* EOC Channel n. */
        vuint32_t EOCCH9:1;					 /* EOC Channel n. */
        vuint32_t EOCCH8:1;					 /* EOC Channel n. */
        vuint32_t EOCCH7:1;					 /* EOC Channel n. */
        vuint32_t EOCCH6:1;					 /* EOC Channel n. */
        vuint32_t EOCCH5:1;					 /* EOC Channel n. */
        vuint32_t EOCCH4:1;					 /* EOC Channel n. */
        vuint32_t EOCCH3:1;					 /* EOC Channel n. */
        vuint32_t EOCCH2:1;					 /* EOC Channel n. */
        vuint32_t EOCCH1:1;					 /* EOC Channel n. */
        vuint32_t EOCCH0:1;					 /* EOC Channel n. */
    } B;
  } CEOCFR0;

  uint8_t ADC_reserved1[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :27;					 /*  */
        vuint32_t MSKEOCTU:1;					 /* Mask bit for EOCTU. */
        vuint32_t MSKJEOC:1;					 /* Mask bit for JEOC. */
        vuint32_t MSKJECH:1;					 /* Mask bit for JECH. */
        vuint32_t MSKEOC:1;					 /* Mask bit for EOC. */
        vuint32_t MSKECH:1;					 /* Mask bit for ECH. */
    } B;
  } IMR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t CIM15:1;					 /* Interrupt enable n. */
        vuint32_t CIM14:1;					 /* Interrupt enable n. */
        vuint32_t CIM13:1;					 /* Interrupt enable n. */
        vuint32_t CIM12:1;					 /* Interrupt enable n. */
        vuint32_t CIM11:1;					 /* Interrupt enable n. */
        vuint32_t CIM10:1;					 /* Interrupt enable n. */
        vuint32_t CIM9:1;					 /* Interrupt enable n. */
        vuint32_t CIM8:1;					 /* Interrupt enable n. */
        vuint32_t CIM7:1;					 /* Interrupt enable n. */
        vuint32_t CIM6:1;					 /* Interrupt enable n. */
        vuint32_t CIM5:1;					 /* Interrupt enable n. */
        vuint32_t CIM4:1;					 /* Interrupt enable n. */
        vuint32_t CIM3:1;					 /* Interrupt enable n. */
        vuint32_t CIM2:1;					 /* Interrupt enable n. */
        vuint32_t CIM1:1;					 /* Interrupt enable n. */
        vuint32_t CIM0:1;					 /* Interrupt enable n. */
    } B;
  } CIMR0;

  uint8_t ADC_reserved2[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t WDG15H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG15L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG14H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG14L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG13H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG13L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG12H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG12L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG11H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG11L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG10H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG10L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG9H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG9L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG8H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG8L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG7H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG7L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG6H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG6L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG5H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG5L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG4H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG4L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG3H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG3L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG2H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG2L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG1H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG1L:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG0H:1;					 /* WDGnH, n = 0.....15. */
        vuint32_t WDG0L:1;					 /* WDGnH, n = 0.....15. */
    } B;
  } WTISR;

  union {
    vuint32_t R;
      struct {
        vuint32_t MSKWDG15H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG15L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG14H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG14L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG13H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG13L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG12H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG12L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG11H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG11L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG10H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG10L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG9H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG9L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG8H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG8L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG7H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG7L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG6H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG6L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG5H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG5L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG4H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG4L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG3H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG3L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG2H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG2L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG1H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG1L:1;					 /* MSKWDGnL, n = 0.....15. */
        vuint32_t MSKWDG0H:1;					 /* MSKWDGnH, n = 0.....15. */
        vuint32_t MSKWDG0L:1;					 /* MSKWDGnL, n = 0.....15. */
    } B;
  } WTIMR;

  uint8_t ADC_reserved3[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t DCLR:1;					 /* DMA Clear sequence enable. */
        vuint32_t DMAEN:1;					 /* DMA global enable. */
    } B;
  } DMAE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t DMA15:1;					 /* DMA n Enable. */
        vuint32_t DMA14:1;					 /* DMA n Enable. */
        vuint32_t DMA13:1;					 /* DMA n Enable. */
        vuint32_t DMA12:1;					 /* DMA n Enable. */
        vuint32_t DMA11:1;					 /* DMA n Enable. */
        vuint32_t DMA10:1;					 /* DMA n Enable. */
        vuint32_t DMA9:1;					 /* DMA n Enable. */
        vuint32_t DMA8:1;					 /* DMA n Enable. */
        vuint32_t DMA7:1;					 /* DMA n Enable. */
        vuint32_t DMA6:1;					 /* DMA n Enable. */
        vuint32_t DMA5:1;					 /* DMA n Enable. */
        vuint32_t DMA4:1;					 /* DMA n Enable. */
        vuint32_t DMA3:1;					 /* DMA n Enable. */
        vuint32_t DMA2:1;					 /* DMA n Enable. */
        vuint32_t DMA1:1;					 /* DMA n Enable. */
        vuint32_t DMA0:1;					 /* DMA n Enable. */
    } B;
  } DMAR0;

  uint8_t ADC_reserved4[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value for channel n. */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value for channel n. */
    } B;
  } THRHLR[4];

  uint8_t ADC_reserved5[16];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :25;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PREVAL1:2;					 /* Internal voltage selection for Presampling. */
        vuint32_t PREVAL0:2;					 /* Internal voltage selection for Presampling. */
        vuint32_t PRECONV:1;					 /* Convert Presampled value */
    } B;
  } PSCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t PRES15:1;					 /* Presampling n enable. */
        vuint32_t PRES14:1;					 /* Presampling n enable. */
        vuint32_t PRES13:1;					 /* Presampling n enable. */
        vuint32_t PRES12:1;					 /* Presampling n enable. */
        vuint32_t PRES11:1;					 /* Presampling n enable. */
        vuint32_t PRES10:1;					 /* Presampling n enable. */
        vuint32_t PRES9:1;					 /* Presampling n enable. */
        vuint32_t PRES8:1;					 /* Presampling n enable. */
        vuint32_t PRES7:1;					 /* Presampling n enable. */
        vuint32_t PRES6:1;					 /* Presampling n enable. */
        vuint32_t PRES5:1;					 /* Presampling n enable. */
        vuint32_t PRES4:1;					 /* Presampling n enable. */
        vuint32_t PRES3:1;					 /* Presampling n enable. */
        vuint32_t PRES2:1;					 /* Presampling n enable. */
        vuint32_t PRES1:1;					 /* Presampling n enable. */
        vuint32_t PRES0:1;					 /* Presampling n enable. */
    } B;
  } PSR0;

  uint8_t ADC_reserved6[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t INPSAMP:8;					 /* Configuration of sampling phase duration. */
    } B;
  } CTR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t INPSAMP:7;					 /* Configuration of sampling phase duration. */
        vuint32_t TSENSOR_SEL:1;					 /* Voltage Select for temperature sensor. */
    } B;
  } CTR1;

  uint8_t ADC_reserved7[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t CH15:1;					 /* Channel n sampling enable. */
        vuint32_t CH14:1;					 /* Channel n sampling enable. */
        vuint32_t CH13:1;					 /* Channel n sampling enable. */
        vuint32_t CH12:1;					 /* Channel n sampling enable. */
        vuint32_t CH11:1;					 /* Channel n sampling enable. */
        vuint32_t CH10:1;					 /* Channel n sampling enable. */
        vuint32_t CH9:1;					 /* Channel n sampling enable. */
        vuint32_t CH8:1;					 /* Channel n sampling enable. */
        vuint32_t CH7:1;					 /* Channel n sampling enable. */
        vuint32_t CH6:1;					 /* Channel n sampling enable. */
        vuint32_t CH5:1;					 /* Channel n sampling enable. */
        vuint32_t CH4:1;					 /* Channel n sampling enable. */
        vuint32_t CH3:1;					 /* Channel n sampling enable. */
        vuint32_t CH2:1;					 /* Channel n sampling enable. */
        vuint32_t CH1:1;					 /* Channel n sampling enable. */
        vuint32_t CH0:1;					 /* Channel n sampling enable. */
    } B;
  } NCMR0;

  uint8_t ADC_reserved8[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t CH15:1;					 /* Channel n sampling enable. */
        vuint32_t CH14:1;					 /* Channel n sampling enable. */
        vuint32_t CH13:1;					 /* Channel n sampling enable. */
        vuint32_t CH12:1;					 /* Channel n sampling enable. */
        vuint32_t CH11:1;					 /* Channel n sampling enable. */
        vuint32_t CH10:1;					 /* Channel n sampling enable. */
        vuint32_t CH9:1;					 /* Channel n sampling enable. */
        vuint32_t CH8:1;					 /* Channel n sampling enable. */
        vuint32_t CH7:1;					 /* Channel n sampling enable. */
        vuint32_t CH6:1;					 /* Channel n sampling enable. */
        vuint32_t CH5:1;					 /* Channel n sampling enable. */
        vuint32_t CH4:1;					 /* Channel n sampling enable. */
        vuint32_t CH3:1;					 /* Channel n sampling enable. */
        vuint32_t CH2:1;					 /* Channel n sampling enable. */
        vuint32_t CH1:1;					 /* Channel n sampling enable. */
        vuint32_t CH0:1;					 /* Channel n sampling enable. */
    } B;
  } JCMR0;

  uint8_t ADC_reserved9[16];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t PDED:8;					 /*  */
    } B;
  } PDEDR;

  uint8_t ADC_reserved10[52];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t VALID:1;					 /* Used to notify when the data is valid (a new value has been written). It is automatically cleared when data is read. */
        vuint32_t OVERW:1;					 /* Overwrite data */
        vuint32_t RESULT:2;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t CDATA:12;					 /* Converted Data 11:0. */
    } B;
  } CDR_MCR[16];

  uint8_t ADC_reserved11[320];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value for channel n. */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value for channel n. */
    } B;
  } THRHLRx[12];

  union {
    vuint32_t R;
      struct {
        vuint32_t WSEL_CH7:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH6:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH5:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH4:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH3:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH2:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH1:4;					 /* Channel Watchdog select for channel n. */
        vuint32_t WSEL_CH0:4;					 /* Channel Watchdog select for channel n. */
    } B;
  } CWSELR[2];

  uint8_t ADC_reserved12[40];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t CWEN15:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN14:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN13:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN12:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN11:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN10:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN9:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN8:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN7:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN6:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN5:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN4:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN3:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN2:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN1:1;					 /* Channel Watchdog Enable n. */
        vuint32_t CWEN0:1;					 /* Channel Watchdog Enable n. */
    } B;
  } CWENR0;

  uint8_t ADC_reserved13[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t AWOR_CH15:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH14:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH13:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH12:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH11:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH10:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH9:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH8:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH7:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH6:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH5:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH4:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH3:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH2:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH1:1;					 /* Analog Watchdog Out of Range Channel n. */
        vuint32_t AWOR_CH0:1;					 /* Analog Watchdog Out of Range Channel n. */
    } B;
  } AWORR0;

  uint8_t ADC_reserved14[76];
  union {
    vuint32_t R;
      struct {
        vuint32_t INPSAMP_C:8;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t INPSAMP_S:8;					 /*  */
        vuint32_t  :8;					 /*  */
    } B;
  } STCR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t MSKWDSERR:1;					 /*  */
        vuint32_t SERR:1;					 /* Error fault injection bit (write-only). */
        vuint32_t MSKWDTERR:1;					 /* Interrupt enable (STSR.WDTERR status bit) */
        vuint32_t  :1;					 /*  */
        vuint32_t MSKST_EOC:1;					 /* Interrupt Enable bit for STSR2.ST_EOC */
        vuint32_t  :4;					 /*  */
        vuint32_t MSKWDG_EOA_C:1;					 /* Interrupt enable (WDG_EOA_C status bit) */
        vuint32_t  :1;					 /*  */
        vuint32_t MSKWDG_EOA_S:1;					 /* Interrupt enable (WDG_EOA_S status bit) */
        vuint32_t MSKERR_C:1;					 /* Interrupt enable (ERR_C status bit) */
        vuint32_t  :1;					 /*  */
        vuint32_t MSKERR_S2:1;					 /* Interrupt enable (ERR_S2 status bit) */
        vuint32_t MSKERR_S1:1;					 /* Interrupt enable (ERR_S1 status bit) */
        vuint32_t MSKERR_S0:1;					 /* Interrupt enable (ERR_S1 status bit) */
        vuint32_t  :3;					 /*  */
        vuint32_t EN:1;					 /* Self testing channel enable. The TEST conversions are enabled. */
        vuint32_t  :2;					 /*  */
        vuint32_t FMA_WDSERR:1;					 /* Fault mapping for the Watchdog Sequence error. */
        vuint32_t FMA_WDTERR:1;					 /* Fault mapping for the Watchdog Timer error. */
        vuint32_t FMA_C:1;					 /* Fault mapping for the algorithm C. */
        vuint32_t  :1;					 /*  */
        vuint32_t FMA_S:1;					 /* Fault mapping for the algorithm BGAP. */
    } B;
  } STCR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t ALG:2;					 /* Algorithm scheduling. */
        vuint32_t  :3;					 /*  */
        vuint32_t MSTEP:5;					 /*  */
    } B;
  } STCR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :13;					 /*  */
        vuint32_t WDT:3;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t BR:8;					 /* Baud rate for the selected algorithm in SCAN mode (MCR.MODE = 1). */
    } B;
  } STBRR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t WDSERR:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t WDTERR:1;					 /*  */
        vuint32_t OVERWR:1;					 /* Overwrite error. */
        vuint32_t ST_EOC:1;					 /* Self Test EOC Bit. */
        vuint32_t  :4;					 /*  */
        vuint32_t WDG_EOA_C:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t WDG_EOA_S:1;					 /*  */
        vuint32_t ERR_C:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ERR_S2:1;					 /*  */
        vuint32_t ERR_S1:1;					 /*  */
        vuint32_t ERR_S0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t STEP_C:5;					 /* Step of the algorithm C when an ERR_C has occurred. */
        vuint32_t  :5;					 /*  */
    } B;
  } STSR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t OVFL:1;					 /* Overflow Bit */
        vuint32_t  :3;					 /*  */
        vuint32_t DATA1:12;					 /* Test channel converted data when the ERR_S1 has occurred. */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA0:12;					 /* Test channel converted data when the ERR_S1 has occurred. */
    } B;
  } STSR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t DATA1:12;					 /* Test channel converted data when the ERR_S2 has occurred. */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA0:12;					 /* Test channel converted data when the ERR_S0 has occurred. */
    } B;
  } STSR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t DATA1:12;					 /* Test channel converted data when the ERR_C has occurred. */
        vuint32_t  :4;					 /*  */
        vuint32_t  :12;					 /*  */
    } B;
  } STSR4;

  uint8_t ADC_reserved15[16];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t VALID:1;					 /* Valid data. */
        vuint32_t OWERWR:1;					 /* Overwrite data. */
        vuint32_t  :6;					 /*  */
        vuint32_t TCDATA:12;					 /* Test channel converted data. (In 2's complement format) */
    } B;
  } STDR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t FDATA:12;					 /*  */
        vuint32_t VALID:1;					 /* Valid data. */
        vuint32_t OWERWR:1;					 /* Overwrite data. */
        vuint32_t  :6;					 /*  */
        vuint32_t IDATA:12;					 /*  */
    } B;
  } STDR2;

  uint8_t ADC_reserved16[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t AWDE:1;					 /* Analog watchdog enable (related to the algorithm S (step 0)) */
        vuint32_t WDTE:1;					 /* Watchdog timer enable (related to the algorithm S) */
        vuint32_t  :2;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value for channel 0. */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value for channel 0. */
    } B;
  } STAW0R;

  union {
    vuint32_t R;
      struct {
        vuint32_t AWDE:1;					 /* Analog watchdog enable related to the algorithm S (step1). */
        vuint32_t  :3;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value (integer part) for test channel for algorithm S (step 1) (unsigned coding). */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value (integer part) for test channel for algorithm S (step 1) (unsigned coding). */
    } B;
  } STAW1AR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value (fractional part) for test channel for algorithm S (step 1)(unsigned coding). */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value (fractional part) for test channel for algorithm S (step 1) (unsigned coding). */
    } B;
  } STAW1BR;

  union {
    vuint32_t R;
      struct {
        vuint32_t AWDE:1;					 /* Analog watchdog enable related to the algorithm S (step2). */
        vuint32_t  :19;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value for channel x (unsigned coding). If the analog watchdog is enabled, the STSR1.ERR_S2 status bit is set if STDR1.TCDATA < THRL. */
    } B;
  } STAW2R;

  uint8_t ADC_reserved17[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t AWDE:1;					 /* Analog watchdog enable (related to the algorithm C) */
        vuint32_t WDTE:1;					 /* Watchdog timer enable (related to the algorithm C). */
        vuint32_t  :2;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value for channel 4. */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value for channel 4. */
    } B;
  } STAW4R;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t THRH:12;					 /* High threshold value for the algorithm C (step1 to step CS-1). */
        vuint32_t  :4;					 /*  */
        vuint32_t THRL:12;					 /* Low threshold value for the algorithm C (step1 to step CS-1). */
    } B;
  } STAW5R;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t INPCMP:2;					 /*  */
        vuint32_t LAT_EN_CTRL:8;					 /*  */
        vuint32_t RST_2_CTRL:8;					 /*  */
        vuint32_t RST_1_CTRL:8;					 /*  */
    } B;
  } CMPCTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t ADTSTMODE:1;					 /*  */
        vuint32_t ADMODE:2;					 /*  */
        vuint32_t TSAMP:2;					 /* Test Sample period in Calibration , BIST and Offset calculation process. */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_Y_VALUE:8;					 /*  */
        vuint32_t C_T_BUSY:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t CAL_X_VALUE:6;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NR_SMPL:2;					 /* Number of Samples for averaging. */
        vuint32_t AVG_EN:1;					 /* Average Enable. */
        vuint32_t TEST_FAIL:1;					 /* Test Fail. */
        vuint32_t  :2;					 /*  */
        vuint32_t TEST_EN:1;					 /* Enable the test. */
    } B;
  } CALBISTREG;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t GAIN_CALIBRATION_VALUE:12;					 /*  */
        vuint32_t OFFSET_CALIBRATION_VALUE:16;					 /*  */
    } B;
  } OFSGNCAL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t GAIN_USER:10;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t OFFSET_USER:8;					 /*  */
    } B;
  } OFSGNUSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENx:1;					 /* Enable the CLPx operation. */
        vuint32_t CLPx:7;					 /* Calibration function generated value. */
        vuint32_t CLP1:8;					 /* Calibration function generated value. */
        vuint32_t  :1;					 /*  */
        vuint32_t CLP0:7;					 /* Calibration function generated value. */
        vuint32_t  :1;					 /*  */
        vuint32_t CLPS:7;					 /* Calibration function generated value. */
    } B;
  } CAL0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t CLP3:10;					 /* Calibration function generated value. */
        vuint32_t  :7;					 /*  */
        vuint32_t CLP2:9;					 /* Calibration function generated value. */
    } B;
  } CAL1;

  union {
    vuint32_t R;
      struct {
        vuint32_t TEST_RESULT:16;					 /* Test Result for last failing test ($FIXED_VALUE - $RAW_SAR_DATA). */
        vuint32_t  :4;					 /*  */
        vuint32_t STAT_12:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_11:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_10:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_9:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_8:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_7:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_6:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_5:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_4:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_3:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_2:1;					 /* Status of test n, n = 1 - 12. */
        vuint32_t STAT_1:1;					 /* Status of test n, n = 1 - 12. */
    } B;
  } BIST1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :17;					 /*  */
        vuint32_t ADC_RESULT:15;					 /*  */
    } B;
  } ALTR;

};


/* ============================================================================
   =============================== Module: AIPS ===============================
   ============================================================================ */

struct AIPS_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t MTR0:1;					 /* Master Trusted For Read */
        vuint32_t MTW0:1;					 /* Master Trusted For Writes */
        vuint32_t MPL0:1;					 /* Master Privilege Level */
        vuint32_t  :1;					 /*  */
        vuint32_t MTR1:1;					 /* Master trusted for read */
        vuint32_t MTW1:1;					 /* Master trusted for writes */
        vuint32_t MPL1:1;					 /* Master privilege level */
        vuint32_t  :4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t MTR5:1;					 /* Master Trusted For Read */
        vuint32_t MTW5:1;					 /* Master Trusted For Writes */
        vuint32_t MPL5:1;					 /* Master Privilege Level */
        vuint32_t  :1;					 /*  */
        vuint32_t MTR6:1;					 /* Master trusted for read */
        vuint32_t MTW6:1;					 /* Master trusted for writes */
        vuint32_t MPL6:1;					 /* Master privilege level */
        vuint32_t  :4;					 /*  */
    } B;
  } MPRA;

  uint8_t AIPS_reserved0[252];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRB;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRD;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRF;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRG;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write protect */
        vuint32_t TP0:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor Protect */
        vuint32_t WP2:1;					 /* Write protect */
        vuint32_t TP2:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor protect */
        vuint32_t WP3:1;					 /* Write Protect */
        vuint32_t TP3:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor Protect */
        vuint32_t WP4:1;					 /* Write protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor protect */
        vuint32_t WP7:1;					 /* Write protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } PACRH;

  uint8_t AIPS_reserved1[32];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRB;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRD;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRF;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRG;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRH;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRI;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRJ;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRK;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRM;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRN;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRO;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRP;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRQ;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRT;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRU;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRV;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRW;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRX;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRY;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRZ;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRAA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRAB;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRAC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRAD;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRAE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t SP0:1;					 /* Supervisor Protect */
        vuint32_t WP0:1;					 /* Write Protect */
        vuint32_t TP0:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP1:1;					 /* Supervisor Protect */
        vuint32_t WP1:1;					 /* Write Protect */
        vuint32_t TP1:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP2:1;					 /* Supervisor protect */
        vuint32_t WP2:1;					 /* Write Protect */
        vuint32_t TP2:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP3:1;					 /* Supervisor Protect */
        vuint32_t WP3:1;					 /* Write protect */
        vuint32_t TP3:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP4:1;					 /* Supervisor protect */
        vuint32_t WP4:1;					 /* Write Protect */
        vuint32_t TP4:1;					 /* Trusted protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP5:1;					 /* Supervisor Protect */
        vuint32_t WP5:1;					 /* Write Protect */
        vuint32_t TP5:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP6:1;					 /* Supervisor Protect */
        vuint32_t WP6:1;					 /* Write Protect */
        vuint32_t TP6:1;					 /* Trusted Protect */
        vuint32_t  :1;					 /*  */
        vuint32_t SP7:1;					 /* Supervisor Protect */
        vuint32_t WP7:1;					 /* Write Protect */
        vuint32_t TP7:1;					 /* Trusted Protect */
    } B;
  } OPACRAF;

};


/* ============================================================================
   ============================== Module: C55FMC ==============================
   ============================================================================ */

struct C55FMC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t RVE:1;					 /* Read Voltage Error */
        vuint32_t RRE:1;					 /* Read Reference Error */
        vuint32_t AEE:1;					 /* Address Encode Error */
        vuint32_t EEE:1;					 /* ECC after ECC Error */
        vuint32_t  :12;					 /*  */
        vuint32_t EER:1;					 /* ECC Event Error */
        vuint32_t RWE:1;					 /* Read-While-Write Event Error */
        vuint32_t SBC:1;					 /* Single Bit Correction */
        vuint32_t  :1;					 /*  */
        vuint32_t PEAS:1;					 /* Program Access Space */
        vuint32_t DONE:1;					 /* State Machine Status */
        vuint32_t PEG:1;					 /* Program/Erase Good */
        vuint32_t PECIE:1;					 /* Program/Erase Complete Interrupt Enable */
        vuint32_t  :1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PGM:1;					 /* Program */
        vuint32_t PSUS:1;					 /* Program Suspend */
        vuint32_t ERS:1;					 /* Erase */
        vuint32_t ESUS:1;					 /* Erase Suspend */
        vuint32_t EHV:1;					 /* Enable High Voltage */
    } B;
  } MCR;

  uint8_t C55FMC_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t HT:1;					 /* High Temperature Enabled. */
        vuint32_t  :2;					 /*  */
        vuint32_t n256K:5;					 /*  */
        vuint32_t n64Kh:3;					 /*  */
        vuint32_t n32Kh:2;					 /*  */
        vuint32_t n16Kh:3;					 /*  */
        vuint32_t n64Km:3;					 /*  */
        vuint32_t n32Km:2;					 /*  */
        vuint32_t n16Km:3;					 /*  */
        vuint32_t n64Kl:3;					 /*  */
        vuint32_t n32Kl:2;					 /*  */
        vuint32_t n16Kl:3;					 /*  */
    } B;
  } MCRE;

  uint8_t C55FMC_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t TSLOCK:1;					 /* UTest NVM Lock. */
        vuint32_t  :1;					 /*  */
        vuint32_t LOWLOCK:14;					 /* Low Block Lock */
        vuint32_t MIDLOCK:16;					 /* Mid Block Lock */
    } B;
  } LOCK0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t HIGHLOCK:16;					 /* High Block Lock */
    } B;
  } LOCK1;

  union {
    vuint32_t R;
      struct {
        vuint32_t A256KLOCK:32;					 /* 256 KB Block Lock */
    } B;
  } LOCK2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t A256KLOCK:16;					 /* 256 KB Block Lock */
    } B;
  } LOCK3;

  uint8_t C55FMC_reserved2[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :2;					 /*  */
        vuint32_t LOWSEL:14;					 /* LOW Block Select. */
        vuint32_t MIDSEL:16;					 /* Mid Block Select. */
    } B;
  } SEL0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t HIGHSEL:16;					 /* High Block Select. */
    } B;
  } SEL1;

  union {
    vuint32_t R;
      struct {
        vuint32_t A256KSEL:32;					 /* 256 KB Block Select. */
    } B;
  } SEL2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t A256KSEL:16;					 /* 256 KB Block Select. */
    } B;
  } SEL3;

  uint8_t C55FMC_reserved3[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t SAD:1;					 /*  */
        vuint32_t aH:1;					 /*  */
        vuint32_t aM:1;					 /*  */
        vuint32_t aL:1;					 /*  */
        vuint32_t a256k:1;					 /*  */
        vuint32_t a64k:1;					 /*  */
        vuint32_t a32k:1;					 /*  */
        vuint32_t a16k:1;					 /*  */
        vuint32_t ADDR:21;					 /*  */
        vuint32_t  :3;					 /*  */
    } B;
  } ADR;

  union {
    vuint32_t R;
      struct {
        vuint32_t UTE:1;					 /*  */
        vuint32_t SBCE:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CPR:1;					 /*  */
        vuint32_t CPA:1;					 /*  */
        vuint32_t CPE:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t NAIBP:1;					 /*  */
        vuint32_t AIBPE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t AISUS:1;					 /*  */
        vuint32_t MRE:1;					 /*  */
        vuint32_t MRV:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t AIS:1;					 /*  */
        vuint32_t AIE:1;					 /*  */
        vuint32_t AID:1;					 /*  */
    } B;
  } UT0;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM0;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM1;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM2;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM3;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM4;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM5;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM6;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM7;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISR:32;					 /*  */
    } B;
  } UM8;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :31;					 /*  */
        vuint32_t MISR:1;					 /* MISR[288]. */
    } B;
  } UM9;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :2;					 /*  */
        vuint32_t LOWOPP:14;					 /* Low Block Over-Program Protection[13:0]. */
        vuint32_t MIDOPP:16;					 /* Mid Block Over-Program Protection[15:0]. */
    } B;
  } OPP0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t HIGHOPP:16;					 /* High Block Over-Program Protection[15:0]. */
    } B;
  } OPP1;

  union {
    vuint32_t R;
      struct {
        vuint32_t A256KOPP:32;					 /* 256K Block Over-Program Protection[31:0]. */
    } B;
  } OPP2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t A256KOPP:16;					 /* 256K Block Over-Program Protection[47:32]. */
    } B;
  } OPP3;

  union {
    vuint32_t R;
      struct {
        vuint32_t PWD:32;					 /* Password challenge */
    } B;
  } TMD;

};


/* ============================================================================
   =============================== Module: CAN ================================
   ============================================================================ */

struct CAN_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t MDIS:1;					 /* Module Disable */
        vuint32_t FRZ:1;					 /* Freeze Enable */
        vuint32_t RFEN:1;					 /* Rx FIFO Enable */
        vuint32_t HALT:1;					 /* Halt FlexCAN */
        vuint32_t NOTRDY:1;					 /* FlexCAN Not Ready */
        vuint32_t  :1;					 /*  */
        vuint32_t SOFTRST:1;					 /* Soft Reset */
        vuint32_t FRZACK:1;					 /* Freeze Mode Acknowledge */
        vuint32_t SUPV:1;					 /* Supervisor Mode */
        vuint32_t  :1;					 /*  */
        vuint32_t WRNEN:1;					 /* Warning Interrupt Enable */
        vuint32_t LPMACK:1;					 /* Low-Power Mode Acknowledge */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t SRXDIS:1;					 /* Self Reception Disable */
        vuint32_t IRMQ:1;					 /* Individual Rx Masking And Queue Enable */
        vuint32_t  :2;					 /*  */
        vuint32_t LPRIOEN:1;					 /* Local Priority Enable */
        vuint32_t AEN:1;					 /* Abort Enable */
        vuint32_t  :2;					 /*  */
        vuint32_t IDAM:2;					 /* ID Acceptance Mode */
        vuint32_t  :1;					 /*  */
        vuint32_t MAXMB:7;					 /* Number Of The Last Message Buffer */
    } B;
  } MCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRESDIV:8;					 /* Prescaler Division Factor */
        vuint32_t RJW:2;					 /* Resync Jump Width */
        vuint32_t PSEG1:3;					 /* Phase Segment 1 */
        vuint32_t PSEG2:3;					 /* Phase Segment 2 */
        vuint32_t BOFFMSK:1;					 /* Bus Off Mask */
        vuint32_t ERRMSK:1;					 /* Error Mask */
        vuint32_t CLKSRC:1;					 /* CAN Engine Clock Source */
        vuint32_t LPB:1;					 /* Loop Back Mode */
        vuint32_t TWRNMSK:1;					 /* Tx Warning Interrupt Mask */
        vuint32_t RWRNMSK:1;					 /* Rx Warning Interrupt Mask */
        vuint32_t  :2;					 /*  */
        vuint32_t SMP:1;					 /* CAN Bit Sampling */
        vuint32_t BOFFREC:1;					 /* Bus Off Recovery */
        vuint32_t TSYN:1;					 /* Timer Sync */
        vuint32_t LBUF:1;					 /* Lowest Buffer Transmitted First */
        vuint32_t LOM:1;					 /* Listen-Only Mode */
        vuint32_t PROPSEG:3;					 /* Propagation Segment */
    } B;
  } CTRL1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t TIMER:16;					 /* Timer Value */
    } B;
  } TIMER;

  uint8_t CAN_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t MG:32;					 /* Rx Mailboxes Global Mask Bits */
    } B;
  } RXMGMASK;

  union {
    vuint32_t R;
      struct {
        vuint32_t RX14M:32;					 /* Rx Buffer 14 Mask Bits */
    } B;
  } RX14MASK;

  union {
    vuint32_t R;
      struct {
        vuint32_t RX15M:32;					 /* Rx Buffer 15 Mask Bits */
    } B;
  } RX15MASK;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t RXERRCNT:8;					 /* Receive Error Counter */
        vuint32_t TXERRCNT:8;					 /* Transmit Error Counter */
    } B;
  } ECR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :13;					 /*  */
        vuint32_t SYNCH:1;					 /* CAN Synchronization Status */
        vuint32_t TWRNINT:1;					 /* Tx Warning Interrupt Flag */
        vuint32_t RWRNINT:1;					 /* Rx Warning Interrupt Flag */
        vuint32_t BIT1ERR:1;					 /* Bit1 Error */
        vuint32_t BIT0ERR:1;					 /* Bit0 Error */
        vuint32_t ACKERR:1;					 /* Acknowledge Error */
        vuint32_t CRCERR:1;					 /* Cyclic Redundancy Check Error */
        vuint32_t FRMERR:1;					 /* Form Error */
        vuint32_t STFERR:1;					 /* Stuffing Error */
        vuint32_t TXWRN:1;					 /* TX Error Warning */
        vuint32_t RXWRN:1;					 /* Rx Error Warning */
        vuint32_t IDLE:1;					 /*  */
        vuint32_t TX:1;					 /* FlexCAN In Transmission */
        vuint32_t FLTCONF:2;					 /* Fault Confinement State */
        vuint32_t RX:1;					 /* FlexCAN In Reception */
        vuint32_t BOFFINT:1;					 /* Bus Off Interrupt */
        vuint32_t ERRINT:1;					 /* Error Interrupt */
        vuint32_t  :1;					 /*  */
    } B;
  } ESR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUFHM:32;					 /* Buffer MB i Mask */
    } B;
  } IMASK2;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUFLM:32;					 /* Buffer MB i Mask */
    } B;
  } IMASK1;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUFHI:32;					 /* Buffer MB i Interrupt */
    } B;
  } IFLAG2;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUF31TO8I:24;					 /* Buffer MBi Interrupt */
        vuint32_t BUF7I:1;					 /* Buffer MB7 Interrupt Or "Rx FIFO Overflow" */
        vuint32_t BUF6I:1;					 /* Buffer MB6 Interrupt Or "Rx FIFO Warning" */
        vuint32_t BUF5I:1;					 /* Buffer MB5 Interrupt Or "Frames available in Rx FIFO" */
        vuint32_t BUF4TO0I:5;					 /* Buffer MB i Interrupt Or "reserved" */
    } B;
  } IFLAG1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :2;					 /*  */
        vuint32_t ECRWRE:1;					 /* Error-correction Configuration Register Write Enable */
        vuint32_t WRMFRZ:1;					 /* Write-Access To Memory In Freeze Mode */
        vuint32_t RFFN:4;					 /* Number Of Rx FIFO Filters */
        vuint32_t TASD:5;					 /* Tx Arbitration Start Delay */
        vuint32_t MRP:1;					 /* Mailboxes Reception Priority */
        vuint32_t RRS:1;					 /* Remote Request Storing */
        vuint32_t EACEN:1;					 /* Entire Frame Arbitration Field Comparison Enable For Rx Mailboxes */
        vuint32_t  :16;					 /*  */
    } B;
  } CTRL2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :9;					 /*  */
        vuint32_t LPTM:7;					 /* Lowest Priority Tx Mailbox */
        vuint32_t  :1;					 /*  */
        vuint32_t VPS:1;					 /* Valid Priority Status */
        vuint32_t IMB:1;					 /* Inactive Mailbox */
        vuint32_t  :13;					 /*  */
    } B;
  } ESR2;

  uint8_t CAN_reserved1[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :9;					 /*  */
        vuint32_t MBCRC:7;					 /* CRC Mailbox */
        vuint32_t  :1;					 /*  */
        vuint32_t TXCRC:15;					 /* CRC Transmitted */
    } B;
  } CRCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t FGM:32;					 /* Rx FIFO Global Mask Bits */
    } B;
  } RXFGMASK;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :23;					 /*  */
        vuint32_t IDHIT:9;					 /* Identifier Acceptance Filter Hit Indicator */
    } B;
  } RXFIR;

  uint8_t CAN_reserved2[2096];
  union {
    vuint32_t R;
      struct {
        vuint32_t MI:32;					 /* Individual Mask Bits */
    } B;
  } RXIMR[64];

  uint8_t CAN_reserved3[352];
  union {
    vuint32_t R;
      struct {
        vuint32_t ECRWRDIS:1;					 /* Error Configuration Register Write Disable */
        vuint32_t  :11;					 /*  */
        vuint32_t HANCEI_MSK:1;					 /* Host Access With Non-Correctable Errors Interrupt Mask */
        vuint32_t FANCEI_MSK:1;					 /* FlexCAN Access With Non-Correctable Errors Interrupt Mask */
        vuint32_t  :1;					 /*  */
        vuint32_t CEI_MSK:1;					 /* Correctable Errors Interrupt Mask */
        vuint32_t HAERRIE:1;					 /* Host Access Error Injection Enable */
        vuint32_t FAERRIE:1;					 /* FlexCAN Access Error Injection Enable */
        vuint32_t EXTERRIE:1;					 /* Extended Error Injection Enable */
        vuint32_t  :3;					 /*  */
        vuint32_t RERRDIS:1;					 /* Error Report Disable */
        vuint32_t ECCDIS:1;					 /* Error Correction Disable */
        vuint32_t NCEFAFRZ:1;					 /* Non-Correctable Errors In FlexCAN Access Put Device In Freeze Mode */
        vuint32_t  :7;					 /*  */
    } B;
  } MECR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :18;					 /*  */
        vuint32_t INJADDR:12;					 /* Address Where Error Is To Be Injected */
        vuint32_t  :2;					 /*  */
    } B;
  } ERRIAR;

  union {
    vuint32_t R;
      struct {
        vuint32_t DFLIP:32;					 /* Data flip pattern */
    } B;
  } ERRIDPR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :3;					 /*  */
        vuint32_t PFLIP3:5;					 /* Parity Flip Pattern For Byte 3 (most significant) */
        vuint32_t  :3;					 /*  */
        vuint32_t PFLIP2:5;					 /* Parity Flip Pattern For Byte 2 */
        vuint32_t  :3;					 /*  */
        vuint32_t PFLIP1:5;					 /* Parity Flip Pattern For Byte 1 */
        vuint32_t  :3;					 /*  */
        vuint32_t PFLIP0:5;					 /* Parity Flip Pattern For Byte 0 (Least Significant) */
    } B;
  } ERRIPPR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t NCE:1;					 /* Non-Correctable Error */
        vuint32_t  :5;					 /*  */
        vuint32_t SAID:3;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t ERRADDR:14;					 /* Address Where The Error Was Detected */
    } B;
  } RERRAR;

  union {
    vuint32_t R;
      struct {
        vuint32_t RDATA:32;					 /* Raw data word read from memory with error */
    } B;
  } RERRDR;

  union {
    vuint32_t R;
      struct {
        vuint32_t BE3:1;					 /* Byte Enabled For Byte 3 (Most Significant) */
        vuint32_t  :2;					 /*  */
        vuint32_t SYND3:5;					 /* Error Syndrome For Byte 3 (Most Significant) */
        vuint32_t BE2:1;					 /* Byte Enabled For Byte 2 */
        vuint32_t  :2;					 /*  */
        vuint32_t SYND2:5;					 /* Error Syndrome For Byte 2 */
        vuint32_t BE1:1;					 /* Byte Enabled For Byte 1 */
        vuint32_t  :2;					 /*  */
        vuint32_t SYND1:5;					 /* Error Syndrome for Byte 1 */
        vuint32_t BE0:1;					 /* Byte Enabled For Byte 0 (least significant) */
        vuint32_t  :2;					 /*  */
        vuint32_t SYND0:5;					 /* Error Syndrome For Byte 0 (least significant) */
    } B;
  } RERRSYNR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t HANCEIF:1;					 /* Host Access With Non-Correctable Error Interrupt Flag */
        vuint32_t FANCEIF:1;					 /* FlexCAN Access With Non-Correctable Error Interrupt Flag */
        vuint32_t  :1;					 /*  */
        vuint32_t CEIF:1;					 /* Correctable Error Interrupt Flag */
        vuint32_t  :12;					 /*  */
        vuint32_t HANCEIOF:1;					 /* Host Access With Non-Correctable Error Interrupt Overrun Flag */
        vuint32_t FANCEIOF:1;					 /* FlexCAN Access With Non-Correctable Error Interrupt Overrun Flag */
        vuint32_t  :1;					 /*  */
        vuint32_t CEIOF:1;					 /* Correctable Error Interrupt Overrun Flag */
    } B;
  } ERRSR;

};


/* ============================================================================
   =============================== Module: CMU ================================
   ============================================================================ */

struct CMU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t SFM:1;					 /*  */
        vuint32_t  :13;					 /*  */
        vuint32_t CKSEL1:2;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t RCDIV:2;					 /*  */
        vuint32_t CME:1;					 /*  */
    } B;
  } CSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t FD:20;					 /*  */
    } B;
  } FDR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t HFREF:12;					 /*  */
    } B;
  } HFREFR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t LFREF:12;					 /*  */
    } B;
  } LFREFR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t FLCI:1;					 /*  */
        vuint32_t FHHI:1;					 /*  */
        vuint32_t FLLI:1;					 /*  */
        vuint32_t OLRI:1;					 /*  */
    } B;
  } ISR;

  uint8_t CMU_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t MD:20;					 /*  */
    } B;
  } MDR;

};


/* ============================================================================
   =============================== Module: CRC ================================
   ============================================================================ */

struct CRC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t POLYG:2;					 /* Polynomial selection */
        vuint32_t SWAP:1;					 /* Swap selection */
        vuint32_t INV:1;					 /* Inversion selection */
    } B;
  } CFG;

  union {
    vuint32_t R;
      struct {
        vuint32_t INP:32;					 /* Input data for the CRC computation */
    } B;
  } INP;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSTAT:32;					 /* CRC signature status */
    } B;
  } CSTAT;

  union {
    vuint32_t R;
      struct {
        vuint32_t OUTP:32;					 /* Final CRC signature */
    } B;
  } OUTP;

};


/* ============================================================================
   =============================== Module: CTU ================================
   ============================================================================ */

struct CTU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t I15_FE:1;					 /*  */
        vuint32_t I15_RE:1;					 /*  */
        vuint32_t I14_FE:1;					 /*  */
        vuint32_t I14_RE:1;					 /*  */
        vuint32_t I13_FE:1;					 /*  */
        vuint32_t I13_RE:1;					 /*  */
        vuint32_t I12_FE:1;					 /*  */
        vuint32_t I12_RE:1;					 /*  */
        vuint32_t I11_FE:1;					 /*  */
        vuint32_t I11_RE:1;					 /*  */
        vuint32_t I10_FE:1;					 /*  */
        vuint32_t I10_RE:1;					 /*  */
        vuint32_t I9_FE:1;					 /*  */
        vuint32_t I9_RE:1;					 /*  */
        vuint32_t I8_FE:1;					 /*  */
        vuint32_t I8_RE:1;					 /*  */
        vuint32_t I7_FE:1;					 /*  */
        vuint32_t I7_RE:1;					 /*  */
        vuint32_t I6_FE:1;					 /*  */
        vuint32_t I6_RE:1;					 /*  */
        vuint32_t I5_FE:1;					 /*  */
        vuint32_t I5_RE:1;					 /*  */
        vuint32_t I4_FE:1;					 /*  */
        vuint32_t I4_RE:1;					 /*  */
        vuint32_t I3_FE:1;					 /*  */
        vuint32_t I3_RE:1;					 /*  */
        vuint32_t I2_FE:1;					 /*  */
        vuint32_t I2_RE:1;					 /*  */
        vuint32_t I1_FE:1;					 /*  */
        vuint32_t I1_RE:1;					 /*  */
        vuint32_t I0_FE:1;					 /*  */
        vuint32_t I0_RE:1;					 /*  */
    } B;
  } TGSISR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :7;					 /*  */
        vuint16_t ET_TM:1;					 /*  */
        vuint16_t PRES:2;					 /*  */
        vuint16_t MRS_SM:5;					 /*  */
        vuint16_t TGS_M:1;					 /*  */
    } B;
  } TGSCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t TCRV:16;					 /*  */
    } B;
  } TCR[8];

  union {
    vuint16_t R;
      struct {
        vuint16_t TGSCCV:16;					 /*  */
    } B;
  } TGSCCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t TGSCRV:16;					 /*  */
    } B;
  } TGSCRR;

  uint8_t CTU_reserved0[2];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :3;					 /*  */
        vuint32_t T3_INDEX:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t T2_INDEX:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t T1_INDEX:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t T0_INDEX:5;					 /*  */
    } B;
  } CLCR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :3;					 /*  */
        vuint32_t T7_INDEX:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t T6_INDEX:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t T5_INDEX:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t T4_INDEX:5;					 /*  */
    } B;
  } CLCR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t T3_E:1;					 /*  */
        vuint32_t T3_ETE:1;					 /*  */
        vuint32_t T3_T4E:1;					 /*  */
        vuint32_t T3_T3E:1;					 /*  */
        vuint32_t T3_T2E:1;					 /*  */
        vuint32_t T3_T1E:1;					 /*  */
        vuint32_t T3_ADCE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t T2_E:1;					 /*  */
        vuint32_t T2_ETE:1;					 /*  */
        vuint32_t T2_T4E:1;					 /*  */
        vuint32_t T2_T3E:1;					 /*  */
        vuint32_t T2_T2E:1;					 /*  */
        vuint32_t T2_T1E:1;					 /*  */
        vuint32_t T2_ADCE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t T1_E:1;					 /*  */
        vuint32_t T1_ETE:1;					 /*  */
        vuint32_t T1_T4E:1;					 /*  */
        vuint32_t T1_T3E:1;					 /*  */
        vuint32_t T1_T2E:1;					 /*  */
        vuint32_t T1_T1E:1;					 /*  */
        vuint32_t T1_ADCE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t T0_E:1;					 /*  */
        vuint32_t T0_ETE:1;					 /*  */
        vuint32_t T0_T4E:1;					 /*  */
        vuint32_t T0_T3E:1;					 /*  */
        vuint32_t T0_T2E:1;					 /*  */
        vuint32_t T0_T1E:1;					 /*  */
        vuint32_t T0_ADCE:1;					 /*  */
    } B;
  } THCR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t T7_E:1;					 /*  */
        vuint32_t T7_ETE:1;					 /*  */
        vuint32_t T7_T4E:1;					 /*  */
        vuint32_t T7_T3E:1;					 /*  */
        vuint32_t T7_T2E:1;					 /*  */
        vuint32_t T7_T1E:1;					 /*  */
        vuint32_t T7_ADCE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t T6_E:1;					 /*  */
        vuint32_t T6_ETE:1;					 /*  */
        vuint32_t T6_T4E:1;					 /*  */
        vuint32_t T6_T3E:1;					 /*  */
        vuint32_t T6_T2E:1;					 /*  */
        vuint32_t T6_T1E:1;					 /*  */
        vuint32_t T6_ADCE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t T5_E:1;					 /*  */
        vuint32_t T5_ETE:1;					 /*  */
        vuint32_t T5_T4E:1;					 /*  */
        vuint32_t T5_T3E:1;					 /*  */
        vuint32_t T5_T2E:1;					 /*  */
        vuint32_t T5_T1E:1;					 /*  */
        vuint32_t T5_ADCE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t T4_E:1;					 /*  */
        vuint32_t T4_ETE:1;					 /*  */
        vuint32_t T4_T4E:1;					 /*  */
        vuint32_t T4_T3E:1;					 /*  */
        vuint32_t T4_T2E:1;					 /*  */
        vuint32_t T4_T1E:1;					 /*  */
        vuint32_t T4_ADCE:1;					 /*  */
    } B;
  } THCR2;

  struct {
    union {
      vuint16_t R;
        struct {
          vuint16_t CIR:1;					 /*  */
          vuint16_t LC:1;					 /*  */
          vuint16_t CMS:1;					 /*  */
          vuint16_t FIFO:3;					 /*  */
          vuint16_t ST0:1;					 /*  */
          vuint16_t  :3;					 /*  */
          vuint16_t SU:1;					 /*  */
          vuint16_t  :1;					 /*  */
          vuint16_t CH:4;					 /*  */
      } B;
    } CLR_A;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CIR:1;					 /*  */
          vuint16_t LC:1;					 /*  */
          vuint16_t CMS:1;					 /*  */
          vuint16_t FIFO:3;					 /*  */
          vuint16_t ST0:1;					 /* Sel-Test mode control 0. Must be 0 in this register format. */
          vuint16_t CH_B:4;					 /* ADC unit B channel number. */
          vuint16_t  :1;					 /* Reserved. */
          vuint16_t CH_A:4;					 /* ADC unit A channel number. */
      } B;
    } CLR_B;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CIR:1;					 /*  */
          vuint16_t LC:1;					 /*  */
          vuint16_t ST1:1;					 /*  */
          vuint16_t ST_CMS:1;					 /*  */
          vuint16_t ST_SU:1;					 /*  */
          vuint16_t  :1;					 /*  */
          vuint16_t ST0:1;					 /*  */
          vuint16_t ALG:2;					 /*  */
          vuint16_t BSIZE:7;					 /*  */
      } B;
    } CLR_C;
  } CHANNEL[24];

  uint8_t CTU_reserved1[16];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :12;					 /*  */
        vuint16_t DE3:1;					 /*  */
        vuint16_t DE2:1;					 /*  */
        vuint16_t DE1:1;					 /*  */
        vuint16_t DE0:1;					 /*  */
    } B;
  } FDCR;

  uint8_t CTU_reserved2[2];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t OR_EN3:1;					 /*  */
        vuint32_t OF_EN3:1;					 /*  */
        vuint32_t EMPTY_EN3:1;					 /*  */
        vuint32_t FULL_EN3:1;					 /*  */
        vuint32_t OR_EN2:1;					 /*  */
        vuint32_t OF_EN2:1;					 /*  */
        vuint32_t EMPTY_EN2:1;					 /*  */
        vuint32_t FULL_EN2:1;					 /*  */
        vuint32_t OR_EN1:1;					 /*  */
        vuint32_t OF_EN1:1;					 /*  */
        vuint32_t EMPTY_EN1:1;					 /*  */
        vuint32_t FULL_EN1:1;					 /*  */
        vuint32_t OR_EN0:1;					 /*  */
        vuint32_t OF_EN0:1;					 /*  */
        vuint32_t EMPTY_EN0:1;					 /*  */
        vuint32_t FULL_EN0:1;					 /*  */
    } B;
  } FCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t TH3:8;					 /*  */
        vuint32_t TH2:8;					 /*  */
        vuint32_t TH1:8;					 /*  */
        vuint32_t TH0:8;					 /*  */
    } B;
  } FTH;

  uint8_t CTU_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t OR3:1;					 /*  */
        vuint32_t OF3:1;					 /*  */
        vuint32_t EMP3:1;					 /*  */
        vuint32_t FULL3:1;					 /*  */
        vuint32_t OR2:1;					 /*  */
        vuint32_t OF2:1;					 /*  */
        vuint32_t EMP2:1;					 /*  */
        vuint32_t FULL2:1;					 /*  */
        vuint32_t OR1:1;					 /*  */
        vuint32_t OF1:1;					 /*  */
        vuint32_t EMP1:1;					 /*  */
        vuint32_t FULL1:1;					 /*  */
        vuint32_t OR0:1;					 /*  */
        vuint32_t OF0:1;					 /*  */
        vuint32_t EMP0:1;					 /*  */
        vuint32_t FULL0:1;					 /*  */
    } B;
  } FST;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :11;					 /*  */
        vuint32_t ADC:1;					 /*  */
        vuint32_t N_CH:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } FR[4];

  uint8_t CTU_reserved4[16];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :11;					 /*  */
        vuint32_t ADC:1;					 /*  */
        vuint32_t N_CH:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t LA_DATA:12;					 /*  */
        vuint32_t  :3;					 /*  */
    } B;
  } FL[4];

  uint8_t CTU_reserved5[16];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t LIST_BE:1;					 /*  */
        vuint16_t CS:1;					 /*  */
        vuint16_t ET_OE:1;					 /*  */
        vuint16_t ERRCMP:1;					 /*  */
        vuint16_t T4_OE:1;					 /*  */
        vuint16_t T3_OE:1;					 /*  */
        vuint16_t T2_OE:1;					 /*  */
        vuint16_t T1_OE:1;					 /*  */
        vuint16_t ADC_OE:1;					 /*  */
        vuint16_t TGS_OSM:1;					 /*  */
        vuint16_t MRS_O:1;					 /*  */
        vuint16_t ICE:1;					 /*  */
        vuint16_t SM_TO:1;					 /*  */
        vuint16_t MRS_RE:1;					 /*  */
    } B;
  } EFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t SERR_B:1;					 /*  */
        vuint16_t SERR_A:1;					 /*  */
        vuint16_t ADC_I:1;					 /*  */
        vuint16_t T7_I:1;					 /*  */
        vuint16_t T6_I:1;					 /*  */
        vuint16_t T5_I:1;					 /*  */
        vuint16_t T4_I:1;					 /*  */
        vuint16_t T3_I:1;					 /*  */
        vuint16_t T2_I:1;					 /*  */
        vuint16_t T1_I:1;					 /*  */
        vuint16_t T0_I:1;					 /*  */
        vuint16_t MRS_I:1;					 /*  */
    } B;
  } IFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t T7_IE:1;					 /*  */
        vuint16_t T6_IE:1;					 /*  */
        vuint16_t T5_IE:1;					 /*  */
        vuint16_t T4_IE:1;					 /*  */
        vuint16_t T3_IE:1;					 /*  */
        vuint16_t T2_IE:1;					 /*  */
        vuint16_t T1_IE:1;					 /*  */
        vuint16_t T0_IE:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t SAF_CNT_B_EN:1;					 /*  */
        vuint16_t SAF_CNT_A_EN:1;					 /*  */
        vuint16_t DMA_DE:1;					 /*  */
        vuint16_t MRS_DMAE:1;					 /*  */
        vuint16_t MRS_IE:1;					 /*  */
        vuint16_t IEE:1;					 /*  */
    } B;
  } IR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :8;					 /*  */
        vuint16_t COTGT:8;					 /*  */
    } B;
  } COTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t T7_SG:1;					 /*  */
        vuint16_t T6_SG:1;					 /*  */
        vuint16_t T5_SG:1;					 /*  */
        vuint16_t T4_SG:1;					 /*  */
        vuint16_t T3_SG:1;					 /*  */
        vuint16_t T2_SG:1;					 /*  */
        vuint16_t T1_SG:1;					 /*  */
        vuint16_t T0_SG:1;					 /*  */
        vuint16_t CTU_ADC_R:1;					 /*  */
        vuint16_t CTU_ODIS:1;					 /*  */
        vuint16_t DFE:1;					 /*  */
        vuint16_t CGRE:1;					 /*  */
        vuint16_t FGRE:1;					 /*  */
        vuint16_t MRS_SG:1;					 /*  */
        vuint16_t GRE:1;					 /*  */
        vuint16_t TGSISR_RE:1;					 /*  */
    } B;
  } CR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :8;					 /*  */
        vuint16_t FILTER_N:8;					 /*  */
    } B;
  } DFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t EXP_A:16;					 /*  */
    } B;
  } EXPAR;

  union {
    vuint16_t R;
      struct {
        vuint16_t EXP_B:16;					 /*  */
    } B;
  } EXPBR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :8;					 /*  */
        vuint16_t CNTRNG:8;					 /*  */
    } B;
  } CNTRNGR;

  uint8_t CTU_reserved6[2];
  union {
    vuint32_t R;
      struct {
        vuint32_t LIST1_BLK:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t LIST1_ADDR:5;					 /*  */
        vuint32_t LIST0_BLK:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t LIST0_ADDR:5;					 /* List Address 0, indicates the command address being executed when LIST_BE flag in EFR register bit was set. */
        vuint32_t  :15;					 /*  */
        vuint32_t PAR_LIST:1;					 /*  */
    } B;
  } LISTCSR;

};


/* ============================================================================
   ============================== Module: DMAMUX ==============================
   ============================================================================ */

struct DMAMUX_tag {
  union {
    vuint8_t R;
      struct {
        vuint8_t ENBL:1;					 /* DMA Channel Enable */
        vuint8_t TRIG:1;					 /* DMA Channel Trigger Enable */
        vuint8_t SOURCE:6;					 /* DMA Channel Source (Slot) */
    } B;
  } CHCFG[16];

};


/* ============================================================================
   =============================== Module: DMA ================================
   ============================================================================ */

struct DMA_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :14;					 /*  */
        vuint32_t CX:1;					 /* Cancel Transfer */
        vuint32_t ECX:1;					 /* Error Cancel Transfer */
        vuint32_t  :4;					 /*  */
        vuint32_t GRP1PRI:2;					 /* Channel Group 1 Priority */
        vuint32_t GRP0PRI:2;					 /* Channel Group 0 Priority */
        vuint32_t EMLM:1;					 /* Enable Minor Loop Mapping */
        vuint32_t CLM:1;					 /* Continuous Link Mode */
        vuint32_t HALT:1;					 /* Halt DMA Operations */
        vuint32_t HOE:1;					 /* Halt On Error */
        vuint32_t ERGA:1;					 /* Enable Round Robin Group Arbitration */
        vuint32_t ERCA:1;					 /* Enable Round Robin Channel Arbitration */
        vuint32_t EDBG:1;					 /* Enable Debug */
        vuint32_t  :1;					 /*  */
    } B;
  } CR;

  union {
    vuint32_t R;
      struct {
        vuint32_t VLD:1;					 /*  */
        vuint32_t  :13;					 /*  */
        vuint32_t UCE:1;					 /* Uncorrectable ECC error */
        vuint32_t ECX:1;					 /* Transfer Cancelled */
        vuint32_t GPE:1;					 /* Group Priority Error */
        vuint32_t CPE:1;					 /* Channel Priority Error */
        vuint32_t  :1;					 /*  */
        vuint32_t ERRCHN:5;					 /* Error Channel Number or Cancelled Channel Number */
        vuint32_t SAE:1;					 /* Source Address Error */
        vuint32_t SOE:1;					 /* Source Offset Error */
        vuint32_t DAE:1;					 /* Destination Address Error */
        vuint32_t DOE:1;					 /* Destination Offset Error */
        vuint32_t NCE:1;					 /* NBYTES/CITER Configuration Error */
        vuint32_t SGE:1;					 /* Scatter/Gather Configuration Error */
        vuint32_t SBE:1;					 /* Source Bus Error */
        vuint32_t DBE:1;					 /* Destination Bus Error */
    } B;
  } ES;

  uint8_t DMA_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t ERQ31:1;					 /* Enable DMA Request 31 */
        vuint32_t ERQ30:1;					 /* Enable DMA Request 30 */
        vuint32_t ERQ29:1;					 /* Enable DMA Request 29 */
        vuint32_t ERQ28:1;					 /* Enable DMA Request 28 */
        vuint32_t ERQ27:1;					 /* Enable DMA Request 27 */
        vuint32_t ERQ26:1;					 /* Enable DMA Request 26 */
        vuint32_t ERQ25:1;					 /* Enable DMA Request 25 */
        vuint32_t ERQ24:1;					 /* Enable DMA Request 24 */
        vuint32_t ERQ23:1;					 /* Enable DMA Request 23 */
        vuint32_t ERQ22:1;					 /* Enable DMA Request 22 */
        vuint32_t ERQ21:1;					 /* Enable DMA Request 21 */
        vuint32_t ERQ20:1;					 /* Enable DMA Request 20 */
        vuint32_t ERQ19:1;					 /* Enable DMA Request 19 */
        vuint32_t ERQ18:1;					 /* Enable DMA Request 18 */
        vuint32_t ERQ17:1;					 /* Enable DMA Request 17 */
        vuint32_t ERQ16:1;					 /* Enable DMA Request 16 */
        vuint32_t ERQ15:1;					 /* Enable DMA Request 15 */
        vuint32_t ERQ14:1;					 /* Enable DMA Request 14 */
        vuint32_t ERQ13:1;					 /* Enable DMA Request 13 */
        vuint32_t ERQ12:1;					 /* Enable DMA Request 12 */
        vuint32_t ERQ11:1;					 /* Enable DMA Request 11 */
        vuint32_t ERQ10:1;					 /* Enable DMA Request 10 */
        vuint32_t ERQ9:1;					 /* Enable DMA Request 9 */
        vuint32_t ERQ8:1;					 /* Enable DMA Request 8 */
        vuint32_t ERQ7:1;					 /* Enable DMA Request 7 */
        vuint32_t ERQ6:1;					 /* Enable DMA Request 6 */
        vuint32_t ERQ5:1;					 /* Enable DMA Request 5 */
        vuint32_t ERQ4:1;					 /* Enable DMA Request 4 */
        vuint32_t ERQ3:1;					 /* Enable DMA Request 3 */
        vuint32_t ERQ2:1;					 /* Enable DMA Request 2 */
        vuint32_t ERQ1:1;					 /* Enable DMA Request 1 */
        vuint32_t ERQ0:1;					 /* Enable DMA Request 0 */
    } B;
  } ERQ;

  uint8_t DMA_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t EEI31:1;					 /* Enable Error Interrupt 31 */
        vuint32_t EEI30:1;					 /* Enable Error Interrupt 30 */
        vuint32_t EEI29:1;					 /* Enable Error Interrupt 29 */
        vuint32_t EEI28:1;					 /* Enable Error Interrupt 28 */
        vuint32_t EEI27:1;					 /* Enable Error Interrupt 27 */
        vuint32_t EEI26:1;					 /* Enable Error Interrupt 26 */
        vuint32_t EEI25:1;					 /* Enable Error Interrupt 25 */
        vuint32_t EEI24:1;					 /* Enable Error Interrupt 24 */
        vuint32_t EEI23:1;					 /* Enable Error Interrupt 23 */
        vuint32_t EEI22:1;					 /* Enable Error Interrupt 22 */
        vuint32_t EEI21:1;					 /* Enable Error Interrupt 21 */
        vuint32_t EEI20:1;					 /* Enable Error Interrupt 20 */
        vuint32_t EEI19:1;					 /* Enable Error Interrupt 19 */
        vuint32_t EEI18:1;					 /* Enable Error Interrupt 18 */
        vuint32_t EEI17:1;					 /* Enable Error Interrupt 17 */
        vuint32_t EEI16:1;					 /* Enable Error Interrupt 16 */
        vuint32_t EEI15:1;					 /* Enable Error Interrupt 15 */
        vuint32_t EEI14:1;					 /* Enable Error Interrupt 14 */
        vuint32_t EEI13:1;					 /* Enable Error Interrupt 13 */
        vuint32_t EEI12:1;					 /* Enable Error Interrupt 12 */
        vuint32_t EEI11:1;					 /* Enable Error Interrupt 11 */
        vuint32_t EEI10:1;					 /* Enable Error Interrupt 10 */
        vuint32_t EEI9:1;					 /* Enable Error Interrupt 9 */
        vuint32_t EEI8:1;					 /* Enable Error Interrupt 8 */
        vuint32_t EEI7:1;					 /* Enable Error Interrupt 7 */
        vuint32_t EEI6:1;					 /* Enable Error Interrupt 6 */
        vuint32_t EEI5:1;					 /* Enable Error Interrupt 5 */
        vuint32_t EEI4:1;					 /* Enable Error Interrupt 4 */
        vuint32_t EEI3:1;					 /* Enable Error Interrupt 3 */
        vuint32_t EEI2:1;					 /* Enable Error Interrupt 2 */
        vuint32_t EEI1:1;					 /* Enable Error Interrupt 1 */
        vuint32_t EEI0:1;					 /* Enable Error Interrupt 0 */
    } B;
  } EEI;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t SAER:1;					 /* Set All Enable Requests */
        vuint8_t  :1;					 /*  */
        vuint8_t SERQ:5;					 /* Set Enable Request */
    } B;
  } SERQ;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t CAER:1;					 /* Clear All Enable Requests */
        vuint8_t  :1;					 /*  */
        vuint8_t CERQ:5;					 /* Clear Enable Request */
    } B;
  } CERQ;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t SAEE:1;					 /* Sets All Enable Error Interrupts */
        vuint8_t  :1;					 /*  */
        vuint8_t SEEI:5;					 /* Set Enable Error Interrupt */
    } B;
  } SEEI;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t CAEE:1;					 /* Clear All Enable Error Interrupts */
        vuint8_t  :1;					 /*  */
        vuint8_t CEEI:5;					 /* Clear Enable Error Interrupt */
    } B;
  } CEEI;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t CAIR:1;					 /* Clear All Interrupt Requests */
        vuint8_t  :1;					 /*  */
        vuint8_t CINT:5;					 /* Clear interrupt request */
    } B;
  } CINT;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t CAEI:1;					 /* Clear All Error Indicators */
        vuint8_t  :1;					 /*  */
        vuint8_t CERR:5;					 /* Clear Error Indicator */
    } B;
  } CERR;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t SAST:1;					 /* Set All START Bits (activates all channels) */
        vuint8_t  :1;					 /*  */
        vuint8_t SSRT:5;					 /* Set START Bit */
    } B;
  } SSRT;

  union {
    vuint8_t R;
      struct {
        vuint8_t NOP:1;					 /* No Op enable */
        vuint8_t CADN:1;					 /* Clears All DONE Bits */
        vuint8_t  :1;					 /*  */
        vuint8_t CDNE:5;					 /* Clear DONE Bit */
    } B;
  } CDNE;

  uint8_t DMA_reserved2[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t INT31:1;					 /* Interrupt Request 31 */
        vuint32_t INT30:1;					 /* Interrupt Request 30 */
        vuint32_t INT29:1;					 /* Interrupt Request 29 */
        vuint32_t INT28:1;					 /* Interrupt Request 28 */
        vuint32_t INT27:1;					 /* Interrupt Request 27 */
        vuint32_t INT26:1;					 /* Interrupt Request 26 */
        vuint32_t INT25:1;					 /* Interrupt Request 25 */
        vuint32_t INT24:1;					 /* Interrupt Request 24 */
        vuint32_t INT23:1;					 /* Interrupt Request 23 */
        vuint32_t INT22:1;					 /* Interrupt Request 22 */
        vuint32_t INT21:1;					 /* Interrupt Request 21 */
        vuint32_t INT20:1;					 /* Interrupt Request 20 */
        vuint32_t INT19:1;					 /* Interrupt Request 19 */
        vuint32_t INT18:1;					 /* Interrupt Request 18 */
        vuint32_t INT17:1;					 /* Interrupt Request 17 */
        vuint32_t INT16:1;					 /* Interrupt Request 16 */
        vuint32_t INT15:1;					 /* Interrupt Request 15 */
        vuint32_t INT14:1;					 /* Interrupt Request 14 */
        vuint32_t INT13:1;					 /* Interrupt Request 13 */
        vuint32_t INT12:1;					 /* Interrupt Request 12 */
        vuint32_t INT11:1;					 /* Interrupt Request 11 */
        vuint32_t INT10:1;					 /* Interrupt Request 10 */
        vuint32_t INT9:1;					 /* Interrupt Request 9 */
        vuint32_t INT8:1;					 /* Interrupt Request 8 */
        vuint32_t INT7:1;					 /* Interrupt Request 7 */
        vuint32_t INT6:1;					 /* Interrupt Request 6 */
        vuint32_t INT5:1;					 /* Interrupt Request 5 */
        vuint32_t INT4:1;					 /* Interrupt Request 4 */
        vuint32_t INT3:1;					 /* Interrupt Request 3 */
        vuint32_t INT2:1;					 /* Interrupt Request 2 */
        vuint32_t INT1:1;					 /* Interrupt Request 1 */
        vuint32_t INT0:1;					 /* Interrupt Request 0 */
    } B;
  } INT;

  uint8_t DMA_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t ERR31:1;					 /* Error In Channel 31 */
        vuint32_t ERR30:1;					 /* Error In Channel 30 */
        vuint32_t ERR29:1;					 /* Error In Channel 29 */
        vuint32_t ERR28:1;					 /* Error In Channel 28 */
        vuint32_t ERR27:1;					 /* Error In Channel 27 */
        vuint32_t ERR26:1;					 /* Error In Channel 26 */
        vuint32_t ERR25:1;					 /* Error In Channel 25 */
        vuint32_t ERR24:1;					 /* Error In Channel 24 */
        vuint32_t ERR23:1;					 /* Error In Channel 23 */
        vuint32_t ERR22:1;					 /* Error In Channel 22 */
        vuint32_t ERR21:1;					 /* Error In Channel 21 */
        vuint32_t ERR20:1;					 /* Error In Channel 20 */
        vuint32_t ERR19:1;					 /* Error In Channel 19 */
        vuint32_t ERR18:1;					 /* Error In Channel 18 */
        vuint32_t ERR17:1;					 /* Error In Channel 17 */
        vuint32_t ERR16:1;					 /* Error In Channel 16 */
        vuint32_t ERR15:1;					 /* Error In Channel 15 */
        vuint32_t ERR14:1;					 /* Error In Channel 14 */
        vuint32_t ERR13:1;					 /* Error In Channel 13 */
        vuint32_t ERR12:1;					 /* Error In Channel 12 */
        vuint32_t ERR11:1;					 /* Error In Channel 11 */
        vuint32_t ERR10:1;					 /* Error In Channel 10 */
        vuint32_t ERR9:1;					 /* Error In Channel 9 */
        vuint32_t ERR8:1;					 /* Error In Channel 8 */
        vuint32_t ERR7:1;					 /* Error In Channel 7 */
        vuint32_t ERR6:1;					 /* Error In Channel 6 */
        vuint32_t ERR5:1;					 /* Error In Channel 5 */
        vuint32_t ERR4:1;					 /* Error In Channel 4 */
        vuint32_t ERR3:1;					 /* Error In Channel 3 */
        vuint32_t ERR2:1;					 /* Error In Channel 2 */
        vuint32_t ERR1:1;					 /* Error In Channel 1 */
        vuint32_t ERR0:1;					 /* Error In Channel 0 */
    } B;
  } ERR;

  uint8_t DMA_reserved4[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t HRS31:1;					 /* Hardware Request Status Channel 31 */
        vuint32_t HRS30:1;					 /* Hardware Request Status Channel 30 */
        vuint32_t HRS29:1;					 /* Hardware Request Status Channel 29 */
        vuint32_t HRS28:1;					 /* Hardware Request Status Channel 28 */
        vuint32_t HRS27:1;					 /* Hardware Request Status Channel 27 */
        vuint32_t HRS26:1;					 /* Hardware Request Status Channel 26 */
        vuint32_t HRS25:1;					 /* Hardware Request Status Channel 25 */
        vuint32_t HRS24:1;					 /* Hardware Request Status Channel 24 */
        vuint32_t HRS23:1;					 /* Hardware Request Status Channel 23 */
        vuint32_t HRS22:1;					 /* Hardware Request Status Channel 22 */
        vuint32_t HRS21:1;					 /* Hardware Request Status Channel 21 */
        vuint32_t HRS20:1;					 /* Hardware Request Status Channel 20 */
        vuint32_t HRS19:1;					 /* Hardware Request Status Channel 19 */
        vuint32_t HRS18:1;					 /* Hardware Request Status Channel 18 */
        vuint32_t HRS17:1;					 /* Hardware Request Status Channel 17 */
        vuint32_t HRS16:1;					 /* Hardware Request Status Channel 16 */
        vuint32_t HRS15:1;					 /* Hardware Request Status Channel 15 */
        vuint32_t HRS14:1;					 /* Hardware Request Status Channel 14 */
        vuint32_t HRS13:1;					 /* Hardware Request Status Channel 13 */
        vuint32_t HRS12:1;					 /* Hardware Request Status Channel 12 */
        vuint32_t HRS11:1;					 /* Hardware Request Status Channel 11 */
        vuint32_t HRS10:1;					 /* Hardware Request Status Channel 10 */
        vuint32_t HRS9:1;					 /* Hardware Request Status Channel 9 */
        vuint32_t HRS8:1;					 /* Hardware Request Status Channel 8 */
        vuint32_t HRS7:1;					 /* Hardware Request Status Channel 7 */
        vuint32_t HRS6:1;					 /* Hardware Request Status Channel 6 */
        vuint32_t HRS5:1;					 /* Hardware Request Status Channel 5 */
        vuint32_t HRS4:1;					 /* Hardware Request Status Channel 4 */
        vuint32_t HRS3:1;					 /* Hardware Request Status Channel 3 */
        vuint32_t HRS2:1;					 /* Hardware Request Status Channel 2 */
        vuint32_t HRS1:1;					 /* Hardware Request Status Channel 1 */
        vuint32_t HRS0:1;					 /* Hardware Request Status Channel 0 */
    } B;
  } HRS;

  uint8_t DMA_reserved5[200];
  union {
    vuint8_t R;
      struct {
        vuint8_t ECP:1;					 /* Enable Channel Preemption. This bit resets to zero. */
        vuint8_t DPA:1;					 /* Disable preempt ability. This bit resets to zero. */
        vuint8_t GRPPRI:2;					 /* Channel n Current Group Priority */
        vuint8_t CHPRI:4;					 /* Channel n Arbitration Priority */
    } B;
  } DCHPRI[32];

  uint8_t DMA_reserved6[32];
  union {
    vuint8_t R;
      struct {
        vuint8_t EMI:1;					 /* Enable Master ID replication */
        vuint8_t PAL:1;					 /* Privileged Access Level */
        vuint8_t  :2;					 /*  */
        vuint8_t MID:4;					 /* Master ID */
    } B;
  } DCHMID[32];

  uint8_t DMA_reserved7[3744];
  struct tcd_t {
   
        vuint32_t SADDR;					 /* Source address */
    
        vuint16_t SMOD:5;					 /* Source address modulo. */
        vuint16_t SSIZE:3;					 /* Source data transfer size */
        vuint16_t DMOD:5;					 /* Destination address modulo */
        vuint16_t DSIZE:3;					 /* Destination data transfer size */
    
        vint16_t SOFF;					 /* Source address signed offset */
        
        vuint32_t NBYTES;					 /* Minor byte transfer count */
    
//       vuint32_t NBYTES:32;					 /* Minor byte transfer count */
//        vuint32_t SMLOE:1;					 /* Source minor loop offset enable */
//        vuint32_t DMLOE:1;					 /* Destination minor loop offset enable */
//        vuint32_t NBYTES:30;					 /* Minor byte transfer count */
//        vuint32_t SMLOE:1;					 /* Source minor loop offset enable */
//        vuint32_t DMLOE:1;					 /* Destination minor loop offset enable */
//        vuint32_t MLOFF:20;					 /* If SMLOE or DMLOE is set, this field represents a sign-extended offset applied to the source or destination address to form the next-state value after the minor loop completes. */
//        vuint32_t NBYTES:10;					 /* Minor byte transfer count */
    
        vint32_t SLAST;					 /* Last source address adjustment */
    
        vuint32_t DADDR;					 /* Destination address */
    
        vuint16_t CITER_ELINK:1;					 /* Enable channel-to-channel linking on minor-loop complete */
        vuint16_t :1;
        vuint16_t CITER_LINKCH:5;					 /* Link channel number */
        vuint16_t CITER:9;					 /* Current major iteration count */
//        vuint16_t ELINK:1;					 /* Enable channel-to-channel linking on minor-loop complete */
//        vuint16_t CITER:15;					 /* Current major iteration count */
                              
        vint16_t DOFF;					 /* Destination address signed offset */
    
        vint32_t DLAST_SGA;					 
    
        vuint16_t BITER_ELINK:1;					 /* Enables channel-to-channel linking on minor loop complete */
        vuint16_t :1;
        vuint16_t BITER_LINKCH:5;					 /* Link channel number */
        vuint16_t BITER:9;					 /* Starting major iteration count */
    
//        vuint16_t ELINK:1;					 /* Enables channel-to-channel linking on minor loop complete */
//        vuint16_t BITER:15;					 /* Starting major iteration count */
    
        vuint16_t BWC:2;					 /* Bandwidth control */
        vuint16_t :1;
        vuint16_t MAJORLINKCH:5;					 /* Link channel number */
        vuint16_t DONE:1;					 /* Channel done */
        vuint16_t ACTIVE:1;					 /* Channel active */
        vuint16_t MAJORELINK:1;					 /* Enable channel-to-channel linking on major loop complete */
        vuint16_t ESG:1;					 /* Enable scatter/gather processing */
        vuint16_t DREQ:1;					 /* Disable request */
        vuint16_t INTHALF:1;					 /* Enable an interrupt when major counter is half complete. */
        vuint16_t INTMAJOR:1;					 /* Enable an interrupt when major iteration count completes */
        vuint16_t START:1;					 /* Channel start */
    } TCD[32];

};


/* ============================================================================
   ============================== Module: ETIMER ==============================
   ============================================================================ */

struct ETIMER_tag {
  struct {
    union {
      vuint16_t R;
        struct {
          vuint16_t COMP1:16;					 /*  */
      } B;
    } CH_COMP1;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t COMP2:16;					 /*  */
      } B;
    } CH_COMP2;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CAPT1:16;					 /*  */
      } B;
    } CH_CAPT1;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CAPT1:16;					 /*  */
      } B;
    } CH_CAPT2;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t LOAD:16;					 /*  */
      } B;
    } CH_LOAD;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t HOLD:16;					 /*  */
      } B;
    } CH_HOLD;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CNTR:16;					 /*  */
      } B;
    } CH_CNTR;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CNTMODE:3;					 /* Count mode */
          vuint16_t PRISRC:5;					 /* Primary Count Source */
          vuint16_t ONCE:1;					 /* Count once */
          vuint16_t LENGTH:1;					 /* Count Length */
          vuint16_t DIR:1;					 /* Count Direction */
          vuint16_t SRC:5;					 /* Secondary Count Source */
      } B;
    } CH_CTRL1;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t OEN:1;					 /* Output Enable */
          vuint16_t RDNT:1;					 /* Redundant Channel Enable */
          vuint16_t INPUT:1;					 /* External input signal */
          vuint16_t VAL:1;					 /* Forced OFLAG Value */
          vuint16_t FORCE:1;					 /* Force the OFLAG output */
          vuint16_t COFRC:1;					 /* Co-channel OFLAG Force */
          vuint16_t COINIT:2;					 /* Co-channel Initialization */
          vuint16_t SIPS:1;					 /* Secondary Source Input Polarity Select */
          vuint16_t PIPS:1;					 /* Primary Source Input Polarity Select */
          vuint16_t OPS:1;					 /* Output Polarity Select. */
          vuint16_t MSTR:1;					 /* Master Mode */
          vuint16_t OUTMODE:4;					 /* Output Mode */
      } B;
    } CH_CTRL2;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t STPEN:1;					 /* Stop Actions Enable */
          vuint16_t ROC:2;					 /* Reload on Capture */
          vuint16_t  :5;					 /*  */
          vuint16_t C2FCNT:3;					 /* Capture 2 FIFO count */
          vuint16_t C1FCNT:3;					 /* Capture 1 FIFO count */
          vuint16_t DBGEN:2;					 /* Debug Actions Enable */
      } B;
    } CH_CTRL3;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t  :6;					 /*  */
          vuint16_t WDF:1;					 /* Watchdog Time-out Flag */
          vuint16_t RCF:1;					 /* Redundant Channel Flag */
          vuint16_t ICF2:1;					 /* Input Capture 2 Flag */
          vuint16_t ICF1:1;					 /* Input Capture 1 Flag */
          vuint16_t IEHF:1;					 /* Input Edge High Flag */
          vuint16_t IELF:1;					 /* Input Edge Low Flag */
          vuint16_t TOF:1;					 /* Timer Overflow Flag */
          vuint16_t TCF2:1;					 /* Timer Compare 2 Flag */
          vuint16_t TCF1:1;					 /* Timer Compare 1 Flag */
          vuint16_t TCF:1;					 /*  */
      } B;
    } CH_STS;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t ICF2DE:1;					 /* Input Capture 2 Flag DMA Enable */
          vuint16_t ICF1DE:1;					 /* Input Capture 1 Flag DMA Enable */
          vuint16_t CMPLD2DE:1;					 /* Comparator Load Register 2 Flag DMA Enable */
          vuint16_t CMPLD1DE:1;					 /* Comparator Load Register 1 Flag DMA Enable */
          vuint16_t  :2;					 /*  */
          vuint16_t WDFIE:1;					 /* Watchdog Flag Interrupt Enable */
          vuint16_t RCFIE:1;					 /* Redundant Channel Flag Interrupt Enable */
          vuint16_t ICF2IE:1;					 /* Input Capture 2 Flag Interrupt Enable */
          vuint16_t ICF1IE:1;					 /* Input Capture 1 Flag Interrupt Enable */
          vuint16_t IEHFIE:1;					 /* Input Edge High Flag Interrupt Enable */
          vuint16_t IELFIE:1;					 /* Input Edge Low Flag Interrupt Enable */
          vuint16_t TOFIE:1;					 /* Timer Overflow Flag Interrupt Enable */
          vuint16_t TCF2IE:1;					 /* Timer Compare 2 Flag Interrupt Enable */
          vuint16_t TCF1IE:1;					 /* Timer Compare 1 Flag Interrupt Enable */
          vuint16_t TCFIE:1;					 /* Timer Compare Flag Interrupt Enable */
      } B;
    } CH_INTDMA;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CMPLD1:16;					 /*  */
      } B;
    } CH_CMPLD1;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CMPLD2:16;					 /*  */
      } B;
    } CH_CMPLD2;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t CLC2:3;					 /* Compare Load Control 2 */
          vuint16_t CLC1:3;					 /* Compare Load Control 1 */
          vuint16_t CMPMODE:2;					 /* Compare Mode */
          vuint16_t CPT2MODE:2;					 /* Capture 2 Mode Control */
          vuint16_t CPT1MODE:2;					 /* Capture 1 Mode Control */
          vuint16_t CFWM:2;					 /* Capture FIFO Water Mark */
          vuint16_t ONESHOT:1;					 /* One Shot Capture Mode */
          vuint16_t ARM:1;					 /* Arm Capture */
      } B;
    } CH_CCCTRL;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t  :5;					 /*  */
          vuint16_t FILT_CNT:3;					 /* Input Filter Sample Count */
          vuint16_t FILT_PER:8;					 /* Input Filter Sample Period */
      } B;
    } CH_FILT;
  } CHANNEL[6];

  uint8_t ETIMER_reserved0[64];
  union {
    vuint16_t R;
      struct {
        vuint16_t WDTOL:16;					 /*  */
    } B;
  } WDTOL;

  union {
    vuint16_t R;
      struct {
        vuint16_t WDTOH:16;					 /*  */
    } B;
  } WDTOH;

  uint8_t ETIMER_reserved1[8];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :10;					 /*  */
        vuint16_t ENBL:6;					 /* Timer Channel Enable */
    } B;
  } ENBL;

  uint8_t ETIMER_reserved2[2];
  union {
    vuint16_t R;
      struct {
        vuint16_t DREQ0_EN:1;					 /*  */
        vuint16_t  :10;					 /*  */
        vuint16_t DREQ0:5;					 /*  */
    } B;
  } DREQ0;

  union {
    vuint16_t R;
      struct {
        vuint16_t DREQ1_EN:1;					 /*  */
        vuint16_t  :10;					 /*  */
        vuint16_t DREQ1:5;					 /* DMA Request Select */
    } B;
  } DREQ1;

  union {
    vuint16_t R;
      struct {
        vuint16_t DREQ2_EN:1;					 /*  */
        vuint16_t  :10;					 /*  */
        vuint16_t DREQ2:5;					 /* DMA Request Select */
    } B;
  } DREQ2;

  union {
    vuint16_t R;
      struct {
        vuint16_t DREQ3_EN:1;					 /*  */
        vuint16_t  :10;					 /*  */
        vuint16_t DREQ3:5;					 /* DMA Request Select */
    } B;
  } DREQ3;

};


/* ============================================================================
   =============================== Module: FCCU ===============================
   ============================================================================ */

struct FCCU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t FILTER_BYPASS:1;					 /*  */
        vuint32_t FILTER_WIDTH:2;					 /*  */
        vuint32_t  :19;					 /*  */
        vuint32_t DEBUG:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t OPS:2;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t OPR:5;					 /*  */
    } B;
  } CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CTRLK:32;					 /*  */
    } B;
  } CTRLK;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t FCCU_SET_AFTER_RESET:1;					 /*  */
        vuint32_t FCCU_SET_CLEAR:2;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t SM:1;					 /*  */
        vuint32_t PS:1;					 /*  */
        vuint32_t FOM:3;					 /*  */
        vuint32_t  :6;					 /*  */
    } B;
  } CFG;

  uint8_t FCCU_reserved0[16];
  union {
    vuint32_t R;
      struct {
        vuint32_t NCFC31:1;					 
        vuint32_t NCFC30:1;					 
        vuint32_t NCFC29:1;					 
        vuint32_t NCFC28:1;					 
        vuint32_t NCFC27:1;					 
        vuint32_t NCFC26:1;					 
        vuint32_t NCFC25:1;					 
        vuint32_t NCFC24:1;					 
        vuint32_t NCFC23:1;					 
        vuint32_t NCFC22:1;					 
        vuint32_t NCFC21:1;					 
        vuint32_t NCFC20:1;					 
        vuint32_t NCFC19:1;					 
        vuint32_t NCFC18:1;					 
        vuint32_t NCFC17:1;					 
        vuint32_t NCFC16:1;					 
        vuint32_t NCFC15:1;					 
        vuint32_t NCFC14:1;					 
        vuint32_t NCFC13:1;					 
        vuint32_t NCFC12:1;					 
        vuint32_t NCFC11:1;					 
        vuint32_t NCFC10:1;					 
        vuint32_t NCFC9:1;					 
        vuint32_t NCFC8:1;					 
        vuint32_t NCFC7:1;					 
        vuint32_t NCFC6:1;					 
        vuint32_t NCFC5:1;					 
        vuint32_t NCFC4:1;					 
        vuint32_t NCFC3:1;					 
        vuint32_t NCFC2:1;					 
        vuint32_t NCFC1:1;					 
        vuint32_t NCFC0:1;					 
    } B;
  } NCF_CFG[4];

  uint8_t FCCU_reserved1[32];
  union {
    vuint32_t R;
      struct {
        vuint32_t NCFSC15:2;					 
        vuint32_t NCFSC14:2;					 
        vuint32_t NCFSC13:2;					 
        vuint32_t NCFSC12:2;					 
        vuint32_t NCFSC11:2;					 
        vuint32_t NCFSC10:2;					 
        vuint32_t NCFSC9:2;					 
        vuint32_t NCFSC8:2;					 
        vuint32_t NCFSC7:2;					 
        vuint32_t NCFSC6:2;					 
        vuint32_t NCFSC5:2;					 
        vuint32_t NCFSC4:2;					 
        vuint32_t NCFSC3:2;					 
        vuint32_t NCFSC2:2;					 
        vuint32_t NCFSC1:2;					 
        vuint32_t NCFSC0:2;					 
    } B;
  } NCFS_CFG[8];

  uint8_t FCCU_reserved2[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t NCFS31:1;					 
        vuint32_t NCFS30:1;					 
        vuint32_t NCFS29:1;					 
        vuint32_t NCFS28:1;					 
        vuint32_t NCFS27:1;					 
        vuint32_t NCFS26:1;					 
        vuint32_t NCFS25:1;					 
        vuint32_t NCFS24:1;					 
        vuint32_t NCFS23:1;					 
        vuint32_t NCFS22:1;					 
        vuint32_t NCFS21:1;					 
        vuint32_t NCFS20:1;					 
        vuint32_t NCFS19:1;					 
        vuint32_t NCFS18:1;					 
        vuint32_t NCFS17:1;					 
        vuint32_t NCFS16:1;					 
        vuint32_t NCFS15:1;					 
        vuint32_t NCFS14:1;					 
        vuint32_t NCFS13:1;					 
        vuint32_t NCFS12:1;					 
        vuint32_t NCFS11:1;					 
        vuint32_t NCFS10:1;					 
        vuint32_t NCFS9:1;					 
        vuint32_t NCFS8:1;					 
        vuint32_t NCFS7:1;					 
        vuint32_t NCFS6:1;					 
        vuint32_t NCFS5:1;					 
        vuint32_t NCFS4:1;					 
        vuint32_t NCFS3:1;					 
        vuint32_t NCFS2:1;					 
        vuint32_t NCFS1:1;					 
        vuint32_t NCFS0:1;					 
    } B;
  } NCF_S[4];

  union {
    vuint32_t R;
      struct {
        vuint32_t NCFK:32;					 /*  */
    } B;
  } NCFK;

  union {
    vuint32_t R;
      struct {
        vuint32_t NCFE31:1;					 
        vuint32_t NCFE30:1;					 
        vuint32_t NCFE29:1;					 
        vuint32_t NCFE28:1;					 
        vuint32_t NCFE27:1;					 
        vuint32_t NCFE26:1;					 
        vuint32_t NCFE25:1;					 
        vuint32_t NCFE24:1;					 
        vuint32_t NCFE23:1;					 
        vuint32_t NCFE22:1;					 
        vuint32_t NCFE21:1;					 
        vuint32_t NCFE20:1;					 
        vuint32_t NCFE19:1;					 
        vuint32_t NCFE18:1;					 
        vuint32_t NCFE17:1;					 
        vuint32_t NCFE16:1;					 
        vuint32_t NCFE15:1;					 
        vuint32_t NCFE14:1;					 
        vuint32_t NCFE13:1;					 
        vuint32_t NCFE12:1;					 
        vuint32_t NCFE11:1;					 
        vuint32_t NCFE10:1;					 
        vuint32_t NCFE9:1;					 
        vuint32_t NCFE8:1;					 
        vuint32_t NCFE7:1;					 
        vuint32_t NCFE6:1;					 
        vuint32_t NCFE5:1;					 
        vuint32_t NCFE4:1;					 
        vuint32_t NCFE3:1;					 
        vuint32_t NCFE2:1;					 
        vuint32_t NCFE1:1;					 
        vuint32_t NCFE0:1;					 
    } B;
  } NCF_E[4];

  union {
    vuint32_t R;
      struct {
        vuint32_t NCFTOE31:1;					 
        vuint32_t NCFTOE30:1;					 
        vuint32_t NCFTOE29:1;					 
        vuint32_t NCFTOE28:1;					 
        vuint32_t NCFTOE27:1;					 
        vuint32_t NCFTOE26:1;					 
        vuint32_t NCFTOE25:1;					 
        vuint32_t NCFTOE24:1;					 
        vuint32_t NCFTOE23:1;					 
        vuint32_t NCFTOE22:1;					 
        vuint32_t NCFTOE21:1;					 
        vuint32_t NCFTOE20:1;					 
        vuint32_t NCFTOE19:1;					 
        vuint32_t NCFTOE18:1;					 
        vuint32_t NCFTOE17:1;					 
        vuint32_t NCFTOE16:1;					 
        vuint32_t NCFTOE15:1;					 
        vuint32_t NCFTOE14:1;					 
        vuint32_t NCFTOE13:1;					 
        vuint32_t NCFTOE12:1;					 
        vuint32_t NCFTOE11:1;					 
        vuint32_t NCFTOE10:1;					 
        vuint32_t NCFTOE9:1;					 
        vuint32_t NCFTOE8:1;					 
        vuint32_t NCFTOE7:1;					 
        vuint32_t NCFTOE6:1;					 
        vuint32_t NCFTOE5:1;					 
        vuint32_t NCFTOE4:1;					 
        vuint32_t NCFTOE3:1;					 
        vuint32_t NCFTOE2:1;					 
        vuint32_t NCFTOE1:1;					 
        vuint32_t NCFTOE0:1;					 
    } B;
  } NCF_TOE[4];

  union {
    vuint32_t R;
      struct {
        vuint32_t TO:32;					 /*  */
    } B;
  } NCF_TO;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :29;					 /*  */
        vuint32_t TO:3;					 /*  */
    } B;
  } CFG_TO;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t EIN1:1;					 /*  */
        vuint32_t EIN0:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t EOUT1:1;					 /*  */
        vuint32_t EOUT0:1;					 /*  */
    } B;
  } EINOUT;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t PhysicErrorPin:2;					 /*  */
        vuint32_t ESTAT:1;					 /*  */
        vuint32_t STATUS:3;					 /*  */
    } B;
  } STAT;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t NAFS:8;					 /*  */
    } B;
  } N2AF_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t AF_SRC:2;					 /*  */
        vuint32_t AFFS:8;					 /*  */
    } B;
  } A2FF_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t NF_SRC:2;					 /*  */
        vuint32_t NFFS:8;					 /*  */
    } B;
  } N2FF_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :23;					 /*  */
        vuint32_t FAFS:9;					 /*  */
    } B;
  } F2A_STATUS;

  uint8_t FCCU_reserved3[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :25;					 /*  */
        vuint32_t FNCFC:7;					 /*  */
    } B;
  } NCFF;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :29;					 /*  */
        vuint32_t NMI_STAT:1;					 /*  */
        vuint32_t ALRM_STAT:1;					 /*  */
        vuint32_t CFG_TO_STAT:1;					 /*  */
    } B;
  } IRQ_STAT;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :31;					 /*  */
        vuint32_t CFG_TO_IEN:1;					 /*  */
    } B;
  } IRQ_EN;

  union {
    vuint32_t R;
      struct {
        vuint32_t XTMR:32;					 /*  */
    } B;
  } XTMR;

  union {
    vuint32_t R;
      struct {
        vuint32_t VL3:1;					 /*  */
        vuint32_t FS3:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MCS3:4;					 /*  */
        vuint32_t VL2:1;					 /*  */
        vuint32_t FS2:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MCS2:4;					 /*  */
        vuint32_t VL1:1;					 /*  */
        vuint32_t FS1:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MCS1:4;					 /*  */
        vuint32_t VL0:1;					 /*  */
        vuint32_t FS0:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MCS0:4;					 /*  */
    } B;
  } MCS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :23;					 /*  */
        vuint32_t TRANSKEY:9;					 /*  */
    } B;
  } TRANS_LOCK;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :23;					 /*  */
        vuint32_t PERMNTKEY:9;					 /*  */
    } B;
  } PERMNT_LOCK;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :18;					 /*  */
        vuint32_t DELTA_T:14;					 /*  */
    } B;
  } DELTA_T;

  union {
    vuint32_t R;
      struct {
        vuint32_t IRQEN31:1;					 
        vuint32_t IRQEN30:1;					 
        vuint32_t IRQEN29:1;					 
        vuint32_t IRQEN28:1;					 
        vuint32_t IRQEN27:1;					 
        vuint32_t IRQEN26:1;					 
        vuint32_t IRQEN25:1;					 
        vuint32_t IRQEN24:1;					 
        vuint32_t IRQEN23:1;					 
        vuint32_t IRQEN22:1;					 
        vuint32_t IRQEN21:1;					 
        vuint32_t IRQEN20:1;					 
        vuint32_t IRQEN19:1;					 
        vuint32_t IRQEN18:1;					 
        vuint32_t IRQEN17:1;					 
        vuint32_t IRQEN16:1;					 
        vuint32_t IRQEN15:1;					 
        vuint32_t IRQEN14:1;					 
        vuint32_t IRQEN13:1;					 
        vuint32_t IRQEN12:1;					 
        vuint32_t IRQEN11:1;					 
        vuint32_t IRQEN10:1;					 
        vuint32_t IRQEN9:1;					 
        vuint32_t IRQEN8:1;					 
        vuint32_t IRQEN7:1;					 
        vuint32_t IRQEN6:1;					 
        vuint32_t IRQEN5:1;					 
        vuint32_t IRQEN4:1;					 
        vuint32_t IRQEN3:1;					 
        vuint32_t IRQEN2:1;					 
        vuint32_t IRQEN1:1;					 
        vuint32_t IRQEN0:1;					 
    } B;
  } IRQ_ALARM_EN[4];

  union {
    vuint32_t R;
      struct {
        vuint32_t NMIEN31:1;					 
        vuint32_t NMIEN30:1;					 
        vuint32_t NMIEN29:1;					 
        vuint32_t NMIEN28:1;					 
        vuint32_t NMIEN27:1;					 
        vuint32_t NMIEN26:1;					 
        vuint32_t NMIEN25:1;					 
        vuint32_t NMIEN24:1;					 
        vuint32_t NMIEN23:1;					 
        vuint32_t NMIEN22:1;					 
        vuint32_t NMIEN21:1;					 
        vuint32_t NMIEN20:1;					 
        vuint32_t NMIEN19:1;					 
        vuint32_t NMIEN18:1;					 
        vuint32_t NMIEN17:1;					 
        vuint32_t NMIEN16:1;					 
        vuint32_t NMIEN15:1;					 
        vuint32_t NMIEN14:1;					 
        vuint32_t NMIEN13:1;					 
        vuint32_t NMIEN12:1;					 
        vuint32_t NMIEN11:1;					 
        vuint32_t NMIEN10:1;					 
        vuint32_t NMIEN9:1;					 
        vuint32_t NMIEN8:1;					 
        vuint32_t NMIEN7:1;					 
        vuint32_t NMIEN6:1;					 
        vuint32_t NMIEN5:1;					 
        vuint32_t NMIEN4:1;					 
        vuint32_t NMIEN3:1;					 
        vuint32_t NMIEN2:1;					 
        vuint32_t NMIEN1:1;					 
        vuint32_t NMIEN0:1;					 
    } B;
  } NMI_EN[4];

  union {
    vuint32_t R;
      struct {
        vuint32_t EOUTEN31:1;					 
        vuint32_t EOUTEN30:1;					 
        vuint32_t EOUTEN29:1;					 
        vuint32_t EOUTEN28:1;					 
        vuint32_t EOUTEN27:1;					 
        vuint32_t EOUTEN26:1;					 
        vuint32_t EOUTEN25:1;					 
        vuint32_t EOUTEN24:1;					 
        vuint32_t EOUTEN23:1;					 
        vuint32_t EOUTEN22:1;					 
        vuint32_t EOUTEN21:1;					 
        vuint32_t EOUTEN20:1;					 
        vuint32_t EOUTEN19:1;					 
        vuint32_t EOUTEN18:1;					 
        vuint32_t EOUTEN17:1;					 
        vuint32_t EOUTEN16:1;					 
        vuint32_t EOUTEN15:1;					 
        vuint32_t EOUTEN14:1;					 
        vuint32_t EOUTEN13:1;					 
        vuint32_t EOUTEN12:1;					 
        vuint32_t EOUTEN11:1;					 
        vuint32_t EOUTEN10:1;					 
        vuint32_t EOUTEN9:1;					 
        vuint32_t EOUTEN8:1;					 
        vuint32_t EOUTEN7:1;					 
        vuint32_t EOUTEN6:1;					 
        vuint32_t EOUTEN5:1;					 
        vuint32_t EOUTEN4:1;					 
        vuint32_t EOUTEN3:1;					 
        vuint32_t EOUTEN2:1;					 
        vuint32_t EOUTEN1:1;					 
        vuint32_t EOUTEN0:1;					 
    } B;
  } EOUT_SIG_EN[4];

};


/* ============================================================================
   ================================ Module: FR ================================
   ============================================================================ */

struct FR_tag {
  union {
    vuint16_t R;
      struct {
        vuint16_t CHIVER:8;					 /*  */
        vuint16_t PEVER:8;					 /*  */
    } B;
  } MVR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MEN:1;					 /*  */
        vuint16_t SBFF:1;					 /* System Bus Failure Freeze */
        vuint16_t SCM:1;					 /*  */
        vuint16_t CHB:1;					 /*  */
        vuint16_t CHA:1;					 /*  */
        vuint16_t SFFE:1;					 /*  */
        vuint16_t ECCE:1;					 /*  */
        vuint16_t  :1;					 /* Reserved bit, will not be changed. Application must not write any value different from the reset value. */
        vuint16_t FUM:1;					 /*  */
        vuint16_t FAM:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t CLKSEL:1;					 /*  */
        vuint16_t BITRATE:3;					 /*  */
        vuint16_t  :1;					 /*  */
    } B;
  } MCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t SMBA:16;					 /* System Memory Base Address. This is the value of the system memory base address for the individual message buffers and sync frame table. This is the value of the system memory base address for the receive FIFO if the FIFO address mode bit FR_MCR[FAM] is set to 1. It is defines as a byte address. */
    } B;
  } SYMBADHR;

  union {
    vuint16_t R;
      struct {
        vuint16_t SMBA:12;					 /*  */
        vuint16_t  :4;					 /*  */
    } B;
  } SYMBADLR;

  union {
    vuint16_t R;
      struct {
        vuint16_t WMD:1;					 /*  */
        vuint16_t  :3;					 /*  */
        vuint16_t SEL:4;					 /*  */
        vuint16_t  :3;					 /*  */
        vuint16_t ENB:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t STBPSEL:2;					 /*  */
    } B;
  } STBSCR;

  uint8_t FR_reserved0[2];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t MBSEG2DS:7;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t MBSEG1DS:7;					 /*  */
    } B;
  } MBDSR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t LAST_MB_SEG1:6;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t LAST_MB_UTIL:6;					 /*  */
    } B;
  } MBSSUTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t INST:4;					 /*  */
        vuint16_t ADDR:11;					 /*  */
        vuint16_t DAD:1;					 /*  */
    } B;
  } PEDRAR;

  union {
    vuint16_t R;
      struct {
        vuint16_t DATA:16;					 /*  */
    } B;
  } PEDRDR;

  union {
    vuint16_t R;
      struct {
        vuint16_t WME:1;					 /*  */
        vuint16_t  :3;					 /*  */
        vuint16_t EOC_AP:2;					 /*  */
        vuint16_t ERC_AP:2;					 /*  */
        vuint16_t BSY_WMC:1;					 /*  */
        vuint16_t  :3;					 /*  */
        vuint16_t POCCMD:4;					 /*  */
    } B;
  } POCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MIF:1;					 /*  */
        vuint16_t PRIF:1;					 /*  */
        vuint16_t CHIF:1;					 /*  */
        vuint16_t WUPIF:1;					 /*  */
        vuint16_t FAFBIF:1;					 /*  */
        vuint16_t FAFAIF:1;					 /*  */
        vuint16_t RBIF:1;					 /*  */
        vuint16_t TBIF:1;					 /*  */
        vuint16_t MIE:1;					 /*  */
        vuint16_t PRIE:1;					 /*  */
        vuint16_t CHIE:1;					 /*  */
        vuint16_t WUPIE:1;					 /*  */
        vuint16_t FAFBIE:1;					 /*  */
        vuint16_t FAFAIE:1;					 /*  */
        vuint16_t RBIE:1;					 /*  */
        vuint16_t TBIE:1;					 /*  */
    } B;
  } GIFER;

  union {
    vuint16_t R;
      struct {
        vuint16_t FATL_IF:1;					 /*  */
        vuint16_t INTL_IF:1;					 /*  */
        vuint16_t ILCF_IF:1;					 /*  */
        vuint16_t CSA_IF:1;					 /*  */
        vuint16_t MRC_IF:1;					 /*  */
        vuint16_t MOC_IF:1;					 /*  */
        vuint16_t CCL_IF:1;					 /*  */
        vuint16_t MXS_IF:1;					 /*  */
        vuint16_t MTX_IF:1;					 /*  */
        vuint16_t LTXB_IF:1;					 /*  */
        vuint16_t LTXA_IF:1;					 /*  */
        vuint16_t TBVB_IF:1;					 /*  */
        vuint16_t TBVA_IF:1;					 /*  */
        vuint16_t TI2_IF:1;					 /*  */
        vuint16_t TI1_IF:1;					 /*  */
        vuint16_t CYS_IF:1;					 /*  */
    } B;
  } PIFR0;

  union {
    vuint16_t R;
      struct {
        vuint16_t EMC_IF:1;					 /*  */
        vuint16_t IPC_IF:1;					 /*  */
        vuint16_t PECF_IF:1;					 /*  */
        vuint16_t PSC_IF:1;					 /*  */
        vuint16_t SSI3_IF:1;					 /*  */
        vuint16_t SSI2_IF:1;					 /*  */
        vuint16_t SSI1_IF:1;					 /*  */
        vuint16_t SSI0_IF:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t EVT_IF:1;					 /*  */
        vuint16_t ODT_IF:1;					 /*  */
        vuint16_t  :4;					 /*  */
    } B;
  } PIFR1;

  union {
    vuint16_t R;
      struct {
        vuint16_t FATL_IE:1;					 /*  */
        vuint16_t INTL_IE:1;					 /*  */
        vuint16_t ILCF_IE:1;					 /*  */
        vuint16_t CSA_IE:1;					 /*  */
        vuint16_t MRC_IE:1;					 /*  */
        vuint16_t MOC_IE:1;					 /*  */
        vuint16_t CCL_IE:1;					 /*  */
        vuint16_t MXS_IE:1;					 /*  */
        vuint16_t MTX_IE:1;					 /*  */
        vuint16_t LTXB_IE:1;					 /*  */
        vuint16_t LTXA_IE:1;					 /*  */
        vuint16_t TBVB_IE:1;					 /*  */
        vuint16_t TBVA_IE:1;					 /*  */
        vuint16_t TI2_IE:1;					 /*  */
        vuint16_t TI1_IE:1;					 /*  */
        vuint16_t CYS_IE:1;					 /*  */
    } B;
  } PIER0;

  union {
    vuint16_t R;
      struct {
        vuint16_t EMC_IE:1;					 /*  */
        vuint16_t IPC_IE:1;					 /*  */
        vuint16_t PECF_IE:1;					 /*  */
        vuint16_t PSC_IE:1;					 /*  */
        vuint16_t SSI3_IE:1;					 /*  */
        vuint16_t SSI2_IE:1;					 /*  */
        vuint16_t SSI1_IE:1;					 /*  */
        vuint16_t SSI0_IE:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t EVT_IE:1;					 /*  */
        vuint16_t ODT_IE:1;					 /*  */
        vuint16_t  :4;					 /*  */
    } B;
  } PIER1;

  union {
    vuint16_t R;
      struct {
        vuint16_t FRLB_EF:1;					 /*  */
        vuint16_t FRLA_EF:1;					 /*  */
        vuint16_t PCMI_EF:1;					 /*  */
        vuint16_t FOVB_EF:1;					 /*  */
        vuint16_t FOVA_EF:1;					 /*  */
        vuint16_t MBS_EF:1;					 /*  */
        vuint16_t MBU_EF:1;					 /*  */
        vuint16_t LCK_EF:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t SBCF_EF:1;					 /*  */
        vuint16_t FID_EF:1;					 /*  */
        vuint16_t DPL_EF:1;					 /*  */
        vuint16_t SPL_EF:1;					 /*  */
        vuint16_t NML_EF:1;					 /*  */
        vuint16_t NMF_EF:1;					 /*  */
        vuint16_t ILSA_EF:1;					 /*  */
    } B;
  } CHIERFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t TBIVEC:6;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t RBIVEC:6;					 /*  */
    } B;
  } MBIVEC;

  union {
    vuint16_t R;
      struct {
        vuint16_t STATUS_ERR_CNT:16;					 /*  */
    } B;
  } CASERCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t STATUS_ERR_CNT:16;					 /*  */
    } B;
  } CBSERCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t ERRMODE:2;					 /*  */
        vuint16_t SLOTMODE:2;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t PROTSTATE:3;					 /*  */
        vuint16_t STARTUPSTATE:4;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t WAKEUPSTATUS:3;					 /*  */
    } B;
  } PSR0;

  union {
    vuint16_t R;
      struct {
        vuint16_t CSAA:1;					 /*  */
        vuint16_t CSP:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t REMCSAT:5;					 /*  */
        vuint16_t CPN:1;					 /*  */
        vuint16_t HHR:1;					 /*  */
        vuint16_t FRZ:1;					 /*  */
        vuint16_t APTAC:5;					 /*  */
    } B;
  } PSR1;

  union {
    vuint16_t R;
      struct {
        vuint16_t NBVB:1;					 /*  */
        vuint16_t NSEB:1;					 /*  */
        vuint16_t STCB:1;					 /*  */
        vuint16_t SBVB:1;					 /*  */
        vuint16_t SSEB:1;					 /*  */
        vuint16_t MTB:1;					 /*  */
        vuint16_t NBVA:1;					 /*  */
        vuint16_t NSEA:1;					 /*  */
        vuint16_t STCA:1;					 /*  */
        vuint16_t SBVA:1;					 /*  */
        vuint16_t SSEA:1;					 /*  */
        vuint16_t MTA:1;					 /*  */
        vuint16_t CLKCORRFAILCNT:4;					 /*  */
    } B;
  } PSR2;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t WUB:1;					 /*  */
        vuint16_t ABVB:1;					 /*  */
        vuint16_t AACB:1;					 /*  */
        vuint16_t ACEB:1;					 /*  */
        vuint16_t ASEB:1;					 /*  */
        vuint16_t AVFB:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t WUA:1;					 /*  */
        vuint16_t ABVA:1;					 /*  */
        vuint16_t AACA:1;					 /*  */
        vuint16_t ACEA:1;					 /*  */
        vuint16_t ASEA:1;					 /*  */
        vuint16_t AVFA:1;					 /*  */
    } B;
  } PSR3;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t MTCT:14;					 /*  */
    } B;
  } MTCTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :10;					 /*  */
        vuint16_t CYCCNT:6;					 /*  */
    } B;
  } CYCTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t SLOTCNTA:11;					 /*  */
    } B;
  } SLTCTAR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t SLOTCNTB:11;					 /*  */
    } B;
  } SLTCTBR;

  union {
    vuint16_t R;
      struct {
        vuint16_t RATECORR:16;					 /*  */
    } B;
  } RTCORVR;

  union {
    vuint16_t R;
      struct {
        vuint16_t OFFSETCORR:16;					 /*  */
    } B;
  } OFCORVR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :8;					 /*  */
        vuint16_t MIF:1;					 /*  */
        vuint16_t PRIF:1;					 /*  */
        vuint16_t CHIF:1;					 /*  */
        vuint16_t WUPIF:1;					 /*  */
        vuint16_t FAFBIF:1;					 /*  */
        vuint16_t FAFAIF:1;					 /*  */
        vuint16_t RBIF:1;					 /*  */
        vuint16_t TBIF:1;					 /*  */
    } B;
  } CIFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :8;					 /*  */
        vuint16_t TIMEOUT:8;					 /*  */
    } B;
  } SYMATOR;

  union {
    vuint16_t R;
      struct {
        vuint16_t SFEVB:4;					 /*  */
        vuint16_t SFEVA:4;					 /*  */
        vuint16_t SFODB:4;					 /*  */
        vuint16_t SFODA:4;					 /*  */
    } B;
  } SFCNTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t SFT_OFFSET:15;					 /*  */
        vuint16_t  :1;					 /*  */
    } B;
  } SFTOR;

  union {
    vuint16_t R;
      struct {
        vuint16_t ELKT:1;					 /*  */
        vuint16_t OLKT:1;					 /*  */
        vuint16_t CYCNUM:6;					 /*  */
        vuint16_t ELKS:1;					 /*  */
        vuint16_t OLKS:1;					 /*  */
        vuint16_t EVAL:1;					 /*  */
        vuint16_t OVAL:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t OPT:1;					 /*  */
        vuint16_t SDVEN:1;					 /*  */
        vuint16_t SIDEN:1;					 /*  */
    } B;
  } SFTCCSR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t SYNFRID:10;					 /*  */
    } B;
  } SFIDRFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t FVAL:10;					 /*  */
    } B;
  } SFIDAFVR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t FMSK:10;					 /*  */
    } B;
  } SFIDAFMR;

  union {
    vuint16_t R;
      struct {
        vuint16_t NMVP:16;					 /*  */
    } B;
  } NMVR[6];

  union {
    vuint16_t R;
      struct {
        vuint16_t  :12;					 /*  */
        vuint16_t NMVL:4;					 /*  */
    } B;
  } NMVLR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t T2_CFG:1;					 /*  */
        vuint16_t T2_REP:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t T2SP:1;					 /*  */
        vuint16_t T2TR:1;					 /*  */
        vuint16_t T2ST:1;					 /*  */
        vuint16_t  :3;					 /*  */
        vuint16_t T1_REP:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t T1SP:1;					 /*  */
        vuint16_t T1TR:1;					 /*  */
        vuint16_t T1ST:1;					 /*  */
    } B;
  } TICCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t T1_CYC_VAL:6;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t T1_CYC_MSK:6;					 /*  */
    } B;
  } TI1CYSR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t T1_MTOFFSET:14;					 /*  */
    } B;
  } TI1MTOR;

  union {
    vuint16_t R;
      struct {
        vuint16_t T2_CYC_VAL_with_T2_CYC_MSK_or_T2_MTCNT:16;					 /* As shown below, The content of this register depends on the value of the T2_CFG bit in the Timer Configuration and Control Register (FR_TICCR).The register bit fields would be T2_CYC_VAL and T2_CYC_MSK if FR_TICCR[T2_CFG]=0. The register bit field would be T2_MTCNT if FR_TICCR[T2_CFG]=1. FR_TICCR[T2_CFG] Sub-Field Description 0 0-1 Reserved Reserved bit, will not be changed. Application must not write any value different from the reset value. 2-7 T2_CYC_VAL Timer T2 Cycle Filter Value. This field defines the cycle filter value for timer T2. 8-9 Reserved Reserved bit, will not be changed. Application must not write any value different from the reset value. 10-15 T2_CYC_MSK Timer T2 Cycle Filter Mask. This field defines the cycle filter mask for timer T2. 1 0-15 T2_MTCNT[31:16] Timer T2 Macrotick High Word. This field defines the high word of the macrotick count for timer T2. */
    } B;
  } TI2CR0;

  union {
    vuint16_t R;
      struct {
        vuint16_t T2_MOFFSET_or_T2_MTCNT:16;					 /*  */
    } B;
  } TI2CR1;

  union {
    vuint16_t R;
      struct {
        vuint16_t WMD:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t SEL:2;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t SLOTNUMBER:11;					 /*  */
    } B;
  } SSSR;

  union {
    vuint16_t R;
      struct {
        vuint16_t WMD:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t SEL:2;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t CNTCFG:2;					 /*  */
        vuint16_t MCY:1;					 /*  */
        vuint16_t VFR:1;					 /*  */
        vuint16_t SYF:1;					 /*  */
        vuint16_t NUF:1;					 /*  */
        vuint16_t SUF:1;					 /*  */
        vuint16_t STATUSMASK:4;					 /*  */
    } B;
  } SSCCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t VFB:1;					 /*  */
        vuint16_t SYB:1;					 /*  */
        vuint16_t NFB:1;					 /*  */
        vuint16_t SUB:1;					 /*  */
        vuint16_t SEB:1;					 /*  */
        vuint16_t CEB:1;					 /*  */
        vuint16_t BVB:1;					 /*  */
        vuint16_t TCB:1;					 /*  */
        vuint16_t VFA:1;					 /*  */
        vuint16_t SYA:1;					 /*  */
        vuint16_t NFA:1;					 /*  */
        vuint16_t SUA:1;					 /*  */
        vuint16_t SEA:1;					 /*  */
        vuint16_t CEA:1;					 /*  */
        vuint16_t BVA:1;					 /*  */
        vuint16_t TCA:1;					 /*  */
    } B;
  } SSR[8];

  union {
    vuint16_t R;
      struct {
        vuint16_t SLOTSTATUSCNT:16;					 /*  */
    } B;
  } SSCR[4];

  union {
    vuint16_t R;
      struct {
        vuint16_t MTE:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t CYCCNTMSK:6;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t CYCCNTVAL:6;					 /*  */
    } B;
  } MTSACFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MTE:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t CYCCNTMSK:6;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t CYCCNTVAL:6;					 /*  */
    } B;
  } MTSBCFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t WMD:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t SEL:2;					 /*  */
        vuint16_t  :5;					 /*  */
        vuint16_t RSBIDX:7;					 /* RSBIDXA1/RSBIDXA2/RSBIDXB1/RSBIDXB2- Receive Shadow Buffer Index */
    } B;
  } RSBIR;

  union {
    vuint16_t R;
      struct {
        vuint16_t WM:8;					 /* WMA/WMB - Watermark */
        vuint16_t  :7;					 /*  */
        vuint16_t SEL:1;					 /*  */
    } B;
  } RFWMSR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t SIDX:10;					 /* SIDXA/SIDXB - Start Index */
    } B;
  } RFSIR;

  union {
    vuint16_t R;
      struct {
        vuint16_t FIFO_DEPTH:8;					 /* FIFO_DEPTHA/FIFO_DEPTHB - FIFO Depth */
        vuint16_t  :1;					 /*  */
        vuint16_t ENTRY_SIZE:7;					 /* ENTRY_SIZEA/ENTRY_SIZEB - Entry Size */
    } B;
  } RFDSR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t RDIDX:10;					 /*  */
    } B;
  } RFARIR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t RDIDX:10;					 /*  */
    } B;
  } RFBRIR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MIDAFVAL:16;					 /* MIDAFVALA/MIDAFVALB - Message ID Acceptance Filter Value */
    } B;
  } RFMIDAFVR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MIDAFMSK:16;					 /* MIDAFMSKA/MIDAFMSKB - Message ID Acceptance Filter Mask */
    } B;
  } RFMIDAFMR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t FIDRFVAL:11;					 /* FIDRFVALA/FIDRFVALB - Frame ID Rejection Filter Value */
    } B;
  } RFFIDRFVR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t FIDRFMSK:11;					 /*  */
    } B;
  } RFFIDRFMR;

  union {
    vuint16_t R;
      struct {
        vuint16_t WMD:1;					 /*  */
        vuint16_t IBD:1;					 /*  */
        vuint16_t SEL:2;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t SID:11;					 /* Slot ID */
    } B;
  } RFRFCFR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t F3MD:1;					 /*  */
        vuint16_t F2MD:1;					 /*  */
        vuint16_t F1MD:1;					 /*  */
        vuint16_t F0MD:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t F3EN:1;					 /*  */
        vuint16_t F2EN:1;					 /*  */
        vuint16_t F1EN:1;					 /*  */
        vuint16_t F0EN:1;					 /*  */
    } B;
  } RFRFCTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t LASTDYNTXSLOTA:11;					 /*  */
    } B;
  } LDTXSLAR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t LASTDYNTXSLOTB:11;					 /*  */
    } B;
  } LDTXSLBR;

  union {
    vuint16_t R;
      struct {
        vuint16_t action_point_offset:6;					 /*  */
        vuint16_t static_slot_length:10;					 /*  */
    } B;
  } PCR0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t macro_after_first_static_slot:14;					 /*  */
    } B;
  } PCR1;

  union {
    vuint16_t R;
      struct {
        vuint16_t minislot_after_action_point:6;					 /*  */
        vuint16_t number_of_static_slots:10;					 /* gNumberOfStaticSlots */
    } B;
  } PCR2;

  union {
    vuint16_t R;
      struct {
        vuint16_t wakeup_symbol_rx_low:6;					 /*  */
        vuint16_t minislot_action_point_offset:5;					 /*  */
        vuint16_t coldstart_attempts:5;					 /*  */
    } B;
  } PCR3;

  union {
    vuint16_t R;
      struct {
        vuint16_t cas_rx_low_max:7;					 /*  */
        vuint16_t wakeup_symbol_rx_window:9;					 /*  */
    } B;
  } PCR4;

  union {
    vuint16_t R;
      struct {
        vuint16_t tss_transmitter:4;					 /*  */
        vuint16_t wakeup_symbol_tx_low:6;					 /*  */
        vuint16_t wakeup_symbol_rx_idle:6;					 /*  */
    } B;
  } PCR5;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t symbol_window_after_action_point:8;					 /*  */
        vuint16_t macro_initial_offset_a:7;					 /*  */
    } B;
  } PCR6;

  union {
    vuint16_t R;
      struct {
        vuint16_t decoding_correction_b:9;					 /*  */
        vuint16_t micro_per_macro_nom_half:7;					 /*  */
    } B;
  } PCR7;

  union {
    vuint16_t R;
      struct {
        vuint16_t max_without_clock_correction_fatal:4;					 /*  */
        vuint16_t max_without_clock_correction_passive:4;					 /*  */
        vuint16_t wakeup_symbol_tx_idle:8;					 /*  */
    } B;
  } PCR8;

  union {
    vuint16_t R;
      struct {
        vuint16_t minislot_exists:1;					 /*  */
        vuint16_t symbol_window_exists:1;					 /*  */
        vuint16_t offset_correction_out:14;					 /*  */
    } B;
  } PCR9;

  union {
    vuint16_t R;
      struct {
        vuint16_t single_slot_enabled:1;					 /*  */
        vuint16_t wakeup_channel:1;					 /*  */
        vuint16_t macro_per_cycle:14;					 /*  */
    } B;
  } PCR10;

  union {
    vuint16_t R;
      struct {
        vuint16_t key_slot_used_for_startup:1;					 /*  */
        vuint16_t key_slot_used_for_sync:1;					 /*  */
        vuint16_t offset_correction_start:14;					 /*  */
    } B;
  } PCR11;

  union {
    vuint16_t R;
      struct {
        vuint16_t allow_passive_to_active:5;					 /*  */
        vuint16_t key_slot_header_crc:11;					 /*  */
    } B;
  } PCR12;

  union {
    vuint16_t R;
      struct {
        vuint16_t first_minislot_action_point_offset:6;					 /*  */
        vuint16_t static_slot_after_action_point:10;					 /*  */
    } B;
  } PCR13;

  union {
    vuint16_t R;
      struct {
        vuint16_t rate_correction_out:11;					 /*  */
        vuint16_t listen_timeout:5;					 /*  */
    } B;
  } PCR14;

  union {
    vuint16_t R;
      struct {
        vuint16_t listen_timeout:16;					 /*  */
    } B;
  } PCR15;

  union {
    vuint16_t R;
      struct {
        vuint16_t macro_initial_offset_b:7;					 /*  */
        vuint16_t noise_listen_timeout:9;					 /*  */
    } B;
  } PCR16;

  union {
    vuint16_t R;
      struct {
        vuint16_t noise_listen_timeout:16;					 /*  */
    } B;
  } PCR17;

  union {
    vuint16_t R;
      struct {
        vuint16_t wakeup_pattern:6;					 /*  */
        vuint16_t key_slot_id:10;					 /*  */
    } B;
  } PCR18;

  union {
    vuint16_t R;
      struct {
        vuint16_t decoding_correction_a:9;					 /*  */
        vuint16_t payload_length_static:7;					 /*  */
    } B;
  } PCR19;

  union {
    vuint16_t R;
      struct {
        vuint16_t micro_initial_offset_b:8;					 /*  */
        vuint16_t micro_initial_offset_a:8;					 /*  */
    } B;
  } PCR20;

  union {
    vuint16_t R;
      struct {
        vuint16_t extern_rate_correction:3;					 /*  */
        vuint16_t latest_tx:13;					 /*  */
    } B;
  } PCR21;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /* Reserved bit, will not be changed. Application must not write any value different from the reset value. */
        vuint16_t comp_accepted_startup_range_a:11;					 /*  */
        vuint16_t micro_per_cycle:4;					 /*  */
    } B;
  } PCR22;

  union {
    vuint16_t R;
      struct {
        vuint16_t micro_per_cycle:16;					 /*  */
    } B;
  } PCR23;

  union {
    vuint16_t R;
      struct {
        vuint16_t cluster_drift_damping:5;					 /*  */
        vuint16_t max_payload_length_dynamic:7;					 /*  */
        vuint16_t micro_per_cycle_min:4;					 /*  */
    } B;
  } PCR24;

  union {
    vuint16_t R;
      struct {
        vuint16_t micro_per_cycle_min:16;					 /*  */
    } B;
  } PCR25;

  union {
    vuint16_t R;
      struct {
        vuint16_t allow_halt_due_to_clock:1;					 /*  */
        vuint16_t comp_accepted_startup_range_b:11;					 /*  */
        vuint16_t micro_per_cycle_max:4;					 /*  */
    } B;
  } PCR26;

  union {
    vuint16_t R;
      struct {
        vuint16_t micro_per_cycle_max:16;					 /*  */
    } B;
  } PCR27;

  union {
    vuint16_t R;
      struct {
        vuint16_t dynamic_slot_idle_phase:2;					 /*  */
        vuint16_t macro_after_offset_correction:14;					 /*  */
    } B;
  } PCR28;

  union {
    vuint16_t R;
      struct {
        vuint16_t extern_offset_correction:3;					 /*  */
        vuint16_t minislots_max:13;					 /*  */
    } B;
  } PCR29;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :12;					 /*  */
        vuint16_t sync_node_max:4;					 /*  */
    } B;
  } PCR30;

  uint8_t FR_reserved1[4];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t TIM2_EE:1;					 /*  */
        vuint16_t TIM1_EE:1;					 /*  */
        vuint16_t CYC_EE:1;					 /*  */
    } B;
  } PEOER;

  uint8_t FR_reserved2[2];
  union {
    vuint16_t R;
      struct {
        vuint16_t SDO:16;					 /* SDOA/SDOB - Start Data Field Offset */
    } B;
  } RFSDOR;

  union {
    vuint16_t R;
      struct {
        vuint16_t SMBA:16;					 /*  */
    } B;
  } RFSYMBADHR;

  union {
    vuint16_t R;
      struct {
        vuint16_t SMBA:12;					 /*  */
        vuint16_t  :4;					 /*  */
    } B;
  } RFSYMBADLR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t PTD:14;					 /*  */
    } B;
  } RFPTR;

  union {
    vuint16_t R;
      struct {
        vuint16_t FLB_or_PCB:8;					 /*  */
        vuint16_t FLA_or_PCA:8;					 /*  */
    } B;
  } RFFLPCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t LRNE_OF:1;					 /*  */
        vuint16_t LRCE_OF:1;					 /*  */
        vuint16_t DRNE_OF:1;					 /*  */
        vuint16_t DRCE_OF:1;					 /*  */
        vuint16_t LRNE_IF:1;					 /*  */
        vuint16_t LRCE_IF:1;					 /*  */
        vuint16_t DRNE_IF:1;					 /*  */
        vuint16_t DRCE_IF:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t LRNE_IE:1;					 /*  */
        vuint16_t LRCE_IE:1;					 /*  */
        vuint16_t DRNE_IE:1;					 /*  */
        vuint16_t DRCE_IE:1;					 /*  */
    } B;
  } EEIFER;

  union {
    vuint16_t R;
      struct {
        vuint16_t BSY:1;					 /*  */
        vuint16_t  :5;					 /*  */
        vuint16_t ERS:2;					 /*  */
        vuint16_t  :3;					 /*  */
        vuint16_t ERM:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t EIM:1;					 /*  */
        vuint16_t EIE:1;					 /*  */
    } B;
  } EERICR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MID:1;					 /*  */
        vuint16_t BANK:3;					 /*  */
        vuint16_t ADDR:12;					 /*  */
    } B;
  } EERAR;

  union {
    vuint16_t R;
      struct {
        vuint16_t DATA:16;					 /*  */
    } B;
  } EERDR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :11;					 /*  */
        vuint16_t CODE:5;					 /*  */
    } B;
  } EERCR;

  union {
    vuint16_t R;
      struct {
        vuint16_t MID:1;					 /*  */
        vuint16_t BANK:3;					 /*  */
        vuint16_t ADDR:12;					 /*  */
    } B;
  } EEIAR;

  union {
    vuint16_t R;
      struct {
        vuint16_t DATA:16;					 /*  */
    } B;
  } EEIDR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :11;					 /*  */
        vuint16_t CODE:5;					 /*  */
    } B;
  } EEICR;

  uint8_t FR_reserved3[1792];
  struct {
    union {
      vuint16_t R;
        struct {
          vuint16_t  :3;					 /*  */
          vuint16_t MTD:1;					 /*  */
          vuint16_t CMT:1;					 /*  */
          vuint16_t EDT:1;					 /*  */
          vuint16_t LCKT:1;					 /*  */
          vuint16_t MBIE:1;					 /*  */
          vuint16_t  :3;					 /*  */
          vuint16_t DUP:1;					 /*  */
          vuint16_t DVAL:1;					 /*  */
          vuint16_t EDS:1;					 /*  */
          vuint16_t LCKS:1;					 /*  */
          vuint16_t MBIF:1;					 /*  */
      } B;
    } MBCCSR;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t MTM:1;					 /*  */
          vuint16_t CHA:1;					 /*  */
          vuint16_t CHB:1;					 /*  */
          vuint16_t CCFE:1;					 /*  */
          vuint16_t CCFMSK:6;					 /*  */
          vuint16_t CCFVAL:6;					 /*  */
      } B;
    } MBCCFR;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t  :5;					 /*  */
          vuint16_t FID:11;					 /*  */
      } B;
    } MBFIDR;
  
    union {
      vuint16_t R;
        struct {
          vuint16_t  :9;					 /*  */
          vuint16_t MBIDX:7;					 /*  */
      } B;
    } MBIDXR;
  } CHANNEL[64];

  uint8_t FR_reserved4[1536];
  union {
    vuint16_t R;
      struct {
        vuint16_t MBDO:16;					 /*  */
    } B;
  } MBDOR[68];

  uint8_t FR_reserved5[8];
  union {
    vuint16_t R;
      struct {
        vuint16_t LEETD:16;					 /*  */
    } B;
  } LEETR[6];

};


/* ============================================================================
   ============================= Module: FlexPWM ==============================
   ============================================================================ */

struct FlexPWM_tag {
  union {
    vuint16_t R;
      struct {
        vuint16_t CNT:16;					 /* Count */
    } B;
  } SUB0_CNT;

  union {
    vuint16_t R;
      struct {
        vuint16_t INIT:16;					 /* Initial count */
    } B;
  } SUB0_INIT;

  union {
    vuint16_t R;
      struct {
        vuint16_t DBGEN:1;					 /* Debug Enable */
        vuint16_t  :1;					 /*  */
        vuint16_t INDEP:1;					 /* Independent or Complementary Pair Operation */
        vuint16_t PWM23_INIT:1;					 /* PWM23 Initial Value */
        vuint16_t PWM45_INIT:1;					 /* PWM45 Initial Value */
        vuint16_t PWMX_INIT:1;					 /* PWMX Initial Value */
        vuint16_t INIT_SEL:2;					 /* Initialization Control Select */
        vuint16_t FRCEN:1;					 /* Force Initialization Enable */
        vuint16_t FORCE:1;					 /* Force Initialization */
        vuint16_t FORCE_SEL:3;					 /* Force Source Select */
        vuint16_t RELOAD_SEL:1;					 /* Reload Source Select */
        vuint16_t CLK_SEL:2;					 /* Clock Source Select */
    } B;
  } SUB0_CTRL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t LDFQ:4;					 /* Load Frequency */
        vuint16_t HALF:1;					 /* Half Cycle Reload */
        vuint16_t FULL:1;					 /* Full Cycle Reload */
        vuint16_t DT:2;					 /* Deadtime */
        vuint16_t  :1;					 /*  */
        vuint16_t PRSC:3;					 /* Prescaler */
        vuint16_t PHSSHFT:1;					 /* Phase Shift Mode Enable */
        vuint16_t LDMOD:1;					 /* Load Mode Select */
        vuint16_t  :1;					 /*  */
        vuint16_t DBLEN:1;					 /* Double Switching Enable */
    } B;
  } SUB0_CTRL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL0:16;					 /* Value 0 */
    } B;
  } SUB0_VAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL1:16;					 /* Value 1 */
    } B;
  } SUB0_VAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL2:16;					 /* Value 2 */
    } B;
  } SUB0_VAL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL3:16;					 /* Value 3 */
    } B;
  } SUB0_VAL3;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL4:16;					 /*  */
    } B;
  } SUB0_VAL4;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL5:16;					 /*  */
    } B;
  } SUB0_VAL5;

  uint8_t FlexPWM_reserved0[4];
  union {
    vuint16_t R;
      struct {
        vuint16_t PWMA_IN:1;					 /* PWMA Input */
        vuint16_t PWMB_IN:1;					 /*  */
        vuint16_t PWMX_IN:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t POLA:1;					 /*  */
        vuint16_t POLB:1;					 /*  */
        vuint16_t POLX:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t PWMAFS:2;					 /* PWMA Fault State */
        vuint16_t PWMBFS:2;					 /* PWMB Fault State */
        vuint16_t PWMXFS:2;					 /* PWMX Fault State */
    } B;
  } SUB0_OCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t RUF:1;					 /*  */
        vuint16_t REF:1;					 /*  */
        vuint16_t RF:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CFX1:1;					 /*  */
        vuint16_t CFX0:1;					 /*  */
        vuint16_t CMPF:6;					 /*  */
    } B;
  } SUB0_STS;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t REIE:1;					 /*  */
        vuint16_t RIE:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1IE:1;					 /*  */
        vuint16_t CX0IE:1;					 /*  */
        vuint16_t CMPIE:6;					 /*  */
    } B;
  } SUB0_INTEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t VALDE:1;					 /*  */
        vuint16_t FAND:1;					 /*  */
        vuint16_t CAPTDE:2;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1DE:1;					 /*  */
        vuint16_t CX0DE:1;					 /*  */
    } B;
  } SUB0_DMAEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :10;					 /*  */
        vuint16_t OUT_TRIG_EN:6;					 /*  */
    } B;
  } SUB0_TCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t DISX:4;					 /*  */
        vuint16_t DISB:4;					 /*  */
        vuint16_t DISA:4;					 /*  */
    } B;
  } SUB0_DISMAP;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT0:11;					 /*  */
    } B;
  } SUB0_DTCNT0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT1:11;					 /*  */
    } B;
  } SUB0_DTCNT1;

  uint8_t FlexPWM_reserved1[8];
  union {
    vuint16_t R;
      struct {
        vuint16_t CX1CNT:3;					 /*  */
        vuint16_t CX0CNT:3;					 /*  */
        vuint16_t CFXWM:2;					 /*  */
        vuint16_t EDGCNTX_EN:1;					 /*  */
        vuint16_t INPSELX:1;					 /*  */
        vuint16_t EDGX1:2;					 /*  */
        vuint16_t EDGX0:2;					 /*  */
        vuint16_t ONESHOTX:1;					 /*  */
        vuint16_t ARMX:1;					 /*  */
    } B;
  } SUB0_CAPTCTRLX;

  union {
    vuint16_t R;
      struct {
        vuint16_t EDGCNTX:8;					 /*  */
        vuint16_t EDGCMPX:8;					 /*  */
    } B;
  } SUB0_CAPTCMPX;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL0:16;					 /*  */
    } B;
  } SUB0_CVAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL0CYC:3;					 /* CVAL0 Cycle */
    } B;
  } SUB0_CVAL0CYC;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL1:16;					 /*  */
    } B;
  } SUB0_CVAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL1CYC:3;					 /* CVAL1 Cycle */
    } B;
  } SUB0_CVAL1CYC;

  uint8_t FlexPWM_reserved2[20];
  union {
    vuint16_t R;
      struct {
        vuint16_t CNT:16;					 /* Count */
    } B;
  } SUB1_CNT;

  union {
    vuint16_t R;
      struct {
        vuint16_t INIT:16;					 /* Initial count */
    } B;
  } SUB1_INIT;

  union {
    vuint16_t R;
      struct {
        vuint16_t DBGEN:1;					 /* Debug Enable */
        vuint16_t  :1;					 /*  */
        vuint16_t INDEP:1;					 /* Independent or Complementary Pair Operation */
        vuint16_t PWM23_INIT:1;					 /* PWM23 Initial Value */
        vuint16_t PWM45_INIT:1;					 /* PWM45 Initial Value */
        vuint16_t PWMX_INIT:1;					 /* PWMX Initial Value */
        vuint16_t INIT_SEL:2;					 /* Initialization Control Select */
        vuint16_t FRCEN:1;					 /* Force Initialization Enable */
        vuint16_t FORCE:1;					 /* Force Initialization */
        vuint16_t FORCE_SEL:3;					 /* Force Source Select */
        vuint16_t RELOAD_SEL:1;					 /* Reload Source Select */
        vuint16_t CLK_SEL:2;					 /* Clock Source Select */
    } B;
  } SUB1_CTRL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t LDFQ:4;					 /* Load Frequency */
        vuint16_t HALF:1;					 /* Half Cycle Reload */
        vuint16_t FULL:1;					 /* Full Cycle Reload */
        vuint16_t DT:2;					 /* Deadtime */
        vuint16_t  :1;					 /*  */
        vuint16_t PRSC:3;					 /* Prescaler */
        vuint16_t PHSSHFT:1;					 /* Phase Shift Mode Enable */
        vuint16_t LDMOD:1;					 /* Load Mode Select */
        vuint16_t  :1;					 /*  */
        vuint16_t DBLEN:1;					 /* Double Switching Enable */
    } B;
  } SUB1_CTRL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL0:16;					 /* Value 0 */
    } B;
  } SUB1_VAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL1:16;					 /* Value 1 */
    } B;
  } SUB1_VAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL2:16;					 /* Value 2 */
    } B;
  } SUB1_VAL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL3:16;					 /* Value 3 */
    } B;
  } SUB1_VAL3;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL4:16;					 /*  */
    } B;
  } SUB1_VAL4;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL5:16;					 /*  */
    } B;
  } SUB1_VAL5;

  uint8_t FlexPWM_reserved3[4];
  union {
    vuint16_t R;
      struct {
        vuint16_t PWMA_IN:1;					 /* PWMA Input */
        vuint16_t PWMB_IN:1;					 /*  */
        vuint16_t PWMX_IN:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t POLA:1;					 /*  */
        vuint16_t POLB:1;					 /*  */
        vuint16_t POLX:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t PWMAFS:2;					 /* PWMA Fault State */
        vuint16_t PWMBFS:2;					 /* PWMB Fault State */
        vuint16_t PWMXFS:2;					 /* PWMX Fault State */
    } B;
  } SUB1_OCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t RUF:1;					 /*  */
        vuint16_t REF:1;					 /*  */
        vuint16_t RF:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CFX1:1;					 /*  */
        vuint16_t CFX0:1;					 /*  */
        vuint16_t CMPF:6;					 /*  */
    } B;
  } SUB1_STS;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t REIE:1;					 /*  */
        vuint16_t RIE:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1IE:1;					 /*  */
        vuint16_t CX0IE:1;					 /*  */
        vuint16_t CMPIE:6;					 /*  */
    } B;
  } SUB1_INTEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t VALDE:1;					 /*  */
        vuint16_t FAND:1;					 /*  */
        vuint16_t CAPTDE:2;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1DE:1;					 /*  */
        vuint16_t CX0DE:1;					 /*  */
    } B;
  } SUB1_DMAEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :10;					 /*  */
        vuint16_t OUT_TRIG_EN:6;					 /*  */
    } B;
  } SUB1_TCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t DISX:4;					 /*  */
        vuint16_t DISB:4;					 /*  */
        vuint16_t DISA:4;					 /*  */
    } B;
  } SUB1_DISMAP;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT0:11;					 /*  */
    } B;
  } SUB1_DTCNT0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT1:11;					 /*  */
    } B;
  } SUB1_DTCNT1;

  uint8_t FlexPWM_reserved4[8];
  union {
    vuint16_t R;
      struct {
        vuint16_t CX1CNT:3;					 /*  */
        vuint16_t CX0CNT:3;					 /*  */
        vuint16_t CFXWM:2;					 /*  */
        vuint16_t EDGCNTX_EN:1;					 /*  */
        vuint16_t INPSELX:1;					 /*  */
        vuint16_t EDGX1:2;					 /*  */
        vuint16_t EDGX0:2;					 /*  */
        vuint16_t ONESHOTX:1;					 /*  */
        vuint16_t ARMX:1;					 /*  */
    } B;
  } SUB1_CAPTCTRLX;

  union {
    vuint16_t R;
      struct {
        vuint16_t EDGCNTX:8;					 /*  */
        vuint16_t EDGCMPX:8;					 /*  */
    } B;
  } SUB1_CAPTCMPX;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL0:16;					 /*  */
    } B;
  } SUB1_CVAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL0CYC:3;					 /* CVAL0 Cycle */
    } B;
  } SUB1_CVAL0CYC;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL1:16;					 /*  */
    } B;
  } SUB1_CVAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL1CYC:3;					 /* CVAL1 Cycle */
    } B;
  } SUB1_CVAL1CYC;

  uint8_t FlexPWM_reserved5[20];
  union {
    vuint16_t R;
      struct {
        vuint16_t CNT:16;					 /* Count */
    } B;
  } SUB2_CNT;

  union {
    vuint16_t R;
      struct {
        vuint16_t INIT:16;					 /* Initial count */
    } B;
  } SUB2_INIT;

  union {
    vuint16_t R;
      struct {
        vuint16_t DBGEN:1;					 /* Debug Enable */
        vuint16_t  :1;					 /*  */
        vuint16_t INDEP:1;					 /* Independent or Complementary Pair Operation */
        vuint16_t PWM23_INIT:1;					 /* PWM23 Initial Value */
        vuint16_t PWM45_INIT:1;					 /* PWM45 Initial Value */
        vuint16_t PWMX_INIT:1;					 /* PWMX Initial Value */
        vuint16_t INIT_SEL:2;					 /* Initialization Control Select */
        vuint16_t FRCEN:1;					 /* Force Initialization Enable */
        vuint16_t FORCE:1;					 /* Force Initialization */
        vuint16_t FORCE_SEL:3;					 /* Force Source Select */
        vuint16_t RELOAD_SEL:1;					 /* Reload Source Select */
        vuint16_t CLK_SEL:2;					 /* Clock Source Select */
    } B;
  } SUB2_CTRL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t LDFQ:4;					 /* Load Frequency */
        vuint16_t HALF:1;					 /* Half Cycle Reload */
        vuint16_t FULL:1;					 /* Full Cycle Reload */
        vuint16_t DT:2;					 /* Deadtime */
        vuint16_t  :1;					 /*  */
        vuint16_t PRSC:3;					 /* Prescaler */
        vuint16_t PHSSHFT:1;					 /* Phase Shift Mode Enable */
        vuint16_t LDMOD:1;					 /* Load Mode Select */
        vuint16_t  :1;					 /*  */
        vuint16_t DBLEN:1;					 /* Double Switching Enable */
    } B;
  } SUB2_CTRL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL0:16;					 /* Value 0 */
    } B;
  } SUB2_VAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL1:16;					 /* Value 1 */
    } B;
  } SUB2_VAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL2:16;					 /* Value 2 */
    } B;
  } SUB2_VAL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL3:16;					 /* Value 3 */
    } B;
  } SUB2_VAL3;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL4:16;					 /*  */
    } B;
  } SUB2_VAL4;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL5:16;					 /*  */
    } B;
  } SUB2_VAL5;

  uint8_t FlexPWM_reserved6[4];
  union {
    vuint16_t R;
      struct {
        vuint16_t PWMA_IN:1;					 /* PWMA Input */
        vuint16_t PWMB_IN:1;					 /*  */
        vuint16_t PWMX_IN:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t POLA:1;					 /*  */
        vuint16_t POLB:1;					 /*  */
        vuint16_t POLX:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t PWMAFS:2;					 /* PWMA Fault State */
        vuint16_t PWMBFS:2;					 /* PWMB Fault State */
        vuint16_t PWMXFS:2;					 /* PWMX Fault State */
    } B;
  } SUB2_OCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t RUF:1;					 /*  */
        vuint16_t REF:1;					 /*  */
        vuint16_t RF:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CFX1:1;					 /*  */
        vuint16_t CFX0:1;					 /*  */
        vuint16_t CMPF:6;					 /*  */
    } B;
  } SUB2_STS;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t REIE:1;					 /*  */
        vuint16_t RIE:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1IE:1;					 /*  */
        vuint16_t CX0IE:1;					 /*  */
        vuint16_t CMPIE:6;					 /*  */
    } B;
  } SUB2_INTEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t VALDE:1;					 /*  */
        vuint16_t FAND:1;					 /*  */
        vuint16_t CAPTDE:2;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1DE:1;					 /*  */
        vuint16_t CX0DE:1;					 /*  */
    } B;
  } SUB2_DMAEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :10;					 /*  */
        vuint16_t OUT_TRIG_EN:6;					 /*  */
    } B;
  } SUB2_TCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t DISX:4;					 /*  */
        vuint16_t DISB:4;					 /*  */
        vuint16_t DISA:4;					 /*  */
    } B;
  } SUB2_DISMAP;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT0:11;					 /*  */
    } B;
  } SUB2_DTCNT0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT1:11;					 /*  */
    } B;
  } SUB2_DTCNT1;

  uint8_t FlexPWM_reserved7[8];
  union {
    vuint16_t R;
      struct {
        vuint16_t CX1CNT:3;					 /*  */
        vuint16_t CX0CNT:3;					 /*  */
        vuint16_t CFXWM:2;					 /*  */
        vuint16_t EDGCNTX_EN:1;					 /*  */
        vuint16_t INPSELX:1;					 /*  */
        vuint16_t EDGX1:2;					 /*  */
        vuint16_t EDGX0:2;					 /*  */
        vuint16_t ONESHOTX:1;					 /*  */
        vuint16_t ARMX:1;					 /*  */
    } B;
  } SUB2_CAPTCTRLX;

  union {
    vuint16_t R;
      struct {
        vuint16_t EDGCNTX:8;					 /*  */
        vuint16_t EDGCMPX:8;					 /*  */
    } B;
  } SUB2_CAPTCMPX;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL0:16;					 /*  */
    } B;
  } SUB2_CVAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL0CYC:3;					 /* CVAL0 Cycle */
    } B;
  } SUB2_CVAL0CYC;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL1:16;					 /*  */
    } B;
  } SUB2_CVAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL1CYC:3;					 /* CVAL1 Cycle */
    } B;
  } SUB2_CVAL1CYC;

  uint8_t FlexPWM_reserved8[20];
  union {
    vuint16_t R;
      struct {
        vuint16_t CNT:16;					 /* Count */
    } B;
  } SUB3_CNT;

  union {
    vuint16_t R;
      struct {
        vuint16_t INIT:16;					 /* Initial count */
    } B;
  } SUB3_INIT;

  union {
    vuint16_t R;
      struct {
        vuint16_t DBGEN:1;					 /* Debug Enable */
        vuint16_t  :1;					 /*  */
        vuint16_t INDEP:1;					 /* Independent or Complementary Pair Operation */
        vuint16_t PWM23_INIT:1;					 /* PWM23 Initial Value */
        vuint16_t PWM45_INIT:1;					 /* PWM45 Initial Value */
        vuint16_t PWMX_INIT:1;					 /* PWMX Initial Value */
        vuint16_t INIT_SEL:2;					 /* Initialization Control Select */
        vuint16_t FRCEN:1;					 /* Force Initialization Enable */
        vuint16_t FORCE:1;					 /* Force Initialization */
        vuint16_t FORCE_SEL:3;					 /* Force Source Select */
        vuint16_t RELOAD_SEL:1;					 /* Reload Source Select */
        vuint16_t CLK_SEL:2;					 /* Clock Source Select */
    } B;
  } SUB3_CTRL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t LDFQ:4;					 /* Load Frequency */
        vuint16_t HALF:1;					 /* Half Cycle Reload */
        vuint16_t FULL:1;					 /* Full Cycle Reload */
        vuint16_t DT:2;					 /* Deadtime */
        vuint16_t  :1;					 /*  */
        vuint16_t PRSC:3;					 /* Prescaler */
        vuint16_t PHSSHFT:1;					 /* Phase Shift Mode Enable */
        vuint16_t LDMOD:1;					 /* Load Mode Select */
        vuint16_t  :1;					 /*  */
        vuint16_t DBLEN:1;					 /* Double Switching Enable */
    } B;
  } SUB3_CTRL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL0:16;					 /* Value 0 */
    } B;
  } SUB3_VAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL1:16;					 /* Value 1 */
    } B;
  } SUB3_VAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL2:16;					 /* Value 2 */
    } B;
  } SUB3_VAL2;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL3:16;					 /* Value 3 */
    } B;
  } SUB3_VAL3;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL4:16;					 /*  */
    } B;
  } SUB3_VAL4;

  union {
    vuint16_t R;
      struct {
        vuint16_t VAL5:16;					 /*  */
    } B;
  } SUB3_VAL5;

  uint8_t FlexPWM_reserved9[4];
  union {
    vuint16_t R;
      struct {
        vuint16_t PWMA_IN:1;					 /* PWMA Input */
        vuint16_t PWMB_IN:1;					 /*  */
        vuint16_t PWMX_IN:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t POLA:1;					 /*  */
        vuint16_t POLB:1;					 /*  */
        vuint16_t POLX:1;					 /*  */
        vuint16_t  :2;					 /*  */
        vuint16_t PWMAFS:2;					 /* PWMA Fault State */
        vuint16_t PWMBFS:2;					 /* PWMB Fault State */
        vuint16_t PWMXFS:2;					 /* PWMX Fault State */
    } B;
  } SUB3_OCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t RUF:1;					 /*  */
        vuint16_t REF:1;					 /*  */
        vuint16_t RF:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CFX1:1;					 /*  */
        vuint16_t CFX0:1;					 /*  */
        vuint16_t CMPF:6;					 /*  */
    } B;
  } SUB3_STS;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :2;					 /*  */
        vuint16_t REIE:1;					 /*  */
        vuint16_t RIE:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1IE:1;					 /*  */
        vuint16_t CX0IE:1;					 /*  */
        vuint16_t CMPIE:6;					 /*  */
    } B;
  } SUB3_INTEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :6;					 /*  */
        vuint16_t VALDE:1;					 /*  */
        vuint16_t FAND:1;					 /*  */
        vuint16_t CAPTDE:2;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t CX1DE:1;					 /*  */
        vuint16_t CX0DE:1;					 /*  */
    } B;
  } SUB3_DMAEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :10;					 /*  */
        vuint16_t OUT_TRIG_EN:6;					 /*  */
    } B;
  } SUB3_TCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t DISX:4;					 /*  */
        vuint16_t DISB:4;					 /*  */
        vuint16_t DISA:4;					 /*  */
    } B;
  } SUB3_DISMAP;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT0:11;					 /*  */
    } B;
  } SUB3_DTCNT0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t DTCNT1:11;					 /*  */
    } B;
  } SUB3_DTCNT1;

  uint8_t FlexPWM_reserved10[8];
  union {
    vuint16_t R;
      struct {
        vuint16_t CX1CNT:3;					 /*  */
        vuint16_t CX0CNT:3;					 /*  */
        vuint16_t CFXWM:2;					 /*  */
        vuint16_t EDGCNTX_EN:1;					 /*  */
        vuint16_t INPSELX:1;					 /*  */
        vuint16_t EDGX1:2;					 /*  */
        vuint16_t EDGX0:2;					 /*  */
        vuint16_t ONESHOTX:1;					 /*  */
        vuint16_t ARMX:1;					 /*  */
    } B;
  } SUB3_CAPTCTRLX;

  union {
    vuint16_t R;
      struct {
        vuint16_t EDGCNTX:8;					 /*  */
        vuint16_t EDGCMPX:8;					 /*  */
    } B;
  } SUB3_CAPTCMPX;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL0:16;					 /*  */
    } B;
  } SUB3_CVAL0;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL0CYC:3;					 /* CVAL0 Cycle */
    } B;
  } SUB3_CVAL0CYC;

  union {
    vuint16_t R;
      struct {
        vuint16_t CAPTVAL1:16;					 /*  */
    } B;
  } SUB3_CVAL1;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t CVAL1CYC:3;					 /* CVAL1 Cycle */
    } B;
  } SUB3_CVAL1CYC;

  uint8_t FlexPWM_reserved11[20];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :4;					 /*  */
        vuint16_t PWMA_EN:4;					 /*  */
        vuint16_t PWMB_EN:4;					 /*  */
        vuint16_t PWMX_EN:4;					 /*  */
    } B;
  } OUTEN;

  union {
    vuint16_t R;
      struct {
        vuint16_t UPDATE_MASK:4;					 /* Update Mask */
        vuint16_t MASKA:4;					 /*  */
        vuint16_t MASKB:4;					 /*  */
        vuint16_t MASKX:4;					 /*  */
    } B;
  } MASK;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :8;					 /*  */
        vuint16_t OUT23_3:1;					 /*  */
        vuint16_t OUT45_3:1;					 /*  */
        vuint16_t OUT23_2:1;					 /*  */
        vuint16_t OUT45_2:1;					 /*  */
        vuint16_t OUT23_1:1;					 /*  */
        vuint16_t OUT45_1:1;					 /*  */
        vuint16_t OUT23_0:1;					 /*  */
        vuint16_t OUT45_0:1;					 /*  */
    } B;
  } SWCOUT;

  union {
    vuint16_t R;
      struct {
        vuint16_t SEL23_3:2;					 /*  */
        vuint16_t SEL45_3:2;					 /*  */
        vuint16_t SEL23_2:2;					 /*  */
        vuint16_t SEL45_2:2;					 /*  */
        vuint16_t SEL23_1:2;					 /*  */
        vuint16_t SEL45_1:2;					 /*  */
        vuint16_t SEL23_0:2;					 /*  */
        vuint16_t SEL45_0:2;					 /*  */
    } B;
  } DTSRCSEL;

  union {
    vuint16_t R;
      struct {
        vuint16_t IPOL:4;					 /* Current Polarity */
        vuint16_t RUN:4;					 /* Run */
        vuint16_t CLDOK:4;					 /* Clear Load Okay */
        vuint16_t LDOK:4;					 /* Load Okay */
    } B;
  } MCTRL;

  uint8_t FlexPWM_reserved12[2];
  union {
    vuint16_t R;
      struct {
        vuint16_t FLVL:4;					 /*  */
        vuint16_t FAUTO:4;					 /*  */
        vuint16_t FSAFE:4;					 /*  */
        vuint16_t FIE:4;					 /*  */
    } B;
  } FCTRL;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :3;					 /*  */
        vuint16_t FTEST:1;					 /*  */
        vuint16_t FFPIN:4;					 /*  */
        vuint16_t FFULL:4;					 /*  */
        vuint16_t FFLAG:4;					 /*  */
    } B;
  } FSTS;

  union {
    vuint16_t R;
      struct {
        vuint16_t GSTR:1;					 /*  */
        vuint16_t  :4;					 /*  */
        vuint16_t FILT_CNT:3;					 /*  */
        vuint16_t FILT_PER:8;					 /*  */
    } B;
  } FFILT;

};


/* ============================================================================
   =============================== Module: INTC ===============================
   ============================================================================ */

struct INTC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :19;					 /*  */
        vuint32_t HVEN3:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t HVEN2:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t HVEN1:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t HVEN0:1;					 /*  */
    } B;
  } BCR;

  uint8_t INTC_reserved0[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t PRI:6;					 /*  */
    } B;
  } CPR[1];
  
  uint8_t INTC_reserved1[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t VTBA:20;					 /*  */
        vuint32_t INTVEC:10;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } IACKR[1];

  uint8_t INTC_reserved2[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t EOI:32;					 /*  */
    } B;
  } EOIR[1];

  uint8_t INTC_reserved3[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR0_3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR4_7;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR8_11;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR12_15;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR16_19;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR20_23;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR24_27;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SETa:1;					 /*  */
        vuint32_t CLRa:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETb:1;					 /*  */
        vuint32_t CLRb:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETc:1;					 /*  */
        vuint32_t CLRc:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t SETd:1;					 /*  */
        vuint32_t CLRd:1;					 /*  */
    } B;
  } SSCIR28_31;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR0_1;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR2_3;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR4_5;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR6_7;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR8_9;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR10_11;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR12_13;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR14_15;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR16_17;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR18_19;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR20_21;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR22_23;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR24_25;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR26_27;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR28_29;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR30_31;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR32_33;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR34_35;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR36_37;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR38_39;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR40_41;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR42_43;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR44_45;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR46_47;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR48_49;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR50_51;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR52_53;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR54_55;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR56_57;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR58_59;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR60_61;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR62_63;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR64_65;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR66_67;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR68_69;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR70_71;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR72_73;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR74_75;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR76_77;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR78_79;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR80_81;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR82_83;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR84_85;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR86_87;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR88_89;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR90_91;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR92_93;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR94_95;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR96_97;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR98_99;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR100_101;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR102_103;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR104_105;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR106_107;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR108_109;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR110_111;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR112_113;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR114_115;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR116_117;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR118_119;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR120_121;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR122_123;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR124_125;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR126_127;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR128_129;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR130_131;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR132_133;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR134_135;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR136_137;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR138_139;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR140_141;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR142_143;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR144_145;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR146_147;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR148_149;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR150_151;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR152_153;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR154_155;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR156_157;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR158_159;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR160_161;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR162_163;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR164_165;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR166_167;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR168_169;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR170_171;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR172_173;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR174_175;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR176_177;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR178_179;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR180_181;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR182_183;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR184_185;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR186_187;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR188_189;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR190_191;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR192_193;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR194_195;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR196_197;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR198_199;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR200_201;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR202_203;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR204_205;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR206_207;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR208_209;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR210_211;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR212_213;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR214_215;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR216_217;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR218_219;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR220_221;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR222_223;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR224_225;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR226_227;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR228_229;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR230_231;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR232_233;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR234_235;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR236_237;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR238_239;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR240_241;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR242_243;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR244_245;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR246_247;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR248_249;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR250_251;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR252_253;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR254_255;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR256_257;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR258_259;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR260_261;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR262_263;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR264_265;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR266_267;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR268_269;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR270_271;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR272_273;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR274_275;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR276_277;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR278_279;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR280_281;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR282_283;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR284_285;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR286_287;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR288_289;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR290_291;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR292_293;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR294_295;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR296_297;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR298_299;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR300_301;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR302_303;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR304_305;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR306_307;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR308_309;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR310_311;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR312_313;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR314_315;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR316_317;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR318_319;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR320_321;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR322_323;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR324_325;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR326_327;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR328_329;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR330_331;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR332_333;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR334_335;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR336_337;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR338_339;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR340_341;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR342_343;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR344_345;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR346_347;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR348_349;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR350_351;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR352_353;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR354_355;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR356_357;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR358_359;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR360_361;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR362_363;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR364_365;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR366_367;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR368_369;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR370_371;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR372_373;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR374_375;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR376_377;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR378_379;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR380_381;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR382_383;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR384_385;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR386_387;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR388_389;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR390_391;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR392_393;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR394_395;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR396_397;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR398_399;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR400_401;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR402_403;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR404_405;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR406_407;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR408_409;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR410_411;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR412_413;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR414_415;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR416_417;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR418_419;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR420_421;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR422_423;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR424_425;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR426_427;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR428_429;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR430_431;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR432_433;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR434_435;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR436_437;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR438_439;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR440_441;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR442_443;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR444_445;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR446_447;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR448_449;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR450_451;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR452_453;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR454_455;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR456_457;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR458_459;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR460_461;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR462_463;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR464_465;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR466_467;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR468_469;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR470_471;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR472_473;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR474_475;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR476_477;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR478_479;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR480_481;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR482_483;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR484_485;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR486_487;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR488_489;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR490_491;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR492_493;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR494_495;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR496_497;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR498_499;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR500_501;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR502_503;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR504_505;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR506_507;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR508_509;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR510_511;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR512_513;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR514_515;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR516_517;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR518_519;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR520_521;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR522_523;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR524_525;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR526_527;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR528_529;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR530_531;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR532_533;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR534_535;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR536_537;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR538_539;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR540_541;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR542_543;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR544_545;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR546_547;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR548_549;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR550_551;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR552_553;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR554_555;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR556_557;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR558_559;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR560_561;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR562_563;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR564_565;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR566_567;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR568_569;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR570_571;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR572_573;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR574_575;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR576_577;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR578_579;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR580_581;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR582_583;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR584_585;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR586_587;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR588_589;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR590_591;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR592_593;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR594_595;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR596_597;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR598_599;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR600_601;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR602_603;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR604_605;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR606_607;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR608_609;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR610_611;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR612_613;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR614_615;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR616_617;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR618_619;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR620_621;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR622_623;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR624_625;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR626_627;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR628_629;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR630_631;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR632_633;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR634_635;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR636_637;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR638_639;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR640_641;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR642_643;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR644_645;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR646_647;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR648_649;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR650_651;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR652_653;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR654_655;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR656_657;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR658_659;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR660_661;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR662_663;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR664_665;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR666_667;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR668_669;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR670_671;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR672_673;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR674_675;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR676_677;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR678_679;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR680_681;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR682_683;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR684_685;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR686_687;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR688_689;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR690_691;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR692_693;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR694_695;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR696_697;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR698_699;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR700_701;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR702_703;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR704_705;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR706_707;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR708_709;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR710_711;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR712_713;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR714_715;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR716_717;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR718_719;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR720_721;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR722_723;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR724_725;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR726_727;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR728_729;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR730_731;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR732_733;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR734_735;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR736_737;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR738_739;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR740_741;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR742_743;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR744_745;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR746_747;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR748_749;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR750_751;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR752_753;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR754_755;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR756_757;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR758_759;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR760_761;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR762_763;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR764_765;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR766_767;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR768_769;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR770_771;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR772_773;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR774_775;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR776_777;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR778_779;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR780_781;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR782_783;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR784_785;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR786_787;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR788_789;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR790_791;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR792_793;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR794_795;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR796_797;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR798_799;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR800_801;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR802_803;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR804_805;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR806_807;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR808_809;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR810_811;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR812_813;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR814_815;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR816_817;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR818_819;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR820_821;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR822_823;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR824_825;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR826_827;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR828_829;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR830_831;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR832_833;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR834_835;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR836_837;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR838_839;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR840_841;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR842_843;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR844_845;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR846_847;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR848_849;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR850_851;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR852_853;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR854_855;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR856_857;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR858_859;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR860_861;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR862_863;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR864_865;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR866_867;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR868_869;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR870_871;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR872_873;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR874_875;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR876_877;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR878_879;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR880_881;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR882_883;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR884_885;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR886_887;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR888_889;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR890_891;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR892_893;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR894_895;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR896_897;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR898_899;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR900_901;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR902_903;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR904_905;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR906_907;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR908_909;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR910_911;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR912_913;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR914_915;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR916_917;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR918_919;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR920_921;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR922_923;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR924_925;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR926_927;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR928_929;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR930_931;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR932_933;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR934_935;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR936_937;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR938_939;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR940_941;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR942_943;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR944_945;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR946_947;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR948_949;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR950_951;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR952_953;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR954_955;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR956_957;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR958_959;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR960_961;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR962_963;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR964_965;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR966_967;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR968_969;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR970_971;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR972_973;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR974_975;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR976_977;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR978_979;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR980_981;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR982_983;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR984_985;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR986_987;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR988_989;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR990_991;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR992_993;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR994_995;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR996_997;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR998_999;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1000_1001;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1002_1003;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1004_1005;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1006_1007;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1008_1009;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1010_1011;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1012_1013;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1014_1015;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1016_1017;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1018_1019;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1020_1021;

  union {
    vuint32_t R;
      struct {
        vuint32_t PRC_SELa:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTa:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIa:6;					 /*  */
        vuint32_t PRC_SELb:4;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SWTb:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRIb:6;					 /*  */
    } B;
  } PSR1022_1023;

  uint8_t INTC_reserved4[1952];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t MM:2;					 /*  */
    } B;
  } MMRC0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI0C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI1C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI2C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI3C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT0C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT1C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT2C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT3C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER0C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER1C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER2C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER3C0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t MM:2;					 /*  */
    } B;
  } MMRC1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI0C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI1C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI2C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI3C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT0C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT1C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT2C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT3C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER0C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER1C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER2C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER3C1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t MM:2;					 /*  */
    } B;
  } MMRC2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI0C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI1C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI2C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI3C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT0C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT1C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT2C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT3C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER0C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER1C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER2C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER3C2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t MM:2;					 /*  */
    } B;
  } MMRC3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI0C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI1C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI2C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t IRQ:10;					 /*  */
    } B;
  } HIPRI3C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT0C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT1C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT2C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t LAT0:16;					 /*  */
    } B;
  } LAT3C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER0C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER1C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER2C3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t TIMER0:24;					 /*  */
    } B;
  } TIMER3C3;

};


/* ============================================================================
   ============================== Module: LFAST ===============================
   ============================================================================ */

struct LFAST_tag {
  uint8_t LFAST_reserved0[1];
  union {
    vuint32_t R;
      struct {
        vuint32_t MSEN:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t IPGDBG:1;					 /*  */
        vuint32_t  :7;					 /*  */
        vuint32_t LSSEL:1;					 /*  */
        vuint32_t DRFEN:1;					 /*  */
        vuint32_t RXEN:1;					 /*  */
        vuint32_t TXEN:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t TXARBD:1;					 /*  */
        vuint32_t CTSEN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t DRFRST:1;					 /*  */
        vuint32_t DATAEN:1;					 /*  */
    } B;
  } MCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t DRMD:1;					 /*  */
        vuint32_t  :7;					 /*  */
        vuint32_t RDR:1;					 /*  */
        vuint32_t  :7;					 /*  */
        vuint32_t TDR:1;					 /*  */
    } B;
  } SCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t SMPSEL:8;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t CORRTH:3;					 /*  */
        vuint32_t PHSSEL:1;					 /*  */
    } B;
  } COCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t CLKTST:1;					 /*  */
        vuint32_t LPON:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t LPMOD:3;					 /*  */
        vuint32_t LPFRMTH:16;					 /*  */
    } B;
  } TMCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t LPCNTEN:1;					 /*  */
        vuint32_t LPFMCNT:16;					 /*  */
    } B;
  } ALCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DRCNT:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } RCDCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t HSCNT:8;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t LSCNT:4;					 /*  */
        vuint32_t HWKCNT:8;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t LWKCNT:4;					 /*  */
    } B;
  } SLCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :14;					 /*  */
        vuint32_t ICLCSEQ:1;					 /*  */
        vuint32_t SNDICLC:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t ICLCPLD:8;					 /*  */
    } B;
  } ICR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t PNGREQ:1;					 /*  */
        vuint32_t PNGAUTO:1;					 /*  */
        vuint32_t  :7;					 /*  */
        vuint32_t PNGPYLD:8;					 /*  */
    } B;
  } PICR;

  uint8_t LFAST_reserved1[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t RCTSMX:6;					 /*  */
        vuint32_t  :10;					 /*  */
        vuint32_t RCTSMN:6;					 /*  */
    } B;
  } RFCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :14;					 /*  */
        vuint32_t TXIIE:1;					 /*  */
        vuint32_t TXOVIE:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t TXPNGIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TXUNSIE:1;					 /*  */
        vuint32_t TXICLCIE:1;					 /*  */
        vuint32_t TXDTIE:1;					 /*  */
    } B;
  } TIER;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t RXUOIE:1;					 /*  */
        vuint32_t RXMNIE:1;					 /*  */
        vuint32_t RXMXIE:1;					 /*  */
        vuint32_t RXUFIE:1;					 /*  */
        vuint32_t RXOFIE:1;					 /*  */
        vuint32_t RXSZIE:1;					 /*  */
        vuint32_t RXICIE:1;					 /*  */
        vuint32_t RXLCEIE:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t RXCTSIE:1;					 /*  */
        vuint32_t RXDIE:1;					 /*  */
        vuint32_t RXUNSIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } RIER;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :18;					 /*  */
        vuint32_t ICPFIE:1;					 /*  */
        vuint32_t ICPSIE:1;					 /*  */
        vuint32_t ICPRIE:1;					 /*  */
        vuint32_t ICTOIE:1;					 /*  */
        vuint32_t ICLPIE:1;					 /*  */
        vuint32_t ICCTIE:1;					 /*  */
        vuint32_t ICTDIE:1;					 /*  */
        vuint32_t ICTEIE:1;					 /*  */
        vuint32_t ICRFIE:1;					 /*  */
        vuint32_t ICRSIE:1;					 /*  */
        vuint32_t ICTFIE:1;					 /*  */
        vuint32_t ICTSIE:1;					 /*  */
        vuint32_t ICPOFIE:1;					 /*  */
        vuint32_t ICPONIE:1;					 /*  */
    } B;
  } RIIER;

  union {
    vuint32_t R;
      struct {
        vuint32_t IPTMOD:3;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t SWPOFF:1;					 /*  */
        vuint32_t SWPON:1;					 /*  */
        vuint32_t REFINV:1;					 /*  */
        vuint32_t LPCFG:2;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PLCKCW:2;					 /*  */
        vuint32_t FDIVEN:1;					 /*  */
        vuint32_t FBDIV:6;					 /*  */
        vuint32_t PREDIV:2;					 /*  */
    } B;
  } PLLCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t SWWKLD:1;					 /*  */
        vuint32_t SWSLPLD:1;					 /*  */
        vuint32_t SWWKLR:1;					 /*  */
        vuint32_t SWSLPLR:1;					 /*  */
        vuint32_t SWOFFLD:1;					 /*  */
        vuint32_t SWONLD:1;					 /*  */
        vuint32_t SWOFFLR:1;					 /*  */
        vuint32_t SWONLR:1;					 /*  */
        vuint32_t LVRXOFF:1;					 /*  */
        vuint32_t LVTXOE:1;					 /*  */
        vuint32_t TXCMUX:1;					 /*  */
        vuint32_t LVRFEN:1;					 /*  */
        vuint32_t LVLPEN:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t LVRXOP:3;					 /*  */
        vuint32_t LVTXOP:1;					 /*  */
        vuint32_t LVCKSS:1;					 /*  */
        vuint32_t LVCKP:1;					 /*  */
    } B;
  } LCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t USNDRQ:1;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t UNSHDR:7;					 /*  */
    } B;
  } UNSTCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t UNTXD:32;					 /*  */
    } B;
  } UNSTDR[9];

  uint8_t LFAST_reserved2[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t DUALMD:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t LRMD:1;					 /*  */
        vuint32_t LDSM:1;					 /*  */
        vuint32_t DRSM:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t LPTXDN:1;					 /*  */
        vuint32_t LPFPDV:1;					 /*  */
        vuint32_t LPCPDV:1;					 /*  */
        vuint32_t LPCHDV:1;					 /*  */
        vuint32_t LPCSDV:1;					 /*  */
    } B;
  } GSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t RXPNGD:8;					 /*  */
    } B;
  } PISR;

  uint8_t LFAST_reserved3[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :2;					 /*  */
        vuint32_t RXDCNT:6;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t RXFCNT:3;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t TXDCNT:6;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t TXFCNT:3;					 /*  */
    } B;
  } DFSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :14;					 /*  */
        vuint32_t TXIEF:1;					 /*  */
        vuint32_t TXOVF:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t TXPNGF:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TXUNSF:1;					 /*  */
        vuint32_t TXICLCF:1;					 /*  */
        vuint32_t TXDTF:1;					 /*  */
    } B;
  } TISR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t RXUOF:1;					 /*  */
        vuint32_t RXMNF:1;					 /*  */
        vuint32_t RXMXF:1;					 /*  */
        vuint32_t RXUFF:1;					 /*  */
        vuint32_t RXOFF:1;					 /*  */
        vuint32_t RXSZF:1;					 /*  */
        vuint32_t RXICF:1;					 /*  */
        vuint32_t RXLCEF:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t RXCTSF:1;					 /*  */
        vuint32_t RXDF:1;					 /*  */
        vuint32_t RXUNSF:1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } RISR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :18;					 /*  */
        vuint32_t ICPFF:1;					 /*  */
        vuint32_t ICPSF:1;					 /*  */
        vuint32_t ICPRF:1;					 /*  */
        vuint32_t ICTOF:1;					 /*  */
        vuint32_t ICLPF:1;					 /*  */
        vuint32_t ICCTF:1;					 /*  */
        vuint32_t ICTDF:1;					 /*  */
        vuint32_t ICTEF:1;					 /*  */
        vuint32_t ICRFF:1;					 /*  */
        vuint32_t ICRSF:1;					 /*  */
        vuint32_t ICTFF:1;					 /*  */
        vuint32_t ICTSF:1;					 /*  */
        vuint32_t ICPOFF:1;					 /*  */
        vuint32_t ICPONF:1;					 /*  */
    } B;
  } RIISR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :14;					 /*  */
        vuint32_t PLLDIS:1;					 /*  */
        vuint32_t PLDCR:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t LDSLPS:1;					 /*  */
        vuint32_t LRSLPS:1;					 /*  */
        vuint32_t LDPDS:1;					 /*  */
        vuint32_t LRPDS:1;					 /*  */
    } B;
  } PLLLSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :23;					 /*  */
        vuint32_t URXDV:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t URPCNT:3;					 /*  */
    } B;
  } UNSRSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t UNRXD:32;					 /*  */
    } B;
  } UNSRDR[9];

};


/* ============================================================================
   ============================= Module: LINFlexD =============================
   ============================================================================ */

struct LINFlexD_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t CCD:1;					 /*  */
        vuint32_t CFD:1;					 /*  */
        vuint32_t LASE:1;					 /*  */
        vuint32_t AUTOWU:1;					 /*  */
        vuint32_t MBL:4;					 /*  */
        vuint32_t BF:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t LBKM:1;					 /*  */
        vuint32_t MME:1;					 /*  */
        vuint32_t SSBL:1;					 /*  */
        vuint32_t RBLM:1;					 /*  */
        vuint32_t SLEEP:1;					 /*  */
        vuint32_t INIT:1;					 /*  */
    } B;
  } LINCR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SZIE:1;					 /*  */
        vuint32_t OCIE:1;					 /*  */
        vuint32_t BEIE:1;					 /*  */
        vuint32_t CEIE:1;					 /*  */
        vuint32_t HEIE:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FEIE:1;					 /*  */
        vuint32_t BOIE:1;					 /*  */
        vuint32_t LSIE:1;					 /*  */
        vuint32_t WUIE:1;					 /*  */
        vuint32_t DBFIE:1;					 /*  */
        vuint32_t DBEIETOIE:1;					 /*  */
        vuint32_t DRIE:1;					 /*  */
        vuint32_t DTIE:1;					 /*  */
        vuint32_t HRIE:1;					 /*  */
    } B;
  } LINIER;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t RDC:3;					 /*  */
        vuint32_t LINS:4;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t RMB:1;					 /*  */
        vuint32_t DRBNE:1;					 /*  */
        vuint32_t RXbusy:1;					 /*  */
        vuint32_t RDI:1;					 /*  */
        vuint32_t WUF:1;					 /*  */
        vuint32_t DBFF:1;					 /*  */
        vuint32_t DBEF:1;					 /*  */
        vuint32_t DRF:1;					 /*  */
        vuint32_t DTF:1;					 /*  */
        vuint32_t HRF:1;					 /*  */
    } B;
  } LINSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SZF:1;					 /*  */
        vuint32_t OCF:1;					 /*  */
        vuint32_t BEF:1;					 /*  */
        vuint32_t CEF:1;					 /*  */
        vuint32_t SFEF:1;					 /*  */
        vuint32_t SDEF:1;					 /*  */
        vuint32_t IDPEF:1;					 /*  */
        vuint32_t FEF:1;					 /*  */
        vuint32_t BOF:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t NF:1;					 /*  */
    } B;
  } LINESR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t NEF:3;					 /*  */
        vuint32_t DTU:1;					 /*  */
        vuint32_t SBUR:2;					 /*  */
        vuint32_t WLS:1;					 /*  */
        vuint32_t TDFLTFC:3;					 /*  */
        vuint32_t RDFLRFC:3;					 /*  */
        vuint32_t RFBM:1;					 /*  */
        vuint32_t TFBM:1;					 /*  */
        vuint32_t WL1:1;					 /*  */
        vuint32_t PC1:1;					 /*  */
        vuint32_t RxEn:1;					 /*  */
        vuint32_t TxEn:1;					 /*  */
        vuint32_t PC0:1;					 /*  */
        vuint32_t PCE:1;					 /*  */
        vuint32_t WL0:1;					 /*  */
        vuint32_t UART:1;					 /*  */
    } B;
  } UARTCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SZF:1;					 /*  */
        vuint32_t OCF:1;					 /*  */
        vuint32_t PE:4;					 /*  */
        vuint32_t RMB:1;					 /*  */
        vuint32_t FEF:1;					 /*  */
        vuint32_t BOF:1;					 /*  */
        vuint32_t RDI:1;					 /*  */
        vuint32_t WUF:1;					 /*  */
        vuint32_t RFNE:1;					 /*  */
        vuint32_t TO:1;					 /*  */
        vuint32_t DRFRFE:1;					 /*  */
        vuint32_t DTFTFF:1;					 /*  */
        vuint32_t NF:1;					 /*  */
    } B;
  } UARTSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :21;					 /*  */
        vuint32_t MODE:1;					 /*  */
        vuint32_t IOT:1;					 /*  */
        vuint32_t TOCE:1;					 /*  */
        vuint32_t CNT:8;					 /*  */
    } B;
  } LINTCSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t OC2:8;					 /*  */
        vuint32_t OC1:8;					 /*  */
    } B;
  } LINOCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t RTO:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t HTO:7;					 /*  */
    } B;
  } LINTOCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t FBR:4;					 /*  */
    } B;
  } LINFBRR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t IBR:20;					 /*  */
    } B;
  } LINIBRR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t CF:8;					 /*  */
    } B;
  } LINCFR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t TBDE:1;					 /*  */
        vuint32_t IOBE:1;					 /*  */
        vuint32_t IOPE:1;					 /*  */
        vuint32_t WURQ:1;					 /*  */
        vuint32_t DDRQ:1;					 /*  */
        vuint32_t DTRQ:1;					 /*  */
        vuint32_t ABRQ:1;					 /*  */
        vuint32_t HTRQ:1;					 /*  */
        vuint32_t  :8;					 /*  */
    } B;
  } LINCR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t DFL:6;					 /*  */
        vuint32_t DIR:1;					 /*  */
        vuint32_t CCS:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t ID:6;					 /*  */
    } B;
  } BIDR;

  union {
    vuint32_t R;
      struct {
        vuint32_t DATA3:8;					 /*  */
        vuint32_t DATA2:8;					 /*  */
        vuint32_t DATA1:8;					 /*  */
        vuint32_t DATA0:8;					 /*  */
    } B;
  } BDRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t DATA7:8;					 /*  */
        vuint32_t DATA6:8;					 /*  */
        vuint32_t DATA5:8;					 /*  */
        vuint32_t DATA4:8;					 /*  */
    } B;
  } BDRM;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t FACT:16;					 /*  */
    } B;
  } IFER;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :27;					 /*  */
        vuint32_t IFMI:5;					 /*  */
    } B;
  } IFMI;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t IFM:8;					 /*  */
    } B;
  } IFMR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t DFL:6;					 /* Data Field Length */
        vuint32_t DIR:1;					 /* Direction */
        vuint32_t CCS:1;					 /* Classic Checksum */
        vuint32_t  :2;					 /*  */
        vuint32_t ID:6;					 /* Identifier */
    } B;
  } IFCR[16];

  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t TDFBM:1;					 /*  */
        vuint32_t RDFBM:1;					 /*  */
        vuint32_t TDLIS:1;					 /*  */
        vuint32_t RDLIS:1;					 /*  */
        vuint32_t STOP:1;					 /*  */
        vuint32_t SR:1;					 /*  */
    } B;
  } GCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t PTO:12;					 /*  */
    } B;
  } UARTPTO;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t CTO:12;					 /*  */
    } B;
  } UARTCTO;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t DTE:16;					 /*  */
    } B;
  } DMATXE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t DRE:16;					 /*  */
    } B;
  } DMARXE;

};


/* ============================================================================
   ============================== Module: MC_CGM ==============================
   ============================================================================ */

struct MC_CGM_tag {
  uint8_t MC_CGM_reserved0[1792];
  union {
    vuint8_t R;
      struct {
        vuint8_t SDUR:8;					 /*  */
    } B;
  } PCS_SDUR;

  uint8_t MC_CGM_reserved1[3];
  union {
    vuint32_t R;
      struct {
        vuint32_t INIT:16;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t RATE:8;					 /*  */
    } B;
  } PCS_DIVC1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DIVS:20;					 /*  */
    } B;
  } PCS_DIVS1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DIVE:20;					 /*  */
    } B;
  } PCS_DIVE1;

  union {
    vuint32_t R;
      struct {
        vuint32_t INIT:16;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t RATE:8;					 /*  */
    } B;
  } PCS_DIVC2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DIVS:20;					 /*  */
    } B;
  } PCS_DIVS2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DIVE:20;					 /*  */
    } B;
  } PCS_DIVE2;

  uint8_t MC_CGM_reserved2[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t INIT:16;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t RATE:8;					 /*  */
    } B;
  } PCS_DIVC4;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DIVS:20;					 /*  */
    } B;
  } PCS_DIVS4;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t DIVE:20;					 /*  */
    } B;
  } PCS_DIVE4;

  uint8_t MC_CGM_reserved3[176];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t SELSTAT:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t SWTRG:3;					 /*  */
        vuint32_t SWIP:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } SC_SS;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t DIV:6;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } SC_DC0;

  uint8_t MC_CGM_reserved4[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SELCTL:2;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC0_SC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SELSTAT:2;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC0_SS;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t DIV:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC0_DC0;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :10;					 /*  */
        vuint32_t DIV:5;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC0_DC1;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :10;					 /*  */
        vuint32_t DIV:5;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC0_DC2;

  uint8_t MC_CGM_reserved5[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :10;					 /*  */
        vuint32_t DIV:5;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC1_DC0;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t DIV:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC1_DC1;

  uint8_t MC_CGM_reserved6[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t DIV:6;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC2_DC0;

  uint8_t MC_CGM_reserved7[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t SELCTL:1;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC3_SC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t SELSTAT:1;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC3_SS;

  uint8_t MC_CGM_reserved8[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SELCTL:2;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC4_SC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t SELSTAT:2;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC4_SS;

  uint8_t MC_CGM_reserved9[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :5;					 /*  */
        vuint32_t SELCTL:3;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC5_SC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :5;					 /*  */
        vuint32_t SELSTAT:3;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC5_SS;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :10;					 /*  */
        vuint32_t DIV:5;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC5_DC0;

  uint8_t MC_CGM_reserved10[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :5;					 /*  */
        vuint32_t SELCTL:3;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC6_SC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :5;					 /*  */
        vuint32_t SELSTAT:3;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } AC6_SS;

  union {
    vuint32_t R;
      struct {
        vuint32_t DE:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t DIV:7;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } AC6_DC0;

};


/* ============================================================================
   ============================== Module: MC_ME ===============================
   ============================================================================ */

struct MC_ME_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t S_CURRENT_MODE:4;					 /*  */
        vuint32_t S_MTRANS:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t S_PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t S_MVR:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t S_FLA:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t S_PLL1:1;					 /*  */
        vuint32_t S_PLL0:1;					 /*  */
        vuint32_t S_XOSC:1;					 /*  */
        vuint32_t S_IRC:1;					 /*  */
        vuint32_t S_SYSCLK:4;					 /*  */
    } B;
  } GS;

  union {
    vuint32_t R;
      struct {
        vuint32_t TARGET_MODE:4;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t KEY:16;					 /*  */
    } B;
  } MCTL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t RESET_DEST:1;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t STOP0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t HALT0:1;					 /*  */
        vuint32_t RUN3:1;					 /*  */
        vuint32_t RUN2:1;					 /*  */
        vuint32_t RUN1:1;					 /*  */
        vuint32_t RUN0:1;					 /*  */
        vuint32_t DRUN:1;					 /*  */
        vuint32_t SAFE:1;					 /*  */
        vuint32_t TEST:1;					 /*  */
        vuint32_t RESET_FUNC:1;					 /*  */
    } B;
  } ME;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :27;					 /*  */
        vuint32_t I_ICONF_CU:1;					 /*  */
        vuint32_t I_ICONF:1;					 /*  */
        vuint32_t I_IMODE:1;					 /*  */
        vuint32_t I_SAFE:1;					 /*  */
        vuint32_t I_MTC:1;					 /*  */
    } B;
  } IS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :27;					 /*  */
        vuint32_t M_ICONF_CU:1;					 /*  */
        vuint32_t M_ICONF:1;					 /*  */
        vuint32_t M_IMODE:1;					 /*  */
        vuint32_t M_SAFE:1;					 /*  */
        vuint32_t M_MTC:1;					 /*  */
    } B;
  } IM;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t S_MRIG:1;					 /*  */
        vuint32_t S_MTI:1;					 /*  */
        vuint32_t S_MRI:1;					 /*  */
        vuint32_t S_DMA:1;					 /*  */
        vuint32_t S_NMA:1;					 /*  */
        vuint32_t S_SEA:1;					 /*  */
    } B;
  } IMTS;

  union {
    vuint32_t R;
      struct {
        vuint32_t PREVIOUS_MODE:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t MPH_BUSY:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PMC_PROG:1;					 /*  */
        vuint32_t DBG_MODE:1;					 /*  */
        vuint32_t CCKL_PROG:1;					 /*  */
        vuint32_t PCS_PROG:1;					 /*  */
        vuint32_t SMR:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t VREG_CSRC_SC:1;					 /*  */
        vuint32_t CSRC_CSRC_SC:1;					 /*  */
        vuint32_t IRC_SC:1;					 /*  */
        vuint32_t SCSRC_SC:1;					 /*  */
        vuint32_t SYSCLK_SW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t FLASH_SC:1;					 /*  */
        vuint32_t CDP_PRPH_224_255:1;					 /*  */
        vuint32_t CDP_PRPH_192_223:1;					 /*  */
        vuint32_t CDP_PRPH_160_191:1;					 /*  */
        vuint32_t CDP_PRPH_128_159:1;					 /*  */
        vuint32_t CDP_PRPH_96_127:1;					 /*  */
        vuint32_t CDP_PRPH_64_95:1;					 /*  */
        vuint32_t CDP_PRPH_32_63:1;					 /*  */
        vuint32_t CDP_PRPH_0_31:1;					 /*  */
    } B;
  } DMTS;

  uint8_t MC_ME_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } RESET_MC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } TEST_MC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } SAFE_MC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } DRUN_MC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } RUN_MC[4];

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } HALT0_MC;

  uint8_t MC_ME_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PWRLVL:3;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PDO:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t MVRON:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t FLAON:2;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t PLL1ON:1;					 /*  */
        vuint32_t PLL0ON:1;					 /*  */
        vuint32_t XOSCON:1;					 /*  */
        vuint32_t IRCON:1;					 /*  */
        vuint32_t SYSCLK:4;					 /*  */
    } B;
  } STOP0_MC;

  uint8_t MC_ME_reserved2[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t S_PIT_0:1;					 /*  */
        vuint32_t  :18;					 /*  */
        vuint32_t S_SIPI_0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_DIGRF_0:1;					 /*  */
        vuint32_t  :9;					 /*  */
    } B;
  } PS0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :25;					 /*  */
        vuint32_t S_CRC_0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_DMAMUX_0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_ATX:1;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } PS1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t S_LINFlex_1:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t S_CAN_0:1;					 /*  */
        vuint32_t S_CAN_1:1;					 /*  */
        vuint32_t S_CAN_2:1;					 /*  */
        vuint32_t  :13;					 /*  */
    } B;
  } PS2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t S_ADC_1:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_ADC_3:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t S_FLEXRAY:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t S_SENT_0:1;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t S_DSPI_0:1;					 /*  */
        vuint32_t S_DSPI_1:1;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } PS3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :13;					 /*  */
        vuint32_t S_DMAMUX_1:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_PWM_1:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t S_CTU_1:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t S_ETIMER_1:1;					 /*  */
        vuint32_t  :9;					 /*  */
    } B;
  } PS4;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :9;					 /*  */
        vuint32_t S_SENT_1:1;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t S_DSPI_2:1;					 /*  */
        vuint32_t S_DSPI_3:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t S_LINFlex_0:1;					 /*  */
        vuint32_t  :12;					 /*  */
    } B;
  } PS6;

  union {
    vuint32_t R;
      struct {
        vuint32_t S_PWM_0:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t S_CTU_0:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t S_ETIMER_0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_ETIMER_2:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t S_SWG_0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_ADC_0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t S_ADC_2:1;					 /*  */
        vuint32_t  :11;					 /*  */
    } B;
  } PS7;

  uint8_t MC_ME_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t RUN3:1;					 /*  */
        vuint32_t RUN2:1;					 /*  */
        vuint32_t RUN1:1;					 /*  */
        vuint32_t RUN0:1;					 /*  */
        vuint32_t DRUN:1;					 /*  */
        vuint32_t SAFE:1;					 /*  */
        vuint32_t TEST:1;					 /*  */
        vuint32_t RESET:1;					 /*  */
    } B;
  } RUN_PC[8];

  union {
    vuint32_t R;
      struct {
        vuint32_t  :21;					 /*  */
        vuint32_t STOP0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t HALT0:1;					 /*  */
        vuint32_t  :8;					 /*  */
    } B;
  } LP_PC[8];

  uint8_t MC_ME_reserved4[9];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL9;

  uint8_t MC_ME_reserved5[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL11;

  uint8_t MC_ME_reserved6[18];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL30;

  uint8_t MC_ME_reserved7[3];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL34;

  uint8_t MC_ME_reserved8[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL36;

  uint8_t MC_ME_reserved9[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL38;

  uint8_t MC_ME_reserved10[38];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL77;

  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL78;

  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL79;

  uint8_t MC_ME_reserved11[11];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL91;

  uint8_t MC_ME_reserved12[6];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL98;

  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL99;

  uint8_t MC_ME_reserved13[4];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL104;

  uint8_t MC_ME_reserved14[2];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL107;

  uint8_t MC_ME_reserved15[16];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL124;

  uint8_t MC_ME_reserved16[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL126;

  uint8_t MC_ME_reserved17[10];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL137;

  uint8_t MC_ME_reserved18[3];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL141;

  uint8_t MC_ME_reserved19[2];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL144;

  uint8_t MC_ME_reserved20[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL146;

  uint8_t MC_ME_reserved21[57];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL204;

  uint8_t MC_ME_reserved22[3];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL208;

  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL209;

  uint8_t MC_ME_reserved23[4];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL214;

  uint8_t MC_ME_reserved24[20];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL235;

  uint8_t MC_ME_reserved25[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL237;

  uint8_t MC_ME_reserved26[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL239;

  uint8_t MC_ME_reserved27[5];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL245;

  uint8_t MC_ME_reserved28[1];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL247;

  uint8_t MC_ME_reserved29[3];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL251;

  uint8_t MC_ME_reserved30[3];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :1;					 /*  */
        vuint8_t DBG_F:1;					 /*  */
        vuint8_t LP_CFG:3;					 /*  */
        vuint8_t RUN_CFG:3;					 /*  */
    } B;
  } PCTL255;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :31;					 /*  */
        vuint32_t S_CORE0:1;					 /*  */
    } B;
  } CS;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :5;					 /*  */
        vuint16_t STOP0:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t HALT0:1;					 /*  */
        vuint16_t RUN3:1;					 /*  */
        vuint16_t RUN2:1;					 /*  */
        vuint16_t RUN1:1;					 /*  */
        vuint16_t RUN0:1;					 /*  */
        vuint16_t DRUN:1;					 /*  */
        vuint16_t SAFE:1;					 /*  */
        vuint16_t TEST:1;					 /*  */
        vuint16_t RESET:1;					 /*  */
    } B;
  } CCTL0;

  uint8_t MC_ME_reserved31[26];
  union {
    vuint32_t R;
      struct {
        vuint32_t ADDR:30;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t RMC:1;					 /*  */
    } B;
  } CADDR0;

};


/* ============================================================================
   ============================== Module: MC_PCU ==============================
   ============================================================================ */

struct MC_PCU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :21;					 /*  */
        vuint32_t STOP0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t HALT0:1;					 /*  */
        vuint32_t RUN3:1;					 /*  */
        vuint32_t RUN2:1;					 /*  */
        vuint32_t RUN1:1;					 /*  */
        vuint32_t RUN0:1;					 /*  */
        vuint32_t DRUN:1;					 /*  */
        vuint32_t SAFE:1;					 /*  */
        vuint32_t TEST:1;					 /*  */
        vuint32_t RST:1;					 /*  */
    } B;
  } PCONF0;

  uint8_t MC_PCU_reserved0[60];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :31;					 /*  */
        vuint32_t PD0:1;					 /*  */
    } B;
  } PSTAT;

};


/* ============================================================================
   ============================== Module: MC_RGM ==============================
   ============================================================================ */

struct MC_RGM_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					    /*  */
        vuint32_t F_VOR_DEST:1;			/*  */
        vuint32_t F_TSR_DEST:1;			/*  */
        vuint32_t  :13;					    /*  */
        vuint32_t F_FIF:1;					/*  */
        vuint32_t F_EDR:1;					/*  */
        vuint32_t  :2;					    /*  */
        vuint32_t F_SUF:1;					/*  */
        vuint32_t F_FFRR:1;					/*  */
        vuint32_t F_SOFT_DEST:1;		/*  */
        vuint32_t  :2;					    /*  */
        vuint32_t F_POR:1;					/*  */
    } B;
  } DES;

  uint8_t MC_RGM_reserved0[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					    /*  */
        vuint32_t D_VOR_DEST:1;			/*  */
        vuint32_t D_TSR_DEST:1;			/*  */
        vuint32_t  :13;					    /*  */
        vuint32_t D_FIF:1;					/*  */
        vuint32_t D_EDR:1;					/*  */
        vuint32_t  :2;					    /*  */
        vuint32_t D_SUF:1;					/*  */
        vuint32_t D_FFRR:1;					/*  */
        vuint32_t D_SOF_DEST:1;			/*  */
        vuint32_t  :2;					    /*  */
        vuint32_t D_POR:1;					/*  */
    } B;
  } DERD;

  uint8_t MC_RGM_reserved1[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t AR_TSR_DEST:1;					 /*  */
        vuint32_t  :23;					 /*  */
    } B;
  } DEAR;

  uint8_t MC_RGM_reserved2[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t BE_VOR_DEST:1;					 /*  */
        vuint32_t BE_TSR_DEST:1;					 /*  */
        vuint32_t  :14;					 /*  */
        vuint32_t BE_EDR:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t BE_FFRR:1;					 /*  */
        vuint32_t BE_SOF_DEST:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t BE_POR:1;					 /*  */
    } B;
  } DBRE;

  uint8_t MC_RGM_reserved3[716];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t F_VOR_FUNC:1;					 /*  */
        vuint32_t F_TSR_FUNC:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t F_JTAG_FUNC:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t F_FCCU_SOFT:1;					 /*  */
        vuint32_t F_FCCU_HARD:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t F_SOFT_FUNC:1;					 /*  */
        vuint32_t F_ST_DONE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t F_EXR:1;					 /*  */
    } B;
  } FES;

  uint8_t MC_RGM_reserved4[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t D_VOR_FUNC:1;					 /*  */
        vuint32_t D_TSR_FUNC:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t D_JTAG_FUNC:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t D_FCCU_SOFT:1;					 /*  */
        vuint32_t D_FCCU_HARD:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t D_SOFT_FUNC:1;					 /*  */
        vuint32_t D_ST_DONE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t D_EXR:1;					 /*  */
    } B;
  } FERD;

  uint8_t MC_RGM_reserved5[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t AR_VOR_FUNC:1;					 /*  */
        vuint32_t AR_TSR_FUNC:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t AR_JTAG_FUNC:1;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t AR_EXR:1;					 /*  */
    } B;
  } FEAR;

  uint8_t MC_RGM_reserved6[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t BE_VOR_FUNC:1;					 /*  */
        vuint32_t BE_TSR_FUNC:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t BE_JTAG_FUNC:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t BE_FCCU_SOFT:1;					 /*  */
        vuint32_t BE_FCCU_HARD:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t BE_SOFT_FUNC:1;					 /*  */
        vuint32_t BE_ST_DONE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t BE_EXR:1;					 /*  */
    } B;
  } FBRE;

  uint8_t MC_RGM_reserved7[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t SS_VOR_FUNC:1;					 /*  */
        vuint32_t SS_TSR_FUNC:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t SS_JTAG_FUNC:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SS_FCCU_SOFT:1;					 /*  */
        vuint32_t SS_FCCU_HARD:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t SS_SOFT_FUNC:1;					 /*  */
        vuint32_t SS_ST_DONE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t SS_EXR:1;					 /*  */
    } B;
  } FESS;

  uint8_t MC_RGM_reserved8[704];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t FRET:4;				/*  */
        vuint32_t  :24;					/*  */        
    } B;
  } FRET;
  union {
    vuint32_t R;
      struct {
        vuint32_t  :4;					 /*  */
        vuint32_t DRET:4;				/*  */
        vuint32_t  :24;					/*  */        
    } B;
  } DRET;

};


/* ============================================================================
   =============================== Module: MEMU ===============================
   ============================================================================ */

struct MEMU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SWR:1;					 /*  */
        vuint32_t  :15;					 /*  */
    } B;
  } CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :11;					 /*  */
        vuint32_t PR_CE:1;					 /*  */
        vuint32_t PR_UCE:1;					 /*  */
        vuint32_t PR_CEO:1;					 /*  */
        vuint32_t PR_UCO:1;					 /*  */
        vuint32_t PR_EBO:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t F_CE:1;					 /*  */
        vuint32_t F_UCE:1;					 /*  */
        vuint32_t F_CEO:1;					 /*  */
        vuint32_t F_UCO:1;					 /*  */
        vuint32_t F_EBO:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t SR_CE:1;					 /*  */
        vuint32_t SR_UCE:1;					 /*  */
        vuint32_t SR_CEO:1;					 /*  */
        vuint32_t SR_UCO:1;					 /*  */
        vuint32_t SR_EBO:1;					 /*  */
    } B;
  } ERR_FLAG;

  uint8_t MEMU_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :11;					 /*  */
        vuint32_t FR_PR_CE:1;					 /*  */
        vuint32_t FR_PR_UCE:1;					 /*  */
        vuint32_t FR_PR_CEO:1;					 /*  */
        vuint32_t FR_PR_UCO:1;					 /*  */
        vuint32_t FR_PR_EBO:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t FR_F_CE:1;					 /*  */
        vuint32_t FR_F_UCE:1;					 /*  */
        vuint32_t FR_F_CEO:1;					 /*  */
        vuint32_t FR_F_UCO:1;					 /*  */
        vuint32_t FR_F_EBO:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t FR_SR_CE:1;					 /*  */
        vuint32_t FR_SR_UCE:1;					 /*  */
        vuint32_t FR_SR_CEO:1;					 /*  */
        vuint32_t FR_SR_UCO:1;					 /*  */
        vuint32_t FR_SR_EBO:1;					 /*  */
    } B;
  } DEBUG;

  uint8_t MEMU_reserved1[16];
  struct {
    union {
      vuint32_t R;
        struct {
          vuint32_t VLD:1;					 /*  */
          vuint32_t  :23;					 /*  */
          vuint32_t BAD_BIT:8;					 /*  */
      } B;
    } SYS_RAM_CERR_STS;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t ERR_ADD:32;					 /*  */
      } B;
    } SYS_RAM_CERR_ADDR;
  } CHANNEL0[10];

  union {
    vuint32_t R;
      struct {
        vuint32_t VLD:1;					 /*  */
        vuint32_t  :31;					 /*  */
    } B;
  } SYS_RAM_UNCERR_STS;

  union {
    vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;					 /*  */
    } B;
  } SYS_RAM_UNCERR_ADDR;

  union {
    vuint32_t R;
      struct {
        vuint32_t OFLW:32;					 /*  */
    } B;
  } SYS_RAM_OFLW[3];

  uint8_t MEMU_reserved2[1436];
  struct {
    union {
      vuint32_t R;
        struct {
          vuint32_t VLD:1;					 /*  */
          vuint32_t  :23;					 /*  */
          vuint32_t BAD_BIT:8;					 /*  */
      } B;
    } PERIPH_RAM_CERR_STS;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t ERR_ADD:32;					 /*  */
      } B;
    } PERIPH_RAM_CERR_ADDR;
  } CHANNEL1[2];

  union {
    vuint32_t R;
      struct {
        vuint32_t VLD:1;					 /*  */
        vuint32_t  :31;					 /*  */
    } B;
  } PERIPH_RAM_UNCERR_STS;

  union {
    vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;					 /*  */
    } B;
  } PERIPH_RAM_UNCERR_ADDR;

  union {
    vuint32_t R;
      struct {
        vuint32_t OFLW:32;					 /*  */
    } B;
  } PERIPH_RAM_OFLW0;

  uint8_t MEMU_reserved3[1508];
  struct {
    union {
      vuint32_t R;
        struct {
          vuint32_t VLD:1;					 /*  */
          vuint32_t  :23;					 /*  */
          vuint32_t BAD_BIT:8;					 /*  */
      } B;
    } FLASH_CERR_STS;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t ERR_ADD:32;					 /*  */
      } B;
    } FLASH_CERR_ADDR;
  } CHANNEL2[20];

  union {
    vuint32_t R;
      struct {
        vuint32_t VLD:1;					 /*  */
        vuint32_t  :31;					 /*  */
    } B;
  } FLASH_UNCERR_STS;

  union {
    vuint32_t R;
      struct {
        vuint32_t ERR_ADD:32;					 /*  */
    } B;
  } FLASH_UNCERR_ADDR;

  union {
    vuint32_t R;
      struct {
        vuint32_t OFLW:32;					 /*  */
    } B;
  } FLASH_OFLW0;

};


/* ============================================================================
   =============================== Module: PCM ================================
   ============================================================================ */

struct PCM_tag {
  uint8_t PCM_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :13;					 /*  */
        vuint32_t PRE:1;					 /* Pending Read Enable */
        vuint32_t BRE:1;					 /* Burst Read Enable */
        vuint32_t BWE:1;					 /* Burst Write Enable */
        vuint32_t  :16;					 /*  */
    } B;
  } IAHB_BE1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :21;					 /*  */
        vuint32_t PRE:1;					 /* Pending Read Enable */
        vuint32_t BRE:1;					 /* Burst Read Enable */
        vuint32_t BWE:1;					 /* Burst Write Enable */
        vuint32_t  :8;					 /*  */
    } B;
  } IAHB_BE2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :21;					 /*  */
        vuint32_t PRE_B:1;					 /* Pending Read Enable */
        vuint32_t BRE_B:1;					 /* Burst Read Enable */
        vuint32_t BWE_B:1;					 /* Burst Write Enable */
        vuint32_t  :5;					 /*  */
        vuint32_t PRE_A:1;					 /* Pending Read Enable */
        vuint32_t BRE_A:1;					 /* Burst Read Enable */
        vuint32_t BWE_A:1;					 /* Burst Write Enable */
    } B;
  } IAHB_BE3;

};


/* ============================================================================
   ============================== Module: PFLASH ==============================
   ============================================================================ */

struct PFLASH_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t P0_M15PFE:1;					 /*  */
        vuint32_t P0_M14PFE:1;					 /*  */
        vuint32_t P0_M13PFE:1;					 /*  */
        vuint32_t P0_M12PFE:1;					 /*  */
        vuint32_t P0_M11PFE:1;					 /*  */
        vuint32_t P0_M10PFE:1;					 /*  */
        vuint32_t P0_M9PFE:1;					 /*  */
        vuint32_t P0_M8PFE:1;					 /*  */
        vuint32_t P0_M7PFE:1;					 /*  */
        vuint32_t P0_M6PFE:1;					 /*  */
        vuint32_t P0_M5PFE:1;					 /*  */
        vuint32_t P0_M4PFE:1;					 /*  */
        vuint32_t P0_M3PFE:1;					 /*  */
        vuint32_t P0_M2PFE:1;					 /*  */
        vuint32_t P0_M1PFE:1;					 /*  */
        vuint32_t P0_M0PFE:1;					 /*  */
        vuint32_t APC:3;					 /*  */
        vuint32_t RWSC:5;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t P0_DPFEN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t P0_IPFEN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t P0_PFLIM:2;					 /*  */
        vuint32_t P0_BFEN:1;					 /*  */
    } B;
  } PFCR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t P1_M15PFE:1;					 /*  */
        vuint32_t P1_M14PFE:1;					 /*  */
        vuint32_t P1_M13PFE:1;					 /*  */
        vuint32_t P1_M12PFE:1;					 /*  */
        vuint32_t P1_M11PFE:1;					 /*  */
        vuint32_t P1_M10PFE:1;					 /*  */
        vuint32_t P1_M9PFE:1;					 /*  */
        vuint32_t P1_M8PFE:1;					 /*  */
        vuint32_t P1_M7PFE:1;					 /*  */
        vuint32_t P1_M6PFE:1;					 /*  */
        vuint32_t P1_M5PFE:1;					 /*  */
        vuint32_t P1_M4PFE:1;					 /*  */
        vuint32_t P1_M3PFE:1;					 /*  */
        vuint32_t P1_M2PFE:1;					 /*  */
        vuint32_t P1_M1PFE:1;					 /*  */
        vuint32_t P1_M0PFE:1;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t P1_DPFEN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t P1_IPFEN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t P1_PFLIM:2;					 /*  */
        vuint32_t P1_BFEN:1;					 /*  */
    } B;
  } PFCR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t P0_WCFG:2;					 /*  */
        vuint32_t P1_WCFG:2;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ARBM:2;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :12;					 /*  */
    } B;
  } PFCR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0AP:2;					 /*  */
        vuint32_t M1AP:2;					 /*  */
        vuint32_t M2AP:2;					 /*  */
        vuint32_t M3AP:2;					 /*  */
        vuint32_t M4AP:2;					 /*  */
        vuint32_t M5AP:2;					 /*  */
        vuint32_t M6AP:2;					 /*  */
        vuint32_t M7AP:2;					 /*  */
        vuint32_t M8AP:2;					 /*  */
        vuint32_t M9AP:2;					 /*  */
        vuint32_t M10AP:2;					 /*  */
        vuint32_t M11AP:2;					 /*  */
        vuint32_t M12AP:2;					 /*  */
        vuint32_t M13AP:2;					 /*  */
        vuint32_t M14AP:2;					 /*  */
        vuint32_t M15AP:2;					 /*  */
    } B;
  } PFAPR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :23;					 /*  */
        vuint32_t SAFE_CAL:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t IRMEN:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t GRMEN:1;					 /*  */
    } B;
  } PFCRCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t CRD0EN:1;					 /*  */
        vuint32_t CRD1EN:1;					 /*  */
        vuint32_t CRD2EN:1;					 /*  */
        vuint32_t CRD3EN:1;					 /*  */
        vuint32_t CRD4EN:1;					 /*  */
        vuint32_t CRD5EN:1;					 /*  */
        vuint32_t CRD6EN:1;					 /*  */
        vuint32_t CRD7EN:1;					 /*  */
        vuint32_t CRD8EN:1;					 /*  */
        vuint32_t CRD9EN:1;					 /*  */
        vuint32_t CRD10EN:1;					 /*  */
        vuint32_t CRD11EN:1;					 /*  */
        vuint32_t CRD12EN:1;					 /*  */
        vuint32_t CRD13EN:1;					 /*  */
        vuint32_t CRD14EN:1;					 /*  */
        vuint32_t CRD15EN:1;					 /*  */
        vuint32_t CRD16EN:1;					 /*  */
        vuint32_t CRD17EN:1;					 /*  */
        vuint32_t CRD18EN:1;					 /*  */
        vuint32_t CRD19EN:1;					 /*  */
        vuint32_t CRD20EN:1;					 /*  */
        vuint32_t CRD21EN:1;					 /*  */
        vuint32_t CRD22EN:1;					 /*  */
        vuint32_t CRD23EN:1;					 /*  */
        vuint32_t CRD24EN:1;					 /*  */
        vuint32_t CRD25EN:1;					 /*  */
        vuint32_t CRD26EN:1;					 /*  */
        vuint32_t CRD27EN:1;					 /*  */
        vuint32_t CRD28EN:1;					 /*  */
        vuint32_t CRD29EN:1;					 /*  */
        vuint32_t CRD30EN:1;					 /*  */
        vuint32_t CRD31EN:1;					 /*  */
    } B;
  } PFCRDE;

  uint8_t PFLASH_reserved0[232];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD0_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD0_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD0_Word2;

  uint8_t PFLASH_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD1_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD1_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD1_Word2;

  uint8_t PFLASH_reserved2[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD2_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD2_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD2_Word2;

  uint8_t PFLASH_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD3_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD3_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD3_Word2;

  uint8_t PFLASH_reserved4[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD4_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD4_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD4_Word2;

  uint8_t PFLASH_reserved5[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD5_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD5_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD5_Word2;

  uint8_t PFLASH_reserved6[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD6_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD6_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD6_Word2;

  uint8_t PFLASH_reserved7[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t LSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD7_Word0;

  union {
    vuint32_t R;
      struct {
        vuint32_t PSTARTADDR:28;					 /*  */
        vuint32_t  :4;					 /*  */
    } B;
  } PFCRD7_Word1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0EN:1;					 /*  */
        vuint32_t M1EN:1;					 /*  */
        vuint32_t M2EN:1;					 /*  */
        vuint32_t M3EN:1;					 /*  */
        vuint32_t M4EN:1;					 /*  */
        vuint32_t M5EN:1;					 /*  */
        vuint32_t M6EN:1;					 /*  */
        vuint32_t M7EN:1;					 /*  */
        vuint32_t M8EN:1;					 /*  */
        vuint32_t M9EN:1;					 /*  */
        vuint32_t M10EN:1;					 /*  */
        vuint32_t M11EN:1;					 /*  */
        vuint32_t M12EN:1;					 /*  */
        vuint32_t M13EN:1;					 /*  */
        vuint32_t M14EN:1;					 /*  */
        vuint32_t M15EN:1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t CRDSize:5;					 /*  */
    } B;
  } PFCRD7_Word2;

};


/* ============================================================================
   =============================== Module: PIT ================================
   ============================================================================ */

struct PIT_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t MDIS:1;					 /* Module Disable */
        vuint32_t FRZ:1;					 /* Freeze */
    } B;
  } MCR;

  uint8_t PIT_reserved0[220];
  union {
    vuint32_t R;
      struct {
        vuint32_t LTH:32;					 /* Life Timer value */
    } B;
  } LTMR64H;

  union {
    vuint32_t R;
      struct {
        vuint32_t LTL:32;					 /* Life Timer value */
    } B;
  } LTMR64L;

  uint8_t PIT_reserved1[24];
  struct {
    union {
      vuint32_t R;
        struct {
          vuint32_t TSV:32;					 /* Timer Start Value */
      } B;
    } LDVAL;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t TVL:32;					 /* Current Timer Value */
      } B;
    } CVAL;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t  :29;					 /*  */
          vuint32_t CHN:1;					 /* Chain Mode */
          vuint32_t TIE:1;					 /* Timer Interrupt Enable */
          vuint32_t TEN:1;					 /* Timer Enable */
      } B;
    } TCTRL;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t  :31;					 /*  */
          vuint32_t TIF:1;					 /* Timer Interrupt Flag */
      } B;
    } TFLG;
  } TIMER[4];

};


/* ============================================================================
   ============================== Module: PLLDIG ==============================
   ============================================================================ */

struct PLLDIG_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t CLKCFG:2;					 /*  */
        vuint32_t EXPDIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t LOLIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } PLL0CR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t EXTPDF:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t LOLF:1;					 /*  */
        vuint32_t LOCK:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } PLL0SR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t RFDPHI1:4;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t RFDPHI:6;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PREDIV:3;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t MFD:7;					 /*  */
    } B;
  } PLL0DV;

  uint8_t PLLDIG_reserved0[20];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /*  */
        vuint32_t CLKCFG:2;					 /*  */
        vuint32_t EXPDIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t LOLIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } PLL1CR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t EXTPDF:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t LOLF:1;					 /*  */
        vuint32_t LOCK:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } PLL1SR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t RFDPHI:6;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t MFD:7;					 /*  */
    } B;
  } PLL1DV;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t MODEN:1;					 /*  */
        vuint32_t MODSEL:1;					 /*  */
        vuint32_t MODPRD:13;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t INCSTP:15;					 /*  */
    } B;
  } PLL1FM;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t FDEN:1;					 /*  */
        vuint32_t  :12;					 /*  */
        vuint32_t DTHDIS:2;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t FRCDIV:12;					 /*  */
    } B;
  } PLL1FD;

};


/* ============================================================================
   =============================== Module: PMC ================================
   ============================================================================ */

struct PMC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :30;					 /*  */
        vuint32_t INT_EXT_AUX_REG:1;					 /*  */
        vuint32_t EXT_INT_REG:1;					 /*  */
    } B;
  } PMCSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :25;					 /*  */
        vuint32_t VD6:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t VD4:1;					 /*  */
        vuint32_t VD3:1;					 /*  */
        vuint32_t  :3;					 /*  */
    } B;
  } RSSR;

  union {
    vuint32_t R;
      struct {
        vuint32_t PMCCR_EN:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t LVD280_OSC_DIS:1;					 /*  */
        vuint32_t LVD280_ADC_DIS:1;					 /*  */
        vuint32_t LVD280_IO_DIS:1;					 /*  */
        vuint32_t LVD280_FLASH_DIS:1;					 /*  */
        vuint32_t LVD280_CORE_DIS:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t HVD140_CORE_DIS:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t LVD114_CORE_DIS:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t INT_AUX_REG_BYPASS:1;					 /*  */
        vuint32_t INT_REG_BYPASS:1;					 /*  */
    } B;
  } PMCCR;

  uint8_t PMC_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t IE_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TS1_3IE:1;					 /*  */
        vuint32_t TS1_2IE:1;					 /*  */
        vuint32_t TS1_0IE:1;					 /*  */
        vuint32_t TS0_3IE:1;					 /*  */
        vuint32_t TS0_2IE:1;					 /*  */
        vuint32_t TS0_0IE:1;					 /*  */
        vuint32_t  :9;					 /*  */
        vuint32_t VD6IE_O:1;					 /*  */
        vuint32_t VD6IE_ADC:1;					 /*  */
        vuint32_t VD6IE_IM:1;					 /*  */
        vuint32_t VD6IE_F:1;					 /*  */
        vuint32_t VD6IE_C:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t VD4IE_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t VD3IE_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
    } B;
  } IER;

  uint8_t PMC_reserved1[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t VD15_C:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t VD12_C:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t VD6_O:1;					 /*  */
        vuint32_t VD6_ADC:1;					 /*  */
        vuint32_t VD6_IM:1;					 /*  */
        vuint32_t VD6_F:1;					 /*  */
        vuint32_t VD6_C:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t VD5_C:1;					 /*  */
        vuint32_t VD4_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t VD3_C:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t VD2_C:1;					 /*  */
        vuint32_t VD1_C:1;					 /*  */
    } B;
  } ESR_0;

  uint8_t PMC_reserved2[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :17;					 /*  */
        vuint32_t VD6RE_O:1;					 /*  */
        vuint32_t VD6RE_ADC:1;					 /*  */
        vuint32_t VD6RE_IM:1;					 /*  */
        vuint32_t VD6RE_F:1;					 /*  */
        vuint32_t VD6RE_C:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t VD4RE_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t VD3RE_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
    } B;
  } REE_0;

  uint8_t PMC_reserved3[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :17;					 /*  */
        vuint32_t VD6RES_O:1;					 /*  */
        vuint32_t VD6RES_ADC:1;					 /*  */
        vuint32_t VD6RES_IM:1;					 /*  */
        vuint32_t VD6RES_F:1;					 /*  */
        vuint32_t VD6RES_C:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t VD4RES_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t VD3RES_C:1;					 /*  */
        vuint32_t  :3;					 /*  */
    } B;
  } RES_0;

  uint8_t PMC_reserved4[44];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t STEST_Fault:1;					 /*  */
        vuint32_t TSNS_Fault:1;					 /*  */
        vuint32_t HVD_Fault:1;					 /*  */
        vuint32_t LVD_Fault:1;					 /*  */
    } B;
  } FIR;

  uint8_t PMC_reserved5[140];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t TEMP1_3:1;					 /*  */
        vuint32_t TEMP1_2:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TEMP1_0:1;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t TEMP0_3:1;					 /*  */
        vuint32_t TEMP0_2:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TEMP0_0:1;					 /*  */
    } B;
  } ESR_TD;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t TEMP1_3:1;					 /*  */
        vuint32_t TEMP1_2:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TEMP1_0:1;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t TEMP0_3:1;					 /*  */
        vuint32_t TEMP0_2:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TEMP0_0:1;					 /*  */
    } B;
  } REE_TD;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t TEMP1_3:1;					 /* TEMP1_3 Reset Event Select. */
        vuint32_t TEMP1_2:1;					 /* TEMP1_2 Reset Event Select. */
        vuint32_t  :1;					 /*  */
        vuint32_t TEMP1_0:1;					 /* TEMP1_0 Reset Event Select. */
        vuint32_t  :4;					 /*  */
        vuint32_t TEMP0_3:1;					 /* TEMP0_3 Reset Event Select. */
        vuint32_t TEMP0_2:1;					 /* TEMP0_2 Reset Event Select. */
        vuint32_t  :1;					 /*  */
        vuint32_t TEMP0_0:1;					 /* TEMP0_0 Reset Event Select. */
    } B;
  } RES_TD;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :17;					 /*  */
        vuint32_t TS1_TRIM_ADJ:5;					 /*  */
        vuint32_t TS1_DOUT_EN:1;					 /*  */
        vuint32_t TS1_AOUT_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TS0_TRIM_ADJ:5;					 /*  */
        vuint32_t TS0_DOUT_EN:1;					 /*  */
        vuint32_t TS0_AOUT_EN:1;					 /*  */
    } B;
  } CTL_TD;

  uint8_t PMC_reserved6[44];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t STTW:12;					 /*  */
    } B;
  } STTW;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :14;					 /*  */
        vuint32_t ST_RESULT:1;					 /* TBD */
        vuint32_t ST_DONE:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t ST_MODE:2;					 /* Self Test mode bits for testing of LVDs and HVDs. */
        vuint32_t VD_ST_CTRL:6;					 /*  */
    } B;
  } VD_UTST;

};


/* ============================================================================
   ============================== Module: PRAMC ===============================
   ============================================================================ */

struct PRAMC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :22;					 /* Reserved. */
        vuint32_t PRI:2;					 /* AHB port arbitration mode. */
        vuint32_t P1_BO_DIS:1;					 /* Port p1 read burst optimization disable. */
        vuint32_t P0_BO_DIS:1;					 /*  */
        vuint32_t P1_RB_DIS:1;					 /* Port p1 read buffer disable. */
        vuint32_t P0_RB_DIS:1;					 /*  */
        vuint32_t  :3;					 /* Reserved. */
        vuint32_t RD1WS:1;					 /* Read One Wait State. */
    } B;
  } PRCR1;

};


/* ============================================================================
   ============================== Module: RCOSC ===============================
   ============================================================================ */

struct RCOSC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :7;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t USER_TRIM:5;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :5;					 /*  */
    } B;
  } CTL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t REG_EN:1;					 /*  */
        vuint32_t TSENS_EN:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t RCTRIM:8;					 /*  */
    } B;
  } NT;

};


/* ============================================================================
   =============================== Module: SGEN ===============================
   ============================================================================ */

struct SGEN_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t LdOS:1;					 /* Load on set */
        vuint32_t  :1;					 /*  */
        vuint32_t IOAmpl:4;					 /* IO amplitude */
        vuint32_t  :2;					 /*  */
        vuint32_t SEmask:1;					 /* Sine wave generator error mask interrupt register */
        vuint32_t  :3;					 /*  */
        vuint32_t Trig_sel:1;					 /* Input trigger select */
        vuint32_t trig_en:1;					 /* Input phase align trigger enable bit */
        vuint32_t S0H1:1;					 /* Operation status */
        vuint32_t PDs:1;					 /* Operation status */
        vuint32_t IOFreq:16;					 /* Sine wave frequency value on I/O pad */
    } B;
  } CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :8;					 /*  */
        vuint32_t SErr:1;					 /* Status error */
        vuint32_t  :3;					 /*  */
        vuint32_t FErr:1;					 /* Force error */
        vuint32_t PhErr:1;					 /* Phase error force bit */
        vuint32_t  :18;					 /*  */
    } B;
  } STAT;

};


/* ============================================================================
   =============================== Module: SIPI ===============================
   ============================================================================ */

struct SIPI_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t TC:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t WL:2;					 /*  */
        vuint32_t CHEN:1;					 /*  */
        vuint32_t ST:1;					 /*  */
        vuint32_t IDT:1;					 /*  */
        vuint32_t RRT:1;					 /*  */
        vuint32_t WRT:1;					 /*  */
        vuint32_t DEN:1;					 /*  */
    } B;
  } CCR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t RAR:1;					 /*  */
        vuint32_t TID:3;					 /*  */
        vuint32_t ACKR:1;					 /*  */
        vuint32_t CB:1;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } CSR0;

  uint8_t SIPI_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t WAIE:1;					 /*  */
        vuint32_t RAIE:1;					 /*  */
        vuint32_t TCIE:1;					 /*  */
        vuint32_t TOIE:1;					 /*  */
        vuint32_t TIDIE:1;					 /*  */
        vuint32_t ACKIE:1;					 /*  */
    } B;
  } CIR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t TOR:8;					 /*  */
    } B;
  } CTOR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t CRCI:16;					 /*  */
        vuint32_t CRCT:16;					 /*  */
    } B;
  } CCRC0;

  union {
    vuint32_t R;
      struct {
        vuint32_t CAR:32;					 /*  */
    } B;
  } CAR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t CDR:32;					 /*  */
    } B;
  } CDR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t TC:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t WL:2;					 /*  */
        vuint32_t CHEN:1;					 /*  */
        vuint32_t ST:1;					 /*  */
        vuint32_t IDT:1;					 /*  */
        vuint32_t RRT:1;					 /*  */
        vuint32_t WRT:1;					 /*  */
        vuint32_t DEN:1;					 /*  */
    } B;
  } CCR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t RAR:1;					 /*  */
        vuint32_t TID:3;					 /*  */
        vuint32_t ACKR:1;					 /*  */
        vuint32_t CB:1;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } CSR1;

  uint8_t SIPI_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t WAIE:1;					 /*  */
        vuint32_t RAIE:1;					 /*  */
        vuint32_t TCIE:1;					 /*  */
        vuint32_t TOIE:1;					 /*  */
        vuint32_t TIDIE:1;					 /*  */
        vuint32_t ACKIE:1;					 /*  */
    } B;
  } CIR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t TOR:8;					 /*  */
    } B;
  } CTOR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t CRCI:16;					 /*  */
        vuint32_t CRCT:16;					 /*  */
    } B;
  } CCRC1;

  union {
    vuint32_t R;
      struct {
        vuint32_t CAR:32;					 /*  */
    } B;
  } CAR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t CDR:32;					 /*  */
    } B;
  } CDR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t TC:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t WL:2;					 /*  */
        vuint32_t CHEN:1;					 /*  */
        vuint32_t ST:1;					 /*  */
        vuint32_t IDT:1;					 /*  */
        vuint32_t RRT:1;					 /*  */
        vuint32_t WRT:1;					 /*  */
        vuint32_t DEN:1;					 /*  */
    } B;
  } CCR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t RAR:1;					 /*  */
        vuint32_t TID:3;					 /*  */
        vuint32_t ACKR:1;					 /*  */
        vuint32_t CB:1;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } CSR2;

  uint8_t SIPI_reserved2[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t WAIE:1;					 /*  */
        vuint32_t RAIE:1;					 /*  */
        vuint32_t TCIE:1;					 /*  */
        vuint32_t TOIE:1;					 /*  */
        vuint32_t TIDIE:1;					 /*  */
        vuint32_t ACKIE:1;					 /*  */
    } B;
  } CIR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t TOR:8;					 /*  */
    } B;
  } CTOR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t CRCI:16;					 /*  */
        vuint32_t CRCT:16;					 /*  */
    } B;
  } CCRC2;

  union {
    vuint32_t R;
      struct {
        vuint32_t CAR:32;					 /*  */
    } B;
  } CAR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t CDR2:32;					 /*  */
    } B;
  } CDR2[8];

  union {
    vuint32_t R;
      struct {
        vuint32_t  :15;					 /*  */
        vuint32_t TC:1;					 /*  */
        vuint32_t  :8;					 /*  */
        vuint32_t WL:2;					 /*  */
        vuint32_t CHEN:1;					 /*  */
        vuint32_t ST:1;					 /*  */
        vuint32_t IDT:1;					 /*  */
        vuint32_t RRT:1;					 /*  */
        vuint32_t WRT:1;					 /*  */
        vuint32_t DEN:1;					 /*  */
    } B;
  } CCR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t RAR:1;					 /*  */
        vuint32_t TID:3;					 /*  */
        vuint32_t ACKR:1;					 /*  */
        vuint32_t CB:1;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } CSR3;

  uint8_t SIPI_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :26;					 /*  */
        vuint32_t WAIE:1;					 /*  */
        vuint32_t RAIE:1;					 /*  */
        vuint32_t TCIE:1;					 /*  */
        vuint32_t TOIE:1;					 /*  */
        vuint32_t TIDIE:1;					 /*  */
        vuint32_t ACKIE:1;					 /*  */
    } B;
  } CIR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :24;					 /*  */
        vuint32_t TOR:8;					 /*  */
    } B;
  } CTOR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t CRCI:16;					 /*  */
        vuint32_t CRCT:16;					 /*  */
    } B;
  } CCRC3;

  union {
    vuint32_t R;
      struct {
        vuint32_t CAR:32;					 /*  */
    } B;
  } CAR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t CDR:32;					 /*  */
    } B;
  } CDR3;

  union {
    vuint32_t R;
      struct {
        vuint32_t FRZ:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t HALT:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t PRSCLR:11;					 /*  */
        vuint32_t AID:2;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CRCIE:1;					 /*  */
        vuint32_t MCRIE:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t TEN:1;					 /*  */
        vuint32_t INIT:1;					 /*  */
        vuint32_t MOEN:1;					 /*  */
        vuint32_t SR:1;					 /*  */
    } B;
  } MCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t FRZACK:1;					 /*  */
        vuint32_t LPMACK:1;					 /*  */
        vuint32_t  :19;					 /*  */
        vuint32_t GCRCE:1;					 /*  */
        vuint32_t MCR:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t TE:4;					 /*  */
        vuint32_t STATE:4;					 /*  */
    } B;
  } SR;

  union {
    vuint32_t R;
      struct {
        vuint32_t MXCNT:30;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } MAXCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t ADRLD:30;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } ARR;

  union {
    vuint32_t R;
      struct {
        vuint32_t ADCNT:30;					 /*  */
        vuint32_t  :2;					 /*  */
    } B;
  } ACR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :5;					 /*  */
        vuint32_t TOE3:1;					 /*  */
        vuint32_t TIDE3:1;					 /*  */
        vuint32_t ACKE3:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t TOE2:1;					 /*  */
        vuint32_t TIDE2:1;					 /*  */
        vuint32_t ACKE2:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t TOE1:1;					 /*  */
        vuint32_t TIDE1:1;					 /*  */
        vuint32_t ACKE1:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t TOE0:1;					 /*  */
        vuint32_t TIDE0:1;					 /*  */
        vuint32_t ACKE0:1;					 /*  */
    } B;
  } ERR;

};


/* ============================================================================
   ============================== Module: SIUL2 ===============================
   ============================================================================ */

struct SIUL2_tag {
  uint8_t SIUL2_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t PARTNUM:16;					 /* MCU Part Number */
        vuint32_t ED:1;					 /*  */
        vuint32_t PKG:5;					 /* Package Settings */
        vuint32_t  :2;					 /*  */
        vuint32_t MAJOR_MASK:4;					 /* Major Mask Revision */
        vuint32_t MINOR_MASK:4;					 /* Minor Mask Revision */
    } B;
  } MIDR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t SF:1;					 /* Manufacturer */
        vuint32_t FLASH_SIZE_1:4;					 /* Coarse granularity for flash memory size */
        vuint32_t FLASH_SIZE_2:4;					 /* Fine granularity for flash memory size */
        vuint32_t  :7;					 /*  */
        vuint32_t PARTNUM:8;					 /* ASCII character in MCU Part Number */
        vuint32_t  :8;					 /*  */
    } B;
  } MIDR2;

  uint8_t SIUL2_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t EIF31:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF30:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF29:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF28:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF27:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF26:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF25:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF24:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF23:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF22:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF21:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF20:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF19:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF18:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF17:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF16:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF15:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF14:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF13:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF12:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF11:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF10:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF9:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF8:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF7:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF6:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF5:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF4:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF3:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF2:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF1:1;					 /* External Interrupt Status Flag x */
        vuint32_t EIF0:1;					 /* External Interrupt Status Flag x */
    } B;
  } DISR0;

  uint8_t SIUL2_reserved2[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t EIRE31:1;					 /*  */
        vuint32_t EIRE30:1;					 /*  */
        vuint32_t EIRE29:1;					 /*  */
        vuint32_t EIRE28:1;					 /*  */
        vuint32_t EIRE27:1;					 /*  */
        vuint32_t EIRE26:1;					 /*  */
        vuint32_t EIRE25:1;					 /*  */
        vuint32_t EIRE24:1;					 /*  */
        vuint32_t EIRE23:1;					 /*  */
        vuint32_t EIRE22:1;					 /*  */
        vuint32_t EIRE21:1;					 /*  */
        vuint32_t EIRE20:1;					 /*  */
        vuint32_t EIRE19:1;					 /*  */
        vuint32_t EIRE18:1;					 /*  */
        vuint32_t EIRE17:1;					 /*  */
        vuint32_t EIRE16:1;					 /*  */
        vuint32_t EIRE15:1;					 /*  */
        vuint32_t EIRE14:1;					 /*  */
        vuint32_t EIRE13:1;					 /*  */
        vuint32_t EIRE12:1;					 /*  */
        vuint32_t EIRE11:1;					 /*  */
        vuint32_t EIRE10:1;					 /*  */
        vuint32_t EIRE9:1;					 /*  */
        vuint32_t EIRE8:1;					 /*  */
        vuint32_t EIRE7:1;					 /*  */
        vuint32_t EIRE6:1;					 /*  */
        vuint32_t EIRE5:1;					 /*  */
        vuint32_t EIRE4:1;					 /*  */
        vuint32_t EIRE3:1;					 /*  */
        vuint32_t EIRE2:1;					 /*  */
        vuint32_t EIRE1:1;					 /*  */
        vuint32_t EIRE0:1;					 /*  */
    } B;
  } DIRER0;

  uint8_t SIUL2_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t DIRSR31:1;					 /*  */
        vuint32_t DIRSR30:1;					 /*  */
        vuint32_t DIRSR29:1;					 /*  */
        vuint32_t DIRSR28:1;					 /*  */
        vuint32_t DIRSR27:1;					 /*  */
        vuint32_t DIRSR26:1;					 /*  */
        vuint32_t DIRSR25:1;					 /*  */
        vuint32_t DIRSR24:1;					 /*  */
        vuint32_t DIRSR23:1;					 /*  */
        vuint32_t DIRSR22:1;					 /*  */
        vuint32_t DIRSR21:1;					 /*  */
        vuint32_t DIRSR20:1;					 /*  */
        vuint32_t DIRSR19:1;					 /*  */
        vuint32_t DIRSR18:1;					 /*  */
        vuint32_t DIRSR17:1;					 /*  */
        vuint32_t DIRSR16:1;					 /*  */
        vuint32_t DIRSR15:1;					 /*  */
        vuint32_t DIRSR14:1;					 /*  */
        vuint32_t DIRSR13:1;					 /*  */
        vuint32_t DIRSR12:1;					 /*  */
        vuint32_t DIRSR11:1;					 /*  */
        vuint32_t DIRSR10:1;					 /*  */
        vuint32_t DIRSR9:1;					 /*  */
        vuint32_t DIRSR8:1;					 /*  */
        vuint32_t DIRSR7:1;					 /*  */
        vuint32_t DIRSR6:1;					 /*  */
        vuint32_t DIRSR5:1;					 /*  */
        vuint32_t DIRSR4:1;					 /*  */
        vuint32_t DIRSR3:1;					 /*  */
        vuint32_t DIRSR2:1;					 /*  */
        vuint32_t DIRSR1:1;					 /*  */
        vuint32_t DIRSR0:1;					 /*  */
    } B;
  } DIRSR0;

  uint8_t SIUL2_reserved4[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t IREE31:1;					 /*  */
        vuint32_t IREE30:1;					 /*  */
        vuint32_t IREE29:1;					 /*  */
        vuint32_t IREE28:1;					 /*  */
        vuint32_t IREE27:1;					 /*  */
        vuint32_t IREE26:1;					 /*  */
        vuint32_t IREE25:1;					 /*  */
        vuint32_t IREE24:1;					 /*  */
        vuint32_t IREE23:1;					 /*  */
        vuint32_t IREE22:1;					 /*  */
        vuint32_t IREE21:1;					 /*  */
        vuint32_t IREE20:1;					 /*  */
        vuint32_t IREE19:1;					 /*  */
        vuint32_t IREE18:1;					 /*  */
        vuint32_t IREE17:1;					 /*  */
        vuint32_t IREE16:1;					 /*  */
        vuint32_t IREE15:1;					 /*  */
        vuint32_t IREE14:1;					 /*  */
        vuint32_t IREE13:1;					 /*  */
        vuint32_t IREE12:1;					 /*  */
        vuint32_t IREE11:1;					 /*  */
        vuint32_t IREE10:1;					 /*  */
        vuint32_t IREE9:1;					 /*  */
        vuint32_t IREE8:1;					 /*  */
        vuint32_t IREE7:1;					 /*  */
        vuint32_t IREE6:1;					 /*  */
        vuint32_t IREE5:1;					 /*  */
        vuint32_t IREE4:1;					 /*  */
        vuint32_t IREE3:1;					 /*  */
        vuint32_t IREE2:1;					 /*  */
        vuint32_t IREE1:1;					 /*  */
        vuint32_t IREE0:1;					 /*  */
    } B;
  } IREER0;

  uint8_t SIUL2_reserved5[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t IFEE31:1;					 /*  */
        vuint32_t IFEE30:1;					 /*  */
        vuint32_t IFEE29:1;					 /*  */
        vuint32_t IFEE28:1;					 /*  */
        vuint32_t IFEE27:1;					 /*  */
        vuint32_t IFEE26:1;					 /*  */
        vuint32_t IFEE25:1;					 /*  */
        vuint32_t IFEE24:1;					 /*  */
        vuint32_t IFEE23:1;					 /*  */
        vuint32_t IFEE22:1;					 /*  */
        vuint32_t IFEE21:1;					 /*  */
        vuint32_t IFEE20:1;					 /*  */
        vuint32_t IFEE19:1;					 /*  */
        vuint32_t IFEE18:1;					 /*  */
        vuint32_t IFEE17:1;					 /*  */
        vuint32_t IFEE16:1;					 /*  */
        vuint32_t IFEE15:1;					 /*  */
        vuint32_t IFEE14:1;					 /*  */
        vuint32_t IFEE13:1;					 /*  */
        vuint32_t IFEE12:1;					 /*  */
        vuint32_t IFEE11:1;					 /*  */
        vuint32_t IFEE10:1;					 /*  */
        vuint32_t IFEE9:1;					 /*  */
        vuint32_t IFEE8:1;					 /*  */
        vuint32_t IFEE7:1;					 /*  */
        vuint32_t IFEE6:1;					 /*  */
        vuint32_t IFEE5:1;					 /*  */
        vuint32_t IFEE4:1;					 /*  */
        vuint32_t IFEE3:1;					 /*  */
        vuint32_t IFEE2:1;					 /*  */
        vuint32_t IFEE1:1;					 /*  */
        vuint32_t IFEE0:1;					 /*  */
    } B;
  } IFEER0;

  uint8_t SIUL2_reserved6[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t IFE31:1;					 /*  */
        vuint32_t IFE30:1;					 /*  */
        vuint32_t IFE29:1;					 /*  */
        vuint32_t IFE28:1;					 /*  */
        vuint32_t IFE27:1;					 /*  */
        vuint32_t IFE26:1;					 /*  */
        vuint32_t IFE25:1;					 /*  */
        vuint32_t IFE24:1;					 /*  */
        vuint32_t IFE23:1;					 /*  */
        vuint32_t IFE22:1;					 /*  */
        vuint32_t IFE21:1;					 /*  */
        vuint32_t IFE20:1;					 /*  */
        vuint32_t IFE19:1;					 /*  */
        vuint32_t IFE18:1;					 /*  */
        vuint32_t IFE17:1;					 /*  */
        vuint32_t IFE16:1;					 /*  */
        vuint32_t IFE15:1;					 /*  */
        vuint32_t IFE14:1;					 /*  */
        vuint32_t IFE13:1;					 /*  */
        vuint32_t IFE12:1;					 /*  */
        vuint32_t IFE11:1;					 /*  */
        vuint32_t IFE10:1;					 /*  */
        vuint32_t IFE9:1;					 /*  */
        vuint32_t IFE8:1;					 /*  */
        vuint32_t IFE7:1;					 /*  */
        vuint32_t IFE6:1;					 /*  */
        vuint32_t IFE5:1;					 /*  */
        vuint32_t IFE4:1;					 /*  */
        vuint32_t IFE3:1;					 /*  */
        vuint32_t IFE2:1;					 /*  */
        vuint32_t IFE1:1;					 /*  */
        vuint32_t IFE0:1;					 /*  */
    } B;
  } IFER0;

  uint8_t SIUL2_reserved7[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t MAXCNT:4;					 /* Maximum Interrupt Filter Counter setting */
    } B;
  } IFMCR[32];

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t IFCP:4;					 /* Interrupt Filter Clock Prescaler setting */
    } B;
  } IFCPR;

  uint8_t SIUL2_reserved8[380];
  
/*******************************************************************************  
*   Unimplemented registers should not be accessed by the user. Refer to the   * 
*     Reference Manual for the implemented SIUL2 MSCR and IMCR registers.      *
* *****************************************************************************/
  union {
    vuint32_t R;
      struct {
        vuint32_t  :2;					 /*  */
        vuint32_t SRC:2;					 /* Slew Rate Control */
        vuint32_t  :2;					 /*  */
        vuint32_t OBE:1;					 /* GPIO Output Buffer Enable */
        vuint32_t ODE:1;					 /* Open Drain Enable */
        vuint32_t SMC:1;					 /* Safe Mode Control */
        vuint32_t APC:1;					 /* Analog Pad Control */
        vuint32_t  :2;					 /*  */
        vuint32_t IBE:1;					 /* Input Buffer Enable */
        vuint32_t HYS:1;					 /* Input Hysteresis */
        vuint32_t PUS:1;					 /* Pull Select */
        vuint32_t PUE:1;					 /* Pull Enable */
        vuint32_t INV:1;					 /* Invert */
        vuint32_t  :7;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t SSS:4;					 /* Source Signal Select */
    } B;
  } MSCR[154];

  uint8_t SIUL2_reserved9[1432];
  
/*******************************************************************************  
*   Unimplemented registers should not be accessed by the user. Refer to the   * 
*     Reference Manual for the implemented SIUL2 MSCR and IMCR registers.      *
* *****************************************************************************/
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t INV:1;					 /* Invert */
        vuint32_t  :7;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t SSS:4;					 /* Source Signal Select */
    } B;
  } IMCR[223];

  uint8_t SIUL2_reserved10[1348];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :7;					 /*  */
        vuint8_t PDO:1;					 /* Pad Data Out */
    } B;
  } GPDO[156];

  uint8_t SIUL2_reserved11[356];
  union {
    vuint8_t R;
      struct {
        vuint8_t  :7;					 /*  */
        vuint8_t PDI:1;					 /* Pad Data In */
    } B;
  } GPDI[156];

  uint8_t SIUL2_reserved12[356];
  union {
    vuint16_t R;
      struct {
        vuint16_t PPDO:16;					 /* Parallel Pad Data Out */
    } B;
  } PGPDO[10];

  uint8_t SIUL2_reserved13[44];
  union {
    vuint16_t R;
      struct {
        vuint16_t PPDI:16;					 /* Parallel Pad Data In */
    } B;
  } PGPDI[10];

  uint8_t SIUL2_reserved14[44];
  union {
    vuint32_t R;
      struct {
        vuint32_t MASK:16;					 /* Mask Field */
        vuint32_t MPPDO:16;					 /* Masked Parallel Pad Data Out */
    } B;
  } MPGPDO[10];

};


/* ============================================================================
   =============================== Module: SMPU ===============================
   ============================================================================ */

struct SMPU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t MERR:16;					 /* Master n error, where the bus master number matches the bit number */
        vuint32_t  :1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t HRL:3;					 /* Hardware revision level */
        vuint32_t GVLD:1;					 /* Global Valid (global enable/disable for the SMPU) */
    } B;
  } CESR0;

  union {
    vuint32_t R;
      struct {
        vuint32_t MEOVR:16;					 /* Master n error overrun, where the bus master number matches the bit number */
        vuint32_t  :1;					 /*  */
        vuint32_t  :11;					 /*  */
        vuint32_t NRGD:4;					 /* Number of region descriptors */
    } B;
  } CESR1;

  uint8_t SMPU_reserved0[248];
  struct {
    union {
      vuint32_t R;
        struct {
          vuint32_t EADDR:32;					 /* Error address */
      } B;
    } EAR;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t EACD:24;					 /* Error access control detail */
          vuint32_t  :1;					 /*  */
          vuint32_t EATTR:2;					 /* Error attributes */
          vuint32_t ERW:1;					 /* Error read/write */
          vuint32_t EMN:4;					 /* Error master number */
      } B;
    } EDR;
  } CHANNEL[16];

  uint8_t SMPU_reserved1[640];
  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD0_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD0_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD0_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD0_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD1_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD1_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD1_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD1_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD2_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD2_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD2_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD2_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD3_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD3_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD3_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD3_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD4_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD4_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD4_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD4_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD5_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD5_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD5_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD5_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD6_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD6_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD6_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD6_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD7_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD7_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD7_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD7_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD8_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD8_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD8_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD8_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD9_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD9_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD9_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD9_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD10_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD10_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD10_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD10_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD11_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD11_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD11_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD11_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD12_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD12_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD12_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD12_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD13_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD13_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD13_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD13_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD14_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD14_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD14_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD14_WORD3;

  union {
    vuint32_t R;
      struct {
        vuint32_t SRTADDR:32;					 /* Start address */
    } B;
  } RGD15_WORD0;

  union {
    vuint32_t R;
      struct {
        vuint32_t ENDADDR:32;					 /* End address */
    } B;
  } RGD15_WORD1;

  union {
    vuint32_t R;
      struct {
        vuint32_t M0P:2;					 /* Bus master 0 permissions */
        vuint32_t M1P:2;					 /* Bus master 1 permissions */
        vuint32_t M2P:2;					 /* Bus master 2 permissions */
        vuint32_t M3P:2;					 /* Bus master 3 permissions */
        vuint32_t M4P:2;					 /* Bus master 4 permissions */
        vuint32_t M5P:2;					 /* Bus master 5 permissions */
        vuint32_t M6P:2;					 /* Bus master 6 permissions */
        vuint32_t M7P:2;					 /* Bus master 7 permissions */
        vuint32_t M8P:2;					 /* Bus master 8 permissions */
        vuint32_t M9P:2;					 /* Bus master 9 permissions */
        vuint32_t M10P:2;					 /* Bus master 10 permissions */
        vuint32_t M11P:2;					 /* Bus master 11 permissions */
        vuint32_t M12P:2;					 /* Bus master 12 permissions */
        vuint32_t M13P:2;					 /* Bus master 13 permissions */
        vuint32_t M14P:2;					 /* Bus master 14 permissions */
        vuint32_t M15P:2;					 /* Bus master 15 permissions */
    } B;
  } RGD15_WORD2;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t RO:1;					 /* Read-Only */
        vuint32_t  :1;					 /*  */
        vuint32_t CI:1;					 /* Cache Inhibit */
        vuint32_t VLD:1;					 /* Valid */
    } B;
  } RGD15_WORD3;

};


/* ============================================================================
   =============================== Module: SPI ================================
   ============================================================================ */

struct SPI_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t MSTR:1;					 /* Master/Slave Mode Select */
        vuint32_t CONT_SCKE:1;					 /* Continuous SCK Enable */
        vuint32_t DCONF:2;					 /* DSPI Configuration */
        vuint32_t FRZ:1;					 /* Freeze */
        vuint32_t MTFE:1;					 /* Modified Timing Format Enable */
        vuint32_t  :1;					 /*  */
        vuint32_t ROOE:1;					 /* Receive FIFO Overflow Overwrite Enable */
        vuint32_t PCSIS:8;					 /* Peripheral Chip Select x Inactive State */
        vuint32_t DOZE:1;					 /* Doze Enable */
        vuint32_t MDIS:1;					 /* Module Disable */
        vuint32_t DIS_TXF:1;					 /* Disable Transmit FIFO */
        vuint32_t DIS_RXF:1;					 /* Disable Receive FIFO */
        vuint32_t CLR_TXF:1;					 /* Clear TX FIFO */
        vuint32_t CLR_RXF:1;					 /*  */
        vuint32_t SMPL_PT:2;					 /* Sample Point */
        vuint32_t  :5;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t HALT:1;					 /* Halt */
    } B;
  } MCR;

  uint8_t SPI_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t SPI_TCNT:16;					 /* SPI Transfer Counter */
        vuint32_t  :16;					 /*  */
    } B;
  } TCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t DBR:1;					 /* Double Baud Rate */
        vuint32_t FMSZ:4;					 /* Frame Size */
        vuint32_t CPOL:1;					 /* Clock Polarity */
        vuint32_t CPHA:1;					 /* Clock Phase */
        vuint32_t LSBFE:1;					 /* LSB First */
        vuint32_t PCSSCK:2;					 /* PCS to SCK Delay Prescaler */
        vuint32_t PASC:2;					 /* After SCK Delay Prescaler */
        vuint32_t PDT:2;					 /* Delay after Transfer Prescaler */
        vuint32_t PBR:2;					 /* Baud Rate Prescaler */
        vuint32_t CSSCK:4;					 /* PCS to SCK Delay Scaler */
        vuint32_t ASC:4;					 /* After SCK Delay Scaler */
        vuint32_t DT:4;					 /* Delay After Transfer Scaler */
        vuint32_t BR:4;					 /* Baud Rate Scaler */
    } B;
  } CTAR0;

/********************************************************************************* 
 * FOR SLAVE MODE, PLEASE REFERE TO THE REFERENCE MANUAL FOR THE REGISTER FORMAT *
 * OF CTAR0 REGISTER.                                                            *
 *********************************************************************************/

  union {
    vuint32_t R;
      struct {
        vuint32_t DBR:1;					 /* Double Baud Rate */
        vuint32_t FMSZ:4;					 /* Frame Size */
        vuint32_t CPOL:1;					 /* Clock Polarity */
        vuint32_t CPHA:1;					 /* Clock Phase */
        vuint32_t LSBFE:1;					 /* LSB First */
        vuint32_t PCSSCK:2;					 /* PCS to SCK Delay Prescaler */
        vuint32_t PASC:2;					 /* After SCK Delay Prescaler */
        vuint32_t PDT:2;					 /* Delay after Transfer Prescaler */
        vuint32_t PBR:2;					 /* Baud Rate Prescaler */
        vuint32_t CSSCK:4;					 /* PCS to SCK Delay Scaler */
        vuint32_t ASC:4;					 /* After SCK Delay Scaler */
        vuint32_t DT:4;					 /* Delay After Transfer Scaler */
        vuint32_t BR:4;					 /* Baud Rate Scaler */
    } B;
  } CTAR1;

  union {
    vuint32_t R;
      struct {
        vuint32_t DBR:1;					 /* Double Baud Rate */
        vuint32_t FMSZ:4;					 /* Frame Size */
        vuint32_t CPOL:1;					 /* Clock Polarity */
        vuint32_t CPHA:1;					 /* Clock Phase */
        vuint32_t LSBFE:1;					 /* LSB First */
        vuint32_t PCSSCK:2;					 /* PCS to SCK Delay Prescaler */
        vuint32_t PASC:2;					 /* After SCK Delay Prescaler */
        vuint32_t PDT:2;					 /* Delay after Transfer Prescaler */
        vuint32_t PBR:2;					 /* Baud Rate Prescaler */
        vuint32_t CSSCK:4;					 /* PCS to SCK Delay Scaler */
        vuint32_t ASC:4;					 /* After SCK Delay Scaler */
        vuint32_t DT:4;					 /* Delay After Transfer Scaler */
        vuint32_t BR:4;					 /* Baud Rate Scaler */
    } B;
  } CTAR2;

  union {
    vuint32_t R;
      struct {
        vuint32_t DBR:1;					 /* Double Baud Rate */
        vuint32_t FMSZ:4;					 /* Frame Size */
        vuint32_t CPOL:1;					 /* Clock Polarity */
        vuint32_t CPHA:1;					 /* Clock Phase */
        vuint32_t LSBFE:1;					 /* LSB First */
        vuint32_t PCSSCK:2;					 /* PCS to SCK Delay Prescaler */
        vuint32_t PASC:2;					 /* After SCK Delay Prescaler */
        vuint32_t PDT:2;					 /* Delay after Transfer Prescaler */
        vuint32_t PBR:2;					 /* Baud Rate Prescaler */
        vuint32_t CSSCK:4;					 /* PCS to SCK Delay Scaler */
        vuint32_t ASC:4;					 /* After SCK Delay Scaler */
        vuint32_t DT:4;					 /* Delay After Transfer Scaler */
        vuint32_t BR:4;					 /* Baud Rate Scaler */
    } B;
  } CTAR3;

  uint8_t SPI_reserved1[16];
  union {
    vuint32_t R;
      struct {
        vuint32_t TCF:1;					 /* Transfer Complete Flag */
        vuint32_t TXRXS:1;					 /* TX and RX Status */
        vuint32_t  :1;					 /*  */
        vuint32_t EOQF:1;					 /* End of Queue Flag */
        vuint32_t TFUF:1;					 /* Transmit FIFO Underflow Flag */
        vuint32_t  :1;					 /*  */
        vuint32_t TFFF:1;					 /* Transmit FIFO Fill Flag */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t RFOF:1;					 /* Receive FIFO Overflow Flag */
        vuint32_t  :1;					 /*  */
        vuint32_t RFDF:1;					 /* Receive FIFO Drain Flag */
        vuint32_t  :1;					 /*  */
        vuint32_t TXCTR:4;					 /* TX FIFO Counter */
        vuint32_t TXNXTPTR:4;					 /* Transmit Next Pointer */
        vuint32_t RXCTR:4;					 /* RX FIFO Counter */
        vuint32_t POPNXTPTR:4;					 /* Pop Next Pointer */
    } B;
  } SR;

  union {
    vuint32_t R;
      struct {
        vuint32_t TCF_RE:1;					 /* Transmission Complete Request Enable */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t EOQF_RE:1;					 /* Finished Request Enable */
        vuint32_t TFUF_RE:1;					 /* Transmit FIFO Underflow Request Enable */
        vuint32_t  :1;					 /*  */
        vuint32_t TFFF_RE:1;					 /* Transmit FIFO Fill Request Enable */
        vuint32_t TFFF_DIRS:1;					 /* Transmit FIFO Fill DMA or Interrupt Request Select */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t RFOF_RE:1;					 /* Receive FIFO Overflow Request Enable */
        vuint32_t  :1;					 /*  */
        vuint32_t RFDF_RE:1;					 /* Receive FIFO Drain Request Enable */
        vuint32_t RFDF_DIRS:1;					 /* Receive FIFO Drain DMA or Interrupt Request Select */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :14;					 /*  */
    } B;
  } RSER;

  union {
    vuint32_t R;
      struct {
        vuint32_t CONT:1;					 /* Continuous Peripheral Chip Select Enable */
        vuint32_t CTAS:3;					 /* Clock and Transfer Attributes Select */
        vuint32_t EOQ:1;					 /* End Of Queue */
        vuint32_t CTCNT:1;					 /* Clear Transfer Counter */
        vuint32_t  :2;					 /*  */
        vuint32_t PCS:8;					 /*  */
        vuint32_t TXDATA:16;					 /* Transmit Data */
    } B;
  } PUSHR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t TXDATA:16;					 /* Transmit Data */
    } B;
  } PUSHR_SLAVE;

  union {
    vuint32_t R;
      struct {
        vuint32_t RXDATA:32;					 /* Received Data */
    } B;
  } POPR;

  union {
    vuint32_t R;
      struct {
        vuint32_t TXCMD_TXDATA:16;					 /* Transmit Command or Transmit Data */
        vuint32_t TXDATA:16;					 /* Transmit Data */
    } B;
  } TXFR[5];

  uint8_t SPI_reserved2[44];
  union {
    vuint32_t R;
      struct {
        vuint32_t RXDATA:32;					 /* Receive Data */
    } B;
  } RXFR[5];

};


/* ============================================================================
   =============================== Module: SRX ================================
   ============================================================================ */

struct SRX_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t TSPRSC:8;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t FIFOWM:5;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t FMFOIE:1;					 /*  */
        vuint32_t FMDUIE:1;					 /*  */
        vuint32_t SMDUIE:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t FIFO_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t FAST_CLR:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t DBG_FRZ:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t SENT_EN:1;					 /*  */
    } B;
  } GBL_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t EN_CH:16;					 /*  */
    } B;
  } CHNL_EN;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :21;					 /*  */
        vuint32_t FMFO:1;					 /*  */
        vuint32_t FDMU:1;					 /*  */
        vuint32_t SMDU:1;					 /*  */
        vuint32_t  :8;					 /*  */
    } B;
  } GBL_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t F_RDY:16;					 /*  */
    } B;
  } FMSG_RDY;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t S_RDY:16;					 /*  */
    } B;
  } SMSG_RDY;

  uint8_t SRX_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH0:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH1:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH2:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH3:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NICCH4:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH5:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH6:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH7:3;					 /*  */
    } B;
  } DATA_CTRL1;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH8:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH9:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH10:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH11:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH12:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH13:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH14:3;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NIBBCH15:3;					 /*  */
    } B;
  } DATA_CTRL2;

  uint8_t SRX_reserved1[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t FDMA_EN:16;					 /*  */
    } B;
  } FDMA_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SDMA_EN:16;					 /*  */
    } B;
  } SDMA_CTRL;

  uint8_t SRX_reserved2[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t FRDY_IE:16;					 /*  */
    } B;
  } FRDY_IE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SRDY_IE:16;					 /*  */
    } B;
  } SRDY_IE;

  uint8_t SRX_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } DMA_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } DMA_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } DMA_FMSG_TS;

  uint8_t SRX_reserved4[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_D3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } DMA_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } DMA_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } DMA_SMSG_TS;

  uint8_t SRX_reserved5[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH0_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH0_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH0_CONFIG;

  uint8_t SRX_reserved6[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH1_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH1_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH1_CONFIG;

  uint8_t SRX_reserved7[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH2_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH2_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH2_CONFIG;

  uint8_t SRX_reserved8[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH3_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH3_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH3_CONFIG;

  uint8_t SRX_reserved9[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH4_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH4_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH4_CONFIG;

  uint8_t SRX_reserved10[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH5_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH5_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH5_CONFIG;

  uint8_t SRX_reserved11[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH6_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH6_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH6_CONFIG;

  uint8_t SRX_reserved12[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH7_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH7_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH7_CONFIG;

  uint8_t SRX_reserved13[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH8_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH8_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH8_CONFIG;

  uint8_t SRX_reserved14[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH9_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH9_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH9_CONFIG;

  uint8_t SRX_reserved15[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH10_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH10_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH10_CONFIG;

  uint8_t SRX_reserved16[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH11_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH11_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH11_CONFIG;

  uint8_t SRX_reserved17[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH12_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH12_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH12_CONFIG;

  uint8_t SRX_reserved18[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH13_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH13_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH13_CONFIG;

  uint8_t SRX_reserved19[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH14_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH14_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH14_CONFIG;

  uint8_t SRX_reserved20[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t CM_PRSC:15;					 /*  */
        vuint32_t COMP_EN:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PRSC:14;					 /*  */
    } B;
  } CH15_CLK_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t CAL_RESYNC:1;					 /*  */
        vuint32_t CAL_20_25:1;					 /*  */
        vuint32_t SMSG_OFLW:1;					 /*  */
        vuint32_t FMSG_OFLW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PP_DIAG_ERR:1;					 /*  */
        vuint32_t CAL_LEN_ERR:1;					 /*  */
        vuint32_t CAL_DIAG_ERR:1;					 /*  */
        vuint32_t NIB_VAL_ERR:1;					 /*  */
        vuint32_t SMSG_CRC_ERR:1;					 /*  */
        vuint32_t FMSG_CRC_ERR:1;					 /*  */
        vuint32_t NUM_EDGES_ERR:1;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH15_STATUS;

  union {
    vuint32_t R;
      struct {
        vuint32_t BUS_IDLE_CNT:4;					 /*  */
        vuint32_t IE_CAL_RESYNC:1;					 /*  */
        vuint32_t IE_CAL_20_25:1;					 /*  */
        vuint32_t IE_SMSG_OFLW:1;					 /*  */
        vuint32_t IE_FMSG_OFLW:1;					 /*  */
        vuint32_t FCRC_CHK_OFF:1;					 /*  */
        vuint32_t IE_PP_DIAG_ERR:1;					 /*  */
        vuint32_t IE_CAL_LEN_ERR:1;					 /*  */
        vuint32_t IE_CAL_DIAG_ERR:1;					 /*  */
        vuint32_t IE_NIB_VAL_ERR:1;					 /*  */
        vuint32_t IE_SMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_FMSG_CRC_ERR:1;					 /*  */
        vuint32_t IE_NUM_EDGES_ERR:1;					 /*  */
        vuint32_t DCHNG_INT:1;					 /*  */
        vuint32_t CAL_RNG:1;					 /*  */
        vuint32_t PP_CHKSEL:1;					 /*  */
        vuint32_t FCRC_TYPE:1;					 /*  */
        vuint32_t FCRC_SC_EN:1;					 /*  */
        vuint32_t SCRC_TYPE:1;					 /*  */
        vuint32_t PAUSE_EN:1;					 /*  */
        vuint32_t SUCC_CAL_CHK:1;					 /*  */
        vuint32_t FIL_CNT:8;					 /*  */
    } B;
  } CH15_CONFIG;

  uint8_t SRX_reserved21[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH0_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH0_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH0_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH0_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH0_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH0_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH1_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH1_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH1_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH1_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH1_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH1_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH2_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH2_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH2_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH2_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH2_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH2_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH3_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH3_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH3_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH3_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH3_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH3_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH4_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH4_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH4_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH4_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH4_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH4_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH5_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH5_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH5_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH5_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH5_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH5_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH6_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH6_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH6_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH6_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH6_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH6_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH7_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH7_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH7_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH7_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH7_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH7_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH8_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH8_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH8_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH8_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH8_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH8_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH9_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH9_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH9_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH9_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH9_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH9_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH10_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH10_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH10_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH10_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH10_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH10_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH11_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH11_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH11_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH11_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH11_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH11_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH12_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH12_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH12_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH12_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH12_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH12_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH13_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH13_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH13_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH13_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH13_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH13_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH14_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH14_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH14_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH14_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH14_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH14_SMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t SCNIB:4;					 /*  */
        vuint32_t DNIB1:4;					 /*  */
        vuint32_t DNIB2:4;					 /*  */
        vuint32_t DNIB3:4;					 /*  */
        vuint32_t DNIB4:4;					 /*  */
        vuint32_t DNIB5:4;					 /*  */
        vuint32_t DNIB6:4;					 /*  */
    } B;
  } CH15_FMSG_DATA;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :12;					 /*  */
        vuint32_t CRC4b:4;					 /*  */
        vuint32_t  :16;					 /*  */
    } B;
  } CH15_FMSG_CRC;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH15_FMSG_TS;

  union {
    vuint32_t R;
      struct {
        vuint32_t CHNUM:4;					 /*  */
        vuint32_t TYPE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t CFG:1;					 /*  */
        vuint32_t ID7_4_ID3_0:4;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ID3_0_DATA15_12:4;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CH15_SMSG_BIT3;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :10;					 /*  */
        vuint32_t SMCRC:6;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t DATA:12;					 /*  */
    } B;
  } CH15_SMSG_BIT2;

  union {
    vuint32_t R;
      struct {
        vuint32_t TS:32;					 /*  */
    } B;
  } CH15_SMSG_TS;

};


/* ============================================================================
   =============================== Module: SSCM ===============================
   ============================================================================ */

struct SSCM_tag {
  union {
    vuint16_t R;
      struct {
        vuint16_t  :1;					 /*  */
        vuint16_t CER:1;					 /*  */
        vuint16_t MER:1;					 /*  */
        vuint16_t NXEN1:1;					 /*  */
        vuint16_t NXEN:1;					 /*  */
        vuint16_t PUB:1;					 /*  */
        vuint16_t SEC:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t BMODE:3;					 /*  */
        vuint16_t VLE:1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t  :1;					 /*  */
        vuint16_t  :2;					 /*  */
    } B;
  } STATUS;

  union {
    vuint16_t R;
      struct {
        vuint16_t JPIN:10;					 /*  */
        vuint16_t IVLD:1;					 /*  */
        vuint16_t MREV:4;					 /*  */
        vuint16_t DVLD:1;					 /*  */
    } B;
  } MEMCONFIG;

  uint8_t SSCM_reserved0[2];
  union {
    vuint16_t R;
      struct {
        vuint16_t  :14;					 /*  */
        vuint16_t PAE:1;					 /*  */
        vuint16_t RAE:1;					 /*  */
    } B;
  } ERROR;

  union {
    vuint16_t R;
      struct {
        vuint16_t  :13;					 /*  */
        vuint16_t DEBUG_MODE:3;					 /*  */
    } B;
  } DEBUGPORT;

  uint8_t SSCM_reserved1[22];
  union {
    vuint32_t R;
      struct {
        vuint32_t UOPT:32;					 /*  */
    } B;
  } UOPS;

  uint8_t SSCM_reserved2[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t SADR:32;					 /*  */
    } B;
  } PSA;

};


/* ============================================================================
   =============================== Module: STCU ===============================
   ============================================================================ */

struct STCU_tag {
  uint8_t STCU_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :20;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t MBSWPLLEN:1;					 /*  */
        vuint32_t LBSWPLLEN:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t RUNSW:1;					 /*  */
    } B;
  } RUNSW;

  union {
    vuint32_t R;
      struct {
        vuint32_t SKC:32;					 /*  */
    } B;
  } SKC;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t LB_DELAY:8;					 /*  */
        vuint32_t  :7;					 /*  */
        vuint32_t WRP:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t PMOSEN:1;					 /*  */
        vuint32_t MBU:1;					 /*  */
        vuint32_t CLK_CFG:3;					 /*  */
    } B;
  } CFG;

  uint8_t STCU_reserved1[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t WDGEOC:32;					 /*  */
    } B;
  } WDG;

  uint8_t STCU_reserved2[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t LOCKESW:1;					 /*  */
        vuint32_t WDTOSW:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ENGESW:1;					 /*  */
        vuint32_t INVPSW:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t CFSF:1;					 /*  */
        vuint32_t NCFSF:1;					 /*  */
        vuint32_t  :3;					 /*  */
        vuint32_t LOCKE:1;					 /*  */
        vuint32_t WDTO:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ENGE:1;					 /*  */
        vuint32_t INVP:1;					 /*  */
    } B;
  } ERR_STAT;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :27;					 /*  */
        vuint32_t LOCKECFM:1;					 /*  */
        vuint32_t WDTOCFM:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t ENGECFM:1;					 /*  */
        vuint32_t INVPCFM:1;					 /*  */
    } B;
  } ERR_FM;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t LBS3:1;					 /*  */
        vuint32_t LBS2:1;					 /*  */
        vuint32_t LBS1:1;					 /*  */
        vuint32_t LBS0:1;					 /*  */
    } B;
  } LBS;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t LBE3:1;					 /*  */
        vuint32_t LBE2:1;					 /*  */
        vuint32_t LBE1:1;					 /*  */
        vuint32_t LBE0:1;					 /*  */
    } B;
  } LBE;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t LBSSW3:1;					 /*  */
        vuint32_t LBSSW2:1;					 /*  */
        vuint32_t LBSSW1:1;					 /*  */
        vuint32_t LBSSW0:1;					 /*  */
    } B;
  } LBSSW;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t LBESW3:1;					 /*  */
        vuint32_t LBESW2:1;					 /*  */
        vuint32_t LBESW1:1;					 /*  */
        vuint32_t LBESW0:1;					 /*  */
    } B;
  } LBESW;

  uint8_t STCU_reserved3[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :28;					 /*  */
        vuint32_t LBCFM3:1;					 /*  */
        vuint32_t LBCFM2:1;					 /*  */
        vuint32_t LBCFM1:1;					 /*  */
        vuint32_t LBCFM0:1;					 /*  */
    } B;
  } LBCFM;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t MBS25:1;					 /*  */
        vuint32_t MBS24:1;					 /*  */
        vuint32_t MBS23:1;					 /*  */
        vuint32_t MBS22:1;					 /*  */
        vuint32_t MBS21:1;					 /*  */
        vuint32_t MBS20:1;					 /*  */
        vuint32_t MBS19:1;					 /*  */
        vuint32_t MBS18:1;					 /*  */
        vuint32_t MBS17:1;					 /*  */
        vuint32_t MBS16:1;					 /*  */
        vuint32_t MBS15:1;					 /*  */
        vuint32_t MBS14:1;					 /*  */
        vuint32_t MBS13:1;					 /*  */
        vuint32_t MBS12:1;					 /*  */
        vuint32_t MBS11:1;					 /*  */
        vuint32_t MBS10:1;					 /*  */
        vuint32_t MBS9:1;					 /*  */
        vuint32_t MBS8:1;					 /*  */
        vuint32_t MBS7:1;					 /*  */
        vuint32_t MBS6:1;					 /*  */
        vuint32_t MBS5:1;					 /*  */
        vuint32_t MBS4:1;					 /*  */
        vuint32_t MBS3:1;					 /*  */
        vuint32_t MBS2:1;					 /*  */
        vuint32_t MBS1:1;					 /*  */
        vuint32_t MBS0:1;					 /*  */
    } B;
  } MBSL;

  uint8_t STCU_reserved4[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t MBE25:1;					 /*  */
        vuint32_t MBE24:1;					 /*  */
        vuint32_t MBE23:1;					 /*  */
        vuint32_t MBE22:1;					 /*  */
        vuint32_t MBE21:1;					 /*  */
        vuint32_t MBE20:1;					 /*  */
        vuint32_t MBE19:1;					 /*  */
        vuint32_t MBE18:1;					 /*  */
        vuint32_t MBE17:1;					 /*  */
        vuint32_t MBE16:1;					 /*  */
        vuint32_t MBE15:1;					 /*  */
        vuint32_t MBE14:1;					 /*  */
        vuint32_t MBE13:1;					 /*  */
        vuint32_t MBE12:1;					 /*  */
        vuint32_t MBE11:1;					 /*  */
        vuint32_t MBE10:1;					 /*  */
        vuint32_t MBE9:1;					 /*  */
        vuint32_t MBE8:1;					 /*  */
        vuint32_t MBE7:1;					 /*  */
        vuint32_t MBE6:1;					 /*  */
        vuint32_t MBE5:1;					 /*  */
        vuint32_t MBE4:1;					 /*  */
        vuint32_t MBE3:1;					 /*  */
        vuint32_t MBE2:1;					 /*  */
        vuint32_t MBE1:1;					 /*  */
        vuint32_t MBE0:1;					 /*  */
    } B;
  } MBEL;

  uint8_t STCU_reserved5[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t MBSSW25:1;					 /*  */
        vuint32_t MBSSW24:1;					 /*  */
        vuint32_t MBSSW23:1;					 /*  */
        vuint32_t MBSSW22:1;					 /*  */
        vuint32_t MBSSW21:1;					 /*  */
        vuint32_t MBSSW20:1;					 /*  */
        vuint32_t MBSSW19:1;					 /*  */
        vuint32_t MBSSW18:1;					 /*  */
        vuint32_t MBSSW17:1;					 /*  */
        vuint32_t MBSSW16:1;					 /*  */
        vuint32_t MBSSW15:1;					 /*  */
        vuint32_t MBSSW14:1;					 /*  */
        vuint32_t MBSSW13:1;					 /*  */
        vuint32_t MBSSW12:1;					 /*  */
        vuint32_t MBSSW11:1;					 /*  */
        vuint32_t MBSSW10:1;					 /*  */
        vuint32_t MBSSW9:1;					 /*  */
        vuint32_t MBSSW8:1;					 /*  */
        vuint32_t MBSSW7:1;					 /*  */
        vuint32_t MBSSW6:1;					 /*  */
        vuint32_t MBSSW5:1;					 /*  */
        vuint32_t MBSSW4:1;					 /*  */
        vuint32_t MBSSW3:1;					 /*  */
        vuint32_t MBSSW2:1;					 /*  */
        vuint32_t MBSSW1:1;					 /*  */
        vuint32_t MBSSW0:1;					 /*  */
    } B;
  } MBSLSW;

  uint8_t STCU_reserved6[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t MBESW25:1;					 /*  */
        vuint32_t MBESW24:1;					 /*  */
        vuint32_t MBESW23:1;					 /*  */
        vuint32_t MBESW22:1;					 /*  */
        vuint32_t MBESW21:1;					 /*  */
        vuint32_t MBESW20:1;					 /*  */
        vuint32_t MBESW19:1;					 /*  */
        vuint32_t MBESW18:1;					 /*  */
        vuint32_t MBESW17:1;					 /*  */
        vuint32_t MBESW16:1;					 /*  */
        vuint32_t MBESW15:1;					 /*  */
        vuint32_t MBESW14:1;					 /*  */
        vuint32_t MBESW13:1;					 /*  */
        vuint32_t MBESW12:1;					 /*  */
        vuint32_t MBESW11:1;					 /*  */
        vuint32_t MBESW10:1;					 /*  */
        vuint32_t MBESW9:1;					 /*  */
        vuint32_t MBESW8:1;					 /*  */
        vuint32_t MBESW7:1;					 /*  */
        vuint32_t MBESW6:1;					 /*  */
        vuint32_t MBESW5:1;					 /*  */
        vuint32_t MBESW4:1;					 /*  */
        vuint32_t MBESW3:1;					 /*  */
        vuint32_t MBESW2:1;					 /*  */
        vuint32_t MBESW1:1;					 /*  */
        vuint32_t MBESW0:1;					 /*  */
    } B;
  } MBELSW;

  uint8_t STCU_reserved7[8];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t MBCFM25:1;					 /*  */
        vuint32_t MBCFM24:1;					 /*  */
        vuint32_t MBCFM23:1;					 /*  */
        vuint32_t MBCFM22:1;					 /*  */
        vuint32_t MBCFM21:1;					 /*  */
        vuint32_t MBCFM20:1;					 /*  */
        vuint32_t MBCFM19:1;					 /*  */
        vuint32_t MBCFM18:1;					 /*  */
        vuint32_t MBCFM17:1;					 /*  */
        vuint32_t MBCFM16:1;					 /*  */
        vuint32_t MBCFM15:1;					 /*  */
        vuint32_t MBCFM14:1;					 /*  */
        vuint32_t MBCFM13:1;					 /*  */
        vuint32_t MBCFM12:1;					 /*  */
        vuint32_t MBCFM11:1;					 /*  */
        vuint32_t MBCFM10:1;					 /*  */
        vuint32_t MBCFM9:1;					 /*  */
        vuint32_t MBCFM8:1;					 /*  */
        vuint32_t MBCFM7:1;					 /*  */
        vuint32_t MBCFM6:1;					 /*  */
        vuint32_t MBCFM5:1;					 /*  */
        vuint32_t MBCFM4:1;					 /*  */
        vuint32_t MBCFM3:1;					 /*  */
        vuint32_t MBCFM2:1;					 /*  */
        vuint32_t MBCFM1:1;					 /*  */
        vuint32_t MBCFM0:1;					 /*  */
    } B;
  } MBCFML;

  uint8_t STCU_reserved8[136];
  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PRPGEN:1;					 /*  */
        vuint32_t SHS:3;					 /*  */
        vuint32_t SCEN_OFF:4;					 /*  */
        vuint32_t SCEN_ON:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PFT:1;					 /*  */
        vuint32_t CWS:3;					 /*  */
    } B;
  } LB0_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t PCS:26;					 /*  */
    } B;
  } LB0_PCS;

  uint8_t STCU_reserved9[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB0_MISRELSW;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB0_MISREHSW;

  uint8_t STCU_reserved10[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PRPGEN:1;					 /*  */
        vuint32_t SHS:3;					 /*  */
        vuint32_t SCEN_OFF:4;					 /*  */
        vuint32_t SCEN_ON:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PFT:1;					 /*  */
        vuint32_t CWS:3;					 /*  */
    } B;
  } LB1_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t PCS:26;					 /*  */
    } B;
  } LB1_PCS;

  uint8_t STCU_reserved11[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB1_MISRELSW;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB1_MISREHSW;

  uint8_t STCU_reserved12[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PRPGEN:1;					 /*  */
        vuint32_t SHS:3;					 /*  */
        vuint32_t SCEN_OFF:4;					 /*  */
        vuint32_t SCEN_ON:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PFT:1;					 /*  */
        vuint32_t CWS:3;					 /*  */
    } B;
  } LB2_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t PCS:26;					 /*  */
    } B;
  } LB2_PCS;

  uint8_t STCU_reserved13[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB2_MISRELSW;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB2_MISREHSW;

  uint8_t STCU_reserved14[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PRPGEN:1;					 /*  */
        vuint32_t SHS:3;					 /*  */
        vuint32_t SCEN_OFF:4;					 /*  */
        vuint32_t SCEN_ON:4;					 /*  */
        vuint32_t  :4;					 /*  */
        vuint32_t PFT:1;					 /*  */
        vuint32_t CWS:3;					 /*  */
    } B;
  } LB3_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :6;					 /*  */
        vuint32_t PCS:26;					 /*  */
    } B;
  } LB3_PCS;

  uint8_t STCU_reserved15[24];
  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB3_MISRELSW;

  union {
    vuint32_t R;
      struct {
        vuint32_t MISRESWx:32;					 /*  */
    } B;
  } LB3_MISREHSW;

  uint8_t STCU_reserved16[1048];
  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB0_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB1_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB2_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB3_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB4_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB5_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB6_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB7_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB8_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB9_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB10_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB11_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB12_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB13_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB14_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB15_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB16_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB17_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB18_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB19_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB20_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB21_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB22_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB23_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB24_CTRL;

  union {
    vuint32_t R;
      struct {
        vuint32_t CSM:1;					 /*  */
        vuint32_t PTR:7;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MB25_CTRL;

};


/* ============================================================================
   =============================== Module: STM ================================
   ============================================================================ */

struct STM_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t CPS:8;					 /* Counter Prescaler. */
        vuint32_t  :6;					 /*  */
        vuint32_t FRZ:1;					 /* Freeze. */
        vuint32_t TEN:1;					 /* Timer counter Enabled. */
    } B;
  } STM_CR;

  union {
    vuint32_t R;
      struct {
        vuint32_t CNT:32;					 /* Timer count value used as the time base for all channels. */
    } B;
  } STM_CNT;

  uint8_t STM_reserved0[4];
  struct {
    uint8_t STM_reserved1[4];
    union {
      vuint32_t R;
        struct {
          vuint32_t  :31;					 /*  */
          vuint32_t CEN:1;					 /* Channel Enable. */
      } B;
    } STM_CCR;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t  :31;					 /*  */
          vuint32_t CIF:1;					 /* Channel Interrupt Flag. */
      } B;
    } STM_CIR;
  
    union {
      vuint32_t R;
        struct {
          vuint32_t CMP:32;					 /* Compare value for channel n. */
      } B;
    } STM_CMP;
  } CHANNEL[4];

};


/* ============================================================================
   =============================== Module: SWT ================================
   ============================================================================ */

struct SWT_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t MAP0:1;					 /*  */
        vuint32_t MAP1:1;					 /*  */
        vuint32_t MAP2:1;					 /*  */
        vuint32_t MAP3:1;					 /*  */
        vuint32_t MAP4:1;					 /*  */
        vuint32_t MAP5:1;					 /*  */
        vuint32_t MAP6:1;					 /*  */
        vuint32_t MAP7:1;					 /*  */
        vuint32_t  :13;					 /*  */
        vuint32_t SMD:2;					 /* Service Mode. */
        vuint32_t RIA:1;					 /*  */
        vuint32_t WND:1;					 /*  */
        vuint32_t ITR:1;					 /*  */
        vuint32_t HLK:1;					 /*  */
        vuint32_t SLK:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t STP:1;					 /*  */
        vuint32_t FRZ:1;					 /*  */
        vuint32_t WEN:1;					 /*  */
    } B;
  } CR;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :31;					 /*  */
        vuint32_t TIF:1;					 /*  */
    } B;
  } IR;

  union {
    vuint32_t R;
      struct {
        vuint32_t WTO:32;					 /*  */
    } B;
  } TO;

  union {
    vuint32_t R;
      struct {
        vuint32_t WST:32;					 /*  */
    } B;
  } WN;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t WSC:16;					 /*  */
    } B;
  } SR;

  union {
    vuint32_t R;
      struct {
        vuint32_t CNT:32;					 /*  */
    } B;
  } CO;

  union {
    vuint32_t R;
      struct {
        vuint32_t  :16;					 /*  */
        vuint32_t SK:16;					 /*  */
    } B;
  } SK;

};


/* ============================================================================
   =============================== Module: WKPU ===============================
   ============================================================================ */

struct WKPU_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t NIF0:1;					 /*  */
        vuint32_t NOVF0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :6;					 /*  */
    } B;
  } NSR;

  uint8_t WKPU_reserved0[4];
  union {
    vuint32_t R;
      struct {
        vuint32_t NLOCK0:1;					 /*  */
        vuint32_t NDSS0:2;					 /*  */
        vuint32_t NWRE0:1;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t NREE0:1;					 /*  */
        vuint32_t NFEE0:1;					 /*  */
        vuint32_t NFE0:1;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } NCR;

};


/* ============================================================================
   =============================== Module: XBAR ===============================
   ============================================================================ */

struct XBAR_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS0;

  uint8_t XBAR_reserved0[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS0;

  uint8_t XBAR_reserved1[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS1;

  uint8_t XBAR_reserved2[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS1;

  uint8_t XBAR_reserved3[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS2;

  uint8_t XBAR_reserved4[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS2;

  uint8_t XBAR_reserved5[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS3;

  uint8_t XBAR_reserved6[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS3;

  uint8_t XBAR_reserved7[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS4;

  uint8_t XBAR_reserved8[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS4;

  uint8_t XBAR_reserved9[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS5;

  uint8_t XBAR_reserved10[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS5;

  uint8_t XBAR_reserved11[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS6;

  uint8_t XBAR_reserved12[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS6;

  uint8_t XBAR_reserved13[236];
  union {
    vuint32_t R;
      struct {
        vuint32_t  :1;					 /*  */
        vuint32_t M7:3;					 /* Master 7 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M6:3;					 /* Master 6 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M5:3;					 /* Master 5 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M4:3;					 /* Master 4 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M3:3;					 /* Master 3 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M2:3;					 /* Master 2 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M1:3;					 /* Master 1 Priority. Sets the arbitration priority for this port on the associated slave port. */
        vuint32_t  :1;					 /*  */
        vuint32_t M0:3;					 /* Master 0 Priority. Sets the arbitration priority for this port on the associated slave port. */
    } B;
  } PRS7;

  uint8_t XBAR_reserved14[12];
  union {
    vuint32_t R;
      struct {
        vuint32_t RO:1;					 /* Read Only */
        vuint32_t HLP:1;					 /* Halt Low Priority */
        vuint32_t  :6;					 /*  */
        vuint32_t HPE7:1;					 /*  */
        vuint32_t HPE6:1;					 /*  */
        vuint32_t HPE5:1;					 /*  */
        vuint32_t HPE4:1;					 /*  */
        vuint32_t HPE3:1;					 /*  */
        vuint32_t HPE2:1;					 /*  */
        vuint32_t HPE1:1;					 /*  */
        vuint32_t HPE0:1;					 /*  */
        vuint32_t  :6;					 /*  */
        vuint32_t ARB:2;					 /* Arbitration Mode */
        vuint32_t  :2;					 /*  */
        vuint32_t PCTL:2;					 /* Parking Control */
        vuint32_t  :1;					 /*  */
        vuint32_t PARK:3;					 /* Park */
    } B;
  } CRS7;

};


/* ============================================================================
   =============================== Module: XBIC ===============================
   ============================================================================ */

struct XBIC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t SE0:1;					 /*  */
        vuint32_t SE1:1;					 /*  */
        vuint32_t SE2:1;					 /*  */
        vuint32_t SE3:1;					 /*  */
        vuint32_t SE4:1;					 /*  */
        vuint32_t SE5:1;					 /*  */
        vuint32_t SE6:1;					 /*  */
        vuint32_t SE7:1;					 /*  */
        vuint32_t  :24;					 /*  */
    } B;
  } MCR;

  union {
    vuint32_t R;
      struct {
        vuint32_t EIE:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t SLV:3;					 /*  */
        vuint32_t MST:4;					 /*  */
        vuint32_t SYN:8;					 /*  */
    } B;
  } EIR;

  union {
    vuint32_t R;
      struct {
        vuint32_t VLD:1;					 /*  */
        vuint32_t  :16;					 /*  */
        vuint32_t SLV:3;					 /*  */
        vuint32_t MST:4;					 /*  */
        vuint32_t SYN:8;					 /*  */
    } B;
  } ESR;

  union {
    vuint32_t R;
      struct {
        vuint32_t ADDR:32;					 /*  */
    } B;
  } EAR;

};


/* ============================================================================
   =============================== Module: XOSC ===============================
   ============================================================================ */

struct XOSC_tag {
  union {
    vuint32_t R;
      struct {
        vuint32_t OSCBYP:1;					 /*  */
        vuint32_t OSCM:1;					 /*  */
        vuint32_t MON:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t EOCV:8;					 /*  */
        vuint32_t M_OSC:1;					 /*  */
        vuint32_t  :2;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t I_OSC:1;					 /*  */
        vuint32_t  :5;					 /*  */
        vuint32_t  :1;					 /*  */
        vuint32_t  :1;					 /*  */
    } B;
  } CTL;

};
#define SRAM0_START 0x40000000UL;
#define ADC_0 (*(volatile struct ADC_tag *) 0xFBE00000UL)
#define ADC_1 (*(volatile struct ADC_tag *) 0xFFE04000UL)
#define ADC_2 (*(volatile struct ADC_tag *) 0xFBE08000UL)
#define ADC_3 (*(volatile struct ADC_tag *) 0xFFE0C000UL)
#define AIPS_A (*(volatile struct AIPS_tag *) 0xFC000000UL)
#define AIPS_B (*(volatile struct AIPS_tag *) 0xF8000000UL)
#define C55FMC (*(volatile struct C55FMC_tag *) 0xFFFE0000UL)
#define CAN_0 (*(volatile struct CAN_tag *) 0xFFEC0000UL)
#define CAN_1 (*(volatile struct CAN_tag *) 0xFFEC4000UL)
#define CAN_2 (*(volatile struct CAN_tag *) 0xFFEC8000UL)
#define CMU_0 (*(volatile struct CMU_tag *) 0xFBFB0200UL)
#define CMU_1 (*(volatile struct CMU_tag *) 0xFBFB0240UL)
#define CMU_2 (*(volatile struct CMU_tag *) 0xFBFB0280UL)
#define CMU_3 (*(volatile struct CMU_tag *) 0xFBFB02C0UL)
#define CMU_4 (*(volatile struct CMU_tag *) 0xFBFB0300UL)
#define CRC_0 (*(volatile struct CRC_tag *) 0xFFF64000UL)
#define CTU_0 (*(volatile struct CTU_tag *) 0xFBC10000UL)
#define CTU_1 (*(volatile struct CTU_tag *) 0xFFC14000UL)
#define DMAMUX_0 (*(volatile struct DMAMUX_tag *) 0xFFF6C000UL)
#define DMAMUX_1 (*(volatile struct DMAMUX_tag *) 0xFBF6C000UL)
#define DMA_0 (*(volatile struct DMA_tag *) 0xFC0A0000UL)
#define ETIMER_0 (*(volatile struct ETIMER_tag *) 0xFBC20000UL)
#define ETIMER_1 (*(volatile struct ETIMER_tag *) 0xFFC24000UL)
#define ETIMER_2 (*(volatile struct ETIMER_tag *) 0xFBC28000UL)
#define FCCU (*(volatile struct FCCU_tag *) 0xFBF58000UL)
#define FR_0 (*(volatile struct FR_tag *) 0xFFE50000UL)
#define FlexPWM_0 (*(volatile struct FlexPWM_tag *) 0xFBC00000UL)
#define FlexPWM_1 (*(volatile struct FlexPWM_tag *) 0xFFC04000UL)
#define INTC_0 (*(volatile struct INTC_tag *) 0xFC040000UL)
#define LFAST_0 (*(volatile struct LFAST_tag *) 0xFFFD8000UL)
#define LINFlexD_0 (*(volatile struct LINFlexD_tag *) 0xFBE84000UL)
#define LINFlexD_1 (*(volatile struct LINFlexD_tag *) 0xFFE90000UL)
#define MC_CGM (*(volatile struct MC_CGM_tag *) 0xFFFB0000UL)
#define MC_ME (*(volatile struct MC_ME_tag *) 0xFFFB8000UL)
#define MC_PCU (*(volatile struct MC_PCU_tag *) 0xFFFA0000UL)
#define MC_RGM (*(volatile struct MC_RGM_tag *) 0xFFFA8000UL)
#define MEMU (*(volatile struct MEMU_tag *) 0xFFF50000UL)
#define PCM (*(volatile struct PCM_tag *) 0xFC028000UL)
#define PFLASH (*(volatile struct PFLASH_tag *) 0xFC030000UL)
#define PIT_0 (*(volatile struct PIT_tag *) 0xFFF84000UL)
#define PLLDIG (*(volatile struct PLLDIG_tag *) 0xFFFB0100UL)
#define PMC (*(volatile struct PMC_tag *) 0xFFFA0400UL)
#define PRAMC (*(volatile struct PRAMC_tag *) 0xFC020000UL)
#define RCOSC (*(volatile struct RCOSC_tag *) 0xFFFB0000UL)
#define SGEN_0 (*(volatile struct SGEN_tag *) 0xFBC40000UL)
#define SIPI_0 (*(volatile struct SIPI_tag *) 0xFFFD0000UL)
#define SIUL2 (*(volatile struct SIUL2_tag *) 0xFFFC0000UL)
#define SMPU_0 (*(volatile struct SMPU_tag *) 0xFC010000UL)
#define SPI_0 (*(volatile struct SPI_tag *) 0xFFE70000UL)
#define SPI_1 (*(volatile struct SPI_tag *) 0xFFE74000UL)
#define SPI_2 (*(volatile struct SPI_tag *) 0xFBE70000UL)
#define SPI_3 (*(volatile struct SPI_tag *) 0xFBE74000UL)
#define SRX_0 (*(volatile struct SRX_tag *) 0xFFE5C000UL)
#define SRX_1 (*(volatile struct SRX_tag *) 0xFBE5C000UL)
#define SSCM (*(volatile struct SSCM_tag *) 0xFFFF8000UL)
#define STCU (*(volatile struct STCU_tag *) 0xFFF44000UL)
#define STM_0 (*(volatile struct STM_tag *) 0xFC068000UL)
#define SWT_0 (*(volatile struct SWT_tag *) 0xFC050000UL)
#define WKPU (*(volatile struct WKPU_tag *) 0xFFF98000UL)
#define XBAR_0 (*(volatile struct XBAR_tag *) 0xFC004000UL)
#define XBIC (*(volatile struct XBIC_tag *) 0xFC018000UL)
#define XOSC (*(volatile struct XOSC_tag *) 0xFFFB0080UL)
#ifdef __MWERKS__
#pragma pop
#endif
#ifdef  __cplusplus
}
#endif
#endif /* ifdef _MPC5744P_H */
