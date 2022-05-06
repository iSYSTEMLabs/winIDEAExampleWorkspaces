#pragma language=extended
/*
 * Option Bytes (Chapter 24):
 * byte 0:  Enable Watchdog Timer (WDT)
 *          Set interval for WDT
 *          Set window open period for WDT
 *          Set interval interrupt of WDT
 *
 * byte 1:  Set Low Voltage Detector operation mode (LVD)
 *          Set LVD detection level
 *
 * byte 2:  Set flash operation mode
 *          Set frequency of the high-speed on-chip oscillator
 *
 * byte 3:  Enable On-Chip Debugger (OCD)
 *          Set erasure of data in flash memory in case of OCD
 *          security ID authentication failure
 */
#pragma location = "OPTBYTE"
__root const char opbyte0 = 0xEFU;
#pragma location = "OPTBYTE"
__root const char opbyte1 = 0xF3U;
#pragma location = "OPTBYTE"
__root const char opbyte2 = 0xE8U;   // freq = 32 MHz
#pragma location = "OPTBYTE"
__root const char opbyte3 = 0x04U;

// Security ID (unlock code in winIDEA)
#pragma location = "SECUID"
__root const char secuid[10] = 
  {0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U, 0x00U};

typedef unsigned char __istate_t;
typedef unsigned char __ilevel_t;

__intrinsic void __disable_interrupt(void);
__intrinsic void __enable_interrupt(void);
__intrinsic __istate_t __get_interrupt_state(void);
__intrinsic void __set_interrupt_state(__istate_t);

__intrinsic __ilevel_t __get_interrupt_level(void);
__intrinsic void __set_interrupt_level(__ilevel_t);

__intrinsic void __no_operation(void);
__intrinsic void __halt(void);
__intrinsic void __stop(void);
__intrinsic void __break(void);

__intrinsic __root int __low_level_init(void);

__intrinsic unsigned char __ror1b( unsigned char );
__intrinsic unsigned char __rol1b( unsigned char );

__intrinsic unsigned short __ror1w( unsigned short );
__intrinsic unsigned short __rol1w( unsigned short );

// Clock operation mode control register (CMC)
/* High-speed system clock pin operation mode (EXCLK, OSCSEL) */
#define _C0_CGC_HISYS_PIN           (0xC0U)
#define _00_CGC_HISYS_PORT          (0x00U) /* X1, X2 as I/O port */
#define _40_CGC_HISYS_OSC           (0x40U) /* X1, X2 as crystal/ceramic resonator connection */
#define _80_CGC_HISYS_PORT1         (0x80U) /* X1, X2 as I/O port */
#define _C0_CGC_HISYS_EXT           (0xC0U) /* X1 as I/O port, X2 as external clock input */
/* Subsystem clock pin operation mode (EXCLKS, OSCSELS) */
#define _30_CGC_SUB_PIN             (0x30U)
#define _00_CGC_SUB_PORT            (0x00U) /* XT1, XT2 as I/O port */
#define _10_CGC_SUB_OSC             (0x10U) /* XT1, XT2 as crystal connection */
#define _20_CGC_SUB_PORT1           (0x20U) /* XT1, XT2 as I/O port */
#define _30_CGC_SUB_EXT             (0x30U) /* XT1 as I/O port, XT2 as external clock input */
/* XT1 oscillator oscillation mode selection (AMPHS1, AMPHS0) */
#define _00_CGC_SUBMODE_DEFAULT     (0x00U)
#define _00_CGC_SUBMODE_LOW         (0x00U) /* low power consumption oscillation */
#define _02_CGC_SUBMODE_NORMAL      (0x02U) /* normal oscillation */
#define _04_CGC_SUBMODE_ULOW        (0x04U) /* ultra-low power consumption oscillation */
/* Control of X1 high-speed system clock oscillation frequency (AMPH) */
#define _00_CGC_SYSOSC_DEFAULT      (0x00U)
#define _00_CGC_SYSOSC_UNDER10M     (0x00U) /* fX <= 10MHz */
#define _01_CGC_SYSOSC_OVER10M      (0x01U) /* fX > 10MHz */

// Clock operation status control register (CSC)
/* Control of high-speed system clock operation (MSTOP) */
#define _00_CGC_HISYS_OPER          (0x00U) /* X1 oscillator/external clock operating */
#define _80_CGC_HISYS_STOP          (0x80U) /* X1 oscillator/external clock stopped */
/* Subsystem clock operation (XTSTOP) */
#define _00_CGC_SUB_OPER            (0x00U) /* XT1 oscillator operating */
#define _40_CGC_SUB_STOP            (0x40U) /* XT1 oscillator stopped */
/* High-speed OCO operation (HIOSTOP) */
#define _00_CGC_HIO_OPER            (0x00U) /* high-speed OCO operating */
#define _01_CGC_HIO_STOP            (0x01U) /* high-speed OCO stopped */

// Oscillation stabilization time counter status register (OSTC)
/* Oscillation stabilization time status (MOST18 - MOST8) */
#define _00_CGC_OSCSTAB_STA0        (0x00U) /* < 2^8/fX */
#define _80_CGC_OSCSTAB_STA8        (0x80U) /* 2^8/fX */
#define _C0_CGC_OSCSTAB_STA9        (0xC0U) /* 2^9/fX */
#define _E0_CGC_OSCSTAB_STA10       (0xE0U) /* 2^10/fX */
#define _F0_CGC_OSCSTAB_STA11       (0xF0U) /* 2^11/fX */
#define _F8_CGC_OSCSTAB_STA13       (0xF8U) /* 2^13/fX */
#define _FC_CGC_OSCSTAB_STA15       (0xFCU) /* 2^15/fX */
#define _FE_CGC_OSCSTAB_STA17       (0xFEU) /* 2^17/fX */
#define _FF_CGC_OSCSTAB_STA18       (0xFFU) /* 2^18/fX */

