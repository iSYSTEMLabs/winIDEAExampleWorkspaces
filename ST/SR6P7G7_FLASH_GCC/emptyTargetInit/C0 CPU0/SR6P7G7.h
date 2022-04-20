
/******************************************************************************
* Copyright‚ © 2020-2021 STMicroelectronics - All Rights Reserved
*
* License terms: STMicroelectronics Proprietary in accordance with licensing
* terms SLA0089 at www.st.com.
* 
* THIS SOFTWARE IS DISTRIBUTED "AS IS," AND ALL WARRANTIES ARE DISCLAIMED, 
* INCLUDING MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
* 
* EVALUATION ONLY - NOT FOR USE IN PRODUCTION
*******************************************************************************/

#ifndef _SR6P7_POWER_MANAGEMENT_H_
#define _SR6P7_POWER_MANAGEMENT_H_

/*******************************************************************************
 * REVISION HISTORY                                                            *
 * REV       DATE       RM REV          DESCRIPTION OF CHANGE                  *
 * ------ ----------- ------------ --------------------------------------------*
 * 1.1    23-Nov-2020 Rev 1 Hot Fix 1   SR6P7_SR6G7_20M_CUT10_RDP_Rev1_30OCT20 *
 ******************************************************************************/

#include <typedefs.h>

#define mem(addr) (*(unsigned char volatile *)(addr))
#define memw(addr) (*(unsigned short volatile *)(addr))
#define meml(addr) (*(unsigned long volatile *)(addr))
#define memll(addr) (*(unsigned long long volatile *)(addr))

/**************************************************************************/
/*                 Module: MC_ME_DOMAIN            */
/**************************************************************************/
struct MC_ME_DOMAIN_tag {
    union {
        vuint32_t R;
        struct {
            vuint32_t S_SYSCLK:4;
            vuint32_t S_IRC:1;
            vuint32_t S_XOSC:1;
            vuint32_t S_PLL0:1;
            vuint32_t S_PLL1:1;
            vuint32_t unused_0:8;
            vuint32_t S_FLA:2;
            vuint32_t unused_1:2;
            vuint32_t S_MVR:1;
            vuint32_t unused_2:2;
            vuint32_t S_PDO:1;
            vuint32_t unused_3:3;
            vuint32_t S_MTRANS:1;
            vuint32_t S_CURRENT_MODE:4;
        } B;
    } GS;

    union {
        vuint32_t R;
        struct {
            vuint32_t KEY:16;
            vuint32_t unused_0:12;
            vuint32_t TARGET_MODE:4;
        } B;
    } MCTL;

    union {
        vuint32_t R;
        struct {
            vuint32_t RESET_FUNC:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t unused_0:7;
            vuint32_t RESET_DEST:1;
            vuint32_t unused_1:16;
        } B;
    } ME;

    union {
        vuint32_t R;
        struct {
            vuint32_t I_MTC:1;
            vuint32_t I_SAFE:1;
            vuint32_t I_IMODE:1;
            vuint32_t I_ICONF:1;
            vuint32_t I_ICONF_CU:1;
            vuint32_t I_ICONF_CC:1;
            vuint32_t unused_0:26;
        } B;
    } IS;

    union {
        vuint32_t R;
        struct {
            vuint32_t M_MTC:1;
            vuint32_t M_SAFE:1;
            vuint32_t M_IMODE:1;
            vuint32_t M_ICONF:1;
            vuint32_t M_ICONF_CU:1;
            vuint32_t M_ICONF_CC:1;
            vuint32_t unused_0:26;
        } B;
    } IM;

    union {
        vuint32_t R;
        struct {
            vuint32_t S_SEA:1;
            vuint32_t S_NMA:1;
            vuint32_t S_DMA:1;
            vuint32_t S_MRI:1;
            vuint32_t S_MTI:1;
            vuint32_t S_MRIG:1;
            vuint32_t unused_0:26;
        } B;
    } IMTS;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t NVM_SC:1;
            vuint32_t unused_1:1;
            vuint32_t SYSCLK_SW:1;
            vuint32_t SCSRC_SC:1;
            vuint32_t IRC_SC:1;
            vuint32_t CSRC_CSRC_SC:1;
            vuint32_t VREG_CSRC_SC:1;
            vuint32_t unused_2:1;
            vuint32_t SMR:1;
            vuint32_t PCS_PROG:1;
            vuint32_t CCKL_PROG:1;
            vuint32_t DBG_MODE:1;
            vuint32_t PMC_PROG:1;
            vuint32_t unused_3:2;
            vuint32_t MPH_BUSY:1;
            vuint32_t unused_4:4;
            vuint32_t PREVIOUS_MODE:4;
        } B;
    } DMTS;

    vuint8_t ADR_reserved0[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL1ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:8;
        } B;
    } RESET_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL1ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } TEST_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL1ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } SAFE_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL1ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } DRUN_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL1ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } RUN_MC[4];

    vuint8_t ADR_reserved1[64];

    union {
        vuint32_t R;
        struct {
            vuint32_t RESET:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t unused_0:24;
        } B;
    } RUN_PC[8];

    vuint8_t ADR_reserved2[288];

    union {
        vuint32_t R;
        struct {
            vuint32_t S_CORE0:1;
            vuint32_t S_CORE1:1;
            vuint32_t unused_0:12;
            vuint32_t S_CLUSTER_CORE0:1;
            vuint32_t S_CLUSTER_CORE1:1;
            vuint32_t unused_1:16;
        } B;
    } CS;

    union {
        vuint16_t R;
        struct {
            vuint16_t RESET:1;
            vuint16_t TEST:1;
            vuint16_t SAFE:1;
            vuint16_t DRUN:1;
            vuint16_t RUN0:1;
            vuint16_t RUN1:1;
            vuint16_t RUN2:1;
            vuint16_t RUN3:1;
            vuint16_t unused_0:8;
        } B;
    } CCTL1;

    union {
        vuint16_t R;
        struct {
            vuint16_t RESET:1;
            vuint16_t TEST:1;
            vuint16_t SAFE:1;
            vuint16_t DRUN:1;
            vuint16_t RUN0:1;
            vuint16_t RUN1:1;
            vuint16_t RUN2:1;
            vuint16_t RUN3:1;
            vuint16_t unused_0:8;
        } B;
    } CCTL0;

    vuint8_t ADR_reserved3[24];

    union {
        vuint32_t R;
        struct {
            vuint32_t RMC:1;
            vuint32_t unused_0:1;
            vuint32_t ADDR:30;
        } B;
    } CADDR0;

    union {
        vuint32_t R;
        struct {
            vuint32_t RMC:1;
            vuint32_t unused_0:1;
            vuint32_t ADDR:30;
        } B;
    } CADDR1;

};

/**************************************************************************/
/*                 Module: MC_ME_PERIPHERAL_DOMAIN            */
/**************************************************************************/
struct MC_ME_PERIPHERAL_DOMAIN_tag {
    union {
        vuint32_t R;
        struct {
            vuint32_t S_SYSCLK:4;
            vuint32_t S_IRC:1;
            vuint32_t S_XOSC:1;
            vuint32_t S_PLL0:1;
            vuint32_t S_PLL0_JM:1;
            vuint32_t unused_0:8;
            vuint32_t S_FLA:2;
            vuint32_t unused_1:2;
            vuint32_t S_MVR:1;
            vuint32_t unused_2:2;
            vuint32_t S_PDO:1;
            vuint32_t unused_3:3;
            vuint32_t S_MTRANS:1;
            vuint32_t S_CURRENT_MODE:4;
        } B;
    } GS;

    union {
        vuint32_t R;
        struct {
            vuint32_t KEY:16;
            vuint32_t unused_0:12;
            vuint32_t TARGET_MODE:4;
        } B;
    } MCTL;

    union {
        vuint32_t R;
        struct {
            vuint32_t RESET_FUNC:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t unused_0:2;
            vuint32_t STOP0:1;
            vuint32_t unused_1:2;
            vuint32_t STANDBY0:1;
            vuint32_t unused_2:1;
            vuint32_t RESET_DEST:1;
            vuint32_t unused_3:16;
        } B;
    } ME;

    union {
        vuint32_t R;
        struct {
            vuint32_t I_MTC:1;
            vuint32_t I_SAFE:1;
            vuint32_t I_IMODE:1;
            vuint32_t I_ICONF:1;
            vuint32_t I_ICONF_CU:1;
            vuint32_t I_ICONF_CC:1;
            vuint32_t unused_0:26;
        } B;
    } IS;

    union {
        vuint32_t R;
        struct {
            vuint32_t M_MTC:1;
            vuint32_t M_SAFE:1;
            vuint32_t M_IMODE:1;
            vuint32_t M_ICONF:1;
            vuint32_t M_ICONF_CU:1;
            vuint32_t M_ICONF_CC:1;
            vuint32_t unused_0:26;
        } B;
    } IM;

    union {
        vuint32_t R;
        struct {
            vuint32_t S_SEA:1;
            vuint32_t S_NMA:1;
            vuint32_t S_DMA:1;
            vuint32_t S_MRI:1;
            vuint32_t S_MTI:1;
            vuint32_t S_MRIG:1;
            vuint32_t unused_0:26;
        } B;
    } IMTS;

