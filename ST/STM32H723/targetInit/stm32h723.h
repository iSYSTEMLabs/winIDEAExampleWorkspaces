#ifndef STM32H723_H
#define STM32H723_H

#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))
#define ITM_BASE_ADDRESS (0xE0000000UL)

#define GPIOB_MODER     *((unsigned long*) 0x58020400)
#define GPIOB_OTYPER    *((unsigned long*) 0x58020404)
#define GPIOB_ODR       *((unsigned long*) 0x58020414)
#define GPIOB_BSSR      *((unsigned long*) 0x58020418)

#define RCC_CR          *((unsigned long*) 0x58024400)
#define RCC_CFGR        *((unsigned long*) 0x58024410)
#define RCC_D1CFGR      *((unsigned long*) 0x58024418)
#define RCC_D2CFGR      *((unsigned long*) 0x5802441C)
#define RCC_D3CFGR      *((unsigned long*) 0x58024420)
#define RCC_PLLCKSELR   *((unsigned long*) 0x58024428)
#define RCC_PLLCFGR     *((unsigned long*) 0x5802442C)
#define RCC_PLL1DIVR    *((unsigned long*) 0x58024430)
#define RCC_D1CFGR      *((unsigned long*) 0x58024418)
#define RCC_D2CFGR      *((unsigned long*) 0x5802441C)

#define RCC_AHB4ENR     *((unsigned long*) 0x580244E0) 
#define RCC_APB1LENR    *((unsigned long*) 0x580244E8)

#define PWR_CSR1        *((unsigned long*) 0x58024804)
#define PWR_CR3         *((unsigned long*) 0x5802480C)
#define PWR_D3CR        *((unsigned long*) 0x58024818)          

#define TIM6_CR1        *((unsigned short*) 0x40001000)
#define TIM6_DIER       *((unsigned short*) 0x4000100C)
#define TIM6_SR         *((unsigned short*) 0x40001010)
#define TIM6_CNT        *((unsigned short*) 0x40001024)
#define TIM6_PSC        *((unsigned short*) 0x40001028)
#define TIM6_ARR        *((unsigned short*) 0x4000102C)

#define ENABLE_INT32_63 *((unsigned long*) 0xE000E104)

#define RCC_CR_HSIRDY             0x00000004
#define RCC_CR_PLL1ON             0x01000000
#define RCC_CR_PLL1RDY            0x02000000

#define RCC_CFGR_SW_BIT0          0x00000001
#define RCC_CFGR_SW_BIT1          0x00000002
#define RCC_CFGR_SW_BIT2          0x00000004

#define RCC_CFGR_SWS_BIT0         0x00000008
#define RCC_CFGR_SWS_BIT1         0x00000010
#define RCC_CFGR_SWS_BIT2         0x00000020

#define RCC_CFGR_TIMPRE           0x00008000

#define RCC_D1CFGR_HPRE           0x0000000F
#define RCC_D1CFGR_HPRE_BIT0      0x00000001
#define RCC_D1CFGR_HPRE_BIT1      0x00000002
#define RCC_D1CFGR_HPRE_BIT2      0x00000004
#define RCC_D1CFGR_HPRE_BIT3      0x00000008

#define RCC_PLLCLKSELR_PLLSRC0    0x00000001  
#define RCC_PLLCLKSELR_PLLSRC1    0x00000002
#define RCC_PLLCLKSELR_DIVM1      0x000003F0

#define RCC_PLLCFGR_PLL1FRACEN    0x00000001
#define RCC_PLLCFGR_PLL1VCOSEL    0x00000002
#define RCC_PLLCFGR_PLL1RGE0      0x00000004
#define RCC_PLLCFGR_PLL1RGE1      0x00000008
#define RCC_PLLCFGR_DIVP1EN       0x00010000
#define RCC_PLLCFGR_DIVQ1EN       0x00020000
#define RCC_PLLCFGR_DIVR1EN       0x00040000

#define RCC_PLL1DIVR_DIVR1        0xEF000000
#define RCC_PLL1DIVR_DIVR1_BIT0   0x01000000
#define RCC_PLL1DIVR_DIVR1_BIT1   0x02000000
#define RCC_PLL1DIVR_DIVR1_BIT2   0x04000000
#define RCC_PLL1DIVR_DIVR1_BIT3   0x08000000
#define RCC_PLL1DIVR_DIVR1_BIT4   0x10000000
#define RCC_PLL1DIVR_DIVR1_BIT5   0x20000000
#define RCC_PLL1DIVR_DIVR1_BIT6   0x40000000