// Oscillation stabilization time select register (OSTS)
/* Oscillation stabilization time selection (OSTS2 - OSTS0) */
#define _00_CGC_OSCSTAB_SEL8        (0x00U) /* 2^8/fX */
#define _01_CGC_OSCSTAB_SEL9        (0x01U) /* 2^9/fX */
#define _02_CGC_OSCSTAB_SEL10       (0x02U) /* 2^10/fX */
#define _03_CGC_OSCSTAB_SEL11       (0x03U) /* 2^11/fX */
#define _04_CGC_OSCSTAB_SEL13       (0x04U) /* 2^13/fX */
#define _05_CGC_OSCSTAB_SEL15       (0x05U) /* 2^15/fX */
#define _06_CGC_OSCSTAB_SEL17       (0x06U) /* 2^17/fX */
#define _07_CGC_OSCSTAB_SEL18       (0x07U) /* 2^18/fX */

// System clock control register (CKC)
/* Status of CPU/peripheral hardware clock fCLK (CLS) */
#define _00_CGC_CPUCLK_MAIN         (0x00U) /* main system clock (fMAIN) */
#define _80_CGC_CPUCLK_SUB          (0x80U) /* subsystem clock (fSUB) */
/* Selection of CPU/peripheral hardware clock fCLK (CSS) */
#define _00_CGC_CPUCLK_SELMAIN      (0x00U) /* main system clock (fMAIN) */
#define _40_CGC_CPUCLK_SELSUB       (0x40U) /* subsystem clock (fSUB) */
/* Status of Main system clock fMAIN (MCS) */
#define _00_CGC_MAINCLK_HIO         (0x00U) /* high-speed OCO clock (fIH) */
#define _20_CGC_MAINCLK_HISYS       (0x20U) /* high-speed system clock (fMX) */
/* Selection of Main system clock fMAIN (MCM0) */
#define _00_CGC_MAINCLK_SELHIO      (0x00U) /* high-speed OCO clock (fIH) */
#define _10_CGC_MAINCLK_SELHISYS    (0x10U) /* high-speed system clock (fMX) */

// Operation speed mode control register (OSMC)
/* Setting in subsystem clock HALT mode (RTCLPC) */
#define _00_CGC_SUBINHALT_ON        (0x00U) /* enables supply of subsystem clock to peripheral functions */
#define _80_CGC_SUBINHALT_OFF       (0x80U) /* stops supply to peripheral functions other than RTC and interval timer */
/* RTC macro operation clock (WUTMMCK0) */
#define _00_CGC_RTC_CLK_FSUB        (0x00U) /* use fSUB clock */
#define _10_CGC_RTC_CLK_FIL         (0x10U) /* use fIL clock */

// Illegal memory access detection control register (IAWCTL)
/* Illegal memory access detection control (IAWEN) */
#define _00_CGC_ILLEGAL_ACCESS_OFF  (0x00U) /* disables illegal memory access detection */
#define _80_CGC_ILLEGAL_ACCESS_ON   (0x80U) /* enables illegal memory access detection */
/* RAM guard area (GRAM1, GRAM0) */
#define _00_CGC_RAM_GUARD_OFF       (0x00U) /* invalid, it is possible to write RAM */
#define _10_CGC_RAM_GUARD_ARAE0     (0x10U) /* 128 bytes from RAM bottom address */
#define _20_CGC_RAM_GUARD_ARAE1     (0x20U) /* 256 bytes from RAM bottom address */
#define _30_CGC_RAM_GUARD_ARAE2     (0x30U) /* 512 bytes from RAM bottom address */
/* PORT register guard (GPORT) */
#define _00_CGC_PORT_GUARD_OFF      (0x00U) /* invalid, it is possible to write PORT register */
#define _04_CGC_PORT_GUARD_ON       (0x04U) /* valid, it is impossible to write PORT register, but possible for read */
/* Interrupt register guard (GINT) */   
#define _00_CGC_INT_GUARD_OFF       (0x00U) /* invalid, it is possible to write interrupt register */
#define _02_CGC_INT_GUARD_ON        (0x02U) /* valid, impossible to write interrupt register, but possible for read */
/* CSC register guard (GCSC) */         
#define _00_CGC_CSC_GUARD_OFF       (0x00U) /* invalid, it is possible to write CSC register */
#define _01_CGC_CSC_GUARD_ON        (0x01U) /* valid, it is impossible to write CSC register, but possible for read */

// Peripheral Enable Register 0 (PER0)
/* Control of timer array unit 0 input clock (TAU0EN) */
#define _00_TAU0_CLOCK_STOP                     (0x00U)   /* stops supply of input clock */
#define _01_TAU0_CLOCK_SUPPLY                   (0x01U)   /* supplies input clock */

