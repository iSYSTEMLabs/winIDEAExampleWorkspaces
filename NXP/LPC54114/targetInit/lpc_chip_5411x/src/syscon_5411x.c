/*
 * @brief LPC5411X System & Control driver
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2014
 * All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * LPC products.  This software is supplied "AS IS" without any warranties of
 * any kind, and NXP Semiconductors and its licenser disclaim any and
 * all warranties, express or implied, including all implied warranties of
 * merchantability, fitness for a particular purpose and non-infringement of
 * intellectual property rights.  NXP Semiconductors assumes no responsibility
 * or liability for the use of the software, conveys no license or rights under any
 * patent, copyright, mask work right, or any other intellectual property rights in
 * or to any products. NXP Semiconductors reserves the right to make changes
 * in the software without notification. NXP Semiconductors also makes no
 * representation or warranty that such application will be suitable for the
 * specified use without further testing or modification.
 *
 * @par
 * Permission to use, copy, modify, and distribute this software and its
 * documentation is hereby granted, under NXP Semiconductors' and its
 * licensor's relevant copyrights in the software, without fee, provided that it
 * is used in conjunction with NXP Semiconductors microcontrollers.  This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#include "chip.h"

/*****************************************************************************
 * Private types/enumerations/variables
 ****************************************************************************/
/* Reserved bits in CPU control - these must be set when writing to the
   CPUCTRL register. */
#define CPUCTRL_SETMASK     (0xc0c40000)

/* CPU control and status definitions for M0 and M4 cores */
#define MC_M4_BOOT              (1 << 0)	/*!< Determines which CPU is considered the master, 0 = CM0+, 1 = CM4 */
#define MC_CM4_CLK_ENABLE       (1 << 2)	/*!< Cortex-M4 clock enable */
#define MC_CM0_CLK_ENABLE       (1 << 3)	/*!< Cortex-M0+ clock enable */
#define MC_CM4_RESET_ENABLE     (1 << 4)	/*!< Cortex-M4 reset */
#define MC_CM0_RESET_ENABLE     (1 << 5)	/*!< Cortex-M0+ reset */
#define MC_CM4_SLEEPCON_OWNER   (1 << 6)	/*!< Identifies the owner of reduced power mode control, 0 = CM0+, 1 = CM4 */

/*****************************************************************************
 * Public types/enumerations/variables
 ****************************************************************************/

/*****************************************************************************
 * Private functions
 ****************************************************************************/

/*****************************************************************************
 * Public functions
 ****************************************************************************/

/* Set source for non-maskable interrupt (NMI) */
void Chip_SYSCON_SetNMISource(uint32_t intsrc)
{
	uint32_t reg;

	reg = LPC_SYSCON->NMISRC;
#if defined(CORE_M4)
	reg &= ~SYSCON_NMISRC_M4_ENABLE;
#else
	reg &= ~SYSCON_NMISRC_M0_ENABLE;
	intsrc = (intsrc << 8);
#endif

	/* First write without NMI bit, and then write source */
	LPC_SYSCON->NMISRC = reg;
	LPC_SYSCON->NMISRC = reg | intsrc;
}

/* Enable interrupt used for NMI source */
void Chip_SYSCON_EnableNMISource(void)
{
#if defined(CORE_M4)
	LPC_SYSCON->NMISRC |= SYSCON_NMISRC_M4_ENABLE;
#else
	LPC_SYSCON->NMISRC |= SYSCON_NMISRC_M0_ENABLE;
#endif
}

/* Disable interrupt used for NMI source */
void Chip_SYSCON_DisableNMISource(void)
{
#if defined(CORE_M4)
	LPC_SYSCON->NMISRC &= ~SYSCON_NMISRC_M4_ENABLE;
#else
	LPC_SYSCON->NMISRC &= ~SYSCON_NMISRC_M0_ENABLE;
#endif
}

/* Enable or disable asynchronous APB bridge and subsystem */
void Chip_SYSCON_Enable_ASYNC_Syscon(bool enable)
{
	if (enable) {
		LPC_SYSCON->ASYNCAPBCTRL = 0x01;
	}
	else {
		LPC_SYSCON->ASYNCAPBCTRL = 0x00;
	}
}

/* Returns the computed value for a frequency measurement cycle */
uint32_t Chip_SYSCON_GetCompFreqMeas(uint32_t refClockRate)
{
	uint32_t capval;
	uint64_t clkrate = 0;

	/* Get raw capture value */
	capval = Chip_SYSCON_GetRawFreqMeasCapval();

	/* Limit CAPVAL check */
	if (capval > 2) {
		clkrate = (((uint64_t) capval - 2) * (uint64_t) refClockRate) / 0x4000;
	}

	return (uint32_t) clkrate;
}

