
/*
  Clock registers
*/

#define SCU_CLKSEL (*(unsigned volatile int*)0x48004000)      //System Clock Select Register
#define SELSYS0  0                                            //System Clock fsys0 Select     10 for PLL0_CLK
#define SELSYS1  2                                            //System Clock fsys1 Select
#define SCU_NMICON (*(unsigned volatile int*)0x48004044)      //NMI Control Register
#define NMIPLL0EN 1                                           //PLL0 Loss of Lock NMI Enable
#define NMIPLL1EN 2                                           //PLL1 Loss of Lock NMI Enable

#define PLL_CON0 (*(unsigned volatile int*)0x48008000)        //PLL0 Control Register
#define PLL_CON1 (*(unsigned volatile int*)0x48008004)        //PLL1 Control Register
#define PLL_INSEL 20                                          //PLL Reference Clock Select    
#define PLL_PDIV  8                                           //P-Divider Setting
#define PLL_K2DIV 16                                          //K2-Divider Setting
#define PLL_NDIV  0                                           //N-Divider setting
#define PLL_EN 31                                             //PLL Enable
#define PLL_FREERUN 24                                        //Freerunning Mode Select
#define RESLD 25                                              //Lock Detection Reset
#define PLL_SPCTR (*(unsigned volatile int*)0x48008008)       //PLL NDIV Spread Control Register
#define SPUPVAL1 22                                           //PLL1 NDIV Spread Update Interval
#define SPUPVAL0  6                                           //PLL0 NDIV Spread Update Interval 
#define SPRANGE0 4                                            //PLL0 NDIV Spread Range Value 
#define SPRANGE1 20                                           //PLL1 NDIV Spread Range Value 
#define SPEN1 0                                               //NDIV PLL1 Spread Enable
#define SPEN0 0                                               //NDIV PLL0 Spread Enable

#define PLL_STAT (*(unsigned volatile int*)0x4800800C)        //PLL Status Register
#define LCK0 0                                                //Lock Status PLL 0
#define LCK1 1                                                //Lock Status PLL 1

#define PLL_STATC (*(unsigned volatile int*)0x48008010)       //PLL Status Clear Register
#define PLL0_LOL_STSCLR 0                                     //PLL0 Loss of Lock Status Clear
#define NMISRC (*(unsigned volatile int*)0x48000404C)         //NMI Status Clear Register
#define NMIPLL0CLR 0                                          //PLL0 Loss of Lock NMI Status Clear

/*
  SYSTEM TIMER registers
*/
#define SYSTICK_CUR (*(unsigned volatile int*)0xE000E018)     //SysTick Current Value
#define SYSTICK_RL (*(unsigned volatile int*)0xE000E014)      //SysTick Reload Value register
#define SYSTICK_CS (*(unsigned volatile int*)0xE000E010)      //SysTick Control and Status register

#define TICKINT 1                                             //TICKINT
#define CLKSOURCE 2                                           //CLK SysTick timer clock source selection
#define COUNTFLAG 16                                          //Count Flag
#define ENABLE 0                                              //SysTick counter enable


/*
  GPT12 Timer registers
*/
#define T3CON (*(unsigned volatile int*)0x4001400C)           //Timer T3 Control register
#define CAPREL (*(unsigned volatile int*)0x4001401C)          //Capture/Reload register
#define T3_CNTREG (*(unsigned volatile int*)0x40014024)       //Timer T3 Count register

#define T3M 3                                                 //Timer T3 Input Mode Control
#define T3R 6                                                 //Timer T3 Input Run Bit
#define T3UD  7                                               //Timer T3 Up/down Control bit
#define BPS1 11                                               //GPT1 Block Prescaler Control


/*
  GPIO registers
*/
#define GPIO_P0_DIR (*(unsigned volatile int*)0x4803000C)     //Port 1 direction control
#define P0_OUT (*(unsigned volatile int*)0x48030000)          //Port 0 output register
#define DIR1 1                                                //Pin 1 direction LED on P0.1...LED0.1
#define PO1 1                                                 //Pin 1 Output bit

/*
  INTERRUPT registers
*/
#define GPTIEN (*(unsigned volatile int*)0x4800407C)          //General Purpose Timer 12 Interrupt Enable Register
#define GPTIS (*(unsigned volatile int*)0x48004080)           //General Purpose Timer 12 Interrupt Status Register
#define GPTISC (*(unsigned volatile int*)0x48004084)          //General Purpose Timer 12 Interrupt Status Clear Register
#define NVIC_ISER (*(unsigned volatile int*)0xE000E100)       //Interrupt Set-Enable
#define NVIC_IPR1 (*(unsigned volatile int*)0xE000E404)       //Interrupt Priority register
#define GPT1T3EN 1                                            //General Purpose Timer 1 T3 Interrupt ENABLE
#define GPT1T3  1                                             //General Purpose Timer 1 T3 Interrupt status
#define GPT1T3CLR 1                                           //General Purpose Timer 1 T3 Interrupt Status Clear
#define IRQEN7 7                                              //IRQx interrupt enable
#define PRI_N7 27                                             //IRQx interrupt priority
  
