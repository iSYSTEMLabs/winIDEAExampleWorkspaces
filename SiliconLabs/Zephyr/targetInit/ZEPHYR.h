#ifndef __ZEPHYR_h__
#define __ZEPHYR_h__

#define BIT_SET(reg, bit)    ((reg) |= (1UL << (bit)))
#define BIT_CLEAR(reg, bit)  ((reg) &= ~(1UL << (bit)))
#define BIT_CHECK(reg, bit)  ((reg) & (1UL << (bit)))

// ITM
//#define ITM_BASE_ADDRESS  (*(unsigned long volatile*)0xE0000000) 

/**************************************************************************************************/
// CLOCK
/**************************************************************************************************/
#define CRGA_CLKOCKSRC  (*(unsigned long volatile*)0x50000000)   // Low frequency clock control
#define CRGA_SYSCLKSELSTS   25 // (read only)
#define CRGA_SYSCLKSELREQ   24    //System clock select request: Used to request switch between the fast and slow system clocks
    // 0x0 — Slow clock (32kHz)
    // 0x1 — Fast clock (11MHz or 16MHz)
#define CRGA_HFCLKSELSTS    17 // (read only) Fast clock select status
    // 0x0 — RC fast clock
    // 0x1 — Crystal fast clock
#define CRGA_HFCLKSELREQ    16 // Fast clock select request: Used to request switch between the RC and crystal fast clocks
    // 0x0 — RC fast clock
    // 0x1 — Crystal fast clock
#define CRGA_HFXOREADY      10 // (read only) Fast crystal oscillator ready: Will be high when the crystal oscillator is stable and outputting a clock
#define CRGA_HFXOSTS        9  // (read only) Fast crystal oscillatorstatus: Will be high when the crystal oscillator is enabled
#define CRGA_HFXOENA        8  // Fast crystal oscillator enable: Setting this bit enables the crystal oscillator
#define CRGA_HFRCSTS        1  // (read only) Fast oscillator status: Will be high when the 11MHz RC oscillator is enabled
#define CRGA_HFRCENA        0  // Fast RC oscillator enable: Setting this bit enables the 11MHz RC oscillator

#define CRGA_CLKOCKCFG  (*(unsigned long volatile*)0x50000004)   // Crystal control
#define CRGA_HARDRST    (*(unsigned char volatile*)0x5000000F)   // Hard reset register
#define CRGA_SYSPRESCALEENA 8 // System prescaler enable 
#define CRGA_HFXOTESTENA    5 // Crystal oscillator test enable: Used to enable the crystal oscillator test mode — only accessible when ‘debug access’ is enabled
#define CRGA_HFXOFREQ       4 // Crystal oscillator frequency: Speci×es the frequency of the crystal oscillator
    // 0x0 — 16MHz crystal
    // 0x1 — 32MHz crystal
#define CRGA_HFXOFORCEREADY 3 // Force crystal oscillator ready: Used to force the crystal oscillator to output its internal clock
#define CRGA_HFXOREADYMODE  2 // Fast crystal oscillator ready mode: Used to enable the automatic detection of crystal clock stability
#define CRGA_HFXOICFG       0 // bit 0 - 1; Fast crystal current con×guration


/**************************************************************************************************/
// GPIO
/**************************************************************************************************/
#define IOCTRLA_GPAP01  (*(unsigned long volatile*)0x50010200)   //GPIO Port A Pin 0-1 Control
#define GPAP01_RDENA1   11  // Pin 1 read enable
#define GPAP01_PDENA1   10  // Pin 1 pulldown enable
#define GPAP01_PUENA1   9   // Pin 1 pullup enable
#define GPAP01_HWMODE1  8   // Pin 1 hardware mode
#define GPAP01_RDENA0   3   // Pin 0 read enable
#define GPAP01_PDENA0   2   // Pin 0 pulldown enable
#define GPAP01_PUENA0   1   // Pin 0 pullup enable
#define GPAP01_HWMODE0  0   // Pin 0 hardware mode

#define IOCTRLA_GPBP03  (*(unsigned long volatile*)0x50010204)   //GPIO Port B Pin 0-3 Control
#define GPBP03_LVL3     29
#define GPBP03_STR3     28
#define GPBP03_PDENA3   27
#define GPBP03_PUENA3   26
#define GPBP03_HWMODE3  24   // bit 24 - 25
#define GPBP03_LVL2     21
#define GPBP03_STR2     20
#define GPBP03_PDENA2   19
#define GPBP03_PUENA2   18
#define GPBP03_HWMODE2  16   // bit 16 - 17
#define GPBP03_LVL1     13
#define GPBP03_STR1     12
#define GPBP03_PDENA1   11
#define GPBP03_PUENA1   10
#define GPBP03_HWMODE1  8   // bit 8 - 9
#define GPBP03_LVL0     5
#define GPBP03_STR0     4
#define GPBP03_PDENA0   3
#define GPBP03_PUENA0   2
#define GPBP03_HWMODE0  0   // bit 0 - 1

#define IOCTRLA_GPBP04  (*(unsigned long volatile*)0x50010208)   //GPIO Port B Pin 4 Control
#define GPBP04_LVL4     5
#define GPBP04_STR4     4
#define GPBP04_PDENA4   3
#define GPBP04_PUENA4   2
#define GPBP04_HWMODE4  0     // bit 0 - 1

