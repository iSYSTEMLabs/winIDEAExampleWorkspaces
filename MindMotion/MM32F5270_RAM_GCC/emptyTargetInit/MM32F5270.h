#include <stdint.h>

#define	SYST_CSR (*(volatile unsigned int *)0xE000E010) //SysTick Control and Status Register
#define SYST_RVR (*(volatile unsigned int *)0xE000E014) //SysTick Reload Value Register

#define VTOR (*(volatile unsigned int *)0xE000ED08) //Vector Table Offset Register

#define STIR (*(volatile unsigned int *)0xE000EF00) //Software Trigger Interrupt Register

#define TIM2_ARR (*(volatile unsigned int *)0x4000002C)
#define TIM2_PSC (*(volatile unsigned int *)0x40000028)

#define TIM2_SR (*(volatile unsigned int *)0x40000010)
#define UIF 0

#define TIM2_CR1 (*(volatile unsigned int *)0x40000000)
#define OPM 3
#define CEN 0

#define TIM2_DIER (*(volatile unsigned int *)0x4000000C)
#define CC1IE 1
#define UIE 0

#define TIM2_CNT (*(volatile unsigned int *)0x40000024)

#define GPIOC_BSRR (*(unsigned int *)(0x40040810))
#define SET2 2
#define RESET2 18
#define SET9 9
#define RESET9 25

#define RCC_AHBENR (*(volatile unsigned int *)0x40021028)
#define GPIOB 1
#define GPIOC 2

#define RCC_APB1ENR (*(volatile unsigned int *)0x40021030)
#define PWRDBG 28
#define TIM2 0

#define GPIOC_CRH (*(volatile unsigned int *)0x40040804)
#define MODE9 4

#define NVIC_ISER0_NVIC_ISER15 (*(volatile unsigned int *)0xE000E100) //Interrupt Set Enable Registers
#define TIM2_IRQ 28

#define NVIC_ICER0_NVIC_ICER15 (*(volatile unsigned int *)0XE000E180) //Interrupt Clear Enable Registers

#define FLASH_ACR (*(volatile unsigned int *)0x40022000)

#define PWR_BASE_ADDR     0x40007000
#define PWR_CR1           (*(volatile unsigned int *)PWR_BASE_ADDR)
#define PWR_CSR           (*(volatile unsigned int *)(PWR_BASE_ADDR + 0x04))
#define PWR_CR2           (*(volatile unsigned int *)(PWR_BASE_ADDR + 0x08))
#define PWR_CR3           (*(volatile unsigned int *)(PWR_BASE_ADDR + 0x0C))
#define PWR_CR4           (*(volatile unsigned int *)(PWR_BASE_ADDR + 0x10))

#define RCC_CR  (*(volatile unsigned int *)0x40021000)

#define RCC_CFGR (*(volatile unsigned int *)0x40021004)

#define RCC_CIR (*(volatile unsigned int *)0x40021008)
#define PLLRDY 25
#define PLLON 24
#define HSIRDY 1
#define HSION 0

#define RCC_PLL1CFGR      (*(volatile unsigned int *)(0x40021048))

#define RCC_CR_PLL2RDY_SHIFT                    (29)
#define RCC_CR_PLL2RDY_MASK                     (0x01U << RCC_CR_PLL2RDY_SHIFT)
#define RCC_CR_PLL2RDY(x)                       (((uint32_t)(((uint32_t)(x)) << RCC_CR_PLL2RDY_SHIFT)) & RCC_CR_PLL2RDY_MASK)

#define RCC_CR_PLL2ON_SHIFT                     (28)
#define RCC_CR_PLL2ON_MASK                      (0x01U << RCC_CR_PLL2ON_SHIFT)
#define RCC_CR_PLL2ON(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CR_PLL2ON_SHIFT)) & RCC_CR_PLL2ON_MASK)

#define RCC_CR_PLL1RDY_SHIFT                    (25)
#define RCC_CR_PLL1RDY_MASK                     (0x01U << RCC_CR_PLL1RDY_SHIFT)
#define RCC_CR_PLL1RDY(x)                       (((uint32_t)(((uint32_t)(x)) << RCC_CR_PLL1RDY_SHIFT)) & RCC_CR_PLL1RDY_MASK)

#define RCC_CR_PLL1ON_SHIFT                     (24)
#define RCC_CR_PLL1ON_MASK                      (0x01U << RCC_CR_PLL1ON_SHIFT)
#define RCC_CR_PLL1ON(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CR_PLL1ON_SHIFT)) & RCC_CR_PLL1ON_MASK)

#define RCC_CR_HSEIB_SHIFT                      (22)
#define RCC_CR_HSEIB_MASK                       (0x3U << RCC_CR_HSEIB_SHIFT)
#define RCC_CR_HSEIB(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEIB_SHIFT)) & RCC_CR_HSEIB_MASK)

