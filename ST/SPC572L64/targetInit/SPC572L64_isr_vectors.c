/*****************************************************************************/
/* FILE NAME: intc_SW_mode_isr_vectors_MPC574xP.c COPYRIGHT(c) Freescale 2013*/
/*                                                      All Rights Reserved  */
/* DESCRIPTION: MPC5748G ISR vectors for INTC in software vector mode        */
/*              Based on MPC574xP ref manual rev 1 Table 20-1.               */
/* USAGE:  For desired vector #, replace "dummy" with ISR name and declare   */
/*         your isr name extern like the example below:                      */
/*                       extern void MyPeripheralISR(void);                  */
/*                                                                           */
/*****************************************************************************/	
/* REV      AUTHOR        DATE        DESCRIPTION OF CHANGE                  */
/* ---   -----------    ----------    ---------------------                  */
/* 1.0	  S Mihalik     10 Sep 2013   Initial version                        */
/* 1.1    D Haro        12 Feb 2014   Added SW IRQ 1                         */
/*****************************************************************************/

#include "Lavaredo.h"
#include "typedefs.h"

extern void (dummy) (void);

extern void SW_INT_1_isr(void); /* Vector #   1 Software setable flag 1         SSCIR0[CLR1] */
extern void TimerInterruptHandler(void);     /* Vector # 226 Periodic Interrupt Timer (PIT0) PIT_1_TFLG0[TIF] */
extern void RtiTimerInterruptHandler(void);  /* Vector # 226 Periodic Interrupt Timer (PIT0) PIT_1_TFLG0[TIF] */

#pragma force_active on
#pragma ghs section rodata =".isr_vector_table"


#pragma align_const 0x1000

