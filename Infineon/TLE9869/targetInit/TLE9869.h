/*
  Interrupt registers   
*/
#define INT_0_31_SET_EN (*(unsigned volatile int*)0xE000E100) // Cortex M interrupt enable register
#define SCU_IEN0 (*(unsigned volatile char*)0x5000501C)       // Interrupt enable register     
#define SCU_IEN0_EA 7                                         // Are pending interrupt reqests blocked from core

/*
  GPIO registers   
*/
#define P0DIR (*(unsigned volatile char*)0x48028004)        // Port 0 Direction Register
#define P0DATA (*(unsigned volatile char*)0x48028000)       // Port 0 Data Register
#define GPIO_PIN 4                                          // Port 0 Pin 4

/*
  Timer registers   
*/
#define GPT1_T2CON (*(unsigned volatile short*)0x40010008)  // Timer T2 Control Register
#define GPT1_T2CON_T2M 3                                    // T2 Mode
#define GPT1_T2CON_T2I 0                                    // T2 Input parameter
#define GPT1_T2 (*(unsigned volatile short*)0x40010020)     // T2 Value Register
#define GPT1_T3CON (*(unsigned volatile short*)0x4001000C)  // Timer T3 Control Register
#define GPT1_T3CON_T3R 6                                    // T3 Run control       
#define GPT1_T3CON_T3UD 7                                   // T3 Up/Down control
#define GPT1_T3CON_BPS1 11                                  // Block prescaler
#define GPT1_T3 (*(unsigned volatile short*)0x40010024)     // T3 Value Register
#define GPT12IEN (*(unsigned volatile short*)0x5000515C)    // GPT12 Timer 1 interrupt enable register
#define GPT12IEN_T4 2                                       // Timer 4 interrupt enable
#define GPT12IEN_T3 1                                       // Timer 3 interrupt enable
#define GPT12IEN_T2 0                                       // Timer 2 interrupt enable
#define GPT12ICLR (*(unsigned volatile short*)0x50005164)   // Interrupt clear register
#define GPT12ICLR_T3C 1                                     // Timer 3 interrupt clear register

/*
  Clock registers   
*/
#define OSC_CON (*(unsigned volatile char*)0x500050B0)      // OSC Control Register
#define OSC_CON_OSCSS 0                                     // Oscillator Source Select
#define PLL_CON (*(unsigned volatile char*)0x50005044)      // PLL Control Register
#define PLL_CON_NDIV 4                                      // N-Divider
#define PLL_CON_VCOBYP 3                                    // VCO Bypass Mode Select
#define PLL_CON_RESLD 1                                     // Restart Lock Detection
#define PLL_CON_LOCK 0                                      // PLL Lock Status
#define CMCON1 (*(unsigned volatile char*)0x50005048)       // Clock Control Register 1
#define CMCON1_VCOSEL 7                                     // VCOSEL Setting
#define CMCON1_K1DIV 6                                      // K1-Divider
#define CMCON1_K2DIV 4                                      // K2-Divider
#define SYSCON0 (*(unsigned volatile char*)0x50005070)      // System Control Register 0
#define SYSCON0_SYSCLKSEL 6                                 // System Clock Select
#define PASSWD (*(unsigned volatile char*)0x500050AC)       // Password Register
#define PASSWD_PASS 3                                       // Password Bits