    union {
        vuint32_t R;
        struct {
            vuint32_t CDP_PRPH_0_31:1;
            vuint32_t CDP_PRPH_32_63:1;
            vuint32_t CDP_PRPH_64_95:1;
            vuint32_t CDP_PRPH_96_127:1;
            vuint32_t CDP_PRPH_128_159:1;
            vuint32_t CDP_PRPH_160_191:1;
            vuint32_t CDP_PRPH_192_223:1;
            vuint32_t CDP_PRPH_224_255:1;
            vuint32_t NVM_SC:1;
            vuint32_t unused_0:1;
            vuint32_t SYSCLK_SW:1;
            vuint32_t SCSRC_SC:1;
            vuint32_t IRC_SC:1;
            vuint32_t CSRC_CSRC_SC:1;
            vuint32_t VREG_CSRC_SC:1;
            vuint32_t CDP_PRPH_0_255:1;
            vuint32_t SMR:1;
            vuint32_t PCS_PROG:1;
            vuint32_t CCKL_PROG:1;
            vuint32_t DBG_MODE:1;
            vuint32_t PMC_PROG:1;
            vuint32_t unused_1:2;
            vuint32_t MPH_BUSY:1;
            vuint32_t unused_2:4;
            vuint32_t PREVIOUS_MODE:4;
        } B;
    } DMTS;

