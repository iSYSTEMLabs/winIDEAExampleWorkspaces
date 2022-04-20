/*
 * @brief LPC5411X DMIC driver declarations and functions
 *
 * @note
 * Copyright(C) NXP Semiconductors, 2015
 * All rights reserved.
 *
 * @par
 * Software that is described herein is for illustrative purposes only
 * which provides customers with programming information regarding the
 * LPC products.  This software is supplied "AS IS" without any warranties of
 * any kind, and NXP Semiconductors and its licensor disclaim any and
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
 * is used in conjunction with NXP Semiconductors microcontrollers.	 This
 * copyright, permission, and disclaimer notice must appear in all copies of
 * this code.
 */

#ifndef __DMIC_5411X_H
#define __DMIC_5411X_H

#ifdef __cplusplus
extern "C" {
#endif

/** @defgroup DMIC_5411X CHIP: LPC5411X DMIC driver
 * @ingroup CHIP_5411X_DRIVERS
 * @{
 */

typedef struct {
	__IO uint32_t OSR;						// 0x00
	__IO uint32_t DIVHFCLK;					// 0x04
	__IO uint32_t PREAC2FSCOEF;				// 0x08
	__IO uint32_t PREAC4FSCOEF;				// 0x0c
	__IO uint32_t GAINSHFT;					// 0x10
	__IO uint32_t TDM96EN;					// 0x14
	__IO uint32_t TDM19EN;					// 0x18
	__IO uint32_t reserved[25];
	__IO uint32_t FIFO_CTRL;				// 0x80
	__IO uint32_t FIFO_STATUS;				// 0x84
	__IO uint32_t FIFO_DATA;				// 0x88
	__IO uint32_t PHY_CTRL;					// 0x8C
	__IO uint32_t DC_CTRL;					// 0x90
	__IO uint32_t reserved1[27];
} LPC_DMIC_Channel_Type;


typedef struct {
	__IO LPC_DMIC_Channel_Type CHANNEL[15];	// 0x000 - 0xefc  with 0x100 per channel
	// common
	__IO uint32_t CHANEN;						// 0xf00
	__IO uint32_t reserved0[2];					// 0xf04 - 0xf08
	__IO uint32_t IOCFG;						// 0xf0C
	__IO uint32_t USE2FS;						// 0xf10
	__IO uint32_t reserved[27];					// 0xf14 - 0xf7c
	// HWVAD
	__IO uint32_t HWVADGAIN;					// 0xf80
	__IO uint32_t HWVADHPFS;					// 0xf84
	__IO uint32_t HWVADST10;					// 0xf88
	__IO uint32_t HWVADRSTT;					// 0xf8c
	__IO uint32_t HWVADTHGN;					// 0xf90
	__IO uint32_t HWVADTHGS;					// 0xf94
	__IO uint32_t HWVADLOWZ;					// 0xf98
	__IO uint32_t reserved1[24];				// 0xf9c - 0xff8
	__O uint32_t ID;							// 0xffc
} LPC_DMIC_T;

/**
 * @brief	DMIC statistics structure
 * @note
 * Maintains current DMIC statistics.
 */
typedef struct {
	uint32_t		fifo_ints;				/*!< count: FIFO interrupts */
	uint32_t		fifo_overrun;			/*!< count: FIFO over-run errors */
	uint32_t		fifo_underrun;			/*!< count: FIFO under-run errors */
} DMIC_STATISTICS_T;


// INFREQ SEL selection
//
//	OSR		Infreq SEL
// -------------------------
//	16	 ->	  0
//	32	 ->	  1
//	64	 ->	  2
//	128	 ->	  3
//	256	 ->	  4
//	512	 ->	  5

// FIFO CTRL bits
#define DMIC_FIFO_ENABLE_P			0
#define DMIC_FIFO_RESETN_P			1
#define DMIC_FIFO_INTREN_P			2
#define DMIC_FIFO_DMAEN_P			3

#define DMIC_FIFO_TLVL_P			16

#define DMIC_FIFO_ENABLE			(1<<DMIC_FIFO_ENABLE_P)
#define DMIC_FIFO_RESETN			(1<<DMIC_FIFO_RESETN_P)
#define DMIC_FIFO_INTREN			(1<<DMIC_FIFO_INTREN_P)
#define DMIC_FIFO_DMAEN				(1<<DMIC_FIFO_DMAEN_P )

// FIFO STATUS bits
#define DMIC_FIFO_INT_P				0
#define DMIC_FIFO_OVERRUN_P			1
#define DMIC_FIFO_UNDERRUN_P		2

#define DMIC_FIFO_INT				(1<<DMIC_FIFO_INT_P		)
#define DMIC_FIFO_OVERRUN			(1<<DMIC_FIFO_OVERRUN_P )
#define DMIC_FIFO_UNDERRUN			(1<<DMIC_FIFO_UNDERRUN_P)

// PHY CTRL bits
#define DMIC_PHY_FALL_P				0
#define DMIC_PHY_HALF_P				1

#define DMIC_PHY_FALL				(1<<DMIC_PHY_FALL_P)
#define DMIC_PHY_HALF				(1<<DMIC_PHY_HALF_P)

// DC Block ctrl

#define DMIC_DCPOLE_P				0
#define DMIC_DCGAIN_REDUCE_P		4
#define DMIC_SATURATE_AT16BIT_P		8

/* note that the polling mode can be achieved without the driver, it is in
any way not recommended due to its overhead, this link should normally use dma or irq */
typedef enum {
	DMIC_OP_POLL,
	DMIC_OP_INTR,
	DMIC_OP_DMA,
} OP_MODE_T;

typedef enum {
	DMIC_LEFT			= 0,
	DMIC_RIGHT			= 1,
} STEREO_SIDE_T;

typedef enum {
	DMIC_PDM_DIV1		= 0,
	DMIC_PDM_DIV2		= 1,
	DMIC_PDM_DIV3		= 2,
	DMIC_PDM_DIV4		= 3,
	DMIC_PDM_DIV6		= 4,
	DMIC_PDM_DIV8		= 5,
	DMIC_PDM_DIV12		= 6,
	DMIC_PDM_DIV16		= 7,
	DMIC_PDM_DIV24		= 8,
	DMIC_PDM_DIV32		= 9,
	DMIC_PDM_DIV48		= 10,
	DMIC_PDM_DIV64		= 11,
	DMIC_PDM_DIV96		= 12,
	DMIC_PDM_DIV128		= 13,
} PDM_DIV_T;

typedef enum {
	DMIC_COMP0_0		= 0,
	DMIC_COMP0_16		= 1,
	DMIC_COMP0_15		= 2,
	DMIC_COMP0_13		= 3,
} COMPENSATION_T;

typedef enum {
	DMIC_DC_NOREMOVE	= 0,
	DMIC_DC_CUT155		= 1,
	DMIC_DC_CUT78		= 2,
	DMIC_DC_CUT39		= 3,
} DC_REMOVAL_T;

typedef enum {
	pdm_dual			= 0,		/*!< Two separate pairs of PDM wires */
	pdm_stereo			= 4,		/*!< Stereo Mic */
	pdm_bypass			= 3,		/*!< Clk Bypas clocks both channels */
	pdm_bypass_clk0		= 1,		/*!< Clk Bypas clocks only channel0 */
	pdm_bypass_clk1		= 2,		/*!< Clk Bypas clocks only channel1 */
} DMIC_IO_T;

typedef struct {
	STEREO_SIDE_T		side;
	PDM_DIV_T			divhfclk;
	uint32_t			osr;
	int32_t				gainshft;
	COMPENSATION_T		preac2coef;
	COMPENSATION_T		preac4coef;
} DMIC_CHANNEL_CONFIG_T;

/**
 * @brief	Initialize DMIC interface
 * @param	clock	: DMIC clock assignment
 * @param	reset	: DMIC reset assignment
 * @return	Nothing
 */
void Chip_DMIC_Init(const CHIP_SYSCON_CLOCK_T clock, const CHIP_SYSCON_PERIPH_RESET_T reset);

/**
 * @brief	Configure DMIC io
 * @param	pDMIC	: The base address of DMIC interface
 * @param	cfg		: DMIC io configuration
 * @return	Nothing
 */
void Chip_DMIC_CfgIO(LPC_DMIC_T * pDMIC, DMIC_IO_T cfg);

/**
 * @brief	Set DMIC operating mode
 * @param	pDMIC	: The base address of DMIC interface
 * @param	mode	: DMIC mode
 * @return	Nothing
 */
void Chip_DMIC_SetOpMode(LPC_DMIC_T * pDMIC, OP_MODE_T mode);

/**
 * @brief	Configure DMIC channel
 * @param	pDMIC		: The base address of DMIC interface
 * @param	channel		: DMIC channel
 * @param	channel_cfg	: Channel configuration
 * @return	Nothing
 */
void Chip_DMIC_CfgChannel(LPC_DMIC_T * pDMIC, uint32_t channel, DMIC_CHANNEL_CONFIG_T * channel_cfg);

/**
 * @brief	Configure DMIC channel DC removal setting
 * @param	pDMIC				: The base address of DMIC interface
 * @param	channel				: DMIC channel
 * @param	dc_cut_level		: DC cut level
 * @param	post_dc_gain_reduce : Post DC cut gain adjustment
 * @param	saturate16bit		: Saturation setting
 * @return	Nothing
 */
void Chip_DMIC_CfgChannelDc(LPC_DMIC_T * pDMIC, uint32_t channel, DC_REMOVAL_T dc_cut_level, uint32_t post_dc_gain_reduce, bool saturate16bit);

/**
 * @brief	Configure Clock scaling
 * @param	pDMIC		: The base address of DMIC interface
 * @param	use2fs		: clock scaling
 * @return	Nothing
 */
void Chip_DMIC_Use2fs(LPC_DMIC_T * pDMIC, bool use2fs);

/**
 * @brief	Configure Clock scaling
 * @param	pDMIC		: The base address of DMIC interface
 * @param	channelmask	: Channel selection
 * @return	Nothing
 */
void Chip_DMIC_EnableChannnel(LPC_DMIC_T * pDMIC, uint32_t channelmask);

/**
 * @brief	Configure fifo settings for DMIC channel
 * @param	pDMIC		: The base address of DMIC interface
 * @param	channel		: DMIC channel
 * @param	trig_level	: FIFO trigger level
 * @param	enable		: FIFO level
 * @param	resetn		: FIFO reset
 * @return	Nothing
 */
void Chip_DMIC_FifoChannel(LPC_DMIC_T * pDMIC, uint32_t channel, uint32_t trig_level, uint32_t enable, uint32_t resetn);

/**
 * @brief	Get FIFO status
 * @param	pDMIC		: The base address of DMIC interface
 * @param	channel		: DMIC channel
 * @return	FIFO status
 */
__STATIC_INLINE uint32_t Chip_DMIC_FifoGetStatus(LPC_DMIC_T * pDMIC, uint32_t channel)
{
	return pDMIC->CHANNEL[channel].FIFO_STATUS;
}

/**
 * @brief	Clear FIFO status
 * @param	pDMIC		: The base address of DMIC interface
 * @param	channel		: DMIC channel
 * @param	mask		: Bits to be cleared
 * @return	FIFO status
 */
__STATIC_INLINE void Chip_DMIC_FifoClearStatus(LPC_DMIC_T * pDMIC, uint32_t channel, uint32_t mask)
{
	pDMIC->CHANNEL[channel].FIFO_STATUS = mask;
}

/**
 * @brief	Get FIFO data
 * @param	pDMIC		: The base address of DMIC interface
 * @param	channel		: DMIC channel
 * @return	FIFO data
 */
__STATIC_INLINE uint32_t Chip_DMIC_FifoGetData(LPC_DMIC_T * pDMIC, uint32_t channel)
{
	return pDMIC->CHANNEL[channel].FIFO_DATA;
}

extern DMA_PERIPHERAL_CONTEXT_T dmic_ch0_dma_context;
extern DMA_PERIPHERAL_CONTEXT_T dmic_ch1_dma_context;
extern DMA_PERIPHERAL_CONTEXT_T dmic_ch0_dma_interleaved_context;
extern DMA_PERIPHERAL_CONTEXT_T dmic_ch1_dma_interleaved_context;

#ifdef __cplusplus
}
#endif

#endif /* __DMIC_5411X_H */