#define RCC_CR_HSEAACSEL_SHIFT                  (21)
#define RCC_CR_HSEAACSEL_MASK                   (0x01U << RCC_CR_HSEAACSEL_SHIFT)
#define RCC_CR_HSEAACSEL(x)                     (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEAACSEL_SHIFT)) & RCC_CR_HSEAACSEL_MASK)

#define RCC_CR_CSSON_SHIFT                      (19)
#define RCC_CR_CSSON_MASK                       (0x01U << RCC_CR_CSSON_SHIFT)
#define RCC_CR_CSSON(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CR_CSSON_SHIFT)) & RCC_CR_CSSON_MASK)

#define RCC_CR_HSEBYP_SHIFT                     (18)
#define RCC_CR_HSEBYP_MASK                      (0x01U << RCC_CR_HSEBYP_SHIFT)
#define RCC_CR_HSEBYP(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEBYP_SHIFT)) & RCC_CR_HSEBYP_MASK)

#define RCC_CR_HSERDY_SHIFT                     (17)
#define RCC_CR_HSERDY_MASK                      (0x01U << RCC_CR_HSERDY_SHIFT)
#define RCC_CR_HSERDY(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSERDY_SHIFT)) & RCC_CR_HSERDY_MASK)

#define RCC_CR_HSEON_SHIFT                      (16)
#define RCC_CR_HSEON_MASK                       (0x01U << RCC_CR_HSEON_SHIFT)
#define RCC_CR_HSEON(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEON_SHIFT)) & RCC_CR_HSEON_MASK)

#define RCC_CR_HSIDIV_SHIFT                     (11)
#define RCC_CR_HSIDIV_MASK                      (0x7U << RCC_CR_HSIDIV_SHIFT)
#define RCC_CR_HSIDIV(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSIDIV_SHIFT)) & RCC_CR_HSIDIV_MASK)

#define RCC_CR_HSEDR_SHIFT                      (9)
#define RCC_CR_HSEDR_MASK                       (0x3U << RCC_CR_HSEDR_SHIFT)
#define RCC_CR_HSEDR(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEDR_SHIFT)) & RCC_CR_HSEDR_MASK)

#define RCC_CR_HSEOUTPUTSEL_SHIFT               (8)
#define RCC_CR_HSEOUTPUTSEL_MASK                (0x01U << RCC_CR_HSEOUTPUTSEL_SHIFT)
#define RCC_CR_HSEOUTPUTSEL(x)                  (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEOUTPUTSEL_SHIFT)) & RCC_CR_HSEOUTPUTSEL_MASK)

#define RCC_CR_HSEDEGLITCHSEL_SHIFT             (7)
#define RCC_CR_HSEDEGLITCHSEL_MASK              (0x01U << RCC_CR_HSEDEGLITCHSEL_SHIFT)
#define RCC_CR_HSEDEGLITCHSEL(x)                (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEDEGLITCHSEL_SHIFT)) & RCC_CR_HSEDEGLITCHSEL_MASK)

#define RCC_CR_HSEDEGLITCHBYP_SHIFT             (6)
#define RCC_CR_HSEDEGLITCHBYP_MASK              (0x01U << RCC_CR_HSEDEGLITCHBYP_SHIFT)
#define RCC_CR_HSEDEGLITCHBYP(x)                (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSEDEGLITCHBYP_SHIFT)) & RCC_CR_HSEDEGLITCHBYP_MASK)

#define RCC_CR_HSELPFSEL_SHIFT                  (5)
#define RCC_CR_HSELPFSEL_MASK                   (0x01U << RCC_CR_HSELPFSEL_SHIFT)
#define RCC_CR_HSELPFSEL(x)                     (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSELPFSEL_SHIFT)) & RCC_CR_HSELPFSEL_MASK)

#define RCC_CR_HSELPFBYP_SHIFT                  (4)
#define RCC_CR_HSELPFBYP_MASK                   (0x01U << RCC_CR_HSELPFBYP_SHIFT)
#define RCC_CR_HSELPFBYP(x)                     (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSELPFBYP_SHIFT)) & RCC_CR_HSELPFBYP_MASK)

#define RCC_CR_HSIRDY_SHIFT                     (1)
#define RCC_CR_HSIRDY_MASK                      (0x01U << RCC_CR_HSIRDY_SHIFT)
#define RCC_CR_HSIRDY(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSIRDY_SHIFT)) & RCC_CR_HSIRDY_MASK)

#define RCC_CR_HSION_SHIFT                      (0)
#define RCC_CR_HSION_MASK                       (0x01U << RCC_CR_HSION_SHIFT)
#define RCC_CR_HSION(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CR_HSION_SHIFT)) & RCC_CR_HSION_MASK)

#define RCC_CFGR_MCO_SHIFT                      (24)
#define RCC_CFGR_MCO_MASK                       (0xFU << RCC_CFGR_MCO_SHIFT)
#define RCC_CFGR_MCO(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_MCO_SHIFT)) & RCC_CFGR_MCO_MASK)

