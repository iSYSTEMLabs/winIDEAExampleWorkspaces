/*
  ITM registers and setup
*/
#define ITM_BASE_ADDRESS_32 (*(volatile unsigned int*)0xE0000000)
#define ITM_BASE_ADDRESS_16 (*(volatile unsigned short*)0xE0000000)
#define ITM_BASE_ADDRESS_8 (*(volatile unsigned char*)0xE0000000)
#define ITM_LAR (*(volatile unsigned int*)0xE0000FB0)
#define ITM_TER (*(volatile unsigned int*)0xE0000E00)
#define ITM_TPR (*(volatile unsigned int*)0xE0000E40)

/*
  Interrupt registers   
*/
#define INT_32_63_SET_EN (*(volatile unsigned int*)0xE000E104)
#define INT_32_63_SET_EN_PIT0 16 

/*
  GPIO registers   
*/
#define GPIOE_PDDR (*(volatile unsigned int*)0x400FF114) // Port Data Direction Register
#define GPIOE_PTOR (*(volatile unsigned int*)0x400FF10C) // Port Toggle Output Register
#define GPIO_PIN 11                                       // GPIO pin
#define SIM_SCGC5 (*(volatile unsigned int*)0x40048038)   // System Clock Gating Control Register 5
#define SIM_SCGC5_PORTE 13                                // PORTE clock enable
#define PORTE_PCR11 (*(volatile unsigned int*)0x4004D02C) // Pin Control Register n
#define PORTE_PCR11_MUX 8                                 // Pin function select

/*
  Timer registers   
*/
#define SIM_SCGC6 (*(volatile unsigned int*)0x4004803C)   // System Clock Gating Control Register 6
#define SIM_SCGC6_PIT 23                                  // PIT clock enable
#define PIT_MCR (*(volatile unsigned int*)0x40037000)     // PIT Module Control Register
#define PIT_MCR_MDIS 1                                    // Module disable
#define PIT_LDVAL0 (*(volatile unsigned int*)0x40037100) // Timer Load Value Register
#define PIT_TCTRL0 (*(volatile unsigned int*)0x40037108) // Timer Control Register
#define PIT_TCTRL0_TEN 0  // Timer enable
#define PIT_TCTRL0_TIE 1  // Timer interrupt enable
#define PIT_TFLG0 (*(volatile unsigned int*)0x4003710C) // Timer flag register
#define PIT_TFLG0_TIF 0 // Timer interrupt flag

/*
  Clock registers   
*/
#define MCG_C2 (*(volatile unsigned char*)0x40064001) // MCG Control 2 Register
#define MCG_C2_RANGE 4 // Frequency Range Select
#define MCG_C2_HGO 3 // High Gain Oscillator Select
#define MCG_C2_EREFS 2 // External Reference Select
#define MCG_S (*(volatile unsigned char*)0x40064006) // MCG Status Register
#define MCG_S_LOCK0 6 // Clock Mode Status
#define MCG_S_OSCINIT0 1 // OSC Initialization
#define MCG_C1 (*(volatile unsigned char*)0x40064000) // MCG Control 1 Register
#define MCG_C1_IREFS 2  // Internal Reference Select
#define MCG_C6 (*(volatile unsigned char*)0x40064005) // MCG Control 6 Register
#define MCG_C6_PLLS 6 // PLL Select
#define MCG_C6_VDIV 0 // VCO Divider
#define MCG_C5 (*(volatile unsigned char*)0x40064004) // MCG Control 5 Register
#define MCG_C5_PRDIV 0  // PLL External Reference Divider
#define MCG_C5_PLLCLKEN0 6 // PLL Clock Enable
#define OSC_CR (*(volatile unsigned char*)0x40065000)
#define OSC_CR_ERCLKEN 7
#define SIM_CLKDIV1 (*(volatile unsigned int*)0x40048044) // System Clock Divider Register 1


#define MCG_C4 (*(volatile unsigned char*)0x40064003)
#define MCG_C4_DMX32 7
#define MCG_C4_DRST_DRS 5 