void Chip_SYSCON_PowerUp(uint32_t powerupmask)
{
	/* If turning the PLL back on, perform the following sequence to accelerate PLL lock */
	if (powerupmask & SYSCON_PDRUNCFG_PD_SYS_PLL) {
		volatile uint32_t delayX;
		uint32_t maxCCO = (1 << 18) | 0x5dd2; /* CCO = 1.6Ghz + MDEC enabled*/
		uint32_t curSSCTRL = LPC_SYSCON->SYSPLLSSCTRL[0] & ~(1 << 17);

		/* Initialize  and power up PLL */
		LPC_SYSCON->SYSPLLSSCTRL[0] = maxCCO;
		LPC_SYSCON->PDRUNCFGCLR[0] = SYSCON_PDRUNCFG_PD_SYS_PLL;

		/* Set mreq to activate */
		LPC_SYSCON->SYSPLLSSCTRL[0] = maxCCO | (1 << 17);

		/* Delay for 72 uSec @ 12Mhz */
		for (delayX = 0; delayX < 172; ++delayX) {}

		/* clear mreq to prepare for restoring mreq */
		LPC_SYSCON->SYSPLLSSCTRL[0] = curSSCTRL;

		/* set original value back and activate */
		LPC_SYSCON->SYSPLLSSCTRL[0] = curSSCTRL | (1 << 17);
	}

	/* Enable peripheral states by setting low */
	LPC_SYSCON->PDRUNCFGCLR[0] = powerupmask;
}

/* Determine if this core is a slave or master */
bool Chip_CPU_IsMasterCore(void) {
	/* M4 core is designated by values 0xC24 on bits 15..4 */
	if (Chip_CPU_IsM4Core()) {
		/* Running on M4 core */
		if ((LPC_SYSCON->CPUCTRL & MC_M4_BOOT) != 0) {
			/* Running on M4 and M4 is master */
			return true;
		}
		else {
			/* Running on M4 and M0 is master */
			return false;
		}
	}
	else {
		/* Running on M0 core */
		if ((LPC_SYSCON->CPUCTRL & MC_M4_BOOT) != 0) {
			/* Running on M0 and M4 is master */
			return false;
		}
	}

	/* Running on M0 and M0 is master */
	return true;
}

/* Setup M0+ boot and reset M0+ core */
void Chip_CPU_CM0Boot(uint32_t *coentry, uint32_t *costackptr)
{
#define M0_STACK_REG  (*(volatile uint32_t *)
	uint32_t temp;

	/* Setup M0+ stack and M0+ boot location */
	LPC_SYSCON->CPSTACK = (uint32_t) costackptr;
	LPC_SYSCON->CPBOOT =  (uint32_t) coentry;

	temp = LPC_SYSCON->CPUCTRL | CPUCTRL_SETMASK | MC_CM0_CLK_ENABLE;

	/* Enable M0+ clocking with reset asserted */
	LPC_SYSCON->CPUCTRL = temp | MC_CM0_RESET_ENABLE;

	/* De-assert reset on M0+ */
	LPC_SYSCON->CPUCTRL = temp;
}

/* Setup M4 boot and reset M4 core */
void Chip_CPU_CM4Boot(uint32_t *coentry, uint32_t *costackptr)
{
	uint32_t temp;

	/* Setup M0+ stack and M0+ boot location */
	LPC_SYSCON->CPSTACK = (uint32_t) costackptr;
	LPC_SYSCON->CPBOOT =  (uint32_t) coentry;

	temp = LPC_SYSCON->CPUCTRL | CPUCTRL_SETMASK | MC_CM4_CLK_ENABLE;

	/* Enable M4 clocking with reset asserted */
	LPC_SYSCON->CPUCTRL = temp | MC_CM4_RESET_ENABLE;

	/* De-assert reset on M4 */
	LPC_SYSCON->CPUCTRL = temp;
}

/* Select master core and system power control ownership */
void Chip_CPU_SelectMasterCore(CORESELECT_T master, CORESELECT_T ownerPower)
{
	uint32_t temp;

	/* Mask off master and power selection bits */
	temp = LPC_SYSCON->CPUCTRL & ~(MC_M4_BOOT | MC_CM4_SLEEPCON_OWNER);
	temp |= CPUCTRL_SETMASK;

	/* Select master and power ownership cores */
	if (master) {
		/* M4 core is the master */
		temp |= MC_M4_BOOT;
	}
	if (ownerPower) {
		/* M4 core is the power control owner */
		temp |= MC_CM4_SLEEPCON_OWNER;
	}

	/* Set new states without adjusting other states */
	LPC_SYSCON->CPUCTRL = temp;
}
