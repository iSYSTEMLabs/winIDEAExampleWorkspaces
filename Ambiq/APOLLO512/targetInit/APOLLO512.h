/*
  Clock registers
*/

#define CLKGEN_CLKOUT (*(volatile unsigned int*)0x40004010)  // Clock out frequency select registers
#define CLKGEN_CLKOUT_CKSEL 0                                // Clock out signal select register
#define CLKGEN_CLKOUT_CKEN 7                                 // Clock out signal enable register
#define CLKGEN_CCTRL (*(volatile unsigned int*)0x40004018)   // HFRC clock control register
#define CLKGEN_CLKKEY (*(volatile unsigned int*)0x40004014)  // Key register for clock control register

/*
  Timer registers
*/

#define CTIMER_CTRL0 (*(volatile unsigned int*)0x4000800C)   // Timer control register
#define CTIMER_CTRL0_TMRA0EN 0                               // Timer A0 enable register
#define CTIMER_CTRL0_TMRA0CLK 1                              // Timer A0 clock select register
#define CTIMER_CTRL0_TMRA0FN 6                               // Timer A0 function select
#define CTIMER_CTRL0_TMRA0IE 9                               // Timer A0 interrupt enable register
#define CTIMER_CMPRA0 (*(volatile unsigned int*)0x40008004)  // Timer A0 compare registers
#define CTIMER_INTEN (*(volatile unsigned int*)0x40008200)   // Timer interrupts enable register
#define CTIMER_INTEN_CTMRA0INT 0                             // Timer A0 interrupt enable register
#define CTIMER_INTCLR (*(volatile unsigned int*)0x40008208)  // Timer interrupt clear register
#define CTIMER_INTCLR_CTMRA0INT 0	                           // Timer A0 interrupt clear register

/*
  GPIO registers
*/

#define GPIO_PADKEY  (*(volatile unsigned int*)0x40010060)   // Key register for all pad configuration registers
#define GPIO_CFGE (*(volatile unsigned int*)0x40010050)      // GPIO configuration register E
#define GPIO_CFGE_GPIO34OUTCFG 9                             // GPIO 34 output configuration register
#define GPIO_WTB (*(volatile unsigned int*)0x4001008C)       // GPIO output register B
#define GPIO_PIN 2                                           // GPIO 34 pin


/*
  NVIC registers
*/

#define NVIC_ISER (*(volatile unsigned int*)0xE000E100)      // Interrupt set-enable registers
#define NVIC_ICER (*(volatile unsigned int*)0xE000E180)      // Interrupt clear-enable registers
#define NVIC_TMR0 10                                         // TMR0 interrupt register
