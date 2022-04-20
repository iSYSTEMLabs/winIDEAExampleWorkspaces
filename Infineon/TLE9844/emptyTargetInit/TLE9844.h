/*
  Interrupt registers   
*/
#define INT_0_31_SET_EN (*(unsigned volatile int*)0xE000E100) // Cortex M interrupt enable register
#define SCU_IEN0 (*(unsigned volatile int*)0x5000501C)       // Interrupt enable register     
#define SCU_IEN0_EA 31                                        // Are pending interrupt reqests blocked from core

/*
  GPIO registers   
*/
#define P0DIR (*(unsigned volatile int*)0x48028004)        // Port 0 Direction Register
#define P0DATA (*(unsigned volatile int*)0x48028000)       // Port 0 Data Register
#define GPIO_PIN 4                                          // Port 0 Pin 4

/*
  Timer registers   
*/
#define GPT1_T3CON (*(unsigned volatile int*)0x4001000C)  // Timer T3 Control Register
#define GPT1_T3CON_T3R 6                                    // T3 Run control       
#define GPT1_T3CON_T3UD 7                                   // T3 Up/Down control
#define GPT1_T3CON_BPS1 11                                  // Block prescaler
#define GPT1_T3 (*(unsigned volatile int*)0x40010024)     // T3 Value Register
#define GPT12IEN (*(unsigned volatile int*)0x5000515C)    // GPT12 Timer 1 interrupt enable register
#define GPT12IEN_T4 2                                       // Timer 4 interrupt enable
#define GPT12IEN_T3 1                                       // Timer 3 interrupt enable
#define GPT12IEN_T2 0                                       // Timer 2 interrupt enable
#define GPT12ICLR (*(unsigned volatile int*)0x50005180)   // Interrupt clear register
#define GPT12ICLR_T3C 1                                     // Timer 3 interrupt clear register

/*
  Clock registers   
*/
#define PLL_CON (*(unsigned volatile int*)0x50005044)      // PLL Control Register
#define PLL_CON_NDIV 4                                      // N-Divider
#define PLL_CON_VCOBYP 3                                    // VCO Bypass Mode Select
#define PLL_CON_RESLD 1                                     // Restart Lock Detection
#define PLL_CON_LOCK 0                                      // PLL Lock Status
#define CMCON1 (*(unsigned volatile char*)0x50005048)       // Clock Control Register 1
#define CMCON1_K2DIV 4                                      // K2-Divider
#define CMCON1_PDIV 8
#define PASSWD (*(unsigned volatile char*)0x500050AC)       // Password Register
#define PASSWD_PASS 3                                       // Password Bits