// Timer Clock Select Register m (TPSm)
/* Operating mode and clear mode selection (PRSm03 - PRSm00) */
#define _0000_TAU_CKM0_FCLK_0                   (0x0000U) /* ckm0 - fCLK */
#define _0001_TAU_CKM0_FCLK_1                   (0x0001U) /* ckm0 - fCLK/2^1 */
#define _0002_TAU_CKM0_FCLK_2                   (0x0002U) /* ckm0 - fCLK/2^2 */
#define _0003_TAU_CKM0_FCLK_3                   (0x0003U) /* ckm0 - fCLK/2^3 */
#define _0004_TAU_CKM0_FCLK_4                   (0x0004U) /* ckm0 - fCLK/2^4 */
#define _0005_TAU_CKM0_FCLK_5                   (0x0005U) /* ckm0 - fCLK/2^5 */
#define _0006_TAU_CKM0_FCLK_6                   (0x0006U) /* ckm0 - fCLK/2^6 */
#define _0007_TAU_CKM0_FCLK_7                   (0x0007U) /* ckm0 - fCLK/2^7 */
#define _0008_TAU_CKM0_FCLK_8                   (0x0008U) /* ckm0 - fCLK/2^8 */
#define _0009_TAU_CKM0_FCLK_9                   (0x0009U) /* ckm0 - fCLK/2^9 */
#define _000A_TAU_CKM0_FCLK_10                  (0x000AU) /* ckm0 - fCLK/2^10 */
#define _000B_TAU_CKM0_FCLK_11                  (0x000BU) /* ckm0 - fCLK/2^11 */
#define _000C_TAU_CKM0_FCLK_12                  (0x000CU) /* ckm0 - fCLK/2^12 */
#define _000D_TAU_CKM0_FCLK_13                  (0x000DU) /* ckm0 - fCLK/2^13 */
#define _000E_TAU_CKM0_FCLK_14                  (0x000EU) /* ckm0 - fCLK/2^14 */
#define _000F_TAU_CKM0_FCLK_15                  (0x000FU) /* ckm0 - fCLK/2^15 */
/* Operating mode and clear mode selection (PRSm13 - PRSm10) */
#define _0000_TAU_CKM1_FCLK_0                   (0x0000U) /* ckm1 - fCLK */
#define _0010_TAU_CKM1_FCLK_1                   (0x0010U) /* ckm1 - fCLK/2^1 */
#define _0020_TAU_CKM1_FCLK_2                   (0x0020U) /* ckm1 - fCLK/2^2 */
#define _0030_TAU_CKM1_FCLK_3                   (0x0030U) /* ckm1 - fCLK/2^3 */
#define _0040_TAU_CKM1_FCLK_4                   (0x0040U) /* ckm1 - fCLK/2^4 */
#define _0050_TAU_CKM1_FCLK_5                   (0x0050U) /* ckm1 - fCLK/2^5 */
#define _0060_TAU_CKM1_FCLK_6                   (0x0060U) /* ckm1 - fCLK/2^6 */
#define _0070_TAU_CKM1_FCLK_7                   (0x0070U) /* ckm1 - fCLK/2^7 */
#define _0080_TAU_CKM1_FCLK_8                   (0x0080U) /* ckm1 - fCLK/2^8 */
#define _0090_TAU_CKM1_FCLK_9                   (0x0090U) /* ckm1 - fCLK/2^9 */
#define _00A0_TAU_CKM1_FCLK_10                  (0x00A0U) /* ckm1 - fCLK/2^10 */
#define _00B0_TAU_CKM1_FCLK_11                  (0x00B0U) /* ckm1 - fCLK/2^11 */
#define _00C0_TAU_CKM1_FCLK_12                  (0x00C0U) /* ckm1 - fCLK/2^12 */
#define _00D0_TAU_CKM1_FCLK_13                  (0x00D0U) /* ckm1 - fCLK/2^13 */
#define _00E0_TAU_CKM1_FCLK_14                  (0x00E0U) /* ckm1 - fCLK/2^14 */
#define _00F0_TAU_CKM1_FCLK_15                  (0x00F0U) /* ckm1 - fCLK/2^15 */
/* Operating mode and clear mode selection (PRSm21 - PRSm20) */
#define _0000_TAU_CKM2_FCLK_1                   (0x0000U) /* ckm2 - fCLK/2^1 */
#define _0100_TAU_CKM2_FCLK_2                   (0x0100U) /* ckm2 - fCLK/2^2 */
#define _0200_TAU_CKM2_FCLK_4                   (0x0200U) /* ckm2 - fCLK/2^4 */
#define _0300_TAU_CKM2_FCLK_6                   (0x0300U) /* ckm2 - fCLK/2^6 */
/* Operating mode and clear mode selection (PRSm31 - PRSm30) */
#define _0000_TAU_CKM3_FCLK_8                   (0x0000U) /* ckm2 - fCLK/2^8 */
#define _1000_TAU_CKM3_FCLK_10                  (0x1000U) /* ckm2 - fCLK/2^10 */
#define _2000_TAU_CKM3_FCLK_12                  (0x2000U) /* ckm2 - fCLK/2^12 */
#define _3000_TAU_CKM3_FCLK_14                  (0x3000U) /* ckm2 - fCLK/2^14 */

// Timer Mode Register mn (TMRmn)
/* Selection of macro clock (MCK) of channel n (CKSmn1 - CKSmn0) */
#define _0000_TAU_CLOCK_SELECT_CKM0             (0x0000U) /* operation clock CK0 set by PRS register */ 
#define _8000_TAU_CLOCK_SELECT_CKM1             (0x8000U) /* operation clock CK1 set by PRS register */
#define _4000_TAU_CLOCK_SELECT_CKM2             (0x4000U) /* operation clock CK2 set by PRS register */
#define _C000_TAU_CLOCK_SELECT_CKM3             (0xC000U) /* operation clock CK3 set by PRS register */
/* Selection of count clock (CCK) of channel n (CCSmn) */
#define _0000_TAU_CLOCK_MODE_CKS                (0x0000U) /* macro clock MCK specified by CKSmn bit */  
#define _1000_TAU_CLOCK_MODE_TIMN               (0x1000U) /* valid edge of input signal input from TImn pin */
/* Selection of slave/master of channel n (MASTERmn) */
#define _0000_TAU_COMBINATION_SLAVE             (0x0000U) /* operates as slave channel */
#define _0000_TAU_COMBINATION_MASTER            (0x0000U) /* channel0 operates as master channel */
#define _0800_TAU_COMBINATION_MASTER            (0x0800U) /* channel2, 4, 6 operates as master channel */
/* Operation explanation of channel 1 or 3 (SPLIT) */
#define _0000_TAU_16BITS_MODE                   (0x0000U) /* operates as 16 bits timer */  
#define _0800_TAU_8BITS_MODE                    (0x0800U) /* operates as 8 bits timer */
/* Setting of start trigger or capture trigger of channel n (STSmn2 - STSmn0) */
#define _0000_TAU_TRIGGER_SOFTWARE              (0x0000U) /* only software trigger start is valid */
#define _0100_TAU_TRIGGER_TIMN_VALID            (0x0100U) /* TImn input edge is used as a start/capture trigger */
#define _0200_TAU_TRIGGER_TIMN_BOTH             (0x0200U) /* TImn input edges are used as a start/capture trigger */
#define _0400_TAU_TRIGGER_MASTER_INT            (0x0400U) /* interrupt signal of the master channel is used */
/* Selection of TImn pin input valid edge (CISmn1 - CISmn0) */
#define _0000_TAU_TIMN_EDGE_FALLING             (0x0000U) /* falling edge */
#define _0040_TAU_TIMN_EDGE_RISING              (0x0040U) /* rising edge */
#define _0080_TAU_TIMN_EDGE_BOTH_LOW            (0x0080U) /* both edges (when low-level width is measured) */
#define _00C0_TAU_TIMN_EDGE_BOTH_HIGH           (0x00C0U) /* both edges (when high-level width is measured) */
/* Operation mode of channel n (MDmn3 - MDmn0) */
#define _0000_TAU_MODE_INTERVAL_TIMER           (0x0000U) /* interval timer mode */
#define _0004_TAU_MODE_CAPTURE                  (0x0004U) /* capture mode */
#define _0006_TAU_MODE_EVENT_COUNT              (0x0006U) /* event counter mode */
#define _0008_TAU_MODE_ONE_COUNT                (0x0008U) /* one count mode */
#define _000C_TAU_MODE_HIGHLOW_MEASURE          (0x000CU) /* high-/low-level width measurement mode */
#define _0001_TAU_MODE_PWM_MASTER               (0x0001U) /* PWM Function (Master Channel) mode */
#define _0009_TAU_MODE_PWM_SLAVE                (0x0009U) /* PWM Function (Slave Channel) mode */
#define _0008_TAU_MODE_ONESHOT                  (0x0008U) /* one-shot pulse output mode */
/* Setting of starting counting and interrupt (MDmn0) */
#define _0000_TAU_START_INT_UNUSED              (0x0000U) /* interrupt is not generated when counting is started */
#define _0001_TAU_START_INT_USED                (0x0001U) /* interrupt is generated when counting is started */

