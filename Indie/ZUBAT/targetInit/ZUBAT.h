/**************************************************************************************************/
// Header file for IndieSemi ZUBAT
// Author:  Amadej Papez 
// Year:    2022
/**************************************************************************************************/

// This file does not contain all register definitions, only the ones needed.

#define BIT_SET(reg, bit)    ((reg) |= (1UL << (bit)))
#define BIT_CLEAR(reg, bit)  ((reg) &= ~(1UL << (bit)))
#define BIT_CHECK(reg, bit)  ((reg) & (1UL << (bit)))

/**************************************************************************************************/
// CLOCK
/**************************************************************************************************/
#define CRGA_CLKOCKSRC (*(unsigned long volatile*)0x50010200)   // Low frequency clock control
#define ACTIVESYSCLK        9                                   // Tells abouts the clock being used as system clock (Read only)
    // 0x0 — Slow clock 10kHz
    // 0x1 — Fast clock 16MHz
#define SYSCLKSEL           8                                   // Selects the clock between fast and slow system clocks
    // 0x0 - Slow clock (10kHz)
    // 0x1 - Fast clock (16MHz)
#define HFRCSTS             1                                   // Will be high if the 16MHz RC oscillator is enabled (Read only)
#define HFRCENA             0                                   // Setting this bit enables the 16MHz RC oscillator

/**************************************************************************************************/
// RESET
/**************************************************************************************************/    
#define CRGA_RESET  (*(unsigned long volatile*)0x500102004)     // Reset control
#define HREQ                24                                  // Hard reset request (Write only)
#define SREQ                16                                  // Soft reset request (Write only)
#define WDTA                12                                  // Set to clear the WDT flag (Write only)
#define BORVCORE_MCU        11                                  // Set to clear the 1.8V brownout detected flag (Write only)
#define BORVDDA             9                                   // Set to clear the VDDA brownout detected flag (Write only)
#define POR                 8                                   // Set to clear the POR flag (Write only)
#define WDTA_BF             4                                   // Set by the hardware when the watchdog barks (Read only)
#define BORVCORE_MCU_STS    3                                   // Set by the hardware when a brownout of the 1.5V supply is detected (Read only)
#define BORVDDA_STS         1                                   // Set by the hardware when a brownout of the VDDA supply is detected (Read only)
#define POR_STS             0                                   // Set by the hardware during power-on reset (Read only)

/**************************************************************************************************/
// BOR
/**************************************************************************************************/
#define CRGA_BORACTION (*(unsigned long volatile*)0x50010208)   // Bor action
#define VCORE_MCU           4                                   // Defines the consequences of brown-out condition on the VCORE_MCU supply being
                                                                // detected by the hardware
    // 0x0 — No action
    // 0x1 — IRQ generated
    // 0x2 — Hard reset generated
#define VDDA                0                                   // Defines the consequences of brown-out condition on the VDDA supply being detected
                                                                // by the hardware
    // 0x0 — No action
    // 0x1 — IRQ generated
    // 0x2 — Hard reset generated

/**************************************************************************************************/
// GPIO
/**************************************************************************************************/
#define IOCTRLA_GPAPL (*(unsigned long volatile*)0x50010600)    // GPIO Port A Lower Nibble Pin Control
#define PDENA3              28                                  // Enable Pulldown on GPA[3]
#define PUENA3              27                                  // Enable Pullup on GPA[3]
#define RDENA3              26                                  // Enable Read path on GPA[3]
#define HWMODE3             24                                  // Enable Hardware mode on GPA[3]
    // 0x0 — PA3 controlled by GPIOA barium settings
    // 0x1 — PA3 used to output PWM
#define PDENA2              20                                  // Enable Pulldown on GPA[2]
#define PUENA2              19                                  // Enable Pullup on GPA[2]
#define RDENA2              18                                  // Enable Read path on GPA[2]
#define HWMODE2             16                                  // Enable Hardware mode on GPA[2]
    // 0x0 — PA2 controlled by GPIOA barium settings
    // 0x1 — PA2 used as I2S Data out
    // 0x2 — PA2 used for UART RXD
    // 0x3 — PA2 used for test mux1 output
#define PDENA1              12                                  // Enable Pulldown on GPA[1]
#define PUENA1              11                                  // Enable Pullup on GPA[1]
#define RDENA1              10                                  // Enable Read path on GPA[1]
#define HWMODE1             8                                   // Enable Hardware mode on GPA[1]
    // 0x0 — PA1 controlled by GPIOA barium settings
    // 0x1 — PA1 used as I2S SCK out
    // 0x2 — PA1 used for PWM
    // 0x3 — PA1 used for test mux0 output
