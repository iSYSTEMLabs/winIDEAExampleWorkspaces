/**
 * @file sta_src_a7.h
 * @brief System Reset Controller Application Processor header file
 *
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */

#ifndef _STA_SRC_A7_H_
#define _STA_SRC_A7_H_

#include "utils.h"

#include "sta_type.h"
#include "sta_map.h"

/**
 * SRC A7 clocks
 */
enum srca7_0_clks {
	HCLKDMA0 = 0,	/**< start of the bank #0, pcken0/pckdis0 */
	HCLKDMA1,
	HCLKFSMC,
	HCLKSSP0,
	HCLKCLCD,
	PCLKSSP1,
	PCLKSSP2,
	PCLKSDI0,
	PCLKSDMMC1,
	PCLKI2C1,
	PCLKI2C2,
	PCLKUART1,
	PCLKUART2,
	PCLKUART3,
	PCLKHSEM,
	HCLKGAE,
	HCLKVIP,
	HCLKUSB,
	PCLK_APB_REG,
	PCLKSARADC,
	PCLKSMSP0,
	PCLKSMSP1,
	PCLKSMSP2,
	PCLKCDSUBSYS,
	HCLKGFX,
	PCLKETH,
	HCLKC3,
	/* unused */
	ACLKDDRC = 28,
	ACLKA7,
	PCLKI2C0,
	PCLKUART0,
	MAX_SRCA7_0_CLK,
	PCLKSDMMC2 = MAX_SRCA7_0_CLK,	/**< start of the bank #1, pcken1/pckdis1 */
	TRACECLK_M3,
	TRACECLK_A7,
	ATCLK_A7,
	ATCLK_DBG,
	PCLKDDRCTRL,
	ACLKGFX,
	MAX_SRCA7_1_CLK,
};

/**
  * @brief  changes the state of a given clock
  * @param	src: current SRC AP device
  * @param	pclk: the clock to be updated
  * @param	enable: true to enable it, false otherwise
  * @retval 0 if no error, not 0 otherwise
  */
int srca7_pclk_change_state(t_src_a7 *src, unsigned int pclk, bool enable);

/**
  * @brief  disables all pclk
  * @param	src: current SRC AP device
  * @retval None
  */
void srca7_pclk_disable_all(t_src_a7 *src);

/**
  * @brief  enables all pclk
  * @param	src: current SRC AP device
  * @retval None
  */
void srca7_pclk_enable_all(t_src_a7 *src);

/**
  * @brief  updates frequency parameters for the pll3
  * @param	src: current SRC AP device
  * @param	pll refer to @srcm3_plls
  * @param	odf: output divison factor (0..15)
  * @param	fractl: enable/disable fractionnal control
  * @param	dither: enable/disable dither
  * @retval 0 if no error, not 0 otherwise
  */
int srca7_pll3_update_freq(t_src_a7 *src, int odf, bool fractl, bool dither);

/**
  * @brief  initialize SRC AP controller
  * @param	src: current SRC AP device
  */
void srca7_init(t_src_a7 *src);

#endif /* _STA_SRC_A7_H_ */