// Timer Status Register mn (TSRmn)
/* Counter overflow status of channel n (OVF) */
#define _0000_TAU_OVERFLOW_NOT_OCCURS           (0x0000U) /* overflow does not occur */
#define _0001_TAU_OVERFLOW_OCCURS               (0x0001U) /* overflow occurs */

// Timer Channel Enable Status Register m (TEm)
/* Indication of operation enable/stop status of channel 0 (TEm0) */
#define _0000_TAU_CH0_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0001_TAU_CH0_OPERATION_ENABLE          (0x0001U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 1 (TEm1) */
#define _0000_TAU_CH1_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0002_TAU_CH1_OPERATION_ENABLE          (0x0002U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 2 (TEm2) */
#define _0000_TAU_CH2_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0004_TAU_CH2_OPERATION_ENABLE          (0x0004U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 3 (TEm3) */
#define _0000_TAU_CH3_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0008_TAU_CH3_OPERATION_ENABLE          (0x0008U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 4 (TEm4) */
#define _0000_TAU_CH4_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0010_TAU_CH4_OPERATION_ENABLE          (0x0010U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 5 (TEm5) */
#define _0000_TAU_CH5_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0020_TAU_CH5_OPERATION_ENABLE          (0x0020U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 6 (TEm6) */
#define _0000_TAU_CH6_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0040_TAU_CH6_OPERATION_ENABLE          (0x0040U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 7 (TEm7) */
#define _0000_TAU_CH7_OPERATION_STOP            (0x0000U) /* operation is stopped */
#define _0080_TAU_CH7_OPERATION_ENABLE          (0x0080U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 1 higher 8 bits (TEHm1) */
#define _0000_TAU_CH1_H8_OPERATION_STOP         (0x0000U) /* operation is stopped */
#define _0200_TAU_CH1_H8_OPERATION_ENABLE       (0x0200U) /* operation is enabled */
/* Indication of operation enable/stop status of channel 3 higher 8 bits (TEHm3) */
#define _0000_TAU_CH3_H8_OPERATION_STOP         (0x0000U) /* operation is stopped */
#define _0800_TAU_CH3_H8_OPERATION_ENABLE       (0x0800U) /* operation is enabled */

// Timer Channel Start Register m (TSm)
/* Operation enable (start) trigger of channel 0 (TSm0) */
#define _0000_TAU_CH0_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0001_TAU_CH0_START_TRG_ON              (0x0001U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 1 (TSm1) */
#define _0000_TAU_CH1_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0002_TAU_CH1_START_TRG_ON              (0x0002U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 2 (TSm2) */
#define _0000_TAU_CH2_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0004_TAU_CH2_START_TRG_ON              (0x0004U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 3 (TSm3) */
#define _0000_TAU_CH3_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0008_TAU_CH3_START_TRG_ON              (0x0008U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 4 (TSm4) */
#define _0000_TAU_CH4_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0010_TAU_CH4_START_TRG_ON              (0x0010U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 5 (TSm5) */
#define _0000_TAU_CH5_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0020_TAU_CH5_START_TRG_ON              (0x0020U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 6 (TSm6) */
#define _0000_TAU_CH6_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0040_TAU_CH6_START_TRG_ON              (0x0040U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 7 (TSm7) */
#define _0000_TAU_CH7_START_TRG_OFF             (0x0000U) /* no trigger operation */
#define _0080_TAU_CH7_START_TRG_ON              (0x0080U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 1 higher 8 bits (TSHm1) */
#define _0000_TAU_CH1_H8_START_TRG_OFF          (0x0000U) /* no trigger operation */
#define _0200_TAU_CH1_H8_START_TRG_ON           (0x0200U) /* operation is enabled (start trigger is generated) */
/* Operation enable (start) trigger of channel 3 higher 8 bits (TSHm3) */
#define _0000_TAU_CH3_H8_START_TRG_OFF          (0x0000U) /* no trigger operation */
#define _0800_TAU_CH3_H8_START_TRG_ON           (0x0800U) /* operation is enabled (start trigger is generated) */

