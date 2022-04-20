#ifndef _ATSAMD_H_
#define _ATSAMD_H_

#include "Types.h"


#if defined ( _DEBUG ) || defined ( DEBUG )
  #define ASSERT(expr) { if ( !(expr) ) { __asm__(" bkpt #0"); } }
  #define assert_param(...) ASSERT(__VA_ARGS__)
#else
  #define ASSERT(...) { }
  #define assert_param(...) { }
#endif

/*****************************************************************************
 * WATCHDOG Registers
 *****************************************************************************/
#define WDT_CTRL_REG     *((volatile BYTE *)0x40001000)
#define WDT_CONFIG_REG   *((volatile BYTE *)0x40001001)
#define WDT_EWCTRL_REG   *((volatile BYTE *)0x40001002)
#define WDT_INTFLAG_REG  *((volatile BYTE *)0x40001006)
#define WDT_STATUS_REG   *((volatile BYTE *)0x40001007)
#define WDT_CLEAR_REG    *((volatile BYTE *)0x40001008)

#define WDT_CTRL_ENABLE_MASK      1<<1
#define WDT_CTRL_WEN_MASK         1<<2
#define WDT_CTRL_ALWAYSON_MASK    1<<7
#define WDT_CTRL_DISABLE          0x0
#define WDT_CLEAR_CLEAR           0xA5



/*****************************************************************************
 * PAC0 Registers
 *****************************************************************************/
#define PAC0_BASE_ADDRESS           0x40000000

#define PAC0_WPCLR_REG              *((volatile DWORD *) (PAC0_BASE_ADDRESS + 0x00))
#define PAC0_WPSET_REG              *((volatile DWORD *) (PAC0_BASE_ADDRESS + 0x04))
#define PAC0_PM_MASK                1<<1
#define PAC0_SYSCTRL_MASK           1<<2
#define PAC0_GCLK_MASK              1<<3
#define PAC0_WDT_MASK               1<<4
#define PAC0_RTC_MASK               1<<5
#define PAC0_EIC_MASK               1<<6

/*****************************************************************************
 * PAC1 Registers
 *****************************************************************************/
#define PAC1_BASE_ADDRESS           0x41000000

#define PAC1_WPCLR_REG              *((volatile DWORD *) (PAC1_BASE_ADDRESS + 0x00))
#define PAC1_WPSET_REG              *((volatile DWORD *) (PAC1_BASE_ADDRESS + 0x04))
#define PAC1_DSU_MASK               1<<1
#define PAC1_NVMCTRL_MASK           1<<2
#define PAC1_PORT_MASK              1<<3
#define PAC1_DMAC_MASK              1<<4
#define PAC1_USB_MASK               1<<5
#define PAC1_MTB_MASK               1<<6



/*****************************************************************************
 * DSU Registers  (are write protected!)
 *****************************************************************************/
#define DSU_BASE_ADDRESS            0x41002000

#define DSU_CTRL_REG                *((volatile BYTE *) (DSU_BASE_ADDRESS + 0x00))
#define DSU_CTRL_CE_MASK            1<<4

#define DSU_STATUSA_REG             *((volatile BYTE *) (DSU_BASE_ADDRESS + 0x01))
#define DSU_STATUSA_DONE_MASK       1<<0



/*****************************************************************************
 * NVM Defines
 *****************************************************************************/
#define NVMCTRL_CTRLA_OFFSET        0x00         /**< \brief (NVMCTRL_CTRLA offset) NVM Control A */
#define NVMCTRL_CTRLA_RESETVALUE    0x0000       /**< \brief (NVMCTRL_CTRLA reset_value) NVM Control A */

