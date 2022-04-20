#ifndef TRAVEO2_M0_H
#define TRAVEO2_M0_H


#define ITM_BASE_ADDRESS 0xE0000000UL
#define ITM_LOCK_ACCESS_REGISTER (ITM_BASE_ADDRESS + 0x0FB0UL)
#define ITM_TRACE_ENABLE_REGISTER (ITM_BASE_ADDRESS + 0x0E00UL)
#define ITM_TRACE_PRIVILEGE_REGISTER (ITM_BASE_ADDRESS + 0x0E40UL)
#define ITM_TRACE_CONTROL_REGISTER (ITM_BASE_ADDRESS + 0x0E80UL)



#define PERI_CLOCK_CTL_41 (*(volatile unsigned int*)0x40000CA4)
#define PERI_CLOCK_CTL_47 (*(volatile unsigned int*)0x40000CBC)
#define PERI_CLOCK_CTL_31 (*(volatile unsigned int*)0x40000C7C)
#define PERI_CLOCK_CTL_106 (*(volatile unsigned int*)0x40000DA8)
#define PERI_DIV_16_CTL0 (*(volatile unsigned int*)0x40001400)
#define PERI_DIV_CMD (*(volatile unsigned int*)0x40000400)

// Timer clock
#define CLK_TIMER_CTL (*(volatile unsigned int*)0x40261504)
#define CLK_TIMER_CTL_ENABLE 31

//Timer
#define TCPWM0_GRP0_CNT0_CTRL        (*(volatile unsigned int*)0x40380000)
#define TCPWM0_GRP0_CNT0_COUNTER     (*(volatile unsigned int*)0x40380008)
#define TCPWM0_GRP0_CNT0_PERIOD      (*(volatile unsigned int*)0x40380020)
#define TCPWM0_GRP0_CNT0_CC0         (*(volatile unsigned int*)0x40380010)
#define TCPWM0_GRP0_CNT0_CC0_BUFF    (*(volatile unsigned int*)0x40380014)
#define TCPWM0_GRP0_CNT0_DT          (*(volatile unsigned int*)0x40380030)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL0  (*(volatile unsigned int*)0x40380044)
#define TCPWM0_GRP0_CNT0_TR_IN_SEL1  (*(volatile unsigned int*)0x40380048)
#define TCPWM0_GRP0_CNT0_TR_CMD      (*(volatile unsigned int*)0x40380040)
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL (*(volatile unsigned int*)0x4038004C)
#define TCPWM0_GRP0_CNT0_TR_PWM_CTRL (*(volatile unsigned int*)0x40380050)
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL_START 8
#define TCPWM0_GRP0_CNT0_TR_IN_EDGE_SEL_RELOAD 4
#define TCPWM0_GRP0_CNT0_TR_OUT_SEL  (*(volatile unsigned int*)0x40380054)
#define TCPWM0_GRP0_CNT0_INTR        (*(volatile unsigned int*)0x40380070)
#define TCPWM0_GRP0_CNT0_INTR_MASK   (*(volatile unsigned int*)0x40380078)


// Interrupt definition for Cortex-M0
#define CM0_SYSTEM_INT_CTL_273 (*(volatile unsigned int*)0x40208444)
#define CM0_SYSTEM_INT_CTL_273_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_273_INT_VALID 31

#define CM0_SYSTEM_INT_CTL_274 (*(volatile unsigned int*)0x40208448)
#define CM0_SYSTEM_INT_CTL_274_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_274_INT_VALID 31

#define CM0_SYSTEM_INT_CTL_300 (*(volatile unsigned int*)0x402084B0)
#define CM0_SYSTEM_INT_CTL_300_INT_IDX 0
#define CM0_SYSTEM_INT_CTL_300_INT_VALID 31

// NVIC Peripheral
#define NVIC_ISER_0 (*(volatile unsigned int*)0xE000E100)
#define NVIC_ISER_0_TCPWM 3
#define NVIC_ISER_2_TCPWM 7

#define NVIC_ICER_0 (*(volatile unsigned int*)0xE000E180)

// GPIO Peripheral Port 8
#define GPIO_PRT8_OUT        (*(volatile unsigned int*)0x40310400)
#define OUT2                2
#define GPIO_PRT8_CFG       (*(volatile unsigned int*)0x40310444)
#define DRIVE_MODE2         8
#define GPIO_PRT8_INV       (*(volatile unsigned int*)0x4031040C)

// GPIO Peripheral Port 12
#define GPIO_PRT12_OUT        (*(volatile unsigned int*)0x40310600)
#define OUT6                6
#define GPIO_PRT12_CFG       (*(volatile unsigned int*)0x40310644)
#define DRIVE_MODE6         24
#define GPIO_PRT12_INV       (*(volatile unsigned int*)0x4031060C)


//PLL//
#define CLK_PATH_SELECT1   (*(volatile unsigned int*)0x40261204)
#define CLK_PATH_SELECT2   (*(volatile unsigned int*)0x40261208)
#define PATH_MUX           0
#define CLK_ROOT_SELECT0   (*(volatile unsigned int*)0x40261240)
#define ROOT_MUX           0
#define DIRECT_MUX	   8
#define CLK_ECO_CONFIG     (*(volatile unsigned int*)0x4026151C)
#define ECO_EN             31
#define CLK_ECO_STATUS     (*(volatile unsigned int*)0x40261524)
#define ECO_READY_OK       3
#define CLK_PLL_CONFIG     (*(volatile unsigned int*)0x40261600)
#define REFERENCE_DIV      8
#define FEEDBACK_DIV       0
#define OUTPUT_DIV         16
#define ENABLE             31
#define CLK_PLL_STATUS     (*(volatile unsigned int*)0x40261640)
#define LOCKED             0
#define CM0_CLOCK_CTL      (*(volatile unsigned int*)0x40201008)
#define PERI_INT_DIV       24
#define SLOW_INT_DIV	   8

//FLASH//
#define FLASH_CTL           (*(volatile unsigned int*)0x40240000)
#define MAIN_WS             0

// CM4 stuff
#define CM4_PWR_CTL (*(volatile unsigned int*)0x40201200)
#define CM4_PWR_CTL_MODE 0
#define CM4_PWR_CTL_VECTKEYSTAT 16
#define CM4_VECTOR_TABLE_BASE (*(volatile unsigned int*)0x40200200)

#endif //TRAVEO2_M0_H