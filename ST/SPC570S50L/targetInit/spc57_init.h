/*****************************************************************
* PROJECT : 	
* FILE : 		spc57_init.h
*
* DESCRIPTION : ...
*
* COPYRIGHT :(c) year, Freescale & STMicroelectronics
*
* VERSION : 1.0
* DATE :    27.10.2013
* AUTHOR :  Giovanni D'Aquino
* HISTORY :
******************************************************************/
#ifndef _SPC57_INIT_H_
#define _SPC57_INIT_H_
#ifdef __cplusplus
extern "C" {
#endif

#include "typedefs.h"

/******************************************************************
| defines and macros (scope: module-local)
|-----------------------------------------------------------------*/
/* External Oscillator Clock: to be removed when IRC will be trimmed */

#define EXT_OSC_AUTO	

#define EXT_OSC				ExtOsc_40M 	//ExtOsc_8M

//#define _SYSCLK_ 			SYSCLK_160MHz

#define CORE_FREQUENCY 	(_SYSCLK_*1000000)

/* System Clock frequencies */
#define SYSCLK_200MHz		f200M
#define SYSCLK_180MHz		f180M
#define SYSCLK_160MHz		f160M
#define SYSCLK_150MHz		f150M
#define SYSCLK_120MHz		f120M
#define SYSCLK_100MHz		f100M
#define SYSCLK_90MHz		f90M
#define SYSCLK_80MHz		f80M
#define SYSCLK_64MHz		f64M
#define SYSCLK_60MHz		f60M
#define SYSCLK_50MHz		f50M
#define SYSCLK_32MHz		f32M
#define SYSCLK_16MHz		f16M

	
/* Output Clock Division Select/Auxiliary Clock Select Control Register 3 and 4 */
#define SELCTL_16MHz_IRC 	0x0			/* Internal RC Osc */
#define SELCTL_CRYSTAL_OSC 	0x1			/* External Osc */
#define SELCTL_PLL0			0x2 		/* PLL0 PHI */
#define SELCTL_PLL1			0x4     	/* PLL1 PHI*/


#ifndef ENABLED
#define ENABLED			    0x1
#endif
#ifndef DISABLED
#define DISABLED			0x0
#endif

#define RESET_MODE 			0
#define TEST_MODE 			1
#define SAFE_MODE 			2
#define DRUN_MODE 			3
#define RUN0_MODE 			4
#define RUN1_MODE 			5
#define RUN2_MODE 			6
#define RUN3_MODE 			7
#define HALT0_MODE 			8

#define STOP0_MODE 			10	

#define SWT_TIMEOUT			0x251C0		/* 9.5msec < 10 msec = PST (Process Safety Time) */
#define SWT_TIMEOUT_INIT	0x1555AC



#define    SPR_HID0			 1008		/* Hardware implementation dependent reg 0 */
#define    SPR_TBL_R		 268	 	/* Time base lower read only */
#define    SPR_TBL_W		 284		/* Time base lower write only */
#define    SPR_TBU_R		 269	 	/* Time base upper read only */
#define    SPR_TBU_W		 285		/* Time base upper write only */

#define UART_9600_BAUDRATE   1
#define UART_19200_BAUDRATE  2
#define UART_38400_BAUDRATE  3
#define UART_115200_BAUDRATE 4

// Uart baudrate
#define UART_BAUDRATE  UART_115200_BAUDRATE

#if ( defined(MCKINLEY) || defined(K2) )
/* LINFLEX2 directly linked to UART connector on motherboard */
#define PAD_LIN2_TXD 	62				/* PD14 as TX */
#define PAD_LIN2_RXD 	850 			/* PD15 as RX */

#elif defined(VELVETY)

#define PAD_LIN1_TXD 	8				/* PD8 as TX */
#define PAD_LIN1_RXD 	561				/* PD7 as RX */

#endif

#define PAD_LED_CORE0	42				/* PC[10]*/
#define PAD_LED_CORE1	43				/* PC[11]*/

#ifndef VELVETY
#define PAD_LED_CORE2	44				/* PC[12]*/
#else
#define PAD_LED_CORE2   0  				/* PA[0]*/
#endif

#ifndef VELVETY
#define PAD_SYSCLK1		15
#define PAD_SYSCLK0		88

#else
#define PAD_SYSCLK1		69				/* PE[5] */
#define PAD_SYSCLK0		69				/* PE[5] */
#endif

/* TCM Registers: used to handle Internal Core memories */
#define DMEMCFG0_REG	694
#define DMEMCTL0_REG	496
#define DMEMCTL1_REG	498

#define IMEMCFG0_REG	695
#define IMEMCTL0_REG	497
#define IMEMCTL1_REG	499
/******************************************************************
| typedefs and structures (scope: module-local)
|-----------------------------------------------------------------*/
typedef	enum { 
    Disabled = (1==0), 
    Enabled  = (1==1)
} tenActivation;

typedef enum {
    f240M = 240,
    f200M = 200,
    f180M = 180,	
    f160M = 160,	
    f150M = 150,	
    f120M = 120,
    f100M = 100,
    f90M = 90,    
    f80M = 80,	
    f75M = 75,	
    f64M = 64,
    f60M = 60,
    f50M = 50,	
    f48M = 48,
    f40M = 40,
    f32M = 32,
    f30M = 30,
	f20M = 20,
    f16M = 16,
    f8M = 8,
    f4M = 4,
    fmanual= 0xFF
} tenPllFreq;

typedef	enum { 
    CenterSpread = 1, 
    DownSpread = 0  
} tenPllModulation;

typedef enum {
    ExtOsc_4M = 4,			/* Four MHz External Clock */
    ExtOsc_8M = 8,			/* Eight MHz External Clock */
    ExtOsc_40M = 40			/* Forty MHz External Clock */
} tenExtOsc;

typedef enum {
    Pll0 = 0,
    Pll1 = 1,
    Bothplls = 2,
    Xosc = 3,
    Irc = 4
} tenClkSource;

typedef enum {
    DIVIDEBY1 = 0x0,
    DIVIDEBY2 = 0x1,
    DIVIDEBY3 = 0x2,	
    DIVIDEBY4 = 0x3,
    DIVIDEBY5 = 0x4,	
	DIVIDEBY6 = 0x5,
    DIVIDEBY7 = 0x6,
    DIVIDEBY8 = 0x7,
    DIVIDEBY9 = 0x8,	
    DIVIDEBY10 = 0x9,
	DIVIDEBY11 = 0xA,
    DIVIDEBY12 = 0xB,
    DIVIDEBY13 = 0xC,
    DIVIDEBY14 = 0xD,	
    DIVIDEBY15 = 0xE	
} tenDivFactor;

typedef enum {
    STM0 = 0,
    STM1 = 1,
    STM2 = 2
} tenSTM_mod;

typedef	enum { 
	STM_CH0 = 0,
	STM_CH1 = 1, 
	STM_CH2 = 2,
	STM_CH3 = 3,
} tenSTMChannel;


/******************************************************************
| exported variables
|-----------------------------------------------------------------*/
/******************************************************************
| exported function prototypes
|-----------------------------------------------------------------*/



/********************************************************************/
/*void UART_Init(void);
char sci_a_getchar (void);
void sci_a_putchar (char);


__farcall void FLASH_WS_Init(tenPllFreq ePllFreq);
void SRAM_WS_Init(tenPllFreq ePllFreq);


void INT_TIMER_Init(tenSTM_mod stm_mod, tenSTMChannel stm_channel);

void clock_reset(void);
tU32 clock(void);

void MCU_Init(void);
*/

#if (defined(MCKINKEY) || defined(K2))
void XBAR_Init(void);
void MPU_Init(void);
void MC_MODE_Init(void);
#endif



#if defined(MCKINLEY)
void MCKINLEY_Init(void);
#endif

#if defined(K2)
void K2_Init(void);
#endif



#ifdef __cplusplus
}
#endif
#endif /* _SPC57_INIT_H_ */
/* End of file */