#define RCC_CFGR_USBPRE_SHIFT                   (22)
#define RCC_CFGR_USBPRE_MASK                    (0x3U << RCC_CFGR_USBPRE_SHIFT)
#define RCC_CFGR_USBPRE(x)                      (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_USBPRE_SHIFT)) & RCC_CFGR_USBPRE_MASK)

#define RCC_CFGR_USBCLKSEL_SHIFT                (19)
#define RCC_CFGR_USBCLKSEL_MASK                 (0x01U << RCC_CFGR_USBCLKSEL_SHIFT)
#define RCC_CFGR_USBCLKSEL(x)                   (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_USBCLKSEL_SHIFT)) & RCC_CFGR_USBCLKSEL_MASK)

#define RCC_CFGR_ADC2CLKSEL_SHIFT               (17)
#define RCC_CFGR_ADC2CLKSEL_MASK                (0x01U << RCC_CFGR_ADC2CLKSEL_SHIFT)
#define RCC_CFGR_ADC2CLKSEL(x)                  (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_ADC2CLKSEL_SHIFT)) & RCC_CFGR_ADC2CLKSEL_MASK)

#define RCC_CFGR_ADC1CLKSEL_SHIFT               (16)
#define RCC_CFGR_ADC1CLKSEL_MASK                (0x01U << RCC_CFGR_ADC1CLKSEL_SHIFT)
#define RCC_CFGR_ADC1CLKSEL(x)                  (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_ADC1CLKSEL_SHIFT)) & RCC_CFGR_ADC1CLKSEL_MASK)

#define RCC_CFGR_PPRE2_SHIFT                    (11)
#define RCC_CFGR_PPRE2_MASK                     (0x7U << RCC_CFGR_PPRE2_SHIFT)
#define RCC_CFGR_PPRE2(x)                       (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_PPRE2_SHIFT)) & RCC_CFGR_PPRE2_MASK)

#define RCC_CFGR_PPRE1_SHIFT                    (8)
#define RCC_CFGR_PPRE1_MASK                     (0x7U << RCC_CFGR_PPRE1_SHIFT)
#define RCC_CFGR_PPRE1(x)                       (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_PPRE1_SHIFT)) & RCC_CFGR_PPRE1_MASK)

#define RCC_CFGR_HPRE_SHIFT                     (4)
#define RCC_CFGR_HPRE_MASK                      (0xFU << RCC_CFGR_HPRE_SHIFT)
#define RCC_CFGR_HPRE(x)                        (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_HPRE_SHIFT)) & RCC_CFGR_HPRE_MASK)

#define RCC_CFGR_SWS_SHIFT                      (2)
#define RCC_CFGR_SWS_MASK                       (0x3U << RCC_CFGR_SWS_SHIFT)
#define RCC_CFGR_SWS(x)                         (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_SWS_SHIFT)) & RCC_CFGR_SWS_MASK)

#define RCC_CFGR_SW_SHIFT                       (0)
#define RCC_CFGR_SW_MASK                        (0x3U << RCC_CFGR_SW_SHIFT)
#define RCC_CFGR_SW(x)                          (((uint32_t)(((uint32_t)(x)) << RCC_CFGR_SW_SHIFT)) & RCC_CFGR_SW_MASK)

/*******************************************************************************
 * PWR Type
 ******************************************************************************/

/*!
 * @addtogroup PWR_Register_Masks Register Masks
 * @{
 */

/*!
 * @brief PWR_CR1 Register Bit Definition
 */

#define PWR_CR1_VOS_SHIFT                       (14)
#define PWR_CR1_VOS_MASK                        (0x3U << PWR_CR1_VOS_SHIFT)
#define PWR_CR1_VOS(x)                          (((uint32_t)(((uint32_t)(x)) << PWR_CR1_VOS_SHIFT)) & PWR_CR1_VOS_MASK)

#define PWR_CR1_LPR_SHIFT                       (13)
#define PWR_CR1_LPR_MASK                        (0x01U << PWR_CR1_LPR_SHIFT)
#define PWR_CR1_LPR(x)                          (((uint32_t)(((uint32_t)(x)) << PWR_CR1_LPR_SHIFT)) & PWR_CR1_LPR_MASK)

#define PWR_CR1_CSBF_SHIFT                      (3)
#define PWR_CR1_CSBF_MASK                       (0x01U << PWR_CR1_CSBF_SHIFT)
#define PWR_CR1_CSBF(x)                         (((uint32_t)(((uint32_t)(x)) << PWR_CR1_CSBF_SHIFT)) & PWR_CR1_CSBF_MASK)

#define PWR_CR1_PDDS_SHIFT                      (1)
#define PWR_CR1_PDDS_MASK                       (0x01U << PWR_CR1_PDDS_SHIFT)
#define PWR_CR1_PDDS(x)                         (((uint32_t)(((uint32_t)(x)) << PWR_CR1_PDDS_SHIFT)) & PWR_CR1_PDDS_MASK)

#define PWR_CR1_LPDS_SHIFT                      (0)
#define PWR_CR1_LPDS_MASK                       (0x01U << PWR_CR1_LPDS_SHIFT)
#define PWR_CR1_LPDS(x)                         (((uint32_t)(((uint32_t)(x)) << PWR_CR1_LPDS_SHIFT)) & PWR_CR1_LPDS_MASK)