const unsigned int intc_sw_mode_isr_vector_table[] = {

(unsigned int) &dummy, /* Vector #   0 Software setable flag 0 SSCIR0[CLR0] */
(unsigned int) &dummy, /* Vector # 1 Software setable flag 1 SSCIR0[CLR1] */
(unsigned int) &dummy, /* Vector #   2 Software setable flag 2 SSCIR0[CLR2] */
(unsigned int) &dummy, /* Vector #   3 Software setable flag 3 SSCIR0[CLR3] */
(unsigned int) &dummy, /* Vector #   4 Software setable flag 4 SSCIR0[CLR4] */
(unsigned int) &dummy, /* Vector #   5 Software setable flag 5 SSCIR0[CLR5] */
(unsigned int) &dummy, /* Vector #   6 Software setable flag 6 SSCIR0[CLR6] */
(unsigned int) &dummy, /* Vector #   7 Software setable flag 7 SSCIR0[CLR7] */
(unsigned int) &dummy, /* Vector #   8 Software setable flag 8 SSCIR0[CLR8] */
(unsigned int) &dummy, /* Vector #   9 Software setable flag 9 SSCIR0[CLR9] */
(unsigned int) &dummy, /* Vector #  10 Software setable flag 10 SSCIR0[CLR10] */
(unsigned int) &dummy, /* Vector #  11 Software setable flag 11 SSCIR0[CLR11] */
(unsigned int) &dummy, /* Vector #  12 Software setable flag 12 SSCIR0[CLR12] */
(unsigned int) &dummy, /* Vector #  13 Software setable flag 13 SSCIR0[CLR13] */
(unsigned int) &dummy, /* Vector #  14 Software setable flag 14 SSCIR0[CLR14] */
(unsigned int) &dummy, /* Vector #  15 Software setable flag 15 SSCIR0[CLR15] */
(unsigned int) &dummy, /* Vector #  16 Software setable flag 16 SSCIR0[CLR16] */
(unsigned int) &dummy, /* Vector #  17 Software setable flag 17 SSCIR0[CLR17] */
(unsigned int) &dummy, /* Vector #  18 Software setable flag 18 SSCIR0[CLR18] */
(unsigned int) &dummy, /* Vector #  19 Software setable flag 19 SSCIR0[CLR19] */
(unsigned int) &dummy, /* Vector #  20 Software setable flag 20 SSCIR0[CLR20] */
(unsigned int) &dummy, /* Vector #  21 Software setable flag 21 SSCIR0[CLR21] */
(unsigned int) &dummy, /* Vector #  22 Software setable flag 22 SSCIR0[CLR22] */
(unsigned int) &dummy, /* Vector #  23 Software setable flag 23 SSCIR0[CLR23] */
(unsigned int) &dummy, /* Vector #  24 Software setable flag 24 SSCIR0[CLR24] */
(unsigned int) &dummy, /* Vector #  25 Software setable flag 25 SSCIR0[CLR25] */
(unsigned int) &dummy, /* Vector #  26 Software setable flag 26 SSCIR0[CLR26] */
(unsigned int) &dummy, /* Vector #  27 Software setable flag 27 SSCIR0[CLR27]*/
(unsigned int) &dummy, /* Vector #  28 Software setable flag 28 SSCIR0[CLR28]*/
(unsigned int) &dummy, /* Vector #  29 Software setable flag 29 SSCIR0[CLR29]*/
(unsigned int) &dummy, /* Vector #  30 Software setable flag 30 SSCIR0[CLR30]*/
(unsigned int) &dummy, /* Vector #  31 Software setable flag 31 SSCIR0[CLR31]*/
(unsigned int) &dummy, /* Vector #  32 Platform watchdog timer0 SWT_0_IR[TIF] */
(unsigned int) &dummy, /* Vector #  33 Platform watchdog timer1 SWT_1_IR[TIF] */
(unsigned int) &dummy, /* Vector #  34 Platform watchdog timer2 SWT_2_IR[TIF] */
(unsigned int) &dummy, /* Vector #  35 Platform watchdog timer3 SWT_3_IR[TIF]*/
(unsigned int) &dummy, /* Vector #  36 On-Platform periodic timer 0_0 (STM) STM_0_CIR0[CIF] */
(unsigned int) &dummy, /* Vector #  37 On-Platform periodic timer 0_1 (STM) STM_0_CIR1[CIF] */
(unsigned int) &dummy, /* Vector #  38 On-Platform periodic timer 0_2 (STM) STM_0_CIR2[CIF] */
(unsigned int) &dummy, /* Vector #  39 On-Platform periodic timer 0_3 (STM) STM_0_CIR3[CIF] */
(unsigned int) &dummy, /* Vector #  40 On-Platform periodic timer 1_0 (STM) STM_1_CIR0[CIF] */
(unsigned int) &dummy, /* Vector #  41 On-Platform periodic timer 1_1 (STM) STM_1_CIR1[CIF] */
(unsigned int) &dummy, /* Vector #  42 On-Platform periodic timer 1_2 (STM) STM_1_CIR2[CIF] */
(unsigned int) &dummy, /* Vector #  43 On-Platform periodic timer 1_3 (STM) STM_1_CIR3[CIF] */
(unsigned int) &dummy, /* Vector #  44 On-Platform periodic timer 2_0 (STM) STM_2_CIR0[CIF] */
(unsigned int) &dummy, /* Vector #  45 On-Platform periodic timer 2_1 (STM) STM_2_CIR1[CIF] */
(unsigned int) &dummy, /* Vector #  46 On-Platform periodic timer 2_2 (STM) STM_2_CIR2[CIF] */
(unsigned int) &dummy, /* Vector #  47 On-Platform periodic timer 2_3 (STM) STM_2_CIR3[CIF] */
(unsigned int) &dummy, /* Vector #  48 */
(unsigned int) &dummy, /* Vector #  49 */
(unsigned int) &dummy, /* Vector #  50 */
(unsigned int) &dummy, /* Vector #  51 */
(unsigned int) &dummy, /* Vector #  52 eDMA Combined Error eDMA Channel Error Flags 63-0 */
(unsigned int) &dummy, /* Vector #  53 eDMA Channel 0 DMA_INTL[INT0] */
(unsigned int) &dummy, /* Vector #  54 eDMA Channel 1 DMA_INTL[INT1] */
(unsigned int) &dummy, /* Vector #  55 eDMA Channel 2 DMA_INTL[INT2] */
(unsigned int) &dummy, /* Vector #  56 eDMA Channel 3 DMA_INTL[INT3] */
(unsigned int) &dummy, /* Vector #  57 eDMA Channel 4 DMA_INTL[INT4] */
(unsigned int) &dummy, /* Vector #  58 eDMA Channel 5 DMA_INTL[INT5] */
(unsigned int) &dummy, /* Vector #  59 eDMA Channel 6 DMA_INTL[INT6] */
(unsigned int) &dummy, /* Vector #  60 eDMA Channel 7 DMA_INTL[INT7] */
(unsigned int) &dummy, /* Vector #  61 eDMA Channel 8 DMA_INTL[INT8] */
(unsigned int) &dummy, /* Vector #  62 eDMA Channel 9 DMA_INTL[INT9] */
(unsigned int) &dummy, /* Vector #  63 eDMA Channel 10 DMA_INTL[INT10] */
(unsigned int) &dummy, /* Vector #  64 eDMA Channel 11 DMA_INTL[INT11] */
(unsigned int) &dummy, /* Vector #  65 eDMA Channel 12 DMA_INTL[INT12] */
(unsigned int) &dummy, /* Vector #  66 eDMA Channel 13 DMA_INTL[INT13] */
(unsigned int) &dummy, /* Vector #  67 eDMA Channel 14 DMA_INTL[INT14] */
(unsigned int) &dummy, /* Vector #  68 eDMA Channel 15 DMA_INTL[INT15] */
(unsigned int) &dummy, /* Vector #  69 eDMA Channel 16 DMA_INTL[INT16] */
(unsigned int) &dummy, /* Vector #  70 eDMA Channel 17 DMA_INTL[INT17] */
(unsigned int) &dummy, /* Vector #  71 eDMA Channel 18 DMA_INTL[INT18] */
(unsigned int) &dummy, /* Vector #  72 eDMA Channel 19 DMA_INTL[INT19] */
(unsigned int) &dummy, /* Vector #  73 eDMA Channel 20 DMA_INTL[INT20] */
(unsigned int) &dummy, /* Vector #  74 eDMA Channel 21 DMA_INTL[INT21] */
(unsigned int) &dummy, /* Vector #  75 eDMA Channel 22 DMA_INTL[INT22] */
(unsigned int) &dummy, /* Vector #  76 eDMA Channel 23 DMA_INTL[INT23] */
(unsigned int) &dummy, /* Vector #  77 eDMA Channel 24 DMA_INTL[INT24] */
(unsigned int) &dummy, /* Vector #  78 eDMA Channel 25 DMA_INTL[INT25] */
(unsigned int) &dummy, /* Vector #  79 eDMA Channel 26 DMA_INTL[INT26] */
(unsigned int) &dummy, /* Vector #  80 eDMA Channel 27 DMA_INTL[INT27] */
(unsigned int) &dummy, /* Vector #  81 eDMA Channel 28 DMA_INTL[INT28] */
(unsigned int) &dummy, /* Vector #  82 eDMA Channel 29 DMA_INTL[INT29] */
(unsigned int) &dummy, /* Vector #  83 eDMA Channel 30 DMA_INTL[INT30] */
(unsigned int) &dummy, /* Vector #  84 eDMA Channel 31 DMA_INTL[INT31] */
(unsigned int) &dummy, /* Vector #  85 eDMA Channel 31 DMA_INTL[INT32]*/
(unsigned int) &dummy, /* Vector #  86 eDMA Channel 31 DMA_INTL[INT33]*/
(unsigned int) &dummy, /* Vector #  87 eDMA Channel 31 DMA_INTL[INT34]*/
(unsigned int) &dummy, /* Vector #  88 eDMA Channel 31 DMA_INTL[INT35]*/
(unsigned int) &dummy, /* Vector #  89 */
(unsigned int) &dummy, /* Vector #  90 */
(unsigned int) &dummy, /* Vector #  91 */
(unsigned int) &dummy, /* Vector #  92 */
(unsigned int) &dummy, /* Vector #  93 */
(unsigned int) &dummy, /* Vector #  94 */
(unsigned int) &dummy, /* Vector #  95 */
(unsigned int) &dummy, /* Vector #  96 */
(unsigned int) &dummy, /* Vector #  97 */
(unsigned int) &dummy, /* Vector #  98 */
(unsigned int) &dummy, /* Vector #  99 */
(unsigned int) &dummy, /* Vector # 100 */
(unsigned int) &dummy, /* Vector # 101 */
(unsigned int) &dummy, /* Vector # 102 */
(unsigned int) &dummy, /* Vector # 103 */
(unsigned int) &dummy, /* Vector # 104 */
(unsigned int) &dummy, /* Vector # 105 */
(unsigned int) &dummy, /* Vector # 106 */
(unsigned int) &dummy, /* Vector # 107 */
(unsigned int) &dummy, /* Vector # 108 */
(unsigned int) &dummy, /* Vector # 109 */
(unsigned int) &dummy, /* Vector # 110 */
(unsigned int) &dummy, /* Vector # 111 */
(unsigned int) &dummy, /* Vector # 112 */
(unsigned int) &dummy, /* Vector # 113 */
(unsigned int) &dummy, /* Vector # 114 */
(unsigned int) &dummy, /* Vector # 115 */
(unsigned int) &dummy, /* Vector # 116 */
(unsigned int) &dummy, /* Vector # 117 */
(unsigned int) &dummy, /* Vector # 118 */
(unsigned int) &dummy, /* Vector # 119 */
(unsigned int) &dummy, /* Vector # 120 */
(unsigned int) &dummy, /* Vector # 121 */
(unsigned int) &dummy, /* Vector # 122 */
(unsigned int) &dummy, /* Vector # 123 */
(unsigned int) &dummy, /* Vector # 124 */
(unsigned int) &dummy, /* Vector # 125 */
(unsigned int) &dummy, /* Vector # 126 */
(unsigned int) &dummy, /* Vector # 127 */
(unsigned int) &dummy, /* Vector # 128 */
(unsigned int) &dummy, /* Vector # 129 */
(unsigned int) &dummy, /* Vector # 130 */
(unsigned int) &dummy, /* Vector # 131 */
(unsigned int) &dummy, /* Vector # 132 */
(unsigned int) &dummy, /* Vector # 133 */
(unsigned int) &dummy, /* Vector # 134 */
(unsigned int) &dummy, /* Vector # 135 */
(unsigned int) &dummy, /* Vector # 136 */
(unsigned int) &dummy, /* Vector # 137 */
(unsigned int) &dummy, /* Vector # 138 */
(unsigned int) &dummy, /* Vector # 139 */
(unsigned int) &dummy, /* Vector # 140 */
(unsigned int) &dummy, /* Vector # 141 */
(unsigned int) &dummy, /* Vector # 142 */
(unsigned int) &dummy, /* Vector # 143 */
(unsigned int) &dummy, /* Vector # 144 */
(unsigned int) &dummy, /* Vector # 145 */
(unsigned int) &dummy, /* Vector # 146 */
(unsigned int) &dummy, /* Vector # 147 */
(unsigned int) &dummy, /* Vector # 148 */
(unsigned int) &dummy, /* Vector # 149 */
(unsigned int) &dummy, /* Vector # 150 */
(unsigned int) &dummy, /* Vector # 151 */
(unsigned int) &dummy, /* Vector # 152 */
(unsigned int) &dummy, /* Vector # 153 */
(unsigned int) &dummy, /* Vector # 154 */
(unsigned int) &dummy, /* Vector # 155 */
(unsigned int) &dummy, /* Vector # 156 */
(unsigned int) &dummy, /* Vector # 157 */
(unsigned int) &dummy, /* Vector # 158 */
(unsigned int) &dummy, /* Vector # 159 */
(unsigned int) &dummy, /* Vector # 160 */
(unsigned int) &dummy, /* Vector # 161 */
(unsigned int) &dummy, /* Vector # 162 */
(unsigned int) &dummy, /* Vector # 163 */
(unsigned int) &dummy, /* Vector # 164 */
(unsigned int) &dummy, /* Vector # 165 */
(unsigned int) &dummy, /* Vector # 166 */
(unsigned int) &dummy, /* Vector # 167 */
(unsigned int) &dummy, /* Vector # 168 */
(unsigned int) &dummy, /* Vector # 169 */
(unsigned int) &dummy, /* Vector # 170 */
(unsigned int) &dummy, /* Vector # 171 */
(unsigned int) &dummy, /* Vector # 172 */
(unsigned int) &dummy, /* Vector # 173 */
(unsigned int) &dummy, /* Vector # 174 */
(unsigned int) &dummy, /* Vector # 175 */
(unsigned int) &dummy, /* Vector # 176 */
(unsigned int) &dummy, /* Vector # 177 */
(unsigned int) &dummy, /* Vector # 178 */
(unsigned int) &dummy, /* Vector # 179 */
(unsigned int) &dummy, /* Vector # 180 */
(unsigned int) &dummy, /* Vector # 181 */
(unsigned int) &dummy, /* Vector # 182 */
(unsigned int) &dummy, /* Vector # 183 */
(unsigned int) &dummy, /* Vector # 184 */
(unsigned int) &dummy, /* Vector # 185 Flash controller Prog/Erase/Suspend IRQ_0  MCR[DONE] */
(unsigned int) &dummy, /* Vector # 186 */
(unsigned int) &dummy, /* Vector # 187 AMU DMA interrupt for AMU channel 1 STCFG1[WDMA]   */
(unsigned int) &dummy, /* Vector # 188 */
(unsigned int) &dummy, /* Vector # 189 AMU DMA interrupt for AMU channel 0 STCFG0[WDMA]   */
(unsigned int) &dummy, /* Vector # 190 AMU DMA interrupt for AMU channel 1 STCFG1[WDMA]   */
(unsigned int) &dummy, /* Vector # 191 AMU Error interrupt for AMU channel 0 STCFG0[EINT] */
(unsigned int) &dummy, /* Vector # 192 AMU Error interrupt for AMU channel 1 STCFG1[EINT]*/
(unsigned int) &dummy, /* Vector # 193 */
(unsigned int) &dummy, /* Vector # 194 */
(unsigned int) &dummy, /* Vector # 195 */
(unsigned int) &dummy, /* Vector # 196 */
(unsigned int) &dummy, /* Vector # 197 */
(unsigned int) &dummy, /* Vector # 198 */
(unsigned int) &dummy, /* Vector # 199 */
(unsigned int) &dummy, /* Vector # 200 */
(unsigned int) &dummy, /* Vector # 201 */
(unsigned int) &dummy, /* Vector # 202 */
(unsigned int) &dummy, /* Vector # 203 */
(unsigned int) &dummy, /* Vector # 204 */
(unsigned int) &dummy, /* Vector # 205 */
(unsigned int) &dummy, /* Vector # 206 */
(unsigned int) &dummy, /* Vector # 207 */
(unsigned int) &dummy, /* Vector # 208 */
(unsigned int) &dummy, /* Vector # 209 */
(unsigned int) &dummy, /* Vector # 210 ENET Interrupt Group0 ENET_0 */
(unsigned int) &dummy, /* Vector # 211 ENET Interrupt Group1 ENET_1 */
(unsigned int) &dummy, /* Vector # 212 ENET Interrupt Group2 ENET_2 */
(unsigned int) &dummy, /* Vector # 213 */
(unsigned int) &dummy, /* Vector # 214 ENET Interrupt Group4 ENET_4 */
(unsigned int) &dummy, /* Vector # 215 ENET Interrupt Group5 ENET_5 */
(unsigned int) &dummy, /* Vector # 216 ENET Interrupt Group6 ENET_6 */
(unsigned int) &dummy, /* Vector # 217 ENET Interrupt Group7 ENET_7 */
(unsigned int) &dummy, /* Vector # 218 ENET Interrupt Group8 ENET_8 */
(unsigned int) &dummy, /* Vector # 219 */
(unsigned int) &dummy, /* Vector # 220 */
(unsigned int) &dummy, /* Vector # 221 */
(unsigned int) &dummy, /* Vector # 222 */
(unsigned int) &dummy, /* Vector # 223 */
(unsigned int) &dummy, /* Vector # 224 Real Time Counter (RTC) RTC */
(unsigned int) &dummy, /* Vector # 225 Real Time Counter (API) API */
(unsigned int) &TimerInterruptHandler, /* Vector # 226 Periodic Interrupt Timer 0 (PIT_0) Channel 0 PIT_0_TFLG0[TIF] */
(unsigned int) &dummy, /* Vector # 227 Periodic Interrupt Timer 0 (PIT_0) Channel 1 PIT_0_TFLG1[TIF] */
(unsigned int) &dummy, /* Vector # 228 Periodic Interrupt Timer 0 (PIT_0) Channel 2 PIT_0_TFLG2[TIF] */
(unsigned int) &dummy, /* Vector # 229 Periodic Interrupt Timer 0 (PIT_0) Channel 3 PIT_0_TFLG3[TIF] */
(unsigned int) &dummy, /* Vector # 230 Periodic Interrupt Timer 0 (PIT_0) Channel 4 PIT_0_TFLG4[TIF] */
(unsigned int) &dummy, /* Vector # 231 Periodic Interrupt Timer 0 (PIT_0) Channel 5 PIT_0_TFLG5[TIF] */
(unsigned int) &dummy, /* Vector # 232 Periodic Interrupt Timer 0 (PIT_0) Channel 6 PIT_0_TFLG6[TIF] */
(unsigned int) &dummy, /* Vector # 233 Periodic Interrupt Timer 0 (PIT_0) Channel 7 PIT_0_TFLG7[TIF] */
(unsigned int) &dummy, /* Vector # 234  */
(unsigned int) &dummy, /* Vector # 235  */
(unsigned int) &dummy, /* Vector # 236  */
(unsigned int) &dummy, /* Vector # 237  */
(unsigned int) &dummy, /* Vector # 238  */
(unsigned int) &RtiTimerInterruptHandler, /* Vector # 239 Periodic Interrupt Timer 0 (PIT_0) PIT_0_RTI_TFLG[TIF] */
(unsigned int) &TimerInterruptHandler, /* Vector # 240 Periodic Interrupt Timer 1 (PIT_1) PIT_1_TFLG0[TIF]    */
(unsigned int) &dummy, /* Vector # 241 Periodic Interrupt Timer 1 (PIT_1) PIT_1_TFLG1[TIF]    */
(unsigned int) &dummy, /* Vector # 242 XOSC counter XOSC_CTL[I_OSC]                           */
(unsigned int) &dummy, /* Vector # 243 SIUL EIRQ [0-7] - SIUL Combined External Interrupt */
(unsigned int) &dummy, /* Vector # 244 SIUL EIRQ [8-15] - SIUL Combined External Interrupt */
(unsigned int) &dummy, /* Vector # 245 SIUL EIRQ [16-23] - SIUL Combined External Interrupt */
(unsigned int) &dummy, /* Vector # 246 SIUL EIRQ [24-31] - SIUL Combined External Interrupt */
(unsigned int) &dummy, /* Vector # 247 */
(unsigned int) &dummy, /* Vector # 248 */
(unsigned int) &dummy, /* Vector # 249 */
(unsigned int) &dummy, /* Vector # 250 LPU_CTL o_interrupt */
(unsigned int) &dummy, /* Vector # 251 MC _ME ME_IS[I_SAFE] */
(unsigned int) &dummy, /* Vector # 252 MC _ME ME_IS[I_MTC] */
(unsigned int) &dummy, /* Vector # 253 MC _ME ME_IS[I_IMODE] */
(unsigned int) &dummy, /* Vector # 254 MC _ME ME_IS[I_ICONF] */
(unsigned int) &dummy, /* Vector # 255 MC_RGM MC_RGM Functional and destructive reset alternate event interrupt */
(unsigned int) &dummy, /* Vector # 256 */
(unsigned int) &dummy, /* Vector # 257 FXOSC Counter FXOSC Counter */
(unsigned int) &dummy, /* Vector # 258 SXOSC Counter SXOSC Counter */
(unsigned int) &dummy, /* Vector # 259 DSPI0_0 DSPI_0_SR[TFUF] | DSPI_0_SR[RFOF] | DSPI_0_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 260 DSPI0_1 DSPI_0_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 261 DSPI0_2 DSPI_0_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 262 DSPI0_3 DSPI_0_SR[TCF] */
(unsigned int) &dummy, /* Vector # 263 DSPI0_4 DSPI_0_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 264 DSPI0_5 DSPI_0_SR[SPITCF] | DSPI_0_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 265 DSPI0_6 DSPI_0_SR[DSITCF] | DSPI_0_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 266 DSPI0_7 DSPI_0_SR[SPEF] | DSPI_0_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 267 DSPI0_8 DSPI_0_SR[DDIF] */
(unsigned int) &dummy, /* Vector # 268 DSPI1_0 DSPI_1_SR[TFUF] | DSPI_1_SR[RFOF]| DSPI_1_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 269 DSPI1_1 DSPI_1_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 270 DSPI1_2 DSPI_1_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 271 DSPI1_3 DSPI_1_SR[TCF] */
(unsigned int) &dummy, /* Vector # 272 DSPI1_4 DSPI_1_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 273 DSPI1_5 DSPI_1_SR[SPITCF] | DSPI_1_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 274 DSPI1_6 DSPI_1_SR[DSITCF] | DSPI_1_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 275 DSPI1_7 DSPI_1_SR[SPEF] | DSPI_1_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 276 DSPI1_8 DSPI_1_SR[DDIF] */
(unsigned int) &dummy, /* Vector # 277 DSPI2_0 DSPI_2_SR[TFUF] | DSPI_2_SR[RFOF]| DSPI_2_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 278 DSPI2_1 DSPI_2_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 279 DSPI2_2 DSPI_2_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 280 DSPI2_3 DSPI_2_SR[TCF] */
(unsigned int) &dummy, /* Vector # 281 DSPI2_4 DSPI_2_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 282 DSPI2_5 DSPI_2_SR[SPITCF] | DSPI_2_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 283 DSPI2_6 DSPI_2_SR[DSITCF] | DSPI_2_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 284 DSPI2_7 DSPI_2_SR[SPEF] | DSPI_2_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 285 DSPI2_8 DSPI_2_SR[DDIF] */
(unsigned int) &dummy, /* Vector # 286 DSPI3_0 DSPI_3_SR[TFUF] | DSPI_3_SR[RFOF]| DSPI_3_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 287 DSPI3_1 DSPI_3_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 288 DSPI3_2 DSPI_3_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 289 DSPI3_3 DSPI_3_SR[TCF] */
(unsigned int) &dummy, /* Vector # 290 DSPI3_4 DSPI_3_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 291 DSPI3_5 DSPI_3_SR[SPITCF] | DSPI_3_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 292 DSPI3_6 DSPI_3_SR[DSITCF] | DSPI_3_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 293 DSPI3_7 DSPI_3_SR[SPEF] | DSPI_3_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 294 DSPI3_8 DSPI_3_SR[DDIF] */
(unsigned int) &dummy, /* Vector # 295 DSPI4_0 DSPI_4_SR[TFUF] | DSPI_4_SR[RFOF]| DSPI_4_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 296 DSPI4_1 DSPI_4_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 297 DSPI4_2 DSPI_4_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 298 DSPI4_3 DSPI_4_SR[TCF] */
(unsigned int) &dummy, /* Vector # 299 DSPI4_4 DSPI_4_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 300 DSPI4_5 DSPI_4_SR[SPITCF] | DSPI_4_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 301 DSPI4_6 DSPI_4_SR[DSITCF] | DSPI_4_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 302 DSPI4_7 DSPI_4_SR[SPEF] | DSPI_4_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 303 */
(unsigned int) &dummy, /* Vector # 304 DSPI5_0 DSPI_5_SR[TFUF] | DSPI_5_SR[RFOF]| DSPI_5_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 305 DSPI5_1 DSPI_5_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 306 DSPI5_2 DSPI_5_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 307 DSPI5_3 DSPI_5_SR[TCF] */
(unsigned int) &dummy, /* Vector # 308 DSPI5_4 DSPI_5_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 309 DSPI5_5 DSPI_5_SR[SPITCF] | DSPI_5_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 310 DSPI5_6 DSPI_5_SR[DSITCF] | DSPI_5_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 311 DSPI5_7 DSPI_5_SR[SPEF] | DSPI_5_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 312 */
(unsigned int) &dummy, /* Vector # 313 DSPI6_0 DSPI_6_SR[TFUF] | DSPI_6_SR[RFOF]| DSPI_6_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 314 DSPI6_1 DSPI_6_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 315 DSPI6_2 DSPI_6_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 316 DSPI6_3 DSPI_6_SR[TCF] */
(unsigned int) &dummy, /* Vector # 317 DSPI6_4 DSPI_6_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 318 DSPI6_5 DSPI_6_SR[SPITCF] | DSPI_6_SR[CMD_TCF] */
(unsigned int) &dummy, /* Vector # 319 DSPI6_6 DSPI_6_SR[DSITCF] | DSPI_6_SR[CMDFFF] */
(unsigned int) &dummy, /* Vector # 320 DSPI6_7 DSPI_6_SR[SPEF] | DSPI_6_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 321 */
(unsigned int) &dummy, /* Vector # 322 DSPI7_0 DSPI_7_SR[TFUF] | DSPI_7_SR[RFOF]| DSPI_7_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 323 DSPI7_1 DSPI_7_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 324 DSPI7_2 DSPI_7_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 325 DSPI7_3 DSPI_7_SR[TCF] */
(unsigned int) &dummy, /* Vector # 326 DSPI7_4 DSPI_7_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 327 DSPI7_5 DSPI_7_SR[SPITCF] */
(unsigned int) &dummy, /* Vector # 328 DSPI7_6 DSPI_7_SR[DSITCF] */
(unsigned int) &dummy, /* Vector # 329 DSPI7_7 DSPI_7_SR[SPEF] | DSPI_7_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 330 */
(unsigned int) &dummy, /* Vector # 331 DSPI8_0 DSPI_8_SR[TFUF] | DSPI_8_SR[RFOF]| DSPI_8_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 332 DSPI8_1 DSPI_8_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 333 DSPI8_2 DSPI_8_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 334 DSPI8_3 DSPI_8_SR[TCF] */
(unsigned int) &dummy, /* Vector # 335 DSPI8_4 DSPI_8_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 336 DSPI8_5 DSPI_8_SR[SPITCF] */
(unsigned int) &dummy, /* Vector # 337 DSPI8_6 DSPI_8_SR[DSITCF] */
(unsigned int) &dummy, /* Vector # 338 DSPI8_7 DSPI_8_SR[SPEF] | DSPI_8_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 339 */
(unsigned int) &dummy, /* Vector # 340 DSPI9_0 DSPI_9_SR[TFUF] | DSPI_9_SR[RFOF]| DSPI_9_SR[TFIWF] */
(unsigned int) &dummy, /* Vector # 341 DSPI9_1 DSPI_9_SR[EOQF] */
(unsigned int) &dummy, /* Vector # 342 DSPI9_2 DSPI_9_SR[TFFF] */
(unsigned int) &dummy, /* Vector # 343 DSPI9_3 DSPI_9_SR[TCF] */
(unsigned int) &dummy, /* Vector # 344 DSPI9_4 DSPI_9_SR[RFDF] */
(unsigned int) &dummy, /* Vector # 345 DSPI9_5 DSPI_9_SR[SPITCF] */
(unsigned int) &dummy, /* Vector # 346 DSPI9_6 DSPI_9_SR[DSITCF] */
(unsigned int) &dummy, /* Vector # 347 DSPI9_7 DSPI_9_SR[SPEF] | DSPI_9_SR[DPEF] */
(unsigned int) &dummy, /* Vector # 348 */
(unsigned int) &dummy, /* Vector # 349 */
(unsigned int) &dummy, /* Vector # 350 */
(unsigned int) &dummy, /* Vector # 351 */
(unsigned int) &dummy, /* Vector # 352 */
(unsigned int) &dummy, /* Vector # 353 */
(unsigned int) &dummy, /* Vector # 354 */
(unsigned int) &dummy, /* Vector # 355 */
(unsigned int) &dummy, /* Vector # 356 */
(unsigned int) &dummy, /* Vector # 357 */
(unsigned int) &dummy, /* Vector # 358 */
(unsigned int) &dummy, /* Vector # 359 */
(unsigned int) &dummy, /* Vector # 360 */
(unsigned int) &dummy, /* Vector # 361 */
(unsigned int) &dummy, /* Vector # 362 */
(unsigned int) &dummy, /* Vector # 363 */
(unsigned int) &dummy, /* Vector # 364 */
(unsigned int) &dummy, /* Vector # 365 */
(unsigned int) &dummy, /* Vector # 366 */
(unsigned int) &dummy, /* Vector # 367 */
(unsigned int) &dummy, /* Vector # 368 */
(unsigned int) &dummy, /* Vector # 369 */
(unsigned int) &dummy, /* Vector # 370 */
(unsigned int) &dummy, /* Vector # 371 */
(unsigned int) &dummy, /* Vector # 372 BCTU LIST0_LAST | LIST1_LAST */
(unsigned int) &dummy, /* Vector # 373 BCTU NDATA0 | NDATA1 | DATA_OVR0 | DATA_OVR1 */
(unsigned int) &dummy, /* Vector # 374 */
(unsigned int) &dummy, /* Vector # 375 */
(unsigned int) &dummy, /* Vector # 376 LinFLEX0_0 LinFlex_0_RXI */
(unsigned int) &dummy, /* Vector # 377 LinFlex0_1 LinFlex_0_TXI */
(unsigned int) &dummy, /* Vector # 378 LinFlex0_2 LinFlex_0_ERR */
(unsigned int) &dummy, /* Vector # 379 LinFlex1_0 LinFlex_1_RXI */
(unsigned int) &dummy, /* Vector # 380 LinFlex1_1 LinFlex_1_TXI */
(unsigned int) &dummy, /* Vector # 381 LinFlex1_2 LinFlex_1_ERR */
(unsigned int) &dummy, /* Vector # 382 LinFlex2_0 LinFlex_2_RXI */
(unsigned int) &dummy, /* Vector # 383 LinFlex2_1 LinFlex_2_TXI */
(unsigned int) &dummy, /* Vector # 384 LinFlex2_2 LinFlex_2_ERR */
(unsigned int) &dummy, /* Vector # 385 LinFlex3_0 LinFlex_3_RXI */
(unsigned int) &dummy, /* Vector # 386 LinFlex3_1 LinFlex_3_TXI */
(unsigned int) &dummy, /* Vector # 387 LinFlex3_2 LinFlex_3_ERR */
(unsigned int) &dummy, /* Vector # 388 LinFlex4_0 LinFlex_4_RXI */
(unsigned int) &dummy, /* Vector # 389 LinFlex4_1 LinFlex_4_TXI */
(unsigned int) &dummy, /* Vector # 390 LinFlex4_2 LinFlex_4_ERR */
(unsigned int) &dummy, /* Vector # 391 LinFlex5_0 LinFlex_5_RXI */
(unsigned int) &dummy, /* Vector # 392 LinFlex5_1 LinFlex_5_TXI */
(unsigned int) &dummy, /* Vector # 393 LinFlex5_2 LinFlex_5_ERR */
(unsigned int) &dummy, /* Vector # 394 LinFlex6_0 LinFlex_6_RXI */
(unsigned int) &dummy, /* Vector # 395 LinFlex6_1 LinFlex_6_TXI */
(unsigned int) &dummy, /* Vector # 396 LinFlex6_2 LinFlex_6_ERR */
(unsigned int) &dummy, /* Vector # 397 LinFlex7_0 LinFlex_7_RXI */
(unsigned int) &dummy, /* Vector # 398 LinFlex7_1 LinFlex_7_TXI */
(unsigned int) &dummy, /* Vector # 399 LinFlex7_2 LinFlex_7_ERR */
(unsigned int) &dummy, /* Vector # 400 LinFlex8_0 LinFlex_8_RXI */
(unsigned int) &dummy, /* Vector # 401 LinFlex8_1 LinFlex_8_TXI */
(unsigned int) &dummy, /* Vector # 402 LinFlex8_2 LinFlex_8_ERR */
(unsigned int) &dummy, /* Vector # 403 LinFlex9_0 LinFlex_9_RXI */
(unsigned int) &dummy, /* Vector # 404 LinFlex9_1 LinFlex_9_TXI */
(unsigned int) &dummy, /* Vector # 405 LinFlex9_2 LinFlex_9_ERR */
(unsigned int) &dummy, /* Vector # 406 LinFlex10_0 LinFlex_10_RXI */
(unsigned int) &dummy, /* Vector # 407 LinFlex10_1 LinFlex_10_TXI */
(unsigned int) &dummy, /* Vector # 408 LinFlex10_2 LinFlex_10_ERR */
(unsigned int) &dummy, /* Vector # 409 LinFlex11_0 LinFlex_11_RXI */
(unsigned int) &dummy, /* Vector # 410 LinFlex11_1 LinFlex_11_TXI */
(unsigned int) &dummy, /* Vector # 411 LinFlex11_2 LinFlex_11_ERR */
(unsigned int) &dummy, /* Vector # 412 LinFlex12_0 LinFlex_12_RXI */
(unsigned int) &dummy, /* Vector # 413 LinFlex12_1 LinFlex_12_TXI */
(unsigned int) &dummy, /* Vector # 414 LinFlex12_2 LinFlex_12_ERR */
(unsigned int) &dummy, /* Vector # 415 LinFlex13_0 LinFlex_13_RXI */
(unsigned int) &dummy, /* Vector # 416 LinFlex13_1 LinFlex_13_TXI */
(unsigned int) &dummy, /* Vector # 417 LinFlex13_2 LinFlex_13_ERR */
(unsigned int) &dummy, /* Vector # 418 LinFlex14_0 LinFlex_14_RXI */
(unsigned int) &dummy, /* Vector # 419 LinFlex14_1 LinFlex_14_TXI */
(unsigned int) &dummy, /* Vector # 420 LinFlex14_2 LinFlex_14_ERR */
(unsigned int) &dummy, /* Vector # 421 LinFlex15_0 LinFlex_15_RXI */
(unsigned int) &dummy, /* Vector # 422 LinFlex15_1 LinFlex_15_TXI */
(unsigned int) &dummy, /* Vector # 423 LinFlex15_2 LinFlex_15_ERR */
(unsigned int) &dummy, /* Vector # 424 LinFlex16_0 LinFlex_16_RXI */
(unsigned int) &dummy, /* Vector # 425 LinFlex16_1 LinFlex_16_TXI */
(unsigned int) &dummy, /* Vector # 426 LinFlex16_2 LinFlex_16_ERR */
(unsigned int) &dummy, /* Vector # 427 LinFlex17_0 LinFlex_17_RXI */
(unsigned int) &dummy, /* Vector # 428 LinFlex17_1 LinFlex_17_TXI */
(unsigned int) &dummy, /* Vector # 429 LinFlex17_2 LinFlex_17_ERR */
(unsigned int) &dummy, /* Vector # 430 */
(unsigned int) &dummy, /* Vector # 431 */
(unsigned int) &dummy, /* Vector # 432 */
(unsigned int) &dummy, /* Vector # 433 */
(unsigned int) &dummy, /* Vector # 434 */
(unsigned int) &dummy, /* Vector # 435 */
(unsigned int) &dummy, /* Vector # 436 */
(unsigned int) &dummy, /* Vector # 437 */
(unsigned int) &dummy, /* Vector # 438 */
(unsigned int) &dummy, /* Vector # 439 */
(unsigned int) &dummy, /* Vector # 440 I2C_0_0 I2C0_SR[IBAL] | I2C0_SR[TCF] | I2C0_SR[IAAS] */
(unsigned int) &dummy, /* Vector # 441 */
(unsigned int) &dummy, /* Vector # 442 I2C_1_0 I2C1_SR[IBAL] | I2C1_SR[TCF] | I2C1_SR[IAAS] */
(unsigned int) &dummy, /* Vector # 443 */
(unsigned int) &dummy, /* Vector # 444 I2C_2_0 I2C2_SR[IBAL] | I2C2_SR[TCF] | I2C2_SR[IAAS] */
(unsigned int) &dummy, /* Vector # 445 */
(unsigned int) &dummy, /* Vector # 446 I2C_3_0 I2C3_SR[IBAL] | I2C3_SR[TCF] | I2C3_SR[IAAS] */
(unsigned int) &dummy, /* Vector # 447 */
(unsigned int) &dummy, /* Vector # 448 */
(unsigned int) &dummy, /* Vector # 449 */
(unsigned int) &dummy, /* Vector # 450 */
(unsigned int) &dummy, /* Vector # 451 */
(unsigned int) &dummy, /* Vector # 452 */
(unsigned int) &dummy, /* Vector # 453 FlexRay_0_0 LRNEIF | DRNEIF */
(unsigned int) &dummy, /* Vector # 454 FlexRay_0_1 LRCEIF | DRCEIF */
(unsigned int) &dummy, /* Vector # 455 FlexRay_0_2 FNEAIF */
(unsigned int) &dummy, /* Vector # 456 FlexRay_0_3 FNEBIF */
(unsigned int) &dummy, /* Vector # 457 FlexRay_0_4 WUPIF */
(unsigned int) &dummy, /* Vector # 458 FlexRay_0_5 PRIF */
(unsigned int) &dummy, /* Vector # 459 FlexRay_0_6 CHIF */
(unsigned int) &dummy, /* Vector # 460 FlexRay_0_7 TBIF */
(unsigned int) &dummy, /* Vector # 461 FlexRay_0_8 RBIF */
(unsigned int) &dummy, /* Vector # 462 FlexRay_0_9 MIF */
(unsigned int) &dummy, /* Vector # 463 */
(unsigned int) &dummy, /* Vector # 464 */
(unsigned int) &dummy, /* Vector # 465 */
(unsigned int) &dummy, /* Vector # 466 */
(unsigned int) &dummy, /* Vector # 467 */
(unsigned int) &dummy, /* Vector # 468 */
(unsigned int) &dummy, /* Vector # 469 */
(unsigned int) &dummy, /* Vector # 470 */
(unsigned int) &dummy, /* Vector # 471 */
(unsigned int) &dummy, /* Vector # 472 */
(unsigned int) &dummy, /* Vector # 473 */
(unsigned int) &dummy, /* Vector # 474 */
(unsigned int) &dummy, /* Vector # 475 */
(unsigned int) &dummy, /* Vector # 476 */
(unsigned int) &dummy, /* Vector # 477 Power Monitor Unit LVD/HVD self checking fault */
(unsigned int) &dummy, /* Vector # 478 */
(unsigned int) &dummy, /* Vector # 479 */
(unsigned int) &dummy, /* Vector # 480 PLL Loss-of-lock interrupt request for PLL */
(unsigned int) &dummy, /* Vector # 481 */
(unsigned int) &dummy, /* Vector # 482 */
(unsigned int) &dummy, /* Vector # 483 */
(unsigned int) &dummy, /* Vector # 484 PLL Indicates PLL Power down process completed by MC_ME */
(unsigned int) &dummy, /* Vector # 485 */
(unsigned int) &dummy, /* Vector # 486 */
(unsigned int) &dummy, /* Vector # 487 */
(unsigned int) &dummy, /* Vector # 488 FCCU Interrupt request (ALARM state) */
(unsigned int) &dummy, /* Vector # 489 FCCU Interrupt request (miscellaneous conditions) */
(unsigned int) &dummy, /* Vector # 490 FCCU EOUT interrupt */
(unsigned int) &dummy, /* Vector # 491 */
(unsigned int) &dummy, /* Vector # 492 */
(unsigned int) &dummy, /* Vector # 493 */
(unsigned int) &dummy, /* Vector # 494 STCU Interrupt request line related to online MBIST execution */
(unsigned int) &dummy, /* Vector # 495 STCU Interrupt request line related to online LBIST execution */
(unsigned int) &dummy, /* Vector # 496 Hardware Security Module 0 HSM2HTIE[0] */
(unsigned int) &dummy, /* Vector # 497 Hardware Security Module 1 HSM2HTIE[1] */
(unsigned int) &dummy, /* Vector # 498 Hardware Security Module 2 HSM2HTIE[2] */
(unsigned int) &dummy, /* Vector # 499 Hardware Security Module 3 HSM2HTIE[3] */
(unsigned int) &dummy, /* Vector # 500 Hardware Security Module 4 HSM2HTIE[4] */
(unsigned int) &dummy, /* Vector # 501 Hardware Security Module 5 HSM2HTIE[5] */
(unsigned int) &dummy, /* Vector # 502 Hardware Security Module 6 HSM2HTIE[6] */
(unsigned int) &dummy, /* Vector # 503 Hardware Security Module 7 HSM2HTIE[7] */
(unsigned int) &dummy, /* Vector # 504 Hardware Security Module 8 HSM2HTIE[8] */
(unsigned int) &dummy, /* Vector # 505 Hardware Security Module 9 HSM2HTIE[9] */
(unsigned int) &dummy, /* Vector # 506 Hardware Security Module 10 HSM2HTIE[10] */
(unsigned int) &dummy, /* Vector # 507 Hardware Security Module 11 HSM2HTIE[11] */
(unsigned int) &dummy, /* Vector # 508 Hardware Security Module 12 HSM2HTIE[12] */
(unsigned int) &dummy, /* Vector # 509 Hardware Security Module 13 HSM2HTIE[13] */
(unsigned int) &dummy, /* Vector # 510 Hardware Security Module 14 HSM2HTIE[14] */
(unsigned int) &dummy, /* Vector # 511 Hardware Security Module 15 HSM2HTIE[15] */
(unsigned int) &dummy, /* Vector # 512 Hardware Security Module 16 HSM2HTIE[16] */
(unsigned int) &dummy, /* Vector # 513 Hardware Security Module 17 HSM2HTIE[17] */
(unsigned int) &dummy, /* Vector # 514 Hardware Security Module 18 HSM2HTIE[18] */
(unsigned int) &dummy, /* Vector # 515 Hardware Security Module 19 HSM2HTIE[19] */
(unsigned int) &dummy, /* Vector # 516 Hardware Security Module 20 HSM2HTIE[20] */
(unsigned int) &dummy, /* Vector # 517 Hardware Security Module 21 HSM2HTIE[21] */
(unsigned int) &dummy, /* Vector # 518 Hardware Security Module 22 HSM2HTIE[22] */
(unsigned int) &dummy, /* Vector # 519 Hardware Security Module 23 HSM2HTIE[23] */
(unsigned int) &dummy, /* Vector # 520 Hardware Security Module 24 HSM2HTIE[24] */
(unsigned int) &dummy, /* Vector # 521 Hardware Security Module 25 HSM2HTIE[25] */
(unsigned int) &dummy, /* Vector # 522 Hardware Security Module 26 HSM2HTIE[26] */
(unsigned int) &dummy, /* Vector # 523 Hardware Security Module 27 HSM2HTIE[27] */
(unsigned int) &dummy, /* Vector # 524 Hardware Security Module 28 HSM2HTIE[28] */
(unsigned int) &dummy, /* Vector # 525 Hardware Security Module 29 HSM2HTIE[29] */
(unsigned int) &dummy, /* Vector # 526 Hardware Security Module 30 HSM2HTIE[30] */
(unsigned int) &dummy, /* Vector # 527 Hardware Security Module 31 HSM2HTIE[31] */
(unsigned int) &dummy, /* Vector # 528 */
(unsigned int) &dummy, /* Vector # 529 */
(unsigned int) &dummy, /* Vector # 530 */
(unsigned int) &dummy, /* Vector # 531 */
(unsigned int) &dummy, /* Vector # 532 */
(unsigned int) &dummy, /* Vector # 533 */
(unsigned int) &dummy, /* Vector # 534 */
(unsigned int) &dummy, /* Vector # 535 */
(unsigned int) &dummy, /* Vector # 536 */
(unsigned int) &dummy, /* Vector # 537 */
(unsigned int) &dummy, /* Vector # 538 */
(unsigned int) &dummy, /* Vector # 539 */
(unsigned int) &dummy, /* Vector # 540 */
(unsigned int) &dummy, /* Vector # 541 */
(unsigned int) &dummy, /* Vector # 542 */
(unsigned int) &dummy, /* Vector # 543 */
(unsigned int) &dummy, /* Vector # 544 */
(unsigned int) &dummy, /* Vector # 545 */
(unsigned int) &dummy, /* Vector # 546 */
(unsigned int) &dummy, /* Vector # 547 */
(unsigned int) &dummy, /* Vector # 548 ADC_0_EOC ADC_0_EOC */
(unsigned int) &dummy, /* Vector # 549 ADC_0_ER ADC_0_ER */
(unsigned int) &dummy, /* Vector # 550 ADC_0_WD ADC_0_WD */
(unsigned int) &dummy, /* Vector # 551 */
(unsigned int) &dummy, /* Vector # 552 */
(unsigned int) &dummy, /* Vector # 553 */
(unsigned int) &dummy, /* Vector # 554 ADC_1_EOC ADC_1_EOC */
(unsigned int) &dummy, /* Vector # 555 ADC_1_ER ADC_1_ER */
(unsigned int) &dummy, /* Vector # 556 ADC_1_WD ADC_1_WD */
(unsigned int) &dummy, /* Vector # 557 */
(unsigned int) &dummy, /* Vector # 558 */
(unsigned int) &dummy, /* Vector # 559 */
(unsigned int) &dummy, /* Vector # 560 Analogue_Comparator_Module_0 CMP0 */
(unsigned int) &dummy, /* Vector # 561 Analogue_Comparator_Module_1 CMP1 */
(unsigned int) &dummy, /* Vector # 562 Analogue_Comparator_Module_2 CMP2 */
(unsigned int) &dummy, /* Vector # 563 */
(unsigned int) &dummy, /* Vector # 564 */
(unsigned int) &dummy, /* Vector # 565 FlexCAN0_0 FlexCAN0_PN */
(unsigned int) &dummy, /* Vector # 566 FlexCAN0_1 FLEXCAN_0_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 567 FlexCAN0_2 FLEXCAN_0_ESR_BOFF | FLEXCAN_0_Transmit_Warning | FLEXCAN_0_Receive_Warning */
(unsigned int) &dummy, /* Vector # 568 FlexCAN0_3 FlexCAN0_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 569 FlexCAN0_4 FlexCAN0_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 570 FlexCAN0_5 FlexCAN0_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 571 FlexCAN0_6 FlexCAN0_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 572 FlexCAN0_7 FlexCAN0_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 573 FlexCAN0_8 FlexCAN0_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 574 */
(unsigned int) &dummy, /* Vector # 575 */
(unsigned int) &dummy, /* Vector # 576 */
(unsigned int) &dummy, /* Vector # 577 */
(unsigned int) &dummy, /* Vector # 578 FlexCAN1_0 FLEXCAN_1_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 579 FlexCAN1_1 FLEXCAN_1_ESR_BOFF | FLEXCAN_1_Transmit_Warning | FLEXCAN_1_Receive_Warning */
(unsigned int) &dummy, /* Vector # 580 FlexCAN1_2 FlexCAN1_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 581 FlexCAN1_3 FlexCAN1_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 582 FlexCAN1_4 FlexCAN1_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 583 FlexCAN1_5 FlexCAN1_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 584 FlexCAN1_6 FlexCAN1_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 585 FlexCAN1_7 FlexCAN1_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 586 */
(unsigned int) &dummy, /* Vector # 587 */
(unsigned int) &dummy, /* Vector # 588 */
(unsigned int) &dummy, /* Vector # 589 */
(unsigned int) &dummy, /* Vector # 590 FlexCAN2_0 FLEXCAN_2_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 591 FlexCAN2_1 FLEXCAN_2_ESR_BOFF | FLEXCAN_2_Transmit_Warning | FLEXCAN_2_Receive_Warning */
(unsigned int) &dummy, /* Vector # 592 FlexCAN2_2 FlexCAN2_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 593 FlexCAN2_3 FlexCAN2_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 594 FlexCAN2_4 FlexCAN2_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 595 FlexCAN2_5 FlexCAN2_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 596 FlexCAN2_6 FlexCAN2_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 597 FlexCAN2_7 FlexCAN2_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 598 */
(unsigned int) &dummy, /* Vector # 599 */
(unsigned int) &dummy, /* Vector # 600 */
(unsigned int) &dummy, /* Vector # 601 */
(unsigned int) &dummy, /* Vector # 602 FlexCAN3_0 FLEXCAN_3_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 603 FlexCAN3_1 FLEXCAN_3_ESR_BOFF | FLEXCAN_3_Transmit_Warning | FLEXCAN_3_Receive_Warning */
(unsigned int) &dummy, /* Vector # 604 FlexCAN3_2 FlexCAN3_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 605 FlexCAN3_3 FlexCAN3_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 606 FlexCAN3_4 FlexCAN3_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 607 FlexCAN3_5 FlexCAN3_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 608 FlexCAN3_6 FlexCAN3_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 609 FlexCAN3_7 FlexCAN3_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 610 */
(unsigned int) &dummy, /* Vector # 611 */
(unsigned int) &dummy, /* Vector # 612 */
(unsigned int) &dummy, /* Vector # 613 */
(unsigned int) &dummy, /* Vector # 614 FlexCAN4_0 FLEXCAN_4_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 615 FlexCAN4_1 FLEXCAN_4_ESR_BOFF | FLEXCAN_4_Transmit_Warning | FLEXCAN_4_Receive_Warning */
(unsigned int) &dummy, /* Vector # 616 FlexCAN4_2 FlexCAN4_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 617 FlexCAN4_3 FlexCAN4_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 618 FlexCAN4_4 FlexCAN4_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 619 FlexCAN4_5 FlexCAN4_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 620 FlexCAN4_6 FlexCAN4_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 621 FlexCAN4_7 FlexCAN4_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 622 */
(unsigned int) &dummy, /* Vector # 623 */
(unsigned int) &dummy, /* Vector # 624 */
(unsigned int) &dummy, /* Vector # 625 */
(unsigned int) &dummy, /* Vector # 626 FlexCAN5_0 FLEXCAN_5_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 627 FlexCAN5_1 FLEXCAN_5_ESR_BOFF | FLEXCAN_5_Transmit_Warning | FLEXCAN_5_Receive_Warning */
(unsigned int) &dummy, /* Vector # 628 FlexCAN5_2 FlexCAN5_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 629 FlexCAN5_3 FlexCAN5_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 630 FlexCAN5_4 FlexCAN5BUF_08_11 */
(unsigned int) &dummy, /* Vector # 631 FlexCAN5_5 FlexCAN5_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 632 FlexCAN5_6 FlexCAN5_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 633 FlexCAN5_7 FlexCAN5_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 634 */
(unsigned int) &dummy, /* Vector # 635 */
(unsigned int) &dummy, /* Vector # 636 */
(unsigned int) &dummy, /* Vector # 637 */
(unsigned int) &dummy, /* Vector # 638 FlexCAN6_0 FLEXCAN_6_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 639 FlexCAN6_1 FLEXCAN_6_ESR_BOFF | FLEXCAN_6_Transmit_Warning | FLEXCAN_6_Receive_Warning */
(unsigned int) &dummy, /* Vector # 640 FlexCAN6_2 FlexCAN6_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 641 FlexCAN6_3 FlexCAN6_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 642 FlexCAN6_4 FlexCAN6_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 643 FlexCAN6_5 FlexCAN6_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 644 FlexCAN6_6 FlexCAN6_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 645 FlexCAN6_7 FlexCAN6_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 646 */
(unsigned int) &dummy, /* Vector # 647 */
(unsigned int) &dummy, /* Vector # 648 */
(unsigned int) &dummy, /* Vector # 649 */
(unsigned int) &dummy, /* Vector # 650 FlexCAN7_0 FLEXCAN_7_ESR[ERR_INT] */
(unsigned int) &dummy, /* Vector # 651 FlexCAN7_1 FLEXCAN_7_ESR_BOFF | FLEXCAN_7_Transmit_Warning | FLEXCAN_7_Receive_Warning */
(unsigned int) &dummy, /* Vector # 652 FlexCAN7_2 FlexCAN7_BUF_00_03 */
(unsigned int) &dummy, /* Vector # 653 FlexCAN7_3 FlexCAN7_BUF_04_07 */
(unsigned int) &dummy, /* Vector # 654 FlexCAN7_4 FlexCAN7_BUF_08_11 */
(unsigned int) &dummy, /* Vector # 655 FlexCAN7_5 FlexCAN7_BUF_12_15 */
(unsigned int) &dummy, /* Vector # 656 FlexCAN7_6 FlexCAN7_BUF_16_31 */
(unsigned int) &dummy, /* Vector # 657 FlexCAN7_7 FlexCAN7_BUF_32_63 */
(unsigned int) &dummy, /* Vector # 658 */
(unsigned int) &dummy, /* Vector # 659 */
(unsigned int) &dummy, /* Vector # 660 */
(unsigned int) &dummy, /* Vector # 661 */
(unsigned int) &dummy, /* Vector # 662 */
(unsigned int) &dummy, /* Vector # 663 */
(unsigned int) &dummy, /* Vector # 664 */
(unsigned int) &dummy, /* Vector # 665 */
(unsigned int) &dummy, /* Vector # 666 */
(unsigned int) &dummy, /* Vector # 667 */
(unsigned int) &dummy, /* Vector # 668 WKUP_IRQ_0 WKPU_IRQ_0 */
(unsigned int) &dummy, /* Vector # 669 WKPU_IRQ_1 WKPU_IRQ_1 */
(unsigned int) &dummy, /* Vector # 670 WKPU_IRQ_2 WKPU_IRQ_2 */
(unsigned int) &dummy, /* Vector # 671 WKPU_IRQ_3 WKPU_IRQ_3 */
(unsigned int) &dummy, /* Vector # 672 */
(unsigned int) &dummy, /* Vector # 673 */
(unsigned int) &dummy, /* Vector # 674 */
(unsigned int) &dummy, /* Vector # 675 */
(unsigned int) &dummy, /* Vector # 676 */
(unsigned int) &dummy, /* Vector # 677 */
(unsigned int) &dummy, /* Vector # 678 */
(unsigned int) &dummy, /* Vector # 679 */
(unsigned int) &dummy, /* Vector # 680 SDIO (SDHC) 0 SDHC0 */
(unsigned int) &dummy, /* Vector # 681 */
(unsigned int) &dummy, /* Vector # 682 USB_OTG USB OTG */
(unsigned int) &dummy, /* Vector # 683 USB_SPH USB SPH */
(unsigned int) &dummy, /* Vector # 684 */
(unsigned int) &dummy, /* Vector # 685 */
(unsigned int) &dummy, /* Vector # 686 MLB MLB System Interrupt */
(unsigned int) &dummy, /* Vector # 687 MLB MLB Channel Interrupts 0-15 Combined */
(unsigned int) &dummy, /* Vector # 688 */
(unsigned int) &dummy, /* Vector # 689 */
(unsigned int) &dummy, /* Vector # 690 SAI0_TX_FIFO_IRQ SAI0_TX_FIFO_IRQ */
(unsigned int) &dummy, /* Vector # 691 SAI0_RX_FIFO_IRQ SAI0_RX_FIFO_IRQ */
(unsigned int) &dummy, /* Vector # 692 SAI1_TX_FIFO_IRQ SAI1_TX_FIFO_IRQ */
(unsigned int) &dummy, /* Vector # 693 SAI1_RX_FIFO_IRQ SAI1_RX_FIFO_IRQ */
(unsigned int) &dummy, /* Vector # 694 SAI2_TX_FIFO_IRQ SAI2_TX_FIFO_IRQ */
(unsigned int) &dummy, /* Vector # 695 SAI2_RX_FIFO_IRQ SAI2_RX_FIFO_IRQ */
(unsigned int) &dummy, /* Vector # 696 */
(unsigned int) &dummy, /* Vector # 697 */
(unsigned int) &dummy, /* Vector # 698 */
(unsigned int) &dummy, /* Vector # 699 */
(unsigned int) &dummy, /* Vector # 700 */
(unsigned int) &dummy, /* Vector # 701 JDC JDC */
(unsigned int) &dummy, /* Vector # 702 MEMU_1 Correctable errors in LPU mode */
(unsigned int) &dummy, /* Vector # 703 */
(unsigned int) &dummy, /* Vector # 704 */
(unsigned int) &dummy, /* Vector # 705 */
(unsigned int) &dummy, /* Vector # 706 eMIOS channel 0,1 EMIOS_GFR[F0,F1] */
(unsigned int) &dummy, /* Vector # 707 eMIOS channel 2,3 EMIOS_GFR[F2,F3] */
(unsigned int) &dummy, /* Vector # 708 eMIOS channel 4,5 EMIOS_GFR[F4,F5] */
(unsigned int) &dummy, /* Vector # 709 eMIOS channel 6,7 EMIOS_GFR[F6,F7] */
(unsigned int) &dummy, /* Vector # 710 eMIOS channel 8,9 EMIOS_GFR[F8,F9] */
(unsigned int) &dummy, /* Vector # 711 eMIOS channel 10,11 EMIOS_GFR[F10,F11] */
(unsigned int) &dummy, /* Vector # 712 eMIOS channel 12,13 EMIOS_GFR[F12,F13] */
(unsigned int) &dummy, /* Vector # 713 eMIOS channel 14,15 EMIOS_GFR[F14,F15] */
(unsigned int) &dummy, /* Vector # 714 eMIOS channel 16,17 EMIOS_GFR[F16,F17] */
(unsigned int) &dummy, /* Vector # 715 eMIOS channel 18,19 EMIOS_GFR[F18,F19] */
(unsigned int) &dummy, /* Vector # 716 eMIOS channel 20,21 EMIOS_GFR[F20,F21] */
(unsigned int) &dummy, /* Vector # 717 eMIOS channel 22,23 EMIOS_GFR[F22,F23] */
(unsigned int) &dummy, /* Vector # 718 eMIOS channel 24,25 EMIOS_GFR[F24,F25] */
(unsigned int) &dummy, /* Vector # 719 eMIOS channel 26,27 EMIOS_GFR[F26,F27] */
(unsigned int) &dummy, /* Vector # 720 eMIOS channel 28,29 EMIOS_GFR[F28,F29] */
(unsigned int) &dummy, /* Vector # 721 eMIOS channel 30,31 EMIOS_GFR[F30,F31] */
(unsigned int) &dummy, /* Vector # 722 eMIOS channel 32,33 EMIOS_GFR[F32,F33] */
(unsigned int) &dummy, /* Vector # 723 eMIOS channel 34,35 EMIOS_GFR[F34,F35] */
(unsigned int) &dummy, /* Vector # 724 eMIOS channel 36,37 EMIOS_GFR[F36,F37] */
(unsigned int) &dummy, /* Vector # 725 eMIOS channel 38,39 EMIOS_GFR[F38,F39] */
(unsigned int) &dummy, /* Vector # 726 eMIOS channel 40,41 EMIOS_GFR[F40,F41] */
(unsigned int) &dummy, /* Vector # 727 eMIOS channel 42,43 EMIOS_GFR[F42,F43] */
(unsigned int) &dummy, /* Vector # 728 eMIOS channel 44,45 EMIOS_GFR[F44,F45] */
(unsigned int) &dummy, /* Vector # 729 eMIOS channel 46,47 EMIOS_GFR[F46,F47] */
(unsigned int) &dummy, /* Vector # 730 eMIOS channel 48,49 EMIOS_GFR[F48,F49] */
(unsigned int) &dummy, /* Vector # 731 eMIOS channel 50,51 EMIOS_GFR[F50,F51] */
(unsigned int) &dummy, /* Vector # 732 eMIOS channel 52,53 EMIOS_GFR[F52,F53] */
(unsigned int) &dummy, /* Vector # 733 eMIOS channel 54,55 EMIOS_GFR[F54,F55] */
(unsigned int) &dummy, /* Vector # 734 eMIOS channel 56,57 EMIOS_GFR[F56,F57] */
(unsigned int) &dummy, /* Vector # 735 eMIOS channel 58,59 EMIOS_GFR[F58,F59] */
(unsigned int) &dummy, /* Vector # 736 eMIOS channel 60,61 EMIOS_GFR[F60,F61] */
(unsigned int) &dummy, /* Vector # 737 eMIOS channel 62,63 EMIOS_GFR[F62,F63] */
(unsigned int) &dummy, /* Vector # 738 eMIOS channel 64,65 EMIOS_GFR[F64,F65] */
(unsigned int) &dummy, /* Vector # 739 eMIOS channel 66,67 EMIOS_GFR[F66,F67] */
(unsigned int) &dummy, /* Vector # 740 eMIOS channel 68,69 EMIOS_GFR[F68,F69] */
(unsigned int) &dummy, /* Vector # 741 eMIOS channel 70,71 EMIOS_GFR[F70,F71] */
(unsigned int) &dummy, /* Vector # 742 eMIOS channel 72,73 EMIOS_GFR[F72,F73] */
(unsigned int) &dummy, /* Vector # 743 eMIOS channel 74,75 EMIOS_GFR[F74,F75] */
(unsigned int) &dummy, /* Vector # 744 eMIOS channel 76,77 EMIOS_GFR[F76,F77] */
(unsigned int) &dummy, /* Vector # 745 eMIOS channel 78,79 EMIOS_GFR[F78,F79] */
(unsigned int) &dummy, /* Vector # 746 eMIOS channel 80,81 EMIOS_GFR[F80,F81] */
(unsigned int) &dummy, /* Vector # 747 eMIOS channel 82,83 EMIOS_GFR[F82,F83] */
(unsigned int) &dummy, /* Vector # 748 eMIOS channel 84,85 EMIOS_GFR[F84,F85] */
(unsigned int) &dummy, /* Vector # 749 eMIOS channel 86,87 EMIOS_GFR[F86,F87] */
(unsigned int) &dummy, /* Vector # 750 eMIOS channel 88,89 EMIOS_GFR[F88,F89] */
(unsigned int) &dummy, /* Vector # 751 eMIOS channel 90,91 EMIOS_GFR[F90,F91] */
(unsigned int) &dummy, /* Vector # 752 eMIOS channel 92,93 EMIOS_GFR[F92,F93] */
(unsigned int) &dummy, /* Vector # 753 eMIOS channel 94,95 EMIOS_GFR[F94,F95] */
(unsigned int) &dummy, /* Vector # 754  */
(unsigned int) &dummy, /* Vector # 755  */
(unsigned int) &dummy, /* Vector # 756  */
(unsigned int) &dummy, /* Vector # 757  */
(unsigned int) &dummy, /* Vector # 758  */
(unsigned int) &dummy, /* Vector # 759  */
(unsigned int) &dummy, /* Vector # 760  */
(unsigned int) &dummy, /* Vector # 761  */
(unsigned int) &dummy, /* Vector # 762  */
(unsigned int) &dummy, /* Vector # 763  */
(unsigned int) &dummy, /* Vector # 764  */
(unsigned int) &dummy, /* Vector # 765  */
(unsigned int) &dummy, /* Vector # 766  */
(unsigned int) &dummy, /* Vector # 767  */
(unsigned int) &dummy, /* Vector # 768  */
(unsigned int) &dummy, /* Vector # 769  */
(unsigned int) &dummy, /* Vector # 770  */
(unsigned int) &dummy, /* Vector # 771  */
(unsigned int) &dummy, /* Vector # 772  */
(unsigned int) &dummy, /* Vector # 773  */
(unsigned int) &dummy, /* Vector # 774  */
(unsigned int) &dummy, /* Vector # 775  */
(unsigned int) &dummy, /* Vector # 776  */
(unsigned int) &dummy, /* Vector # 777  */
(unsigned int) &dummy, /* Vector # 778  */
(unsigned int) &dummy, /* Vector # 779  */
(unsigned int) &dummy, /* Vector # 780  */
(unsigned int) &dummy, /* Vector # 781  */
(unsigned int) &dummy, /* Vector # 782  */
(unsigned int) &dummy, /* Vector # 783  */
(unsigned int) &dummy, /* Vector # 784  */
(unsigned int) &dummy, /* Vector # 785  */
(unsigned int) &dummy, /* Vector # 786  */
(unsigned int) &dummy, /* Vector # 787  */
(unsigned int) &dummy, /* Vector # 788  */
(unsigned int) &dummy, /* Vector # 789  */
(unsigned int) &dummy, /* Vector # 790  */
(unsigned int) &dummy, /* Vector # 791  */
(unsigned int) &dummy, /* Vector # 792  */
(unsigned int) &dummy, /* Vector # 793  */
(unsigned int) &dummy, /* Vector # 794  */
(unsigned int) &dummy, /* Vector # 795  */
(unsigned int) &dummy, /* Vector # 796  */
(unsigned int) &dummy, /* Vector # 797  */
(unsigned int) &dummy, /* Vector # 798  */
(unsigned int) &dummy, /* Vector # 799  */
(unsigned int) &dummy, /* Vector # 800  */
(unsigned int) &dummy, /* Vector # 801  */
(unsigned int) &dummy, /* Vector # 802  */
(unsigned int) &dummy, /* Vector # 803  */
(unsigned int) &dummy, /* Vector # 804  */
(unsigned int) &dummy, /* Vector # 805  */
(unsigned int) &dummy, /* Vector # 806  */
(unsigned int) &dummy, /* Vector # 807  */
(unsigned int) &dummy, /* Vector # 808  */
(unsigned int) &dummy, /* Vector # 809  */
(unsigned int) &dummy, /* Vector # 810  */  
(unsigned int) &dummy, /* Vector # 811  */
(unsigned int) &dummy, /* Vector # 812  */
(unsigned int) &dummy, /* Vector # 813  */
(unsigned int) &dummy, /* Vector # 814  */
(unsigned int) &dummy, /* Vector # 815  */
(unsigned int) &dummy, /* Vector # 816  */
(unsigned int) &dummy, /* Vector # 817  */
(unsigned int) &dummy, /* Vector # 818  */
(unsigned int) &dummy, /* Vector # 819  */
(unsigned int) &dummy, /* Vector # 820  */  
(unsigned int) &dummy, /* Vector # 821  */
(unsigned int) &dummy, /* Vector # 822  */
(unsigned int) &dummy, /* Vector # 823  */
(unsigned int) &dummy, /* Vector # 824  */
(unsigned int) &dummy, /* Vector # 825  */
(unsigned int) &dummy, /* Vector # 826  */
(unsigned int) &dummy, /* Vector # 827  */
(unsigned int) &dummy, /* Vector # 828  */
(unsigned int) &dummy, /* Vector # 829  */
(unsigned int) &dummy, /* Vector # 830  */
(unsigned int) &dummy, /* Vector # 831  */
(unsigned int) &dummy, /* Vector # 832  */
(unsigned int) &dummy, /* Vector # 833  */
(unsigned int) &dummy, /* Vector # 834  */
(unsigned int) &dummy, /* Vector # 835  */
(unsigned int) &dummy, /* Vector # 836  */
(unsigned int) &dummy, /* Vector # 837  */
(unsigned int) &dummy, /* Vector # 838  */
(unsigned int) &dummy, /* Vector # 839  */
(unsigned int) &dummy, /* Vector # 340  */
(unsigned int) &dummy, /* Vector # 841  */
(unsigned int) &dummy, /* Vector # 842  */
(unsigned int) &dummy, /* Vector # 843  */
(unsigned int) &dummy, /* Vector # 844  */
(unsigned int) &dummy, /* Vector # 845  */
(unsigned int) &dummy, /* Vector # 846  */
(unsigned int) &dummy, /* Vector # 847  */
(unsigned int) &dummy, /* Vector # 848  */
(unsigned int) &dummy, /* Vector # 849  */
(unsigned int) &dummy, /* Vector # 850  */
(unsigned int) &dummy, /* Vector # 851  */
(unsigned int) &dummy, /* Vector # 852  */
(unsigned int) &dummy, /* Vector # 853  */
(unsigned int) &dummy, /* Vector # 854  */
(unsigned int) &dummy, /* Vector # 855  */
(unsigned int) &dummy, /* Vector # 856  */
(unsigned int) &dummy, /* Vector # 857  */
(unsigned int) &dummy, /* Vector # 858  */
(unsigned int) &dummy, /* Vector # 859  */
(unsigned int) &dummy, /* Vector # 860  */
(unsigned int) &dummy, /* Vector # 861  */
(unsigned int) &dummy, /* Vector # 862  */
(unsigned int) &dummy, /* Vector # 863  */
(unsigned int) &dummy, /* Vector # 864  */
(unsigned int) &dummy, /* Vector # 865  */
(unsigned int) &dummy, /* Vector # 866  */
(unsigned int) &dummy, /* Vector # 867  */
(unsigned int) &dummy, /* Vector # 868  */
(unsigned int) &dummy, /* Vector # 869  */
(unsigned int) &dummy, /* Vector # 870  */
(unsigned int) &dummy, /* Vector # 871  */
(unsigned int) &dummy, /* Vector # 872  */
(unsigned int) &dummy, /* Vector # 873  */
(unsigned int) &dummy, /* Vector # 874  */
(unsigned int) &dummy, /* Vector # 875  */
(unsigned int) &dummy, /* Vector # 876  */
(unsigned int) &dummy, /* Vector # 877  */
(unsigned int) &dummy, /* Vector # 878  */
(unsigned int) &dummy, /* Vector # 879  */
(unsigned int) &dummy, /* Vector # 880  */
(unsigned int) &dummy, /* Vector # 881  */
(unsigned int) &dummy, /* Vector # 882  */
(unsigned int) &dummy, /* Vector # 883  */
(unsigned int) &dummy, /* Vector # 884  */
(unsigned int) &dummy, /* Vector # 885  */
(unsigned int) &dummy, /* Vector # 886  */
(unsigned int) &dummy, /* Vector # 887  */
(unsigned int) &dummy, /* Vector # 888  */
(unsigned int) &dummy, /* Vector # 889  */
(unsigned int) &dummy, /* Vector # 890  */
(unsigned int) &dummy, /* Vector # 891  */
(unsigned int) &dummy, /* Vector # 892  */
(unsigned int) &dummy, /* Vector # 893  */
(unsigned int) &dummy, /* Vector # 894  */
(unsigned int) &dummy, /* Vector # 895  */
(unsigned int) &dummy, /* Vector # 896  */
(unsigned int) &dummy, /* Vector # 897  */
(unsigned int) &dummy, /* Vector # 898  */
(unsigned int) &dummy, /* Vector # 899  */
(unsigned int) &dummy, /* Vector # 900  */
(unsigned int) &dummy, /* Vector # 901  */
(unsigned int) &dummy, /* Vector # 902  */
(unsigned int) &dummy, /* Vector # 903  */
(unsigned int) &dummy, /* Vector # 904  */
(unsigned int) &dummy, /* Vector # 905  */
(unsigned int) &dummy, /* Vector # 906  */
(unsigned int) &dummy, /* Vector # 907  */
(unsigned int) &dummy, /* Vector # 908  */
(unsigned int) &dummy, /* Vector # 909  */
(unsigned int) &dummy, /* Vector # 910  */
(unsigned int) &dummy, /* Vector # 911  */  
(unsigned int) &dummy, /* Vector # 912  */
(unsigned int) &dummy, /* Vector # 913  */
(unsigned int) &dummy, /* Vector # 914  */
(unsigned int) &dummy,  /* Vector # 915  */ 
(unsigned int) &dummy, /* Vector # 916  */
(unsigned int) &dummy, /* Vector # 917  */  
(unsigned int) &dummy, /* Vector # 918  */
(unsigned int) &dummy, /* Vector # 919  */
(unsigned int) &dummy, /* Vector # 920  */
(unsigned int) &dummy,  /* Vector # 921  */ 
(unsigned int) &dummy, /* Vector # 922  */
(unsigned int) &dummy, /* Vector # 923  */
(unsigned int) &dummy, /* Vector # 924  */
(unsigned int) &dummy,  /* Vector # 925  */ 
(unsigned int) &dummy, /* Vector # 926  */
(unsigned int) &dummy, /* Vector # 927  */  
(unsigned int) &dummy, /* Vector # 928  */
(unsigned int) &dummy, /* Vector # 929  */
(unsigned int) &dummy, /* Vector # 930  */
(unsigned int) &dummy,  /* Vector # 931  */ 
(unsigned int) &dummy, /* Vector # 932  */
(unsigned int) &dummy, /* Vector # 933  */
(unsigned int) &dummy, /* Vector # 934  */
(unsigned int) &dummy, /* Vector # 935  */  
(unsigned int) &dummy  /* Vector # 936  */ 
  
};   

void dummy (void) {   /* Dummy ISR vector to trap undefined ISRs */
    while (1) {};  /* Wait forever or for watchdog timeout */
}