#define PDENA0              4                                   // Enable Pulldown on GPA[0]
#define PUENA0              3                                   // Enable Pullup on GPA[0]
#define RDENA0              2                                   // Enable Read path on GPA[0]
#define HWMODE0             0                                   // Enable Hardware mode on GPA[0]
    // 0x0 — PA0 controlled by GPIOA barium settings
    // 0x1 — PA0 used as I2S WS out
    // 0x2 — PA0 used for UART TXD
    // 0x3 — PA0 used for UART RXD
    
#define IOCTRLA_GPAPU (*(unsigned long volatile*)0x50010604)    // GPIO Port A Upper Nibble Pins Control
#define PDENA4              4                                   // Enable Pulldown on GPA[4]             
#define PUENA4              3                                   // Enable Pullup on GPA[4] 
#define RDENA4              2                                   // Enable Read path on GPA[4]
#define HWMODE4             1                                   // Enable Hardware mode on GPA[4]
    // 0x0 — PA4 controlled by GPIOA barium settings
    // 0x1 — PA4 used for UART TXD

#define IOCTRLA_GPBPL (*(unsigned long volatile*)0x50010608)    // GPIO Port B Lower Nibble Pins Control
#define LVL2                23                                  // Pin 2 level
#define STR2                22                                  // Pin 2 strength
#define PDENA2              20                                  // Pin 2 pulldown enable 
#define PUENA2              19                                  // Pin 2 pullup enable
#define HWMODE2             16                                  // Enable Hardware mode on GPB[2]
    // 0x0 — PB2 controlled by GPIOA barium settings
    // 0x1 — PB2 used to output PWM
#define LVL1                15                                  // Pin 1 level 
#define STR1                14                                  // Pin 1 strength
#define PDENA1              12                                  // Pin 1 pulldown enable 
#define PUENA1              11                                  // Pin 1 pullup enable 
#define HWMODE1             8                                   // Enable Hardware mode on GPB[1]
    // 0x0 — PB1 controlled by GPIOA barium settings
    // 0x1 — PB1 used to output PWM
#define LVL0                7                                   // Pin 0 level 
#define STR0                6                                   // Pin 0 strength
#define PDENA0              4                                   // Pin 0 pulldown enable 
#define PUENA0              3                                   // Pin 0 pullup enable 
#define HWMODE0             0                                   // Enable Hardware mode on GPB[0]
    // 0x0 — PB0 controlled by GPIOA barium settings
    // 0x1 — PB0 used to output PWM

#define GPIOA_GPADATA (*(unsigned long volatile*)0x50014000)    // GPIO Port A Data
#define GPADATA_1024        0                                   // Port A data

#define GPIOA_GPENA   (*(unsigned long volatile*)0x50014C00)    // GPIO Port Enables
#define GPLENA              2                                   // GPL Enable
#define GPBENA              1                                   // GPB Enable
#define GPAENA              0                                   // GPA Enable

#define GPIOA_GPBDATA (*(unsigned long volatile*)0x500147FC)    // GPIO Port B Data
#define GPBDATA_1024        0                                   // Port B data

#define GPIOA_GPAPL   (*(unsigned long volatile*)0x50014C04)    // GPIO Port A Lower Nibble Pins Control
#define GPAACTDET_3         29                                  // Pin 3 activity interrupt 
#define GPACLR_3            28                                  // Pin 3 interrupt clear - cleared automatically after each write
#define GPAFE_3             27                                  // Pin 3 falling edge enable
#define GPARE_3             26                                  // Pin 3 rising edge enable
#define GPAIE_3             25                                  // Pin 3 interrupt mask 
#define GPADIR_3            24                                  // Pin 3 output enable 
#define GPAACTDET_2         21                                  // Pin 2 activity interrupt 
#define GPACLR_2            20                                  // Pin 2 interrupt clear - cleared automatically after each write
#define GPAFE_2             19                                  // Pin 2 falling edge enable 
#define GPARE_2             18                                  // Pin 2 rising edge enable
#define GPAIE_2             17                                  // Pin 2 interrupt mask 
#define GPADIR_2            16                                  // Pin 2 output enable
#define GPAACTDET_1         13                                  // Pin 1 activity interrupt 
#define GPACLR_1            12                                  // Pin 1 interrupt clear - cleared automatically after each write
#define GPAFE_1             11                                  // Pin 1 falling edge enable 
#define GPARE_1             10                                  // Pin 1 rising edge enable 
#define GPAIE_1             9                                   // Pin 1 interrupt mask 
#define GPADIR_1            8                                   // Pin 1 output enable 
#define GPAACTDET_0         5                                   // Pin 0 activity interrupt 
#define GPACLR_0            4                                   // Pin 0 interrupt clear - cleared automatically after each write
#define GPAFE_0             3                                   // Pin 0 falling edge enable 
#define GPARE_0             2                                   // Pin 0 rising edge enable 
#define GPAIE_0             1                                   // Pin 0 interrupt mask
#define GPADIR_0            0                                   // Pin 0 output enable 

