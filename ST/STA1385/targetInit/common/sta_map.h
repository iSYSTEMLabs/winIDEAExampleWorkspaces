/**
 * @file sta_map.h
 * @brief This file contains all the peripheral register's definitions
 * and memory mapping
 *
 * Copyright (C) ST-Microelectronics SA 2015
 * @author: APG-MID team
 */

#ifndef __STA_MAP_H__
#define __STA_MAP_H__

#include "sta_type.h"
#include "cortexm3_macro.h"

/** @defgroup STA
  * @{
  */

/** @defgroup Cortex-M3 core IP registers structures definitions
  * @{
  */

/* @brief NVIC: Nested Vectored Interrupt Controller */
typedef volatile struct {
	uint32_t enable[8];
	uint32_t reserved1[24];
	uint32_t clear[8];
	uint32_t reserved2[24];
	uint32_t set_pending[8];
	uint32_t reserved3[24];
	uint32_t clear_pending[8];
	uint32_t reserved4[24];
	uint32_t active_bit[8];
	uint32_t reserved5[56];
	uint32_t priority[11];
} t_nvic;

/* @brief SCB: System Controller Block */
typedef volatile struct {
	uint32_t cpuid;
	uint32_t irq_ctrl_state;
	uint32_t except_tbl_off;
	uint32_t aircr;
	uint32_t sys_ctrl;
	uint32_t cfg_ctrl;
	uint32_t sys_priority[3];
	uint32_t sys_hdl_ctrl;
	uint32_t cfg_flt_status;
	uint32_t hrd_flt_status;
	uint32_t dbg_flt_status;
	uint32_t mem_mgr_flt_addr;
	uint32_t bus_flt_addr;
} t_scb;

/** @brief System Tick */
typedef volatile struct {
	uint32_t ctrl;
	uint32_t load;
	uint32_t val;
	uint32_t calib;
} t_systick;

/**
 * Peripherals' IP registers structures definitions
 */

/** @brief UART */
typedef volatile struct {
	uint32_t data;		/* 0x00 offset */
	uint32_t rsr;		/* 0x04 offset */
	uint32_t dma_w;		/* 0x08 offset */
	uint32_t timeout;	/* 0x0c offset */
	uint32_t unused_1[(0x018 - 0x010) >> 2];	/* 0x10 to 0x14 offsets */
	uint32_t fr;		/* 0x18 offset */
	uint32_t lcrh_rx;	/* 0x1c offset */
	uint32_t unused_2;	/* 0x20 offset */
	uint32_t ibrd;		/* 0x24 offset */
	uint32_t fbrd;		/* 0x28 offset */
	uint32_t lcrh_tx;	/* 0x2c offset */
	uint32_t cr;		/* 0x30 offset */
	uint32_t ifls;		/* 0x34 offset */
	uint32_t imsc;		/* 0x38 offset */
	uint32_t ris;		/* 0x3c offset */
	uint32_t mis;		/* 0x40 offset */
	uint32_t icr;		/* 0x44 offset */
	uint32_t dmacr;		/* 0x48 offset */
	uint32_t unused_3;	/* 0x4C offset */
	uint32_t xfcr;		/* 0x50 offset */
	uint32_t xon1;		/* 0x54 offset */
	uint32_t xon2;		/* 0x58 offset */
	uint32_t xoff1;		/* 0x5c offset */
	uint32_t xoff2;		/* 0x60 offset */
	uint32_t unused_4[(0x100 - 0x064) >> 2];	/* 0x64 to 0xfc offsets */
	uint32_t abcr;		/* 0x100 offset */
	uint32_t absr;		/* 0x104 offset */
	uint32_t abfmt;		/* 0x108 offset */
	uint32_t unused_5[(0x150 - 0x10c) >> 2];	/* 0x10c to 0x14c offsets */
	uint32_t abdr;		/* 0x150 offset */
	uint32_t abdfr;		/* 0x154 offset */
	uint32_t abmr;		/* 0x158 offset */
	uint32_t abimsc;		/* 0x15c offset */
	uint32_t abris;		/* 0x160 offset */
	uint32_t abmis;		/* 0x164 offset */
	uint32_t abicr;		/* 0x168 offset */
	uint32_t unused_6[(0xfe0 - 0x16c) >> 2];	/* 0x16c to 0xfe0 offsets */
	uint32_t periphid0;	/* 0xfe0 offset */
	uint32_t periphid1;	/* 0xfe4 offset */
	uint32_t periphid2;	/* 0xfe8 offset */
	uint32_t periphid3;	/* 0xfec offset */
	uint32_t pcellid0;	/* 0xff0 offset */
	uint32_t pcellid1;	/* 0xff4 offset */
	uint32_t pcellid2;	/* 0xff8 offset */
	uint32_t pcellid3;	/* 0xffc offset */
} t_uart;

/** @brief SQI */
#define SQI_FIFO_SIZE 256
typedef volatile struct {
	uint32_t page_buffer[SQI_FIFO_SIZE / 4];	/* addr offset = 0x000 */
	union {
		struct {
			uint32_t sqio_cmd:8;
			uint32_t sqio_mode:2;
			uint32_t res0:2;
			uint32_t cmd_type:3;
			uint32_t res1:1;
			uint32_t read_opcode:8;
			uint32_t wr_cnfg_opcd:8;
		} bit;
		uint32_t reg;
	} cmd_stat_reg;		/* addr offset = 0x100 */

	union {
		struct {
			uint32_t mem_addr:24;
			uint32_t xfer_len:8;
		} bit;
		uint32_t reg;
	} addr_reg;		/* addr offset = 0x104 */

	uint32_t data_reg;	/* addr offset = 0x108 */

	union {
		struct {
			uint32_t divisor:8;
			uint32_t mode:1;
			uint32_t res0:6;
			uint32_t dummy_cycles:3;
			uint32_t dummy_dis:1;
			uint32_t res1:1;
			uint32_t pol_cnt_pre:3;
			uint32_t res2:1;
			uint32_t sw_reset:1;
			uint32_t res3:1;
			uint32_t int_raw_status_poll:1;
			uint32_t int_en_pol:1;
			uint32_t int_raw_status:1;
			uint32_t int_en:1;
			uint32_t res4:1;
			uint32_t dma_req_en:1;
		} bit;
		uint32_t reg;
	} conf_reg;		/* addr offset = 0x10c */

	union {
		struct {
			uint32_t poll_cmd:8;
			uint32_t poll_start:1;
			uint32_t poll_en:1;
			uint32_t poll_status:1;
			uint32_t res0:1;
			uint32_t poll_bsy_bit_index:3;
			uint32_t res1:1;
			uint32_t polling_count:16;
		} bit;
		uint32_t reg;
	} polling_reg;		/* addr offset = 0x110 */

	uint32_t ext_addr_reg;	/* addr offset = 0x114 */

	union {
		struct {
			uint32_t ext_mem_addr_8msb_msk:8;
			uint32_t dummy_cycle_num:6;
			uint32_t dummy_cycle_alt:1;
			uint32_t ext_mem_mode:1;
			uint32_t sqi_para_mode:1;
			uint32_t res0:7;
			uint32_t ext_spi_clock_en:1;
			uint32_t inv_ext_spi_clk:1;
			uint32_t res1:5;
			uint32_t endian:1;
		} bit;
		uint32_t reg;
	} conf_reg2;		/* addr offset = 0x118 */

} t_sqi;

