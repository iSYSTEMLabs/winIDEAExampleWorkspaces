/*
  This header file contains project/target specific definitions.
 */
/*********CPU info************
		CPU clock: 480 MHz
	Max CPU clock: 480 MHz
	Clock source: PLL1 (from HSI 64MHz)
	GPIO pin: PB0
*****************************/

/*********Board info*********
	Code: ZTE1640
	GPIO pin: LD1
****************************/
#include "stm32h755xx.h" 
//#define USE_ITEST
//#define NOT_USE_FLOAT
//#define USE_SIMPLE_CHAR

#define PWR_SUPPLY_CONFIG_MASK (PWR_CR3_SMPSLEVEL|PWR_CR3_SMPSEXTHP|PWR_CR3_SMPSEN|PWR_CR3_LDOEN|PWR_CR3_BYPASS)
#define PWR_D3_DOMAIN_STOP (0x00000000U)
#define PWR_D3_DOMAIN_RUN  (0x00000800U)
#define PWR_D3CR_VOS1 (PWR_D3CR_VOS_0 | PWR_D3CR_VOS_1)

#define RCC_CLOCKTYPE_SYSCLK           (0x00000001U)
#define RCC_CLOCKTYPE_HCLK             (0x00000002U)
#define RCC_CLOCKTYPE_D1PCLK1          (0x00000004U)
#define RCC_CLOCKTYPE_PCLK1            (0x00000008U)
#define RCC_CLOCKTYPE_PCLK2            (0x00000010U)
#define RCC_CLOCKTYPE_D3PCLK1          (0x00000020U)