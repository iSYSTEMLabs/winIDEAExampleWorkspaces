#include "Eiger_6M_header_beta5.h"

#define MC_ME_DRUN (*(unsigned volatile int*)0xF7FB802C)
#define MC_ME_MCTL (*(unsigned volatile int*)0xF7FB8004)
#define MC_RGM_DES (*(unsigned volatile int*)0xF7FA8000)
#define MC_RGM_FES (*(unsigned volatile int*)0xF7FA8300)
#define MC_ME_ME (*(unsigned volatile int*)0xF7FB8008)
#define MC_ME_RUN_PC0 (*(unsigned volatile int*)0xF7FB8080)
#define MC_ME_RUN_PC1 (*(unsigned volatile int*)0xF7FB8084)
#define MC_ME_RUN_PC2 (*(unsigned volatile int*)0xF7FB8088)
#define MC_ME_RUN_PC3 (*(unsigned volatile int*)0xF7FB808C)
#define MC_ME_RUN_PC4 (*(unsigned volatile int*)0xF7FB8090)
#define MC_ME_RUN_PC5 (*(unsigned volatile int*)0xF7FB8094)
#define MC_ME_RUN_PC6 (*(unsigned volatile int*)0xF7FB8098)
#define MC_ME_RUN_PC7 (*(unsigned volatile int*)0xF7FB809C)
#define MC_ME_GS (*(unsigned volatile int*)0xF7FB8000)
#define MC_ME_GS_MTRANS 27
#define MC_ME_GS_CURRENT_MODE 28
#define MC_ME_GS_XOSC 5
#define PLLDIG_PLL0DV (*(unsigned volatile int*)0xF7FB0108)
#define PLLDIG_PLL0DV_RFDPHI1 16
#define PLLDIG_PLL0DV_RFDPHI 27
#define PLLDIG_PLL0DV_PREDIV 12
#define PLLDIG_PLL0DV_MFD 0
#define PLLDIG_PLL0CR (*(unsigned volatile int*)0xF7FB0100)
#define PLLDIG_PLL0CR_CLKCFG 8
#define PLLDIG_PLL0SR (*(unsigned volatile int*)0xF7FB0104)
#define PLLDIG_PLL0SR_EXTPDF 7
#define CGM_AC3_SC (*(unsigned volatile int*)0xF7FB0860) 
#define CGM_AC3_SC_SELCTL 24
#define CGM_SC_DC0 (*(unsigned volatile int*)0xF7FB07E8)
#define CGM_SC_DC0_DIV 10
#define CGM_SC_DC1 (*(unsigned volatile int*)0xF7FB07EC)
#define CGM_SC_DC1_DIV 10
#define CGM_SC_DC2 (*(unsigned volatile int*)0xF7FB07F0)
#define CGM_SC_DC2_DIV 10
#define CGM_SC_DC3 (*(unsigned volatile int*)0xF7FB07F4)
#define CGM_SC_DC3_DIV 10
#define CGM_SC_DC4 (*(unsigned volatile int*)0xF7FB07F8)
#define CGM_SC_DC4_DIV 10
#define CGM_AC0_SC (*(unsigned volatile int*)0xF7FB0800)
#define CGM_AC0_SC_SELCTL 24
#define CGM_AC8_SC (*(unsigned volatile int*)0xF7FB0900)
#define CGM_AC8_SC_SELCTL 24
#define CGM_AC11_SC (*(unsigned volatile int*)0xF7FB0960)
#define CGM_AC11_SC_SELCTL 24
#define CGM_AC12_SC (*(unsigned volatile int*)0xF7FB0980)
#define CGM_AC12_SC_SELCTL 24
#define AC0_DC0 (*(unsigned volatile int*)0xF7FB0808) 
#define AC0_DC0_DE 31
#define AC0_DC0_DIV 16
#define AC0_DC1 (*(unsigned volatile int*)0xF7FB080C) 
#define AC0_DC1_DE 31
#define AC0_DC1_DIV 16
#define AC8_DC0 (*(unsigned volatile int*)0xF7FB0908) 
#define AC8_DC0_DE 31
#define AC8_DC0_DIV 16
#define AC11_DC0 (*(unsigned volatile int*)0xF7FB0968) 
#define AC11_DC0_DE 31
#define AC11_DC0_DIV 16
#define AC12_DC0 (*(unsigned volatile int*)0xF7FB0988) 
#define AC12_DC0_DE 31
#define AC12_DC0_DIV 16
#define AC12_DC1 (*(unsigned volatile int*)0xF7FB098C) 
#define AC12_DC1_DE 31
#define AC12_DC1_DIV 16
#define AC12_DC2 (*(unsigned volatile int*)0xF7FB0990) 
#define AC12_DC2_DE 31
#define AC12_DC2_DIV 16

#define PIT0_MCR (*(unsigned volatile int*)0xF7F84000)
#define PIT0_MCR_MDIS 1
#define PIT0_LDVAL0 (*(unsigned volatile int*)0xF7F84100)
#define PIT0_TCTRL0 (*(unsigned volatile int*)0xF7F84108)
#define PIT0_TCTRL0_TIE 1
#define PIT0_TCTRL0_TEN 0
#define PIT0_TFLG0 (*(unsigned volatile int*)0xF7F8410C)
#define PIT0_TFLG0_TIF 0

#define INTC_PSR226 (*(unsigned volatile short*)0xF4044224) 
#define INTC_PSR226_PRI 0
#define INTC_CPR0 (*(unsigned volatile int*)0xF4044010)
#define INTC_CPR0_PRI 0
#define INTC_IACKR0 (*(unsigned volatile int*)0xF4044020)
#define SIUL2_MSCR_IO0 (*(unsigned volatile int*)0xF7FC0240)
#define SIUL2_MSCR_IO0_IBE 19
#define SIUL2_MSCR_IO0_ODC 24 
#define SIUL2_MSCR_IO0_WPUE 16
#define SIUL2_GPDO0 (*(unsigned volatile char*)0xF7FC1300)
#define SIUL2_GPDO0_PDO 0