#ifndef __TriCore_h__
#define __TriCore_h__

#define CBS_OCNTRL *(unsigned volatile int*) 0XF000047C
#define PC1 *(unsigned volatile int*) 0xF883FE08
#define CPU1_SYSCON *(unsigned volatile int*) 0xF883FE14

#define LOOP_DELAY                0xFFFE
#define GPT120_T3_SRC_PRIORITY    0x0001

/* Watchdog registers */
#define SCU_WDTSCON0              (*(unsigned long volatile *)0xF00362A8)
#define SCU_WDTSCON0_PW           2
#define SCU_WDTSCON0_LCK          1
#define SCU_WDTSCON0_ENDINIT      0
#define SCU_WDTSCON1              (*(unsigned long volatile *)0xF00362AC)
#define SCU_WDTSCON1_DR           3
#define SCU_WDTCPU0CON1           (*(unsigned long volatile *)0xF0036250)
#define SCU_WDTCPU0CON1_DR        3
#define SCU_WDTCPU0CON0           (*(unsigned long volatile *)0xF003624C)
#define SCU_WDTCPU0CON0_PW        2
#define SCU_WDTCPU0CON0_LCK       1
#define SCU_WDTCPU0CON0_ENDINIT   0

#define SRC_GPT120T3    *((unsigned volatile long*) 0xF00382E8)

#define GPT120_CLC      *((unsigned volatile long*) 0xF0001800)
#define GPT120_T3       *((unsigned volatile long*) 0xF0001838)
#define GPT120_T4       *((unsigned volatile long*) 0xF000183C)
#define GPT120_T3CON    *((unsigned volatile long*) 0xF0001814)
#define GPT120_T4CON    *((unsigned volatile long*) 0xF0001818)

#define SCU_OSCCON      *((unsigned volatile long*) 0xF0036010)
#define SCU_SYSPLLSTAT  *((unsigned volatile long*) 0xF0036014)
#define SCU_SYSPLLCON0  *((unsigned volatile long*) 0xF0036018)
#define SCU_SYSPLLCON1  *((unsigned volatile long*) 0xF003601C)
#define SCU_SYSPLLCON2  *((unsigned volatile long*) 0xF0036020)
#define SCU_PERPLLSTAT  *((unsigned volatile long*) 0xF0036024)
#define SCU_PERPLLCON0  *((unsigned volatile long*) 0xF0036028)
#define SCU_PERPLLCON1  *((unsigned volatile long*) 0xF003602C)
#define SCU_CCUCON0     *((unsigned volatile long*) 0xF0036030)
#define SCU_CCUCON1     *((unsigned volatile long*) 0xF0036034)
#define SCU_FDR         *((unsigned volatile long*) 0xF0036038)
#define SCU_EXTCON      *((unsigned volatile long*) 0xF003603C)
#define SCU_CCUCON2     *((unsigned volatile long*) 0xF0036040)
#define SCU_CCUCON3     *((unsigned volatile long*) 0xF0036044)
#define SCU_CCUCON4     *((unsigned volatile long*) 0xF0036048)
#define SCU_CCUCON5     *((unsigned volatile long*) 0xF003604C)
#define SCU_CCUCON6     *((unsigned volatile long*) 0xF0036080)
#define SCU_CCUCON7     *((unsigned volatile long*) 0xF0036084)
#define SCU_CCUCON8     *((unsigned volatile long*) 0xF0036088)
#define SCU_CCUCON9     *((unsigned volatile long*) 0xF003608C)
#define SCU_CCUCON10    *((unsigned volatile long*) 0xF0036090)
#define SCU_CCUCON11    *((unsigned volatile long*) 0xF0036094)

#define P_P20_OUT       *((unsigned volatile long*) 0xF003B400)
#define P_P20_OMR       *((unsigned volatile long*) 0xF003B404)
#define P_P20_IOCR8     *((unsigned volatile long*) 0xF003B418)

#define SCU_OSCCON_OSCRES       0x00000002
#define SCU_OSCCON_MODE_0       0x00000020
#define SCU_OSCCON_MODE_1       0x00000040
#define SCU_OSCCON_OSCVAL_0     0x00010000
#define SCU_OSCCON_OSCVAL_1     0x00020000
#define SCU_OSCCON_OSCVAL_2     0x00040000
#define SCU_OSCCON_OSCVAL_3     0x00080000

#define SCU_OSCCON_PLLLV        0x00000002
#define SCU_OSCCON_PLLHV        0x00000100


#define SCU_SYSPLLSTAT_LOCK     0x00000004
#define SCU_SYSPLLSTAT_K2RDY    0x00000020

#define SCU_PERPLLSTAT_LOCK     0x00000004

#define SCU_SYSPLLCON0_INSEL_0  0x40000000
#define SCU_SYSPLLCON0_INSEL_1  0x80000000

#define SCU_SYSPLLCON0_PLLPWD   0x00010000
#define SCU_SYSPLLCON1_K2DIV    0x00000007
#define SCU_SYSPLLCON1_K2DIV_0  0x00000001
#define SCU_SYSPLLCON1_K2DIV_1  0x00000002
#define SCU_SYSPLLCON1_K2DIV_2  0x00000004

#define SCU_PERPLLCON0_PLLPWD   0x00010000

#define SCU_PERPLLCON1_K2DIV    0x00000007
#define SCU_PERPLLCON1_K2DIV_0  0x00000001
#define SCU_PERPLLCON1_K2DIV_1  0x00000002
#define SCU_PERPLLCON1_K2DIV_2  0x00000004

#define SCU_PERPLLCON1_K3DIV    0x00000700
#define SCU_PERPLLCON1_K3DIV_0  0x00000100
#define SCU_PERPLLCON1_K3DIV_1  0x00000200
#define SCU_PERPLLCON1_K3DIV_2  0x00000400

#define SCU_CCUCON0_CLKSEL_0    0x10000000
#define SCU_CCUCON0_CLKSEL_1    0x20000000
#define SCU_CCUCON0_UP          0x40000000
#define SCU_CCUCON0_LCK         0x80000000

#define GPT120_CLC_DISR         0x00000001
#define GPT120_CLC_DISS         0x00000002

#define GPT120_T3CON_T3R        0x00000040
#define GPT120_T3CON_T3OTL      0x00000400
#define GPT120_T3CON_BPS1_0     0x00000800
#define GPT120_T3CON_BPS1_1     0x00001000

#define GPT120_T4CON_T4M_0      0x00000008
#define GPT120_T4CON_T4M_1      0x00000010
#define GPT120_T4CON_T4M_2      0x00000020

#define GPT120_T4CON_T4I_0      0x00000001
#define GPT120_T4CON_T4I_1      0x00000002
#define GPT120_T4CON_T4I_2      0x00000004

#define P_P20_OMR_PCL11         0x08000000
#define P_P20_OMR_PS11          0x00000800
#define P_P20_OUT_P11           0x00000800

#define SRC_GPT120T3_SRNPN0     0x00000001
#define SRC_GPT120T3_SRNPN1     0x00000002
#define SRC_GPT120T3_SRNPN2     0x00000004
#define SRC_GPT120T3_SRNPN3     0x00000008
#define SRC_GPT120T3_SRNPN4     0x00000010
#define SRC_GPT120T3_SRNPN5     0x00000020
#define SRC_GPT120T3_SRNPN6     0x00000040
#define SRC_GPT120T3_SRNPN7     0x00000080

#define SRC_GPT120T3_SRE        0x00000400



void delayLoop(unsigned int);

#endif