/*!
 * @brief PWR_CSR Register Bit Definition
 */

#define PWR_CSR_VOSRDY_SHIFT                    (14)
#define PWR_CSR_VOSRDY_MASK                     (0x01U << PWR_CSR_VOSRDY_SHIFT)
#define PWR_CSR_VOSRDY(x)                       (((uint32_t)(((uint32_t)(x)) << PWR_CSR_VOSRDY_SHIFT)) & PWR_CSR_VOSRDY_MASK)

#define PWR_CSR_SBF_SHIFT                       (1)
#define PWR_CSR_SBF_MASK                        (0x01U << PWR_CSR_SBF_SHIFT)
#define PWR_CSR_SBF(x)                          (((uint32_t)(((uint32_t)(x)) << PWR_CSR_SBF_SHIFT)) & PWR_CSR_SBF_MASK)

/*!
 * @brief PWR_CR2 Register Bit Definition
 */

#define PWR_CR2_EWUP_SHIFT                      (0)
#define PWR_CR2_EWUP_MASK                       (0x3FU << PWR_CR2_EWUP_SHIFT)
#define PWR_CR2_EWUP(x)                         (((uint32_t)(((uint32_t)(x)) << PWR_CR2_EWUP_SHIFT)) & PWR_CR2_EWUP_MASK)

/*!
 * @brief PWR_CR3 Register Bit Definition
 */

#define PWR_CR3_WP_SHIFT                        (0)
#define PWR_CR3_WP_MASK                         (0x3FU << PWR_CR3_WP_SHIFT)
#define PWR_CR3_WP(x)                           (((uint32_t)(((uint32_t)(x)) << PWR_CR3_WP_SHIFT)) & PWR_CR3_WP_MASK)

/*!
 * @brief PWR_CR4 Register Bit Definition
 */

#define PWR_CR4_FILTCNT0_SHIFT                  (8)
#define PWR_CR4_FILTCNT0_MASK                   (0xFFU << PWR_CR4_FILTCNT0_SHIFT)
#define PWR_CR4_FILTCNT0(x)                     (((uint32_t)(((uint32_t)(x)) << PWR_CR4_FILTCNT0_SHIFT)) & PWR_CR4_FILTCNT0_MASK)

#define PWR_CR4_FILTF0_SHIFT                    (4)
#define PWR_CR4_FILTF0_MASK                     (0x01U << PWR_CR4_FILTF0_SHIFT)
#define PWR_CR4_FILTF0(x)                       (((uint32_t)(((uint32_t)(x)) << PWR_CR4_FILTF0_SHIFT)) & PWR_CR4_FILTF0_MASK)

#define PWR_CR4_FILTE0_SHIFT                    (2)
#define PWR_CR4_FILTE0_MASK                     (0x3U << PWR_CR4_FILTE0_SHIFT)
#define PWR_CR4_FILTE0(x)                       (((uint32_t)(((uint32_t)(x)) << PWR_CR4_FILTE0_SHIFT)) & PWR_CR4_FILTE0_MASK)

#define PWR_CR4_FILTSEL0_SHIFT                  (0)
#define PWR_CR4_FILTSEL0_MASK                   (0x3U << PWR_CR4_FILTSEL0_SHIFT)
#define PWR_CR4_FILTSEL0(x)                     (((uint32_t)(((uint32_t)(x)) << PWR_CR4_FILTSEL0_SHIFT)) & PWR_CR4_FILTSEL0_MASK)

/*!
 * @brief PWR_CR5 Register Bit Definition
 */

#define PWR_CR5_FILTCNT1_SHIFT                  (8)
#define PWR_CR5_FILTCNT1_MASK                   (0xFFU << PWR_CR5_FILTCNT1_SHIFT)
#define PWR_CR5_FILTCNT1(x)                     (((uint32_t)(((uint32_t)(x)) << PWR_CR5_FILTCNT1_SHIFT)) & PWR_CR5_FILTCNT1_MASK)

#define PWR_CR5_FILTF1_SHIFT                    (4)
#define PWR_CR5_FILTF1_MASK                     (0x01U << PWR_CR5_FILTF1_SHIFT)
#define PWR_CR5_FILTF1(x)                       (((uint32_t)(((uint32_t)(x)) << PWR_CR5_FILTF1_SHIFT)) & PWR_CR5_FILTF1_MASK)

#define PWR_CR5_FILTE1_SHIFT                    (2)
#define PWR_CR5_FILTE1_MASK                     (0x3U << PWR_CR5_FILTE1_SHIFT)
#define PWR_CR5_FILTE1(x)                       (((uint32_t)(((uint32_t)(x)) << PWR_CR5_FILTE1_SHIFT)) & PWR_CR5_FILTE1_MASK)