    vuint8_t ADR_reserved0[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:8;
        } B;
    } RESET_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } TEST_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } SAFE_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } DRUN_MC;

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:4;
            vuint32_t PWRLVL:3;
            vuint32_t unused_4:1;
        } B;
    } RUN_MC[4];

    vuint8_t ADR_reserved1[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:8;
        } B;
    } STOP0_MC;

    vuint8_t ADR_reserved2[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t SYSCLK:4;
            vuint32_t IRCON:1;
            vuint32_t XOSCON:1;
            vuint32_t PLL0ON:1;
            vuint32_t PLL_JM_ON:1;
            vuint32_t unused_0:8;
            vuint32_t FLAON:2;
            vuint32_t unused_1:2;
            vuint32_t MVRON:1;
            vuint32_t unused_2:2;
            vuint32_t PDO:1;
            vuint32_t unused_3:8;
        } B;
    } STANDBY0_MC;

    vuint8_t ADR_reserved3[40];

    union {
        vuint32_t R;
        struct {
            vuint32_t RESET:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t unused_0:24;
        } B;
    } RUN_PC[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:10;
            vuint32_t STOP0:1;
            vuint32_t unused_1:2;
            vuint32_t STANDBY0:1;
            vuint32_t unused_2:18;
        } B;
    } LP_PC[8];

    vuint8_t ADR_reserved4[256];

    union {
        vuint32_t R;
        struct {
            vuint32_t S_CORE0:1;
            vuint32_t S_CORE1:1;
            vuint32_t unused_0:12;
            vuint32_t S_DME:1;
            vuint32_t S_DSPH:1;
            vuint32_t unused_1:16;
        } B;
    } CS;

    union {
        vuint16_t R;
        struct {
            vuint16_t RESET:1;
            vuint16_t TEST:1;
            vuint16_t SAFE:1;
            vuint16_t DRUN:1;
            vuint16_t RUN0:1;
            vuint16_t RUN1:1;
            vuint16_t RUN2:1;
            vuint16_t RUN3:1;
            vuint16_t unused_0:2;
            vuint16_t STOP0:1;
            vuint16_t unused_1:2;
            vuint16_t STANDBY0:1;
            vuint16_t unused_2:2;
        } B;
    } CCTL1;

    union {
        vuint16_t R;
        struct {
            vuint16_t RESET:1;
            vuint16_t TEST:1;
            vuint16_t SAFE:1;
            vuint16_t DRUN:1;
            vuint16_t RUN0:1;
            vuint16_t RUN1:1;
            vuint16_t RUN2:1;
            vuint16_t RUN3:1;
            vuint16_t unused_0:2;
            vuint16_t STOP0:1;
            vuint16_t unused_1:2;
            vuint16_t STANDBY0:1;
            vuint16_t unused_2:2;
        } B;
    } CCTL0;

    vuint8_t ADR_reserved5[2];

    union {
        vuint16_t R;
        struct {
            vuint16_t RESET:1;
            vuint16_t TEST:1;
            vuint16_t SAFE:1;
            vuint16_t DRUN:1;
            vuint16_t RUN0:1;
            vuint16_t RUN1:1;
            vuint16_t RUN2:1;
            vuint16_t RUN3:1;
            vuint16_t unused_0:2;
            vuint16_t STOP0:1;
            vuint16_t unused_1:2;
            vuint16_t STANDBY0:1;
            vuint16_t unused_2:2;
        } B;
    } CCTL2;

    vuint8_t ADR_reserved6[20];

    union {
        vuint32_t R;
        struct {
            vuint32_t RMC:1;
            vuint32_t unused_0:1;
            vuint32_t ADDR:30;
        } B;
    } CADDR0;

    union {
        vuint32_t R;
        struct {
            vuint32_t RMC:1;
            vuint32_t unused_0:1;
            vuint32_t ADDR:30;
        } B;
    } CADDR1;

    union {
        vuint32_t R;
        struct {
            vuint32_t RMC:1;
            vuint32_t unused_0:1;
            vuint32_t ADDR:30;
        } B;
    } CADDR2;

    vuint8_t ADR_reserved7[24];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:31;
            vuint32_t S_GTM_0:1;
        } B;
    } PS1_M0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:1;
            vuint32_t S_SYSCONF_0:1;
            vuint32_t unused_1:18;
            vuint32_t S_SIPI_0:1;
            vuint32_t unused_2:3;
            vuint32_t S_LFAST_0:1;
            vuint32_t unused_3:7;
        } B;
    } PS2_M0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:5;
            vuint32_t S_GST_0:1;
            vuint32_t unused_1:6;
            vuint32_t S_SAR_ADC_9BIT_6_SEQ:1;
            vuint32_t S_SAR_ADC_9BIT_6:1;
            vuint32_t unused_2:2;
            vuint32_t S_SAR_ADC_9BIT_2_SEQ:1;
            vuint32_t S_SAR_ADC_9BIT_2:1;
            vuint32_t S_SAR_ADC_9BIT_0_SEQ:1;
            vuint32_t S_SAR_ADC_9BIT_0:1;
            vuint32_t unused_3:5;
            vuint32_t S_DSPL_10:1;
            vuint32_t S_DSPL_8:1;
            vuint32_t S_DSPL_6:1;
            vuint32_t S_DSPL_4:1;
            vuint32_t S_DSPL_2:1;
            vuint32_t S_DSPL_0:1;
            vuint32_t unused_4:1;
        } B;
    } PS3_M0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t S_CRC_4:1;
            vuint32_t S_CRC_2:1;
            vuint32_t S_CRC_0:1;
            vuint32_t unused_1:2;
            vuint32_t S_DMAMUX_1_0_SYS_2:1;
            vuint32_t S_DMAMUX_1_0_SYS_0:1;
            vuint32_t unused_2:20;
            vuint32_t S_SD_ADC_10:1;
            vuint32_t S_SD_ADC_8:1;
            vuint32_t S_SD_ADC_6:1;
        } B;
    } PS4_M0;

    union {
        vuint32_t R;
        struct {
            vuint32_t S_SD_ADC_4:1;
            vuint32_t S_SD_ADC_2:1;
            vuint32_t S_SD_ADC_0:1;
            vuint32_t unused_0:13;
            vuint32_t S_SAR_ADCQ_12BIT_10:1;
            vuint32_t S_SAR_ADCQ_12BIT_8:1;
            vuint32_t S_SAR_ADCQ_12BIT_6:1;
            vuint32_t S_SAR_ADCQ_12BIT_4:1;
            vuint32_t S_SAR_ADCQ_12BIT_2:1;
            vuint32_t S_SAR_ADCQ_12BIT_0:1;
            vuint32_t S_SAR_ADCQ_12BIT_SV_0:1;
            vuint32_t unused_1:9;
        } B;
    } PS5_M0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:17;
            vuint32_t S_SAR_ADC_12BIT_10_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_10:1;
            vuint32_t S_SAR_ADC_12BIT_8_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_8:1;
            vuint32_t S_SAR_ADC_12BIT_6_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_6:1;
            vuint32_t S_SAR_ADC_12BIT_4_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_4:1;
            vuint32_t S_SAR_ADC_12BIT_2_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_2:1;
            vuint32_t S_SAR_ADC_12BIT_0_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_0:1;
            vuint32_t S_SAR_ADC_12BIT_SV_0_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_SV_0:1;
            vuint32_t unused_1:1;
        } B;
    } PS6_M0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t S_CAN_RAM_SUB_4:1;
            vuint32_t unused_1:2;
            vuint32_t S_M_CAN_4_SUB_4:1;
            vuint32_t S_M_CAN_3_SUB_4:1;
            vuint32_t S_M_CAN_2_SUB_4:1;
            vuint32_t S_M_CAN_1_SUB_4:1;
            vuint32_t unused_2:4;
            vuint32_t S_CAN_RAM_SUB_2:1;
            vuint32_t unused_3:2;
            vuint32_t S_M_CAN_4_SUB_2:1;
            vuint32_t S_M_CAN_3_SUB_2:1;
            vuint32_t S_M_CAN_2_SUB_2:1;
            vuint32_t S_M_CAN_1_SUB_2:1;
            vuint32_t unused_4:12;
        } B;
    } PS7_M0;

    vuint8_t ADR_reserved8[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:31;
            vuint32_t S_GTM_1:1;
        } B;
    } PS1_M1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:20;
            vuint32_t S_SIPI_1:1;
            vuint32_t unused_1:3;
            vuint32_t S_LFAST_1:1;
            vuint32_t unused_2:7;
        } B;
    } PS2_M1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t S_SAR_ADC_9BIT_3_SEQ:1;
            vuint32_t S_SAR_ADC_9BIT_3:1;
            vuint32_t unused_1:7;
            vuint32_t S_DSPL_11:1;
            vuint32_t S_DSPL_9:1;
            vuint32_t S_DSPL_7:1;
            vuint32_t S_DSPL_5:1;
            vuint32_t S_DSPL_3:1;
            vuint32_t S_DSPL_1:1;
            vuint32_t unused_2:1;
        } B;
    } PS3_M1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t S_CRC_5:1;
            vuint32_t S_CRC_3:1;
            vuint32_t S_CRC_1:1;
            vuint32_t unused_1:2;
            vuint32_t S_DMAMUX_3_0_SYS_3:1;
            vuint32_t S_DMAMUX_1_0_SYS_1:1;
            vuint32_t unused_2:20;
            vuint32_t S_SD_ADC_11:1;
            vuint32_t S_SD_ADC_9:1;
            vuint32_t S_SD_ADC_7:1;
        } B;
    } PS4_M1;

    union {
        vuint32_t R;
        struct {
            vuint32_t S_SD_ADC_5:1;
            vuint32_t S_SD_ADC_3:1;
            vuint32_t S_SD_ADC_1:1;
            vuint32_t unused_0:14;
            vuint32_t S_SAR_ADCQ_12BIT_9:1;
            vuint32_t S_SAR_ADCQ_12BIT_7:1;
            vuint32_t S_SAR_ADCQ_12BIT_5:1;
            vuint32_t S_SAR_ADCQ_12BIT_3:1;
            vuint32_t S_SAR_ADCQ_12BIT_1:1;
            vuint32_t unused_1:10;
        } B;
    } PS5_M1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:19;
            vuint32_t S_SAR_ADC_12BIT_9_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_9:1;
            vuint32_t S_SAR_ADC_12BIT_7_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_7:1;
            vuint32_t S_SAR_ADC_12BIT_5_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_5:1;
            vuint32_t S_SAR_ADC_12BIT_3_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_3:1;
            vuint32_t S_SAR_ADC_12BIT_1_SEQ:1;
            vuint32_t S_SAR_ADC_12BIT_1:1;
            vuint32_t unused_1:3;
        } B;
    } PS6_M1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t S_CAN_RAM_SUB_3:1;
            vuint32_t unused_1:2;
            vuint32_t S_M_CAN_4_SUB_3:1;
            vuint32_t S_M_CAN_3_SUB_3:1;
            vuint32_t S_M_CAN_2_SUB_3:1;
            vuint32_t S_M_CAN_1_SUB_3:1;
            vuint32_t unused_2:4;
            vuint32_t S_CAN_RAM_SUB_1:1;
            vuint32_t unused_3:2;
            vuint32_t S_M_CAN_4_SUB_1:1;
            vuint32_t S_M_CAN_3_SUB_1:1;
            vuint32_t S_M_CAN_2_SUB_1:1;
            vuint32_t S_M_CAN_1_SUB_1:1;
            vuint32_t unused_4:1;
        } B;
    } PS7_M1;

    vuint8_t ADR_reserved9[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:4;
            vuint32_t S_SIUL_2:1;
            vuint32_t S_SIUL_0:1;
            vuint32_t unused_1:26;
        } B;
    } PS1_M2;

    vuint8_t ADR_reserved10[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:10;
            vuint32_t S_OCTOSPI_0:1;
            vuint32_t unused_1:18;
            vuint32_t S_PSI5S_0:1;
            vuint32_t unused_2:2;
        } B;
    } PS5_M2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:1;
            vuint32_t S_PSI5_0:1;
            vuint32_t unused_1:3;
            vuint32_t S_SENT_0:1;
            vuint32_t unused_2:2;
            vuint32_t S_LINFLEXD_18:1;
            vuint32_t S_LINFLEXD_16:1;
            vuint32_t S_LINFLEXD_14:1;
            vuint32_t S_LINFLEXD_12:1;
            vuint32_t S_LINFLEXD_10:1;
            vuint32_t S_LINFLEXD_8:1;
            vuint32_t S_LINFLEXD_6:1;
            vuint32_t S_LINFLEXD_4:1;
            vuint32_t S_LINFLEXD_2:1;
            vuint32_t unused_3:7;
            vuint32_t S_LINFLEXD_26:1;
            vuint32_t S_LINFLEXD_24:1;
            vuint32_t S_LINFLEXD_22:1;
            vuint32_t S_LINFLEXD_20:1;
            vuint32_t unused_4:3;
            vuint32_t S_SPIQ_8:1;
        } B;
    } PS6_M2;

    union {
        vuint32_t R;
        struct {
            vuint32_t S_SPIQ_6:1;
            vuint32_t S_SPIQ_4:1;
            vuint32_t unused_0:1;
            vuint32_t S_SPIQ_0:1;
            vuint32_t unused_1:5;
            vuint32_t S_DSPI_4:1;
            vuint32_t unused_2:1;
            vuint32_t S_DSPI_0:1;
            vuint32_t unused_3:13;
            vuint32_t S_FLEXRAY_0:1;
            vuint32_t unused_4:6;
        } B;
    } PS7_M2;

    vuint8_t ADR_reserved11[20];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:3;
            vuint32_t S_MSCP_1:1;
            vuint32_t unused_1:22;
            vuint32_t S_IIC_1:1;
            vuint32_t unused_2:2;
            vuint32_t S_PSI5S_1:1;
            vuint32_t unused_3:2;
        } B;
    } PS5_M3;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:1;
            vuint32_t S_PSI5_1:1;
            vuint32_t unused_1:3;
            vuint32_t S_SENT_1:1;
            vuint32_t unused_2:2;
            vuint32_t S_LINFLEXD_19:1;
            vuint32_t S_LINFLEXD_17:1;
            vuint32_t S_LINFLEXD_15:1;
            vuint32_t S_LINFLEXD_13:1;
            vuint32_t S_LINFLEXD_11:1;
            vuint32_t S_LINFLEXD_9:1;
            vuint32_t S_LINFLEXD_7:1;
            vuint32_t S_LINFLEXD_5:1;
            vuint32_t S_LINFLEXD_3:1;
            vuint32_t unused_3:7;
            vuint32_t S_LINFLEXD_27:1;
            vuint32_t S_LINFLEXD_25:1;
            vuint32_t S_LINFLEXD_23:1;
            vuint32_t S_LINFLEXD_21:1;
            vuint32_t unused_4:4;
        } B;
    } PS6_M3;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t S_DSPI_7:1;
            vuint32_t unused_1:8;
            vuint32_t S_MSC_1:1;
            vuint32_t unused_2:7;
            vuint32_t S_FLEXRAY_1:1;
            vuint32_t unused_3:6;
        } B;
    } PS7_M3;

    vuint8_t ADR_reserved12[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:1;
            vuint32_t S_SYSCONF_4:1;
            vuint32_t unused_1:30;
        } B;
    } PS2_M4;

    vuint8_t ADR_reserved13[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:20;
            vuint32_t S_DSPI_9:1;
            vuint32_t S_DSPI_8:1;
            vuint32_t unused_1:1;
            vuint32_t S_DSPI_6:1;
            vuint32_t S_DSPI_5:1;
            vuint32_t unused_2:1;
            vuint32_t S_DSPI_3:1;
            vuint32_t S_DSPI_2:1;
            vuint32_t S_DSPI_1:1;
            vuint32_t unused_3:3;
        } B;
    } PS6_M4;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:1;
            vuint32_t S_MSCP_0:1;
            vuint32_t unused_1:2;
            vuint32_t S_MSC_3:1;
            vuint32_t S_MSC_2:1;
            vuint32_t unused_2:1;
            vuint32_t S_MSC_0:1;
            vuint32_t unused_3:4;
            vuint32_t S_SPIQ_9:1;
            vuint32_t unused_4:1;
            vuint32_t S_SPIQ_7:1;
            vuint32_t unused_5:3;
            vuint32_t S_SPIQ_3:1;
            vuint32_t unused_6:1;
            vuint32_t S_SPIQ_1:1;
            vuint32_t unused_7:5;
            vuint32_t S_CM_2:1;
            vuint32_t S_CM_1:1;
            vuint32_t unused_8:2;
            vuint32_t S_ETHERNET_1:1;
            vuint32_t S_ETHERNET_0:1;
        } B;
    } PS7_M4;

    vuint8_t ADR_reserved14[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:1;
            vuint32_t S_SYSCONF_5:1;
            vuint32_t unused_1:30;
        } B;
    } PS2_M5;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:18;
            vuint32_t S_SAR_ADC_LP_RUN_0_SEQ:1;
            vuint32_t S_SAR_ADC_LP_RUN_0:1;
            vuint32_t unused_1:12;
        } B;
    } PS3_M5;

    vuint8_t ADR_reserved15[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:26;
            vuint32_t S_IIC_0:1;
            vuint32_t unused_1:5;
        } B;
    } PS5_M5;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t S_LINFLEXD_1:1;
            vuint32_t S_LINFLEXD_0:1;
            vuint32_t unused_1:14;
        } B;
    } PS6_M5;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t S_SPIQ_5:1;
            vuint32_t unused_1:2;
            vuint32_t S_SPIQ_2:1;
            vuint32_t unused_2:4;
            vuint32_t S_CAN_RAM_SUB_0:1;
            vuint32_t unused_3:3;
            vuint32_t S_M_CAN_3_SUB_0:1;
            vuint32_t S_M_CAN_2_SUB_0:1;
            vuint32_t S_M_CAN_1_SUB_0:1;
            vuint32_t S_M_TTCAN_0_SUB_0:1;
        } B;
    } PS7_M5;

    vuint8_t ADR_reserved16[380];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL63;

    vuint8_t ADR_reserved17[5];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL65;

    vuint8_t ADR_reserved18[20];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL84;

    vuint8_t ADR_reserved19[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL88;

    vuint8_t ADR_reserved20[10];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL101;

    vuint8_t ADR_reserved21[7];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL109;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL108;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL115;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL114;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL113;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL112;

    vuint8_t ADR_reserved22[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL123;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL122;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL121;

    vuint8_t ADR_reserved23[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL126;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL125;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL124;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL131;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL130;

    vuint8_t ADR_reserved24[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL135;

    vuint8_t ADR_reserved25[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL132;

    vuint8_t ADR_reserved26[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL136;

    vuint8_t ADR_reserved27[16];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL159;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL158;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL157;

    vuint8_t ADR_reserved28[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL162;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL161;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL160;

    vuint8_t ADR_reserved29[12];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL179;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL178;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL177;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL176;

    vuint8_t ADR_reserved30[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL182;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL181;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL180;

    vuint8_t ADR_reserved31[24];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL211;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL210;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL209;

    vuint8_t ADR_reserved32[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL215;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL214;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL213;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL212;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL219;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL218;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL217;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL216;

    vuint8_t ADR_reserved33[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL222;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL221;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL220;

    vuint8_t ADR_reserved34[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL226;

    vuint8_t ADR_reserved35[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL231;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL230;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL229;

    vuint8_t ADR_reserved36[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL232;

    vuint8_t ADR_reserved37[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL237;

    vuint8_t ADR_reserved38[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL243;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL242;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL241;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL240;

    vuint8_t ADR_reserved39[72];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL319;

    vuint8_t ADR_reserved40[26];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL340;

    vuint8_t ADR_reserved41[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL344;

    vuint8_t ADR_reserved42[22];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL369;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL368;

    vuint8_t ADR_reserved43[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL379;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL378;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL377;

    vuint8_t ADR_reserved44[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL382;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL381;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL380;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL387;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL386;

    vuint8_t ADR_reserved45[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL391;

    vuint8_t ADR_reserved46[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL388;

    vuint8_t ADR_reserved47[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL392;

    vuint8_t ADR_reserved48[16];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL415;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL414;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL413;

    vuint8_t ADR_reserved49[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL418;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL417;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL416;

    vuint8_t ADR_reserved50[12];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL435;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL434;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL433;

    vuint8_t ADR_reserved51[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL437;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL436;

    vuint8_t ADR_reserved52[24];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL467;

    vuint8_t ADR_reserved53[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL471;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL470;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL469;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL468;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL475;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL474;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL473;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL472;

    vuint8_t ADR_reserved54[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL476;

    vuint8_t ADR_reserved55[14];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL493;

    vuint8_t ADR_reserved56[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL499;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL498;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL497;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL496;

    vuint8_t ADR_reserved57[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL507;

    vuint8_t ADR_reserved58[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL504;

    vuint8_t ADR_reserved59[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL510;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL509;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL508;

    vuint8_t ADR_reserved60[38];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL549;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL548;

    vuint8_t ADR_reserved61[129];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL682;

    vuint8_t ADR_reserved62[20];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL701;

    vuint8_t ADR_reserved63[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL705;

    vuint8_t ADR_reserved64[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL709;

    vuint8_t ADR_reserved65[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL715;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL714;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL713;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL712;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL719;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL718;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL717;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL716;

    vuint8_t ADR_reserved66[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL720;

    vuint8_t ADR_reserved67[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL731;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL730;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL729;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL728;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL735;

    vuint8_t ADR_reserved68[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL739;

    vuint8_t ADR_reserved69[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL737;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL736;

    vuint8_t ADR_reserved70[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL747;

    vuint8_t ADR_reserved71[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL745;

    vuint8_t ADR_reserved72[15];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL761;

    vuint8_t ADR_reserved73[165];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL931;

    vuint8_t ADR_reserved74[24];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL954;

    vuint8_t ADR_reserved75[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL957;

    vuint8_t ADR_reserved76[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL961;

    vuint8_t ADR_reserved77[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL965;

    vuint8_t ADR_reserved78[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL971;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL970;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL969;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL968;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL975;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL974;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL973;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL972;

    vuint8_t ADR_reserved79[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL976;

    vuint8_t ADR_reserved80[4];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL987;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL986;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL985;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL984;

    vuint8_t ADR_reserved81[15];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1000;

    vuint8_t ADR_reserved82[6];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1009;

    vuint8_t ADR_reserved83[7];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1017;

    vuint8_t ADR_reserved84[71];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1089;

    vuint8_t ADR_reserved85[145];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1239;

    vuint8_t ADR_reserved86[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1237;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1236;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1243;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1242;

    vuint8_t ADR_reserved87[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1240;

    vuint8_t ADR_reserved88[3];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1244;

    vuint8_t ADR_reserved89[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1249;

    vuint8_t ADR_reserved90[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1255;

    vuint8_t ADR_reserved91[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1253;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1252;

    vuint8_t ADR_reserved92[5];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1262;

    vuint8_t ADR_reserved93[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1260;

    vuint8_t ADR_reserved94[1];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1266;

    vuint8_t ADR_reserved95[5];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1268;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1275;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1274;

    vuint8_t ADR_reserved96[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1279;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1278;

    vuint8_t ADR_reserved97[68];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1345;

    vuint8_t ADR_reserved98[45];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1395;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1394;

    vuint8_t ADR_reserved99[71];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1466;

    vuint8_t ADR_reserved100[24];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1489;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1488;

    vuint8_t ADR_reserved101[28];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1523;

    vuint8_t ADR_reserved102[2];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1520;

    vuint8_t ADR_reserved103[7];

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1528;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1535;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1534;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1533;

    union {
        vuint8_t R;
        struct {
            vuint8_t RUN_CFG:3;
            vuint8_t LP_CFG:3;
            vuint8_t RES:1;
            vuint8_t unused_0:1;
        } B;
    } PCTL1532;

};

/**************************************************************************/
/*                 Module: MC_PCU_PERIPHERAL_DOMAIN            */
/**************************************************************************/
struct MC_PCU_PERIPHERAL_DOMAIN_tag {
    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF0;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF1;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF2;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF3;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF4;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF5;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF6;

    union {
        vuint32_t R;
        struct {
            vuint32_t RST:1;
            vuint32_t TEST:1;
            vuint32_t SAFE:1;
            vuint32_t DRUN:1;
            vuint32_t RUN0:1;
            vuint32_t RUN1:1;
            vuint32_t RUN2:1;
            vuint32_t RUN3:1;
            vuint32_t HALT:1;
            vuint32_t unused_0:1;
            vuint32_t STOP:1;
            vuint32_t unused_1:2;
            vuint32_t STBY0:1;
            vuint32_t unused_2:18;
        } B;
    } PCONF7;

    vuint8_t ADR_reserved0[32];

    union {
        vuint32_t R;
        struct {
            vuint32_t PD0:1;
            vuint32_t PD1:1;
            vuint32_t PD2:1;
            vuint32_t PD3:1;
            vuint32_t PD4:1;
            vuint32_t PD5:1;
            vuint32_t PD6:1;
            vuint32_t PD7:1;
            vuint32_t unused_0:24;
        } B;
    } PSTAT;

};

/**************************************************************************/
/*                 Module: PMCDIG_PERIPHERAL_DOMAIN            */
/**************************************************************************/
struct PMCDIG_PERIPHERAL_DOMAIN_tag {
    union {
        vuint32_t R;
        struct {
            vuint32_t MVD0_C_ULP:1;
            vuint32_t MVD0_C_LP:1;
            vuint32_t MVD0_C_MD:1;
            vuint32_t unused_0:14;
            vuint32_t LVD2_C_LP:1;
            vuint32_t LVD2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t LVD3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } EPR_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:17;
            vuint32_t REE2_C_LP:1;
            vuint32_t REE2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t REE3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } REE_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:17;
            vuint32_t RES2_C_LP:1;
            vuint32_t RES2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t RES3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } RES_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:17;
            vuint32_t IEE2_C_LP:1;
            vuint32_t IEE2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t IEE3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } IEE_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:17;
            vuint32_t FEE2_C_LP:1;
            vuint32_t FEE2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t FEE3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } FEE_LV0;

    vuint8_t ADR_reserved0[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t LVD5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } EPR_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t REE5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } REE_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t RES5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } RES_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t IEE5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } IEE_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t FEE5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } FEE_LV1;

    vuint8_t ADR_reserved1[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD10_C_ULP:1;
            vuint32_t unused_1:1;
            vuint32_t UVD10_C_MD:1;
            vuint32_t unused_2:5;
            vuint32_t UVD11_C_MD:1;
            vuint32_t unused_3:7;
        } B;
    } EPR_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:24;
            vuint32_t REE11_C_MD:1;
            vuint32_t unused_1:7;
        } B;
    } REE_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:24;
            vuint32_t RES11_C_MD:1;
            vuint32_t unused_1:7;
        } B;
    } RES_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:24;
            vuint32_t IEE11_C_MD:1;
            vuint32_t unused_1:7;
        } B;
    } IEE_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:24;
            vuint32_t FEE11_C_MD:1;
            vuint32_t unused_1:7;
        } B;
    } FEE_LV2;

    vuint8_t ADR_reserved2[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD12_C:1;
            vuint32_t unused_0:1;
            vuint32_t MVD12_C_MD:1;
            vuint32_t unused_1:9;
            vuint32_t MVD13_S:1;
            vuint32_t unused_2:3;
            vuint32_t LVD14_C:1;
            vuint32_t unused_3:1;
            vuint32_t LVD14_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t LVD15_S:1;
            vuint32_t unused_5:1;
            vuint32_t LVD15_A:1;
            vuint32_t unused_6:1;
        } B;
    } EPR_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t REE14_C:1;
            vuint32_t unused_1:1;
            vuint32_t REE14_C_MD:1;
            vuint32_t unused_2:9;
            vuint32_t REE15_S:1;
            vuint32_t unused_3:1;
            vuint32_t REE15_A:1;
            vuint32_t unused_4:1;
        } B;
    } REE_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t RES14_C:1;
            vuint32_t unused_1:1;
            vuint32_t RES14_C_MD:1;
            vuint32_t unused_2:9;
            vuint32_t RES15_S:1;
            vuint32_t unused_3:1;
            vuint32_t RES15_A:1;
            vuint32_t unused_4:1;
        } B;
    } RES_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t IEE14_C:1;
            vuint32_t unused_1:1;
            vuint32_t IEE14_C_MD:1;
            vuint32_t unused_2:9;
            vuint32_t IEE15_S:1;
            vuint32_t unused_3:1;
            vuint32_t IEE15_A:1;
            vuint32_t unused_4:1;
        } B;
    } IEE_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t FEE14_C:1;
            vuint32_t unused_1:1;
            vuint32_t FEE14_C_MD:1;
            vuint32_t unused_2:9;
            vuint32_t FEE15_S:1;
            vuint32_t unused_3:1;
            vuint32_t FEE15_A:1;
            vuint32_t unused_4:1;
        } B;
    } FEE_HV0;

    vuint8_t ADR_reserved3[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t LVD17_IX0:1;
            vuint32_t LVD17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t LVD18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t LVD19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t LVD19_S0:1;
            vuint32_t LVD19_S1:1;
            vuint32_t LVD19_A:1;
            vuint32_t unused_4:1;
        } B;
    } EPR_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t REE17_IX0:1;
            vuint32_t REE17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t REE18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t REE19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t REE19_S0:1;
            vuint32_t REE19_S1:1;
            vuint32_t REE19_A:1;
            vuint32_t unused_4:1;
        } B;
    } REE_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t RES17_IX0:1;
            vuint32_t RES17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t RES18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t RES19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t RES19_S0:1;
            vuint32_t RES19_S1:1;
            vuint32_t RES19_A:1;
            vuint32_t unused_4:1;
        } B;
    } RES_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t IEE17_IX0:1;
            vuint32_t IEE17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t IEE18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t IEE19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t IEE19_S0:1;
            vuint32_t IEE19_S1:1;
            vuint32_t IEE19_A:1;
            vuint32_t unused_4:1;
        } B;
    } IEE_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t FEE17_IX0:1;
            vuint32_t FEE17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t FEE18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t FEE19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t FEE19_S0:1;
            vuint32_t FEE19_S1:1;
            vuint32_t FEE19_A:1;
            vuint32_t unused_4:1;
        } B;
    } FEE_HV1;

    vuint8_t ADR_reserved4[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t HVD20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t HVD21_IX0:1;
            vuint32_t HVD21_IX1:1;
            vuint32_t unused_2:1;
            vuint32_t UVD22_C:1;
            vuint32_t unused_3:1;
            vuint32_t UVD22_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t UVD23_S:1;
            vuint32_t unused_5:1;
            vuint32_t UVD23_A:1;
            vuint32_t unused_6:1;
        } B;
    } EPR_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t REE20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t REE21_IX0:1;
            vuint32_t REE21_IX1:1;
            vuint32_t unused_2:15;
            vuint32_t REE23_A:1;
            vuint32_t unused_3:1;
        } B;
    } REE_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t RES20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t RES21_IX0:1;
            vuint32_t RES21_IX1:1;
            vuint32_t unused_2:15;
            vuint32_t RES23_A:1;
            vuint32_t unused_3:1;
        } B;
    } RES_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t IEE20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t IEE21_IX0:1;
            vuint32_t IEE21_IX1:1;
            vuint32_t unused_2:15;
            vuint32_t IEE23_A:1;
            vuint32_t unused_3:1;
        } B;
    } IEE_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t FEE20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t FEE21_IX0:1;
            vuint32_t FEE21_IX1:1;
            vuint32_t unused_2:15;
            vuint32_t FEE23_A:1;
            vuint32_t unused_3:1;
        } B;
    } FEE_HV2;

    vuint8_t ADR_reserved5[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD24_C_ULP:1;
            vuint32_t MVD24_C_LP:1;
            vuint32_t unused_0:8;
            vuint32_t MVD25_N:1;
            vuint32_t unused_1:5;
            vuint32_t LVD26_C_ULP:1;
            vuint32_t LVD26_C_LP:1;
            vuint32_t unused_2:7;
            vuint32_t LVD29_P:1;
            vuint32_t LVD29_N:1;
            vuint32_t unused_3:3;
            vuint32_t LVD29_A:1;
            vuint32_t LVD29_Y:1;
        } B;
    } EPR_MV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t REE26_C_ULP:1;
            vuint32_t REE26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t REE29_P:1;
            vuint32_t REE29_N:1;
            vuint32_t unused_2:3;
            vuint32_t REE29_A:1;
            vuint32_t REE29_Y:1;
        } B;
    } REE_MV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t RES26_C_ULP:1;
            vuint32_t RES26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t RES29_P:1;
            vuint32_t RES29_N:1;
            vuint32_t unused_2:3;
            vuint32_t RES29_A:1;
            vuint32_t RES29_Y:1;
        } B;
    } RES_MV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t IEE26_C_ULP:1;
            vuint32_t IEE26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t IEE29_P:1;
            vuint32_t IEE29_N:1;
            vuint32_t unused_2:3;
            vuint32_t IEE29_A:1;
            vuint32_t IEE29_Y:1;
        } B;
    } IEE_MV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t FEE26_C_ULP:1;
            vuint32_t FEE26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t FEE29_P:1;
            vuint32_t FEE29_N:1;
            vuint32_t unused_2:3;
            vuint32_t FEE29_A:1;
            vuint32_t FEE29_Y:1;
        } B;
    } FEE_MV0;

    vuint8_t ADR_reserved6[44];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD34_C_ULP:1;
            vuint32_t UVD34_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t UVD35_P:1;
            vuint32_t UVD35_N:1;
            vuint32_t unused_2:3;
            vuint32_t UVD35_A:1;
            vuint32_t UVD35_Y:1;
        } B;
    } EPR_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:25;
            vuint32_t REE35_P:1;
            vuint32_t unused_1:4;
            vuint32_t REE35_A:1;
            vuint32_t REE35_Y:1;
        } B;
    } REE_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:25;
            vuint32_t RES35_P:1;
            vuint32_t unused_1:4;
            vuint32_t RES35_A:1;
            vuint32_t RES35_Y:1;
        } B;
    } RES_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:25;
            vuint32_t IEE35_P:1;
            vuint32_t unused_1:4;
            vuint32_t IEE35_A:1;
            vuint32_t IEE35_Y:1;
        } B;
    } IEE_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:25;
            vuint32_t FEE35_P:1;
            vuint32_t unused_1:4;
            vuint32_t FEE35_A:1;
            vuint32_t FEE35_Y:1;
        } B;
    } FEE_MV2;

    vuint8_t ADR_reserved7[12];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t LVD37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t HVD39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } EPR_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t REE37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t REE39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } REE_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t RES37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t RES39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } RES_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t IEE37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t IEE39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } IEE_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t FEE37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t FEE39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } FEE_BV;

    vuint8_t ADR_reserved8[204];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:17;
            vuint32_t LVD2_C_LP:1;
            vuint32_t LVD2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t LVD3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } GR_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t LVD5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } GR_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:24;
            vuint32_t UVD11_C_MD:1;
            vuint32_t unused_1:7;
        } B;
    } GR_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t LVD14_C:1;
            vuint32_t unused_1:1;
            vuint32_t LVD14_C_MD:1;
            vuint32_t unused_2:9;
            vuint32_t LVD15_S:1;
            vuint32_t unused_3:1;
            vuint32_t LVD15_A:1;
            vuint32_t unused_4:1;
        } B;
    } GR_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t LVD17_IX0:1;
            vuint32_t LVD17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t LVD18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t LVD19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t LVD19_S0:1;
            vuint32_t LVD19_S1:1;
            vuint32_t LVD19_A:1;
            vuint32_t unused_4:1;
        } B;
    } GR_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t HVD20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t HVD21_IX0:1;
            vuint32_t HVD21_IX1:1;
            vuint32_t unused_2:15;
            vuint32_t UVD23_A:1;
            vuint32_t unused_3:1;
        } B;
    } GR_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t LVD26_C_ULP:1;
            vuint32_t LVD26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t LVD27_P:1;
            vuint32_t LVD27_N:1;
            vuint32_t unused_2:3;
            vuint32_t LVD27_A:1;
            vuint32_t LVD27_Y:1;
        } B;
    } GR_MV0;

    vuint8_t ADR_reserved9[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:25;
            vuint32_t UVD35_P:1;
            vuint32_t unused_1:4;
            vuint32_t UVD35_A:1;
            vuint32_t UVD35_Y:1;
        } B;
    } GR_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t LVD37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t HVD39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } GR_BV;

    vuint8_t ADR_reserved10[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t LVD2_BYTE2:1;
            vuint32_t LVD3_BYTE3:1;
            vuint32_t unused_1:1;
            vuint32_t LVD5_BYTE1:1;
            vuint32_t unused_2:4;
            vuint32_t UVD10_BYTE2:1;
            vuint32_t UVD11_BYTE3:1;
            vuint32_t unused_3:2;
            vuint32_t LVD14_BYTE2:1;
            vuint32_t LVD15_BYTE3:1;
            vuint32_t unused_4:1;
            vuint32_t LVD17_BYTE1:1;
            vuint32_t LVD18_BYTE2:1;
            vuint32_t LVD19_BYTE3:1;
            vuint32_t HVD20_BYTE0:1;
            vuint32_t HVD21_BYTE1:1;
            vuint32_t UVD22_BYTE2:1;
            vuint32_t UVD23_BYTE3:1;
            vuint32_t unused_5:2;
            vuint32_t LVD26_BYTE2:1;
            vuint32_t LVD27_BYTE3:1;
            vuint32_t unused_6:4;
        } B;
    } GR_P0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t UVD34_BYTE2:1;
            vuint32_t UVD35_BYTE3:1;
            vuint32_t unused_1:1;
            vuint32_t LVD37_BYTE1:1;
            vuint32_t unused_2:1;
            vuint32_t HVD39_BYTE3:1;
            vuint32_t unused_3:24;
        } B;
    } GR_P1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t LVD2_BYTE2:1;
            vuint32_t LVD3_BYTE3:1;
            vuint32_t unused_1:1;
            vuint32_t LVD5_BYTE1:1;
            vuint32_t unused_2:5;
            vuint32_t UVD11_BYTE3:1;
            vuint32_t unused_3:2;
            vuint32_t LVD14_BYTE2:1;
            vuint32_t LVD15_BYTE3:1;
            vuint32_t unused_4:1;
            vuint32_t LVD17_BYTE1:1;
            vuint32_t LVD18_BYTE2:1;
            vuint32_t LVD19_BYTE3:1;
            vuint32_t HVD20_BYTE0:1;
            vuint32_t HVD21_BYTE1:1;
            vuint32_t unused_5:1;
            vuint32_t UVD23_BYTE3:1;
            vuint32_t unused_6:2;
            vuint32_t LVD26_BYTE2:1;
            vuint32_t LVD27_BYTE3:1;
            vuint32_t unused_7:4;
        } B;
    } IE_G0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:3;
            vuint32_t UVD35_BYTE3:1;
            vuint32_t unused_1:1;
            vuint32_t LVD37_BYTE1:1;
            vuint32_t unused_2:1;
            vuint32_t HVD39_BYTE3:1;
            vuint32_t unused_3:22;
            vuint32_t IRQ_EN:1;
            vuint32_t IE_EN:1;
        } B;
    } IE_G1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:4;
            vuint32_t REG_MODE:1;
            vuint32_t unused_1:27;
        } B;
    } EXTREG_S;

    union {
        vuint32_t R;
        struct {
            vuint32_t SMPS_ENB:1;
            vuint32_t unused_0:31;
        } B;
    } HPREG_SMPS_SEL_S;

    vuint8_t ADR_reserved11[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t SAR_ADC_CAPLESS:1;
            vuint32_t CLK_CLUSTER_CAPLESS:1;
            vuint32_t unused_0:14;
            vuint32_t SAR_ADC_CAPLESS_TRIM_READY:1;
            vuint32_t CLK_CLUSTER_CAPLESS_TRIM_READY:1;
            vuint32_t unused_1:14;
        } B;
    } CAPLESS_CTRL_AND_STATUS_REG;

    union {
        vuint32_t R;
        struct {
            vuint32_t RCOSC_1M_ENB:1;
            vuint32_t unused_0:31;
        } B;
    } CLK_CTRL_REG;

    union {
        vuint32_t R;
        struct {
            vuint32_t FBB_NWELL_CODE:5;
            vuint32_t unused_0:3;
            vuint32_t FBB_PWELL_OFFSET:5;
            vuint32_t unused_1:19;
        } B;
    } FBB_TEMP_COMPENSATE_VALUE;

    vuint8_t ADR_reserved12[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t SMPS_PD:1;
            vuint32_t ULPREG_PD:1;
            vuint32_t LPREG_PD:1;
            vuint32_t SAR_ADC_CAPLESS_PD:1;
            vuint32_t CLK_CLUSTER_CAPLESS_PD:1;
            vuint32_t PCM_CAPLESS_PD:1;
            vuint32_t unused_0:26;
        } B;
    } SMPS_LDO_CAPLESS_PD_STATUS;

    union {
        vuint32_t R;
        struct {
            vuint32_t ED_RAM_STATUS:1;
            vuint32_t unused_0:31;
        } B;
    } ED_STATUS;

    union {
        vuint32_t R;
        struct {
            vuint32_t VLXFALL_DEADTIME_TRIM:5;
            vuint32_t VLXRISE_DEADTIME_TRIM:5;
            vuint32_t PGATE_SLOPE_TRIM:5;
            vuint32_t ULPREG_TRIM:5;
            vuint32_t LPREG_TRIM:5;
            vuint32_t unused_0:7;
        } B;
    } SMPS_AND_LDO_TRIM_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t PMC_CAPLESS_ULP_FINE_TRIM:5;
            vuint32_t PMC_CAPLESS_ULP_COARSE_TRIM:5;
            vuint32_t PMC_CAPLESS_LP_FINE_TRIM:5;
            vuint32_t PMC_CAPLESS_LP_COARSE_TRIM:4;
            vuint32_t unused_0:13;
        } B;
    } CAPLESS_TRIM_VALUE1;

    union {
        vuint32_t R;
        struct {
            vuint32_t SAR_ADC_CAPLESS_FINE_TRIM:5;
            vuint32_t SAR_ADC_CAPLESS_COARSE_TRIM:4;
            vuint32_t unused_0:1;
            vuint32_t CLK_CLUSTER_CAPLESS_FINE_TRIM:5;
            vuint32_t CLK_CLUSTER_CAPLESS_COARSE_TRIM:4;
            vuint32_t unused_1:1;
            vuint32_t PCM_CAPLESS_FINE_TRIM:5;
            vuint32_t PCM_CAPLESS_COARSE_TRIM:4;
            vuint32_t unused_2:3;
        } B;
    } CAPLESS_TRIM_VALUE2;

    union {
        vuint32_t R;
        struct {
            vuint32_t SGMII_FINE_TRIM:5;
            vuint32_t SGMII_COARSE_TRIM:4;
            vuint32_t unused_0:1;
            vuint32_t SGMII1_FINE_TRIM:5;
            vuint32_t SGMII1_COARSE_TRIM:4;
            vuint32_t unused_1:13;
        } B;
    } CAPLESS_TRIM_VALUE3;

    union {
        vuint32_t R;
        struct {
            vuint32_t VSIO_IM:1;
            vuint32_t unused_0:2;
            vuint32_t VSIO_ADC:1;
            vuint32_t VSIO_IF0:1;
            vuint32_t VSIO_IF1:1;
            vuint32_t VSIO_LP:1;
            vuint32_t unused_1:25;
        } B;
    } VSIO;

    vuint8_t ADR_reserved13[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t ACCURATE_TEMPERATURE:16;
            vuint32_t INACCURATE_TEMPERATURE:16;
        } B;
    } TEMP0_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } TEMP0_COMPARATOR0;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } TEMP0_COMPARATOR1;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } TEMP0_COMPARATOR2;

    vuint8_t ADR_reserved14[16];

    union {
        vuint32_t R;
        struct {
            vuint32_t VOLTAGE_REFERENCE:16;
            vuint32_t unused_0:16;
        } B;
    } VREF0_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } VREF0_COMPARATOR0;

    union {
        vuint32_t R;
        struct {
            vuint32_t VOLTAGE_REFERENCE:16;
            vuint32_t unused_0:16;
        } B;
    } VREF1_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } VREF1_COMPARATOR0;

    union {
        vuint32_t R;
        struct {
            vuint32_t VOLTAGE_REFERENCE:16;
            vuint32_t unused_0:16;
        } B;
    } VREF2_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } VREF2_COMPARATOR0;

    union {
        vuint32_t R;
        struct {
            vuint32_t VOLTAGE_REFERENCE:16;
            vuint32_t unused_0:16;
        } B;
    } VREF3_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t THRESHOLD:16;
            vuint32_t unused_0:11;
            vuint32_t GREATER_THAN_OR_LESS_THAN:1;
            vuint32_t REE:1;
            vuint32_t RES:1;
            vuint32_t IEE:1;
            vuint32_t FEE:1;
        } B;
    } VREF3_COMPARATOR0;

    vuint8_t ADR_reserved15[16];

    union {
        vuint32_t R;
        struct {
            vuint32_t A_IN:10;
            vuint32_t B_IN:9;
            vuint32_t ETA_CAL:3;
            vuint32_t unused_0:10;
        } B;
    } VTSENSE_PARAMETER;

    union {
        vuint32_t R;
        struct {
            vuint32_t DCF_CALIB_VALUE:9;
            vuint32_t unused_0:7;
            vuint32_t CALIB_MODE_CALIB_VALUE:9;
            vuint32_t unused_1:7;
        } B;
    } VTSENSE_CALIB_VALUE;

    union {
        vuint32_t R;
        struct {
            vuint32_t CURRENT_STATE:4;
            vuint32_t NEXT_STATE:4;
            vuint32_t FD_OUT_FLAG:1;
            vuint32_t unused_0:2;
            vuint32_t EPR_TEMP0_COMPARATOR0:1;
            vuint32_t EPR_TEMP0_COMPARATOR1:1;
            vuint32_t EPR_TEMP0_COMPARATOR2:1;
            vuint32_t TEMP0_OVERFLOW:1;
            vuint32_t TEMP0_MODE_ERROR:1;
            vuint32_t EPR_VREF0:1;
            vuint32_t VREF0_OVERFLOW:1;
            vuint32_t VREF0_MODE_ERROR:1;
            vuint32_t VREF0_PROBE_ERROR:1;
            vuint32_t EPR_VREF1:1;
            vuint32_t VREF1_OVERFLOW:1;
            vuint32_t VREF1_MODE_ERROR:1;
            vuint32_t VREF1_PROBE_ERROR:1;
            vuint32_t EPR_VREF2:1;
            vuint32_t VREF2_OVERFLOW:1;
            vuint32_t VREF2_MODE_ERROR:1;
            vuint32_t VREF2_PROBE_ERROR:1;
            vuint32_t EPR_VREF3:1;
            vuint32_t VREF3_OVERFLOW:1;
            vuint32_t VREF3_MODE_ERROR:1;
            vuint32_t VREF3_PROBE_ERROR:1;
        } B;
    } VTSENSE_STATUS;

    union {
        vuint32_t R;
        struct {
            vuint32_t TEMP0_CAL:1;
            vuint32_t unused_0:3;
            vuint32_t VREF0_CAL:1;
            vuint32_t unused_1:3;
            vuint32_t VREF1_CAL:1;
            vuint32_t unused_2:3;
            vuint32_t VREF2_CAL:1;
            vuint32_t unused_3:3;
            vuint32_t VREF3_CAL:1;
            vuint32_t unused_4:3;
            vuint32_t STANDBY:1;
            vuint32_t unused_5:3;
            vuint32_t FAIL_DETECT:1;
            vuint32_t unused_6:7;
        } B;
    } VTSENSE_CONFIG;

    union {
        vuint32_t R;
        struct {
            vuint32_t STANDBY_DURATION:32;
        } B;
    } VTSENSE_STBY_TIME;

    union {
        vuint32_t R;
        struct {
            vuint32_t TEMP0_STATE:4;
            vuint32_t VREF0_STATE:4;
            vuint32_t VREF1_STATE:4;
            vuint32_t VREF2_STATE:4;
            vuint32_t VREF3_STATE:4;
            vuint32_t unused_0:12;
        } B;
    } VTSENSE_STATE_REPEAT_COUNT;

    vuint8_t ADR_reserved16[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t TEMP_0:1;
            vuint32_t TEMP_1:1;
            vuint32_t TEMP_2:1;
            vuint32_t unused_0:29;
        } B;
    } EPR_TEMP;

    union {
        vuint32_t R;
        struct {
            vuint32_t TEMP_0:1;
            vuint32_t TEMP_1:1;
            vuint32_t TEMP_2:1;
            vuint32_t unused_0:29;
        } B;
    } REE_TEMP;

    union {
        vuint32_t R;
        struct {
            vuint32_t TEMP_0:1;
            vuint32_t TEMP_1:1;
            vuint32_t TEMP_2:1;
            vuint32_t unused_0:29;
        } B;
    } RES_TEMP;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t TRIM_ADJ_UNDER:4;
            vuint32_t unused_1:2;
            vuint32_t TRIM_ADJ_OVER:4;
            vuint32_t unused_2:1;
            vuint32_t IEE_TEMP0:1;
            vuint32_t IEE_TEMP1:1;
            vuint32_t IEE_TEMP2:1;
            vuint32_t TRIM_ADJ_OVER1:4;
            vuint32_t PMC_AOUT_EN:1;
            vuint32_t unused_3:11;
        } B;
    } CTL_TEMP;

    union {
        vuint32_t R;
        struct {
            vuint32_t TEMP_0:1;
            vuint32_t TEMP_1:1;
            vuint32_t TEMP_2:1;
            vuint32_t unused_0:29;
        } B;
    } FEE_TEMP;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD0_C_ULP:1;
            vuint32_t MVD0_C_LP:1;
            vuint32_t MVD0_C_MD:1;
            vuint32_t unused_0:14;
            vuint32_t LVD2_C_LP:1;
            vuint32_t LVD2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t LVD3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } BIST_MASK_STATUS_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t LVD5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } BIST_MASK_STATUS_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD10_C_ULP:1;
            vuint32_t unused_1:1;
            vuint32_t UVD10_C_MD:1;
            vuint32_t unused_2:5;
            vuint32_t UVD11_C_MD:1;
            vuint32_t unused_3:7;
        } B;
    } BIST_MASK_STATUS_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD12_C:1;
            vuint32_t unused_0:1;
            vuint32_t MVD12_C_MD:1;
            vuint32_t unused_1:9;
            vuint32_t MVD13_S:1;
            vuint32_t unused_2:3;
            vuint32_t LVD14_C:1;
            vuint32_t unused_3:1;
            vuint32_t LVD14_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t LVD15_S:1;
            vuint32_t unused_5:1;
            vuint32_t LVD15_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_MASK_STATUS_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t LVD17_IX0:1;
            vuint32_t LVD17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t LVD18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t LVD19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t LVD19_S0:1;
            vuint32_t LVD19_S1:1;
            vuint32_t LVD19_A:1;
            vuint32_t unused_4:1;
        } B;
    } BIST_MASK_STATUS_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t HVD20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t HVD21_IX0:1;
            vuint32_t HVD21_IX1:1;
            vuint32_t unused_2:1;
            vuint32_t UVD22_C:1;
            vuint32_t unused_3:1;
            vuint32_t UVD22_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t UVD23_S:1;
            vuint32_t unused_5:1;
            vuint32_t UVD23_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_MASK_STATUS_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t LVD26_C_ULP:1;
            vuint32_t LVD26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t LVD29_P:1;
            vuint32_t LVD29_N:1;
            vuint32_t unused_2:3;
            vuint32_t LVD29_A:1;
            vuint32_t LVD29_Y:1;
        } B;
    } BIST_MASK_STATUS_MV0;

    vuint8_t ADR_reserved17[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD34_C_ULP:1;
            vuint32_t UVD34_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t UVD35_P:1;
            vuint32_t UVD35_N:1;
            vuint32_t unused_2:3;
            vuint32_t UVD35_A:1;
            vuint32_t UVD35_Y:1;
        } B;
    } BIST_MASK_STATUS_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t LVD37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t HVD39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } BIST_MASK_STATUS_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD0_C_ULP:1;
            vuint32_t MVD0_C_LP:1;
            vuint32_t MVD0_C_MD:1;
            vuint32_t unused_0:14;
            vuint32_t LVD2_C_LP:1;
            vuint32_t LVD2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t LVD3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } BIST_RUN_EN_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t LVD5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } BIST_RUN_EN_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD10_C_ULP:1;
            vuint32_t unused_1:1;
            vuint32_t UVD10_C_MD:1;
            vuint32_t unused_2:5;
            vuint32_t UVD11_C_MD:1;
            vuint32_t unused_3:7;
        } B;
    } BIST_RUN_EN_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD12_C:1;
            vuint32_t unused_0:1;
            vuint32_t MVD12_C_MD:1;
            vuint32_t unused_1:9;
            vuint32_t MVD13_S:1;
            vuint32_t unused_2:3;
            vuint32_t LVD14_C:1;
            vuint32_t unused_3:1;
            vuint32_t LVD14_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t LVD15_S:1;
            vuint32_t unused_5:1;
            vuint32_t LVD15_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_RUN_EN_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t LVD17_IX0:1;
            vuint32_t LVD17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t LVD18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t LVD19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t LVD19_S0:1;
            vuint32_t LVD19_S1:1;
            vuint32_t LVD19_A:1;
            vuint32_t unused_4:1;
        } B;
    } BIST_RUN_EN_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t HVD20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t HVD21_IX0:1;
            vuint32_t HVD21_IX1:1;
            vuint32_t unused_2:1;
            vuint32_t UVD22_C:1;
            vuint32_t unused_3:1;
            vuint32_t UVD22_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t UVD23_S:1;
            vuint32_t unused_5:1;
            vuint32_t UVD23_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_RUN_EN_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t LVD26_C_ULP:1;
            vuint32_t LVD26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t LVD29_P:1;
            vuint32_t LVD29_N:1;
            vuint32_t unused_2:3;
            vuint32_t LVD29_A:1;
            vuint32_t LVD29_Y:1;
        } B;
    } BIST_RUN_EN_MV0;

    vuint8_t ADR_reserved18[4];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD34_C_ULP:1;
            vuint32_t UVD34_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t UVD35_P:1;
            vuint32_t UVD35_N:1;
            vuint32_t unused_2:3;
            vuint32_t UVD35_A:1;
            vuint32_t UVD35_Y:1;
        } B;
    } BIST_RUN_EN_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t LVD37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t HVD39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } BIST_RUN_EN_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD0_C_ULP:1;
            vuint32_t MVD0_C_LP:1;
            vuint32_t MVD0_C_MD:1;
            vuint32_t unused_0:14;
            vuint32_t LVD2_C_LP:1;
            vuint32_t LVD2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t LVD3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } BIST_FLAGS_PHASE1_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD0_C_ULP:1;
            vuint32_t MVD0_C_LP:1;
            vuint32_t MVD0_C_MD:1;
            vuint32_t unused_0:14;
            vuint32_t LVD2_C_LP:1;
            vuint32_t LVD2_C_MD:1;
            vuint32_t unused_1:8;
            vuint32_t LVD3_TD:1;
            vuint32_t unused_2:4;
        } B;
    } BIST_FLAGS_PHASE2_LV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t LVD5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } BIST_FLAGS_PHASE1_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:15;
            vuint32_t LVD5_ED:1;
            vuint32_t unused_1:16;
        } B;
    } BIST_FLAGS_PHASE2_LV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD10_C_ULP:1;
            vuint32_t unused_1:1;
            vuint32_t UVD10_C_MD:1;
            vuint32_t unused_2:5;
            vuint32_t UVD11_C_MD:1;
            vuint32_t unused_3:7;
        } B;
    } BIST_FLAGS_PHASE1_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD10_C_ULP:1;
            vuint32_t unused_1:1;
            vuint32_t UVD10_C_MD:1;
            vuint32_t unused_2:5;
            vuint32_t UVD11_C_MD:1;
            vuint32_t unused_3:7;
        } B;
    } BIST_FLAGS_PHASE2_LV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD12_C:1;
            vuint32_t unused_0:1;
            vuint32_t MVD12_C_MD:1;
            vuint32_t unused_1:9;
            vuint32_t MVD13_S:1;
            vuint32_t unused_2:3;
            vuint32_t LVD14_C:1;
            vuint32_t unused_3:1;
            vuint32_t LVD14_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t LVD15_S:1;
            vuint32_t unused_5:1;
            vuint32_t LVD15_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_FLAGS_PHASE1_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t MVD12_C:1;
            vuint32_t unused_0:1;
            vuint32_t MVD12_C_MD:1;
            vuint32_t unused_1:9;
            vuint32_t MVD13_S:1;
            vuint32_t unused_2:3;
            vuint32_t LVD14_C:1;
            vuint32_t unused_3:1;
            vuint32_t LVD14_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t LVD15_S:1;
            vuint32_t unused_5:1;
            vuint32_t LVD15_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_FLAGS_PHASE2_HV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t LVD17_IX0:1;
            vuint32_t LVD17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t LVD18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t LVD19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t LVD19_S0:1;
            vuint32_t LVD19_S1:1;
            vuint32_t LVD19_A:1;
            vuint32_t unused_4:1;
        } B;
    } BIST_FLAGS_PHASE1_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:13;
            vuint32_t LVD17_IX0:1;
            vuint32_t LVD17_IX1:1;
            vuint32_t unused_1:3;
            vuint32_t LVD18_C_MD:1;
            vuint32_t unused_2:7;
            vuint32_t LVD19_NP:1;
            vuint32_t unused_3:1;
            vuint32_t LVD19_S0:1;
            vuint32_t LVD19_S1:1;
            vuint32_t LVD19_A:1;
            vuint32_t unused_4:1;
        } B;
    } BIST_FLAGS_PHASE2_HV1;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t HVD20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t HVD21_IX0:1;
            vuint32_t HVD21_IX1:1;
            vuint32_t unused_2:1;
            vuint32_t UVD22_C:1;
            vuint32_t unused_3:1;
            vuint32_t UVD22_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t UVD23_S:1;
            vuint32_t unused_5:1;
            vuint32_t UVD23_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_FLAGS_PHASE1_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:2;
            vuint32_t HVD20_C_MD:1;
            vuint32_t unused_1:10;
            vuint32_t HVD21_IX0:1;
            vuint32_t HVD21_IX1:1;
            vuint32_t unused_2:1;
            vuint32_t UVD22_C:1;
            vuint32_t unused_3:1;
            vuint32_t UVD22_C_MD:1;
            vuint32_t unused_4:9;
            vuint32_t UVD23_S:1;
            vuint32_t unused_5:1;
            vuint32_t UVD23_A:1;
            vuint32_t unused_6:1;
        } B;
    } BIST_FLAGS_PHASE2_HV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t LVD26_C_ULP:1;
            vuint32_t LVD26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t LVD29_P:1;
            vuint32_t LVD29_N:1;
            vuint32_t unused_2:3;
            vuint32_t LVD29_A:1;
            vuint32_t LVD29_Y:1;
        } B;
    } BIST_FLAGS_PHASE1_MV0;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t LVD26_C_ULP:1;
            vuint32_t LVD26_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t LVD29_P:1;
            vuint32_t LVD29_N:1;
            vuint32_t unused_2:3;
            vuint32_t LVD29_A:1;
            vuint32_t LVD29_Y:1;
        } B;
    } BIST_FLAGS_PHASE2_MV0;

    vuint8_t ADR_reserved19[8];

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD34_C_ULP:1;
            vuint32_t UVD34_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t UVD35_P:1;
            vuint32_t UVD35_N:1;
            vuint32_t unused_2:3;
            vuint32_t UVD35_A:1;
            vuint32_t UVD35_Y:1;
        } B;
    } BIST_FLAGS_PHASE1_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:16;
            vuint32_t UVD34_C_ULP:1;
            vuint32_t UVD34_C_LP:1;
            vuint32_t unused_1:7;
            vuint32_t UVD35_P:1;
            vuint32_t UVD35_N:1;
            vuint32_t unused_2:3;
            vuint32_t UVD35_A:1;
            vuint32_t UVD35_Y:1;
        } B;
    } BIST_FLAGS_PHASE2_MV2;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t LVD37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t HVD39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } BIST_FLAGS_PHASE1_BV;

    union {
        vuint32_t R;
        struct {
            vuint32_t unused_0:8;
            vuint32_t LVD37_FB:1;
            vuint32_t unused_1:19;
            vuint32_t HVD39_FB:1;
            vuint32_t unused_2:3;
        } B;
    } BIST_FLAGS_PHASE2_BV;

    vuint8_t ADR_reserved20[52];

    union {
        vuint32_t R;
        struct {
            vuint32_t START:1;
            vuint32_t unused_0:3;
            vuint32_t STATUS:3;
            vuint32_t unused_1:1;
            vuint32_t NCFEN:1;
            vuint32_t unused_2:3;
            vuint32_t NCFST:1;
            vuint32_t unused_3:3;
            vuint32_t IRQEN:1;
            vuint32_t unused_4:3;
            vuint32_t IRQST:1;
            vuint32_t unused_5:11;
        } B;
    } BIST_CTRL;

    union {
        vuint32_t R;
        struct {
            vuint32_t TIME_0:13;
            vuint32_t unused_0:3;
            vuint32_t TIME_1:13;
            vuint32_t unused_1:3;
        } B;
    } BIST_TIME10;

    union {
        vuint32_t R;
        struct {
            vuint32_t TIME_2:13;
            vuint32_t unused_0:3;
            vuint32_t TIME_3:13;
            vuint32_t unused_1:3;
        } B;
    } BIST_TIME32;

    union {
        vuint32_t R;
        struct {
            vuint32_t TIME_5:13;
            vuint32_t unused_0:3;
            vuint32_t TIME_6:13;
            vuint32_t unused_1:3;
        } B;
    } BIST_TIME65;

    union {
        vuint32_t R;
        struct {
            vuint32_t VD_MON:7;
            vuint32_t unused_0:25;
        } B;
    } BIST_DEBUG;

};

#define MC_ME_DOMAIN_0 (*(volatile struct MC_ME_DOMAIN_tag *) 0x710d0000)
#define MC_ME_DOMAIN_1 (*(volatile struct MC_ME_DOMAIN_tag *) 0x716d0000)
#define MC_ME_DOMAIN_2 (*(volatile struct MC_ME_DOMAIN_tag *) 0x710d4000)
#define MC_ME_PERIPHERAL_DOMAIN (*(volatile struct MC_ME_PERIPHERAL_DOMAIN_tag *) 0x722e8000)
#define MC_PCU_PERIPHERAL_DOMAIN (*(volatile struct MC_PCU_PERIPHERAL_DOMAIN_tag *) 0x722b0000)
#define PMCDIG_PERIPHERAL_DOMAIN (*(volatile struct PMCDIG_PERIPHERAL_DOMAIN_tag *) 0x722b0400)

#endif /* _SR6P7_POWER_MANAGEMENT_H_ */