#define NVMCTRL_CTRLA_CMD_Pos       0            /**< \brief (NVMCTRL_CTRLA) Command */
#define NVMCTRL_CTRLA_CMD_Msk       (0x7Fu << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD(value)    ((NVMCTRL_CTRLA_CMD_Msk & ((value) << NVMCTRL_CTRLA_CMD_Pos)))
#define NVMCTRL_CTRLA_CMD_ER_Val    0x2u   /**< \brief (NVMCTRL_CTRLA) Erase Row */
#define NVMCTRL_CTRLA_CMD_WP_Val    0x4u   /**< \brief (NVMCTRL_CTRLA) Write Page */
#define NVMCTRL_CTRLA_CMD_EAR_Val   0x5u   /**< \brief (NVMCTRL_CTRLA) Erase Auxiliary Row */
#define NVMCTRL_CTRLA_CMD_WAP_Val   0x6u   /**< \brief (NVMCTRL_CTRLA) Write  Auxiliary Row */
#define NVMCTRL_CTRLA_CMD_SF_Val    0xAu   /**< \brief (NVMCTRL_CTRLA) Security Flow Command */
#define NVMCTRL_CTRLA_CMD_WL_Val    0xFu   /**< \brief (NVMCTRL_CTRLA) Write lockbits */
#define NVMCTRL_CTRLA_CMD_LR_Val    0x40u   /**< \brief (NVMCTRL_CTRLA) Lock Region */
#define NVMCTRL_CTRLA_CMD_UR_Val    0x41u   /**< \brief (NVMCTRL_CTRLA) Unlock Region */
#define NVMCTRL_CTRLA_CMD_SPRM_Val  0x42u   /**< \brief (NVMCTRL_CTRLA) Set Power Reduction Mode */
#define NVMCTRL_CTRLA_CMD_CPRM_Val  0x43u   /**< \brief (NVMCTRL_CTRLA) Clear Power Reduction Mode */
#define NVMCTRL_CTRLA_CMD_PBC_Val   0x44u   /**< \brief (NVMCTRL_CTRLA) Page Buffer Clear */
#define NVMCTRL_CTRLA_CMD_SSB_Val   0x45u   /**< \brief (NVMCTRL_CTRLA) Set Security Bit */
#define NVMCTRL_CTRLA_CMD_SMR_Val   0x54u   /**< \brief (NVMCTRL_CTRLA) State Machine Reset */
#define NVMCTRL_CTRLA_CMD_ER        (NVMCTRL_CTRLA_CMD_ER_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_WP        (NVMCTRL_CTRLA_CMD_WP_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_EAR       (NVMCTRL_CTRLA_CMD_EAR_Val     << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_WAP       (NVMCTRL_CTRLA_CMD_WAP_Val     << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SF        (NVMCTRL_CTRLA_CMD_SF_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_WL        (NVMCTRL_CTRLA_CMD_WL_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_LR        (NVMCTRL_CTRLA_CMD_LR_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_UR        (NVMCTRL_CTRLA_CMD_UR_Val      << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SPRM      (NVMCTRL_CTRLA_CMD_SPRM_Val    << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_CPRM      (NVMCTRL_CTRLA_CMD_CPRM_Val    << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_PBC       (NVMCTRL_CTRLA_CMD_PBC_Val     << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SSB       (NVMCTRL_CTRLA_CMD_SSB_Val     << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMD_SMR       (NVMCTRL_CTRLA_CMD_SMR_Val     << NVMCTRL_CTRLA_CMD_Pos)
#define NVMCTRL_CTRLA_CMDEX_Pos     8            /**< \brief (NVMCTRL_CTRLA) Command Execution */
#define NVMCTRL_CTRLA_CMDEX_Msk     (0xFFu << NVMCTRL_CTRLA_CMDEX_Pos)
#define NVMCTRL_CTRLA_CMDEX(value)  ((NVMCTRL_CTRLA_CMDEX_Msk & ((value) << NVMCTRL_CTRLA_CMDEX_Pos)))
#define NVMCTRL_CTRLA_CMDEX_KEY_Val 0xA5u   /**< \brief (NVMCTRL_CTRLA) Execution Key */
#define NVMCTRL_CTRLA_CMDEX_KEY     (NVMCTRL_CTRLA_CMDEX_KEY_Val   << NVMCTRL_CTRLA_CMDEX_Pos)
#define NVMCTRL_CTRLA_MASK          0xFF7Fu      /**< \brief (NVMCTRL_CTRLA) MASK Register */


/* -------- NVMCTRL_PARAM : (NVMCTRL Offset: 0x08) (R/W 32) Parameter -------- */
#define NVMCTRL_PARAM_OFFSET        0x08         /**< \brief (NVMCTRL_PARAM offset) Parameter */
#define NVMCTRL_PARAM_RESETVALUE    0x00000000   /**< \brief (NVMCTRL_PARAM reset_value) Parameter */