#define PWR_CR5_FILTSEL1_SHIFT                  (0)
#define PWR_CR5_FILTSEL1_MASK                   (0x3U << PWR_CR5_FILTSEL1_SHIFT)
#define PWR_CR5_FILTSEL1(x)                     (((uint32_t)(((uint32_t)(x)) << PWR_CR5_FILTSEL1_SHIFT)) & PWR_CR5_FILTSEL1_MASK)

/*!
 * @brief PWR_CR6 Register Bit Definition
 */

#define PWR_CR6_STDBYFSWK_SHIFT                 (0)
#define PWR_CR6_STDBYFSWK_MASK                  (0x7U << PWR_CR6_STDBYFSWK_SHIFT)
#define PWR_CR6_STDBYFSWK(x)                    (((uint32_t)(((uint32_t)(x)) << PWR_CR6_STDBYFSWK_SHIFT)) & PWR_CR6_STDBYFSWK_MASK)

/*!
 * @brief PWR_SR Register Bit Definition
 */

#define PWR_SR_WUF_SHIFT                        (0)
#define PWR_SR_WUF_MASK                         (0x3FU << PWR_SR_WUF_SHIFT)
#define PWR_SR_WUF(x)                           (((uint32_t)(((uint32_t)(x)) << PWR_SR_WUF_SHIFT)) & PWR_SR_WUF_MASK)

/*!
 * @brief PWR_SCR Register Bit Definition
 */

#define PWR_SCR_CWUF_SHIFT                      (0)
#define PWR_SCR_CWUF_MASK                       (0x3FU << PWR_SCR_CWUF_SHIFT)
#define PWR_SCR_CWUF(x)                         (((uint32_t)(((uint32_t)(x)) << PWR_SCR_CWUF_SHIFT)) & PWR_SCR_CWUF_MASK)

/*!
 * @brief PWR_CFGR Register Bit Definition
 */

#define PWR_CFGR_LSICAL_SHIFT                   (5)
#define PWR_CFGR_LSICAL_MASK                    (0x1FU << PWR_CFGR_LSICAL_SHIFT)
#define PWR_CFGR_LSICAL(x)                      (((uint32_t)(((uint32_t)(x)) << PWR_CFGR_LSICAL_SHIFT)) & PWR_CFGR_LSICAL_MASK)

#define PWR_CFGR_LSICALSEL_SHIFT                (0)
#define PWR_CFGR_LSICALSEL_MASK                 (0x1FU << PWR_CFGR_LSICALSEL_SHIFT)
#define PWR_CFGR_LSICALSEL(x)                   (((uint32_t)(((uint32_t)(x)) << PWR_CFGR_LSICALSEL_SHIFT)) & PWR_CFGR_LSICALSEL_MASK)


/*!
 * @brief RCC_PLL1CFGR Register Bit Definition
 */

#define RCC_PLL1CFGR_PLL1MUL_SHIFT              (16)
#define RCC_PLL1CFGR_PLL1MUL_MASK               (0x7FU << RCC_PLL1CFGR_PLL1MUL_SHIFT)
#define RCC_PLL1CFGR_PLL1MUL(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL1CFGR_PLL1MUL_SHIFT)) & RCC_PLL1CFGR_PLL1MUL_MASK)

#define RCC_PLL1CFGR_PLL1DIV_SHIFT              (8)
#define RCC_PLL1CFGR_PLL1DIV_MASK               (0x7U << RCC_PLL1CFGR_PLL1DIV_SHIFT)
#define RCC_PLL1CFGR_PLL1DIV(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL1CFGR_PLL1DIV_SHIFT)) & RCC_PLL1CFGR_PLL1DIV_MASK)

#define RCC_PLL1CFGR_PLL1LDS_SHIFT              (4)
#define RCC_PLL1CFGR_PLL1LDS_MASK               (0x7U << RCC_PLL1CFGR_PLL1LDS_SHIFT)
#define RCC_PLL1CFGR_PLL1LDS(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL1CFGR_PLL1LDS_SHIFT)) & RCC_PLL1CFGR_PLL1LDS_MASK)

#define RCC_PLL1CFGR_PLL1ICTRL_SHIFT            (2)
#define RCC_PLL1CFGR_PLL1ICTRL_MASK             (0x3U << RCC_PLL1CFGR_PLL1ICTRL_SHIFT)
#define RCC_PLL1CFGR_PLL1ICTRL(x)               (((uint32_t)(((uint32_t)(x)) << RCC_PLL1CFGR_PLL1ICTRL_SHIFT)) & RCC_PLL1CFGR_PLL1ICTRL_MASK)

#define RCC_PLL1CFGR_PLL1XTPRE_SHIFT            (1)
#define RCC_PLL1CFGR_PLL1XTPRE_MASK             (0x01U << RCC_PLL1CFGR_PLL1XTPRE_SHIFT)
#define RCC_PLL1CFGR_PLL1XTPRE(x)               (((uint32_t)(((uint32_t)(x)) << RCC_PLL1CFGR_PLL1XTPRE_SHIFT)) & RCC_PLL1CFGR_PLL1XTPRE_MASK)

