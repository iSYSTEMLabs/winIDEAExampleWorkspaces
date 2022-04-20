#ifndef SAML10_H_INCLUDED
#define SAML10_H_INCLUDED

// 1 Clock Registers
// 1.1 Oscillator Controller Registers
#define OSCCTRL_STATUS					(*(unsigned long volatile*)0x40001010)
#define OSCCTRL_EVCTRL					(*(unsigned char volatile*)0x40001010)

#define OSCCTRL_OSCM16CTRL 				(*(unsigned char volatile*)0x40001018)
#define OSCCTRL_OSCM16CTRL_ONDEMAND		7
#define OSCCTRL_OSCM16CTRL_FSEL			2
#define OSCCTRL_OSCM16CTRL_ENABLE		1

#define OSCCTRL_XOSCCTRL 				(*(unsigned short volatile*)0x40001014) // XOSC Clock
#define OSCCTRL_XOSCCTRL_ENABLE			1
#define OSCCTRL_XOSCCTRL_XTALEN			2
#define OSCCTRL_XOSCCTRL_CFDEN			3
#define OSCCTRL_XOSCCTRL_SWBACK			4
#define OSCCTRL_XOSCCTRL_ONDEMAND		7
#define OSCCTRL_XOSCCTRL_GAIN			8
#define OSCCTRL_XOSCCTRL_AMPGC			11
#define OSCCTRL_XOSCCTRL_STARTUP		12

#define OSCCTRL_DPLLCTRLA 				(*(unsigned char volatile*)0x4000102C) // DPLL Control A
#define OSCCTRL_DPLLCTRLA_ONDEMAND		7
#define OSCCTRL_DPLLCTRLA_ENABLE		1

#define OSCCTRL_DPLLRATIO 				(*(unsigned long volatile*)0x40001030) // DPLL Ratio Control

#define OSCCTRL_DPLLCTRLB 				(*(unsigned long volatile*)0x40001034) // DPLL Control B
#define OSCCTRL_DPLLCTRLB_DIV			16
#define OSCCTRL_DPLLCTRLB_REFCLK		4

#define OSCCTRL_DPLLPRESC 				(*(unsigned char volatile*)0x40001038)

#define OSCCTRL_DPLLSYNCBUSY			(*(unsigned char volatile*)0x4000103C)
#define SYNC_DPLLPRESC					3
#define SYNC_DPLLRATIO					2
#define SYNC_DPLLENABLE					1

#define OSCCTRL_DPLLSTATUS				(*(unsigned char volatile*)0x40001040)
#define DPLLSTATUS_CKRDY				1
#define DPLLSTATUS_LOCK					0

// 1.2 Generic Clock Registers
#define SYNCBUSY_GEN					(*(unsigned long volatile*)0x40001C04)
#define SYNC_GENCTRL0					2
#define SYNC_GENCTRL1					3

#define GENCTRL0 						(*(unsigned long volatile*)0x40001C20)
#define GENCTRL1 						(*(unsigned long volatile*)0x40001C24)
#define GENCTRL_GENEN					8
#define GENCTRL_SRC						0

#define PCHCTRL0 						(*(unsigned long volatile*)0x40001C80)
#define PCHCTRL15						(*(unsigned long volatile*)0x40001CBC)
#define PCHCTRL_CHEN					6
#define PCHCTRL_GEN						0

// 1.3 Oscillator32K Controller Registers
#define OSCCTRL32_XOSCCTRL32_STATUS		(*(unsigned long volatile*)0x4000140C)
#define STATUS_XOSC32KRDY 				0

#define OSCCTRL32_XOSCCTRL32			(*(unsigned short volatile*)0x40001414) // XSOC32K Clock
#define OSCCTRL32_XOSCCTRL32_STARTUP	8
#define OSCCTRL32_XOSCCTRL32_ONDEMAND	7
#define OSCCTRL32_XOSCCTRL32_EN32K		3
#define OSCCTRL32_XOSCCTRL32_XTALEN		2
#define OSCCTRL32_XOSCCTRL32_ENABLE		1


// 2 GPIO Registers
#define DIRSET					(*(unsigned char volatile*)0x40003008)
#define OUTTGL					(*(unsigned char volatile*)0x4000301C)


// 3 Interrupts
#define NVIC_ISER1				(*(unsigned long volatile*)0xE000E104)
#define NVIC_ISER1_ENABLE_TC2	4


// 4 Timer Registers
#define TC2_CTRLA				(*(unsigned long volatile*)0x42001800)
#define TC2_CTRLA_PRESCALER		8
#define TC2_CTRLA_PRESYNC		4
#define TC2_CTRLA_MODE			2
#define TC2_CTRLA_ENABLE		1

#define TC2_CTRLBSET			(*(unsigned char volatile*)0x42001805)
#define TC2_CTRLBSET_CMD		5

#define TC2_INTENSET			(*(unsigned char volatile*)0x42001809)
#define TC2_INTENSET_OVF		0

#define TC2_INTFLAG				(*(unsigned char volatile*)0x4200180A)

#define TC2_DBGCTRL				(*(unsigned char volatile*)0x4200180F)
#define TC2_DBGCTRL_DBGRUN		0

#define TC2_SYNCBUSY			(*(unsigned long volatile*)0x42001810)
#define TC2_SYNC_ENABLE				1

#define TC2_PER					(*(unsigned char volatile*)0x4200181B)
#define TC2_PERBUF				(*(unsigned char volatile*)0x4200182F)	


// 5 Power Manager
#define PM_PLCFG				(*(unsigned char volatile*)0x40000402)
#define PM_PLCFG_PLSEL			0


#endif