// Timer Channel Stop Register m (TTm)
/* Operation stop trigger of channel 0 (TTm0) */
#define _0000_TAU_CH0_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0001_TAU_CH0_STOP_TRG_ON               (0x0001U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 1 (TTm1) */
#define _0000_TAU_CH1_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0002_TAU_CH1_STOP_TRG_ON               (0x0002U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 2 (TTm2) */
#define _0000_TAU_CH2_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0004_TAU_CH2_STOP_TRG_ON               (0x0004U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 3 (TTm3) */
#define _0000_TAU_CH3_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0008_TAU_CH3_STOP_TRG_ON               (0x0008U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 4 (TTm4) */
#define _0000_TAU_CH4_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0010_TAU_CH4_STOP_TRG_ON               (0x0010U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 5 (TTm5) */
#define _0000_TAU_CH5_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0020_TAU_CH5_STOP_TRG_ON               (0x0020U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 6 (TTm6) */
#define _0000_TAU_CH6_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0040_TAU_CH6_STOP_TRG_ON               (0x0040U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 7 (TTm7) */
#define _0000_TAU_CH7_STOP_TRG_OFF              (0x0000U) /* no trigger operation */
#define _0080_TAU_CH7_STOP_TRG_ON               (0x0080U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 1 higher 8 bits (TTHm1) */
#define _0000_TAU_CH1_H8_STOP_TRG_OFF           (0x0000U) /* no trigger operation */
#define _0200_TAU_CH1_H8_STOP_TRG_ON            (0x0200U) /* operation is stopped (stop trigger is generated) */
/* Operation stop trigger of channel 3 higher 8 bits (TTHm3) */
#define _0000_TAU_CH3_H8_STOP_TRG_OFF           (0x0000U) /* no trigger operation */
#define _0800_TAU_CH3_H8_STOP_TRG_ON            (0x0800U) /* operation is stopped (stop trigger is generated) */

// Timer Input Select Register m (TIS0)
/* Selection of timer input used with channel 5 (TIS02 - TIS00) */
#define _00_TAU_CH5_INPUT_TI05                  (0x00U)   /* input signal of timer input pin (TI05) */
#define _01_TAU_CH5_INPUT_TI05                  (0x01U)   /* input signal of timer input pin (TI05) */
#define _02_TAU_CH5_INPUT_TI05                  (0x02U)   /* input signal of timer input pin (TI05) */
#define _03_TAU_CH5_INPUT_TI05                  (0x03U)   /* input signal of timer input pin (TI05) */
#define _04_TAU_CH5_INPUT_FIL                   (0x04U)   /* internal low speed oscillation colock (fIL) */
#define _05_TAU_CH5_INPUT_FSUB                  (0x05U)   /* sub colock (fSUB) */

// Timer Output Enable Register m (TOEm)
/* Timer output enable/disable of channel 0 (TOEm0) */
#define _0001_TAU_CH0_OUTPUT_ENABLE             (0x0001U) /* the TOm0 operation enabled by count operation */
#define _0000_TAU_CH0_OUTPUT_DISABLE            (0x0000U) /* the TOm0 operation stopped by count operation */
/* Timer output enable/disable of channel 1 (TOEm1) */
#define _0002_TAU_CH1_OUTPUT_ENABLE             (0x0002U) /* the TOm1 operation enabled by count operation */
#define _0000_TAU_CH1_OUTPUT_DISABLE            (0x0000U) /* the TOm1 operation stopped by count operation */
/* Timer output enable/disable of channel 2 (TOEm2) */
#define _0004_TAU_CH2_OUTPUT_ENABLE             (0x0004U) /* the TOm2 operation enabled by count operation */
#define _0000_TAU_CH2_OUTPUT_DISABLE            (0x0000U) /* the TOm2 operation stopped by count operation */
/* Timer output enable/disable of channel 3 (TOEm3) */
#define _0008_TAU_CH3_OUTPUT_ENABLE             (0x0008U) /* the TOm3 operation enabled by count operation */
#define _0000_TAU_CH3_OUTPUT_DISABLE            (0x0000U) /* the TOm3 operation stopped by count operation */
/* Timer output enable/disable of channel 4 (TOEm4) */
#define _0010_TAU_CH4_OUTPUT_ENABLE             (0x0010U) /* the TOm4 operation enabled by count operation */
#define _0000_TAU_CH4_OUTPUT_DISABLE            (0x0000U) /* the TOm4 operation stopped by count operation */
/* Timer output enable/disable of channel 5 (TOEm5) */
#define _0020_TAU_CH5_OUTPUT_ENABLE             (0x0020U) /* the TOm5 operation enabled by count operation */
#define _0000_TAU_CH5_OUTPUT_DISABLE            (0x0000U) /* the TOm5 operation stopped by count operation */
/* Timer output enable/disable of channel 6 (TOEm6) */
#define _0040_TAU_CH6_OUTPUT_ENABLE             (0x0040U) /* the TOm6 operation enabled by count operation */
#define _0000_TAU_CH6_OUTPUT_DISABLE            (0x0000U) /* the TOm6 operation stopped by count operation */
/* Timer output enable/disable of channel 7 (TOEm7) */
#define _0080_TAU_CH7_OUTPUT_ENABLE             (0x0080U) /* the TOm7 operation enabled by count operation */
#define _0000_TAU_CH7_OUTPUT_DISABLE            (0x0000U) /* the TOm7 operation stopped by count operation */

// Timer Output Register m (TOm)
/* Timer output of channel 0 (TOm0) */
#define _0000_TAU_CH0_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0001_TAU_CH0_OUTPUT_VALUE_1            (0x0001U) /* timer output value is "1" */
/* Timer output of channel 1 (TOm1) */
#define _0000_TAU_CH1_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0002_TAU_CH1_OUTPUT_VALUE_1            (0x0002U) /* timer output value is "1" */
/* Timer output of channel 2 (TOm2) */
#define _0000_TAU_CH2_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0004_TAU_CH2_OUTPUT_VALUE_1            (0x0004U) /* timer output value is "1" */
/* Timer output of channel 3 (TOm3) */
#define _0000_TAU_CH3_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0008_TAU_CH3_OUTPUT_VALUE_1            (0x0008U) /* timer output value is "1" */
/* Timer output of channel 4 (TOm4) */
#define _0000_TAU_CH4_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0010_TAU_CH4_OUTPUT_VALUE_1            (0x0010U) /* timer output value is "1" */
/* Timer output of channel 5 (TOm5) */
#define _0000_TAU_CH5_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0020_TAU_CH5_OUTPUT_VALUE_1            (0x0020U) /* timer output value is "1" */
/* Timer output of channel 6 (TOm6) */
#define _0000_TAU_CH6_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0040_TAU_CH6_OUTPUT_VALUE_1            (0x0040U) /* timer output value is "1" */
/* Timer output of channel 7 (TOm7) */
#define _0000_TAU_CH7_OUTPUT_VALUE_0            (0x0000U) /* timer output value is "0" */
#define _0080_TAU_CH7_OUTPUT_VALUE_1            (0x0080U) /* timer output value is "1" */