#define RCC_PLL1CFGR_PLL1SRC_SHIFT              (0)
#define RCC_PLL1CFGR_PLL1SRC_MASK               (0x01U << RCC_PLL1CFGR_PLL1SRC_SHIFT)
#define RCC_PLL1CFGR_PLL1SRC(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL1CFGR_PLL1SRC_SHIFT)) & RCC_PLL1CFGR_PLL1SRC_MASK)

/*!
 * @brief RCC_PLL2CFGR Register Bit Definition
 */

#define RCC_PLL2CFGR_PLL2PDIV_SHIFT             (24)
#define RCC_PLL2CFGR_PLL2PDIV_MASK              (0x7U << RCC_PLL2CFGR_PLL2PDIV_SHIFT)
#define RCC_PLL2CFGR_PLL2PDIV(x)                (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2PDIV_SHIFT)) & RCC_PLL2CFGR_PLL2PDIV_MASK)

#define RCC_PLL2CFGR_PLL2MUL_SHIFT              (16)
#define RCC_PLL2CFGR_PLL2MUL_MASK               (0xFFU << RCC_PLL2CFGR_PLL2MUL_SHIFT)
#define RCC_PLL2CFGR_PLL2MUL(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2MUL_SHIFT)) & RCC_PLL2CFGR_PLL2MUL_MASK)

#define RCC_PLL2CFGR_PLL2DIV_SHIFT              (8)
#define RCC_PLL2CFGR_PLL2DIV_MASK               (0x7U << RCC_PLL2CFGR_PLL2DIV_SHIFT)
#define RCC_PLL2CFGR_PLL2DIV(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2DIV_SHIFT)) & RCC_PLL2CFGR_PLL2DIV_MASK)

#define RCC_PLL2CFGR_PLL2LDS_SHIFT              (4)
#define RCC_PLL2CFGR_PLL2LDS_MASK               (0x7U << RCC_PLL2CFGR_PLL2LDS_SHIFT)
#define RCC_PLL2CFGR_PLL2LDS(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2LDS_SHIFT)) & RCC_PLL2CFGR_PLL2LDS_MASK)

#define RCC_PLL2CFGR_PLL2ICTRL_SHIFT            (2)
#define RCC_PLL2CFGR_PLL2ICTRL_MASK             (0x3U << RCC_PLL2CFGR_PLL2ICTRL_SHIFT)
#define RCC_PLL2CFGR_PLL2ICTRL(x)               (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2ICTRL_SHIFT)) & RCC_PLL2CFGR_PLL2ICTRL_MASK)

#define RCC_PLL2CFGR_PLL2XTPRE_SHIFT            (1)
#define RCC_PLL2CFGR_PLL2XTPRE_MASK             (0x01U << RCC_PLL2CFGR_PLL2XTPRE_SHIFT)
#define RCC_PLL2CFGR_PLL2XTPRE(x)               (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2XTPRE_SHIFT)) & RCC_PLL2CFGR_PLL2XTPRE_MASK)

#define RCC_PLL2CFGR_PLL2SRC_SHIFT              (0)
#define RCC_PLL2CFGR_PLL2SRC_MASK               (0x01U << RCC_PLL2CFGR_PLL2SRC_SHIFT)
#define RCC_PLL2CFGR_PLL2SRC(x)                 (((uint32_t)(((uint32_t)(x)) << RCC_PLL2CFGR_PLL2SRC_SHIFT)) & RCC_PLL2CFGR_PLL2SRC_MASK)


/*!
 * @brief FLASH_ACR Register Bit Definition
 */

#define FLASH_ACR_PRFTBS_SHIFT                  (5)
#define FLASH_ACR_PRFTBS_MASK                   (0x01U << FLASH_ACR_PRFTBS_SHIFT)
#define FLASH_ACR_PRFTBS(x)                     (((uint32_t)(((uint32_t)(x)) << FLASH_ACR_PRFTBS_SHIFT)) & FLASH_ACR_PRFTBS_MASK)

#define FLASH_ACR_PRFTBE_SHIFT                  (4)
#define FLASH_ACR_PRFTBE_MASK                   (0x01U << FLASH_ACR_PRFTBE_SHIFT)
#define FLASH_ACR_PRFTBE(x)                     (((uint32_t)(((uint32_t)(x)) << FLASH_ACR_PRFTBE_SHIFT)) & FLASH_ACR_PRFTBE_MASK)

#define FLASH_ACR_LATENCY_SHIFT                 (0)
#define FLASH_ACR_LATENCY_MASK                  (0x7U << FLASH_ACR_LATENCY_SHIFT)
#define FLASH_ACR_LATENCY(x)                    (((uint32_t)(((uint32_t)(x)) << FLASH_ACR_LATENCY_SHIFT)) & FLASH_ACR_LATENCY_MASK)

/*!
 * @brief FLASH_KEYR Register Bit Definition
 */