#define GPIO_GPADATA    (*(unsigned long volatile*)0x50014000)  // Port A data, only bits 0 - 1 valid
#define GPIO_GPBDATA    (*(unsigned long volatile*)0x50014400)  // Port B data, only bits 0 - 4 valid
#define GPIOA_1         0

#define GPIO_GPENA      (*(unsigned long volatile*)0x50014800)  // GPIO Port Enables
#define GPIO_GPBENA     1   // port B
#define GPIO_GPAENA     0   // port A

#define GPIO_GPAP01     (*(unsigned long volatile*)0x50014804)  // GPIO Port A Pin 0-1 Control
#define GPIO_GPACLR1    12  // Pin 1 interrupt clear – cleared automatically after each write
#define GPIO_GPADIR1    8   // Pin 1 output enable
#define GPIO_GPACLR0    4   // Pin 0 interrupt clear – cleared automatically after each write
#define GPIO_GPADIR0    0   // Pin 0 output enable

#define GPIO_GPBP03     (*(unsigned long volatile*)0x5001480C)  // GPIO Port B Pin 0 - 3 Control
#define GPIO_GPBCLR3    28  // Pin 3 interrupt clear – cleared automatically after each write
#define GPIO_GPBDIR3    24  // Pin 3 output enable
#define GPIO_GPBCLR2    20  // Pin 2 interrupt clear – cleared automatically after each write
#define GPIO_GPBDIR2    16  // Pin 2 output enable
#define GPIO_GPBCLR1    12  // Pin 1 interrupt clear – cleared automatically after each write
#define GPIO_GPBDIR1    8   // Pin 1 output enable
#define GPIO_GPBCLR0    4   // Pin 0 interrupt clear – cleared automatically after each write
#define GPIO_GPBDIR0    0   // Pin 0 output enable

#define GPIO_GPBP04     (*(unsigned long volatile*)0x50014810)  // GPIO Port B Pin 4 Control
#define GPIO_GPBCLR4    4   // Pin 4 interrupt clear – cleared automatically after each write
#define GPIO_GPBDIR4    0   // Pin 4 output enable

/**************************************************************************************************/
// WATHCDOG - INCOMPLETE
/**************************************************************************************************/
#define WDT1_CFG1        (*(unsigned long volatile*)0x50020018)  // Watchdog config
#define WDT1_PRESET      4   // Defines the watchdog timeout period 0x0 — 13;  0x1 — 19; 0x2 — 22; 0x3 — 32
#define WDT1_RSTFLAG     1   // Reset flag (read)
#define WDT1_ENA         0   // enable

#define WDT1_KEY         (*(unsigned long volatile*)0x5002001C)
/* Writing the sequence CLEAR, KEY0, KEY1 to this register will clear (pet) the watchdog -
preventing it from timing out and resetting the system */

/**************************************************************************************************/
// TIMER
/**************************************************************************************************/
#define TIMER0_COUNT     (*(unsigned long volatile*)0x50020000)  // Timer0 count register
#define TIMER0_CFG       (*(unsigned long volatile*)0x50020004)  // Timer0 config register

#define TIMER3_CFGL      (*(unsigned long volatile*)0x50010400)  // Timer3 config register
#define TIMER3_CFGM      (*(unsigned long volatile*)0x50010404)  // Timer3 count register M
#define TIMER3_RLDVAL    (*(unsigned long volatile*)0x50010408)  // Timer3 reload value
#define TIMER3_CNTVAL    (*(unsigned long volatile*)0x5001040C)  // Timer3 count value
#define TIMER3_CSRL      (*(unsigned long volatile*)0x50010410)  // Timer3 Control/Status Register for CounterL
#define TIMER3_CSRM      (*(unsigned long volatile*)0x50010414)  // Timer3 Control/Status Register for CounterM

#define TMRCFG  31
#define OFLL    16
#define IRQENAL 8
#define ENAL    0
#define RLDVALL 0

/**************************************************************************************************/
// INTERRUPT
/**************************************************************************************************/
#define NVIC_ISER        (*(unsigned long volatile*)0xE000E100)  // Interrupt Set-Enable Register 
#define NVIC_ICER        (*(unsigned long volatile*)0xE000E180)  // Interrupt Clear Enable Register 
#define NVIC_ISPR        (*(unsigned long volatile*)0xE000E200)  // Interrupt Set-Pending Register 
#define NVIC_ICPR        (*(unsigned long volatile*)0xE000E280)  // Interrupt Clear-Pending Register

#define NVIC_IPR0        (*(unsigned long volatile*)0xE000E400)  // Interrupt Priority Register 0
#define NVIC_IPR1        (*(unsigned long volatile*)0xE000E404)  // Interrupt Priority Register 1
#define NVIC_IPR2        (*(unsigned long volatile*)0xE000E408)  // Interrupt Priority Register 2
#define NVIC_IPR3        (*(unsigned long volatile*)0xE000E40C)  // Interrupt Priority Register 3
#define NVIC_IPR4        (*(unsigned long volatile*)0xE000E410)  // Interrupt Priority Register 4
#define NVIC_IPR5        (*(unsigned long volatile*)0xE000E414)  // Interrupt Priority Register 5
#define NVIC_IPR6        (*(unsigned long volatile*)0xE000E418)  // Interrupt Priority Register 6
#define NVIC_IPR7        (*(unsigned long volatile*)0xE000E41C)  // Interrupt Priority Register 7

#define ISCR             (*(unsigned long volatile*)0xE000ED04)  // Interrupt status reg

#define IRQ4  4
#endif



