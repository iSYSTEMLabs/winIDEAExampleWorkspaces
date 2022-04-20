#ifndef __PsOC4HV_h__
#define __PsOC4HV_h__

void delayFunction(unsigned int);

#define WDT_CTL                 (*(volatile unsigned int*)0x40030100)
#define WDT_LOCK                (*(volatile unsigned int*)0x40030140)

#define CLK_SELECT              (*(volatile unsigned int*)0x40030028)

#define CLK_IMO_SELECT          (*(volatile unsigned int*)0x4003FF08)
#define CLK_IMO_TRIM1           (*(volatile unsigned int*)0x4003FF0C)
#define CLK_IMO_TRIM2           (*(volatile unsigned int*)0x4003FF10)
#define CLK_IMO_TRIM3           (*(volatile unsigned int*)0x4003FF14)

#define SFLASH_IMO_TRIM_LT6     (*(volatile unsigned char*)0x0FFFE206)
#define SFLASH_IMO_TCTRIM_LT6   (*(volatile unsigned char*)0x0FFFE20E)
#define SFLASH_IMO_STEPSIZE_LT6 (*(volatile unsigned char*)0x0FFFE216)

#define GPIO_PRT0_DR            (*(volatile unsigned int*)0x40040000)
#define GPIO_PRT0_PS            (*(volatile unsigned int*)0x40040004)
#define GPIO_PRT0_PC            (*(volatile unsigned int*)0x40040008)

#define GPIO_PRT0_DR_SET        (*(volatile unsigned int*)0x40040040)
#define GPIO_PRT0_DR_CLR        (*(volatile unsigned int*)0x40040044)

#define TCPWM_CTRL              (*(volatile unsigned int*)0x40200000)
#define TCPWM_CMD               (*(volatile unsigned int*)0x40200008)
#define TCPWM_CNT0_CTRL         (*(volatile unsigned int*)0x40200100)
#define TCPWM_CNT0_CC           (*(volatile unsigned int*)0x4020010C)
#define TCPWM_CNT0_CC_BUFF      (*(volatile unsigned int*)0x40200110)
#define TCPWM_CNT0_PERIOD       (*(volatile unsigned int*)0x40200114)
#define TCPWM_CNT0_PERIOD_BUFF  (*(volatile unsigned int*)0x40200118)
#define TCPWM_CNT0_TR_CTRL0     (*(volatile unsigned int*)0x40200120)
#define TCPWM_CNT0_TR_CTRL1     (*(volatile unsigned int*)0x40200124)
#define TCPWM_CNT0_INTR         (*(volatile unsigned int*)0x40200130)
#define TCPWM_CNT0_INTR_MASK    (*(volatile unsigned int*)0x40200138)

#define CM0P_ISER               (*(volatile unsigned int*)0xE000E100)
#define CM0P_ICER               (*(volatile unsigned int*)0xE000E180)
#define CM0P_ISPR               (*(volatile unsigned int*)0xE000E200)
#define CM0P_ICPR               (*(volatile unsigned int*)0xE000E280)

#define PERI_DIV_CMD            (*(volatile unsigned int*)0x40010000)
#define PERI_PCLK_CTL3          (*(volatile unsigned int*)0x4001010C)
#define PERI_DIV16_CTL0         (*(volatile unsigned int*)0x40010300)

#define CPUSS_FLASH_CTL         (*(volatile unsigned int*)0x40100030)


#define CPUSS_FLASH_CTL_3WS         0x00000003

#define CM0P_SYST_CSR_ENABLE        0x00000001
#define CM0P_SYST_CSR_TICKINT       0x00000002
#define CM0P_SYST_CSR_CLK_SOURCE    0x00000004

#define CM0P_ICER_CLRENA_15         0x00008000
#define CM0P_ISER_SETENA_15         0x00008000

#define GPIO_PRT0_PC_DM2_STR_DRIVE  0x00000180     

#define GPIO_PRT0_DR_2              0x00000004 
#define GPIO_PRT0_PS_2              0x00000004
#define GPIO_PRT0_DR_CLR_2          0x00000004
#define GPIO_PRT0_DR_SET_2          0x00000004

#define TCPWM_CTRL_COUNTER0_ENABLE  0x00000001
#define TCPWM_CMD_COUNTER0_START    0x01000000

#define RELOAD_EDGE_RISING          0x00003030
#define RELOAD_SEL_TCPW0_OVERFLOW   0x00000B00

#define CLK_IMO_SELECT_28MHZ        0x00000001
#define CLK_IMO_SELECT_48MHZ        0x00000006

#define CLK_SELECT_HFCLK_DIV_1      0x00000008
#define CLK_SELECT_HFCLK_DIV_0      0x00000004
#define CLK_SELECT_PUMP_SEL_0       0x00000010

#define INTR_MASK__CC_MATCH         0x00000002
#define INTR_MASK__CC_MATCH         0x00000002

#define TCPWM_CNT0_INTR_TC          0x00000001
#define TCPWM_CNT0_INTR_CC_MATCH    0x00000002   

#define RELOAD_1KHZ                 0x5DC0      // 24MHz/24000(0x5DC0) = 1kHz
#define DELAY                       0x3FFFF

#endif