#define FLASH_KEYR_FKEYR_SHIFT                  (0)
#define FLASH_KEYR_FKEYR_MASK                   (0xFFFFFFFFU << FLASH_KEYR_FKEYR_SHIFT)
#define FLASH_KEYR_FKEYR(x)                     (((uint32_t)(((uint32_t)(x)) << FLASH_KEYR_FKEYR_SHIFT)) & FLASH_KEYR_FKEYR_MASK)

/*!
 * @brief FLASH_OPTKEYR Register Bit Definition
 */

#define FLASH_OPTKEYR_OPTKEYR_SHIFT             (0)
#define FLASH_OPTKEYR_OPTKEYR_MASK              (0xFFFFFFFFU << FLASH_OPTKEYR_OPTKEYR_SHIFT)
#define FLASH_OPTKEYR_OPTKEYR(x)                (((uint32_t)(((uint32_t)(x)) << FLASH_OPTKEYR_OPTKEYR_SHIFT)) & FLASH_OPTKEYR_OPTKEYR_MASK)

/*!
 * @brief FLASH_SR Register Bit Definition
 */

#define FLASH_SR_EOP_SHIFT                      (5)
#define FLASH_SR_EOP_MASK                       (0x01U << FLASH_SR_EOP_SHIFT)
#define FLASH_SR_EOP(x)                         (((uint32_t)(((uint32_t)(x)) << FLASH_SR_EOP_SHIFT)) & FLASH_SR_EOP_MASK)

#define FLASH_SR_WRPRTERR_SHIFT                 (4)
#define FLASH_SR_WRPRTERR_MASK                  (0x01U << FLASH_SR_WRPRTERR_SHIFT)
#define FLASH_SR_WRPRTERR(x)                    (((uint32_t)(((uint32_t)(x)) << FLASH_SR_WRPRTERR_SHIFT)) & FLASH_SR_WRPRTERR_MASK)

#define FLASH_SR_PGERR_SHIFT                    (2)
#define FLASH_SR_PGERR_MASK                     (0x01U << FLASH_SR_PGERR_SHIFT)
#define FLASH_SR_PGERR(x)                       (((uint32_t)(((uint32_t)(x)) << FLASH_SR_PGERR_SHIFT)) & FLASH_SR_PGERR_MASK)

#define FLASH_SR_BSY_SHIFT                      (0)
#define FLASH_SR_BSY_MASK                       (0x01U << FLASH_SR_BSY_SHIFT)
#define FLASH_SR_BSY(x)                         (((uint32_t)(((uint32_t)(x)) << FLASH_SR_BSY_SHIFT)) & FLASH_SR_BSY_MASK)

/*!
 * @brief FLASH_CR Register Bit Definition
 */

#define FLASH_CR_OPTWRE_SHIFT                   (9)
#define FLASH_CR_OPTWRE_MASK                    (0x01U << FLASH_CR_OPTWRE_SHIFT)
#define FLASH_CR_OPTWRE(x)                      (((uint32_t)(((uint32_t)(x)) << FLASH_CR_OPTWRE_SHIFT)) & FLASH_CR_OPTWRE_MASK)

#define FLASH_CR_LOCK_SHIFT                     (7)
#define FLASH_CR_LOCK_MASK                      (0x01U << FLASH_CR_LOCK_SHIFT)
#define FLASH_CR_LOCK(x)                        (((uint32_t)(((uint32_t)(x)) << FLASH_CR_LOCK_SHIFT)) & FLASH_CR_LOCK_MASK)

#define FLASH_CR_STRT_SHIFT                     (6)
#define FLASH_CR_STRT_MASK                      (0x01U << FLASH_CR_STRT_SHIFT)
#define FLASH_CR_STRT(x)                        (((uint32_t)(((uint32_t)(x)) << FLASH_CR_STRT_SHIFT)) & FLASH_CR_STRT_MASK)

#define FLASH_CR_OPTER_SHIFT                    (5)
#define FLASH_CR_OPTER_MASK                     (0x01U << FLASH_CR_OPTER_SHIFT)
#define FLASH_CR_OPTER(x)                       (((uint32_t)(((uint32_t)(x)) << FLASH_CR_OPTER_SHIFT)) & FLASH_CR_OPTER_MASK)

#define FLASH_CR_OPTPG_SHIFT                    (4)
#define FLASH_CR_OPTPG_MASK                     (0x01U << FLASH_CR_OPTPG_SHIFT)
#define FLASH_CR_OPTPG(x)                       (((uint32_t)(((uint32_t)(x)) << FLASH_CR_OPTPG_SHIFT)) & FLASH_CR_OPTPG_MASK)

#define FLASH_CR_MER_SHIFT                      (2)
#define FLASH_CR_MER_MASK                       (0x01U << FLASH_CR_MER_SHIFT)
#define FLASH_CR_MER(x)                         (((uint32_t)(((uint32_t)(x)) << FLASH_CR_MER_SHIFT)) & FLASH_CR_MER_MASK)

#define FLASH_CR_PER_SHIFT                      (1)
#define FLASH_CR_PER_MASK                       (0x01U << FLASH_CR_PER_SHIFT)
#define FLASH_CR_PER(x)                         (((uint32_t)(((uint32_t)(x)) << FLASH_CR_PER_SHIFT)) & FLASH_CR_PER_MASK)