#define RCC_PLL1DIVR_DIVQ1        0x00EF0000
#define RCC_PLL1DIVR_DIVQ1_BIT0   0x00010000
#define RCC_PLL1DIVR_DIVQ1_BIT1   0x00020000
#define RCC_PLL1DIVR_DIVQ1_BIT2   0x00040000
#define RCC_PLL1DIVR_DIVQ1_BIT3   0x00080000
#define RCC_PLL1DIVR_DIVQ1_BIT4   0x00100000
#define RCC_PLL1DIVR_DIVQ1_BIT5   0x00200000
#define RCC_PLL1DIVR_DIVQ1_BIT6   0x00400000

#define RCC_PLL1DIVR_DIVP1        0x0000FE00
#define RCC_PLL1DIVR_DIVP1_BIT0   0x00000200
#define RCC_PLL1DIVR_DIVP1_BIT1   0x00000400
#define RCC_PLL1DIVR_DIVP1_BIT2   0x00000800
#define RCC_PLL1DIVR_DIVP1_BIT3   0x00001000
#define RCC_PLL1DIVR_DIVP1_BIT4   0x00002000
#define RCC_PLL1DIVR_DIVP1_BIT5   0x00004000
#define RCC_PLL1DIVR_DIVP1_BIT6   0x00008000

#define RCC_PLL1DIVR_DIVN1        0x000001FF
#define RCC_PLL1DIVR_DIVN1_BIT0   0x00000001
#define RCC_PLL1DIVR_DIVN1_BIT1   0x00000002
#define RCC_PLL1DIVR_DIVN1_BIT2   0x00000004
#define RCC_PLL1DIVR_DIVN1_BIT3   0x00000008
#define RCC_PLL1DIVR_DIVN1_BIT4   0x00000010
#define RCC_PLL1DIVR_DIVN1_BIT5   0x00000020
#define RCC_PLL1DIVR_DIVN1_BIT6   0x00000040
#define RCC_PLL1DIVR_DIVN1_BIT7   0x00000080
#define RCC_PLL1DIVR_DIVN1_BIT8   0x00000100

#define RCC_PLL1DIVR_DIVR1        0xEF000000

#define RCC_D2CFGR_D2PPRE1        0x00000070
#define RCC_D2CFGR_D2PPRE2        0x00000700

#define RCC_APB1LENR_TIM6EN       0x00000010
#define RCC_AHB4ENR_GPIOBEN       0x00000002

#define RCC_D1CFGR_D1PPRE_0       0x00000010
#define RCC_D1CFGR_D1PPRE_1       0x00000020
#define RCC_D1CFGR_D1PPRE_2       0x00000040

#define RCC_D2CFGR_D2PPRE1_0      0x00000010
#define RCC_D2CFGR_D2PPRE1_1      0x00000020
#define RCC_D2CFGR_D2PPRE1_2      0x00000040

#define RCC_D2CFGR_D2PPRE2_0      0x00000100
#define RCC_D2CFGR_D2PPRE2_1      0x00000200
#define RCC_D2CFGR_D2PPRE2_2      0x00000400

#define RCC_D3CFGR_D3PPRE_0       0x00000010
#define RCC_D3CFGR_D3PPRE_1       0x00000020
#define RCC_D3CFGR_D3PPRE_2       0x00000040

#define TIM6_CR1_CEN              0x0001
#define TIM6_CR1_ARPE             0x0080
#define TIM6_DIER_UIE             0x0001
#define TIM6_SR_UIF               0x0001

#define GPIOB_MODER0_0            0x00000001
#define GPIOB_MODER0_1            0x00000002
#define GPIOB_OTYPER_OT0          0x00000001
#define GPIOB_ODR0                0x00000001
#define GPIOB_BR0                 0x00010000
#define GPIOB_BS0                 0x00000001

#define ENABLE_INT54              0x00400000

#define PWR_CSR1_ACTVOSRDY        0x00002000
#define PWR_D3CR_VOS_1            0x00008000
#define PWR_D3CR_VOS_0            0x00004000
#define PWR_D3CR_VOSRDY           0x00002000

#define PWR_RC3_SCUEN             0x00000004
#define PWR_RC3_LDOEN             0x00000002

#endif //STM32H723_H