#define NVMCTRL_PARAM_NVMP_Pos      0            /**< \brief (NVMCTRL_PARAM) NVM Pages */
#define NVMCTRL_PARAM_NVMP_Msk      (0xFFFFu << NVMCTRL_PARAM_NVMP_Pos)
#define NVMCTRL_PARAM_NVMP(value)   ((NVMCTRL_PARAM_NVMP_Msk & ((value) << NVMCTRL_PARAM_NVMP_Pos)))
#define NVMCTRL_PARAM_PSZ_Pos       16           /**< \brief (NVMCTRL_PARAM) Page Size */
#define NVMCTRL_PARAM_PSZ_Msk       (0x7u << NVMCTRL_PARAM_PSZ_Pos)
#define NVMCTRL_PARAM_PSZ(value)    ((NVMCTRL_PARAM_PSZ_Msk & ((value) << NVMCTRL_PARAM_PSZ_Pos)))
#define NVMCTRL_PARAM_MASK          0x0007FFFFu  /**< \brief (NVMCTRL_PARAM) MASK Register */

#define FLASH_ADDR                  (0x00000000U) /**< FLASH base address */
#define NVM_MEMORY                  ((volatile uint16_t *)FLASH_ADDR)

#define NVM_NUMBER_OF_PAGES         NVMCTRL_PARAM_NWMP_VAL
#define NVM_PAGE_SIZE               ((NVMCTRL_PARAM_PSZ_VAL + 1) << 4)
#define NVM_ROW_SIZE                4*NVM_PAGE_SIZE

#define NVM_AUXILIARY_SPACE_ADDRESS (FLASH_ADDR + 0x00800000)      

/*****************************************************************************
 * NVM Registers
 *****************************************************************************/
#define NVMCTRL_BASE_ADDRESS            0x41004000
#define NVMCTRL_CTRLA_REG               *((volatile WORD *) (NVMCTRL_BASE_ADDRESS + 0x00))
#define NVMCTRL_CTRLB_REG               *((volatile DWORD *)(NVMCTRL_BASE_ADDRESS + 0x04))
#define NVMCTRL_PARAM_REG               *((volatile DWORD *)(NVMCTRL_BASE_ADDRESS + 0x08))
#define NVMCTRL_PARAM_NWMP_VAL          ((NVMCTRL_PARAM_REG & NVMCTRL_PARAM_NVMP_Msk) >> NVMCTRL_PARAM_NVMP_Pos)
#define NVMCTRL_PARAM_PSZ_VAL           ((NVMCTRL_PARAM_REG & NVMCTRL_PARAM_PSZ_Msk) >> NVMCTRL_PARAM_PSZ_Pos)


#define NVMCTRL_INTENCLR_REG            *((volatile BYTE *) (NVMCTRL_BASE_ADDRESS + 0x0C))
#define NVMCTRL_INTENSET_REG            *((volatile BYTE *) (NVMCTRL_BASE_ADDRESS + 0x10))
#define NVMCTRL_INTFLAG_REG             *((volatile BYTE *) (NVMCTRL_BASE_ADDRESS + 0x14))
#define NVMCTRL_STATUS_REG              *((volatile WORD *) (NVMCTRL_BASE_ADDRESS + 0x18))
#define NVMCTRL_ADDR_REG                *((volatile DWORD *)(NVMCTRL_BASE_ADDRESS + 0x1C))
#define NVMCTRL_LOCK_REG                *((volatile WORD *) (NVMCTRL_BASE_ADDRESS + 0x20))
#define NVMCTRL_CTRLB_MANW_MASK         1<<7
#define NVMCTRL_CTRLB_CACHEDIS          1<<18
                                   
#define NVMCTRL_INTFLAG_READY           1<<0
#define NVMCTRL_STATUS_MASK             0x011F
#define NVMCTRL_STATUS_SB               1<<8


/*****************************************************************************
 * FLAGS parameter defines
 *****************************************************************************/
#define ROW_NUM_MASK                0x0000FFFF
#define ROW_SIZE_MASK               0xFFFF0000


/*****************************************************************************
 * PORT registers
 *****************************************************************************/
#define PORT_DIRSET1_ADDRESS        0x41004488
#define PORT_OUT1_ADDRESS           0x41004490
#define PORT_OUTCLR1_ADDRESS        0x41004494
#define PORT_OUTSET1_ADDRESS        0x41004498

#define PORT_DIRSET1_REG            *((volatile DWORD *) (PORT_DIRSET1_ADDRESS))
#define PORT_OUT1_REG               *((volatile DWORD *) (PORT_OUT1_ADDRESS))
#define PORT_OUTCLR1_REG            *((volatile DWORD *) (PORT_OUTCLR1_ADDRESS))
#define PORT_OUTSET1_REG            *((volatile DWORD *) (PORT_OUTSET1_ADDRESS))

#endif