// Timer Output Level Register 0 (TOLm)
/* Control of timer output level of channel 1 (TOLm1) */
#define _0000_TAU_CH1_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0002_TAU_CH1_OUTPUT_LEVEL_L            (0x0002U) /* inverted output (active-low) */
/* Control of timer output level of channel 2 (TOLm2) */
#define _0000_TAU_CH2_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0004_TAU_CH2_OUTPUT_LEVEL_L            (0x0004U) /* inverted output (active-low) */
/* Control of timer output level of channel 3 (TOLm3) */
#define _0000_TAU_CH3_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0008_TAU_CH3_OUTPUT_LEVEL_L            (0x0008U) /* inverted output (active-low) */
/* Control of timer output level of channel 4 (TOLm4) */
#define _0000_TAU_CH4_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0010_TAU_CH4_OUTPUT_LEVEL_L            (0x0010U) /* inverted output (active-low) */
/* Control of timer output level of channel 5 (TOLm5) */
#define _0000_TAU_CH5_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0020_TAU_CH5_OUTPUT_LEVEL_L            (0x0020U) /* inverted output (active-low) */
/* Control of timer output level of channel 6 (TOLm6) */
#define _0000_TAU_CH6_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0040_TAU_CH6_OUTPUT_LEVEL_L            (0x0040U) /* inverted output (active-low) */
/* Control of timer output level of channel 7 (TOLm7) */
#define _0000_TAU_CH7_OUTPUT_LEVEL_H            (0x0000U) /* positive logic output (active-high) */
#define _0080_TAU_CH7_OUTPUT_LEVEL_L            (0x0080U) /* inverted output (active-low) */

// Timer Output Mode Register m (TOMm)
/* Control of timer output mode of channel 1 (TOMm1) */
#define _0000_TAU_CH1_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0002_TAU_CH1_OUTPUT_COMBIN             (0x0002U) /* combination operation mode */
/* Control of timer output mode of channel 2 (TOMm2) */
#define _0000_TAU_CH2_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0004_TAU_CH2_OUTPUT_COMBIN             (0x0004U) /* combination operation mode */
/* Control of timer output mode of channel 3 (TOMm3) */
#define _0000_TAU_CH3_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0008_TAU_CH3_OUTPUT_COMBIN             (0x0008U) /* combination operation mode */
/* Control of timer output mode of channel 4 (TOMm4) */
#define _0000_TAU_CH4_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0010_TAU_CH4_OUTPUT_COMBIN             (0x0010U) /* combination operation mode */
/* Control of timer output mode of channel 5 (TOMm5) */
#define _0000_TAU_CH5_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0020_TAU_CH5_OUTPUT_COMBIN             (0x0020U) /* combination operation mode */
/* Control of timer output mode of channel 6 (TOMm6) */
#define _0000_TAU_CH6_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0040_TAU_CH6_OUTPUT_COMBIN             (0x0040U) /* combination operation mode */
/* Control of timer output mode of channel 7 (TOMm7) */
#define _0000_TAU_CH7_OUTPUT_TOGGLE             (0x0000U) /* toggle operation mode */
#define _0080_TAU_CH7_OUTPUT_COMBIN             (0x0080U) /* combination operation mode */

// Input Switch Control Register (ISC)
/* Switching channel 7 input of timer array unit (ISC1) */
#define _00_TAU_CH7_NO_INPUT                    (0x00U)   /* timer input is not used */
#define _02_TAU_CH7_RXD3_INPUT                  (0x02U)   /* input signal of RxD3 pin is used as timer input */

// Noise Filter Enable Register 1 (NFEN1)
/* Enable/disable using noise filter of TI07 pin input signal (TNFEN07) */
#define _00_TAU_CH7_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _80_TAU_CH7_NOISE_ON                    (0x80U)   /* noise filter ON */
/* Enable/disable using noise filter of TI06 pin input signal (TNFEN06) */
#define _00_TAU_CH6_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _40_TAU_CH6_NOISE_ON                    (0x40U)   /* noise filter ON */
/* Enable/disable using noise filter of TI05 pin input signal (TNFEN05) */
#define _00_TAU_CH5_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _20_TAU_CH5_NOISE_ON                    (0x20U)   /* noise filter ON */
/* Enable/disable using noise filter of TI04 pin input signal (TNFEN04) */
#define _00_TAU_CH4_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _10_TAU_CH4_NOISE_ON                    (0x10U)   /* noise filter ON */
/* Enable/disable using noise filter of TI03 pin input signal (TNFEN03) */
#define _00_TAU_CH3_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _08_TAU_CH3_NOISE_ON                    (0x08U)   /* noise filter ON */
/* Enable/disable using noise filter of TI02 pin input signal (TNFEN02) */
#define _00_TAU_CH2_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _04_TAU_CH2_NOISE_ON                    (0x04U)   /* noise filter ON */
/* Enable/disable using noise filter of TI01 pin input signal (TNFEN01) */
#define _00_TAU_CH1_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _02_TAU_CH1_NOISE_ON                    (0x02U)   /* noise filter ON */
/* Enable/disable using noise filter of TI00 pin input signal (TNFEN00) */
#define _00_TAU_CH0_NOISE_OFF                   (0x00U)   /* noise filter OFF */
#define _01_TAU_CH0_NOISE_ON                    (0x01U)   /* noise filter ON */

/* 16-bit timer data register 00 (TDR00) */
#define _7CFF_TAU_TDR00_VALUE                   (0x7CFFU)
/* Clock divisor for TAU0 channel 0 */
#define _0001_TAU0_CHANNEL0_DIVISOR             (0x0001U)