#define FLASH_CR_PG_SHIFT                       (0)
#define FLASH_CR_PG_MASK                        (0x01U << FLASH_CR_PG_SHIFT)
#define FLASH_CR_PG(x)                          (((uint32_t)(((uint32_t)(x)) << FLASH_CR_PG_SHIFT)) & FLASH_CR_PG_MASK)

/*!
 * @brief FLASH_AR Register Bit Definition
 */

#define FLASH_AR_FAR_SHIFT                      (0)
#define FLASH_AR_FAR_MASK                       (0xFFFFFFFFU << FLASH_AR_FAR_SHIFT)
#define FLASH_AR_FAR(x)                         (((uint32_t)(((uint32_t)(x)) << FLASH_AR_FAR_SHIFT)) & FLASH_AR_FAR_MASK)

/*!
 * @brief FLASH_OBR Register Bit Definition
 */

#define FLASH_OBR_DATA1_SHIFT                   (18)
#define FLASH_OBR_DATA1_MASK                    (0xFFU << FLASH_OBR_DATA1_SHIFT)
#define FLASH_OBR_DATA1(x)                      (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_DATA1_SHIFT)) & FLASH_OBR_DATA1_MASK)

#define FLASH_OBR_DATA0_SHIFT                   (10)
#define FLASH_OBR_DATA0_MASK                    (0xFFU << FLASH_OBR_DATA0_SHIFT)
#define FLASH_OBR_DATA0(x)                      (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_DATA0_SHIFT)) & FLASH_OBR_DATA0_MASK)

#define FLASH_OBR_NRSTSTDBY_SHIFT               (4)
#define FLASH_OBR_NRSTSTDBY_MASK                (0x01U << FLASH_OBR_NRSTSTDBY_SHIFT)
#define FLASH_OBR_NRSTSTDBY(x)                  (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_NRSTSTDBY_SHIFT)) & FLASH_OBR_NRSTSTDBY_MASK)

#define FLASH_OBR_NRSTSTOP_SHIFT                (3)
#define FLASH_OBR_NRSTSTOP_MASK                 (0x01U << FLASH_OBR_NRSTSTOP_SHIFT)
#define FLASH_OBR_NRSTSTOP(x)                   (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_NRSTSTOP_SHIFT)) & FLASH_OBR_NRSTSTOP_MASK)

#define FLASH_OBR_WDGSW_SHIFT                   (2)
#define FLASH_OBR_WDGSW_MASK                    (0x01U << FLASH_OBR_WDGSW_SHIFT)
#define FLASH_OBR_WDGSW(x)                      (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_WDGSW_SHIFT)) & FLASH_OBR_WDGSW_MASK)

#define FLASH_OBR_RDPRT_SHIFT                   (1)
#define FLASH_OBR_RDPRT_MASK                    (0x01U << FLASH_OBR_RDPRT_SHIFT)
#define FLASH_OBR_RDPRT(x)                      (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_RDPRT_SHIFT)) & FLASH_OBR_RDPRT_MASK)

#define FLASH_OBR_OPTERR_SHIFT                  (0)
#define FLASH_OBR_OPTERR_MASK                   (0x01U << FLASH_OBR_OPTERR_SHIFT)
#define FLASH_OBR_OPTERR(x)                     (((uint32_t)(((uint32_t)(x)) << FLASH_OBR_OPTERR_SHIFT)) & FLASH_OBR_OPTERR_MASK)

/*!
 * @brief FLASH_WRPR Register Bit Definition
 */

#define FLASH_WRPR_WRP_SHIFT                    (0)
#define FLASH_WRPR_WRP_MASK                     (0xFFFFFFFFU << FLASH_WRPR_WRP_SHIFT)
#define FLASH_WRPR_WRP(x)                       (((uint32_t)(((uint32_t)(x)) << FLASH_WRPR_WRP_SHIFT)) & FLASH_WRPR_WRP_MASK)

#define RCC_AHBENR_GPIOBEN                      (1 << 1)

#define GPIO_B_BASE_ADDR                        0x40040400
#define GPIO_E_BASE_ADDR                        0x40041000

#define GPIOB_CRL                               (*(volatile unsigned int *)(GPIO_B_BASE_ADDR))
#define GPIOB_AFRL                              (*(volatile unsigned int *)(GPIO_B_BASE_ADDR + 0x20))

#define RCC_BASE_ADDR                           0x40021000
#define RCC_AHBENR_REG                          (*(volatile unsigned int *)(RCC_BASE_ADDR + 0x28))
#define GPIOx_MODE_P3_HIGHSPEED                 (0x3 << 12)
#define GPIOx_CNF_P3_ALTERNATE_PUSHPULL         (0x2 << 14)
#define GPIOx_AF_P3_AF0                         (0xF << 12)
#define ASYNCHRONOUS_TRACE_MODE                 (0x0 << 6)