#define GPIOA_GPBPL  (*(unsigned long volatile*)0x50014C0C)      // GPIO Port B Pin Control
#define GPBACTDET_2         21                                  // Pin 2 activity interrupt
#define GPBCLR_2            20                                  // Pin 2 interrupt clear - cleared automatically after each write
#define GPBFE_2             19                                  // Pin 2 falling edge enable
#define GPBRE_2             18                                  // Pin 2 rising edge enable
#define GPBIE_2             17                                  // Pin 2 interrupt mask
#define GPBDIR_2            16                                  // Pin 2 output enable 
#define GPBACTDET_1         13                                  // Pin 1 activity interrupt 
#define GPBCLR_1            12                                  // Pin 1 interrupt clear - cleared automatically after each write
#define GPBFE_1             11                                  // Pin 1 falling edge enable
#define GPBRE_1             10                                  // Pin 1 rising edge enable 
#define GPBIE_1             9                                   // Pin 1 interrupt mask 
#define GPBDIR_1            8                                   // Pin 1 output enable
#define GPBACTDET_0         5                                   // Pin 0 activity interrupt 
#define GPBCLR_0            4                                   // Pin 0 interrupt clear - cleared automatically after each write
#define GPBFE_0             3                                   // Pin 0 falling edge enable
#define GPBRE_0             2                                   // Pin 0 rising edge enable
#define GPBIE_0             1                                   // Pin 0 interrupt mask 
#define GPBDIR_0            0                                   // Pin 0 output enable 


/**************************************************************************************************/
// WATHCDOG1
/**************************************************************************************************/
#define WDT1_CFG1 (*(unsigned long volatile*)0x50020018)        // Watchdog config
#define PRESET              3                                   // Defines the watchdog timeout period 
    // 0x0 — 2^13 / System Clock
    // 0x1 — 2^19 / System Clock
    // 0x2 — 2^22 / System Clock
    // 0x3 — 2^32 / System Clock
#define RSTFLAG             2                                   // Reset flag 
#define RSTEN               1                                   // Reset enable
#define ENA                 0                                   // WDT Enable

#define WDT1_KEY  (*(unsigned long volatile*)0x5002001C)
/* Writing the sequence CLEAR, KEY0, KEY1 to this register will clear (pet) the watchdog -
preventing it from timing out and resetting the system */

/**************************************************************************************************/
// TIMER0
/**************************************************************************************************/
#define TIMER0_COUNT     (*(unsigned long volatile*)0x50020000)  // Timer0 count register
#define TIMER0_CFG       (*(unsigned long volatile*)0x50020004)  // Timer0 config register
#define TIMER1_COUNT     (*(unsigned long volatile*)0x50020008)  // Timer0 count register
#define TIMER1_CFG       (*(unsigned long volatile*)0x5002000C)  // Timer0 config register
#define TIMER2_COUNT     (*(unsigned long volatile*)0x50020010)  // Timer0 count register
#define TIMER2_CFG       (*(unsigned long volatile*)0x50020014)  // Timer0 config register
#define ENA               0                                      // Enable


/**************************************************************************************************/
// INTERRUPTS
/**************************************************************************************************/
#define NVIC_ISER        (*(unsigned long volatile*)0xE000E100)  // Interrupt Set-Enable Register 
#define NVIC_ICER        (*(unsigned long volatile*)0xE000E180)  // Interrupt Clear Enable Register 
#define NVIC_ISPR        (*(unsigned long volatile*)0xE000E200)  // Interrupt Set-Pending Register 
#define NVIC_ICPR        (*(unsigned long volatile*)0xE000E280)  // Interrupt Clear-Pending Register

#define ISCR             (*(unsigned long volatile*)0xE000ED04)  // Interrupt status reg
#define IRQ2              2
#define IRQ16             16                                     // Timer 0 Interrupt
#define WDTA_STOP         (*(unsigned long volatile*)0x50010704) //WDT STOP REGISTER




