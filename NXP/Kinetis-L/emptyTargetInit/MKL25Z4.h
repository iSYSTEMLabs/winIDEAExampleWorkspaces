/*
  Clock registers   
*/
// Main clock generator control registers
#define MCG_C1 (*(volatile unsigned char*)0x40064000)                 // MCG controll register 1                                                                                  
#define MCG_C1_CLKS 6                                                 // Clock source                                           
#define MCG_MC (*(volatile unsigned char*)0x40064018)                 // Miscellaneous Control Register
#define MCG_MC_HIRCEN 7                                               // HIRC enable

/*
  System Integration Module  
*/
#define SIM_CLKDIV1 (*(volatile unsigned int*)0x40048044)             // Clock dividers
#define SIM_CLKDIV1_OUTDIV1 28                                        // Main clock divider
#define SIM_CLKDIV1_OUTDIV4 16                                        // Bus clock divider
#define SIM_SCGC5 (*(volatile unsigned int*)0x40048038)               // System Clock Gating Control Register 5
#define SIM_SCGC5_PORTA 9                                             // PCTLA Clock Gate Control
#define SIM_SCGC6 (*(volatile unsigned int*)0x4004803C)               // System Clock Gating Control Register 6
#define SIM_SCGC6_PIT0 23                                             // PIT0 Clock gate controll
#define SIM_COPC  (*(unsigned long volatile*)0x40048100)              // COP controll register

/*
  GPIO registers   
*/
#define GPIOA_PDDR (*(volatile unsigned int*)0x400FF014)              // GPIO port A data direction register
#define GPIOA_PTOR (*(volatile unsigned int*)0x400FF00C)              // GPIO port A toggle data register
#define GPIOA_PDOR (*(volatile unsigned int*)0x400FF000)              // GPIO port A data output register
#define GPIOA_PIN 12                                                  // GPIO port A pin
#define PORTA_PCR12 (*(volatile unsigned int*)0x40049030)             // Port A pin controll register
#define PORTA_PCR12_MUX 8                                             // Pin Mux Control

/*
  Timer registers   
*/
#define PIT0_LDVAL0 (*(volatile unsigned int*)0x40037100)             // Timer Load Value Register
#define PIT0_TCTRL0 (*(volatile unsigned int*)0x40037108)             // Timer Control Register
#define PIT0_TCTRL0_TIE 1                                             // Timer Interrupt Enable
#define PIT0_TCTRL0_TEN 0                                             // Timer Enable
#define PIT0_MCR (*(volatile unsigned int*)0x40037000)                // PIT Module Control Register                
#define PIT0_MCR_MDIS 1                                               // Module Disable
#define PIT0_TFLG (*(volatile unsigned int*)0x4003710C)               // Timer flag register
#define PIT0_TFLG_TIF 0

/*
  NVIC registers   
*/
#define NVIC_INT_0_31_SET_EN (*(volatile unsigned int*)0xE000E100)    // NVIC interrupt 0 - 31 set enable interrupt
#define NVIC_INT_0_31_CLR_EN (*(volatile unsigned int*)0xE000E180)    // NVIC interrupt 0 - 31 clear enable interrupt
#define NIVC_PIT0 22                                                  // NVIC PIT0 interrupt


//SYSTICK
#define SYS_TICK_RELOAD    (*(volatile unsigned int*)0xe000e014)
#define SYS_TICK_CONTROL   (*(volatile unsigned int*)0xe000e010)
#define SYS_TICK_CALIB     (*(volatile unsigned int*)0xe000e01c)
#define SYS_TICK_CURRENT   (*(volatile unsigned int*)0xe000e018)



/*
  LED GPIO registers   
*/
#define GPIOD_PDDR (*(volatile unsigned int*)0xf80ff0d4)              // GPIO port D data direction register
#define GPIOD_PTOR (*(volatile unsigned int*)0xf80ff0cc)              // GPIO port D toggle data register
#define GPIOD_PDOR (*(volatile unsigned int*)0xf80ff0c0)              // GPIO port D data output register
#define GPIOD_PIN 1                                                  // GPIO port D pin
#define PORTD_PCR1 (*(volatile unsigned int*)0x4004c004)             // Port D pin controll register
#define PORTD_PCR1_MUX 8                                             // Pin Mux Control


/*
  Clock registers   
*/

#define SIM_CLKDIV1  (*(unsigned long volatile*)0x40048044) 
#define SIM_SOPT1    (*(unsigned long volatile*)0x40047000) 
#define SIM_SOPT2    (*(unsigned long volatile*)0x40048004) 
#define MCG_C1       (*(char volatile*)0x40064000) 
#define MCG_C2       (*(char volatile*)0x40064001) 
#define MCG_C3       (*(char volatile*)0x40064002) 
#define MCG_C4       (*(char volatile*)0x40064003) 
#define MCG_C5       (*(char volatile*)0x40064004) 
#define MCG_C6       (*(char volatile*)0x40064005) 
#define MCG_S        (*(char volatile*)0x40064006) 
#define OSC0_CR      (*(char volatile*)0x40065000)
#define SIM_COPC     (*(unsigned long volatile*)0x40048100)


//Pll

#define MCG_S_LOCK0_MASK                         0x40u
#define MCG_S_IREFST_MASK                        0x10u

#define PORTA_PCR18            (*(char volatile*)0x40049048)
#define PORTA_PCR19            (*(char volatile*)0x4004904C)


