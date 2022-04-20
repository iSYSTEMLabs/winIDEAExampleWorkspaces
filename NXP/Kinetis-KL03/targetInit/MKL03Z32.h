/* 
  Clock registers
*/

// Multipurpose clock generator control registers
#define MCG_C1 (*(volatile unsigned char*)0x40064000)  // MCG control register 1
#define MCG_C1_CLKS 6                                  // Clock source
#define MCG_MC (*(volatile unsigned char*)0x40064018)  // Miscellaneous control register
#define MCG_MC_HIRCEN 7                                // HIRC enable

/*
  System Integration Module
*/
#define SIM_CLKDIV1 (*(volatile unsigned int*)0x40048044)  // System clock divider register 1
#define SIM_CLKDIV1_OUTDIV1 28                             // Core/system clock divider
#define SIM_CLKDIV1_OUTDIV4 16                             // Bus and flash clock divider
#define SIM_SCGC5 (*(volatile unsigned int*)0x40048038)    // System clock gating control register
#define SIM_SCGC5_PORTB 10                                 // Port B clock gating control register
#define SIM_SCGC6 (*(volatile unsigned int*)0x4004803C)    // System clock gating control register
#define SIM_SCGC6_TPM0 24                                  // Timer clock gating control register
#define SIM_SOPT2 (*(volatile unsigned int*)0x40048004)    // System options register
#define SIM_SOPT2_TPMSRC 24                                // Timer clock source
#define SIM_COPC (*(volatile unsigned int*)0x40048100)     // COP control register
  
/*
  Timer registers
*/
#define TPM0_SC (*(volatile unsigned int*)0x40038000)  // Timer control register
#define TPM0_SC_PS 0                                    // Timer prescale factor register
#define TPM0_SC_CMOD 3                                  // Timer clock mode register
#define TPM0_SC_TOIE 6                                  // Timer overflow interrupt register
#define TPM0_SC_TOF 7                                   // Timer overflow flag egister
#define TPM0_MOD (*(volatile unsigned int*)0x40038008)  // Timer modulo register
#define TPM0_C0SC (*(volatile unsigned int*)0x4003800C)  // Channel control register
#define TPM0_CONF (*(volatile unsigned int*)0x40038084)  // Configuration register

/*
  GPIO registers
*/
#define GPIOB_PDDR (*(volatile unsigned int*)0x400FF054)  // GPIO Port B data direction register
#define GPIOB_PDOR (*(volatile unsigned int*)0x400FF040)  // GPIO Port B data output register     
#define GPIOB_PTOR (*(volatile unsigned int*)0x400FF04C)  // GPIO Port B data toggle register
#define GPIOB_PIN 10                                      // GPIO port B pin
#define PORTB_PCR10 (*(volatile unsigned int*)0x4004A028) // Port B pin control register
#define PORTB_PCR10_MUX 8                                 // Port B pin MUX control

/*
  NVIC registers
*/
#define NVIC_ISER (*(volatile unsigned int*)0xE000E100)  // NVIC interrupt set-enable register
#define NVIC_ICER (*(volatile unsigned int*)0xE000E180)  // NVIC interrupt clear-enable register
#define NVIC_TPM0 17                                     // NVIC TPM0 interrupt