// Port Mode Register (PMm)
/* Pmn pin I/O mode selection (PMm7 - PMm0) */
#define _01_PMn0_NOT_USE        (0x01U) /* not use Pn0 as digital I/O */
#define _01_PMn0_MODE_INPUT     (0x01U) /* use Pn0 as input mode */
#define _00_PMn0_MODE_OUTPUT    (0x00U) /* use Pn0 as output mode */
#define _02_PMn1_NOT_USE        (0x02U) /* not use Pn1 as digital I/O */
#define _02_PMn1_MODE_INPUT     (0x02U) /* use Pn1 as input mode */
#define _00_PMn1_MODE_OUTPUT    (0x00U) /* use Pn1 as output mode */
#define _04_PMn2_NOT_USE        (0x04U) /* not use Pn2 as digital I/O */
#define _04_PMn2_MODE_INPUT     (0x04U) /* use Pn2 as input mode */
#define _00_PMn2_MODE_OUTPUT    (0x00U) /* use Pn2 as output mode */
#define _08_PMn3_NOT_USE        (0x08U) /* not use Pn3 as digital I/O */
#define _08_PMn3_MODE_INPUT     (0x08U) /* use Pn3 as input mode */
#define _00_PMn3_MODE_OUTPUT    (0x00U) /* use Pn3 as output mode */
#define _10_PMn4_NOT_USE        (0x10U) /* not use Pn4 as digital I/O */
#define _10_PMn4_MODE_INPUT     (0x10U) /* use Pn4 as input mode */
#define _00_PMn4_MODE_OUTPUT    (0x00U) /* use Pn4 as output mode */
#define _20_PMn5_NOT_USE        (0x20U) /* not use Pn5 as digital I/O */
#define _20_PMn5_MODE_INPUT     (0x20U) /* use Pn5 as input mode */
#define _00_PMn5_MODE_OUTPUT    (0x00U) /* use Pn5 as output mode */
#define _40_PMn6_NOT_USE        (0x40U) /* not use Pn6 as digital I/O */
#define _40_PMn6_MODE_INPUT     (0x40U) /* use Pn6 as input mode */
#define _00_PMn6_MODE_OUTPUT    (0x00U) /* use Pn6 as output mode */
#define _80_PMn7_NOT_USE        (0x80U) /* not use Pn7 as digital I/O */
#define _80_PMn7_MODE_INPUT     (0x80U) /* use Pn7 as input mode */
#define _00_PMn7_MODE_OUTPUT    (0x00U) /* use Pn7 as output mode */

// Port Register (Pm)
/* Pmn pin data (Pm0 to Pm7) */
#define _00_Pn0_OUTPUT_0        (0x00U) /* Pn0 output 0 */
#define _01_Pn0_OUTPUT_1        (0x01U) /* Pn0 output 1 */
#define _00_Pn1_OUTPUT_0        (0x00U) /* Pn1 output 0 */
#define _02_Pn1_OUTPUT_1        (0x02U) /* Pn1 output 1 */
#define _00_Pn2_OUTPUT_0        (0x00U) /* Pn2 output 0 */
#define _04_Pn2_OUTPUT_1        (0x04U) /* Pn2 output 1 */
#define _00_Pn3_OUTPUT_0        (0x00U) /* Pn3 output 0 */
#define _08_Pn3_OUTPUT_1        (0x08U) /* Pn3 output 1 */
#define _00_Pn4_OUTPUT_0        (0x00U) /* Pn4 output 0 */
#define _10_Pn4_OUTPUT_1        (0x10U) /* Pn4 output 1 */
#define _00_Pn5_OUTPUT_0        (0x00U) /* Pn5 output 0 */
#define _20_Pn5_OUTPUT_1        (0x20U) /* Pn5 output 1 */
#define _00_Pn6_OUTPUT_0        (0x00U) /* Pn6 output 0 */
#define _40_Pn6_OUTPUT_1        (0x40U) /* Pn6 output 1 */
#define _00_Pn7_OUTPUT_0        (0x00U) /* Pn7 output 0 */
#define _80_Pn7_OUTPUT_1        (0x80U) /* Pn7 output 1 */

// Pull-up Resistor Option Register (PUm)
/* Pmn pin on-chip pull-up resistor selection (PUmn) */
#define _00_PUn0_PULLUP_OFF     (0x00U) /* Pn0 pull-up resistor not connected */
#define _01_PUn0_PULLUP_ON      (0x01U) /* Pn0 pull-up resistor connected */
#define _00_PUn1_PULLUP_OFF     (0x00U) /* Pn1 pull-up resistor not connected */
#define _02_PUn1_PULLUP_ON      (0x02U) /* Pn1 pull-up resistor connected */
#define _00_PUn2_PULLUP_OFF     (0x00U) /* Pn2 Pull-up resistor not connected */
#define _04_PUn2_PULLUP_ON      (0x04U) /* Pn2 pull-up resistor connected */
#define _00_PUn3_PULLUP_OFF     (0x00U) /* Pn3 pull-up resistor not connected */
#define _08_PUn3_PULLUP_ON      (0x08U) /* Pn3 pull-up resistor connected */
#define _00_PUn4_PULLUP_OFF     (0x00U) /* Pn4 pull-up resistor not connected */
#define _10_PUn4_PULLUP_ON      (0x10U) /* Pn4 pull-up resistor connected */
#define _00_PUn5_PULLUP_OFF     (0x00U) /* Pn5 pull-up resistor not connected */
#define _20_PUn5_PULLUP_ON      (0x20U) /* Pn5 pull-up resistor connected */
#define _00_PUn6_PULLUP_OFF     (0x00U) /* Pn6 pull-up resistor not connected */
#define _40_PUn6_PULLUP_ON      (0x40U) /* Pn6 pull-up resistor connected */
#define _00_PUn7_PULLUP_OFF     (0x00U) /* Pn7 pull-up resistor not connected */
#define _80_PUn7_PULLUP_ON      (0x80U) /* Pn7 pull-up resistor connected */

