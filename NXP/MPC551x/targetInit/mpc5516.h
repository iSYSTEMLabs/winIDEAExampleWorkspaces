#ifndef __mpc5516_h__
#define __mpc5516_h__

void enterAndExitStopMode();
void enterAndExitSleepMode();
void enter_low_power_mode();

#define MCM_BASE        0xFFF40000
#define SIU_BASE        0xFFFE8000
#define CRP_BASE        0xFFFEC000
#define PLL_BASE        0xFFFF0000

#define SWTCR           (*((volatile unsigned short *)(MCM_BASE + 0x0016))) // Software Watchdog Timer Control Register
#define SIU_PCR_60      (*((volatile unsigned int *)(SIU_BASE + 0x00B8)))   // LED LD14 Pad Control Register
#define SIU_PCR_61      (*((volatile unsigned int *)(SIU_BASE + 0x00BA)))   // LED LD15 Pad Control Register
#define SIU_PCR_70      (*((volatile unsigned int *)(SIU_BASE + 0x00CC)))   // CLKOUT Pad Control Register
#define SIU_GPDO_60_63  (*((volatile unsigned int *)(SIU_BASE + 0x063C)))   // GPIO Pin Data Output register 60-63 (PD12-PD15)
#define SIU_ECCR        (*((volatile unsigned int *)(SIU_BASE + 0x0984)))   // External Clock Control Register 
#define SIU_SYSCLK      (*((volatile unsigned int *)(SIU_BASE + 0x09A0)))   // System Clock Register
#define CRP_Z0VEC       (*((volatile unsigned int *)(CRP_BASE + 0x0054)))   // Z0 Reset Vector Register
#define SYNSR           (*((volatile unsigned int *)(PLL_BASE + 0x0004)))   // PLL Synthesizer Status Register
#define ESYNCR1         (*((volatile unsigned int *)(PLL_BASE + 0x0008)))   // PLL Enhanced Synthesizer Control Register 1
#define ESYNCR2         (*((volatile unsigned int *)(PLL_BASE + 0x000C)))   // PLL Enhanced Synthesizer Control Register 2 
#define SIU_SYSCLK      (*((volatile unsigned int *)(SIU_BASE + 0x09A0)))   // System Clock Register

#define SIU_PCR_52      (*((volatile unsigned int *)(0xFFFE80A8)))   // LED LD4 Pad Control Register
#define SIU_PCR_52_55      (*((volatile unsigned int *)(0xFFFE8634)))   // gpio
void InterruptRoutine();
void InterruptHandler();
void GPIOPortToggle();
void InitGPIO();
void targetEnableInterrupts();
void ClrDISFlag();
void InitDIE();
#endif