/** @brief MSP */
typedef volatile struct {
	uint32_t msp_dr;	/* addr offset = 0x000 */

	union {
		struct {
			uint32_t rxen:1;
			uint32_t rffen:1;
			uint32_t rfspol:1;
			uint32_t dcm:1;
			uint32_t rfssel:1;
			uint32_t rckpol:1;
			uint32_t rcksel:1;
			uint32_t lbm:1;
			uint32_t txen:1;
			uint32_t tffen:1;
			uint32_t tfspol:1;
			uint32_t tfssel:2;
			uint32_t tckpol:1;
			uint32_t tcksel:1;
			uint32_t txddl:1;
			uint32_t sgen:1;
			uint32_t sckpol:1;
			uint32_t scksel:2;
			uint32_t fgen:1;
			uint32_t spickml:2;
			uint32_t spibme:1;
			uint32_t reserved:8;
		} bit;
		uint32_t reg;
	} msp_cgr;		/* offset 0x04 - 32 bits */

	union {
		struct {
			uint32_t tp1elen:3;
			uint32_t tp1flen:7;
			uint32_t tdtyp:2;
			uint32_t tendn:1;
			uint32_t tddly:2;
			uint32_t tfsig:1;
			uint32_t tp2elen:3;
			uint32_t tp2flen:7;
			uint32_t tp2sm:1;
			uint32_t tp2en:1;
			uint32_t tbswap:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} msp_tcf;		/* offset 0x08 - 32 bits */

	union {
		struct {
			uint32_t rp1elen:3;
			uint32_t rp1flen:7;
			uint32_t rdtyp:2;
			uint32_t rendn:1;
			uint32_t rddly:2;
			uint32_t rfsig:1;
			uint32_t rp2elen:3;
			uint32_t rp2flen:7;
			uint32_t rp2sm:1;
			uint32_t rp2en:1;
			uint32_t rbswap:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} msp_rcf;		/* offset 0x0c - 32 bits */

	union {
		struct {
			uint32_t sckdiv:10;
			uint32_t frwid:6;
			uint32_t frper:13;
			uint32_t reserved:3;
		} bit;
		uint32_t reg;
	} msp_srg;		/* offset 0x10 - 32 bits */

	union {
		struct {
			uint32_t rbusy:1;
			uint32_t rfe:1;
			uint32_t rfu:1;
			uint32_t tbusy:1;
			uint32_t tfe:1;
			uint32_t tfu:1;
			uint32_t reserved:26;
		} bit;
		uint32_t reg;
	} msp_flr;		/* offset 0x14 - 32 bits */

	union {
		struct {
			uint32_t rdmae:1;
			uint32_t tdmae:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} msp_dmacr;		/* offset 0x18 - 32 bits */

	uint32_t unused_0;

	union {
		struct {
			uint32_t rxim:1;
			uint32_t roeim:1;
			uint32_t rseim:1;
			uint32_t rfsim:1;
			uint32_t txim:1;
			uint32_t tueim:1;
			uint32_t tseim:1;
			uint32_t tfsim:1;
			uint32_t rfoim:1;
			uint32_t tfoim:1;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} msp_imsc;		/* offset 0x20 - 32 bits */

	union {
		struct {
			uint32_t rxris:1;
			uint32_t roeris:1;
			uint32_t rseris:1;
			uint32_t rfsris:1;
			uint32_t txris:1;
			uint32_t tueris:1;
			uint32_t tseris:1;
			uint32_t tfsris:1;
			uint32_t rforis:1;
			uint32_t tforis:1;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} msp_ris;		/* offset 0x24 - 32 bits */

	union {
		struct {
			uint32_t rxmis:1;
			uint32_t roemis:1;
			uint32_t rsemis:1;
			uint32_t rfsmis:1;
			uint32_t txmis:1;
			uint32_t tuemis:1;
			uint32_t tsemis:1;
			uint32_t tfsmis:1;
			uint32_t rfomis:1;
			uint32_t tfomis:1;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} msp_mis;		/* offset 0x28 - 32 bits */

	union {
		struct {
			uint32_t rxic:1;
			uint32_t roeic:1;
			uint32_t rseic:1;
			uint32_t rfsic:1;
			uint32_t txic:1;
			uint32_t tueic:1;
			uint32_t tseic:1;
			uint32_t tfsic:1;
			uint32_t rfoic:1;
			uint32_t tfoic:1;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} msp_icr;		/* offset 0x2c - 32 bits */

	union {
		struct {
			uint32_t rmcen:1;
			uint32_t rmcsf:2;
			uint32_t rmcmp:2;
			uint32_t tmcen:1;
			uint32_t tmcsf:2;
			uint32_t reserved:24;
		} bit;
		uint32_t reg;
	} msp_mcr;		/* offset 0x30 - 32 bits */

	uint32_t msp_rcv;
	uint32_t msp_rcm;

	uint32_t unused_1;

	uint32_t msp_tce[4];

	uint32_t unused_2[4];

	uint32_t msp_rce[4];

	uint32_t unused_3[4];

	uint32_t msp_tstcr;
	uint32_t msp_itip;
	uint32_t msp_itop;
	uint32_t msp_tstdr;

	uint32_t unused_4[980];

	uint8_t msp_periphid0;

	uint32_t unused_5[3];

	union {
		struct {
			uint8_t partnumber1:4;
			uint8_t designer0:4;
		} bit;
		uint8_t reg;
	} msp_periphid1;	/* */

	uint8_t unused_6[3];

	union {
		struct {
			uint8_t designer1:4;
			uint8_t revision:4;
		} bit;
		uint8_t reg;
	} msp_periphid2;	/* */

	uint8_t unused_7[3];
	uint8_t msp_periphid3;
	uint8_t unused_8[3];
	uint8_t msp_pcellid0;
	uint8_t unused_9[3];
	uint8_t msp_pcellid1;
	uint8_t unused_10[3];
	uint8_t msp_pcellid2;
	uint8_t unused_11[3];
	uint8_t msp_pcellid3;
	uint8_t unused_12[3];

} t_msp;

/** @brief M3IRQ */
typedef volatile struct {
	uint32_t masks;		/* 0x00 */
	uint32_t maskc;		/* 0x04 */
	uint32_t mask;		/* 0x08 */
	uint32_t pend;		/* 0x0C */
	uint32_t irq_low;	/* 0x10 */
	uint32_t irq_up;	/* 0x14 */
	uint32_t pend0;
	uint32_t pend1;
	uint32_t pend2;
	uint32_t pend3;
	uint32_t gpio;
	uint32_t rirq[32];
} t_m3irq;

/** @brief Audio source: SSY, DSPs */
typedef volatile struct {
	uint8_t unused1[0x0004 - 0x0000];

	/*0x0004 */
	union {
		struct {
			uint32_t sel:1;	/*[0] */
			uint32_t __reserved1__:2;	/*[2:1] */
			uint32_t bypass_calib:1;	/*[3] */
			uint32_t standby:1;		/*[4] */
			uint32_t __reserved2__:27;	/*[31:5] */
		} bit;
		uint32_t reg;
	} adcmic_cr;

	uint8_t unused2[0x0010 - 0x0008];

	/*0x0010 */
	union {
		struct {
			uint32_t mute_l:3;	/*[2:0] */
			uint32_t mute_r:3;	/*[5:3] */
			uint32_t sb:3;		/*[8:6] */
			uint32_t sbana:3;	/*[11:9] */
			uint32_t __reserved1__:20;	/*[31:12] */
		} bit;
		uint32_t reg;
	} dac_cr;

	uint8_t unused3[0x0100 - 0x0014];

	/*0x0100 */
	union {
		struct {
			uint32_t dsp_bigendian:1;	/*[0] */
			uint32_t aif_adrmode:1;		/*[1] */
			uint32_t __reserved1__:1;	/*[2] */
			uint32_t dsp_reset:3;		/*[5:3] */
			uint32_t dsp_enableclk:3;	/*[8:6] */
			uint32_t refclk_512fs:1;	/*[9] */
			uint32_t enablerdfifo:1;	/*[10] */
			uint32_t enablewrfifo:1;	/*[11] */
			uint32_t __reserved2__:20;	/*[31:12] */
		} bit;
		uint32_t reg;
	} aco_cr;

	/*0x0104 */
	union {
		struct {
			uint32_t dma_buserr:1;	/*[0] */
			uint32_t dma_runout:1;	/*[1] */
			uint32_t dsp_waitint:3;	/*[4:2] */
			uint32_t dsp_frozen:3;	/*[7:5] */
			uint32_t dsp_waitsample:3;	/*[10:8] */
			uint32_t dsp0_irqdec:3;	/*[13:11] */
			uint32_t dsp1_irqdec:3;	/*[16:14] */
			uint32_t dsp2_irqdec:3;	/*[19:17] */
			uint32_t f_48_sync:1;	/*[20] */
			uint32_t __reserved1__:11;	/*[31:21] */
		} bit;
		uint32_t reg;
	} aco_ris;

	/*0x0108 */
	union {
		struct {
			uint32_t dma_buserr:1;	/*[0] */
			uint32_t dma_runout:1;	/*[1] */
			uint32_t dsp_waitint:3;	/*[4:2] */
			uint32_t dsp_frozen:3;	/*[7:5] */
			uint32_t dsp_waitsample:3;	/*[10:8] */
			uint32_t dsp0_irqdec:3;	/*[13:11] */
			uint32_t dsp1_irqdec:3;	/*[16:14] */
			uint32_t dsp2_irqdec:3;	/*[19:17] */
			uint32_t f_48_sync:1;	/*[20] */
			uint32_t __reserved1__:11;	/*[31:21] */
		} bit;
		uint32_t reg;
	} aco_mis;

	uint8_t unused4[0x0200 - 0x010C];

	/*0x0200 */
	union {
		struct {
			uint32_t dma_buserr_cl:1;	/*[0] */
			uint32_t dma_runout_cl:1;	/*[1] */
			uint32_t dsp_waitint_cl:3;	/*[4:2] */
			uint32_t dsp_frozen_cl:3;	/*[7:5] */
			uint32_t dsp_waitsample_cl:3;	/*[10:8] */
			uint32_t dsp0_irqdec_cl:1;	/*[11] */
			uint32_t dsp1_irqdec_cl:1;	/*[12] */
			uint32_t dsp2_irqdec_cl:1;	/*[13] */
			uint32_t __reserved1__:6;	/*[19:14] */
			uint32_t f_48_sync_cl:1;	/*[20] */
			uint32_t __reserved2__:11;	/*[31:21] */
		} bit;
		uint32_t reg;
	} aco_imsc;

	uint8_t unused5[0x0208 - 0x0204];

	/*0x0208 */
	union {
		struct {
			uint32_t dma_buserr:1;	/*[0] */
			uint32_t dma_runout:1;	/*[1] */
			uint32_t dsp_waitint:3;	/*[4:2] */
			uint32_t dsp_frozen:3;	/*[7:5] */
			uint32_t dsp_waitsample:3;	/*[10:8] */
			uint32_t dsp0_irqdec:3;	/*[13:11] */
			uint32_t dsp1_irqdec:3;	/*[16:14] */
			uint32_t dsp2_irqdec:3;	/*[19:17] */
			uint32_t f_48_sync:1;	/*[20] */
			uint32_t __reserved1__:11;	/*[31:21] */
		} bit;
		uint32_t reg;
	} aco_icr;

	uint8_t unused6[0x0210 - 0x020C];

	/*0x0210 */
	uint8_t aco_eir0;
	uint8_t unused7[3];

	/*0x0214 */
	uint8_t aco_eir1;
	uint8_t unused8[3];

	/*0x0218 */
	uint8_t aco_eir2;
	uint8_t unused9[3];

	uint8_t unused10[0x0400 - 0x021C];

	/*0x0400 */
	union {
		struct {
			uint32_t mux0:6;	/*[5:0] */
			uint32_t mux1:6;	/*[11:6] */
			uint32_t mux2:6;	/*[17:12] */
			uint32_t __reserved1__:14;	/*[31:18] */
		} bit;
		uint32_t reg;
	} dc0_cr0;

	/*0x0404 */
	union {
		struct {
			uint32_t mux0:6;	/*[5:0] */
			uint32_t mux1:6;	/*[11:6] */
			uint32_t mux2:6;	/*[17:12] */
			uint32_t __reserved1__:14;	/*[31:18] */
		} bit;
		uint32_t reg;
	} dc0_cr1;

	uint8_t unused11[0x0800 - 0x0408];

	/*0x0800 */
	union {
		struct {
			uint32_t wsmp:3;	/*[2:0] */
			uint32_t frozen:3;	/*[5:3] */
			uint32_t wint:3;	/*[8:6] */
			uint32_t __reserved1__:23;	/*[31:9] */
		} bit;
		uint32_t reg;
	} aco_dbg;

	uint8_t unused12[0x1000 - 0x0804];

	/*0x1000 */
	union {
		struct {
			uint32_t msp1_en:1;		/*[0] */
			uint32_t msp2_en:1;		/*[1] */
			uint32_t sai3_dac_en:1;		/*[2] */
			uint32_t sai3_adc_en:1;		/*[3] */
			uint32_t sai3_ext_codec:1;	/*[4] */
			uint32_t sai4_a2dp_en:1;	/*[5] */
			uint32_t __reserved1__:3;	/*[8:6] */
			uint32_t aud_refclk_msp0:1;	/*[9] */
			uint32_t aud_refclk_msp1:1;	/*[10] */
			uint32_t aud_refclk_msp2:1;	/*[11] */
			uint32_t __reserved2__:20;	/*[31:12] */
		} bit;
		uint32_t reg;
	} mux_cr;

	/*0x1004 */
	/*OTP_CR                        //Not used */

} t_aud_cr;

/** @brief AHB2DMA Bridge: AIF, DMA Bus */
typedef union {
	struct {
		uint32_t ena:1;             /*[0] */
		uint32_t io:1;              /*[1] */
		uint32_t __reserved1__:1;   /*[2] */
		uint32_t mme:1;             /*[3] */
		uint32_t wl:3;              /*[6:4] */
		uint32_t dir:1;             /*[7] */
		uint32_t lpr:1;             /*[8] */
		uint32_t ckp:1;             /*[9] */
		uint32_t rel:1;             /*[10] */
		uint32_t adj:1;             /*[11] */
		uint32_t cnt:2;             /*[13:12] */
		uint32_t syn:2;             /*[15:14] */
		uint32_t __reserved2__:7;   /*[22:16] */
		uint32_t tm:1;              /*[23] */
		uint32_t __reserved3__:8;   /*[31:24] */
	} bit;
	uint32_t reg;
} t_saicsr;

typedef union {
	struct {
		uint32_t drll_thres:4;	    /*[3:0] */
		uint32_t dither_en:1;       /*[4] */
		uint32_t rou:1;		    /*[5] */
		uint32_t by:1;		    /*[6] */
		uint32_t __reserved1__:5;   /*[11:7] */
		uint32_t drll_diff:14;	    /*[25:12] */
		uint32_t __reserved2__:2;   /*[27:26] */
		uint32_t drll_lock:2;       /*[29:28] */
		uint32_t __reserved3__:2;   /*[31:30] */
	} bit;
	uint32_t reg;
} t_srccsr;

typedef volatile struct {
	uint8_t unused1[0x4000 - 0x0000];

	/* 0x4000 */
	union {
		struct {
			uint32_t __reserved1__:2;   /*[1:0] */
			uint32_t gating_en:1;       /*[2] */
			uint32_t __reserved2__:1;   /*[3] */
			uint32_t dma_run:1;         /*[4] */
			uint32_t dmafreq_sel:3;     /*[7:5] */
			uint32_t fsync_ck2_sel:2;   /*[9:8] */
			uint32_t fsync_ck1_sel:2;   /*[11:10] */
			uint32_t __reserved3__:20;  /*[31:12] */
		} bit;
		uint32_t reg;
	} dmabus_cr;

	uint8_t unused2[0x6000 - 0x4004];

	/* 0x6000 - 0x67FC */
	union {
		struct {
			uint32_t da:14;	            /*[13:0] */
			uint32_t sa:14;             /*[27:14] */
			uint32_t tt:4;              /*[31:28] */
		} bit;
		uint32_t reg;
	} dmabus_tcm[512];

	uint8_t unused3[0x8000 - 0x6800];

	/* 0x8000 - 0x8014 */
	t_srccsr src0csr;
	t_srccsr src1csr;
	t_srccsr src2csr;
	t_srccsr src3csr;
	t_srccsr src4csr;
	t_srccsr src5csr;

	uint8_t unused4[0x8040 - 0x8018];

	/* 0x8040 - 0x806C */
	uint32_t srcdo0l;
	uint32_t srcdo0r;
	uint32_t srcdo1l;
	uint32_t srcdo1r;
	uint32_t srcdo2l;
	uint32_t srcdo2r;
	uint32_t srcdo3l;
	uint32_t srcdo3r;
	uint32_t srcdo4l;
	uint32_t srcdo4r;
	uint32_t srcdo5l;
	uint32_t srcdo5r;

	uint8_t unused5[0x8400 - 0x8070];

	/* 0x8400 */
	union {
		struct {
			uint32_t fs_0:2;		/*[1:0] */
			uint32_t fs_1:3;	        /*[4:2] */
			uint32_t fs_2lsbs:2;		/*[6:5] */
			uint32_t fs_3:2;	        /*[8:7] */
			uint32_t fs_4:2;	        /*[10:9] */
			uint32_t fs_5:2;	        /*[12:11] */
			uint32_t testofd:1;	        /*[13] */
			uint32_t clrf:1;	        /*[14] */
			uint32_t fs_2msbs:1;		/*[15] */
			uint32_t lpf_ufl:6;	        /*[21:16] */
			uint32_t __reserved1__:2;	/*[23:22] */
			uint32_t lpf_ovf:6;	        /*[29:24] */
			uint32_t __reserved2__:2;	/*[31:30] */
		} bit;
		uint32_t reg;
	} lpf_csr;

	uint8_t unused6[0x8440 - 0x8404];
	/* 0x8440 - 0x846C */
	uint32_t lpfdi0l;
	uint32_t lpfdi0r;
	uint32_t lpfdi1l;
	uint32_t lpfdi1r;
	uint32_t lpfdi2l;
	uint32_t lpfdi2r;
	uint32_t lpfdi3l;
	uint32_t lpfdi3r;
	uint32_t lpfdi4l;
	uint32_t lpfdi4r;
	uint32_t lpfdi5l;
	uint32_t lpfdi5r;
	uint8_t unused7[0x8480 - 0x8470];
	/* 0x8480 - 0x84AC */
	uint32_t lpfdo0l;
	uint32_t lpfdo0r;
	uint32_t lpfdo1l;
	uint32_t lpfdo1r;
	uint32_t lpfdo2l;
	uint32_t lpfdo2r;
	uint32_t lpfdo3l;
	uint32_t lpfdo3r;
	uint32_t lpfdo4l;
	uint32_t lpfdo4r;
	uint32_t lpfdo5l;
	uint32_t lpfdo5r;

	uint8_t unused8[0x8800 - 0x84B0];

	/* 0x8800 */
	union {
		struct {
			uint32_t ch0sel:4;	        /*[3:0] */
			uint32_t ch1sel:4;	        /*[7:4] */
			uint32_t ch2sel:4;	        /*[11:8] */
			uint32_t ch3sel:4;	        /*[15:12] */
			uint32_t ch4sel:4;	        /*[19:16] */
			uint32_t ch5sel:4;	        /*[23:20] */
			uint32_t lpf_downx3_x2_cascade:1;	/*[24] */
			uint32_t __reserved1__:7;	/*[31;25] */
		} bit;
		uint32_t reg;
	} aimux_csr;

	/* 0x8804 */
	union {
		struct {
			uint32_t out0sel:4;	        /*[3:0] */
			uint32_t out1sel:4;	        /*[7:4] */
			uint32_t out2sel:4;	        /*[11:8] */
			uint32_t out3sel:4;	        /*[15:12] */
			uint32_t out4sel:4;	        /*[19:16] */
			uint32_t out5sel:4;	        /*[23:20] */
			uint32_t __reserved1__:8;	/*[31:24] */
		} bit;
		uint32_t reg;
	} aomux_csr;

	/* 0x8808 */
	union {
		struct {
			uint32_t insel0:2;	        /*[1:0] */
			uint32_t insel1:2;	        /*[3:2] */
			uint32_t insel2:2;	        /*[5:4] */
			uint32_t insel3:2;	        /*[7:6] */
			uint32_t insel4:2;	        /*[9:8] */
			uint32_t insel5:2;	        /*[11:10] */
			uint32_t __reserved1__:20;	/*[31:12] */
		} bit;
		uint32_t reg;
	} fsyncin;

	/* 0x880C */
	union {
		struct {
			uint32_t outsel0:2;	        /*[1:0] */
			uint32_t outsel1:2;	        /*[3:2] */
			uint32_t outsel2:2;	        /*[5:4] */
			uint32_t outsel3:2;	        /*[7:6] */
			uint32_t outsel4:2;	        /*[9:8] */
			uint32_t outsel5:2;	        /*[11:10] */
			uint32_t __reserved1__:20;	/*[31:12] */
		} bit;
		uint32_t reg;
	} fsyncout;

	uint8_t unused9[0x8C00 - 0x8810];

	/* 0x8C00 - 0x8C0C */
	t_saicsr sai1csr;
	t_saicsr sai2csr;
	t_saicsr sai3csr;
	t_saicsr sai4csr;

	uint8_t unused10[0x8C40 - 0x8C10];

	/* 0x8C40 - 0x8C44 */
	uint32_t sai1rx0l;
	uint32_t sai1rx0r;

	uint8_t unused11[0x8C50 - 0x8C48];

	/* 0x8C50 - 0x8C74 */
	uint32_t sai2rx0l;
	uint32_t sai2rx0r;
	uint32_t sai2rx1l;
	uint32_t sai2rx1r;
	uint32_t sai2rx2l;
	uint32_t sai2rx2r;
	uint32_t sai2rx3l;
	uint32_t sai2rx3r;
	uint32_t sai2tx0l;
	uint32_t sai2tx0r;

	uint8_t unused12[0x8C80 - 0x8C78];

	/* 0x8C80 - 0x8CC0 */
	uint32_t sai3rx0l;
	uint32_t sai3rx0r;
	uint32_t sai3rx1l;
	uint32_t sai3rx1r;
	uint32_t sai3rx2l;
	uint32_t sai3rx2r;
	uint32_t sai3rx3l;
	uint32_t sai3rx3r;
	uint32_t sai3tx0l;
	uint32_t sai3tx0r;
	uint32_t sai3tx1l;
	uint32_t sai3tx1r;
	uint32_t sai3tx2l;
	uint32_t sai3tx2r;
	uint32_t sai3tx3l;
	uint32_t sai3tx3r;

	/* 0x8CC0 - 0x8D00 */
	uint32_t sai4rx0l;
	uint32_t sai4rx0r;
	uint32_t sai4rx1l;
	uint32_t sai4rx1r;
	uint32_t sai4rx2l;
	uint32_t sai4rx2r;
	uint32_t sai4rx3l;
	uint32_t sai4rx3r;
	uint32_t sai4tx0l;
	uint32_t sai4tx0r;
	uint32_t sai4tx1l;
	uint32_t sai4tx1r;
	uint32_t sai4tx2l;
	uint32_t sai4tx2r;
	uint32_t sai4tx3l;
	uint32_t sai4tx3r;

	uint8_t unused13[0x10000 - 0x8D00];

	/* 0x10000 */
	union {
		struct {
			uint32_t __reserved1__:12;	/*[11:0] */
			uint32_t standby:1;	        /*[12] */
			uint32_t __reserved2__:3;	/*[15:13] */
			uint32_t chsel:1;	        /*[16] */
			uint32_t __reserved3__:3;	/*[19:17] */
			uint32_t bypass_calib:1;	/*[20] */
			uint32_t __reserved4__:3;	/*[23:21] */
			uint32_t restar_fifo:1;		/*[24] */
			uint32_t __reserved5__:7;	/*[31:25] */
		} bit;
		uint32_t reg;
	} adcaux_cr;

} t_aif;

/** @brief DMA */
typedef volatile struct {
	uint32_t enabled:1;
	uint32_t sourcePeripheral:5;
	uint32_t destinationPeripheral:5;
	uint32_t flowControl:3;
	uint32_t interruptErrorMaskEnable:1;
	uint32_t terminalCountMaskEnable:1;
	uint32_t lockedTransfer:1;
	uint32_t channelActive:1;
	uint32_t halt:1;
	uint32_t reserved2:13;
} DMA_ChannelConfigurationRegisterTy;

typedef volatile struct {
	uint32_t transferSize:12;	/*! Trasfer size */
	uint32_t sourceBurstSize:3;	/*! Source burst size */
	uint32_t destinationBurstSize:3;	/*! Destination burst size */
	uint32_t sourceWidth:3;		/*! Source width */
	uint32_t destinationWidth:3;	/*! Destination width */
	uint32_t sourceMaster:1;	/*! Source master */
	uint32_t destinationMaster:1;	/*! Destination master */
	uint32_t sourceAddressIncrement:1;	/*! Source address increment ('1') or not ('0') */
	uint32_t destinationAddressIncrement:1;	/*! Destination address increment ('1') or not ('0') */
	uint32_t priviledgeMode:1;	/*! Privilege mode */
	uint32_t bufferable:1;		/*! Bufferable */
	uint32_t cacheable:1;		/*! Cacheable */
	uint32_t terminalCounterInterruptEnabled:1;	/*! Terminal counter interrupt enabled */
} DMA_ChannelControlRegisterTy;

typedef volatile struct {
	uint32_t LM:1;
	uint32_t R:1;
	uint32_t LLI:30;
} DMACCLLITy;

typedef volatile struct {
	uint32_t DMACCSrcAddr;
	uint32_t DMACCDestAddr;
	DMACCLLITy DMACCLLI;
	DMA_ChannelControlRegisterTy DMACCControl;
	DMA_ChannelConfigurationRegisterTy DMACCConfiguration;
	uint32_t DMAEmptySpace_2[3];

} DMACChannelTy;

typedef volatile struct {
	uint32_t DMACIntStatus;		/* offset = 0x000 */
	uint32_t DMACIntTCStatus;	/* offset = 0x004 */
	uint32_t DMACIntTCClear;	/* offset = 0x008 */
	uint32_t DMACIntErrorStatus;	/* offset = 0x00C */
	uint32_t DMACIntErrClr;		/* offset = 0x010 */
	uint32_t DMACIRawIntTCStatus;	/* offset = 0x014 */
	uint32_t DMACRawIntErrorStatus;	/* offset = 0x018 */
	uint32_t DMACEnbldChns;		/* offset = 0x01C */
	uint32_t DMACSoftBReq;		/* offset = 0x020 */
	uint32_t DMACSoftSReq;		/* offset = 0x024 */
	uint32_t DMACSoftLBReq;		/* offset = 0x028 */
	uint32_t DMACSoftLSReq;		/* offset = 0x02C */
	uint32_t DMAEmptySpace_1[52];
	DMACChannelTy DMACChannelReg[8];	/* offset = 0x100 */
} DMA_Typedef;

/** @brief GPIO */
typedef volatile struct {
	uint32_t gpio_dat;
	uint32_t gpio_dats;
	uint32_t gpio_datc;
	uint32_t gpio_pdis;
	uint32_t gpio_dir;
	uint32_t gpio_dirs;
	uint32_t gpio_dirc;
	uint32_t gpio_slpm;
	uint32_t gpio_afsa;
	uint32_t gpio_afsb;
	uint32_t reserved_1[(0x040 - 0x028) >> 2];
	uint32_t gpio_rimsc;
	uint32_t gpio_fimsc;
	uint32_t gpio_mis;
	uint32_t gpio_ic;
} t_gpio;

/** @brief FSMC */
typedef volatile struct {
	union {
		struct {
			uint32_t bank_enable:1;
			uint32_t muxed:1;
			uint32_t memory_type:2;
			uint32_t device_width:2;
			uint32_t rst_prwdwn:1;
			uint32_t w_prot:1;
			uint32_t burst_enable:1;
			uint32_t wait_pol:1;
			uint32_t wrap_support:1;
			uint32_t wait_during:1;
			uint32_t if_we:1;
			uint32_t frc_bus_turn:1;
			uint32_t extend_mode:1;
			uint32_t wait_asynch:1;
			uint32_t c_page_size:3;
			uint32_t c_burst_rw:1;
			uint32_t OEn_delay:1;
			uint32_t reserved:11;
		} bit;
		uint32_t reg;
	} fsmc_bcr0;		/* 0x0 */

	union {
		struct {
			uint32_t addr_st:4;
			uint32_t hold_addr:4;
			uint32_t data_st:8;
			uint32_t bus_turn:4;
			uint32_t burst_c_len:4;
			uint32_t data_lat:4;
			uint32_t access_mode:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} fsmc_btr0;		/* 0x4 */

	union {
		struct {
			uint32_t bank_enable:1;
			uint32_t muxed:1;
			uint32_t memory_type:2;
			uint32_t device_width:2;
			uint32_t rst_prwdwn:1;
			uint32_t w_prot:1;
			uint32_t burst_enable:1;
			uint32_t wait_pol:1;
			uint32_t wrap_support:1;
			uint32_t wait_during:1;
			uint32_t if_we:1;
			uint32_t frc_bus_turn:1;
			uint32_t extend_mode:1;
			uint32_t wait_asynch:1;
			uint32_t c_page_size:3;
			uint32_t c_burst_rw:1;
			uint32_t OEn_delay:1;
			uint32_t reserved:11;
		} bit;
		uint32_t reg;
	} fsmc_bcr1;		/* 0x8 */

	union {
		struct {
			uint32_t addr_st:4;
			uint32_t hold_addr:4;
			uint32_t data_st:8;
			uint32_t bus_turn:4;
			uint32_t burst_c_len:4;
			uint32_t data_lat:4;
			uint32_t access_mode:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} fsmc_btr1;		/* 0xc */

	union {
		struct {
			uint32_t bank_enable:1;
			uint32_t muxed:1;
			uint32_t memory_type:2;
			uint32_t device_width:2;
			uint32_t rst_prwdwn:1;
			uint32_t w_prot:1;
			uint32_t burst_enable:1;
			uint32_t wait_pol:1;
			uint32_t wrap_support:1;
			uint32_t wait_during:1;
			uint32_t if_we:1;
			uint32_t frc_bus_turn:1;
			uint32_t extend_mode:1;
			uint32_t wait_asynch:1;
			uint32_t c_page_size:3;
			uint32_t c_burst_rw:1;
			uint32_t OEn_delay:1;
			uint32_t reserved:11;
		} bit;
		uint32_t reg;
	} fsmc_bcr2;		/* 0x10 */

	union {
		struct {
			uint32_t addr_st:4;
			uint32_t hold_addr:4;
			uint32_t data_st:8;
			uint32_t bus_turn:4;
			uint32_t burst_c_len:4;
			uint32_t data_lat:4;
			uint32_t access_mode:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} fsmc_btr2;		/* 0x14 */

	uint8_t unused_0[0x40 - 0x18];

	union {
		struct {
			uint32_t reset:1;
			uint32_t wait_on:1;
			uint32_t enable:1;
			uint32_t device_type:1;
			uint32_t device_width:2;
			uint32_t ecc_enable:1;
			uint32_t ecc_plen:1;
			uint32_t addr_mux:1;
			uint32_t tclr:4;
			uint32_t tar:4;
			uint32_t page_size:3;
			uint32_t fifo_thresh:3;
			uint32_t ecc_mask:1;
			uint32_t reserved:8;
		} bit;
		uint32_t reg;
	} fsmc_pcr0;		/* 0x40 */

	union {
		struct {
			uint32_t int_re_stat:1;
			uint32_t int_le_stat:1;
			uint32_t int_fe_stat:1;
			uint32_t int_re_en:1;
			uint32_t int_le_en:1;
			uint32_t int_fe_en:1;
			uint32_t fifo_empty:1;
			uint32_t ecc_type:3;
			uint32_t errors:4;
			uint32_t code_type:1;
			uint32_t code_ready:1;
			uint32_t ecc_byte_13:8;
			uint32_t reserved:8;
		} bit;
		uint32_t reg;
	} fsmc_psr0;		/* 0x44 */

	union {
		struct {
			uint32_t t_set:8;
			uint32_t t_wait:8;
			uint32_t t_hold:8;
			uint32_t t_hiz:8;
		} bit;
		uint32_t reg;
	} fsmc_mem0;		/* 0x48 */

	union {
		struct {
			uint32_t t_set:8;
			uint32_t t_wait:8;
			uint32_t t_hold:8;
			uint32_t t_hiz:8;
		} bit;
		uint32_t reg;
	} fsmc_patt0;		/* 0x4c */

	union {
		struct {
			uint32_t t_set:8;
			uint32_t t_wait:8;
			uint32_t t_hold:8;
			uint32_t t_hiz:8;
		} bit;
		uint32_t reg;
	} fsmc_pio0;		/* 0x50 */

	uint32_t fsmc_eccr0[3];	/* 0x54 - 0x5c */

	union {
		struct {
			uint32_t reset:1;
			uint32_t wait_om:1;
			uint32_t enable:1;
			uint32_t device_type:1;
			uint32_t device_width:2;
			uint32_t ecc_enable:1;
			uint32_t ecc_plen:1;
			uint32_t addr_mux:1;
			uint32_t tclr:4;
			uint32_t tar:4;
			uint32_t page_size:3;
			uint32_t fifo_thresh:3;
			uint32_t ecc_mask:1;
			uint32_t reserved:8;
		} bit;
		uint32_t reg;
	} fsmc_pcr1;		/* 0x60 */

	union {
		struct {
			uint32_t int_re_stat:1;
			uint32_t int_le_stat:1;
			uint32_t int_fe_stat:1;
			uint32_t int_re_en:1;
			uint32_t int_le_en:1;
			uint32_t int_fe_en:1;
			uint32_t fifo_empty:1;
			uint32_t ecc_type:3;
			uint32_t errors:4;
			uint32_t code_type:1;
			uint32_t code_ready:1;
			uint32_t ecc_byte_13:8;
			uint32_t reserved:8;
		} bit;
		uint32_t reg;
	} fsmc_psr1;		/* 0x64 */

	union {
		struct {
			uint32_t t_set:8;
			uint32_t t_wait:8;
			uint32_t t_hold:8;
			uint32_t t_hiz:8;
		} bit;
		uint32_t reg;
	} fsmc_mem1;		/* 0x68 */

	union {
		struct {
			uint32_t t_set:8;
			uint32_t t_wait:8;
			uint32_t t_hold:8;
			uint32_t t_hiz:8;
		} bit;
		uint32_t reg;
	} fsmc_patt1;		/* 0x6c */

	union {
		struct {
			uint32_t t_set:8;
			uint32_t t_wait:8;
			uint32_t t_hold:8;
			uint32_t t_hiz:8;
		} bit;
		uint32_t reg;
	} fsmc_pio1;		/* 0x70 */

	uint32_t fsmc_eccr1[3];	/* 0x74 - 0x7c */

	uint8_t unused_1[0x104 - 0x80];

	union {
		struct {
			uint32_t add_set:4;
			uint32_t add_hold:4;
			uint32_t dat_ast:8;
			uint32_t bus_turn:4;
			uint32_t clk_div:4;
			uint32_t dat_lat:4;
			uint32_t acc_mode:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} fsmc_btw0;		/* 0x104 */

	uint32_t unused_2;

	union {
		struct {
			uint32_t add_set:4;
			uint32_t add_hold:4;
			uint32_t dat_ast:8;
			uint32_t bus_turn:4;
			uint32_t clk_div:4;
			uint32_t dat_lat:4;
			uint32_t acc_mode:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} fsmc_btw1;		/* 0x10c */

	uint32_t unused_3;

	union {
		struct {
			uint32_t add_set:4;
			uint32_t add_hold:4;
			uint32_t dat_ast:8;
			uint32_t bus_turn:4;
			uint32_t clk_div:4;
			uint32_t dat_lat:4;
			uint32_t acc_mode:2;
			uint32_t reserved:2;
		} bit;
		uint32_t reg;
	} fsmc_btw2;		/* 0x114 */

} t_fmsc;

/** @brief PMU */
typedef volatile struct {
	union {
		struct {
			uint32_t hwsby_lvi_ien:1;
			uint32_t hwsby_onoff_ien:1;
			uint32_t hwsby_ignkey_ien:1;
			uint32_t hwsby_vddok_fe_ien:1;
			uint32_t unused1:15;
			uint32_t lvi_vcheck_en:1;
			uint32_t onoff_hwsby_fullctrl:1;
			uint32_t onoff_wkup_fullctrl:1;
			uint32_t xcosc32k_bypass:1;
			uint32_t xcosc32k_en:1;
			uint32_t m3pad_clk32out_en:1;
			uint32_t ioctrl_gpioitf:1;
			uint32_t n2sbyctr_to:2;
			uint32_t sby2nctr_to:4;
		} bit;
		uint32_t reg;
	} ctrl_reg;		/* 0x0 */

	union {
		struct {
			uint32_t wkup_lvi_en:1;
			uint32_t wkup_onoff_en:1;
			uint32_t wkup_ignkey_en:1;
			uint32_t unused1:1;
			uint32_t wkup_gpio_en:8;
			uint32_t unused2:20;
		} bit;
		uint32_t reg;
	} src_sel_reg;		/* 0x4 */

	union {
		struct {
			uint32_t hwsby_lvi_en:1;
			uint32_t hwsby_onoff_en:1;
			uint32_t hwsby_ignkey_en:1;
			uint32_t hwsby_vddok_fe_en:1;
			uint32_t unused1:13;
			uint32_t swpreptosby:1;
			uint32_t swgotosby:1;
			uint32_t unused2:13;
		} bit;
		uint32_t reg;
	} stby_src_sel_reg;	/* 0x8 */

	union {
		struct {
			uint32_t activeedge_lvi:1;
			uint32_t activeedge_onoff:1;
			uint32_t activeedge_ignkey:1;
			uint32_t unused1:1;
			uint32_t activeedge_gpio:8;
			uint32_t unused2:20;
		} bit;
		uint32_t reg;
	} edge_sel_reg;		/* 0xc */

	union {
		struct {
			uint32_t hwsby_lvi_status:1;
			uint32_t hwsby_onoff_status:1;
			uint32_t hwsby_ignkey_status:1;
			uint32_t hwsby_vddok_fe_status:1;
			uint32_t unused1:15;
			uint32_t n2sbyctr_done:1;
			uint32_t unused2:8;
			uint32_t pmu_state:4;
		} bit;
		uint32_t reg;
	} nrm_stby_stat_reg;	/* 0x10 */

	union {
		struct {
			uint32_t wkup_status_lvi:1;
			uint32_t wkup_status_onoff:1;
			uint32_t wkup_status_ignkey:1;
			uint32_t unused1:1;
			uint32_t wkup_status_gpio:8;
			uint32_t wkup_status_rtc:1;
			uint32_t unused2:6;
			uint32_t sby2nctr_done:1;
			uint32_t wkup_status_porlvd:1;
			uint32_t unused3:7;
			uint32_t pmu_state:4;
		} bit;
		uint32_t reg;
	} stby_nrm_stat_reg;	/* 0x14 */

	union {
		struct {
			uint32_t pen_lvi:1;
			uint32_t pen_onoff:1;
			uint32_t pen_ignkey:1;
			uint32_t pen_vddok:1;
			uint32_t unused1:28;
		} bit;
		uint32_t reg;
	} ao_dedipad_pen_reg;	/* 0x18 */

	union {
		struct {
			uint32_t pupd_lvi:1;
			uint32_t pupd_onoff:1;
			uint32_t pupd_ignkey:1;
			uint32_t pupd_vddok:1;
			uint32_t unused1:28;
		} bit;
		uint32_t reg;
	} ao_dedipad_pupd_reg;	/* 0x1c */

	uint32_t scratchpad[4];
	uint32_t unused_2[(0x064 - 0x030) >> 2];
	uint32_t pmugenstatus;

	union {
		struct {
			uint32_t hwsby_lvi_status:1;
			uint32_t hwsby_onoff_status:1;
			uint32_t hwsby_ignkey_status:1;
			uint32_t hwsby_vddok_fe_status:1;
			uint32_t unused1:28;
		} bit;
		uint32_t reg;
	} nrm_stby_pending_stat_reg;	/* 0x68 */

	union {
		struct {
			uint32_t wkup_status_lvi:1;
			uint32_t wkup_status_onoff:1;
			uint32_t wkup_status_ignkey:1;
			uint32_t unused1:29;
		} bit;
		uint32_t reg;
	} stby_nrm_pending_stat_reg;	/* 0x6c */
} t_pmu;

/** @brief I2C */
typedef volatile struct {
	union {
		struct {
			uint32_t pe:1;
			uint32_t om:2;
			uint32_t sam:1;
			uint32_t sm:2;
			uint32_t sgcm:1;
			uint32_t ftx:1;
			uint32_t frx:1;
			uint32_t dma_tx_en:1;
			uint32_t dma_rx_en:1;
			uint32_t dma_sle:1;
			uint32_t lm:1;
			uint32_t fon:2;
			uint32_t res:17;
		} bit;
		uint32_t reg;	/* 0x0 */
	} i2c_cr;

	union {
		struct {
			uint32_t sa10:10;
			uint32_t res:6;
			uint32_t slsu:16;
		} bit;		/* 0x4 */
		uint32_t reg;
	} i2c_scr;

	union {
		struct {
			uint32_t mc:3;
			uint32_t res:29;
		} bit;
		uint32_t reg;	/* 0x08 */
	} i2c_hsmcr;

	union {
		struct {
			uint32_t op:1;
			uint32_t a10:10;
			uint32_t sb:1;
			uint32_t am:2;
			uint32_t p:1;
			uint32_t length:11;
			uint32_t res:6;
		} bit;
		uint32_t reg;	/* 0x0c */
	} i2c_mcr;

	union {
		struct {
			uint32_t tdata:8;
			uint32_t res:24;
		} bit;
		uint32_t reg;	/* 0x10 */
	} i2c_tfr;

	union {
		struct {
			uint32_t op:2;
			uint32_t status:2;
			uint32_t cause:3;
			uint32_t type:2;
			uint32_t length:11;
			uint32_t res:12;
		} bit;		/* 0x14 */
		uint32_t reg;
	} i2c_sr;

	union {
		struct {
			uint32_t rdata:8;
			uint32_t res:24;
		} bit;
		uint32_t reg;	/* 0x18 */
	} i2c_rfr;

	union {
		struct {
			uint32_t threshold_tx:10;
			uint32_t reserved:22;
		} bit;		/* 0x1c */
		uint32_t reg;
	} i2c_tftr;

	union {
		struct {
			uint32_t threshold_rx:10;
			uint32_t reserved:22;
		} bit;		/* 0x20 */
		uint32_t reg;
	} i2c_rftr;

	union {
		struct {
			uint32_t sbsize_rx:3;
			uint32_t burst_rx:1;
			uint32_t res0:4;
			uint32_t dbsize_tx:3;
			uint32_t burst_tx:1;
			uint32_t res1:20;
		} bit;		/* 0x24 */
		uint32_t reg;
	} i2c_dmar;

	union {
		struct {
			uint32_t brcnt2:16;
			uint32_t brcnt1:16;
		} bit;		/* 0x28 */
		uint32_t reg;
	} i2c_brcr;

	union {
		struct {
			uint32_t txfem:1;
			uint32_t txfnem:1;
			uint32_t txffm:1;
			uint32_t txfovrm:1;
			uint32_t rxfem:1;
			uint32_t rxfnfm:1;
			uint32_t rxffm:1;
			uint32_t res0:9;
			uint32_t rfsrm:1;
			uint32_t rfsem:1;
			uint32_t wtsrm:1;
			uint32_t mtdm:1;
			uint32_t stdm:1;
			uint32_t res1:3;
			uint32_t malm:1;
			uint32_t berrm:1;
			uint32_t res2:2;
			uint32_t mtdwsm:1;
			uint32_t res3:3;
		} bit;		/* 0x2c */
		uint32_t reg;
	} i2c_imscr;

	union {
		struct {
			uint32_t txfe:1;
			uint32_t txfne:1;
			uint32_t txff:1;
			uint32_t txfovr:1;
			uint32_t rxfe:1;
			uint32_t rxfnf:1;
			uint32_t rxff:1;
			uint32_t res0:9;
			uint32_t rfsr:1;
			uint32_t rfse:1;
			uint32_t wtsr:1;
			uint32_t mtd:1;
			uint32_t std:1;
			uint32_t res1:3;
			uint32_t mal:1;
			uint32_t berr:1;
			uint32_t res2:2;
			uint32_t mtdws:1;
			uint32_t res3:3;
		} bit;		/* 0x30 */
		uint32_t reg;
	} i2c_risr;

	union {
		struct {
			uint32_t txfemis:1;
			uint32_t txfnemis:1;
			uint32_t txffmis:1;
			uint32_t txfovrmis:1;
			uint32_t rxfemis:1;
			uint32_t rxfnfmis:1;
			uint32_t rxffmis:1;
			uint32_t res0:9;
			uint32_t rfsrmis:1;
			uint32_t rfsemis:1;
			uint32_t wtsrmis:1;
			uint32_t mtdmis:1;
			uint32_t stdmis:1;
			uint32_t res1:3;
			uint32_t malmis:1;
			uint32_t berrmis:1;
			uint32_t res2:2;
			uint32_t mtdwsmis:1;
			uint32_t res3:3;
		} bit;		/* 0x34 */
		uint32_t reg;
	} i2c_misr;

	union {
		struct {
			uint32_t res0:3;
			uint32_t txfovric:1;
			uint32_t res1:12;
			uint32_t rfsric:1;
			uint32_t rfseic:1;
			uint32_t wtsric:1;
			uint32_t mtdic:1;
			uint32_t stdic:1;
			uint32_t res2:3;
			uint32_t malic:1;
			uint32_t beric:1;
			uint32_t res3:2;
			uint32_t mtdwsic:1;
			uint32_t res4:3;
		} bit;		/* 0x38 */
		uint32_t reg;
	} i2c_icr;
} t_i2c;

/** @brief LCD */
typedef volatile struct {
	uint32_t lcd_tim0;		/* 0x0 */
	uint32_t lcd_tim1;		/* 0x4 */
	uint32_t lcd_tim2;		/* 0x8 */
	uint32_t lcd_tim3;		/* 0xc */
	uint32_t lcd_upbase;		/* 0x10 */
	uint32_t lcd_lpbase;		/* 0x14 */

	union {
		struct {
			uint32_t res1:1;
			uint32_t fuim:1;
			uint32_t lnbuim:1;
			uint32_t vcmpim:1;
			uint32_t mberim:1;
			uint32_t res2:27;
		} bit;
		uint32_t reg;
	} lcd_imsc;		/* 0x18 */

	union {
		struct {
			uint32_t lcden:1;
			uint32_t lcdbpp:3;
			uint32_t stnbw:1;
			uint32_t stntft:1;
			uint32_t stnmwd:1;
			uint32_t lcddual:1;
			uint32_t bgr:1;
			uint32_t bebo:1;
			uint32_t bepo:1;
			uint32_t lcdpwr:1;
			uint32_t lcdvcomp:2;
			uint32_t frmen:1;
			uint32_t hrtft:1;
			uint32_t wmlvl:1;
			uint32_t xbpp:2;
			uint32_t cdwid:2;
			uint32_t ceaen:1;
			uint32_t res1:10;
		} bit;
		uint32_t reg;
	} lcd_cr;		/* 0x1c */

	union {
		struct {
			uint32_t res1:1;
			uint32_t furis:1;
			uint32_t lnburis:1;
			uint32_t vcmpris:1;
			uint32_t merris:1;
			uint32_t res2:27;
		} bit;
		uint32_t reg;
	} lcd_ris;		/* 0x20 */

	union {
		struct {
			uint32_t res1:1;
			uint32_t fumis:1;
			uint32_t lnbumis:1;
			uint32_t vcmpmis:1;
			uint32_t mermis:1;
			uint32_t res2:27;
		} bit;
		uint32_t reg;
	} lcd_mis;		/* 0x24 */

	uint32_t lcd_upcur;		/* 0x28 */
	uint32_t lcd_lpcur;		/* 0x2c */

} t_clcd;

/** @brief SRC */
typedef volatile struct {
	union {
		struct {
			uint32_t mode_cr:3;
			uint32_t mode_status:4;
			uint32_t unused1:1;
			uint32_t remapclr:1;
			uint32_t remapstat:1;
			uint32_t rtt_en:1;
			uint32_t reserved1:1;
			uint32_t unused2:4;
			uint32_t timersel:8;
			uint32_t unused3:8;
		} bit;
		uint32_t reg;
	} ctrl;

	union {
		struct {
			uint32_t pll2im:1;
			uint32_t pll3im:1;
			uint32_t unused1:6;
			uint32_t single_eccerrim:8;
			uint32_t double_eccerrim:8;
			uint32_t unused2:8;
		} bit;
		uint32_t reg;
	} imctrl;

	union {
		struct {
			uint32_t pll2mis:1;
			uint32_t pll4mis:1;
			uint32_t unused1:6;
			uint32_t single_ecc_err:8;
			uint32_t double_ecc_err:8;
			uint32_t unused2:8;
		} bit;
		uint32_t reg;
	} imstat;

	union {
		struct {
			uint32_t mxtalover:1;
			uint32_t mxtalen:1;
			uint32_t xtaltimen:1;
			uint32_t mxtalstat:1;
			uint32_t mxtaltempr_di:1;
			uint32_t unused:11;
			uint32_t mxtaltime:16;
		} bit;
		uint32_t reg;
	} xtalcr;

	union {
		struct {
			uint32_t pll2over:1;
			uint32_t pll2en:1;
			uint32_t pll2stat:1;
			uint32_t unused1:2;
			uint32_t pll3en:1;
			uint32_t pll3stat:1;
			uint32_t plltimeen:1;
			uint32_t pllden:1;
			uint32_t plldstat:1;
			uint32_t pll4en:1;
			uint32_t pll4stat:1;
			uint32_t unused2:4;
			uint32_t pll2_to_c:16;
		} bit;
		uint32_t reg;
	} pllctrl;

	union {
		struct {
			uint32_t unused1:5;
			uint32_t a7_axprot:1;
			uint32_t unused2:26;
		} bit;
		uint32_t reg;
	} a7axprot;

	union {
		struct {
			uint32_t odf:4;
			uint32_t idf:3;
			uint32_t odf_strobe:1;
			uint32_t unused1:8;
			uint32_t ndiv:8;
			uint32_t cp:5;
			uint32_t unused2:3;
		} bit;
		uint32_t reg;
	} pll2fctrl;

	union {
		struct {
			uint32_t unused1:4;
			uint32_t idf:3;
			uint32_t unused2:9;
			uint32_t ndiv:8;
			uint32_t cp:5;
			uint32_t unused3:3;
		} bit;
		uint32_t reg;
	} pll3fctrl;

	union {
		struct {
			uint32_t pll3fi:16;
			uint32_t unused1:16;
		} bit;
		uint32_t reg;
	} pll3fctrl2;

	union {
		struct {
			uint32_t porrst:1;
			uint32_t pad_rst_stat:1;
			uint32_t wdg_rst_stat:1;
			uint32_t soft_rst:1;
			uint32_t m3_soft_rst_req:1;
			uint32_t ncpu_halt:1;
			uint32_t unused1:1;
			uint32_t remap0:1;
			uint32_t remap1:1;
			uint32_t mxtal_fre_sel:1;
			uint32_t ddr_reset_status:1;
			uint32_t unused2:21;
		} bit_sta1x95; /* sta1195 and sta1295 specific */
		struct {
			uint32_t porrst:1;
			uint32_t pad_rst_stat:1;
			uint32_t wdg_rst_stat:1;
			uint32_t soft_rst:1;
			uint32_t m3_soft_rst_req:1;
			uint32_t unused1:1;
			uint32_t remap0:1;
			uint32_t remap1:1;
			uint32_t remap2:1;
			uint32_t mxtal_fre_sel:3;
			uint32_t ddr_reset_status:1;
			uint32_t unused2:19;
		} bit_sta1385; /* sta1385 specific */
		uint32_t reg;
	} resstat;

	uint32_t unused_1;
	uint32_t unused_2;
	uint32_t pcken1;
	uint32_t pckdis1;
	uint32_t pckensr1;
	uint32_t pcksr1;

	union {
		struct {
			uint32_t clkout_div0:6;
			uint32_t clkout_sel0:3;
			uint32_t unused1:7;
			uint32_t clkout_div1:6;
			uint32_t clkout_sel1:3;
			uint32_t unused2:7;
		} bit;
		uint32_t reg;
	} clkocr;

	union {
		struct {
			uint32_t clcd:1;
			uint32_t sqi:2;
			uint32_t sdmmc0:2;
			uint32_t audio_ssm_clk:1;
			uint32_t audio_ssf_512:1;
			uint32_t can_ss:1;
			uint32_t sdmmc1:2;
			uint32_t audio_clk_rst:1;
			uint32_t clcd_div_value:6;
			uint32_t gfx_sel:1;
			uint32_t vdo_sel:1;
			uint32_t sdmmc2:2;
			uint32_t pixclk_avl:1;
			uint32_t unused:10;
		} bit;
		uint32_t reg;
	} clkdivcr;

	union {
		struct {
			uint32_t cpu0_dbgen:1;
			uint32_t cpu1_dbgen:1;
			uint32_t cpu_niden:1;
			uint32_t cpu_spiden:1;
			uint32_t cpu_spinden:1;
			uint32_t sys_cti_en:1;
			uint32_t sys_stm_tpiu_en:1;
			uint32_t stm_niden:1;
			uint32_t stm_spiden:1;
			uint32_t stm_spniden:1;
			uint32_t stm_dbgswen:1;
			uint32_t stm_qreqn:1;
			uint32_t a7_tdo_mux_sel:1;
			uint32_t audio_tdo_mux:1;
			uint32_t audio_tms_mux:1;
			uint32_t tdi_demux:1;
			uint32_t unused:16;
		} bit;
		uint32_t reg;
	} debug;

	union {
		struct {
			uint32_t unused_1:16;
			uint32_t ndiv:8;
			uint32_t unused_2:8;
		} bit;
		uint32_t reg;
	} plldfctrl;

	uint32_t unused_3;

	union {
		struct {
			uint32_t odf:4;
			uint32_t idf:3;
			uint32_t strobe_odf:1;
			uint32_t unused_1:8;
			uint32_t ndiv:8;
			uint32_t cp:5;
			uint32_t unused_2:3;
		} bit;
		uint32_t reg;
	} pll4fctrl;

	union {
		struct {
			uint32_t mod_period:13;
			uint32_t strobe:1;
			uint32_t strobe_bypass:1;
			uint32_t spread_ctrl:1;
			uint32_t sscg_ctrl:1;
			uint32_t inc_step:15;
		} bit;
		uint32_t reg;
	} scpll4sscgctrl;

	union {
		struct {
			uint32_t fail_clr:1;
			uint32_t fail_addr:12;
			uint32_t unused:19;
		} bit;
		uint32_t reg;
	} eccfailadd;

	union {
		struct {
			uint32_t single_err_ecc:8;
			uint32_t double_err_ecc:8;
			uint32_t unused:15;
			uint32_t ecc_bypass:1;
		} bit;
		uint32_t reg;
	} eccforceadd;

	uint32_t unused1;

	uint32_t pcken2;
	uint32_t pckdis2;
	uint32_t pckensr2;
	uint32_t pcksr2;

	union {
		struct {
			uint32_t clkout_div2:6;
			uint32_t clkout_sel2:3;
			uint32_t clkout_div3:6;
			uint32_t clkout_sel3:3;
			uint32_t clkout_div4:6;
			uint32_t unused:8;
		} bit;
		uint32_t reg;
	} clkocr1;


} t_src_m3;

/**
 * @struct SRC-A7
 * @brief defines the System Reset Controller register map for the Application
 * Processor (Cortex-A7)
 */
typedef volatile struct {
	union {
		struct {
			uint32_t pllim1en:1;
			uint32_t pllim3en:1;
			uint32_t nreset_req_en:1;
			uint32_t plldimen:1;
			uint32_t unused:28;
		} bit;
		uint32_t reg;
	} scimctrl_lo;

	union {
		struct {
			uint32_t pll1imstat:1;
			uint32_t pll3imstat:1;
			uint32_t nreset_int_stat:1;
			uint32_t plldimstat:1;
			uint32_t unused:28;
		} bit;
		uint32_t reg;
	} scimstat_lo;

	uint32_t unused_1;
	uint32_t unused_2;
	uint32_t unused_3;
	uint32_t unused_4;

	union {
		struct {
			uint32_t odf:4;
			uint32_t odf_strobe:1;
			uint32_t strobe:1;
			uint32_t strobe_bypass:1;
			uint32_t fractl:1;
			uint32_t ditherdis:2;
			uint32_t unused:22;
		} bit;
		uint32_t reg;
	} scpll3fctrl;

	union {
		struct {
			uint32_t softresstat:1;
			uint32_t watresstat:1;
			uint32_t nreset:1;
			uint32_t remap2:1;
			uint32_t remap1:1;
			uint32_t mxtal_freq_sel:1;
			uint32_t unused:26;
		} bit;
		uint32_t reg;
	} resstat;

	union {
		struct {
			uint32_t hclk_div:3;
			uint32_t unused_1:4;
			uint32_t etm_trace:2;
			uint32_t clk_source:1;
			uint32_t unused_2:22;
		} bit;
		uint32_t reg;
	} scclkdivcr;

	uint32_t unused_5;

	uint32_t pcken0;
	uint32_t pckdis0;
	uint32_t pckensr0;
	uint32_t pcksr0;
	uint32_t scdebug;

	union {
		struct {
			uint32_t pll_odf:3;
			uint32_t unused:29;
		} bit;
		uint32_t reg;
	} scplldfctrl;

	union {
		struct {
			uint32_t unused_1:14;
			uint32_t gfx_sw_rst:1;
			uint32_t ddr_axi_rst:1;
			uint32_t unused_2:16;
		} bit;
		uint32_t reg;
	} scresctrl1;

	uint32_t pcken1;
	uint32_t pckdis1;
	uint32_t pckensr1;
	uint32_t pcksr1;
} t_src_a7;

/** @brief NIC */
typedef volatile struct {

	union {
		struct {
			uint32_t remap:8;
			uint32_t res:24;
		} bit;
		uint32_t reg;
	} acr_remap;		/* 0x0: REMAP Config => TC3P only */

	uint32_t res_1;		/* 0x4 */

	union {
		struct {
			uint32_t reg0:1;  /* 0x0000_0000 - 0x0001_FFFF */
			uint32_t reg1:1;  /* 0x0002_0000 - 0x0003_FFFF */
			uint32_t reg2:1;  /* 0x0004_0000 - 0x0005_FFFF */
			uint32_t reg3:1;  /* 0x0006_0000 - 0x0007_FFFF */
			uint32_t reg4:1;  /* 0x7000_0000 - 0x7001_FFFF */
			uint32_t reg5:1;  /* 0x7002_0000 - 0x7003_FFFF */
			uint32_t reg6:1;  /* 0x7004_0000 - 0x7005_FFFF */
			uint32_t reg7:1;  /* 0x7006_0000 - 0x7007_FFFF */
			uint32_t res:24;
		} bit;
		uint32_t reg;
	} acr_security0;	/* 0x8: eSRAM (S0) */

	union {
		struct {
			uint32_t a7_pll:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security1;	/* 0xC: A7 PLL Config Space (S14) */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t reg2:1;
			uint32_t reg3:1;
			uint32_t reg4:1;
			uint32_t reg5:1;
			uint32_t reg6:1;
			uint32_t reg7:1;
			uint32_t reg8:1;
			uint32_t reg9:1;
			uint32_t reg10:1;
			uint32_t reg11:1;
			uint32_t reg12:1;
			uint32_t reg13:1;
			uint32_t reg14:1;
			uint32_t reg15:1;
			uint32_t res:16;
		} bit;
		uint32_t reg;
	} acr_security2;	/* 0x10: DDR port 3 (S73) */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t reg2:1;
			uint32_t reg3:1;
			uint32_t reg4:1;
			uint32_t reg5:1;
			uint32_t reg6:1;
			uint32_t reg7:1;
			uint32_t reg8:1;
			uint32_t reg9:1;
			uint32_t reg10:1;
			uint32_t reg11:1;
			uint32_t reg12:1;
			uint32_t reg13:1;
			uint32_t reg14:1;
			uint32_t reg15:1;
			uint32_t res:16;
		} bit;
		uint32_t reg;
	} acr_security3;	/* 0x14: FSMC (S3) */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t reg2:1;
			uint32_t reg3:1;
			uint32_t reg4:1;
			uint32_t reg5:1;
			uint32_t reg6:1;
			uint32_t reg7:1;
			uint32_t reg8:1;
			uint32_t reg9:1;
			uint32_t reg10:1;
			uint32_t reg11:1;
			uint32_t reg12:1;
			uint32_t reg13:1;
			uint32_t reg14:1;
			uint32_t reg15:1;
			uint32_t res:16;
		} bit;
		uint32_t reg;
	} acr_security4;	/* 0x18: SQIO AHB 0 (S4) */

	union {
		struct {
			uint32_t c3_apb:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security5;	/* 0x1C: C3 APB4 (S83) => A5 only */

	union {
		struct {
			uint32_t rtc:1;
			uint32_t eft3:1;
			uint32_t eft4:1;
			uint32_t can1:1;	/* => A5 only */
			uint32_t gpio_s:1;
			uint32_t uart0:1;
			uint32_t i2c0:1;
			uint32_t ssp0:1;
			uint32_t res:24;
		} bit;
		uint32_t reg;
	} acr_security6;	/* 0x20: APB1 IPs (S5 to S12) */

	union {
		struct {
			uint32_t cmu0:1;
			uint32_t cmu1:1;
			uint32_t cmu2:1;
			uint32_t cmu3:1;
			uint32_t cmu4:1;
			uint32_t cmu5:1;
			uint32_t cmu6:1;
			uint32_t res7:1;
			uint32_t fccu:1;
			uint32_t crc:1;
			uint32_t res10:1;
			uint32_t otfdec:1;
			uint32_t res:20;
		} bit;
		uint32_t reg;
	} acr_security7;	/* 0x24: Safety IPs (S114 to S123) => TC3P only */

	uint32_t res_2;		/* 0x28 */

	union {
		struct {
			uint32_t uart1:1;
			uint32_t uart2:1;
			uint32_t uart3:1;
			uint32_t i2c2:1;
			uint32_t i2c1:1;
			uint32_t ssp2:1;
			uint32_t ssp1:1;
			uint32_t sdmmc1:1;
			uint32_t eth0:1;
			uint32_t eth1:1;
			uint32_t res:22;
		} bit;
		uint32_t reg;
	} acr_security9;	/* 0x2C: APB0 IPs (S25 to S32, S78, S79) => TC3P only */

	union {
		struct {
			uint32_t a7_src:1;
			uint32_t adc:1;
			uint32_t gpio:1;
			uint32_t a7_wdg:1;
			uint32_t mtu1:1;
			uint32_t mtu0:1;
			uint32_t eft2:1;
			uint32_t eft1:1;
			uint32_t eft0:1;
			uint32_t mb_a7_m3:1;
			uint32_t mb_m3_a7:1;
			uint32_t res:21;
		} bit;
		uint32_t reg;
	} acr_security10;	/* 0x30: APB3 IPs (S34 to S44) => TC3P only */

	union {
		struct {
			uint32_t msp0:1;
			uint32_t msp1:1;
			uint32_t msp2:1;
			uint32_t res:29;
		} bit;
		uint32_t reg;
	} acr_security11;	/* 0x34: MSP-0/1/2 (S51 to S53) => TC3P only */

	union {
		struct {
			uint32_t hsem:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security12;	/* 0x38: HSEM (S45) => TC3P only */

	union {
		struct {
			uint32_t canss:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security13;	/* 0x3C: All IPs CAN SubSystem (S13) */

	union {
		struct {
			uint32_t a7_misc:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security14;	/* 0x40: A7 MISC Regs (S56) */

	uint32_t res_3;		/* 0x44: SHA2 (S91) => Reserved */

	union {
		struct {
			uint32_t dma_s0:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security16;	/* 0x48: DMA S0 (S16) => TC3P only */

	union {
		struct {
			uint32_t usb0:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security17;	/* 0x4C: USB0 OTG (S17) => TC3P only */

	union {
		struct {
			uint32_t usb1:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security18;	/* 0x50: USB1 OTG (S18) => TC3P only */

	union {
		struct {
			uint32_t stm:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security19;	/* 0x54: STM 500 (S103) => TC3P only */

	union {
		struct {
			uint32_t ts_os0:1;
			uint32_t ts_os1:1;
			uint32_t res:30;
		} bit;
		uint32_t reg;
	} acr_security20;	/* 0x58: TS OS port 0 & 1 (S105, S106) => TC3P only */

	union {
		struct {
			uint32_t ts_dbg:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security21;	/* 0x5C: TS Debug (S107) => TC3P only */

	uint32_t res_4;		/* 0x60 */

	union {
		struct {
			uint32_t dma_s1:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security23;	/* 0x64: DMA S1 (S60) => TC3P only */

	union {
		struct {
			uint32_t sdio0:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security24;	/* 0x68: SDIO 0 (S33) => TC3P only */

	union {
		struct {
			uint32_t flash_cache:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security25;	/* 0x6C: Flash Cache IP (S109) => TC3P only */

	uint32_t res_5[2];	/* 0x70 - 0x74 */

	union {
		struct {
			uint32_t a7_dp:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security28;	/* 0x78: A7 Debug Port (S54) */

	union {
		struct {
			uint32_t ddr_ctrl:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security29;	/* 0x7C: DDR Ctrl (S55) */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t res:30;
		} bit;
		uint32_t reg;
	} acr_security30;	/* 0x80: SQIO AHB 1 (S67) => A5 only */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t reg2:1;
			uint32_t reg3:1;
			uint32_t reg4:1;
			uint32_t reg5:1;
			uint32_t reg6:1;
			uint32_t reg7:1;
			uint32_t reg8:1;
			uint32_t reg9:1;
			uint32_t reg10:1;
			uint32_t reg11:1;
			uint32_t reg12:1;
			uint32_t reg13:1;
			uint32_t reg14:1;
			uint32_t reg15:1;
			uint32_t res:16;
		} bit;
		uint32_t reg;
	} acr_security31;	/* 0x84: DDR Port 0 (S70) */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t reg2:1;
			uint32_t reg3:1;
			uint32_t reg4:1;
			uint32_t reg5:1;
			uint32_t reg6:1;
			uint32_t reg7:1;
			uint32_t reg8:1;
			uint32_t reg9:1;
			uint32_t reg10:1;
			uint32_t reg11:1;
			uint32_t reg12:1;
			uint32_t reg13:1;
			uint32_t reg14:1;
			uint32_t reg15:1;
			uint32_t res:16;
		} bit;
		uint32_t reg;
	} acr_security32;	/* 0x88: DDR Port 1 (S71) */

	union {
		struct {
			uint32_t reg0:1;
			uint32_t reg1:1;
			uint32_t reg2:1;
			uint32_t reg3:1;
			uint32_t reg4:1;
			uint32_t reg5:1;
			uint32_t reg6:1;
			uint32_t reg7:1;
			uint32_t reg8:1;
			uint32_t reg9:1;
			uint32_t reg10:1;
			uint32_t reg11:1;
			uint32_t reg12:1;
			uint32_t reg13:1;
			uint32_t reg14:1;
			uint32_t reg15:1;
			uint32_t res:16;
		} bit;
		uint32_t reg;
	} acr_security33;	/* 0x8C: DDR Port 2 (S72) */

	union {
		struct {
			uint32_t fdcan:1;
			uint32_t ddr_phy:1;
			uint32_t res:30;
		} bit;
		uint32_t reg;
	} acr_security34;	/* 0x90: FDCAN (S74) and DDR PHY (S81) */

	union {
		struct {
			uint32_t uart4_5:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security35;	/* 0x94: UART_4_5 (S86) */

	union {
		struct {
			uint32_t res0:1;
			uint32_t res1:1;
			uint32_t mb_a7_hsm:1;
			uint32_t mb_hsm_a7:1;
			uint32_t res4:1;
			uint32_t res5:1;
			uint32_t mb_m3_hsm:1;
			uint32_t mb_hsm_m3:1;
			uint32_t thsens:1;
			uint32_t res:23;
		} bit;
		uint32_t reg;
	} acr_security36;	/* 0x98: APB3 IPs (S95, S96, S99, S100, S104) => TC3P only */

	uint32_t res_7;		/* 0x9C */

	union {
		struct {
			uint32_t safmem:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security38;	/* 0xA0: C3 SAFMEM (S82) => A5 only */

	union {
		struct {
			uint32_t c3_ahb:1;
			uint32_t res:31;
		} bit;
		uint32_t reg;
	} acr_security39;	/* 0xA4: C3 AHB (S79) => A5 only */

	union {
		struct {
			uint32_t res0:1;
			uint32_t flexray:1;
			uint32_t res2:1;
			uint32_t res:29;
		} bit;
		uint32_t reg;
	} acr_security40;	/* 0xA8: Flexray (S89) => TC3P only */

} t_nic;

/** @brief A7 MISC */
typedef volatile struct {

	/* 0x0 */
	union {
		struct {
			uint32_t reserved_1:29;
			uint32_t i2c2_hs_support:1;
			uint32_t i2c1_hs_support:1;
			uint32_t i2c0_hs_support:1;
		} bit;
		uint32_t reg;
	} io_driver_reg;

	/* 0x4 */
	union {
		struct {
			uint32_t reserved_1:1;
			uint32_t ssp1_rx:1;
			uint32_t ssp2_rx:1;
			uint32_t reserved_2:1;
			uint32_t ssp1_tx:1;
			uint32_t ssp2_tx:1;
			uint32_t reserved_3:1;
			uint32_t uart1_rx:1;
			uint32_t uart2_rx:1;
			uint32_t uart3_rx:1;
			uint32_t reserved_4:1;
			uint32_t uart1_tx:1;
			uint32_t uart2_tx:1;
			uint32_t uart3_tx:1;
			uint32_t msp0_tx:1;
			uint32_t msp1_tx:1;
			uint32_t msp2_tx:1;
			uint32_t msp0_rx:1;
			uint32_t msp1_rx:1;
			uint32_t msp2_rx:1;
			uint32_t sdmmc0_mcidmaclr:1;
			uint32_t sdmmc1_mcidmaclr:1;
			uint32_t vip_req_even:1;
			uint32_t vip_req_odd:1;
			uint32_t reserved_5:8;
		} bit;
		uint32_t reg;
	} dma_sel;

	/* 0x8 */
	union {
		struct {
			uint32_t reserved_1:12;
			uint32_t sdmmc0_clk_npu:1;
			uint32_t sdmmc0_clk_npd:1;
			uint32_t sdmmc0_cmd_npu:1;
			uint32_t sdmmc0_cmd_npd:1;
			uint32_t sdmmc0_d0_npu:1;
			uint32_t sdmmc0_d0_npd:1;
			uint32_t sdmmc0_d1_npu:1;
			uint32_t sdmmc0_d1_npd:1;
			uint32_t sdmmc0_d2_npu:1;
			uint32_t sdmmc0_d2_npd:1;
			uint32_t sdmmc0_d3_npu:1;
			uint32_t sdmmc0_d3_npd:1;
			uint32_t reserved_2:8;
		} bit;
		uint32_t reg;
	} misc_reg1; /* IOMUX */

	/* 0xC */
	union {
		struct {
			uint32_t reserved_1:20;
			uint32_t spdif_rx_pad_sel:1;
			uint32_t sai2rx_en:1;
			uint32_t reserved_2:8;
			uint32_t uart1_bt_en:1;
			uint32_t reserved_3:1;
		} bit;
		uint32_t reg;
	} misc_reg2; /* IOMUX */

	/* 0x10 */
	union {
		struct {
			uint32_t reserved_1:30;
			uint32_t sdio_voltage_select:1;
			uint32_t sdio_fbclk_select:1;
		} bit;
		uint32_t reg;
	} misc_reg3; /* SDIO */

	/* 0x14 */
	union {
		struct {
			uint32_t reg_pol_even:1;
			uint32_t reg_pol_odd:1;
			uint32_t clk_sel:1;
			uint32_t reserved_1:29;
		} bit;
		uint32_t reg;
	} misc_reg4; /* Display */

	/* 0x18 */
	union {
		struct {
			uint32_t csysreq_0:1;
			uint32_t csysreq_1:1;
			uint32_t csysreq_2:1;
			uint32_t csysreq_3:1;
			uint32_t csysreq_ddrc:1;
			uint32_t reserved_1:27;
		} bit;
		uint32_t reg;
	} misc_reg5; /* DDR Controller */

	/* 0x1C */
	union {
		struct {
			uint32_t comp_nasrc_readbit:7;
			uint32_t compok_readbit:1;
			uint32_t compen_regbit:1;
			uint32_t comptq_regbit:1;
			uint32_t compfreeze_regbit:1;
			uint32_t compen_sel:2;
			uint32_t reserved_1:19;
		} bit;
		uint32_t reg;
	} misc_reg6; /* Compensation cell */

	/* 0x20 */
	union {
		struct {
			uint32_t rtc_secmode:7;
			uint32_t u_dma0_secmode:1;
			uint32_t u_dma1_secmode:1;
			uint32_t reserved_1:23;
		} bit;
		uint32_t reg;
	} misc_reg7; /* DMA 0 - 1 / RTL secmode */

	/* 0x24 */
	union {
		struct {
			uint32_t pd1v2_1v8reg:1;
			uint32_t mlvdpdlv_1v1reg:1;
			uint32_t dlvdpdlv_1v1reg:1;
			uint32_t reserved_1:29;
		} bit;
		uint32_t reg;
	} misc_reg8; /* USB vreg PD */

	/* 0x28 */
	union {
		struct {
			uint32_t str_adc_tst_en:1;
			uint32_t mic_adc_tst_en:1;
			uint32_t str_dac0_tst_en:1;
			uint32_t str_dac1_tst_en:1;
			uint32_t str_dac2_tst_en:1;
			uint32_t str_mic_adc_lpbk_tst_en:1;
			uint32_t adc_dac_slave_mode_tst_en:1;
			uint32_t pll1_tst_en:1;
			uint32_t pll2_tst_en:1;
			uint32_t pll3_tst_en:1;
			uint32_t psc24m_tst_en:1;
			uint32_t rcosc_tst_en:1;
			uint32_t rcosc_power_down:1;
			uint32_t lpreg_tst_en:1;
			uint32_t usbphy0_jtag_tst_en:1;
			uint32_t usbphy1_jtag_tst_en:1;
			uint32_t debug_sel0:5;
			uint32_t reserved_1:3;
			uint32_t iddq_en_for_pd:1;
			uint32_t reserved_2:7;
		} bit;
		uint32_t reg;
	} misc_reg9;

	/* 0x2C */
	union {
		struct {
			uint32_t phy_intf_sel:3;
			uint32_t csysreq_i:1;
			uint32_t reserved_1:28;
		} bit;
		uint32_t reg;
	} misc_reg10; /* Ethernet */

	/* 0x30 */
	union {
		struct {
			uint32_t dfi_alert_err_intr:1;
			uint32_t aw_poison_intr0:1;
			uint32_t ar_poison_intr0:1;
			uint32_t aw_poison_intr1:1;
			uint32_t ar_poison_intr1:1;
			uint32_t aw_poison_intr2:1;
			uint32_t ar_poison_intr2:1;
			uint32_t aw_poison_intr3:1;
			uint32_t ar_poison_intr3:1;
			uint32_t reserved_1:23;
		} bit;
		uint32_t reg;
	} ddr_int_en;

	/* 0x34 */
	union {
		struct {
			uint32_t lpi_intr0:1;
			uint32_t sbd_intr0:1;
			uint32_t sbd_perch_tx_intr_o:3;
			uint32_t sbd_perch_rx_intr_o:1;
			uint32_t pmt_intr_o:1;
			uint32_t u_eth_aux_0_mux_s:2;
			uint32_t u_eth_aux_1_mux_s:2;
			uint32_t u_eth_aux_0_mux_sync_en:1;
			uint32_t u_eth_aux_1_mux_sync_en:1;
			uint32_t reserved_1:19;
		} bit;
		uint32_t reg;
	} eth_int_en;

	/* 0x38 */
	union {
		struct {
			uint32_t irq_scanline_o:1;
			uint32_t irq_fifo_underrun_o:1;
			uint32_t irq_bus_error_o:1;
			uint32_t irq_reg_reload_o:1;
			uint32_t reserved_1:28;
		} bit;
		uint32_t reg;
	} clcd_int_en;

	/* 0x3C */
	union {
		struct {
			uint32_t pmuirq:2;
			uint32_t ctiirq:2;
			uint32_t commrx:2;
			uint32_t commtx:2;
			uint32_t n_axi_err_irq:1;
			uint32_t reserved_1:23;
		} bit;
		uint32_t reg;
	} cpu_int_en;

	/* 0x40 */
	union {
		struct {
			uint32_t sdio_ahb_intr:1;
			uint32_t sdio_ahb_wake_up:1;
			uint32_t reserved_1:30;
		} bit;
		uint32_t reg;
	} misc_reg11; /* SDIO */

	/* 0x44 */
	union {
		struct {
			uint32_t reserved_1:1;
			uint32_t fdcan0_it_line_0_mask:1;
			uint32_t fdcan1_it_line_0_mask:1;
			uint32_t reserved_2:1;
			uint32_t fdcan0_it_line_1_mask:1;
			uint32_t fdcan1_it_line_1_mask:1;
			uint32_t fdcan_cccu_it_line_mask:1;
			uint32_t reserved_3:25;
		} bit;
		uint32_t reg;
	} misc_reg12; /* FD CAN */

	/* 0x48 */
	union {
		struct {
			uint32_t reserved_1:31;
			uint32_t sleep_debug:1;
		} bit;
		uint32_t reg;
	} misc_reg13;

	/* 0x4C */
	union {
		struct {
			uint32_t reserved_1:8;
			uint32_t corecfg_clock_mult:8;
			uint32_t corecfg_slottype:2;
			uint32_t reserved_2:3;
			uint32_t corecfg_tuningforsdr50:1;
			uint32_t corecfg_asynchintrsupport:1;
			uint32_t corecfg_admc2support:1;
			uint32_t corecfg_baseclkfreq:8;
		} bit;
		uint32_t reg;
	} misc_reg14;

	/* 0x50 */
	union {
		struct {
			uint32_t u_evt_mcan_mux_s:2;
			uint32_t u_swt_mcan_mux_s0:1;
			uint32_t reserved_1:1;
			uint32_t u_swt_mcan_mux_s1:1;
			uint32_t u_swt_mcan_mux_1_s:2;
			uint32_t reserved_2:25;
		} bit;
		uint32_t reg;
	} misc_reg15;

	/* 0x54 */
	union {
		struct {
			uint32_t nporeset_varm:1;
			uint32_t ncpuporeset:2;
			uint32_t nhardreset:1;
			uint32_t axi_force_clken:1;
			uint32_t ace_force_clken:1;
			uint32_t ecc_bypass:1;
			uint32_t reserved_1:1;
			uint32_t a7_wdog_reset:1;
			uint32_t reserved_2:1;
			uint32_t teinit_i:2;
			uint32_t cfgend_i:2;
			uint32_t reserved_3:1;
			uint32_t cfgdisable:1;
			uint32_t reserved_4:1;
			uint32_t ls:1;
			uint32_t stdby:1;
			uint32_t ape_clamp:1;
			uint32_t cp15disable_i:2;
			uint32_t sync2n3:1;
			uint32_t reserved_5:1;
			uint32_t broadcastinner:1;
			uint32_t broadcastouter:1;
			uint32_t broadcastcachemaint:1;
			uint32_t bridge_fct_iso:1;
			uint32_t outclamp_i:1;
			uint32_t reserved_6:2;
			uint32_t sysbardisable:1;
		} bit;
		uint32_t reg;
	} misc_reg16; /* A7SS */

	/* 0x58 */
	union {
		struct {
			uint32_t smpnamp_o:2;
			uint32_t reserved_1:2;
			uint32_t standbywfi:2;
			uint32_t standbywfi_l2:1;
			uint32_t standbywfe:2;
			uint32_t axi_en_flag:1;
			uint32_t reserved_2:6;
			uint32_t jtagtop:1;
			uint32_t jtagnsw:1;
			uint32_t dbgack:2;
			uint32_t dbgnopwrdwn:2;
			uint32_t etmstandbywfx:2;
			uint32_t reserved_3:8;
		} bit;
		uint32_t reg;
	} misc_reg17; /* A7SS */

	/* 0x5C */
	union {
		struct {
			uint32_t eft0_ocmp1:1;
			uint32_t eft1_ocmp1:1;
			uint32_t eft2_ocmp1:1;
			uint32_t eft3_ocmp1:1;
			uint32_t eft4_ocmp1:1;
			uint32_t reserved_1:27;
		} bit;
		uint32_t reg;
	} misc_reg18; /* EFT */

	uint32_t unused1[(0x108 - 0x60) >> 2];

	/* 0x108 */
	union {
		struct {
			uint32_t unused:31;
			uint32_t soc_uart_select:1;
		} bit;
		uint32_t reg;
	} misc_reg66;

	/* 0x10C */
	union {
		struct {
			uint32_t dsp_clk_select:2;
			uint32_t uart_4_5_clk_select:2;
			uint32_t unused:16;
			uint32_t dsp_clk_div_factor:3;
			uint32_t uart_4_5_clk_div_factor:3;
			uint32_t grfi_clk_div_factor:3;
			uint32_t tde_clk_div_factor:3;
		} bit;
		uint32_t reg;
	} misc_reg67;

} t_misc;

/** @brief MMC ARM PL180 IP (MMCI) */
typedef volatile struct {
	uint32_t mmc_power;		/* 0x00 */
	uint32_t mmc_clock;		/* 0x04 */
	uint32_t mmc_argument;		/* 0x08 */
	uint32_t mmc_command;		/* 0x0c */
	uint32_t mmc_resp_command;	/* 0x10 */
	uint32_t mmc_response0;		/* 0x14 */
	uint32_t mmc_response1;		/* 0x18 */
	uint32_t mmc_response2;		/* 0x1c */
	uint32_t mmc_response3;		/* 0x20 */
	uint32_t mmc_data_timer;	/* 0x24 */
	uint32_t mmc_data_length;	/* 0x28 */
	uint32_t mmc_data_ctrl;		/* 0x2c */
	uint32_t mmc_data_count;	/* 0x30 */
	uint32_t mmc_status;		/* 0x34 */
	uint32_t mmc_clear;		/* 0x38 */
	uint32_t mmc_mask0;		/* 0x3c */
	uint32_t reserved;		/* 0x40 */
	uint32_t mmc_select;		/* 0x44 */
	uint32_t mmc_fifo_count;	/* 0x48 */
	uint32_t unused1[(0x80 - 0x4C) >> 2];
	uint32_t mmc_fifo;		/* 0x80 */
	uint32_t unused2[(0xC0 - 0x84) >> 2];
	uint32_t mmc_dbtimer;		/* 0xC0 */
	uint32_t unused3[(0xFE0 - 0xC4) >> 2];
	uint32_t mmc_periph_id0;	/* 0xFE0 */
	uint32_t mmc_periph_id1;	/* 0xFE4 */
	uint32_t mmc_periph_id2;	/* 0xFE8 */
	uint32_t mmc_periph_id3;	/* 0xFEC */
	uint32_t mmc_pcell_id0;		/* 0xFF0 */
	uint32_t mmc_pcell_id1;		/* 0xFF4 */
	uint32_t mmc_pcell_id2;		/* 0xFF8 */
	uint32_t mmc_pcell_id3;		/* 0xFFc */
} t_mmc;

/** @brief SDHC MMC Arasan IP registers */
typedef volatile struct {
	uint32_t sdmasysaddr;		/* 0x00 */
	uint16_t blocksize;		/* 0x04 */
	uint16_t blockcount;		/* 0x06 */
	uint32_t argument1;		/* 0x08 */
	uint16_t transfermode;		/* 0x0C */
	uint16_t command;		/* 0x0E */
	uint32_t response0;		/* 0x10 */
	uint32_t response1;		/* 0x14 */
	uint32_t response2;		/* 0x18 */
	uint32_t response3;		/* 0x1C */
	uint32_t dataport;		/* 0x20 */
	uint32_t presentstate;		/* 0x24 */
	uint8_t  hostcontrol1;		/* 0x28 */
	union {
		struct {
			uint8_t sdbuspower:1;
			uint8_t sdbusvoltage:3;
			uint8_t hwreset:1;
			uint8_t reserved:3;
		} bit;
		uint8_t reg;
	} powercontrol;			/* 0x29 */
	uint8_t   blockgapcontrol;	/* 0x2A */
	uint8_t   wakeupcontrol;	/* 0x2B */
	union {
		struct {
			uint16_t intclkena:1;
			uint16_t intclkstable:1;
			uint16_t sdclkena:1;
			uint16_t reserved:2;
			uint16_t clkgensel:1;
			uint16_t sdclkfreqsel_upperbits:2;
			uint16_t sdclkfreqsel:8;
		} bit;
		uint16_t  reg;
	} clockcontrol;				/* 0x2C */
	uint8_t timeoutcontrol;			/* 0x2E */
	uint8_t softwarereset;			/* 0x2F */
	uint32_t int_sts;			/* 0x30 */
	uint32_t int_sts_ena;			/* 0x34 */
	uint32_t int_sig_ena;			/* 0x38 */
	uint16_t autocmderrsts;			/* 0x3C */
	uint16_t hostcontrol2;			/* 0x3E */
	uint32_t capabilities31_0;		/* 0x40 */
	uint32_t capabilities63_32;		/* 0x44 */
	uint32_t maxcurrentcap31_0;		/* 0x48 */
	uint32_t maxcurrentcap63_32;		/* 0x4C */
	uint16_t forceeventforautocmderrsts;	/* 0x50 */
	uint16_t forceeventforerrintsts;	/* 0x52 */
	uint8_t admaerrsts;			/* 0x54 */
	uint8_t reserved0[3];			/* 0x55 */
	uint16_t admasysaddr0;			/* 0x58 */
	uint16_t admasysaddr1;			/* 0x5A */
	uint16_t admasysaddr2;			/* 0x5C */
	uint16_t admasysaddr3;			/* 0x5D */
	uint16_t presetvalue0;			/* 0x60 */
	uint16_t presetvalue1;			/* 0x62 */
	uint16_t presetvalue2;			/* 0x64 */
	uint16_t presetvalue3;			/* 0x66 */
	uint16_t presetvalue4;			/* 0x68 */
	uint16_t presetvalue5;			/* 0x6A */
	uint16_t presetvalue6;			/* 0x6C */
	uint16_t presetvalue7;			/* 0x6E */
	uint32_t boottimeoutcnt;		/* 0x70 */
	uint32_t reserved1[34];			/* 0x74 */
	uint16_t slotintrsts;			/* 0xFC */
	uint16_t hostcontrollerver;		/* 0xFE */
} t_sdhc;

/** @brief SPI IP registers */
typedef volatile struct
{
	union {
		struct {
			uint32_t dss         :5;
			uint32_t halfdup     :1;
			uint32_t spo         :1;
			uint32_t sph         :1;
			uint32_t scr         :8;
			uint32_t css         :5;
			uint32_t frf         :2;
			uint32_t reserved    :9;
		} bit;
		uint32_t reg;
	} sspcr0;

	/* Addr offset = 0x004 */
	union {
		struct {
			uint32_t lbm         :1;
			uint32_t sse         :1;
			uint32_t ms          :1;
			uint32_t sod         :1;
			uint32_t rendn       :1;
			uint32_t tendn       :1;
			uint32_t mwait       :1;
			uint32_t rxiflsel    :3;
			uint32_t txiflsel    :3;
			uint32_t reserved    :18;
		} bit;
		uint32_t reg;
	} sspcr1;

	/* addr offset = 0x008 */
	union {
		uint32_t reg;
	} sspdr;

	/* addr offset = 0x00C */
	union {
		struct {
			uint32_t tfe     :1;
			uint32_t tnf     :1;
			uint32_t rne     :1;
			uint32_t rff     :1;
			uint32_t bsy     :1;
			uint32_t reserved:27;
		} bit;
		uint32_t reg;
	} sspsr;

	/* addr offset = 0x010 */
	union {
		struct {
			uint32_t cpsdvsr :8;
			uint32_t reserved:24;
		} bit;
		uint32_t reg;
	} sspcpsr;

	/* addr offset = 0x014 */
	union {
		struct {
			uint32_t rorim   :1;
			uint32_t rtim    :1;
			uint32_t rxim    :1;
			uint32_t txim    :1;
			uint32_t reserved:28;
		} bit;
		uint32_t reg;
	} sspimsc;

	union {
		struct {
			uint32_t rorris  :1;
			uint32_t rtris   :1;
			uint32_t rxris   :1;
			uint32_t txris   :1;
			uint32_t reserved:28;
		} bit;
		uint32_t reg;
	} sspris;

	/* addr offset = 0x01C */
	union {
		struct {
			uint32_t rormis  :1;
			uint32_t rtmis   :1;
			uint32_t rxmis   :1;
			uint32_t txmis   :1;
			uint32_t reserved:28;
		} bit;
		uint32_t reg;
	} sspmis;

	/* addr offset = 0x020 */
	union {
		struct {
			uint32_t roric   :1;
			uint32_t rtic    :1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} sspicr;

	/* addr offset = 0x024 */
	union {
		struct {
			uint32_t rxdmae  :1;
			uint32_t txdmae  :1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} sspdmacr;

	uint32_t reserved[(0xFE0 - 0x028) >> 2];
	uint32_t ssp_periphid0;
	uint32_t ssp_periphid1;
	uint32_t ssp_periphid2;
	uint32_t ssp_periphid3;
	uint32_t ssp_pcellid0;
	uint32_t ssp_pcellid1;
	uint32_t ssp_pcellid2;
	uint32_t ssp_pcellid3;

} t_spi;

/** @brief Mailbox */
typedef volatile struct {
	union {
		struct {
			uint32_t irqs0:1;
			uint32_t irqs1:1;
			uint32_t irqs2:1;
			uint32_t irqs3:1;
			uint32_t irqs4:1;
			uint32_t irqs5:1;
			uint32_t irqs6:1;
			uint32_t irqs7:1;
			uint32_t irqs8:1;
			uint32_t irqs9:1;
			uint32_t irqs10:1;
			uint32_t irqs11:1;
			uint32_t irqs12:1;
			uint32_t irqs13:1;
			uint32_t irqs14:1;
			uint32_t irqs15:1;
			uint32_t reserved:16;
		} bit;
		uint32_t reg;	/* 0x0 Address offset */
	} irsr;

	union {
		struct {
			uint32_t irqp0:1;
			uint32_t irqp1:1;
			uint32_t irqp2:1;
			uint32_t irqp3:1;
			uint32_t irqp4:1;
			uint32_t irqp5:1;
			uint32_t irqp6:1;
			uint32_t irqp7:1;
			uint32_t irqp8:1;
			uint32_t irqp9:1;
			uint32_t irqp10:1;
			uint32_t irqp11:1;
			uint32_t irqp12:1;
			uint32_t irqp13:1;
			uint32_t irqp14:1;
			uint32_t irqp15:1;
			uint32_t reserved:16;
		} bit;
		uint32_t reg;	/* 0x4 Address offset */
	} ipsr;

	union {
		struct {
			uint32_t irqm0:1;
			uint32_t irqm1:1;
			uint32_t irqm2:1;
			uint32_t irqm3:1;
			uint32_t irqm4:1;
			uint32_t irqm5:1;
			uint32_t irqm6:1;
			uint32_t irqm7:1;
			uint32_t irqm8:1;
			uint32_t irqm9:1;
			uint32_t irqm10:1;
			uint32_t irqm11:1;
			uint32_t irqm12:1;
			uint32_t irqm13:1;
			uint32_t irqm14:1;
			uint32_t irqm15:1;
			uint32_t reserved:16;
		} bit;
		uint32_t reg;	/* 0x8 Address offset */
	} imr;
} t_mbox;

/** @brief HSEM: Hardware semaphone */
typedef volatile struct {
	uint32_t rx[16];
	uint8_t unused1[0x90 - 0x40];
	uint32_t icrall;
	uint8_t unused2[0xa0 - 0x94];
	uint32_t imsca;
	uint32_t risa;
	uint32_t misa;
	uint32_t icra;;
	uint32_t imscb;
	uint32_t risb;
	uint32_t misb;
	uint32_t icrb;
} t_hsem;

/** @brief MTU: Multi Timer Unit  */
typedef volatile struct {
	uint32_t imsc;		/* @0x00 */
	uint32_t ris;		/* @0x04 */
	uint32_t mis;		/* @0x08 */
	uint32_t icr;		/* @0x0C */
	uint32_t timer0load;	/* @0x10 */
	uint32_t timer0value;	/* @0x14 */
	uint32_t timer0ctl;	/* @0x18 */
	uint32_t timer0bg_load;	/* @0x1C */
	uint32_t timer1load;	/* @0x20 */
	uint32_t timer1value;	/* @0x24 */
	uint32_t timer1ctl;	/* @0x28 */
	uint32_t timer1bg_load;	/* @0x2C */
	uint32_t timer2load;	/* @0x30 */
	uint32_t timer2value;	/* @0x34 */
	uint32_t timer2ctl;	/* @0x38 */
	uint32_t timer2bg_load;	/* @0x3C */
	uint32_t timer3load;	/* @0x40 */
	uint32_t timer3value;	/* @0x44 */
	uint32_t timer3ctl;	/* @0x48 */
	uint32_t timer3bg_load;	/* @0x4C */
	uint32_t unused[(0xFE0 - 0x50) >> 2];
	uint32_t periphid0;	/* @0xfe0 */
	uint32_t periphid1;	/* @0xfe4 */
	uint32_t periphid2;	/* @0xfe8 */
	uint32_t periphid3;	/* @0xfec */
	uint32_t pcellid0;	/* @0xff0 */
	uint32_t pcellid1;	/* @0xff4 */
	uint32_t pcellid2;	/* @0xff8 */
	uint32_t pcellid3;	/* @0xffc */
} t_mtu;

/** @brief OTP + MISC M3 */
typedef volatile struct {
	uint32_t otp_vr0_reg;
	uint8_t unused0[12];
	uint32_t otp_vr1_reg;
	uint8_t unused1[12];
	uint32_t otp_vr2_reg;
	uint8_t unused2[12];
	uint32_t otp_vr3_reg;
	uint8_t unused3[12];
	uint32_t otp_vr4_reg;
	uint8_t unused4[12];
	uint32_t otp_vr5_reg;
	uint8_t unused5[12];
	uint32_t otp_vr6_reg;
	uint8_t unused6[12];
	uint32_t otp_vr7_reg;
	uint8_t unused7[0xc0 - 0x74];
	union {
		struct {
			uint32_t sqi_sel:1;
			uint32_t fsmc_sel:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} misc_m3_0;

	uint8_t unused8[12];
	uint32_t spare_reg0;
	uint8_t unused9[12];
	uint32_t spare_reg1;
	uint8_t unused10[12];
	uint32_t spare_reg2;
	uint8_t unused11[12];
	uint32_t spare_reg3;
} t_otp_misc_m3;

/** @brief USB wrapper and phy */
typedef volatile struct {
	uint32_t ahb2stbus_fl_adj;		/* 0x00 */
	uint32_t ahb2stbus_pwake_cap;		/* 0x04 */
	uint32_t ahb2stbus_ohci_int_sts;	/* 0x08 */
	uint32_t ahb2stbus_ohci_int_mask;	/* 0x0C */
	uint32_t ahb2stbus_ehci_int_sts;	/* 0x10 */
	uint32_t ahb2stbus;			/* 0x14 */
	uint32_t ahb2stbus_ohci;		/* 0x18 */
	uint32_t ahb2stbus_power_state;		/* 0x1C */
	uint32_t ahb2stbus_next_power_state;	/* 0x20 */
	uint32_t ahb2stbus_simulation_mode;	/* 0x24 */
	uint32_t ahb2stbus_ohci_0_app_io_hit;	/* 0x28 */
	uint32_t ahb2stbus_ohci_0_app_irq1;	/* 0x2C */
	uint32_t ahb2stbus_ohci_0_app_irq12;	/* 0x30 */
	uint32_t ahb2stbus_ss_pme_enable;	/* 0x34 */
	uint32_t phyder;			/* 0x38 */
	uint32_t xcver_trim0;			/* 0x3C */
	uint32_t xcver_trim1;			/* 0x40 */
	uint32_t xcver_trim2;			/* 0x44 */
	uint32_t uart_opmode;			/* 0x48 */
	uint32_t simulation_mode_selection_otg; /* 0x4C */
	uint32_t utmi_glue;			/* 0x50 */
	uint32_t sof_toggle;			/* 0x54 */
	uint32_t ahb2stbus_ohci_0_lgcy_irq;	/* 0x58 */
	uint32_t ahb2stbus_ehci_pme_status_state_ack; /* 0x5C */
	uint32_t calibration;			/* 0x60 */
	uint32_t dft;				/* 0x64 */
	uint32_t loop_enable;			/* 0x68 */
	uint32_t frac_input;			/* 0x6C */
	uint32_t xcver_cntrl1;			/* 0x70 */
	uint32_t xcver_cntrl2;			/* 0x74 */
	uint32_t usb1_drv_vbus;			/* 0x78 */
	uint32_t app_prt_ovrcur_i;		/* 0x7C */
	uint32_t utmiotg_iddig;			/* 0x80 */
	union {
		struct {
			uint32_t frac_input:1;
			uint32_t strb_bypass:1;
			uint32_t strb:1;
			uint32_t utmi_pll_clk_sel:1;
			uint32_t pll_pd:1;
			uint32_t ndiv_26:7;
			uint32_t ndiv_24:7;
			uint32_t odf_26:3;
			uint32_t odf_24:3;
			uint32_t pll_power_down_usb0:1;
			uint32_t pll_power_down_usb1:1;
			uint32_t reserved:5;
		} bit;
		uint32_t reg;
	} usb_pll_ctrl1;			/* 0x84 */
	uint32_t ehci_ahb_burst;		/* 0x88 */
	uint32_t usb0_drv_vbus;			/* 0x8C */
} t_usb_wrapper;

typedef volatile struct {
	union {
		struct {
			uint32_t chgclkreq:1;
			uint32_t reserved1:15;
			uint32_t divsel:1;
			uint32_t reserved2:15;
		} bit;
		uint32_t reg;
	} chclkreq; /* 0x00 */

	uint32_t dummy1[3]; /* set clear toggle */

	uint32_t brm[4]; /* 0x10 */

	uint32_t rmwm[4]; /* 0x20 */

	uint32_t unused_1[20]; /* 0x30 - 0x7C */

	union {
		struct {
			uint32_t ndiv:8;
			uint32_t reserved1:2;
			uint32_t odf:6;
			uint32_t idf:3;
			uint32_t cp:5;
			uint32_t strb_odf:1;
			uint32_t reserved2:7;
		} bit;
		uint32_t reg;
	} pllarm_freq; /* 0x80 */

	uint32_t dummy2[3]; /* set clear toggle */

	union {
		struct {
			uint32_t enable:1;
			uint32_t strb_bypass:1;
			uint32_t strb:1;
			uint32_t spread_ctrl:1;
			uint32_t frac_ctrl:1;
			uint32_t sscg_ctrl:1;
			uint32_t dither_dis:2;
			uint32_t reserved:8;
			uint32_t frac_input:16;
		} bit;
		uint32_t reg;
	} pllarm_ctrl; /* 0x90 */

	uint32_t dummy3[3]; /* set clear toggle */

	union {
		struct {
			uint32_t reserved1:1;
			uint32_t lockp3:1;
			uint32_t clk_good:1;
			uint32_t reserved2:29;
		} bit;
		uint32_t reg;
	} pllarm_lockp; /* 0xA0 */

	uint32_t dummy4[3]; /* set clear toggle */

	uint32_t pllarm_other_modes[4]; /* 0xB0 */

	uint32_t unused_2[4]; /* 0xC0 */

	uint32_t dbgpwr[4]; /* 0xD0 */

	uint32_t dbgctrl[4]; /* 0xE0 */

	uint32_t unused_3[4]; /* 0xF0 */

	union {
		struct {
			uint32_t inclamp:1;
			uint32_t outclamp:1;
			uint32_t clken:1;
			uint32_t initn:1;
			uint32_t reserved1:1;
			uint32_t ncpureset:1;
			uint32_t ncpuporeset:1;
			uint32_t ndbgreset:1;
			uint32_t stdby:1;
			uint32_t reserved2:1;
		} bit;
		uint32_t reg;
	} cpu0_mgt; /* 0x100 */

	union {
		struct {
			uint32_t inclamp:1;
			uint32_t outclamp:1;
			uint32_t clken:1;
			uint32_t initn:1;
			uint32_t reserved1:1;
			uint32_t ncpureset:1;
			uint32_t ncpuporeset:1;
			uint32_t ndbgreset:1;
			uint32_t stdby:1;
			uint32_t reserved2:1;
		} bit;
		uint32_t reg;
	} cpu1_mgt; /* 0x110 */

	uint32_t cpu2_mgt[4]; /* 0x120 not supported */
	uint32_t cpu3_mgt[4]; /* 0x130 not supported */

	union {
		struct {
			uint32_t inclamp:1;
			uint32_t outclamp:1;
			uint32_t clken:1;
			uint32_t initn:1;
			uint32_t reserved1:1;
			uint32_t nhardreset:1;
			uint32_t nporesetvarm:1;
			uint32_t npresetdbg:1;
			uint32_t stby:1;
			uint32_t l2rstdisable:1;
			uint32_t nresetslicefct:1;
			uint32_t nresetslicedbg:1;
			uint32_t nreset_swpll_ff:1;
			uint32_t ig:1;
			uint32_t acinactm:1;
			uint32_t varmaorstdisable:1;
			uint32_t reserved2:1;
			uint32_t tst_clk_inlatch:1;
			uint32_t tst_fct_inlatch:1;
			uint32_t tst_outclamp:1;
			uint32_t reserved3:12;
		} bit;
		uint32_t reg;
	} top_l2_mgt; /* 0x140 */

	uint32_t rstack[4]; /* 0X150 */

	union {
		struct {
			uint32_t irq_mask_req_cpu0:1;
			uint32_t irq_mask_req_cpu1:1;
			uint32_t reserved1:2;
			uint32_t pwr_mask_req:1;
			uint32_t reserved2:27;
		} bit;
		uint32_t reg;
	} mask_req; /* 0x160 */

	uint32_t dummy5[3]; /* set clear toggle */

} t_a7_ssc;


/** @brief SGA Unit*/
typedef volatile struct
{
	uint32_t  sga_instr;		/* Manual instruction input register			0x00  */
	uint32_t  sga_gcr;		/* Global configuration register			0x04  */
	uint32_t  sga_ctcmd;		/* Controller command register				0x08  */
	uint32_t  sga_ctstat;		/* Controller status register				0x0C  */
	uint32_t  sga_ris;		/* Raw interrupt status register			0x10  */
	uint32_t  sga_mis;		/* Masked interrupt status register			0x14  */
	uint32_t  sga_imsc;		/* Interrpt mask register				0x18  */
	uint32_t  sga_icr;		/* Interrupt clear register				0x1C  */
	uint32_t  sga_reserved;		/* Reserved						0x20  */
	uint32_t  sga_cipr;		/* Current instruction pointer				0x24  */
	uint32_t  sga_cgcr;		/* Current goto counter					0x28  */
	uint32_t  sga_dbgr;		/* Debug register					0x2C  */
	uint32_t  sga_sitr;		/* Set instruction test register			0x30  */
	uint32_t  sga_citr;		/* Clear Instruction register				0x34  */
	uint32_t  sga_gitr;		/* Get instruction test register			0x38  */
	uint32_t  sga_sttr;		/* Statistics on ammount of Traingles drawn		0x3C  */
	uint32_t  sga_stfr;		/* Statistics on ammount of Raw Fragment drawn		0x40  */
	uint32_t  sga_stfz;		/* Statistics on ammount of z-tested fragment drawn	0x44  */
	uint32_t  sga_sttx;		/* Statistics on ammount of Texture requests		0x48  */
	uint32_t  sga_stfmrf;		/* Statistics on ammount of FrameBuffer cahce refills	0x4C  */
	uint32_t  sga_sttxrf;		/* Statistics on ammount of Texture cache Refills	0x50  */
	uint32_t  sga_stinrf;		/* Statistics on ammount of Instruction Refills		0x54  */
	uint32_t  sga_stck;		/* Statistics on ammount of clock cycles		0x58  */
	uint32_t  sga_mis1;		/* Masked interrupt1 status register			0x5C  */
	uint32_t  sga_imsc1;		/* Interrupt mask1 register				0x60  */
	uint32_t  sga_reserved1[479];	/* Reserved address				0x64 - 0x7DC  */
	uint32_t  sga_periphid0;	/* Pheripheral Identification 0				0x7E0 */
	uint32_t  sga_periphid1;	/* Pheripheral Identification 1				0x7E4 */
	uint32_t  sga_periphid2;	/* Pheripheral Identification 2				0x7E8 */
	uint32_t  sga_periphid3;	/* Pheripheral Identification 3				0x7EC */
	uint32_t  sga_pcellid0;		/* Pcell identification 0				0x7F0 */
	uint32_t  sga_pcellid1;		/* Pcell identification 1				0x7F4 */
	uint32_t  sga_pcellid2;		/* Pcell identification 2				0x7F8 */
	uint32_t  sga_pcellid3;		/* Pcell identification 3				0x7Fc */
} t_sga_registers;

/* @brief ADC: Analog to Digital Converter Controller */
typedef volatile struct {
	uint32_t id; /* 0x00 */

	uint32_t dummy1[7];

	union {
		struct {
			uint32_t ie0:1;
			uint32_t ie1:1;
			uint32_t ie2:1;
			uint32_t ie3:1;
			uint32_t ie4:1;
			uint32_t ie5:1;
			uint32_t dmaen:1;
			uint32_t reserved:25;
		} bit;
		uint32_t reg;
	} ier; /* 0x20 */

	union {
		struct {
			uint32_t is0:1;
			uint32_t is1:1;
			uint32_t is2:1;
			uint32_t is3:1;
			uint32_t is4:1;
			uint32_t is5:1;
			uint32_t reserved:26;
		} bit;
		uint32_t reg;
	} isr; /* 0x24 */

	union {
		struct {
			uint32_t iea0:1;
			uint32_t iea1:1;
			uint32_t iea2:1;
			uint32_t iea3:1;
			uint32_t iea4:1;
			uint32_t iea5:1;
			uint32_t iea6:1;
			uint32_t iea7:1;
			uint32_t iea8:1;
			uint32_t iea9:1;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} ieadcr; /* 0x28 */

	union {
		struct {
			uint32_t isa0:1;
			uint32_t isa1:1;
			uint32_t isa2:1;
			uint32_t isa3:1;
			uint32_t isa4:1;
			uint32_t isa5:1;
			uint32_t isa6:1;
			uint32_t isa7:1;
			uint32_t isa8:1;
			uint32_t isa9:1;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} isadcr; /* 0x2c */

	uint32_t dummy2[4];

	union {
		struct {
			uint32_t adc_en_status:1;
			uint32_t ref_sel:1;
			uint32_t freq:2;
			uint32_t reserved:28;
		} bit;
		uint32_t reg;
	} adcctrl; /* 0x40 */

	union {
		struct {
			uint32_t chnl:10;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} adccapture; /* 0x44 */

	uint32_t dummy3[14];

	union {
		struct {
			uint32_t data:10;
			uint32_t reserved:22;
		} bit;
		uint32_t reg;
	} adcdata[10]; /* 0x80 - 0xa4 */

	uint32_t dummy4[24];

	/* DCO registers */

	union {
		struct {
			uint32_t s0:1;
			uint32_t s1:1;
			uint32_t s2:1;
			uint32_t tss0:1;
			uint32_t tss1:1;
			uint32_t power_down:1;
			uint32_t dis_auto_restart:1;
			uint32_t reserved0:8;
			uint32_t sw_reset:1;
			uint32_t reserved1:16;
		} bit;
		uint32_t reg;
	} dcodcr; /* 0x104 */

	uint32_t iedcomr; /* 0x108 */
	uint32_t isdcor; /* 0x10c */
	uint32_t acc_upper_thr_ch[6];
	uint32_t acc_lower_thr_ch[6];
	uint32_t nb_samples_acc_global;
	uint32_t acc_value_ch[6];
	uint32_t ccv_acc_cr;
	uint32_t dco_trig_en; /* 0x160 */
	uint32_t shad_acc_value_ch[6];
	uint32_t shad_cv_acc_cr;
} t_adc;

/** @brief EFT Unit*/
typedef volatile struct
{
	uint32_t  eft_icar;		/* Input Capture A Registers				0x00  */
	uint32_t  eft_icbr;		/* Input Capture B Registers				0x04  */
	uint32_t  eft_ocar;		/* Output Compare A Register				0x08  */
	uint32_t  eft_ocbr;		/* Output Compare B Register				0x0C  */
	uint32_t  eft_cntr;		/* Counter Register					0x10  */
	union {
		struct {
			uint32_t ecken:1;
			uint32_t exedg:1;
			uint32_t iedga:1;
			uint32_t iedgb:1;
			uint32_t pwm:1;
			uint32_t opm:1;
			uint32_t ocae:1;
			uint32_t ocbe:1;
			uint32_t olvla:1;
			uint32_t olvlb:1;
			uint32_t folva:1;
			uint32_t folvb:1;
			uint32_t dmas0:1;
			uint32_t dmas1:1;
			uint32_t pwmi:1;
			uint32_t en:1;
			uint32_t reserved:16;
		} bit;
		uint32_t reg;
	} eft_cr1; /* Control Register 1 0x14 */
	union {
		struct {
			uint32_t cc:8;
			uint32_t reserved1:2;
			uint32_t dmaie:1;
			uint32_t ocbie:1;
			uint32_t icbie:1;
			uint32_t toe:1;
			uint32_t ocaie:1;
			uint32_t icaie:1;
			uint32_t reserved2:16;
		} bit;
		uint32_t reg;
	} eft_cr2; /* Control Register 2 0x18 */
	union {
		struct {
			uint32_t reserved1:11;
			uint32_t ocfb:1;
			uint32_t icfb:1;
			uint32_t tof:1;
			uint32_t ocfa:1;
			uint32_t icfa:1;
			uint32_t reserved2:16;
		} bit;
		uint32_t reg;
	} eft_sr; /* Status Register 0x1C */
} t_eft;

/** @brief Thermal sensor */
typedef volatile struct {
	union {
		struct {
			uint32_t reserved1:25;
			uint32_t dcorrect_sw_sel:1;
			uint32_t dcorrect_sw:5;
			uint32_t pdn:1;
		} bit;
		uint32_t reg;
	} th_ctrl; /* Control register 0x00 */
	union {
		struct {
			uint32_t reserved1:22;
			uint32_t data:8;
			uint32_t reserved2:1;
			uint32_t dtrdy:1;
		} bit;
		uint32_t reg;
	} th_status; /* Status register 0x04 */
} t_thsensor;


/* @brief STMCHANNEL: System Trace Macrocell Channel Fifo*/
#define STM_MAX_CHANNEL 65536

typedef volatile struct {
	/*Guaranteed data accesses*/
	uint32_t G_DMTS;	/*0x00-0x04 G_DMTS Data, marked with timestamp, guaranteed*/
	uint32_t G_DM;		/*0x08-0x0C G_DM Data, marked, guaranteed*/
	uint32_t G_DTS;	/*0x10-0x14 G_DTS Data, with timestamp, guaranteed*/
	uint32_t G_D;		/*0x18-0x1C G_D Data, guaranteed*/
	uint32_t dummy1[0x40];	/*0x20-0x5F - Reserved*/
	/*Guaranteed non-data accesses*/
	uint32_t G_FLAGTS;	/*0x60-0x64 G_FLAGTS Flag with timestamp, guaranteed*/
	uint32_t G_FLAG;	/*0x68-0x6C G_FLAG Flag, guaranteed*/
	uint32_t G_TRIGTS;	/*0x70-0x74 G_TRIGTS Trigger with timestamp, guaranteed*/
	uint32_t G_TRIG;	/*0x78-0x7C G_TRIG Trigger, guaranteed*/
	/*Invariant Timing data accesses*/
	uint32_t I_DMTS;	/*0x80-0x84 I_DMTS Data, marked with timestamp, invariant timing*/
	uint32_t I_DM;		/*0x88-0x8C I_DM Data, marked, invariant timing*/
	uint32_t I_DTS;	/*0x90-0x94 I_DTS Data, with timestamp, invariant timing*/
	uint32_t I_D;		/*0x98-0x9C I_D Data, invariant timing*/
	uint32_t dummy2[0x40];	/*0xA0-0xDF - Reserved*/
	/*Invariant Timing non-data accesses*/
	uint32_t I_FLAGTS;	/*0xE0-0xE4 I_FLAGTS Flag with timestamp, invariant timing*/
	uint32_t I_FLAG;	/*0xE8-0xEC I_FLAG Flag, invariant timing*/
	uint32_t I_TRIGTS;	/*0xF0-0xF4 I_TRIGTS Trigger with timestamp, invariant timing*/
	uint32_t I_TRIG;	/*0xF8-0xFC I_TRIG Trigger, invariant timing*/
} t_stm_fifo_one_channel;


typedef volatile struct {
	t_stm_fifo_one_channel fifo_channels[STM_MAX_CHANNEL];
} t_stm_fifo;

/** @brief Watchdog */
typedef volatile struct {
	union {
		struct {
			uint32_t wdtload:32;
		} bit;
		uint32_t reg;
	} wdt_lr; /* Watchdog Load Register (WDT_LR) 0x00 */
	union {
		struct {
			uint32_t wdtval:32;
		} bit;
		uint32_t reg;
	} wdt_val; /* Watchdog Value Register (WDT_VAL) 0x04 */
	union {
		struct {
			uint32_t inten:1;
			uint32_t resen:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} wdt_cr; /* Watchdog Value Register (WDT_CR) 0x08 */
	union {
		struct {
			uint32_t wdtclr:32;
		} bit;
		uint32_t reg;
	} wdt_icr; /* Watchdog Value Register (WDT_ICR) 0x0C */
	union {
		struct {
			uint32_t wdtris:1;
			uint32_t reserved:31;
		} bit;
		uint32_t reg;
	} wdt_ris; /* Watchdog Value Register (WDT_RIS) 0x10 */
	union {
		struct {
			uint32_t wdtmis:1;
			uint32_t reserved:31;
		} bit;
		uint32_t reg;
	} wdt_mis; /* Watchdog Value Register (WDT_MIS) 0x14 */
} t_wdt;

/** @brief RTC */
typedef volatile struct {
	uint32_t reserved;
	uint32_t rtc_mr; /* RTC Match Register 0x4 */
	uint32_t reserved_2;
	union {
		struct {
			uint32_t ckdiv:16;
			uint32_t ckdel:10;
			uint32_t irtcen:1;
			uint32_t reserved:5;
		} bit;
		uint32_t reg;
	} rtc_trc; /* RTC Trim and Control Register 0xC */
	union {
		struct {
			uint32_t rtcimsc:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} rtc_imsc; /* RTC Interrupt Mask Register 0x10 */
	union {
		struct {
			uint32_t rtcris:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} rtc_ris; /* RTC Raw Interrupt Status Register 0x14 */
	union {
		struct {
			uint32_t rtcmis:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} rtc_mis; /* RTC Masked Interrupt Status Register 0x18 */
	union {
		struct {
			uint32_t rtcicr:1;
			uint32_t reserved:30;
		} bit;
		uint32_t reg;
	} rtc_icr; /* RTC Interrupt Clear Register 0x1C */
	uint32_t reserved_3[23];
	union {
		struct {
			uint32_t reserved:3;
			uint32_t count_dis:1;
			uint32_t load_counter:1;
			uint32_t reserved_2:28;
		} bit;
		uint32_t reg;
	} rtc_ccr; /* RTC Counter Control Register 0x80 */
	uint32_t reserved_4[3];
	uint32_t rtc_dri; /* RTC Data Register Integer Part 0x90 */
	union {
		struct {
			uint32_t rtc_drf:16;
			uint32_t reserved:16;
		} bit;
		uint32_t reg;
	} rtc_drf; /* RTC Data Register Fractional Part 0x94 */
} t_rtc;

/**
  * @}
  */

/** @defgroup  Peripheral memory map
  * @{
  */

/* Peripheral and SRAM base address in the alias region */
#define SQI0_NOR_BB_BASE            0x90000000
#define SQI1_NOR_BB_BASE            0x98000000

/* Peripheral and SRAM base address in the bit-band region */
#define SRAM_BASE                   0x20000000
#define M3_PERIPH_BASE              0x40000000

#define AHBAPB_BRIDGE0_BASE         M3_PERIPH_BASE + 0x00
#define AHBAPB_BRIDGE1_BASE         M3_PERIPH_BASE + 0x7000000

/* Flash refisters base address */
#define FLASH_BASE                  0x40022000
/* Flash Option Bytes base address */
#define OB_BASE                     0x1FFFF800

/* Peripheral memory map */
#define APB1PERIPH_BASE             PERIPH_BASE
#define APB2PERIPH_BASE             (PERIPH_BASE + 0x10000)
#define AHBPERIPH_BASE              (PERIPH_BASE + 0x20000)

#define AXI_APB0_PERIPHERAL_BASE    0x50000000
#define AXI_APB1_PERIPHERAL_BASE    0x50100000
#define AXI_APB2_PERIPHERAL_BASE    0x48000000
#define AXI_PERIPHERAL_BASE         0x50200000

/* SDMMC */
#define SDMMC0_BASE                 (AXI_APB0_PERIPHERAL_BASE + 0x80000)
#define SDMMC1_BASE                 (AXI_APB0_PERIPHERAL_BASE + 0x70000)
#define SDMMC2_BASE                 (AXI_APB0_PERIPHERAL_BASE + 0xB0000)

/* GPIO */
#define M3_GPIO0_BASE               0x40008000
#define A7_GPIO0_BASE               0x48120000
#define A7_GPIO1_BASE               0x48121000
#define A7_GPIO2_BASE               0x48122000
#define A7_GPIO3_BASE               0x48123000
#define S_GPIO0_BASE                0x50140000

/* EFT */
#define EFT0_BASE		    (AXI_APB2_PERIPHERAL_BASE + 0x180000)
#define EFT1_BASE		    (AXI_APB2_PERIPHERAL_BASE + 0x170000)
#define EFT2_BASE		    (AXI_APB2_PERIPHERAL_BASE + 0x160000)
#define EFT3_BASE		    (AXI_APB1_PERIPHERAL_BASE + 0x10000)
#define EFT4_BASE		    (AXI_APB1_PERIPHERAL_BASE + 0x20000)

/* UART*/
#define UART0_BASE                  (AXI_APB1_PERIPHERAL_BASE + 0x50000)
#define UART1_BASE                  (AXI_APB0_PERIPHERAL_BASE)
#define UART2_BASE                  (AXI_APB0_PERIPHERAL_BASE + 0x10000)
#define UART3_BASE                  (AXI_APB0_PERIPHERAL_BASE + 0x20000)

/* SQI */
#define SQI0_BASE                   AXI_PERIPHERAL_BASE
#define SQI1_BASE                   (AXI_PERIPHERAL_BASE + 0x600000)

/* MSP */
#define MSP0_BASE                   AXI_APB2_PERIPHERAL_BASE
#define MSP1_BASE                   (AXI_APB2_PERIPHERAL_BASE + 0x10000)
#define MSP2_BASE                   (AXI_APB2_PERIPHERAL_BASE + 0x20000)

/* DMA */
#define DMA0_BASE                   (AXI_APB2_PERIPHERAL_BASE + 0x200000)
#define DMA1_BASE                   (AXI_APB2_PERIPHERAL_BASE + 0x300000)

/* M3IRQ */
#define M3IRQ0_BASE                 0x40038000
#define M3IRQ1_BASE                 0x40039000
#define M3IRQ2_BASE                 0x4003A000
#define M3IRQ3_BASE                 0x4003B000

/* Audio Sub-system */
#define AUDIO_CR_BASE               0x48060000
#define AUDIO_P0_BASE               0x48900000
#define AUDIO_P1_BASE               0x48A00000
#define AUDIO_P2_BASE               0x48B00000
#define AUDIO_P3_BASE               0x48C00000
#define AUDIO_P4_BASE               0x48D00000

/* FSMC */
#define FSMC_BASE                   0x50300000
#define NAND_CS0_BASE               0x80000000

#define PRAM_OFFSET                 0x0
#define DBGPORT_OFFSET              0x40000
#define XRAM_OFFSET                 0x80000
#define XIN_OFFSET                  0x84000
#define XOUT_OFFSET                 0x84200
#define IRQ_DSP2ARM_SET_OFFSET      0x88000
#define IRQ_DSP2ARM_CLR_OFFSET      0x88004
#define IRQ_ARM2DSP_EN_OFFSET       0x88008
#define IRQ_ARM2DSP_STS_OFFSET      0x8800C
#define YRAM_OFFSET                 0xC0000

/* PMU */
#define PMU_BASE                    0x47008000

/* I2C */
#define I2C0_BASE                   0x50160000
#define I2C1_BASE                   0x50040000
#define I2C2_BASE                   0x50030000

/* G1 decoder base address*/
#define G1_BASE			    0x50090000

/* CLCD */
#define CLCD_BASE                   0x48600000

/* SRCM3 */
#define SRCM3_BASE                  0x40020000

/* SRC Application processor */
#define SRCAP_BASE                  0x48100000

/* Security registers */
#define NIC_BASE                    0x50500000

/* System Control Space memory map */
#define SCS_BASE                    0xE000E000

/* A7 Misc Registers */
#define MISC_A7_BASE                0x50700000

/* QoS registers */
#define QOS_BASE                    0x50542000

/* USB 0 */
#define USB0_BASE                   0x48400000

/* USB 1 */
#define USB1_BASE                   0x48500000

/* USB PHY WRAPPER */
#define USBPHY_BASE                 0x48440000

/* SGA */
#define SGA_BASE                    0x48700000

/* VIP */
#define VIP_BASE                    0x48800000

#define SYSTICK_BASE                (SCS_BASE + 0x0010)
#define NVIC_BASE                   (SCS_BASE + 0x0100)
#define SCB_BASE                    (SCS_BASE + 0x0D00)

/* Mailboxes */
#define M3_MBOX_BASE                (AXI_APB2_PERIPHERAL_BASE + 0x190000)
#define AP_MBOX_BASE                (AXI_APB2_PERIPHERAL_BASE + 0x1A0000)

extern uint32_t __MBOX_start__;	/* Defined in linker script */
#define MBOX_MEM_BASE               (uint8_t *)(&__MBOX_start__)

#ifdef ATF
extern uint32_t __MBOX_SEC_start__;	/* Defined in linker script */
#define MBOX_MEM_BASE_SEC               (uint8_t *)(&__MBOX_SEC_start__)
#endif

/* HSEM */
#define HSEM_BASE                   0x481B0000

/* MTU */
#define MTU_M3_BASE                 (M3_PERIPH_BASE + 0x18000)

/* C3 */
#define C3_BASE                     0x49000000

/* M3 eSRAM */
#define M3_SRAM_BASE                0x10000000

/* Backup RAM */
#define BACKUP_RAM_BASE             0x20000000
#define BACKUP_RAM_SIZE             0x200

/* OTP + M3 MISC Registers */
#define OTP_MISC_M3_BASE            0x40030000

/* SDRAM registers */
#define DDR_MEM_BASE                0xA0000000

/* A7 SSC registers */
#define A7_SSC_BASE		    0x68000000

/* ADC registers */
#define DCO_ADC_BASE		    0x481C0000

/* STM */
#define STM_BASE		    0x50411000

/* STM FIFO */
#define STM_FIFO_BASE		    0x50910000

/* DDR uMCTL2 registers */
#define DDR3_CTRL_BASE		    0x50600000

/* DDR PUB registers */
#define DDR3_PUB_BASE		    0x50900000

/* Thermal sensor registers */
#define THSENSOR_BASE		    0x481E0000

/* M3 Watchdog */
#define WDT_BASE		    0x40028000
#define WDT_ASYNC_APB_BASE	    0x47010000

/* RTC */
#define RTC_BASE		    0x50100000

/* SPI */
#define SPI0_BASE                   0x50170000
#define SPI1_BASE                   0x50060000
#define SPI2_BASE                   0x50050000

/**
  * @}
  */

/** @defgroup  IP devices declarations
  * @{
  */

#define systick_regs ((t_systick *) SYSTICK_BASE)
#define nvic_regs ((t_nvic *) NVIC_BASE)
#define scb_regs ((t_scb *) SCB_BASE)
#define uart0_regs ((t_uart *) UART0_BASE)
#define uart1_regs ((t_uart *) UART1_BASE)
#define uart2_regs ((t_uart *) UART2_BASE)
#define uart3_regs ((t_uart *) UART3_BASE)
#define sqi0_regs ((t_sqi *) SQI0_BASE)
#define sqi1_regs ((t_sqi *) SQI1_BASE)
#define msp0_regs ((t_msp *) MSP0_BASE)
#define msp1_regs ((t_msp *) MSP1_BASE)
#define msp2_regs ((t_msp *) MSP2_BASE)
#define m3irq0_regs ((t_m3irq *) M3IRQ0_BASE)
#define m3irq1_regs ((t_m3irq *) M3IRQ1_BASE)
#define m3irq2_regs ((t_m3irq *) M3IRQ2_BASE)
#define m3irq3_regs ((t_m3irq *) M3IRQ3_BASE)
#define audsscr_regs ((t_aud_cr *) AUDIO_CR_BASE)
#define m3_gpio0_regs ((t_gpio *) M3_GPIO0_BASE)
#define a7_gpio0_regs ((t_gpio *) A7_GPIO0_BASE)
#define a7_gpio1_regs ((t_gpio *) A7_GPIO1_BASE)
#define a7_gpio2_regs ((t_gpio *) A7_GPIO2_BASE)
#define a7_gpio3_regs ((t_gpio *) A7_GPIO3_BASE)
#define a7_gpio4_regs ((t_gpio *) A7_GPIO4_BASE)
#define s_gpio0_regs ((t_gpio *) S_GPIO0_BASE)
#define fsmc_regs ((t_fmsc *) FSMC_BASE)
#define pmu_regs ((t_pmu *) PMU_BASE)
#define i2c0_regs ((t_i2c *) I2C0_BASE)
#define i2c1_regs ((t_i2c *) I2C1_BASE)
#define i2c2_regs ((t_i2c *) I2C2_BASE)
#define clcd_regs ((t_clcd *) CLCD_BASE)
#define src_m3_regs ((t_src_m3 *) SRCM3_BASE)
#define src_a7_regs ((t_src_a7 *) SRCAP_BASE)
#define nic_regs ((t_nic *) NIC_BASE)
#define misc_a7_regs ((t_misc *) MISC_A7_BASE)
#define mbox_m3_regs ((t_mbox *) M3_MBOX_BASE)
#define mbox_ap_regs ((t_mbox *) AP_MBOX_BASE)
#define hsem_regs ((t_hsem *) HSEM_BASE)
#define mtu_regs ((t_mtu *) MTU_M3_BASE)
#define otp_misc_m3_regs ((t_otp_misc_m3 *) OTP_MISC_M3_BASE)
#define usb_wrapper_regs ((t_usb_wrapper *) USBPHY_BASE)
#define a7_ssc_regs ((t_a7_ssc *) A7_SSC_BASE)
#define sga_regs ((t_sga_registers *) SGA_BASE)
#define dco_adc_regs ((t_adc *) DCO_ADC_BASE)
#define eft0_regs ((t_eft *) EFT0_BASE)
#define eft1_regs ((t_eft *) EFT1_BASE)
#define eft2_regs ((t_eft *) EFT2_BASE)
#define eft3_regs ((t_eft *) EFT3_BASE)
#define eft4_regs ((t_eft *) EFT4_BASE)
#define stm_fifo_regs ((t_stm_fifo *) STM_FIFO_BASE)
#define wdt_regs ((t_wdt *) WDT_BASE)
#define rtc_regs ((t_rtc *) RTC_BASE)
#define spi0_regs ((t_spi *) SPI0_BASE)
#define spi1_regs ((t_spi *) SPI1_BASE)
#define spi2_regs ((t_spi *) SPI2_BASE)

/**
  * @}
  */

/**
  * @}
  */

#endif /* __STA_MAP_H__ */