// Port Input Mode Register (PIMm)
/* Pmn pin input buffer selection (PIMmn) */
#define _00_PIMn0_TTL_OFF       (0x00U) /* set Pn0 normal input buffer */
#define _01_PIMn0_TTL_ON        (0x01U) /* set Pn0 TTL input buffer */
#define _00_PIMn1_TTL_OFF       (0x00U) /* set Pn1 normal input buffer */
#define _02_PIMn1_TTL_ON        (0x02U) /* set Pn1 TTL input buffer */
#define _00_PIMn2_TTL_OFF       (0x00U) /* set Pn2 normal input buffer */
#define _04_PIMn2_TTL_ON        (0x04U) /* set Pn2 TTL input buffer */
#define _00_PIMn3_TTL_OFF       (0x00U) /* set Pn3 normal input buffer */
#define _08_PIMn3_TTL_ON        (0x08U) /* set Pn3 TTL input buffer */
#define _00_PIMn4_TTL_OFF       (0x00U) /* set Pn4 normal input buffer */
#define _10_PIMn4_TTL_ON        (0x10U) /* set Pn4 TTL input buffer */
#define _00_PIMn5_TTL_OFF       (0x00U) /* set Pn5 normal input buffer */
#define _20_PIMn5_TTL_ON        (0x20U) /* set Pn5 TTL input buffer */
#define _00_PIMn6_TTL_OFF       (0x00U) /* set Pn6 normal input buffer */
#define _40_PIMn6_TTL_ON        (0x40U) /* set Pn6 TTL input buffer */
#define _00_PIMn7_TTL_OFF       (0x00U) /* set Pn7 normal input buffer */
#define _80_PIMn7_TTL_ON        (0x80U) /* set Pn7 TTL input buffer */

// Port Output Mode Register (POMm)
/* Pmn pin output mode selection (POMmn) */
#define _00_POMn0_NCH_OFF       (0x00U) /* set Pn0 output normal mode */
#define _01_POMn0_NCH_ON        (0x01U) /* set Pn0 output N-ch open-drain mode */
#define _00_POMn1_NCH_OFF       (0x00U) /* set Pn1 output normal mode */
#define _02_POMn1_NCH_ON        (0x02U) /* set Pn1 output N-ch open-drain mode */
#define _00_POMn2_NCH_OFF       (0x00U) /* set Pn2 output normal mode */
#define _04_POMn2_NCH_ON        (0x04U) /* set Pn2 output N-ch open-drain mode */
#define _00_POMn3_NCH_OFF       (0x00U) /* set Pn3 output normal mode */
#define _08_POMn3_NCH_ON        (0x08U) /* set Pn3 output N-ch open-drain mode */
#define _00_POMn4_NCH_OFF       (0x00U) /* set Pn4 output normal mode */
#define _10_POMn4_NCH_ON        (0x10U) /* set Pn4 output N-ch open-drain mode */
#define _00_POMn5_NCH_OFF       (0x00U) /* set Pn5 output normal mode */
#define _20_POMn5_NCH_ON        (0x20U) /* set Pn5 output N-ch open-drain mode */
#define _00_POMn6_NCH_OFF       (0x00U) /* set Pn6 output normal mode */
#define _40_POMn6_NCH_ON        (0x40U) /* set Pn6 output N-ch open-drain mode */
#define _00_POMn7_NCH_OFF       (0x00U) /* set Pn7 output normal mode */
#define _80_POMn7_NCH_ON        (0x80U) /* set Pn7 output N-ch open-drain mode */

// Port Operation Mode Register (PMCm)
/* Pmn pin digital input buffer selection (PMCmn) */
#define _01_PMCn0_NOT_USE       (0x01U) /* not use Pn0 digital input */
#define _00_PMCn0_DI_ON         (0x00U) /* enable Pn0 digital input */
#define _02_PMCn1_NOT_USE       (0x02U) /* not use Pn1 digital input */
#define _00_PMCn1_DI_ON         (0x00U) /* enable Pn1 digital input */
#define _04_PMCn2_NOT_USE       (0x04U) /* not use Pn2 digital input */
#define _00_PMCn2_DI_ON         (0x00U) /* enable Pn2 digital input */
#define _08_PMCn3_NOT_USE       (0x08U) /* not use Pn3 digital input */
#define _00_PMCn3_DI_ON         (0x00U) /* enable Pn3 digital input */
#define _10_PMCn4_NOT_USE       (0x10U) /* not use Pn4 digital input */
#define _00_PMCn4_DI_ON         (0x00U) /* enable Pn4 digital input */
#define _20_PMCn5_NOT_USE       (0x20U) /* not use Pn5 digital input */
#define _00_PMCn5_DI_ON         (0x00U) /* enable Pn5 digital input */
#define _40_PMCn6_NOT_USE       (0x40U) /* not use Pn6 digital input */
#define _00_PMCn6_DI_ON         (0x00U) /* enable Pn6 digital input */
#define _80_PMCn7_NOT_USE       (0x80U) /* not use Pn7 digital input */
#define _00_PMCn7_DI_ON         (0x00U) /* enable Pn7 digital input */

// AD port configuration register (ADPC)
/* Analog input/digital input switching (ADPC3 - ADPC0) */
#define _00_ADPC_DI_OFF         (0x00U) /* use P20 - P27 as analog input */
#define _08_ADPC_DI_ON          (0x08U) /* use P27 as digital input */
#define _07_ADPC_DI_ON          (0x07U) /* use P26 - P27 as digital input */
#define _06_ADPC_DI_ON          (0x06U) /* use P25 - P27 as digital input */
#define _05_ADPC_DI_ON          (0x05U) /* use P24 - P27 as digital input */
#define _04_ADPC_DI_ON          (0x04U) /* use P23 - P27 as digital input */
#define _03_ADPC_DI_ON          (0x03U) /* use P22 - P27 as digital input */
#define _02_ADPC_DI_ON          (0x02U) /* use P21 - P27 as digital input */
#define _01_ADPC_DI_ON          (0x01U) /* use P20 - P27 as digital input */

#define _80_PM0_DEFAULT         (0x80U) /* PM0 default value */
#define _FC_PM3_DEFAULT         (0xFCU) /* PM3 default value */
#define _F0_PM4_DEFAULT         (0xF0U) /* PM4 default value */
#define _C0_PM5_DEFAULT         (0xC0U) /* PM5 default value */
#define _F0_PM6_DEFAULT         (0xF0U) /* PM6 default value */
#define _FE_PM12_DEFAULT        (0xFEU) /* PM12 default value */
#define _3C_PM14_DEFAULT        (0x3CU) /* PM14 default value */
#define _F3_PMC0_DEFAULT        (0xF3U) /* PMC0 default value */
#define _FE_PMC12_DEFAULT       (0xFEU) /* PMC12 default value */
#define _7F_PMC14_DEFAULT       (0x7FU) /* PMC14 default value */

extern void ProfilerC_Interrupt();
