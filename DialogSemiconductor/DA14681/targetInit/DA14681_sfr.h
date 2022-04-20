#include <stdint.h>

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_WAKEUP_LP_IRQn:1;
      uint64_t BLE_GEN_IRQn:1;
      uint64_t FTDF_WAKEUP_IRQn:1;
      uint64_t FTDF_GEN_IRQn:1;
      uint64_t RFCAL_IRQn:1;
      uint64_t COEX_IRQn:1;
      uint64_t CRYPTO_IRQn:1;
      uint64_t MRM_IRQn:1;
      uint64_t UART_IRQn:1;
      uint64_t UART2_IRQn:1;
      uint64_t I2C_IRQn:1;
      uint64_t I2C2_IRQn:1;
      uint64_t SPI_IRQn:1;
      uint64_t SPI2_IRQn:1;
      uint64_t ADC_IRQn:1;
      uint64_t KEYBRD_IRQn:1;
      uint64_t IRGEN_IRQn:1;
      uint64_t WKUP_GPIO_IRQn:1;
      uint64_t SWTIM0_IRQn:1;
      uint64_t SWTIM1_IRQn:1;
      uint64_t QUADEC_IRQn:1;
      uint64_t USB_IRQn:1;
      uint64_t PCM_IRQn:1;
      uint64_t SRC_IN_IRQn:1;
      uint64_t SRC_OUT_IRQn:1;
      uint64_t VBUS_IRQn:1;
      uint64_t DMA_IRQn:1;
      uint64_t RF_DIAG_IRQn:1;
      uint64_t TRNG_IRQn:1;
      uint64_t DCDC_IRQn:1;
      uint64_t XTAL16RDY_IRQn:1;
      uint64_t Rsvd__irq__n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_WAKEUP_LP_IRQn:1;
      uint64_t BLE_GEN_IRQn:1;
      uint64_t FTDF_WAKEUP_IRQn:1;
      uint64_t FTDF_GEN_IRQn:1;
      uint64_t RFCAL_IRQn:1;
      uint64_t COEX_IRQn:1;
      uint64_t CRYPTO_IRQn:1;
      uint64_t MRM_IRQn:1;
      uint64_t UART_IRQn:1;
      uint64_t UART2_IRQn:1;
      uint64_t I2C_IRQn:1;
      uint64_t I2C2_IRQn:1;
      uint64_t SPI_IRQn:1;
      uint64_t SPI2_IRQn:1;
      uint64_t ADC_IRQn:1;
      uint64_t KEYBRD_IRQn:1;
      uint64_t IRGEN_IRQn:1;
      uint64_t WKUP_GPIO_IRQn:1;
      uint64_t SWTIM0_IRQn:1;
      uint64_t SWTIM1_IRQn:1;
      uint64_t QUADEC_IRQn:1;
      uint64_t USB_IRQn:1;
      uint64_t PCM_IRQn:1;
      uint64_t SRC_IN_IRQn:1;
      uint64_t SRC_OUT_IRQn:1;
      uint64_t VBUS_IRQn:1;
      uint64_t DMA_IRQn:1;
      uint64_t RF_DIAG_IRQn:1;
      uint64_t TRNG_IRQn:1;
      uint64_t DCDC_IRQn:1;
      uint64_t XTAL16RDY_IRQn:1;
      uint64_t Rsvd__irq__n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER;

  uint8_t res1[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_WAKEUP_LP_IRQn:1;
      uint64_t BLE_GEN_IRQn:1;
      uint64_t FTDF_WAKEUP_IRQn:1;
      uint64_t FTDF_GEN_IRQn:1;
      uint64_t RFCAL_IRQn:1;
      uint64_t COEX_IRQn:1;
      uint64_t CRYPTO_IRQn:1;
      uint64_t MRM_IRQn:1;
      uint64_t UART_IRQn:1;
      uint64_t UART2_IRQn:1;
      uint64_t I2C_IRQn:1;
      uint64_t I2C2_IRQn:1;
      uint64_t SPI_IRQn:1;
      uint64_t SPI2_IRQn:1;
      uint64_t ADC_IRQn:1;
      uint64_t KEYBRD_IRQn:1;
      uint64_t IRGEN_IRQn:1;
      uint64_t WKUP_GPIO_IRQn:1;
      uint64_t SWTIM0_IRQn:1;
      uint64_t SWTIM1_IRQn:1;
      uint64_t QUADEC_IRQn:1;
      uint64_t USB_IRQn:1;
      uint64_t PCM_IRQn:1;
      uint64_t SRC_IN_IRQn:1;
      uint64_t SRC_OUT_IRQn:1;
      uint64_t VBUS_IRQn:1;
      uint64_t DMA_IRQn:1;
      uint64_t RF_DIAG_IRQn:1;
      uint64_t TRNG_IRQn:1;
      uint64_t DCDC_IRQn:1;
      uint64_t XTAL16RDY_IRQn:1;
      uint64_t Rsvd__irq__n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR;

  uint8_t res2[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_WAKEUP_LP_IRQn:1;
      uint64_t BLE_GEN_IRQn:1;
      uint64_t FTDF_WAKEUP_IRQn:1;
      uint64_t FTDF_GEN_IRQn:1;
      uint64_t RFCAL_IRQn:1;
      uint64_t COEX_IRQn:1;
      uint64_t CRYPTO_IRQn:1;
      uint64_t MRM_IRQn:1;
      uint64_t UART_IRQn:1;
      uint64_t UART2_IRQn:1;
      uint64_t I2C_IRQn:1;
      uint64_t I2C2_IRQn:1;
      uint64_t SPI_IRQn:1;
      uint64_t SPI2_IRQn:1;
      uint64_t ADC_IRQn:1;
      uint64_t KEYBRD_IRQn:1;
      uint64_t IRGEN_IRQn:1;
      uint64_t WKUP_GPIO_IRQn:1;
      uint64_t SWTIM0_IRQn:1;
      uint64_t SWTIM1_IRQn:1;
      uint64_t QUADEC_IRQn:1;
      uint64_t USB_IRQn:1;
      uint64_t PCM_IRQn:1;
      uint64_t SRC_IN_IRQn:1;
      uint64_t SRC_OUT_IRQn:1;
      uint64_t VBUS_IRQn:1;
      uint64_t DMA_IRQn:1;
      uint64_t RF_DIAG_IRQn:1;
      uint64_t TRNG_IRQn:1;
      uint64_t DCDC_IRQn:1;
      uint64_t XTAL16RDY_IRQn:1;
      uint64_t Rsvd__irq__n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR;

  uint8_t res3[380];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLE_WAKEUP_LP_IRQn_prio:8;
      uint64_t BLE_GEN_IRQn_prio:8;
      uint64_t FTDF_WAKEUP_IRQn_prio:8;
      uint64_t FTDF_GEN_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFCAL_IRQn_prio:8;
      uint64_t COEX_IRQn_prio:8;
      uint64_t CRYPTO_IRQn_prio:8;
      uint64_t MRM_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART_IRQn_prio:8;
      uint64_t UART2_IRQn_prio:8;
      uint64_t I2C_IRQn_prio:8;
      uint64_t I2C2_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI_IRQn_prio:8;
      uint64_t SPI2_IRQn_prio:8;
      uint64_t ADC_IRQn_prio:8;
      uint64_t KEYBRD_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRGEN_IRQn_prio:8;
      uint64_t WKUP_GPIO_IRQn_prio:8;
      uint64_t SWTIM0_IRQn_prio:8;
      uint64_t SWTIM1_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QUADEC_IRQn_prio:8;
      uint64_t USB_IRQn_prio:8;
      uint64_t PCM_IRQn_prio:8;
      uint64_t SRC_IN_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_OUT_IRQn_prio:8;
      uint64_t VBUS_IRQn_prio:8;
      uint64_t DMA_IRQn_prio:8;
      uint64_t RF_DIAG_IRQn_prio:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRNG_IRQn_prio:8;
      uint64_t DCDC_IRQn_prio:8;
      uint64_t XTAL16RDY_IRQn_prio:8;
      uint64_t RESERVED31_IRQn_DONT_USE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

struct SCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:4;
      uint64_t PARTNO:12;
      uint64_t CONSTANT:4;
      uint64_t VARIANT:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:6;
      uint64_t reservedSpace0:6;
      uint64_t VECTPENDING:6;
      uint64_t reservedSpace1:4;
      uint64_t ISRPENDING:1;
      uint64_t reservedSpace2:2;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:12;
      uint64_t ENDIANESS:1;
      uint64_t VECTKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AIRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SLEEPONEXIT:1;
      uint64_t SLEEPDEEP:1;
      uint64_t reservedSpace1:1;
      uint64_t SEVEONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t UNALIGN_TRP:1;
      uint64_t reservedSpace1:5;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR3;

};

#define SCB (*(volatile struct SCB_tag *) 0xe000ed00)

struct SysTick_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t TICKINT:1;
      uint64_t CLKSOURCE:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNTFLAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TENMS:24;
      uint64_t reservedSpace0:6;
      uint64_t SKEW:1;
      uint64_t NOREF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALIB;

};

#define SysTick (*(volatile struct SysTick_tag *) 0xe000e010)

struct AES_HASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_ALG:2;
      uint64_t CRYPTO_ALG_MD:2;
      uint64_t CRYPTO_OUT_MD:1;
      uint64_t CRYPTO_AES_KEY_SZ:2;
      uint64_t CRYPTO_ENCDEC:1;
      uint64_t CRYPTO_IRQ_EN:1;
      uint64_t CRYPTO_HASH_SEL:1;
      uint64_t CRYPTO_HASH_OUT_LEN:6;
      uint64_t CRYPTO_MORE_IN:1;
      uint64_t CRYPTO_AES_KEXP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_START_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_FETCH_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_FETCH_ADDR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_LEN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_LEN_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_DEST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_DEST_ADDR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_INACTIVE:1;
      uint64_t CRYPTO_WAIT_FOR_IN:1;
      uint64_t CRYPTO_IRQ_ST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_STATUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_CLRIRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_CLRIRQ_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_MREG0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_MREG0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_MREG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_MREG1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_MREG2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_MREG2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_MREG3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_MREG3_REG;

  uint8_t res0[212];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRYPTO_KEY_X:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRYPTO_KEYS_START;

};

#define AES_HASH (*(volatile struct AES_HASH_tag *) 0x40020000)

struct ANAMISC_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEST_STRUCTURE:4;
      uint64_t ACORE_TESTBUS_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ANA_TEST_REG;

  uint8_t res0[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHARGE_LEVEL:5;
      uint64_t CHARGE_ON:1;
      uint64_t NTC_DISABLE:1;
      uint64_t NTC_LOW_DISABLE:1;
      uint64_t CHARGE_CUR:4;
      uint64_t DIE_TEMP_SET:2;
      uint64_t DIE_TEMP_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHARGER_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CURRENT_GAIN_TRIM:4;
      uint64_t CHARGER_VFLOAT_ADJ:4;
      uint64_t CURRENT_OFFSET_TRIM:5;
      uint64_t CHARGER_TEST:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHARGER_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHARGER_CC_MODE:1;
      uint64_t CHARGER_CV_MODE:1;
      uint64_t END_OF_CHARGE:1;
      uint64_t CHARGER_BATTEMP_LOW:1;
      uint64_t CHARGER_BATTEMP_OK:1;
      uint64_t CHARGER_BATTEMP_HIGH:1;
      uint64_t CHARGER_TMODE_PROT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CHARGER_STATUS_REG;

  uint8_t res1[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_ENABLE:1;
      uint64_t SOC_RESET_CHARGE:1;
      uint64_t SOC_RESET_AVG:1;
      uint64_t SOC_MUTE:1;
      uint64_t SOC_GPIO:1;
      uint64_t SOC_SIGN:1;
      uint64_t SOC_IDAC:2;
      uint64_t SOC_LPF:1;
      uint64_t SOC_CLK:3;
      uint64_t SOC_BIAS:2;
      uint64_t SOC_CINT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_RVI:2;
      uint64_t SOC_SCYCLE:3;
      uint64_t SOC_DCYCLE:1;
      uint64_t SOC_ICM:2;
      uint64_t SOC_CHOP:3;
      uint64_t SOC_CMIREG_ENABLE:1;
      uint64_t SOC_MAW:3;
      uint64_t SOC_DYNAVG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_VSAT:2;
      uint64_t SOC_DYNTARG:1;
      uint64_t SOC_DYNHYS:1;
      uint64_t SOC_VCMI:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_ADD2CH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_ADD2CH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHARGE_CNT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CHARGE_CNTR1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHARGE_CNT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CHARGE_CNTR2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHARGE_CNT3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CHARGE_CNTR3_REG;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHARGE_AVG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_CHARGE_AVG_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_INT_OVERLOAD:1;
      uint64_t SOC_INT_LOCKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_IDAC_VAL:9;
      uint64_t SOC_IDAC_SIGN:1;
      uint64_t SOC_RDAC_DIS:1;
      uint64_t SOC_NR_SCYCLE:3;
      uint64_t SOC_EXT_SCYCLE_EN:1;
      uint64_t SOC_EXT_IDAC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_EXT_IN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SOC_HIGH_LIM:1;
      uint64_t SOC_LOWLIM_COMP:1;
      uint64_t SOC_POS_COMP:1;
      uint64_t SOC_RISING_COMP:1;
      uint64_t SOC_STATE:4;
      uint64_t SOC_CTRL_EVENT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SOC_EXT_OUT_REG;

  uint8_t res3[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REF_CLK_SEL:2;
      uint64_t REF_CAL_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_REF_SEL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REF_CNT_VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_REF_CNT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t XTAL_CNT_VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_REF_VAL_L_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t XTAL_CNT_VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_REF_VAL_H_REG;

};

#define ANAMISC (*(volatile struct ANAMISC_tag *) 0x50001b02)

struct APU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_EN:1;
      uint64_t SRC_IN_AMODE:1;
      uint64_t SRC_IN_CAL_BYPASS:1;
      uint64_t reservedSpace0:1;
      uint64_t SRC_IN_DS:2;
      uint64_t SRC_IN_OK:1;
      uint64_t SRC_DITHER_DISABLE:1;
      uint64_t reservedSpace1:5;
      uint64_t SRC_OUT_AMODE:1;
      uint64_t SRC_OUT_CAL_BYPASS:1;
      uint64_t reservedSpace2:1;
      uint64_t SRC_OUT_US:2;
      uint64_t SRC_OUT_OK:1;
      uint64_t reservedSpace3:1;
      uint64_t SRC_IN_OVFLOW:1;
      uint64_t SRC_IN_UNFLOW:1;
      uint64_t SRC_OUT_OVFLOW:1;
      uint64_t SRC_OUT_UNFLOW:1;
      uint64_t SRC_IN_FLOWCLR:1;
      uint64_t SRC_OUT_FLOWCLR:1;
      uint64_t reservedSpace4:2;
      uint64_t SRC_PDM_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_IN_FS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_IN_FS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_OUT_FS:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_OUT_FS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SRC_IN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_IN1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SRC_IN:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_IN2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SRC_OUT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_OUT1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t SRC_OUT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRC1_OUT2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC1_MUX_IN:3;
      uint64_t PCM1_MUX_IN:3;
      uint64_t PDM1_MUX_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APU_MUX_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_COEF0:16;
      uint64_t SRC_COEF1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF10_SET1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_COEF2:16;
      uint64_t SRC_COEF3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF32_SET1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_COEF4:16;
      uint64_t SRC_COEF5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF54_SET1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_COEF6:16;
      uint64_t SRC_COEF7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF76_SET1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_COEF8:16;
      uint64_t SRC_COEF9:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF98_SET1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRC_COEF10:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF0A_SET1_REG;

  uint8_t res0[200];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_EN:1;
      uint64_t PCM_MASTER:1;
      uint64_t PCM_FSCLEN:4;
      uint64_t PCM_FSCDEL:1;
      uint64_t PCM_PPOD:1;
      uint64_t PCM_CLKINV:1;
      uint64_t PCM_FSCINV:1;
      uint64_t PCM_CLK_BIT:1;
      uint64_t PCM_CH_DEL:5;
      uint64_t PCM_FSC_EDGE:1;
      uint64_t reservedSpace0:3;
      uint64_t PCM_FSC_DIV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM1_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM1_IN1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM1_IN2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_OUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM1_OUT1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCM_OUT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCM1_OUT2_REG;

};

#define APU (*(volatile struct APU_tag *) 0x50004000)

struct BLE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCERR:3;
      uint64_t reservedSpace0:1;
      uint64_t RXWINSZDEF:4;
      uint64_t RWBLE_EN:1;
      uint64_t ADVERTFILT_EN:1;
      uint64_t reservedSpace1:2;
      uint64_t CORR_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t HOP_REMAP_DSB:1;
      uint64_t CRC_DSB:1;
      uint64_t WHIT_DSB:1;
      uint64_t CRYPT_DSB:1;
      uint64_t NESN_DSB:1;
      uint64_t SN_DSB:1;
      uint64_t MD_DSB:1;
      uint64_t reservedSpace3:1;
      uint64_t SCAN_ABORT:1;
      uint64_t ADVERT_ABORT:1;
      uint64_t RFTEST_ABORT:1;
      uint64_t reservedSpace4:1;
      uint64_t SWINT_REQ:1;
      uint64_t REG_SOFT_RST:1;
      uint64_t MASTER_TGSOFT_RST:1;
      uint64_t MASTER_SOFT_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RWBLECNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUILD:8;
      uint64_t UPG:8;
      uint64_t REL:8;
      uint64_t TYP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_VERSION_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSWIDTH:1;
      uint64_t USECRYPT:1;
      uint64_t USEDBG:1;
      uint64_t COEX_bitfield:1;
      uint64_t INTMODE:1;
      uint64_t DMMODE:1;
      uint64_t DECIPHER:1;
      uint64_t reservedSpace0:1;
      uint64_t CLK_SEL:6;
      uint64_t reservedSpace1:2;
      uint64_t RFIF:7;
      uint64_t reservedSpace2:1;
      uint64_t ADD_WIDTH:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RWBLECONF_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTMSK:1;
      uint64_t RXINTMSK:1;
      uint64_t SLPINTMSK:1;
      uint64_t EVENTINTMSK:1;
      uint64_t CRYPTINTMSK:1;
      uint64_t ERRORINTMSK:1;
      uint64_t GROSSTGTIMINTMSK:1;
      uint64_t FINETGTIMINTMSK:1;
      uint64_t EVENTAPFAINTMSK:1;
      uint64_t SWINTMSK:1;
      uint64_t reservedSpace0:5;
      uint64_t CSCNTDEVMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_INTCNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTSTAT:1;
      uint64_t RXINTSTAT:1;
      uint64_t SLPINTSTAT:1;
      uint64_t EVENTINTSTAT:1;
      uint64_t CRYPTINTSTAT:1;
      uint64_t ERRORINTSTAT:1;
      uint64_t GROSSTGTIMINTSTAT:1;
      uint64_t FINETGTIMINTSTAT:1;
      uint64_t EVENTAPFAINTSTAT:1;
      uint64_t SWINTSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_INTSTAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTRAWSTAT:1;
      uint64_t RXINTRAWSTAT:1;
      uint64_t SLPINTRAWSTAT:1;
      uint64_t EVENTINTRAWSTAT:1;
      uint64_t CRYPTINTRAWSTAT:1;
      uint64_t ERRORINTRAWSTAT:1;
      uint64_t GROSSTGTIMINTRAWSTAT:1;
      uint64_t FINETGTIMINTRAWSTAT:1;
      uint64_t EVENTAPFAINTRAWSTAT:1;
      uint64_t SWINTRAWSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_INTRAWSTAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSCNTINTACK:1;
      uint64_t RXINTACK:1;
      uint64_t SLPINTACK:1;
      uint64_t EVENTINTACK:1;
      uint64_t CRYPTINTACK:1;
      uint64_t ERRORINTACK:1;
      uint64_t GROSSTGTIMINTACK:1;
      uint64_t FINETGTIMINTACK:1;
      uint64_t EVENTAPFAINTACK:1;
      uint64_t SWINTACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_INTACK_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETIMECNT:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BASETIMECNT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINECNT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_FINETIMECNT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDADDRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BDADDRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BDADDRU:16;
      uint64_t PRIV_NPUB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BDADDRU_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENTRXDESCPTR:15;
      uint64_t reservedSpace0:1;
      uint64_t ETPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_CURRENTRXDESCPTR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEEP_SLEEP_IRQ_EN:2;
      uint64_t DEEP_SLEEP_ON:1;
      uint64_t DEEP_SLEEP_CORR_EN:1;
      uint64_t SOFT_WAKEUP_REQ:1;
      uint64_t reservedSpace0:10;
      uint64_t DEEP_SLEEP_STAT:1;
      uint64_t reservedSpace1:15;
      uint64_t EXTWKUPDSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DEEPSLCNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEEPSLTIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DEEPSLWKUP_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEEPSLDUR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DEEPSLSTAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TWIRQ_RESET:10;
      uint64_t TWIRQ_SET:11;
      uint64_t TWEXT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_ENBPRESET_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINECNTCORR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_FINECNTCORR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETIMECNTCORR:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BASETIMECNTCORR_REG;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG0:6;
      uint64_t reservedSpace0:1;
      uint64_t DIAG0_EN:1;
      uint64_t DIAG1:6;
      uint64_t reservedSpace1:1;
      uint64_t DIAG1_EN:1;
      uint64_t DIAG2:6;
      uint64_t reservedSpace2:1;
      uint64_t DIAG2_EN:1;
      uint64_t DIAG3:6;
      uint64_t reservedSpace3:1;
      uint64_t DIAG3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DIAGCNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG0STAT:8;
      uint64_t DIAG1STAT:8;
      uint64_t DIAG2STAT:8;
      uint64_t DIAG3STAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DIAGSTAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM_ADDMAX:16;
      uint64_t REG_ADDMAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DEBUGADDMAX_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EM_ADDMIN:16;
      uint64_t REG_ADDMIN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DEBUGADDMIN_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRYPT_ERROR:1;
      uint64_t RXCRYPT_ERROR:1;
      uint64_t PKTCNTL_EMACC_ERROR:1;
      uint64_t RADIO_EMACC_ERROR:1;
      uint64_t EVT_SCHDL_EMACC_ERROR:1;
      uint64_t EVT_SCHDL_ENTRY_ERROR:1;
      uint64_t EVT_SCHDL_APFM_ERROR:1;
      uint64_t EVT_CNTL_APFM_ERROR:1;
      uint64_t WHITELIST_ERROR:1;
      uint64_t IFS_UNDERRUN:1;
      uint64_t ADV_UNDERRUN:1;
      uint64_t LLCHMAP_ERROR:1;
      uint64_t CSFORMAT_ERROR:1;
      uint64_t TXDESC_EMPTY_ERROR:1;
      uint64_t RXDESC_EMPTY_ERROR:1;
      uint64_t TXDATA_PTR_ERROR:1;
      uint64_t RXDATA_PTR_ERROR:1;
      uint64_t CONCEVTIRQ_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_ERRORTYPESTAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWPROFVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_SWPROFILING_REG;

  uint8_t res1[8];

  uint32_t BLE_RADIOCNTL0_REG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t XRFSEL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RADIOCNTL1_REG;

  uint32_t BLE_RADIOCNTL2_REG;
  uint32_t BLE_RADIOCNTL3_REG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPWRUP:8;
      uint64_t TXPWRDN:4;
      uint64_t reservedSpace0:4;
      uint64_t RXPWRUP:8;
      uint64_t RTRIP_DELAY:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RADIOPWRUPDN_REG;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADVCHMAP:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_ADVCHMAP_REG;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADVINT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_ADVTIM_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UPPERLIMIT:9;
      uint64_t reservedSpace0:7;
      uint64_t BACKOFF:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_ACTSCANSTAT_REG;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLPUBADDPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_WLPUBADDPTR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLPRIVADDPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_WLPRIVADDPTR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NBPUBDEV:8;
      uint64_t NBPRIVDEV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_WLNBDEV_REG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AES_START:1;
      uint64_t AES_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_AESCNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_AESKEY31_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_AESKEY63_32_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_AESKEY95_64_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESKEY127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_AESKEY127_96_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AESPTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_AESPTR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXMICVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_TXMICVAL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMICVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RXMICVAL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXLENGTH:9;
      uint64_t reservedSpace0:2;
      uint64_t TXPKTCNTEN:1;
      uint64_t TXPLDSRC:1;
      uint64_t PRBSTYPE:1;
      uint64_t TXLENGTHSRC:1;
      uint64_t INFINITETX:1;
      uint64_t reservedSpace1:11;
      uint64_t RXPKTCNTEN:1;
      uint64_t reservedSpace2:3;
      uint64_t INFINITERX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RFTESTCNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPKTCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RFTESTTXSTAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPKTCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_RFTESTRXSTAT_REG;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREFETCH_TIME:9;
      uint64_t reservedSpace0:7;
      uint64_t PREFETCHABORT_TIME:10;
      uint64_t reservedSpace1:5;
      uint64_t APFM_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_TIMGENCNTL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GROSSTARGET:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_GROSSTIMTGT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINETARGET:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_FINETIMTGT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_SAMPLECLK_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEX_EN:1;
      uint64_t SYNCGEN_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t WLANRXMSK:2;
      uint64_t WLANTXMSK:2;
      uint64_t reservedSpace1:8;
      uint64_t WLCTXPRIOMODE:2;
      uint64_t reservedSpace2:2;
      uint64_t WLCRXPRIOMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_COEXIFCNTL0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WLCPDELAY:7;
      uint64_t reservedSpace0:1;
      uint64_t WLCPDURATION:7;
      uint64_t reservedSpace1:1;
      uint64_t WLCPTXTHR:5;
      uint64_t reservedSpace2:3;
      uint64_t WLCPRXTHR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_COEXIFCNTL1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLEM0:4;
      uint64_t BLEM1:4;
      uint64_t BLEM2:4;
      uint64_t BLEM3:4;
      uint64_t BLEM4:4;
      uint64_t BLEM5:4;
      uint64_t BLEM6:4;
      uint64_t BLEM7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BLEMPRIO0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t BLEMDEFAULT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BLEMPRIO1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLEMARGIN:8;
      uint64_t reservedSpace0:7;
      uint64_t BLEPRIOMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_BLEPRIOSCHARB_REG;

  uint8_t res7[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMACCERRSTAT:1;
      uint64_t EMACCERRACK:1;
      uint64_t EMACCERRMSK:1;
      uint64_t reservedSpace0:3;
      uint64_t BLE_CLK_STAT:1;
      uint64_t MON_LP_CLK:1;
      uint64_t RADIO_PWRDN_ALLOW:1;
      uint64_t BLE_CLK_SEL:6;
      uint64_t reservedSpace1:4;
      uint64_t SW_RPL_SPI:1;
      uint64_t WAKEUPLPSTAT:1;
      uint64_t BLE_RSSI_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_CNTL2_REG;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t BLE_EM_BASE_16_10:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_EM_BASE_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG4:6;
      uint64_t reservedSpace0:1;
      uint64_t DIAG4_EN:1;
      uint64_t DIAG5:6;
      uint64_t reservedSpace1:1;
      uint64_t DIAG5_EN:1;
      uint64_t DIAG6:6;
      uint64_t reservedSpace2:1;
      uint64_t DIAG6_EN:1;
      uint64_t DIAG7:6;
      uint64_t reservedSpace3:1;
      uint64_t DIAG7_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DIAGCNTL2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIAG0_BIT:3;
      uint64_t DIAG0_INV:1;
      uint64_t DIAG1_BIT:3;
      uint64_t DIAG1_INV:1;
      uint64_t DIAG2_BIT:3;
      uint64_t DIAG2_INV:1;
      uint64_t DIAG3_BIT:3;
      uint64_t DIAG3_INV:1;
      uint64_t DIAG4_BIT:3;
      uint64_t DIAG4_INV:1;
      uint64_t DIAG5_BIT:3;
      uint64_t DIAG5_INV:1;
      uint64_t DIAG6_BIT:3;
      uint64_t DIAG6_INV:1;
      uint64_t DIAG7_BIT:3;
      uint64_t DIAG7_INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BLE_DIAGCNTL3_REG;

};

#define BLE (*(volatile struct BLE_tag *) 0x40000000)

struct CACHE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHE_FLUSH:1;
      uint64_t CACHE_RES1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_CTRL1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHE_LINE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_LNSIZECFG_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHE_ASSOC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_ASSOCCFG_REG;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHE_LEN:9;
      uint64_t CACHE_WEN:1;
      uint64_t CACHE_CGEN:1;
      uint64_t ENABLE_ALSO_OTP_CACHED:1;
      uint64_t ENABLE_ALSO_QSPIFLASH_CACHED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_CTRL2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CACHE_ASSOCIATIVITY_RESET_VALUE:2;
      uint64_t CACHE_LINE_SIZE_RESET_VALUE:2;
      uint64_t CACHE_RAM_SIZE_RESET_VALUE:3;
      uint64_t CACHE_CONTROLLER_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_CTRL3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRM_HITS:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_MRM_HITS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRM_MISSES:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_MRM_MISSES_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRM_START:1;
      uint64_t MRM_IRQ_MASK:1;
      uint64_t MRM_IRQ_TINT_STATUS:1;
      uint64_t MRM_IRQ_THRES_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_MRM_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRM_TINT:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_MRM_TINT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MRM_THRES:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CACHE_MRM_THRES_REG;

  uint8_t res1[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWD_HW_RESET_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWD_RESET_REG;

};

#define CACHE (*(volatile struct CACHE_tag *) 0x400c3000)

struct CHIP_VERSION_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_ID1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_ID1_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_ID2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_ID2_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_ID3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_ID3_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_SWC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_SWC_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t REVISION_ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_REVISION_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_CONFIG1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_CONFIG1_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_CONFIG2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_CONFIG2_REG;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CHIP_CONFIG3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHIP_CONFIG3_REG;

  uint8_t res0[2];

  uint8_t CHIP_TEST1_REG;
  uint8_t CHIP_TEST2_REG;
};

#define CHIP_VERSION (*(volatile struct CHIP_VERSION_tag *) 0x50003200)

struct COEX_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRGING_ARBITER:1;
      uint64_t reservedSpace0:3;
      uint64_t SMART_ACT_IMPL:1;
      uint64_t SEL_COEX_DIAG:2;
      uint64_t SEL_FTDF_CCA:1;
      uint64_t SEL_FTDF_PTI:1;
      uint64_t reservedSpace1:1;
      uint64_t SEL_BLE_WLAN_TX_RX:1;
      uint64_t SEL_BLE_RADIO_BUSY:2;
      uint64_t IGNORE_EXT:1;
      uint64_t IGNORE_FTDF:1;
      uint64_t IGNORE_BLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_DECISION_PTR:5;
      uint64_t COEX_DECISION:2;
      uint64_t COEX_DECISION_CLOSING:1;
      uint64_t SMART_ACT:1;
      uint64_t SMART_PRI:1;
      uint64_t EXT_ACT0:1;
      uint64_t EXT_ACT1:1;
      uint64_t COEX_RADIO_BUSY:1;
      uint64_t IGNORE_EXT_STAT:1;
      uint64_t IGNORE_FTDF_STAT:1;
      uint64_t IGNORE_BLE_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_STAT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_IRQ_MASK:1;
      uint64_t COEX_IRQ_ON_SMART_ACT_R:1;
      uint64_t COEX_IRQ_ON_SMART_ACT_F:1;
      uint64_t COEX_IRQ_ON_SMART_PRI_R:1;
      uint64_t COEX_IRQ_ON_SMART_PRI_F:1;
      uint64_t COEX_IRQ_ON_EXT_ACT_R:1;
      uint64_t COEX_IRQ_ON_EXT_ACT_F:1;
      uint64_t COEX_IRQ_ON_FTDF_ACTIVE_R:1;
      uint64_t COEX_IRQ_ON_FTDF_ACTIVE_F:1;
      uint64_t COEX_IRQ_ON_BLE_ACTIVE_R:1;
      uint64_t COEX_IRQ_ON_BLE_ACTIVE_F:1;
      uint64_t COEX_IRQ_ON_RADIO_BUSY_R:1;
      uint64_t COEX_IRQ_ON_RADIO_BUSY_F:1;
      uint64_t COEX_IRQ_ON_CLOSING_BRK:1;
      uint64_t COEX_IRQ_ON_START_MID:1;
      uint64_t COEX_IRQ_ON_DECISION_SW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_INT_MASK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_IRQ_STAT:1;
      uint64_t COEX_IRQ_ON_SMART_ACT_R:1;
      uint64_t COEX_IRQ_ON_SMART_ACT_F:1;
      uint64_t COEX_IRQ_ON_SMART_PRI_R:1;
      uint64_t COEX_IRQ_ON_SMART_PRI_F:1;
      uint64_t COEX_IRQ_ON_EXT_ACT_R:1;
      uint64_t COEX_IRQ_ON_EXT_ACT_F:1;
      uint64_t COEX_IRQ_ON_FTDF_ACTIVE_R:1;
      uint64_t COEX_IRQ_ON_FTDF_ACTIVE_F:1;
      uint64_t COEX_IRQ_ON_BLE_ACTIVE_R:1;
      uint64_t COEX_IRQ_ON_BLE_ACTIVE_F:1;
      uint64_t COEX_IRQ_ON_RADIO_BUSY_R:1;
      uint64_t COEX_IRQ_ON_RADIO_BUSY_F:1;
      uint64_t COEX_IRQ_ON_CLOSING_BRK:1;
      uint64_t COEX_IRQ_ON_START_MID:1;
      uint64_t COEX_IRQ_ON_DECISION_SW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_INT_STAT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_BLE_PTI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_BLE_PTI_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_FTDF_PTI:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_FTDF_PTI_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_DIAG_MON:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_DIAG_REG;

  uint8_t res0[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI5_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI6_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI7_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI8_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI9_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI10_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI11_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI12_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI13_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI14_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI15_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI16_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COEX_PRI_PTI:3;
      uint64_t COEX_PRI_MAC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) COEX_PRI17_REG;

};

#define COEX (*(volatile struct COEX_tag *) 0x50002f00)

struct CRG_PER_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_ENABLE:1;
      uint64_t SPI_ENABLE:1;
      uint64_t I2C_ENABLE:1;
      uint64_t QUAD_ENABLE:1;
      uint64_t IR_CLK_ENABLE:1;
      uint64_t KBSCAN_ENABLE:1;
      uint64_t reservedSpace0:2;
      uint64_t SPI_CLK_SEL:1;
      uint64_t I2C_CLK_SEL:1;
      uint64_t KBSCAN_CLK_SEL:1;
      uint64_t ADC_CLK_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_PER_REG;

  uint8_t res0[58];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM_DIV:12;
      uint64_t CLK_PCM_EN:1;
      uint64_t PCM_SRC_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCM_DIV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PCM_FDIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PCM_FDIV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PDM_DIV:8;
      uint64_t CLK_PDM_EN:1;
      uint64_t PDM_MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PDM_DIV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRC_DIV:8;
      uint64_t CLK_SRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SRC_DIV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EH_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) EH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USBPAD_EN:1;
      uint64_t USBPHY_FORCE_SW1_OFF:1;
      uint64_t USBPHY_FORCE_SW2_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USBPAD_REG;

};

#define CRG_PER (*(volatile struct CRG_PER_tag *) 0x50001c04)

struct CRG_TOP_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t HCLK_DIV:3;
      uint64_t reservedSpace0:1;
      uint64_t PCLK_DIV:2;
      uint64_t AES_CLK_ENABLE:1;
      uint64_t ECC_CLK_ENABLE:1;
      uint64_t TRNG_CLK_ENABLE:1;
      uint64_t OTP_ENABLE:1;
      uint64_t QSPI_DIV:2;
      uint64_t QSPI_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_AMBA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FINE_ADJ:8;
      uint64_t COARSE_ADJ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_FREQ_TRIM_REG;

  uint8_t res0[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFCU_DIV:2;
      uint64_t reservedSpace0:1;
      uint64_t RFCU_ENABLE:1;
      uint64_t BLE_DIV:2;
      uint64_t BLE_LP_RESET:1;
      uint64_t BLE_ENABLE:1;
      uint64_t FTDF_MAC_DIV:2;
      uint64_t reservedSpace1:1;
      uint64_t FTDF_MAC_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_RADIO_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SYS_CLK_SEL:2;
      uint64_t XTAL16M_DISABLE:1;
      uint64_t XTAL32M_MODE:1;
      uint64_t USB_CLK_SRC:1;
      uint64_t PLL_DIV2:1;
      uint64_t DIVN_XTAL32M_MODE:1;
      uint64_t DIVN_SYNC_LEVEL:1;
      uint64_t CLK32K_SOURCE:2;
      uint64_t reservedSpace0:2;
      uint64_t RUNNING_AT_32K:1;
      uint64_t RUNNING_AT_RC16M:1;
      uint64_t RUNNING_AT_XTAL16M:1;
      uint64_t RUNNING_AT_PLL96M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TMR0_DIV:2;
      uint64_t TMR0_ENABLE:1;
      uint64_t TMR0_CLK_SEL:1;
      uint64_t TMR1_DIV:2;
      uint64_t TMR1_ENABLE:1;
      uint64_t TMR1_CLK_SEL:1;
      uint64_t TMR2_DIV:2;
      uint64_t TMR2_ENABLE:1;
      uint64_t TMR2_CLK_SEL:1;
      uint64_t BREATH_ENABLE:1;
      uint64_t WAKEUPCT_ENABLE:1;
      uint64_t P06_TMR1_PWM_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_TMR_REG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PERIPH_SLEEP:1;
      uint64_t RADIO_SLEEP:1;
      uint64_t BLE_SLEEP:1;
      uint64_t FTDF_SLEEP:1;
      uint64_t reservedSpace0:1;
      uint64_t RESET_ON_WAKEUP:1;
      uint64_t OTP_COPY_DIV:2;
      uint64_t RETAIN_RAM:5;
      uint64_t ENABLE_CLKLESS:1;
      uint64_t RETAIN_CACHE:1;
      uint64_t RETAIN_ECCRAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PMU_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REMAP_ADR0:3;
      uint64_t REMAP_RAMS:2;
      uint64_t PAD_LATCH_EN:1;
      uint64_t OTPC_RESET_REQ:1;
      uint64_t DEBUGGER_ENABLE:1;
      uint64_t DRA_OFF:1;
      uint64_t TIMEOUT_DISABLE:1;
      uint64_t CACHERAM_MUX:1;
      uint64_t DEV_PHASE:1;
      uint64_t QSPI_INIT:1;
      uint64_t OTP_COPY:1;
      uint64_t REMAP_INTVECT:1;
      uint64_t SW_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SYS_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAD_IS_DOWN:1;
      uint64_t RAD_IS_UP:1;
      uint64_t PER_IS_DOWN:1;
      uint64_t PER_IS_UP:1;
      uint64_t reservedSpace0:1;
      uint64_t DBG_IS_ACTIVE:1;
      uint64_t XTAL16_TRIM_READY:1;
      uint64_t reservedSpace1:1;
      uint64_t BLE_IS_DOWN:1;
      uint64_t BLE_IS_UP:1;
      uint64_t FTDF_IS_DOWN:1;
      uint64_t FTDF_IS_UP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SYS_STAT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t XTAL_COUNT_N:6;
      uint64_t XTAL_TRIM_SELECT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRIM_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIVN_SYNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DIVN_SYNC_REG;

  uint8_t res2[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t XTAL32K_ENABLE:1;
      uint64_t XTAL32K_RBIAS:2;
      uint64_t XTAL32K_CUR:4;
      uint64_t RC32K_ENABLE:1;
      uint64_t RC32K_TRIM:4;
      uint64_t XTAL32K_DISABLE_AMPREG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_32K_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RC16M_ENABLE:1;
      uint64_t RC16M_TRIM:4;
      uint64_t XTAL16_CUR_SET:3;
      uint64_t XTAL16_MAX_CURRENT:1;
      uint64_t XTAL16_EXT_CLK_ENABLE:1;
      uint64_t XTAL16_AMP_TRIM:3;
      uint64_t XTAL16_SPIKE_FLT_BYPASS:1;
      uint64_t XTAL16_HPASS_FLT_EN:1;
      uint64_t RC16M_STARTUP_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_16M_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RCX20K_TRIM:4;
      uint64_t RCX20K_NTC:4;
      uint64_t RCX20K_BIAS:2;
      uint64_t RCX20K_LOWF:1;
      uint64_t RCX20K_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CLK_RCX20K_REG;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BGR_TRIM:5;
      uint64_t BGR_ITRIM:5;
      uint64_t LDO_SLEEP_TRIM:4;
      uint64_t BYPASS_COLD_BOOT_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BANDGAP_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LDO_RADIO_OK:1;
      uint64_t COMP_VBAT_OK:1;
      uint64_t VBUS_AVAILABLE:1;
      uint64_t NEWBAT:1;
      uint64_t LDO_SUPPLY_VBAT_OK:1;
      uint64_t LDO_SUPPLY_USB_OK:1;
      uint64_t BANDGAP_OK:1;
      uint64_t COMP_VDD_HIGH:1;
      uint64_t LDO_CORE_OK:1;
      uint64_t LDO_1V8_PA_OK:1;
      uint64_t LDO_1V8_FLASH_OK:1;
      uint64_t COMP_VBUS_HIGH:1;
      uint64_t COMP_VBUS_LOW:1;
      uint64_t COMP_V33_HIGH:1;
      uint64_t COMP_1V8_FLASH_HIGH:1;
      uint64_t COMP_1V8_PA_HIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ANA_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SU_BANDGAP_OK:1;
      uint64_t SU_VBUS_AVAILABLE:1;
      uint64_t SU_LDO_SUPPLY_VBAT_OK:1;
      uint64_t SU_LOD_SUPPLY_USB_OK:1;
      uint64_t SU_LDO_CORE_OK:1;
      uint64_t SU_LDO_1V8_PA_OK:1;
      uint64_t SU_COMP_VDD_HIGH:1;
      uint64_t SU_COMP_V33_HIGH:1;
      uint64_t SU_COMP_VBUS_HIGH:1;
      uint64_t SU_COMP_VBUS_LOW:1;
      uint64_t SU_COMP_1V8_PA_HIGH:1;
      uint64_t SU_COMP_1V8_FLASH_HIGH:1;
      uint64_t SU_NEWBAT:1;
      uint64_t SU_LDO_1V8_FLASH_OK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STARTUP_STATUS_REG;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VBUS_IRQ_EN_FALL:1;
      uint64_t VBUS_IRQ_EN_RISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VBUS_IRQ_MASK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VBUS_IRQ_CLEAR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) VBUS_IRQ_CLEAR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BOD_VDD_TRIM:2;
      uint64_t BOD_1V8_FLASH_TRIM:2;
      uint64_t BOD_1V8_PA_TRIM:2;
      uint64_t BOD_V33_TRIM:2;
      uint64_t BOD_VDD_LVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BOD_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BOD_RESET_EN:1;
      uint64_t BOD_VDD_EN:1;
      uint64_t BOD_V33_EN:1;
      uint64_t BOD_1V8_PA_EN:1;
      uint64_t BOD_1V8_FLASH_EN:1;
      uint64_t BOD_VBAT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BOD_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BOD_VDD_LOW:1;
      uint64_t BOD_1V8_PA_LOW:1;
      uint64_t BOD_1V8_FLASH_LOW:1;
      uint64_t BOD_V33_LOW:1;
      uint64_t BOD_VBAT_LOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BOD_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LDO_CORE_CURLIM:2;
      uint64_t LDO_VBAT_RET_LEVEL:2;
      uint64_t LDO_SUPPLY_VBAT_LEVEL:2;
      uint64_t LDO_SUPPLY_USB_LEVEL:2;
      uint64_t LDO_CORE_SETVDD:3;
      uint64_t LDO_RADIO_SETVDD:3;
      uint64_t LDO_RADIO_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LDO_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LDO_1V2_ON:1;
      uint64_t LDO_3V3_ON:1;
      uint64_t LDO_1V8_FLASH_ON:1;
      uint64_t LDO_1V8_PA_ON:1;
      uint64_t LDO_VBAT_RET_DISABLE:1;
      uint64_t LDO_1V8_FLASH_RET_DISABLE:1;
      uint64_t LDO_1V8_PA_RET_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LDO_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SLEEP_TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SLEEP_TIMER_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRIM_NEWBAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) POWER_CTRL_REG;

  uint8_t res5[14];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t XTALRDY_CNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) XTALRDY_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t XTALRDY_STAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) XTALRDY_STAT_REG;

  uint8_t res6[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FORCE_FTDF_SLEEP:1;
      uint64_t FORCE_BLE_SLEEP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FORCE_SLEEP_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LDOS_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LDOS_DISABLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OSC16_HOLD_AMP_REG:1;
      uint64_t OSC16_SH_DISABLE:1;
      uint64_t EN_BATSYS_RET:1;
      uint64_t EN_BUSSYS_RET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) AON_SPARE_REG;

};

#define CRG_TOP (*(volatile struct CRG_TOP_tag *) 0x50000000)

struct DCDC_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_MODE:2;
      uint64_t DCDC_FW_ENABLE:1;
      uint64_t DCDC_PRIORITY:8;
      uint64_t DCDC_IDLE_CLK_DIV:2;
      uint64_t DCDC_BROWNOUT_LV_MODE:1;
      uint64_t DCDC_FAST_STARTUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_CTRL_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_TIMEOUT:5;
      uint64_t DCDC_GLOBAL_MAX_IDLE_TIME:6;
      uint64_t DCDC_STARTUP_DELAY:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_CTRL_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_HSGND_TRIM:3;
      uint64_t DCDC_LSSUP_TRIM:3;
      uint64_t DCDC_TUNE:2;
      uint64_t DCDC_TIMEOUT_IRQ_RES:4;
      uint64_t DCDC_TIMEOUT_IRQ_TRIG:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_CTRL_2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_CUR_LIM_MIN:5;
      uint64_t DCDC_V14_CUR_LIM_MAX_HV:5;
      uint64_t DCDC_V14_VOLTAGE:5;
      uint64_t DCDC_V14_FAST_RAMPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_V14_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_IDLE_MIN:5;
      uint64_t DCDC_V14_IDLE_HYST:5;
      uint64_t DCDC_V14_CUR_LIM_MAX_LV:4;
      uint64_t DCDC_V14_ENABLE_LV:1;
      uint64_t DCDC_V14_ENABLE_HV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_V14_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V18_CUR_LIM_MIN:5;
      uint64_t DCDC_V18_CUR_LIM_MAX_HV:5;
      uint64_t DCDC_V18_VOLTAGE:5;
      uint64_t DCDC_V18_FAST_RAMPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_V18_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V18_IDLE_MIN:5;
      uint64_t DCDC_V18_IDLE_HYST:5;
      uint64_t DCDC_V18_CUR_LIM_MAX_LV:4;
      uint64_t DCDC_V18_ENABLE_LV:1;
      uint64_t DCDC_V18_ENABLE_HV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_V18_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_VDD_CUR_LIM_MIN:5;
      uint64_t DCDC_VDD_CUR_LIM_MAX_HV:5;
      uint64_t DCDC_VDD_VOLTAGE:5;
      uint64_t DCDC_VDD_FAST_RAMPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_VDD_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_VDD_IDLE_MIN:5;
      uint64_t DCDC_VDD_IDLE_HYST:5;
      uint64_t DCDC_VDD_CUR_LIM_MAX_LV:4;
      uint64_t DCDC_VDD_ENABLE_LV:1;
      uint64_t DCDC_VDD_ENABLE_HV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_VDD_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V18P_CUR_LIM_MIN:5;
      uint64_t DCDC_V18P_CUR_LIM_MAX_HV:5;
      uint64_t DCDC_V18P_VOLTAGE:5;
      uint64_t DCDC_V18P_FAST_RAMPING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_V18P_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V18P_IDLE_MIN:5;
      uint64_t DCDC_V18P_IDLE_HYST:5;
      uint64_t DCDC_V18P_CUR_LIM_MAX_LV:4;
      uint64_t DCDC_V18P_ENABLE_LV:1;
      uint64_t DCDC_V18P_ENABLE_HV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_V18P_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_VDD_CUR_LIM_RET:5;
      uint64_t DCDC_VDD_RET_CYCLES:3;
      uint64_t DCDC_V18P_CUR_LIM_RET:5;
      uint64_t DCDC_V18P_RET_CYCLES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_RET_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_CUR_LIM_RET:5;
      uint64_t DCDC_V14_RET_CYCLES:3;
      uint64_t DCDC_V18_CUR_LIM_RET:5;
      uint64_t DCDC_V18_RET_CYCLES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_RET_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_N_COMP_TRIM:6;
      uint64_t DCDC_N_COMP_MAN_TRIM:1;
      uint64_t DCDC_P_COMP_TRIM:6;
      uint64_t DCDC_P_COMP_MAN_TRIM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TRIM_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_FORCE_PSW:1;
      uint64_t DCDC_FORCE_NSW:1;
      uint64_t DCDC_FORCE_FW:1;
      uint64_t DCDC_FORCE_V14:1;
      uint64_t DCDC_FORCE_V18:1;
      uint64_t DCDC_FORCE_VDD:1;
      uint64_t DCDC_FORCE_V18P:1;
      uint64_t DCDC_FORCE_IDLE:1;
      uint64_t DCDC_ANA_TEST:3;
      uint64_t DCDC_OUTPUT_MONITOR:3;
      uint64_t DCDC_FORCE_CURRENT:1;
      uint64_t DCDC_FORCE_COMP_CLK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TEST_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_TEST_REG:4;
      uint64_t DCDC_TEST_CURRENT:5;
      uint64_t DCDC_COMP_CLK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TEST_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_CHARGE_REG_0:3;
      uint64_t DCDC_CHARGE_REG_1:3;
      uint64_t DCDC_CHARGE_REG_2:3;
      uint64_t DCDC_CHARGE_REG_3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_STATUS_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_NOK:1;
      uint64_t DCDC_V18_NOK:1;
      uint64_t DCDC_VDD_NOK:1;
      uint64_t DCDC_V18P_NOK:1;
      uint64_t DCDC_V14_OK:1;
      uint64_t DCDC_V18_OK:1;
      uint64_t DCDC_VDD_OK:1;
      uint64_t DCDC_V18P_OK:1;
      uint64_t DCDC_V14_AVAILABLE:1;
      uint64_t DCDC_V18_AVAILABLE:1;
      uint64_t DCDC_VDD_AVAILABLE:1;
      uint64_t DCDC_V18P_AVAILABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_STATUS_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_N_COMP:1;
      uint64_t DCDC_P_COMP:1;
      uint64_t DCDC_N_COMP_N:1;
      uint64_t DCDC_N_COMP_P:1;
      uint64_t DCDC_P_COMP_N:1;
      uint64_t DCDC_P_COMP_P:1;
      uint64_t DCDC_PSW_STATE:1;
      uint64_t DCDC_NSW_STATE:1;
      uint64_t DCDC_V14_SW_STATE:1;
      uint64_t DCDC_V18_SW_STATE:1;
      uint64_t DCDC_VDD_SW_STATE:1;
      uint64_t DCDC_V18P_SW_STATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_STATUS_2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_I_LIM_VDD:5;
      uint64_t DCDC_I_LIM_V18P:5;
      uint64_t DCDC_LV_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_STATUS_3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_I_LIM_V14:5;
      uint64_t DCDC_I_LIM_V18:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_STATUS_4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_TRIM_N:6;
      uint64_t DCDC_V14_TRIM_P:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TRIM_0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V18_TRIM_N:6;
      uint64_t DCDC_V18_TRIM_P:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TRIM_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_VDD_TRIM_N:6;
      uint64_t DCDC_VDD_TRIM_P:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TRIM_2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V18P_TRIM_N:6;
      uint64_t DCDC_V18P_TRIM_P:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_TRIM_3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_TIMEOUT_IRQ_STATUS:1;
      uint64_t DCDC_V18_TIMEOUT_IRQ_STATUS:1;
      uint64_t DCDC_VDD_TIMEOUT_IRQ_STATUS:1;
      uint64_t DCDC_V18P_TIMEOUT_IRQ_STATUS:1;
      uint64_t DCDC_BROWN_OUT_IRQ_STATUS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_IRQ_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_TIMEOUT_IRQ_CLEAR:1;
      uint64_t DCDC_V18_TIMEOUT_IRQ_CLEAR:1;
      uint64_t DCDC_VDD_TIMEOUT_IRQ_CLEAR:1;
      uint64_t DCDC_V18P_TIMEOUT_IRQ_CLEAR:1;
      uint64_t DCDC_BROWN_OUT_IRQ_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_IRQ_CLEAR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCDC_V14_TIMEOUT_IRQ_MASK:1;
      uint64_t DCDC_V18_TIMEOUT_IRQ_MASK:1;
      uint64_t DCDC_VDD_TIMEOUT_IRQ_MASK:1;
      uint64_t DCDC_V18P_TIMEOUT_IRQ_MASK:1;
      uint64_t DCDC_BROWN_OUT_IRQ_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DCDC_IRQ_MASK_REG;

};

#define DCDC (*(volatile struct DCDC_tag *) 0x50000082)

struct DEM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t RXDATA_INV:1;
      uint64_t DEM_HSI_POL:1;
      uint64_t MATCH0101_TH:4;
      uint64_t EQUAL_EN:1;
      uint64_t BLE_DDC_EN:1;
      uint64_t IQCORR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DEM_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VGA2_GAIN0:3;
      uint64_t VGA1_GAIN0:3;
      uint64_t LNA_GAIN0:2;
      uint64_t VGA2_GAIN1:3;
      uint64_t VGA1_GAIN1:3;
      uint64_t LNA_GAIN1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_LUT_01_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VGA2_GAIN2:3;
      uint64_t VGA1_GAIN2:3;
      uint64_t LNA_GAIN2:2;
      uint64_t VGA2_GAIN3:3;
      uint64_t VGA1_GAIN3:3;
      uint64_t LNA_GAIN3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_LUT_23_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VGA2_GAIN4:3;
      uint64_t VGA1_GAIN4:3;
      uint64_t LNA_GAIN4:2;
      uint64_t VGA2_GAIN5:3;
      uint64_t VGA1_GAIN5:3;
      uint64_t LNA_GAIN5:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_LUT_45_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VGA2_GAIN6:3;
      uint64_t VGA1_GAIN6:3;
      uint64_t LNA_GAIN6:2;
      uint64_t VGA2_GAIN7:3;
      uint64_t VGA1_GAIN7:3;
      uint64_t LNA_GAIN7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_LUT_67_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VGA2_GAIN8:3;
      uint64_t VGA1_GAIN8:3;
      uint64_t LNA_GAIN8:2;
      uint64_t VGA2_GAIN9:3;
      uint64_t VGA1_GAIN9:3;
      uint64_t LNA_GAIN9:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_LUT_89_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AGC_TH_LOW:7;
      uint64_t AGC_TH_HIGH:7;
      uint64_t AGC_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSSI_TH:6;
      uint64_t EN_FRZ_GAIN:1;
      uint64_t AGCSETTING_SEL:1;
      uint64_t AGCSETTING_WR:4;
      uint64_t SLOW_AGC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AFC_MODE:4;
      uint64_t POLE1:2;
      uint64_t POLE2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AFC_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCOFFSET_I_WR:8;
      uint64_t DCOFFSET_Q_WR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DC_OFFSET_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCOFFSET_SEL:1;
      uint64_t DCPARCAL_EN:1;
      uint64_t DCPOLE:2;
      uint64_t DCNSTEP:3;
      uint64_t DCNGAIN:2;
      uint64_t DCPARCAL_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DC_OFFSET_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCBETA_I:8;
      uint64_t DCBETA_Q:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DC_OFFSET_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCAGCSETTING_FULL0:4;
      uint64_t DCAGCSETTING_FULL1:4;
      uint64_t DCAGCSETTING_FULL2:4;
      uint64_t DCAGCSETTING_FULL3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DC_OFFSET_CTRL4_REG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AFC_RD:8;
      uint64_t AGCSETTING_RD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_AGC_RESULT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSSI_PH_RD:6;
      uint64_t RSSI_AVG_RD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_RSSI_RESULT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DCOFFSET_I_RD:8;
      uint64_t DCOFFSET_Q_RD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DC_OFFSET_RESULT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSSI_COMP01:4;
      uint64_t RSSI_COMP10:4;
      uint64_t RSSI_COMP11:4;
      uint64_t RSSI_COMP00:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_RSSI_COMP_CTRL_REG;

  uint8_t res1[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CFE_BIAS:10;
      uint64_t CFE_MODE:2;
      uint64_t CFE_NSTEP:2;
      uint64_t CHSEL_FILT_MODE2:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CORRTH:6;
      uint64_t NORM_EN:1;
      uint64_t PD_MODE:1;
      uint64_t PD_NPEAK:3;
      uint64_t PD_NWIN:3;
      uint64_t PD_OFFSET:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIF:9;
      uint64_t FTDF_DDC_EN:1;
      uint64_t MATCH_FILT_EN:1;
      uint64_t TIMING_CORR_EN:1;
      uint64_t CHSEL_FILT_MODE1:2;
      uint64_t DS_OFFSET:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SFD0:4;
      uint64_t SFD1:4;
      uint64_t LQI_PREAMBLE_EN:1;
      uint64_t LQI_SYMBOL_EN:1;
      uint64_t LQI_CORRTH_EN:1;
      uint64_t LQI_SCALE:2;
      uint64_t FTDF_HSI_POL:1;
      uint64_t CCA_MODE:1;
      uint64_t SO_FTDF_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_CTRL4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KP_LF_PD:8;
      uint64_t KI_LF_PD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_LOOP_GAIN_PD_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KP_LF_DS:8;
      uint64_t KI_LF_DS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_LOOP_GAIN_DS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RSSITH:13;
      uint64_t FTDF_DDC_INV:1;
      uint64_t FSSS_CLEAR:1;
      uint64_t DS_OFFSET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_CTRL5_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COBI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_COBI_LOW_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COBI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_COBI_HIGH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DEM_TESTMODE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DEM_TESTMODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IQCORR_BETA:8;
      uint64_t IQCORR_ALPHA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DEM_IQCORRECT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PAD_POS_LIMIT:7;
      uint64_t PAD_NEG_LIMIT:7;
      uint64_t PAD_CLEAR_COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_PAD_CNT_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PAD_POS_CNT_RD:8;
      uint64_t PAD_NEG_CNT_RD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_PAD_CNT_RESULT_REG;

  uint8_t res2[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSSS_I_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FSSS_I_RESULT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSSS_Q_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FSSS_Q_RESULT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FSSS_MAG_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FSSS_MAG_RESULT_REG;

};

#define DEM (*(volatile struct DEM_tag *) 0x50002e00)

struct DMA_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA0_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA0_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA1_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA1_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA2_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA2_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA3_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA3_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA4_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA4_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA5_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA5_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA6_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA6_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_A_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_A_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_A_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_A_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_B_STARTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_B_STARTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_B_STARTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_B_STARTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_ON:1;
      uint64_t BW:2;
      uint64_t IRQ_ENABLE:1;
      uint64_t DREQ_MODE:1;
      uint64_t BINC:1;
      uint64_t AINC:1;
      uint64_t CIRCULAR:1;
      uint64_t DMA_PRIO:3;
      uint64_t DMA_IDLE:1;
      uint64_t DMA_INIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA7_IDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA7_IDX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA01_SEL:4;
      uint64_t DMA23_SEL:4;
      uint64_t DMA45_SEL:4;
      uint64_t DMA67_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA_REQ_MUX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_IRQ_CH0:1;
      uint64_t DMA_IRQ_CH1:1;
      uint64_t DMA_IRQ_CH2:1;
      uint64_t DMA_IRQ_CH3:1;
      uint64_t DMA_IRQ_CH4:1;
      uint64_t DMA_IRQ_CH5:1;
      uint64_t DMA_IRQ_CH6:1;
      uint64_t DMA_IRQ_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA_INT_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMA_RST_IRQ_CH0:1;
      uint64_t DMA_RST_IRQ_CH1:1;
      uint64_t DMA_RST_IRQ_CH2:1;
      uint64_t DMA_RST_IRQ_CH3:1;
      uint64_t DMA_RST_IRQ_CH4:1;
      uint64_t DMA_RST_IRQ_CH5:1;
      uint64_t DMA_RST_IRQ_CH6:1;
      uint64_t DMA_RST_IRQ_CH7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DMA_CLEAR_INT_REG;

};

#define DMA (*(volatile struct DMA_tag *) 0x50003500)

struct ECC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_OpPtrA:5;
      uint64_t reservedSpace0:3;
      uint64_t ECC_OpPtrB:5;
      uint64_t reservedSpace1:3;
      uint64_t ECC_OpPtrC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_CONFIG_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_TypeOperation:7;
      uint64_t ECC_Field:1;
      uint64_t ECC_SizeOfOperands:8;
      uint64_t reservedSpace0:13;
      uint64_t ECC_SignA:1;
      uint64_t ECC_SignB:1;
      uint64_t ECC_CalcR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_COMMAND_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_Start:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_CONTROL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_Fail_Address:4;
      uint64_t ECC_Point_Px_NotOnCurve:1;
      uint64_t ECC_Point_Px_AtInfinity:1;
      uint64_t ECC_Couple_NotValid:1;
      uint64_t ECC_Param_n_NotValid:1;
      uint64_t reservedSpace0:1;
      uint64_t ECC_Signature_NotValid:1;
      uint64_t ECC_Param_AB_NotValid:1;
      uint64_t ECC_NotInvertible:1;
      uint64_t ECC_PrimalityTestResult:1;
      uint64_t reservedSpace1:3;
      uint64_t ECC_Busy:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_STATUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_SVN:8;
      uint64_t ECC_HVN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_VERSION_REG;

};

#define ECC (*(volatile struct ECC_tag *) 0x50006000)

struct FTDF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FIFO_0_0_REG;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FIFO_1_0_REG;

  uint8_t res1[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FIFO_2_0_REG;

  uint8_t res2[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FIFO_3_0_REG;

  uint8_t res3[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_LENGTH:7;
      uint64_t PHYATTR_DEM_PTI:4;
      uint64_t PHYATTR_CN:4;
      uint64_t PHYATTR_CALCAP:4;
      uint64_t PHYATTR_RF_GPIO_PINS:3;
      uint64_t PHYATTR_HSI:1;
      uint64_t FRAMETYPE:3;
      uint64_t CSMACA_ENA:1;
      uint64_t reservedSpace0:1;
      uint64_t ACKREQUEST:1;
      uint64_t reservedSpace1:1;
      uint64_t CRC16_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_0_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_1_0_REG;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_LENGTH:7;
      uint64_t PHYATTR_DEM_PTI:4;
      uint64_t PHYATTR_CN:4;
      uint64_t PHYATTR_CALCAP:4;
      uint64_t PHYATTR_RF_GPIO_PINS:3;
      uint64_t PHYATTR_HSI:1;
      uint64_t FRAMETYPE:3;
      uint64_t CSMACA_ENA:1;
      uint64_t reservedSpace0:1;
      uint64_t ACKREQUEST:1;
      uint64_t reservedSpace1:1;
      uint64_t CRC16_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_0_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_1_1_REG;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_LENGTH:7;
      uint64_t PHYATTR_DEM_PTI:4;
      uint64_t PHYATTR_CN:4;
      uint64_t PHYATTR_CALCAP:4;
      uint64_t PHYATTR_RF_GPIO_PINS:3;
      uint64_t PHYATTR_HSI:1;
      uint64_t FRAMETYPE:3;
      uint64_t CSMACA_ENA:1;
      uint64_t reservedSpace0:1;
      uint64_t ACKREQUEST:1;
      uint64_t reservedSpace1:1;
      uint64_t CRC16_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_0_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_1_2_REG;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAME_LENGTH:7;
      uint64_t PHYATTR_DEM_PTI:4;
      uint64_t PHYATTR_CN:4;
      uint64_t PHYATTR_CALCAP:4;
      uint64_t PHYATTR_RF_GPIO_PINS:3;
      uint64_t PHYATTR_HSI:1;
      uint64_t FRAMETYPE:3;
      uint64_t CSMACA_ENA:1;
      uint64_t reservedSpace0:1;
      uint64_t ACKREQUEST:1;
      uint64_t reservedSpace1:1;
      uint64_t CRC16_ENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_0_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_META_DATA_1_3_REG;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_0_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFAIL:1;
      uint64_t CSMACAFAIL:1;
      uint64_t CSMACANRRETRIES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_1_0_REG;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_0_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFAIL:1;
      uint64_t CSMACAFAIL:1;
      uint64_t CSMACANRRETRIES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_1_1_REG;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_0_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFAIL:1;
      uint64_t CSMACAFAIL:1;
      uint64_t CSMACANRRETRIES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_1_2_REG;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_0_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACKFAIL:1;
      uint64_t CSMACAFAIL:1;
      uint64_t CSMACANRRETRIES:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_RETURN_STATUS_1_3_REG;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_0_REG;

  uint8_t res12[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_1_REG;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_2_REG;

  uint8_t res14[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_3_REG;

  uint8_t res15[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_4_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_4_REG;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_5_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_5_REG;

  uint8_t res17[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_6_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_6_REG;

  uint8_t res18[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_TIMESTAMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_0_7_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC16_ERROR:1;
      uint64_t reservedSpace0:1;
      uint64_t RES_FRM_TYPE_ERROR:1;
      uint64_t RES_FRM_VERSION_ERROR:1;
      uint64_t DPANID_ERROR:1;
      uint64_t DADDR_ERROR:1;
      uint64_t SPANID_ERROR:1;
      uint64_t ISPANID_COORD_ERROR:1;
      uint64_t QUALITY_INDICATOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_META_1_7_REG;

  uint8_t res19[32008];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_0_0_REG;

  uint8_t res20[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_1_0_REG;

  uint8_t res21[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_2_0_REG;

  uint8_t res22[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_3_0_REG;

  uint8_t res23[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_4_0_REG;

  uint8_t res24[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_5_0_REG;

  uint8_t res25[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_6_0_REG;

  uint8_t res26[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_FIFO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_FIFO_7_0_REG;

  uint8_t res27[31868];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REL_NAME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_REL_NAME_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REL_NAME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_REL_NAME_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REL_NAME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_REL_NAME_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REL_NAME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_REL_NAME_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUILDTIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_BUILDTIME_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUILDTIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_BUILDTIME_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUILDTIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_BUILDTIME_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUILDTIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_BUILDTIME_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ISPANCOORDINATOR:1;
      uint64_t RX_DMA_REQ:1;
      uint64_t TX_DMA_REQ:1;
      uint64_t reservedSpace1:4;
      uint64_t MACSIMPLEADDRESS:8;
      uint64_t reservedSpace2:1;
      uint64_t MACLEENABLED:1;
      uint64_t MACTSCHENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_GLOB_CONTROL_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACPANID:16;
      uint64_t MACSHORTADDRESS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_GLOB_CONTROL_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AEXTENDEDADDRESS_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_GLOB_CONTROL_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AEXTENDEDADDRESS_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_GLOB_CONTROL_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RXONDURATION:24;
      uint64_t RXALWAYSON:1;
      uint64_t reservedSpace1:1;
      uint64_t PTI:4;
      uint64_t KEEP_PHY_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXPIPEPROPDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TXPIPEPROPDELAY_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACACKWAITDURATION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACACKWAITDURATION_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACENHACKWAITDURATION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACENHACKWAITDURATION_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYRXATTR_DEM_PTI:4;
      uint64_t PHYRXATTR_CN:4;
      uint64_t PHYRXATTR_CALCAP:4;
      uint64_t PHYRXATTR_RF_GPIO_PINS:3;
      uint64_t PHYRXATTR_HSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDSCANENABLE:1;
      uint64_t reservedSpace0:7;
      uint64_t EDSCANDURATION:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACMAXFRAMETOTALWAITTIME:16;
      uint64_t CCAIDLEWAIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_3_REG;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GETGENERATORVAL:1;
      uint64_t RXENABLE:1;
      uint64_t SINGLECCA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_OS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LMACREADY4SLEEP:1;
      uint64_t CCASTAT:1;
      uint64_t reservedSpace1:3;
      uint64_t WAKEUPTIMERENABLESTATUS:1;
      uint64_t reservedSpace2:1;
      uint64_t EDSCANVALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_STATUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVENTCURRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_EVENTCURRVAL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMESTAMPCURRVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TIMESTAMPCURRVAL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYSLEEPWAIT:8;
      uint64_t RXPIPEPROPDELAY:8;
      uint64_t PHYACKATTR_DEM_PTI:4;
      uint64_t PHYACKATTR_CN:4;
      uint64_t PHYACKATTR_CALCAP:4;
      uint64_t PHYACKATTR_RF_GPIO_PINS:3;
      uint64_t PHYACKATTR_HSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_4_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACK_RESPONSE_DELAY:8;
      uint64_t CCASTATWAIT:4;
      uint64_t reservedSpace0:4;
      uint64_t PHYCSMACAATTR_DEM_PTI:4;
      uint64_t PHYCSMACAATTR_CN:4;
      uint64_t PHYCSMACAATTR_CALCAP:4;
      uint64_t PHYCSMACAATTR_RF_GPIO_PINS:3;
      uint64_t PHYCSMACAATTR_HSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_5_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIFSPERIOD:8;
      uint64_t SIFSPERIOD:8;
      uint64_t WUIFSPERIOD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_6_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACRXTOTALCYCLETIME:16;
      uint64_t MACDISCARXOFFTORZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_11_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LMACREADY4SLEEP_D:1;
      uint64_t SYNCTIMESTAMP_E:1;
      uint64_t SYMBOLTIMETHR_E:1;
      uint64_t SYMBOLTIME2THR_E:1;
      uint64_t GETGENERATORVAL_E:1;
      uint64_t WAKEUPTIMERENABLESTATUS_D:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_DELTA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMESTAMPCURRPHASEVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TIMESTAMPCURRPHASEVAL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACTSTXACKDELAYVAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACTSTXACKDELAYVAL_REG;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t LMACREADY4SLEEP_M:1;
      uint64_t SYNCTIMESTAMP_M:1;
      uint64_t SYMBOLTIMETHR_M:1;
      uint64_t SYMBOLTIME2THR_M:1;
      uint64_t GETGENERATORVAL_M:1;
      uint64_t WAKEUPTIMERENABLESTATUS_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_MASK_REG;

  uint8_t res30[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDSCANREADY_E:1;
      uint64_t CCASTAT_E:1;
      uint64_t RXTIMEREXPIRED_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_EVENT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDSCANREADY_M:1;
      uint64_t CCASTAT_M:1;
      uint64_t RXTIMEREXPIRED_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_MASK_REG;

  uint8_t res31[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMAC_MANUAL_MODE:1;
      uint64_t LMAC_MANUAL_PHY_EN:1;
      uint64_t LMAC_MANUAL_TX_EN:1;
      uint64_t LMAC_MANUAL_RX_EN:1;
      uint64_t LMAC_MANUAL_RX_PIPE_EN:1;
      uint64_t LMAC_MANUAL_ED_REQUEST:1;
      uint64_t LMAC_MANUAL_TX_FRM_NR:2;
      uint64_t LMAC_MANUAL_PTI:4;
      uint64_t reservedSpace0:4;
      uint64_t LMAC_MANUAL_PHY_ATTR_DEM_PTI:4;
      uint64_t LMAC_MANUAL_PHY_ATTR_CN:4;
      uint64_t LMAC_MANUAL_PHY_ATTR_CALCAP:4;
      uint64_t LMAC_MANUAL_PHY_ATTR_RF_GPIO_PINS:3;
      uint64_t LMAC_MANUAL_PHY_ATTR_HSI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_MANUAL_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMAC_MANUAL_TX_START:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_MANUAL_OS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMAC_MANUAL_CCA_STAT:1;
      uint64_t reservedSpace0:7;
      uint64_t LMAC_MANUAL_ED_STAT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_MANUAL_STATUS_REG;

  uint8_t res32[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACWUPERIOD:16;
      uint64_t MACCSLSAMPLEPERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_7_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACCSLSTARTSAMPLETIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_8_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACCSLDATAPERIOD:16;
      uint64_t MACCSLFRAMEPENDINGWAITT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_9_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACWURZCORRECTION:8;
      uint64_t reservedSpace0:8;
      uint64_t MACCSLMARGINRZ:4;
      uint64_t reservedSpace1:8;
      uint64_t MACRZZEROVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMAC_CONTROL_10_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SECTXRXN:1;
      uint64_t reservedSpace1:6;
      uint64_t SECENTRY:4;
      uint64_t reservedSpace2:4;
      uint64_t SECALENGTH:7;
      uint64_t reservedSpace3:1;
      uint64_t SECMLENGTH:7;
      uint64_t SECENCDECN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECURITY_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECAUTHFLAGS:8;
      uint64_t SECENCRFLAGS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECURITY_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECKEY_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECKEY_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECKEY_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECKEY_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECKEY_2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECKEY_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECKEY_3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECKEY_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECNONCE_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECNONCE_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECNONCE_1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECNONCE_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECNONCE_2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECNONCE_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECNONCE_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECNONCE_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECABORT:1;
      uint64_t SECSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECURITY_OS_REG;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECBUSY:1;
      uint64_t SECAUTHFAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECURITY_STATUS_REG;

  uint8_t res34[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECREADY_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECURITY_EVENT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECREADY_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SECURITY_EVENTMASK_REG;

  uint8_t res35[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACTSTXACKDELAY:16;
      uint64_t MACTSRXWAIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TSCH_CONTROL_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACTSRXTX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TSCH_CONTROL_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACTSRXACKDELAY:16;
      uint64_t MACTSACKWAIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TSCH_CONTROL_2_REG;

  uint8_t res36[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBITPOS_0:3;
      uint64_t reservedSpace0:1;
      uint64_t RXBITPOS_1:3;
      uint64_t reservedSpace1:1;
      uint64_t RXBITPOS_2:3;
      uint64_t reservedSpace2:1;
      uint64_t RXBITPOS_3:3;
      uint64_t reservedSpace3:1;
      uint64_t RXBITPOS_4:3;
      uint64_t reservedSpace4:1;
      uint64_t RXBITPOS_5:3;
      uint64_t reservedSpace5:1;
      uint64_t RXBITPOS_6:3;
      uint64_t reservedSpace6:1;
      uint64_t RXBITPOS_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_PHY_PARAMETERS_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBITPOS_0:3;
      uint64_t reservedSpace0:1;
      uint64_t TXBITPOS_1:3;
      uint64_t reservedSpace1:1;
      uint64_t TXBITPOS_2:3;
      uint64_t reservedSpace2:1;
      uint64_t TXBITPOS_3:3;
      uint64_t reservedSpace3:1;
      uint64_t TXBITPOS_4:3;
      uint64_t reservedSpace4:1;
      uint64_t TXBITPOS_5:3;
      uint64_t reservedSpace5:1;
      uint64_t TXBITPOS_6:3;
      uint64_t reservedSpace6:1;
      uint64_t TXBITPOS_7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_PHY_PARAMETERS_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYTXSTARTUP:8;
      uint64_t PHYTXLATENCY:8;
      uint64_t PHYTXFINISH:8;
      uint64_t PHYTRXWAIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_PHY_PARAMETERS_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PHYRXSTARTUP:8;
      uint64_t PHYRXLATENCY:8;
      uint64_t PHYENABLE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_PHY_PARAMETERS_3_REG;

  uint8_t res37[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGRXTRANSPARENTMODE:1;
      uint64_t RXBEACONONLY:1;
      uint64_t RXCOORDREALIGNONLY:1;
      uint64_t RX_READ_BUF_PTR:4;
      uint64_t DISRXFRMPENDINGCA:1;
      uint64_t DISRXACKREQUESTCA:1;
      uint64_t MACALWAYSPASSCRCERROR:1;
      uint64_t DISDATAREQUESTCA:1;
      uint64_t MACALWAYSPASSRESFRAMEVERSION:1;
      uint64_t MACALWAYSPASSWRONGDPANID:1;
      uint64_t MACALWAYSPASSWRONGDADDR:1;
      uint64_t MACALWAYSPASSBEACONWRONGPANID:1;
      uint64_t MACALWAYSPASSTOPANCOORDINATOR:1;
      uint64_t MACALWAYSPASSFRMTYPE:8;
      uint64_t MACALWAYSPASSWAKEUP:1;
      uint64_t MACPASSWAKEUP:1;
      uint64_t MACIMPLICITBROADCAST:1;
      uint64_t DISRXACKRECEIVEDCA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_CONTROL_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSOF_E:1;
      uint64_t RX_OVERFLOW_E:1;
      uint64_t RX_BUF_AVAIL_E:1;
      uint64_t RXBYTE_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_EVENT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXSOF_M:1;
      uint64_t RX_OVERFLOW_M:1;
      uint64_t RX_BUF_AVAIL_M:1;
      uint64_t RXBYTE_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_MASK_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BUFF_IS_FULL:1;
      uint64_t RX_WRITE_BUF_PTR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_STATUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYMBOLTIMESNAPSHOTVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SYMBOLTIMESNAPSHOTVAL_REG;

  uint8_t res38[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BUFF_IS_FULL_D:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_STATUS_DELTA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX_BUFF_IS_FULL_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_RX_STATUS_MASK_REG;

  uint8_t res39[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGTXTRANSPARENTMODE:1;
      uint64_t reservedSpace0:3;
      uint64_t MACMAXBE:4;
      uint64_t MACMINBE:4;
      uint64_t MACMAXCSMABACKOFFS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_CONTROL_0_REG;

  uint8_t res40[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTDF_CE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_FTDF_CE_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTDF_CM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_FTDF_CM_REG;

  uint8_t res41[172];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCTIMESTAMPTHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SYNCTIMESTAMPTHR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCTIMESTAMPVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SYNCTIMESTAMPVAL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SYNCTIMESTAMPENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TIMER_CONTROL_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACTXSTDACKFRMCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACTXSTDACKFRMCNT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACRXSTDACKFRMOKCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACRXSTDACKFRMOKCNT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACRXADDRFAILFRMCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACRXADDRFAILFRMCNT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACRXUNSUPFRMCNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACRXUNSUPFRMCNT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCTIMESTAMPPHASEVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SYNCTIMESTAMPPHASEVAL_REG;

  uint8_t res42[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACFCSERRORCOUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_MACFCSERRORCOUNT_REG;

  uint8_t res43[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LMACRESET_CONTROL:1;
      uint64_t LMACRESET_RX:1;
      uint64_t LMACRESET_TX:1;
      uint64_t LMACRESET_AHB:1;
      uint64_t LMACRESET_OREG:1;
      uint64_t reservedSpace0:1;
      uint64_t LMACRESET_TSTIM:1;
      uint64_t LMACRESET_SEC:1;
      uint64_t reservedSpace1:1;
      uint64_t LMACRESET_COUNT:1;
      uint64_t LMACRESET_TIMCTRL:1;
      uint64_t reservedSpace2:5;
      uint64_t LMACGLOBRESET_COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_LMACRESET_REG;

  uint8_t res44[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYMBOLTIMETHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SYMBOLTIMETHR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYMBOLTIME2THR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_SYMBOLTIME2THR_REG;

  uint8_t res45[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t DBG_RX_INPUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_DEBUGCONTROL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBYTE_E:1;
      uint64_t TX_LAST_SYMBOL_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TXBYTE_E_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBYTE_M:1;
      uint64_t TX_LAST_SYMBOL_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TXBYTE_M_REG;

  uint8_t res46[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_S_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_E_0_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_M_0_REG;

  uint8_t res47[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PRIORITY:4;
      uint64_t ISWAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_PRIORITY_0_REG;

  uint8_t res48[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_S_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_E_1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_M_1_REG;

  uint8_t res49[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PRIORITY:4;
      uint64_t ISWAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_PRIORITY_1_REG;

  uint8_t res50[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_S_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_E_2_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_M_2_REG;

  uint8_t res51[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PRIORITY:4;
      uint64_t ISWAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_PRIORITY_2_REG;

  uint8_t res52[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_S_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_E:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_E_3_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR_M:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_FLAG_CLEAR_M_3_REG;

  uint8_t res53[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_PRIORITY:4;
      uint64_t ISWAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_PRIORITY_3_REG;

  uint8_t res54[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_SET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_SET_OS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_FLAG_CLEAR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_TX_CLEAR_OS_REG;

  uint8_t res55[2936];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUPINTTHR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_WAKEUPINTTHR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUPTIMERENABLE:1;
      uint64_t WAKEUPENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTDF_WAKEUP_CONTROL_REG;

};

#define FTDF (*(volatile struct FTDF_tag *) 0x40080000)

struct GP_TIMERS_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t TIM0_CTRL:1;
      uint64_t TIM0_CLK_SEL:1;
      uint64_t TIM0_CLK_DIV:1;
      uint64_t PWM_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TIMER0_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TIM0_ON:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TIMER0_ON_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TIM0_M:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TIMER0_RELOAD_M_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TIM0_N:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TIMER0_RELOAD_N_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START_CYCLE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWM2_START_CYCLE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START_CYCLE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWM3_START_CYCLE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t START_CYCLE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWM4_START_CYCLE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t END_CYCLE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWM2_END_CYCLE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t END_CYCLE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWM3_END_CYCLE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t END_CYCLE:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PWM4_END_CYCLE;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FREQ:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRIPLE_PWM_FREQUENCY;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TRIPLE_PWM_ENABLE:1;
      uint64_t SW_PAUSE_EN:1;
      uint64_t HW_PAUSE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TRIPLE_PWM_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRTH_DIV:8;
      uint64_t BRTH_STEP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BREATH_CFG_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRTH_DUTY_MAX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BREATH_DUTY_MAX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRTH_DUTY_MIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BREATH_DUTY_MIN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BRTH_EN:1;
      uint64_t BRTH_PWM_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BREATH_CTRL_REG;

};

#define GP_TIMERS (*(volatile struct GP_TIMERS_tag *) 0x50003400)

struct GPADC_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_EN:1;
      uint64_t GP_ADC_START:1;
      uint64_t GP_ADC_CONT:1;
      uint64_t GP_ADC_CLK_SEL:1;
      uint64_t GP_ADC_INT:1;
      uint64_t GP_ADC_MINT:1;
      uint64_t GP_ADC_SE:1;
      uint64_t GP_ADC_MUTE:1;
      uint64_t GP_ADC_SEL:5;
      uint64_t GP_ADC_SIGN:1;
      uint64_t GP_ADC_CHOP:1;
      uint64_t GP_ADC_LDO_ZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_ATTN3X:1;
      uint64_t GP_ADC_IDYN:1;
      uint64_t GP_ADC_I20U:1;
      uint64_t GP_ADC_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t GP_ADC_CONV_NRS:3;
      uint64_t GP_ADC_SMPL_TIME:4;
      uint64_t GP_ADC_STORE_DEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_EN_DEL:8;
      uint64_t GP_ADC_INTERVAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_OFFP:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_OFFP_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_OFFN:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_OFFN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_CLR_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_CLEAR_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GP_ADC_VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_ADC_RESULT_REG;

};

#define GPADC (*(volatile struct GPADC_tag *) 0x50001900)

struct GPIO_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t P0_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P0_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P1_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P1_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2_DATA:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P2_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P3_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P3_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P4_DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P4_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P0_SET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P0_SET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P1_SET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P1_SET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2_SET:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P2_SET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P3_SET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P3_SET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P4_SET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P4_SET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P0_RESET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P0_RESET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P1_RESET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P1_RESET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2_RESET:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P2_RESET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P3_RESET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P3_RESET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P4_RESET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P4_RESET_DATA_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P00_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P01_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P02_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P03_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P04_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P05_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P06_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P07_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P10_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P11_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P12_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P13_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P14_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P15_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P16_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P17_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P20_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P21_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P22_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P23_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P24_MODE_REG;

  uint8_t res0[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P30_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P31_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P32_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P33_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P34_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P35_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P36_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P37_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P40_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P41_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P42_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P43_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P44_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P45_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P46_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PID:6;
      uint64_t reservedSpace0:2;
      uint64_t PUPD:2;
      uint64_t PPOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P47_MODE_REG;

  uint8_t res1[82];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t P0_OUT_CTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P0_PADPWR_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P1_OUT_CTRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P1_PADPWR_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P2_OUT_CTRL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P2_PADPWR_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P3_OUT_CTRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P3_PADPWR_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t P4_OUT_CTRL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) P4_PADPWR_CTRL_REG;

  uint8_t res2[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FUNC_CLOCK_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GPIO_CLK_SEL;

  uint8_t res3[14];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAM_BIST_CONFIG:2;
      uint64_t RAM_BIST_PATTERN:2;
      uint64_t ROMBIST_ENABLE:1;
      uint64_t RAMBIST_ENABLE:1;
      uint64_t SYSRAMBIST_ENABLE:1;
      uint64_t SHOW_BIST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) BIST_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SYSRAM_BIST_LINE_FAIL:1;
      uint64_t SYSRAM_BIST_FAIL:1;
      uint64_t SYSRAM_BIST_BUSY:1;
      uint64_t CTRAM_BIST_LINE_FAIL:1;
      uint64_t CTRAM_BIST_FAIL:1;
      uint64_t CTRAM_BIST_BUSY:1;
      uint64_t CDRAM_BIST_LINE_FAIL:1;
      uint64_t CDRAM_BIST_FAIL:1;
      uint64_t CDRAM_BIST_BUSY:1;
      uint64_t USBRAM_BIST_LINE_FAIL:1;
      uint64_t USBRAM_BIST_FAIL:1;
      uint64_t USBRAM_BIST_BUSY:1;
      uint64_t QSPIRAM_BIST_LINE_FAIL:1;
      uint64_t QSPIRAM_BIST_FAIL:1;
      uint64_t QSPIRAM_BIST_BUSY:1;
      uint64_t ROM_BIST_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RAMBIST_STATUS1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FTDF_TXRAM_BIST_LINE_FAIL:1;
      uint64_t FTDF_TXRAM_BIST_FAIL:1;
      uint64_t FTDF_TXRAM_BIST_BUSY:1;
      uint64_t FTDF_RXRAM_BIST_LINE_FAIL:1;
      uint64_t FTDF_RXRAM_BIST_FAIL:1;
      uint64_t FTDF_RXRAM_BIST_BUSY:1;
      uint64_t ECC_CODERAM_BIST_LINE_FAIL:1;
      uint64_t ECC_CODERAM_BIST_FAIL:1;
      uint64_t ECC_CODERAM_BIST_BUSY:1;
      uint64_t ECC_TCMRAM_BIST_LINE_FAIL:1;
      uint64_t ECC_TCMRAM_BIST_FAIL:1;
      uint64_t ECC_TCMRAM_BIST_BUSY:1;
      uint64_t CRYPTORAM_BIST_LINE_FAIL:1;
      uint64_t CRYPTORAM_BIST_FAIL:1;
      uint64_t CRYPTORAM_BIST_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RAMBIST_STATUS2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ROMBIST_RESULTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ROMBIST_RESULTL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ROMBIST_RESULTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ROMBIST_RESULTH_REG;

  uint8_t res4[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SHOW_CLOCKS:1;
      uint64_t ENABLE_RFPT:1;
      uint64_t SHOW_PLL_TEST_OUT:1;
      uint64_t SHOW_DCDC_TESTBUS:1;
      uint64_t XTAL16M_CAP_TEST_EN:1;
      uint64_t SHOW_IF_RO:1;
      uint64_t PLL_TST_MODE:1;
      uint64_t SHOW_TXDAC_MOD:1;
      uint64_t SHOW_PWR_TST_OUT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TEST_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ANA_TESTMUX_CTRL:4;
      uint64_t reservedSpace0:4;
      uint64_t RF_IN_TESTMUX_CTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TEST_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_TEST_OUT_SEL:6;
      uint64_t USBCOMP_TEST:1;
      uint64_t reservedSpace0:1;
      uint64_t RF_TEST_OUT_PARAM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TEST_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_TEST_IN_SEL:3;
      uint64_t reservedSpace0:5;
      uint64_t RF_TEST_IN_PARAM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TEST_CTRL4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TEST_BUS_TO_AVS:1;
      uint64_t TEST_LDO_1V4:1;
      uint64_t TEST_LDO_1V8_FLASH:1;
      uint64_t TEST_LDO_CORE:1;
      uint64_t TEST_LDO_1V8_PA:1;
      uint64_t TEST_LDO_ADC:1;
      uint64_t TEST_LDO_PLL:1;
      uint64_t TEST_BANDGAP_I_TEST:1;
      uint64_t TEST_SIMO_BUCK:1;
      uint64_t TEST_BOD_VREF_OUT:1;
      uint64_t TEST_BOD_VREF_IN:1;
      uint64_t TEST_I_DCDC_FILT:1;
      uint64_t TEST_VCONT_A:1;
      uint64_t TEST_VREF_1V2_A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) TEST_CTRL5_REG;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x50003000)

struct GPREG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t FRZ_WKUPTIM:1;
      uint64_t FRZ_SWTIM0:1;
      uint64_t FRZ_BLETIM:1;
      uint64_t FRZ_WDOG:1;
      uint64_t FRZ_USB:1;
      uint64_t FRZ_DMA:1;
      uint64_t FRZ_SWTIM1:1;
      uint64_t FRZ_SWTIM2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SET_FREEZE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FRZ_WKUPTIM:1;
      uint64_t FRZ_SWTIM0:1;
      uint64_t FRZ_BLETIM:1;
      uint64_t FRZ_WDOG:1;
      uint64_t FRZ_USB:1;
      uint64_t FRZ_DMA:1;
      uint64_t FRZ_SWTIM1:1;
      uint64_t FRZ_SWTIM2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RESET_FREEZE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DEBUGS_FREEZE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DEBUG_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAL_PHASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BLE_WAKEUP_REQ:1;
      uint64_t BLE_H2H_BRIDGE_BYPASS:1;
      uint64_t BLE_WAKEUP_LP_IRQ:1;
      uint64_t reservedSpace0:5;
      uint64_t BLE_DEEPSLDUR_MONITOR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) GP_CONTROL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ECC_BASE_ADDR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ECC_BASE_ADDR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LED1_SRC_SEL:1;
      uint64_t LED2_SRC_SEL:1;
      uint64_t LED3_SRC_SEL:1;
      uint64_t LED1_EN:1;
      uint64_t LED2_EN:1;
      uint64_t LED3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) LED_CONTROL_REG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLL_EN:1;
      uint64_t LDO_PLL_ENABLE:1;
      uint64_t LDO_PLL_VREF_HOLD:1;
      uint64_t reservedSpace0:5;
      uint64_t PLL_R_DIV:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLL_SYS_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLL_N_DIV:7;
      uint64_t reservedSpace0:5;
      uint64_t PLL_DEL_SEL:2;
      uint64_t PLL_SEL_MIN_CUR_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLL_SYS_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLL_ICP_SEL:5;
      uint64_t reservedSpace0:5;
      uint64_t PLL_START_DEL:5;
      uint64_t PLL_RECALIB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLL_SYS_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLL_LOCK_FINE:1;
      uint64_t LDO_PLL_OK:1;
      uint64_t reservedSpace0:3;
      uint64_t PLL_PLL_BEST_MIN_CUR:6;
      uint64_t PLL_CALIBR_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLL_SYS_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PLL_DIS_LOOPFILT:1;
      uint64_t PLL_MIN_CURRENT:6;
      uint64_t PLL_TEST_VCTR:1;
      uint64_t PLL_OPEN_LOOP:1;
      uint64_t PLL_CHANGE:1;
      uint64_t PLL_SEL_N_DIV_TEST:1;
      uint64_t PLL_SEL_R_DIV_TEST:1;
      uint64_t reservedSpace0:1;
      uint64_t PLL_LOCK_DET_RES_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PLL_SYS_TEST_REG;

};

#define GPREG (*(volatile struct GPREG_tag *) 0x50003300)

struct I2C_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2C_MASTER_MODE:1;
      uint64_t I2C_SPEED:2;
      uint64_t I2C_10BITADDR_SLAVE:1;
      uint64_t I2C_10BITADDR_MASTER:1;
      uint64_t I2C_RESTART_EN:1;
      uint64_t I2C_SLAVE_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CON_REG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_TAR:10;
      uint64_t GC_OR_START:1;
      uint64_t SPECIAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_TAR_REG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SAR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_SAR_REG;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IIC_HS_MAR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_HS_MADDR_REG;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DAT:8;
      uint64_t CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_DATA_CMD_REG;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SS_SCL_HCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_SS_SCL_HCNT_REG;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SS_SCL_LCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_SS_SCL_LCNT_REG;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_FS_SCL_HCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_FS_SCL_HCNT_REG;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_FS_SCL_LCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_FS_SCL_LCNT_REG;

  uint8_t res8[10];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t R_RX_UNDER:1;
      uint64_t R_RX_OVER:1;
      uint64_t R_RX_FULL:1;
      uint64_t R_TX_OVER:1;
      uint64_t R_TX_EMPTY:1;
      uint64_t R_RD_REQ:1;
      uint64_t R_TX_ABRT:1;
      uint64_t R_RX_DONE:1;
      uint64_t R_ACTIVITY:1;
      uint64_t R_STOP_DET:1;
      uint64_t R_START_DET:1;
      uint64_t R_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_INTR_STAT_REG;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M_RX_UNDER:1;
      uint64_t M_RX_OVER:1;
      uint64_t M_RX_FULL:1;
      uint64_t M_TX_OVER:1;
      uint64_t M_TX_EMPTY:1;
      uint64_t M_RD_REQ:1;
      uint64_t M_TX_ABRT:1;
      uint64_t M_RX_DONE:1;
      uint64_t M_ACTIVITY:1;
      uint64_t M_STOP_DET:1;
      uint64_t M_START_DET:1;
      uint64_t M_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_INTR_MASK_REG;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX_UNDER:1;
      uint64_t RX_OVER:1;
      uint64_t RX_FULL:1;
      uint64_t TX_OVER:1;
      uint64_t TX_EMPTY:1;
      uint64_t RD_REQ:1;
      uint64_t TX_ABRT:1;
      uint64_t RX_DONE:1;
      uint64_t ACTIVITY:1;
      uint64_t STOP_DET:1;
      uint64_t START_DET:1;
      uint64_t GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_RAW_INTR_STAT_REG;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX_TL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_RX_TL_REG;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX_TL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_TX_TL_REG;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_INTR_REG;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RX_UNDER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_RX_UNDER_REG;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RX_OVER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_RX_OVER_REG;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_TX_OVER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_TX_OVER_REG;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RD_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_RD_REQ_REG;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_TX_ABRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_TX_ABRT_REG;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RX_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_RX_DONE_REG;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_ACTIVITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_ACTIVITY_REG;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_ACTIVITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_STOP_DET_REG;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_START_DET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_START_DET_REG;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_CLR_GEN_CALL_REG;

  uint8_t res24[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTRL_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_ENABLE_REG;

  uint8_t res25[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2C_ACTIVITY:1;
      uint64_t TFNF:1;
      uint64_t TFE:1;
      uint64_t RFNE:1;
      uint64_t RFF:1;
      uint64_t MST_ACTIVITY:1;
      uint64_t SLV_ACTIVITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_STATUS_REG;

  uint8_t res26[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXFLR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_TXFLR_REG;

  uint8_t res27[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RXFLR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_RXFLR_REG;

  uint8_t res28[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SDA_HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_SDA_HOLD_REG;

  uint8_t res29[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ABRT_7B_ADDR_NOACK:1;
      uint64_t ABRT_10ADDR1_NOACK:1;
      uint64_t ABRT_10ADDR2_NOACK:1;
      uint64_t ABRT_TXDATA_NOACK:1;
      uint64_t ABRT_GCALL_NOACK:1;
      uint64_t ABRT_GCALL_READ:1;
      uint64_t ABRT_HS_ACKDET:1;
      uint64_t ABRT_SBYTE_ACKDET:1;
      uint64_t ABRT_HS_NORSTRT:1;
      uint64_t ABRT_SBYTE_NORSTRT:1;
      uint64_t ABRT_10B_RD_NORSTRT:1;
      uint64_t ABRT_MASTER_DIS:1;
      uint64_t ARB_LOST:1;
      uint64_t ABRT_SLVFLUSH_TXFIFO:1;
      uint64_t ABRT_SLV_ARBLOST:1;
      uint64_t ABRT_SLVRD_INTX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_TX_ABRT_SOURCE_REG;

  uint8_t res30[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDMAE:1;
      uint64_t TDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_DMA_CR_REG;

  uint8_t res31[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMATDL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_DMA_TDLR_REG;

  uint8_t res32[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMARDL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_DMA_RDLR_REG;

  uint8_t res33[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SDA_SETUP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_SDA_SETUP_REG;

  uint8_t res34[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACK_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_ACK_GENERAL_CALL_REG;

  uint8_t res35[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_EN:1;
      uint64_t SLV_DISABLED_WHILE_BUSY:1;
      uint64_t SLV_RX_DATA_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_ENABLE_STATUS_REG;

  uint8_t res36[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_FS_SPKLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_IC_FS_SPKLEN_REG;

  uint8_t res37[82];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_PARAM1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_COMP_PARAM1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_PARAM2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_COMP_PARAM2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_VERSION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_COMP_VERSION_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP2_VERSION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_COMP2_VERSION;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_TYPE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_COMP_TYPE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP2_TYPE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C_COMP_TYPE2_REG;

};

#define I2C (*(volatile struct I2C_tag *) 0x50001400)

struct I2C2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2C_MASTER_MODE:1;
      uint64_t I2C_SPEED:2;
      uint64_t I2C_10BITADDR_SLAVE:1;
      uint64_t I2C_10BITADDR_MASTER:1;
      uint64_t I2C_RESTART_EN:1;
      uint64_t I2C_SLAVE_DISABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CON_REG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_TAR:10;
      uint64_t GC_OR_START:1;
      uint64_t SPECIAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_TAR_REG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SAR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_SAR_REG;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IIC_HS_MAR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_HS_MADDR_REG;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DAT:8;
      uint64_t CMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_DATA_CMD_REG;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SS_SCL_HCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_SS_SCL_HCNT_REG;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SS_SCL_LCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_SS_SCL_LCNT_REG;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_FS_SCL_HCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_FS_SCL_HCNT_REG;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_FS_SCL_LCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_FS_SCL_LCNT_REG;

  uint8_t res8[10];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t R_RX_UNDER:1;
      uint64_t R_RX_OVER:1;
      uint64_t R_RX_FULL:1;
      uint64_t R_TX_OVER:1;
      uint64_t R_TX_EMPTY:1;
      uint64_t R_RD_REQ:1;
      uint64_t R_TX_ABRT:1;
      uint64_t R_RX_DONE:1;
      uint64_t R_ACTIVITY:1;
      uint64_t R_STOP_DET:1;
      uint64_t R_START_DET:1;
      uint64_t R_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_INTR_STAT_REG;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t M_RX_UNDER:1;
      uint64_t M_RX_OVER:1;
      uint64_t M_RX_FULL:1;
      uint64_t M_TX_OVER:1;
      uint64_t M_TX_EMPTY:1;
      uint64_t M_RD_REQ:1;
      uint64_t M_TX_ABRT:1;
      uint64_t M_RX_DONE:1;
      uint64_t M_ACTIVITY:1;
      uint64_t M_STOP_DET:1;
      uint64_t M_START_DET:1;
      uint64_t M_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_INTR_MASK_REG;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX_UNDER:1;
      uint64_t RX_OVER:1;
      uint64_t RX_FULL:1;
      uint64_t TX_OVER:1;
      uint64_t TX_EMPTY:1;
      uint64_t RD_REQ:1;
      uint64_t TX_ABRT:1;
      uint64_t RX_DONE:1;
      uint64_t ACTIVITY:1;
      uint64_t STOP_DET:1;
      uint64_t START_DET:1;
      uint64_t GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_RAW_INTR_STAT_REG;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX_TL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_RX_TL_REG;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RX_TL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_TX_TL_REG;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_INTR_REG;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RX_UNDER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_RX_UNDER_REG;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RX_OVER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_RX_OVER_REG;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_TX_OVER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_TX_OVER_REG;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RD_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_RD_REQ_REG;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_TX_ABRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_TX_ABRT_REG;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_RX_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_RX_DONE_REG;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_ACTIVITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_ACTIVITY_REG;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_ACTIVITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_STOP_DET_REG;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_START_DET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_START_DET_REG;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLR_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_CLR_GEN_CALL_REG;

  uint8_t res24[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTRL_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_ENABLE_REG;

  uint8_t res25[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t I2C_ACTIVITY:1;
      uint64_t TFNF:1;
      uint64_t TFE:1;
      uint64_t RFNE:1;
      uint64_t RFF:1;
      uint64_t MST_ACTIVITY:1;
      uint64_t SLV_ACTIVITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_STATUS_REG;

  uint8_t res26[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXFLR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_TXFLR_REG;

  uint8_t res27[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RXFLR:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_RXFLR_REG;

  uint8_t res28[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_SDA_HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_SDA_HOLD_REG;

  uint8_t res29[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ABRT_7B_ADDR_NOACK:1;
      uint64_t ABRT_10ADDR1_NOACK:1;
      uint64_t ABRT_10ADDR2_NOACK:1;
      uint64_t ABRT_TXDATA_NOACK:1;
      uint64_t ABRT_GCALL_NOACK:1;
      uint64_t ABRT_GCALL_READ:1;
      uint64_t ABRT_HS_ACKDET:1;
      uint64_t ABRT_SBYTE_ACKDET:1;
      uint64_t ABRT_HS_NORSTRT:1;
      uint64_t ABRT_SBYTE_NORSTRT:1;
      uint64_t ABRT_10B_RD_NORSTRT:1;
      uint64_t ABRT_MASTER_DIS:1;
      uint64_t ARB_LOST:1;
      uint64_t ABRT_SLVFLUSH_TXFIFO:1;
      uint64_t ABRT_SLV_ARBLOST:1;
      uint64_t ABRT_SLVRD_INTX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_TX_ABRT_SOURCE_REG;

  uint8_t res30[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RDMAE:1;
      uint64_t TDMAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_DMA_CR_REG;

  uint8_t res31[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMATDL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_DMA_TDLR_REG;

  uint8_t res32[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMARDL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_DMA_RDLR_REG;

  uint8_t res33[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SDA_SETUP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_SDA_SETUP_REG;

  uint8_t res34[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ACK_GEN_CALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_ACK_GENERAL_CALL_REG;

  uint8_t res35[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_EN:1;
      uint64_t SLV_DISABLED_WHILE_BUSY:1;
      uint64_t SLV_RX_DATA_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_ENABLE_STATUS_REG;

  uint8_t res36[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_FS_SPKLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_IC_FS_SPKLEN_REG;

  uint8_t res37[82];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_PARAM1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_COMP_PARAM1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_PARAM2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_COMP_PARAM2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_VERSION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_COMP_VERSION_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP2_VERSION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_COMP2_VERSION;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP_TYPE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_COMP_TYPE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IC_COMP2_TYPE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2C2_COMP_TYPE2_REG;

};

#define I2C2 (*(volatile struct I2C2_tag *) 0x50001500)

struct IR_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_FREQ_CARRIER_ON:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_FREQ_CARRIER_ON_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_FREQ_CARRIER_OFF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_FREQ_CARRIER_OFF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_LOGIC_ONE_SPACE:8;
      uint64_t IR_LOGIC_ONE_MARK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_LOGIC_ONE_TIME_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_LOGIC_ZERO_SPACE:8;
      uint64_t IR_LOGIC_ZERO_MARK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_LOGIC_ZERO_TIME_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_CODE_FIFO_RESET:1;
      uint64_t IR_REP_FIFO_RESET:1;
      uint64_t IR_ENABLE:1;
      uint64_t IR_TX_START:1;
      uint64_t IR_REPEAT_TYPE:1;
      uint64_t IR_INVERT_OUTPUT:1;
      uint64_t IR_LOGIC_ZERO_FORMAT:1;
      uint64_t IR_LOGIC_ONE_FORMAT:1;
      uint64_t IR_IRQ_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_CODE_FIFO_WRDS:6;
      uint64_t IR_REP_FIFO_WRDS:4;
      uint64_t IR_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_REPEAT_TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_REPEAT_TIME_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_CODE_FIFO_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_MAIN_FIFO_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_REPEAT_FIFO_DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_REPEAT_FIFO_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IR_IRQ_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) IR_IRQ_STATUS_REG;

};

#define IR (*(volatile struct IR_tag *) 0x50001700)

struct KBSCAN_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_EN:1;
      uint64_t KBSCN_IRQ_MESSAGE_MASK:1;
      uint64_t KBSCN_IRQ_INACTIVE_MASK:1;
      uint64_t KBSCN_IRQ_FIFO_MASK:1;
      uint64_t KBSCN_INACTIVE_TIME:7;
      uint64_t KBSCN_INACTIVE_EN:1;
      uint64_t KBSCN_CLKDIV:2;
      uint64_t KBSCN_RESET_FIFO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_ROW_ACTIVE_TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MATRIX_ROW:4;
      uint64_t KBSCN_MATRIX_COLUMN:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_MATRIX_SIZE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_DEBOUNCE_RELEASE_TIME:6;
      uint64_t KBSCN_DEBOUNCE_PRESS_TIME:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_DEBOUNCE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MES_IRQ_STATUS:1;
      uint64_t KBSCN_INACTIVE_IRQ_STATUS:1;
      uint64_t KBSCN_NUM_MESSAGE:5;
      uint64_t KBSCN_FIFO_OVERFL:1;
      uint64_t KBSCN_FIFO_UNDERFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_KEYID_ROW:4;
      uint64_t KBSCN_KEYID_COLUMN:5;
      uint64_t KBSCN_KEY_STATE:1;
      uint64_t KBSCN_LAST_ENTRY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_MESSAGE_KEY_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P00_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P01_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P02_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P03_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P04_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P05_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P06_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P07_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P10_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P11_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P12_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P13_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P14_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P15_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P16_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P17_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P20_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P21_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P22_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P23_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P24_MODE_REG;

  uint8_t res0[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P30_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P31_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P32_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P33_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P34_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P35_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P36_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P37_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P40_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P41_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P42_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P43_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P44_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P45_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P46_MODE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KBSCN_MODE:5;
      uint64_t KBSCN_ROW:1;
      uint64_t KBSCN_GPIO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) KBSCN_P47_MODE_REG;

};

#define KBSCAN (*(volatile struct KBSCAN_tag *) 0x50001600)

struct OTPC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_MODE_MODE:3;
      uint64_t reservedSpace0:1;
      uint64_t OTPC_MODE_USE_DMA:1;
      uint64_t OTPC_MODE_FIFO_FLUSH:1;
      uint64_t OTPC_MODE_ERR_RESP_DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t OTPC_MODE_USE_SP_ROWS:1;
      uint64_t OTPC_MODE_RLD_RR_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_MODE_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_PCTRL_WADDR:13;
      uint64_t reservedSpace0:1;
      uint64_t OTPC_PCTRL_PRETRY:1;
      uint64_t OTPC_PCTRL_PSTART:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_PCTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_STAT_PRDY:1;
      uint64_t OTPC_STAT_PERR_UNC:1;
      uint64_t OTPC_STAT_PERR_COR:1;
      uint64_t OTPC_STAT_PZERO:1;
      uint64_t OTPC_STAT_TRDY:1;
      uint64_t OTPC_STAT_TERROR:1;
      uint64_t OTPC_STAT_ARDY:1;
      uint64_t OTPC_STAT_RERROR:1;
      uint64_t OTPC_STAT_FWORDS:4;
      uint64_t reservedSpace0:4;
      uint64_t OTPC_STAT_NWORDS:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_STAT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t OTPC_AHBADR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_AHBADR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_CELADR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_CELADR_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_NWORDS:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_NWORDS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_FFPRT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_FFPRT_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_FFRD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_FFRD_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_PWORDL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_PWORDL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_PWORDH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_PWORDH_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_TIM1_CC_T_CADX:8;
      uint64_t OTPC_TIM1_CC_T_PW:8;
      uint64_t OTPC_TIM1_CC_T_1US:6;
      uint64_t OTPC_TIM1_CC_T_500NS:5;
      uint64_t OTPC_TIM1_CC_T_200NS:4;
      uint64_t OTPC_TIM1_CC_T_25NS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_TIM1_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OTPC_TIM2_CC_STBY_THR:10;
      uint64_t reservedSpace0:6;
      uint64_t OTPC_TIM2_CC_T_BCHK:7;
      uint64_t OTPC_TIM2_RDENL_PROT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTPC_TIM2_REG;

};

#define OTPC (*(volatile struct OTPC_tag *) 0x7f40000)

struct PATCH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_VALID:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_VALID_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_VALID:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_VALID_SET_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_VALID:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_VALID_RESET_REG;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR0_REG;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR1_REG;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR2_REG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR3_REG;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR4_REG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR5_REG;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR6_REG;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR7_REG;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR8_REG;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR9_REG;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR10_REG;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR11_REG;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR12_REG;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR13_REG;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR14_REG;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR15_REG;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR16_REG;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR17_REG;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR18_REG;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PATCH_ADDR_C:16;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR19_REG;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR20_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA20_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR21_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA21_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR22_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA22_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR23_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA23_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR24_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA24_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR25_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA25_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR26_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA26_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PATCH_ADDR_D:15;
      uint64_t reservedSpace1:2;
      uint64_t PATCH_ADDR_19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_ADDR27_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PATCH_DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATCH_DATA27_REG;

};

#define PATCH (*(volatile struct PATCH_tag *) 0x40050000)

struct PLLDIG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANNEL_ZERO:12;
      uint64_t SGN:1;
      uint64_t CS:1;
      uint64_t PLL_HSI_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_CTRL1_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CHANNEL_ZERO:12;
      uint64_t SGN:1;
      uint64_t CS:1;
      uint64_t PLL_HSI_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_CTRL1_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SD_ORDER_RX:2;
      uint64_t SD_ORDER_TX:2;
      uint64_t MODINDEX:2;
      uint64_t DELAY:2;
      uint64_t GAUSS_INV:1;
      uint64_t GAUSS_86:1;
      uint64_t TXDATA_INV:1;
      uint64_t EO_PACKET_DIS:1;
      uint64_t BT_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_CTRL2_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SD_ORDER_RX:2;
      uint64_t SD_ORDER_TX:2;
      uint64_t reservedSpace0:2;
      uint64_t DELAY:2;
      uint64_t FTDF_MODINDEX:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_CTRL2_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MODVAL_WR:14;
      uint64_t MODVAL_SEL:1;
      uint64_t ZIF_MODE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VCO_FREQTRIM_WR:4;
      uint64_t VCO_FREQTRIM_SEL:2;
      uint64_t VCOCAL_PERIOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_VCOCAL_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GAUSS_GAIN_WR:8;
      uint64_t GAUSS_GAIN_SEL:1;
      uint64_t BLE_TESTPAT_GEN:1;
      uint64_t MGAIN_CMP_INV:1;
      uint64_t MGAIN_AVER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_CTRL_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_GAIN_WR:6;
      uint64_t MSK_GAIN_SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t MSK_GAIN_OFFSET:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_CTRL_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_TRANSMIT_LENGTH:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VCO_CALCAP_BIT14:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_VCO_CALCAP_BIT14_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VCO_CALCAP_BIT15:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_VCO_CALCAP_BIT15_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CN_WR:6;
      uint64_t HSI_WR:1;
      uint64_t CN_SEL:1;
      uint64_t HSI_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_BMCW_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t KMOD_ALPHA_BLE:6;
      uint64_t KMOD_ALPHA_FTDF:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_KMOD_ALPHA_REG;

  uint8_t res0[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GAUSS_GAIN_CAL_RD:8;
      uint64_t VCO_FREQTRIM_RD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_RESULT_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_GAIN_CAL_RD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_RESULT_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t GAUSS_GAIN_RD:8;
      uint64_t CN_CAL_RD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_RESULT2_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_GAIN_LOWER_RD:6;
      uint64_t MSK_GAIN_UPPER_RD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_RESULT2_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CN_CAL_FTDF_RD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SYNTH_RESULT3_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VCO_CALCAP_LOW:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALCAP1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VCO_CALCAP_HIGH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALCAP2_REG;

  uint8_t res1[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FTDF_PHYATTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_FTDF_PHYATTR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MDSTATE_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALTRIM_STEP1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MDSTATE_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALTRIM_STEP2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MDSTATE_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALTRIM_STEP3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MDSTATE_RD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALTRIM_STEP4_REG;

  uint8_t res2[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_DAC_DELAY:2;
      uint64_t INV_DAC_POL:1;
      uint64_t INV_SDM_POL:1;
      uint64_t DISABLE_DAC:1;
      uint64_t DISABLE_SDM:1;
      uint64_t TX_MOD_FROM_GPIO:1;
      uint64_t MSK_BYPASS_PHASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MSKMOD_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_DATA:4;
      uint64_t TX_VALID:1;
      uint64_t MSK_TX_SEL:1;
      uint64_t MSK_ALW_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MSKMOD_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_CHIPL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MSKMOD_CHIPL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MSK_CHIPH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MSKMOD_CHIPH_REG;

  uint8_t res3[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL5_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGAIN_COMP_VAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGAIN_COMP_VAL6_REG;

};

#define PLLDIG (*(volatile struct PLLDIG_tag *) 0x50002d00)

struct QSPIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_SET_SINGLE:1;
      uint64_t QSPIC_SET_DUAL:1;
      uint64_t QSPIC_SET_QUAD:1;
      uint64_t QSPIC_EN_CS:1;
      uint64_t QSPIC_DIS_CS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_CTRLBUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_AUTO_MD:1;
      uint64_t QSPIC_CLK_MD:1;
      uint64_t QSPIC_IO2_OEN:1;
      uint64_t QSPIC_IO3_OEN:1;
      uint64_t QSPIC_IO2_DAT:1;
      uint64_t QSPIC_IO3_DAT:1;
      uint64_t QSPIC_HRDY_MD:1;
      uint64_t QSPIC_RXD_NEG:1;
      uint64_t QSPIC_RPIPE_EN:1;
      uint64_t QSPIC_PCLK_MD:3;
      uint64_t QSPIC_FORCENSEQ_EN:1;
      uint64_t QSPIC_USE_32BA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_CTRLMODE_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_RECVDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_RECVDATA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_INST:8;
      uint64_t QSPIC_INST_WB:8;
      uint64_t QSPIC_EXT_BYTE:8;
      uint64_t QSPIC_INST_TX_MD:2;
      uint64_t QSPIC_ADR_TX_MD:2;
      uint64_t QSPIC_EXT_TX_MD:2;
      uint64_t QSPIC_DMY_TX_MD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_BURSTCMDA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_DAT_RX_MD:2;
      uint64_t QSPIC_EXT_BYTE_EN:1;
      uint64_t QSPIC_EXT_HF_DS:1;
      uint64_t QSPIC_DMY_NUM:2;
      uint64_t QSPIC_INST_MD:1;
      uint64_t QSPIC_WRAP_MD:1;
      uint64_t QSPIC_WRAP_LEN:2;
      uint64_t QSPIC_WRAP_SIZE:2;
      uint64_t QSPIC_CS_HIGH_MIN:3;
      uint64_t QSPIC_DMY_FORCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_BURSTCMDB_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_STATUS_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_WRITEDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_WRITEDATA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_READDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_READDATA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_DUMMYDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_DUMMYDATA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t QSPIC_ERS_ADDR:20;
      uint64_t QSPIC_ERASE_EN:1;
      uint64_t QSPIC_ERS_STATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_ERASECTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_ERS_INST:8;
      uint64_t QSPIC_WEN_INST:8;
      uint64_t QSPIC_SUS_INST:8;
      uint64_t QSPIC_RES_INST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_ERASECMDA_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_ERS_TX_MD:2;
      uint64_t QSPIC_WEN_TX_MD:2;
      uint64_t QSPIC_SUS_TX_MD:2;
      uint64_t QSPIC_RES_TX_MD:2;
      uint64_t QSPIC_EAD_TX_MD:2;
      uint64_t QSPIC_ERS_CS_HI:5;
      uint64_t reservedSpace0:1;
      uint64_t QSPIC_ERSRES_HLD:4;
      uint64_t reservedSpace1:4;
      uint64_t QSPIC_RESSUS_DLY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_ERASECMDB_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_BRK_WRD:16;
      uint64_t QSPIC_BRK_EN:1;
      uint64_t QSPIC_BRK_SZ:1;
      uint64_t QSPIC_BRK_TX_MD:2;
      uint64_t QSPIC_SEC_HF_DS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_BURSTBRK_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_RSTAT_INST:8;
      uint64_t QSPIC_RSTAT_TX_MD:2;
      uint64_t QSPIC_RSTAT_RX_MD:2;
      uint64_t QSPIC_BUSY_POS:3;
      uint64_t QSPIC_BUSY_VAL:1;
      uint64_t QSPIC_RESSTS_DLY:6;
      uint64_t QSPIC_STSDLY_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_STATUSCMD_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_CHCKERASE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_CHCKERASE_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t QSPIC_PADS_DRV:2;
      uint64_t QSPIC_PADS_SLEW:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_GP_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPIC_UCODE_X:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSPIC_UCODE_START;

};

#define QSPIC (*(volatile struct QSPIC_tag *) 0xc000000)

struct QUAD_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t QD_IRQ_MASK:1;
      uint64_t QD_IRQ_CLR:1;
      uint64_t QD_IRQ_STATUS:1;
      uint64_t QD_IRQ_THRES:7;
      uint64_t CHX_PORT_EN:1;
      uint64_t CHY_PORT_EN:1;
      uint64_t CHZ_PORT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QDEC_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t X_counter:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QDEC_XCNT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t Y_counter:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QDEC_YCNT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t Z_counter:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QDEC_ZCNT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t clock_divider:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) QDEC_CLOCKDIV_REG;

};

#define QUAD (*(volatile struct QUAD_tag *) 0x50001a00)

struct RFCU_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_EN_OVR:2;
      uint64_t RX_EN_OVR:2;
      uint64_t RF_MODE_OVR:2;
      uint64_t IFF_FTDF_OVR:2;
      uint64_t MIX_FTDF_OVR:2;
      uint64_t TXDAC_SEL:2;
      uint64_t GAUSS_DAC_SEL:2;
      uint64_t CN_FTDF_TIMES2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_OVERRULE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIAGIRQ_MASK_0:1;
      uint64_t DIAGIRQ_WSEL_0:2;
      uint64_t DIAGIRQ_BSEL_0:3;
      uint64_t DIAGIRQ_EDGE_0:1;
      uint64_t reservedSpace0:1;
      uint64_t DIAGIRQ_MASK_1:1;
      uint64_t DIAGIRQ_WSEL_1:2;
      uint64_t DIAGIRQ_BSEL_1:3;
      uint64_t DIAGIRQ_EDGE_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DIAGIRQ01_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIAGIRQ_MASK_2:1;
      uint64_t DIAGIRQ_WSEL_2:2;
      uint64_t DIAGIRQ_BSEL_2:3;
      uint64_t DIAGIRQ_EDGE_2:1;
      uint64_t reservedSpace0:1;
      uint64_t DIAGIRQ_MASK_3:1;
      uint64_t DIAGIRQ_WSEL_3:2;
      uint64_t DIAGIRQ_BSEL_3:3;
      uint64_t DIAGIRQ_EDGE_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DIAGIRQ23_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIAGIRQ_STAT_0:1;
      uint64_t DIAGIRQ_STAT_1:1;
      uint64_t DIAGIRQ_STAT_2:1;
      uint64_t DIAGIRQ_STAT_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DIAGIRQ_STAT_REG;

  uint8_t res0[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CALSTATE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CALSTATE_REG;

  uint8_t res1[30];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LF_RES:4;
      uint64_t CP_CUR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SCAN_FEEDBACK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT_RO:6;
      uint64_t CNT_CLK:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_REF_OSC_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT_RO:6;
      uint64_t CNT_CLK:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_REF_OSC_FTDF_REG;

  uint8_t res2[10];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SO_CAL:1;
      uint64_t EO_CAL:1;
      uint64_t MGAIN_CAL_DIS:1;
      uint64_t IFF_CAL_DIS:1;
      uint64_t DC_OFFSET_CAL_DIS:1;
      uint64_t VCO_CAL_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CAL_CTRL_REG;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EO_CAL_CLEAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IRQ_CTRL_REG;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADC_OFFP_I_RD:8;
      uint64_t ADC_OFFN_I_RD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ADCI_DC_OFFSET_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADC_OFFP_Q_RD:8;
      uint64_t ADC_OFFN_Q_RD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ADCQ_DC_OFFSET_REG;

  uint8_t res5[36];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_XTAL_RFCLK_TEST:1;
      uint64_t RF_XTAL_PLL_DXTAL16_TEST:1;
      uint64_t RF_VTUNE_TO_ADC_TEST_EN:1;
      uint64_t reservedSpace0:4;
      uint64_t RFCU_TXRX_EN_OLD:1;
      uint64_t VCO_AMPL_SET_TX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SPARE1_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_XTAL_RFCLK_TEST:1;
      uint64_t RF_XTAL_PLL_DXTAL16_TEST:1;
      uint64_t RF_VTUNE_TO_ADC_TEST_EN:1;
      uint64_t reservedSpace0:8;
      uint64_t DEM_AFC_ACTIVATION_MODE:1;
      uint64_t VCO_COARSECAL_DELAY:2;
      uint64_t DEM_PAD_WRAP:1;
      uint64_t DEM_PAD_SAT_TO_ZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_SPARE1_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MIX_BIAS_BLE_SET:4;
      uint64_t CP_BIAS_BLE_SET:4;
      uint64_t VCO_BIAS_BLE_SET:4;
      uint64_t IFF_BIAS_BLE_SET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_BIAS_CTRL1_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MIX_BIAS_FTDF_SET:4;
      uint64_t CP_BIAS_FTDF_SET:4;
      uint64_t VCO_BIAS_FTDF_SET:4;
      uint64_t IFF_BIAS_FTDF_SET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_BIAS_CTRL1_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP:5;
      uint64_t IF_MUTE:1;
      uint64_t IFF_DCOC_DAC_DIS:1;
      uint64_t RO_TO_PINS:1;
      uint64_t IF_SEL_SET2_GT:4;
      uint64_t IF_SELECT_FSM:1;
      uint64_t IFF_COMPLEX_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADC_DC_OFFSET_SEL:1;
      uint64_t reservedSpace0:12;
      uint64_t ADC_MUTE:1;
      uint64_t ADC_SIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ADC_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADC_OFFP_I_WR:8;
      uint64_t ADC_OFFN_I_WR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ADC_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ADC_OFFP_Q_WR:8;
      uint64_t ADC_OFFN_Q_WR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ADC_CTRL3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t PA_RAMPSPEED:2;
      uint64_t reservedSpace1:4;
      uint64_t LEVEL_LDO_RFPA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_PA_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MGC_GAIN_SET:1;
      uint64_t MGC_POLE_SW:1;
      uint64_t GAUSS_DAC_CTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MGC_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TUNE_VAR_V0:3;
      uint64_t TUNE_VAR_V1:3;
      uint64_t TUNE_VAR_V2:3;
      uint64_t TUNE_VAR_V3:3;
      uint64_t MOD_VAR_V0:2;
      uint64_t MOD_VAR_V1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_VCOVAR_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIXED_CUR_SET:2;
      uint64_t FIXED_CUR_EN:1;
      uint64_t PFD_POLARITY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_PFD_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CP_CUR_SET_BLE_RX:4;
      uint64_t CP_CUR_SET_BLE_TX:4;
      uint64_t CP_CUR_BLE_RX:4;
      uint64_t CP_CUR_BLE_TX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CP_CTRL_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CP_CUR_SET_FTDF_RX:4;
      uint64_t CP_CUR_SET_FTDF_TX:4;
      uint64_t CP_CUR_FTDF_RX:4;
      uint64_t CP_CUR_FTDF_TX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CP_CTRL_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LF_RES_SET_BLE_RX:4;
      uint64_t LF_RES_SET_BLE_TX:4;
      uint64_t LF_RES_BLE_RX:4;
      uint64_t LF_RES_BLE_TX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LF_RES_CTRL_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LF_RES_SET_FTDF_RX:4;
      uint64_t LF_RES_SET_FTDF_TX:4;
      uint64_t LF_RES_FTDF_RX:4;
      uint64_t LF_RES_FTDF_TX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LF_RES_CTRL_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MIX_TRIM_GMBIAS_BLE:4;
      uint64_t MIX_TRIM_IBIAS_BLE:4;
      uint64_t MIX_TRIM_VCM_BLE:4;
      uint64_t MIX_SPARE_BLE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MIXER_CTRL1_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MIX_TRIM_GMBIAS_FTDF:4;
      uint64_t MIX_TRIM_IBIAS_FTDF:4;
      uint64_t MIX_TRIM_VCM_FTDF:4;
      uint64_t MIX_SPARE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MIXER_CTRL1_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MIX_CAL_CAP_WR:5;
      uint64_t MIX_CAL_SELECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MIXER_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LF_CAL_CAP_WR:5;
      uint64_t LF_CAL_CAP_SEL:1;
      uint64_t LF_SHORT_R4_BLE:1;
      uint64_t LF_SHORT_R4_FTDF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LF_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTRL_FAST:4;
      uint64_t CTRL_SLOW:4;
      uint64_t CAL_PH_1:1;
      uint64_t CAL_PH_2:1;
      uint64_t REF_CTRL:2;
      uint64_t TDC_CONNECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TDC_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFIO_TRIM1_CAP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IO_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LNA_TRIM_CD_LF:6;
      uint64_t LNA_TRIM_CD_HF:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LNA_CTRL1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LNA_TRIM_GM_HI:6;
      uint64_t LNA_TRIM_GM_LO:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LNA_CTRL2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LNA_TRIM_CGS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LNA_CTRL3_REG;

  uint8_t res6[14];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_POWER_SET:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_5_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_7_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TX_PWR_RF_IO_CTRL1_REG:2;
      uint64_t TX_PWR_RF_PA_CTRL_REG:4;
      uint64_t TX_PWR_RF_LNA_CTRL3_REG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_6_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_TX_PWR_LUT_RD:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TX_PWR_LUT_RD_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIV2_OFFN_TRIM_RX:4;
      uint64_t DIV2_OFFP_TRIM_RX:4;
      uint64_t DIV2_IQ_TRIM_RX_SPARE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DIV_IQ_RX_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DIV2_OFFN_TRIM_TX:4;
      uint64_t DIV2_OFFP_TRIM_TX:4;
      uint64_t DIV2_IQ_TRIM_TX_SPARE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_DIV_IQ_TX_REG;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_LO_IQ_TRIM:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LO_IQ_TRIM_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TXDAC_CAP_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_TXDAC_CTRL_REG;

  uint8_t res8[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP_RD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_RESULT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP_WR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_CC_BLE_SET1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP_WR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_CC_BLE_SET2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP_WR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_CC_FTDF_SET1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP_WR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_CC_FTDF_SET2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IF_CAL_CAP_RD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_IFF_CAL_CAP_STAT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MIX_CAL_CAP_RD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_MIX_CAL_CAP_STAT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LF_CAL_CAP_RD:5;
      uint64_t LF_SHORT_R4_RD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_LF_CAL_CAP_STAT_REG;

};

#define RFCU (*(volatile struct RFCU_tag *) 0x50002010)

struct RFCU_POWER_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_ldo_en_ble_dcf_rx:5;
      uint64_t lna_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG0_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_core_en_ble_dcf_rx:5;
      uint64_t lna_core_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG1_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_cgm_en_ble_dcf_rx:5;
      uint64_t lna_cgm_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG2_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t mix_ldo_en_ble_dcf_rx:5;
      uint64_t mix_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG3_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iff_ldo_en_ble_dcf_rx:5;
      uint64_t iff_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG4_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iffadc_ldo_en_ble_dcf_rx:5;
      uint64_t iffadc_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG5_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_ldo_en_ble_dcf_rx:5;
      uint64_t vco_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG6_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t md_ldo_en_ble_dcf_rx:5;
      uint64_t md_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG7_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pfd_ldo_en_ble_dcf_rx:5;
      uint64_t pfd_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG8_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pa_ldo_en_ble_dcf_rx:5;
      uint64_t pa_ldo_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG9_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_switch_en_ble_dcf_rx:5;
      uint64_t cp_switch_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG10_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_bias_en_ble_dcf_rx:5;
      uint64_t vco_bias_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG11_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_bias_en_ble_dcf_rx:5;
      uint64_t cp_bias_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG12_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_ldo_zero_ble_dcf_rx:5;
      uint64_t lna_ldo_zero_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG13_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pa_ramp_en_ble_dcf_rx:5;
      uint64_t pa_ramp_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG14_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pa_en_ble_dcf_rx:5;
      uint64_t pa_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG15_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t mix_en_ble_dcf_rx:5;
      uint64_t mix_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG16_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iff_en_ble_dcf_rx:5;
      uint64_t iff_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG17_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t adc_en_ble_dcf_rx:5;
      uint64_t adc_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG18_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_en_ble_dcf_rx:5;
      uint64_t vco_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG19_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lobuf_md_en_ble_dcf_rx:5;
      uint64_t lobuf_md_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG20_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_en_ble_dcf_rx:5;
      uint64_t cp_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG21_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pfd_en_ble_dcf_rx:5;
      uint64_t pfd_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG22_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t gauss_en_ble_dcf_rx:5;
      uint64_t gauss_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG23_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t rfio_txrx_ble_dcf_rx:5;
      uint64_t rfio_txrx_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG24_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lobuf_pa_en_ble_dcf_rx:5;
      uint64_t lobuf_pa_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG25_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lobuf_rxiq_en_ble_dcf_rx:5;
      uint64_t lobuf_rxiq_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG26_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t div2_en_ble_dcf_rx:5;
      uint64_t div2_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG27_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_bias_sh_open_ble_dcf_rx:5;
      uint64_t cp_bias_sh_open_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG28_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_bias_sh_open_ble_dcf_rx:5;
      uint64_t vco_bias_sh_open_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG29_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iffmix_bias_sh_open_ble_dcf_rx:5;
      uint64_t iffmix_bias_sh_open_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG30_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t gauss_bias_sh_ble_dcf_rx:5;
      uint64_t gauss_bias_sh_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG31_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t mix_bias_sh_ble_dcf_rx:5;
      uint64_t mix_bias_sh_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG32_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pll_dig_en_ble_dcf_rx:5;
      uint64_t pll_dig_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG33_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pllclosed_en_ble_dcf_rx:5;
      uint64_t pllclosed_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG34_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t dem_en_ble_dcf_rx:5;
      uint64_t dem_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG35_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ldo_zero_en_ble_dcf_rx:5;
      uint64_t ldo_zero_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG36_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cal_en_ble_dcf_rx:5;
      uint64_t cal_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG37_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t tdc_en_ble_dcf_rx:5;
      uint64_t tdc_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG38_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ldo_rfio_en_ble_dcf_rx:5;
      uint64_t ldo_rfio_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG39_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t rfio_bias_en_ble_dcf_rx:5;
      uint64_t rfio_bias_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG40_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t rfio_bias_sh_ble_dcf_rx:5;
      uint64_t rfio_bias_sh_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG41_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ldo_radio_en_ble_dcf_rx:5;
      uint64_t ldo_radio_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG42_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t adc_clk_en_ble_dcf_rx:5;
      uint64_t adc_clk_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG43_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t tr_pwm_off_en_ble_dcf_rx:5;
      uint64_t tr_pwm_off_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG44_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t txdac_en_ble_dcf_rx:5;
      uint64_t txdac_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG45_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t dcparcal_en_ble_dcf_rx:5;
      uint64_t spare2_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG46_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t agcunfreeze_en_ble_dcf_rx:5;
      uint64_t spare3_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG47_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t sigdetect_en_ble_dcf_rx:5;
      uint64_t spare4_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG48_BLE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t dem_ftdf_en_ble_dcf_rx:5;
      uint64_t dem_ftdf_en_ble_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG49_BLE_REG;

  uint8_t res0[28];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_ldo_en_ftdf_dcf_rx:5;
      uint64_t lna_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG0_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_core_en_ftdf_dcf_rx:5;
      uint64_t lna_core_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG1_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_cgm_en_ftdf_dcf_rx:5;
      uint64_t lna_cgm_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG2_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t mix_ldo_en_ftdf_dcf_rx:5;
      uint64_t mix_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG3_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iff_ldo_en_ftdf_dcf_rx:5;
      uint64_t iff_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG4_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iffadc_ldo_en_ftdf_dcf_rx:5;
      uint64_t iffadc_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG5_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_ldo_en_ftdf_dcf_rx:5;
      uint64_t vco_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG6_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t md_ldo_en_ftdf_dcf_rx:5;
      uint64_t md_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG7_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pfd_ldo_en_ftdf_dcf_rx:5;
      uint64_t pfd_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG8_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pa_ldo_en_ftdf_dcf_rx:5;
      uint64_t pa_ldo_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG9_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_switch_en_ftdf_dcf_rx:5;
      uint64_t cp_switch_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG10_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_bias_en_ftdf_dcf_rx:5;
      uint64_t vco_bias_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG11_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_bias_en_tfdf_dcf_rx:5;
      uint64_t cp_bias_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG12_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lna_ldo_zero_ftdf_dcf_rx:5;
      uint64_t lna_ldo_zero_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG13_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pa_ramp_en_ftdf_dcf_rx:5;
      uint64_t pa_ramp_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG14_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pa_en_ftdf_dcf_rx:5;
      uint64_t pa_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG15_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t mix_en_ftdf_dcf_rx:5;
      uint64_t mix_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG16_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iff_en_ftdf_dcf_rx:5;
      uint64_t iff_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG17_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t adc_en_ftdf_dcf_rx:5;
      uint64_t adc_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG18_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_en_ftdf_dcf_rx:5;
      uint64_t vco_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG19_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lobuf_md_en_ftdf_dcf_rx:5;
      uint64_t lobuf_md_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG20_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_en_ftdf_dcf_rx:5;
      uint64_t cp_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG21_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pfd_en_ftdf_dcf_rx:5;
      uint64_t pfd_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG22_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t gauss_en_ftdf_dcf_rx:5;
      uint64_t gauss_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG23_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t rfio_txrx_ftdf_dcf_rx:5;
      uint64_t rfio_txrx_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG24_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lobuf_pa_en_ftdf_dcf_rx:5;
      uint64_t lobuf_pa_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG25_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t lobuf_rxiq_en_ftdf_dcf_rx:5;
      uint64_t lobuf_rxiq_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG26_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t div2_en_ftdf_dcf_rx:5;
      uint64_t div2_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG27_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cp_bias_sh_open_ftdf_dcf_rx:5;
      uint64_t cp_bias_sh_open_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG28_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t vco_bias_sh_open_ftdf_dcf_rx:5;
      uint64_t vco_bias_sh_open_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG29_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t iffmix_bias_sh_ftdf_dcf_rx:5;
      uint64_t iffmix_bias_sh_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG30_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t gauss_bias_sh_ftdf_dcf_rx:5;
      uint64_t gauss_bias_sh_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG31_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t mix_bias_sh_ftdf_dcf_rx:5;
      uint64_t mix_bias_sh_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG32_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pll_dig_en_ftdf_dcf_rx:5;
      uint64_t pll_dig_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG33_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t pllclosed_en_ftdf_dcf_rx:5;
      uint64_t pllclosed_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG34_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t dem_en_ftdf_dcf_rx:5;
      uint64_t dem_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG35_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ldo_zero_en_ftdf_dcf_rx:5;
      uint64_t ldo_zero_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG36_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t cal_en_ftdf_dcf_rx:5;
      uint64_t cal_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG37_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t tdc_en_ftdf_dcf_rx:5;
      uint64_t tdc_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG38_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ldo_rfio_en_ftdf_dcf_rx:5;
      uint64_t ldo_rfio_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG39_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t rfio_bias_en_ftdf_dcf_rx:5;
      uint64_t rfio_bias_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG40_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t rfio_bias_sh_ftdf_dcf_rx:5;
      uint64_t rfio_bias_sh_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG41_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ldo_radio_en_ftdf_dcf_rx:5;
      uint64_t ldo_radio_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG42_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t adc_clk_en_ftdf_dcf_rx:5;
      uint64_t adc_clk_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG43_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t tr_pwm_off_en_ftdf_dcf_rx:5;
      uint64_t tr_pwm_off_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG44_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t txdac_en_ftdf_dcf_rx:5;
      uint64_t txdac_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG45_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t dcparcal_en_ftdf_dcf_rx:5;
      uint64_t spare2_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG46_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t agcunfreeze_en_ftdf_dcf_rx:5;
      uint64_t spare3_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG47_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t sigdetect_en_ftdf_dcf_rx:5;
      uint64_t spare4_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG48_FTDF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t dem_ftdf_en_ftdf_dcf_rx:5;
      uint64_t dem_ftdf_en_ftdf_dcf_tx:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ENABLE_CONFIG49_FTDF_REG;

  uint8_t res1[30];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_5_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_6_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_7_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_8_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_9_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_10_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_11_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_12_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_13_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_14_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_15_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_16_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_17_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_18_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_19_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_20_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_21_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_22_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_23_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_24_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_25_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_26_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_27_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_28_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_29_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_30_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SET_OFFSET:8;
      uint64_t RESET_OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_CNTRL_TIMER_31_REG;

  uint8_t res2[64];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALW_EN_LNA_LDO_EN:1;
      uint64_t ALW_EN_LNA_CORE_EN:1;
      uint64_t ALW_EN_LNA_CGM_EN:1;
      uint64_t ALW_EN_MIX_LDO_EN:1;
      uint64_t ALW_EN_IFF_LDO_EN:1;
      uint64_t ALW_EN_IFFADC_LDO_EN:1;
      uint64_t ALW_EN_VCO_LDO_EN:1;
      uint64_t ALW_EN_MD_LDO_EN:1;
      uint64_t ALW_EN_PFD_LDO_EN:1;
      uint64_t ALW_EN_PA_LDO_EN:1;
      uint64_t ALW_EN_CP_SWITCH_EN:1;
      uint64_t ALW_EN_VCO_BIAS_EN:1;
      uint64_t ALW_EN_CP_BIAS_EN:1;
      uint64_t ALW_EN_LNA_LDO_ZERO:1;
      uint64_t ALW_EN_PA_RAMP_EN:1;
      uint64_t ALW_EN_PA_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ALWAYS_EN1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALW_EN_MIX_EN:1;
      uint64_t ALW_EN_IFF_EN:1;
      uint64_t ALW_EN_ADC_EN:1;
      uint64_t ALW_EN_VCO_EN:1;
      uint64_t ALW_EN_LOBUF_MD_EN:1;
      uint64_t ALW_EN_CP_EN:1;
      uint64_t ALW_EN_PDF_EN:1;
      uint64_t ALW_EN_GAUSS_EN:1;
      uint64_t ALW_EN_RFIO_TXRX:1;
      uint64_t ALW_EN_LOBUF_PA_EN:1;
      uint64_t ALW_EN_RXIQ_EN:1;
      uint64_t ALW_EN_DIV2_EN:1;
      uint64_t ALW_EN_CP_BIAS_SH_OPEN:1;
      uint64_t ALW_EN_VCO_BIAS_SH_OPEN:1;
      uint64_t ALW_EN_IFFMIX_BIAS_SH_OPEN:1;
      uint64_t ALW_EN_GAUSS_BIAS_SH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ALWAYS_EN2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALW_EN_MIX_BIAS_SH:1;
      uint64_t ALW_EN_PLL_DIG_EN:1;
      uint64_t ALW_EN_PLLCLOSED_EN:1;
      uint64_t ALW_EN_DEM_EN:1;
      uint64_t ALW_EN_LDO_ZERO_EN:1;
      uint64_t ALW_EN_CAL_EN:1;
      uint64_t ALW_EN_TDC_EN:1;
      uint64_t ALW_EN_LDO_RFIO_EN:1;
      uint64_t ALW_EN_RFIO_BIAS_EN:1;
      uint64_t ALW_EN_RFIO_BIAS_SH:1;
      uint64_t ALW_EN_LDO_RADIO_EN:1;
      uint64_t ALW_EN_ADC_CLK_EN:1;
      uint64_t ALW_EN_TR_PWRM_OFF_EN:1;
      uint64_t ALW_EN_TXDAC_EN:1;
      uint64_t ALW_EN_SPARE2_EN:1;
      uint64_t ALW_EN_SPARE3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ALWAYS_EN3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALW_EN_SPARE4_EN:1;
      uint64_t ALW_EN_DEM_FTDF_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_ALWAYS_EN4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_PORT0_RX:1;
      uint64_t RF_PORT0_TX:1;
      uint64_t RF_PORT1_RX:1;
      uint64_t RF_PORT1_TX:1;
      uint64_t RF_PORT2_RX:1;
      uint64_t RF_PORT2_TX:1;
      uint64_t RF_PORT3_RX:1;
      uint64_t RF_PORT3_TX:1;
      uint64_t RF_PORT4_RX:1;
      uint64_t RF_PORT4_TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_PORT_EN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RF_PORT0_POL:1;
      uint64_t RF_PORT1_POL:1;
      uint64_t RF_PORT2_POL:1;
      uint64_t RF_PORT3_POL:1;
      uint64_t RF_PORT4_POL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RF_PORT_POL_REG;

};

#define RFCU_POWER (*(volatile struct RFCU_POWER_tag *) 0x50002200)

struct RFPT_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFPT_PACK_EN:1;
      uint64_t RFPT_PACK_SEL:2;
      uint64_t RFPT_PACK_ADC_TYPE:1;
      uint64_t RFPT_CIRC_EN:1;
      uint64_t RFPT_BREQ_FORCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RFPT_ADDRL:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_ADDRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFPT_ADDRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_ADDRH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFPT_LEN:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_LEN_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFPT_ACTIVE:1;
      uint64_t RFPT_OFLOW_STK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_STAT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RFPT_CRV_ADDRL:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_CRV_ADDRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFPT_CRV_ADDRH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_CRV_ADDRH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RFPT_CRV_LEN:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) RFPT_CRV_LEN_REG;

};

#define RFPT (*(volatile struct RFPT_tag *) 0x50003600)

struct SPI_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_ON:1;
      uint64_t SPI_PHA:1;
      uint64_t SPI_POL:1;
      uint64_t SPI_CLK:2;
      uint64_t SPI_DO:1;
      uint64_t SPI_SMN:1;
      uint64_t SPI_WORD:2;
      uint64_t SPI_RST:1;
      uint64_t SPI_FORCE_DO:1;
      uint64_t SPI_TXH:1;
      uint64_t SPI_DI:1;
      uint64_t SPI_INT_BIT:1;
      uint64_t SPI_MINT:1;
      uint64_t SPI_EN_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_DATA0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI_RX_TX_REG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_DATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI_RX_TX_REG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_CLEAR_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI_CLEAR_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_FIFO_MODE:2;
      uint64_t SPI_PRIORITY:1;
      uint64_t SPI_BUSY:1;
      uint64_t SPI_9BIT_VAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI_CTRL_REG1;

};

#define SPI (*(volatile struct SPI_tag *) 0x50001200)

struct SPI2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_ON:1;
      uint64_t SPI_PHA:1;
      uint64_t SPI_POL:1;
      uint64_t SPI_CLK:2;
      uint64_t SPI_DO:1;
      uint64_t SPI_SMN:1;
      uint64_t SPI_WORD:2;
      uint64_t SPI_RST:1;
      uint64_t SPI_FORCE_DO:1;
      uint64_t SPI_TXH:1;
      uint64_t SPI_DI:1;
      uint64_t SPI_INT_BIT:1;
      uint64_t SPI_MINT:1;
      uint64_t SPI_EN_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI2_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_DATA0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI2_RX_TX_REG0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_DATA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI2_RX_TX_REG1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_CLEAR_INT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI2_CLEAR_INT_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SPI_FIFO_MODE:2;
      uint64_t SPI_PRIORITY:1;
      uint64_t SPI_BUSY:1;
      uint64_t SPI_9BIT_VAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SPI2_CTRL_REG1;

};

#define SPI2 (*(volatile struct SPI2_tag *) 0x50001300)

struct TIMER1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_EN:1;
      uint64_t CAPTIM_ONESHOT_MODE_EN:1;
      uint64_t CAPTIM_COUNT_DOWN_EN:1;
      uint64_t CAPTIM_IN1_EVENT_FALL_EN:1;
      uint64_t CAPTIM_IN2_EVENT_FALL_EN:1;
      uint64_t CAPTIM_IRQ_EN:1;
      uint64_t CAPTIM_FREE_RUN_MODE_EN:1;
      uint64_t CAPTIM_SYS_CLK_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_TIMER_VALUE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_TIMER_VAL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_IN1_STATE:1;
      uint64_t CAPTIM_IN2_STATE:1;
      uint64_t CAPTIM_ONESHOT_PHASE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_STATUS_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_GPIO1_CONF:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_GPIO1_CONF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_GPIO2_CONF:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_GPIO2_CONF_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_RELOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_RELOAD_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_SHOTWIDTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_SHOTWIDTH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_PRESCALER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_PRESCALER_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_CAPTURE_GPIO1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_CAPTURE_GPIO1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_CAPTURE_GPIO2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_CAPTURE_GPIO2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_PRESCALER_VAL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_PRESCALER_VAL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_PWM_FREQ:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_PWM_FREQ_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTIM_PWM_DC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CAPTIM_PWM_DC_REG;

};

#define TIMER1 (*(volatile struct TIMER1_tag *) 0x50000200)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRNG_ENABLE:1;
      uint64_t TRNG_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRNG_FIFOLVL:5;
      uint64_t TRNG_FIFOFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_FIFOLVL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRNG_SVN:16;
      uint64_t TRNG_MIN:8;
      uint64_t TRNG_MAJ:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_VER_REG;

};

#define TRNG (*(volatile struct TRNG_tag *) 0x50005000)

struct UART_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t RBR_THR_DLL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_RBR_THR_DLL_REG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ERBFI_dlh0:1;
      uint64_t ETBEI_dlh1:1;
      uint64_t ELSI_dhl2:1;
      uint64_t reservedSpace0:4;
      uint64_t PTIME_dlh7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_IER_DLH_REG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IIR_FCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_IIR_FCR_REG;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DLS:2;
      uint64_t UART_STOP:1;
      uint64_t UART_PEN:1;
      uint64_t UART_EPS:1;
      uint64_t reservedSpace0:1;
      uint64_t UART_BC:1;
      uint64_t UART_DLAB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_LCR_REG;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t UART_OUT1:1;
      uint64_t UART_OUT2:1;
      uint64_t UART_LB:1;
      uint64_t reservedSpace1:1;
      uint64_t UART_SIRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_MCR_REG;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DR:1;
      uint64_t UART_OE:1;
      uint64_t UART_PE:1;
      uint64_t UART_FE:1;
      uint64_t UART_BI:1;
      uint64_t UART_THRE:1;
      uint64_t UART_TEMT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_LSR_REG;

  uint8_t res5[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SCRATCH_PAD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_SCR_REG;

  uint8_t res6[94];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_USR_REG;

  uint8_t res7[10];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_UR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_SRR_REG;

  uint8_t res8[6];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_BREAK_CONTROL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_SBCR_REG;

  uint8_t res9[22];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMASA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_DMASA_REG;

  uint8_t res10[22];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DLF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_DLF_REG;

  uint8_t res11[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_CPR_REG;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UCV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_UCV_REG;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART_CTR_REG;

};

#define UART (*(volatile struct UART_tag *) 0x50001000)

struct UART2_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t RBR_THR_DLL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_RBR_THR_DLL_REG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ERBFI_dlh0:1;
      uint64_t ETBEI_dlh1:1;
      uint64_t ELSI_dhl2:1;
      uint64_t reservedSpace0:4;
      uint64_t PTIME_dlh7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_IER_DLH_REG;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t IIR_FCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_IIR_FCR_REG;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DLS:2;
      uint64_t UART_STOP:1;
      uint64_t UART_PEN:1;
      uint64_t UART_EPS:1;
      uint64_t reservedSpace0:1;
      uint64_t UART_BC:1;
      uint64_t UART_DLAB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_LCR_REG;

  uint8_t res3[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t UART_RTS:1;
      uint64_t UART_OUT1:1;
      uint64_t UART_OUT2:1;
      uint64_t UART_LB:1;
      uint64_t UART_AFCE:1;
      uint64_t UART_SIRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_MCR_REG;

  uint8_t res4[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DR:1;
      uint64_t UART_OE:1;
      uint64_t UART_PE:1;
      uint64_t UART_FE:1;
      uint64_t UART_BI:1;
      uint64_t UART_THRE:1;
      uint64_t UART_TEMT:1;
      uint64_t UART_RFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_LSR_REG;

  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DCTS:1;
      uint64_t reservedSpace0:3;
      uint64_t UART_CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_MSR_REG;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SCRATCH_PAD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SCR_REG;

  uint8_t res7[18];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR0_REG;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR1_REG;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR2_REG;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR3_REG;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR4_REG;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR5_REG;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR6_REG;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR7_REG;

  uint8_t res15[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR8_REG;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR9_REG;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR10_REG;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR11_REG;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR12_REG;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR13_REG;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR14_REG;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SRBR_STHRx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRBR_STHR15_REG;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_FAR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_FAR_REG;

  uint8_t res24[10];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_BUSY:1;
      uint64_t UART_TFNF:1;
      uint64_t UART_TFE:1;
      uint64_t UART_RFNE:1;
      uint64_t UART_RFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_USR_REG;

  uint8_t res25[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_TRANSMIT_FIFO_LEVEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_TFL_REG;

  uint8_t res26[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_RECEIVE_FIFO_LEVEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_RFL_REG;

  uint8_t res27[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_UR:1;
      uint64_t UART_RFR:1;
      uint64_t UART_XFR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRR_REG;

  uint8_t res28[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_REQUEST_TO_SEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRTS_REG;

  uint8_t res29[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_BREAK_CONTROL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SBCR_REG;

  uint8_t res30[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_DMA_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SDMAM_REG;

  uint8_t res31[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_FIFO_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SFE_REG;

  uint8_t res32[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_RCVR_TRIGGER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_SRT_REG;

  uint8_t res33[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_SHADOW_TX_EMPTY_TRIGGER:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_STET_REG;

  uint8_t res34[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_HALT_TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_HTX_REG;

  uint8_t res35[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DMASA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_DMASA_REG;

  uint8_t res36[22];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UART_DLF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_DLF_REG;

  uint8_t res37[50];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_CPR_REG;

  uint8_t res38[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t UCV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_UCV_REG;

  uint8_t res39[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) UART2_CTR_REG;

};

#define UART2 (*(volatile struct UART2_tag *) 0x50001100)

struct USB_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t USBEN:1;
      uint64_t USB_DBG:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_NAT:1;
      uint64_t LSMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_MCTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_XCV_TEST:1;
      uint64_t USB_XCV_TXp:1;
      uint64_t USB_XCV_TXn:1;
      uint64_t USB_XCV_TXEN:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_RCV:1;
      uint64_t USB_VMIN:1;
      uint64_t USB_VPIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_XCVDIAG_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_CADJ:5;
      uint64_t USB_VADJ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TCR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_UTR_RES:5;
      uint64_t USB_SF:1;
      uint64_t USB_NCRC:1;
      uint64_t USB_DIAG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_UTR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_AD:7;
      uint64_t USB_AD_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_FAR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_NFS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_NFSR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_WARN:1;
      uint64_t USB_ALT:1;
      uint64_t USB_TX_EV:1;
      uint64_t USB_FRAME:1;
      uint64_t USB_NAK:1;
      uint64_t USB_ULD:1;
      uint64_t USB_RX_EV:1;
      uint64_t USB_INTR:1;
      uint64_t USB_EP0_TX:1;
      uint64_t USB_EP0_RX:1;
      uint64_t USB_EP0_NAK:1;
      uint64_t USB_CH_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_MAEV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_M_WARN:1;
      uint64_t USB_M_ALT:1;
      uint64_t USB_M_TX_EV:1;
      uint64_t USB_M_FRAME:1;
      uint64_t USB_M_NAK:1;
      uint64_t USB_M_ULD:1;
      uint64_t USB_M_RX_EV:1;
      uint64_t USB_M_INTR:1;
      uint64_t USB_M_EP0_TX:1;
      uint64_t USB_M_EP0_RX:1;
      uint64_t USB_M_EP0_NAK:1;
      uint64_t USB_M_CH_EV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_MAMSK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t USB_EOP:1;
      uint64_t USB_SD3:1;
      uint64_t USB_SD5:1;
      uint64_t USB_RESET:1;
      uint64_t USB_RESUME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_ALTEV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t USB_M_EOP:1;
      uint64_t USB_M_SD3:1;
      uint64_t USB_M_SD5:1;
      uint64_t USB_M_RESET:1;
      uint64_t USB_M_RESUME:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_ALTMSK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TXFIFO31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_TXUDRRN31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXEV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_M_TXFIFO31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_M_TXUDRRN31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXMSK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RXFIFO31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_RXOVRRN31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXEV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_M_RXFIFO31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_M_RXOVRRN31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXMSK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_IN31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_OUT31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_NAKEV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_M_IN31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_M_OUT31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_NAKMSK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TXWARN31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_RXWARN31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_FWEV_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_M_TXWARN31:3;
      uint64_t reservedSpace0:1;
      uint64_t USB_M_RXWARN31:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_FWMSK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_FN_10_8:3;
      uint64_t reservedSpace0:2;
      uint64_t USB_RFC:1;
      uint64_t USB_UL:1;
      uint64_t USB_MF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_FNH_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_FN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_FNL_REG;

  uint8_t res0[22];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RPU_SSPROTEN:1;
      uint64_t RPU_RCDELAY:1;
      uint64_t RPU_TEST_SW1DM:1;
      uint64_t reservedSpace0:1;
      uint64_t RPU_TEST_EN:1;
      uint64_t RPU_TEST_SW1:1;
      uint64_t RPU_TEST_SW2:1;
      uint64_t RPU_TEST7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_UX20CDR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t reservedSpace0:2;
      uint64_t USB_DEF:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXD0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TCOUNT:5;
      uint64_t USB_TX_DONE:1;
      uint64_t USB_ACK_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXS0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TX_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_TOGGLE_TX0:1;
      uint64_t USB_FLUSH:1;
      uint64_t USB_IGN_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXC0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP0_INNAK:1;
      uint64_t USB_EP0_OUTNAK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EP0_NAK_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXD0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RCOUNT:4;
      uint64_t USB_RX_LAST:1;
      uint64_t USB_TOGGLE_RX0:1;
      uint64_t USB_SETUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXS0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RX_EN:1;
      uint64_t USB_IGN_OUT:1;
      uint64_t USB_IGN_SETUP:1;
      uint64_t USB_FLUSH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXC0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t USB_EP_EN:1;
      uint64_t USB_ISO:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXD1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TCOUNT:5;
      uint64_t USB_TX_DONE:1;
      uint64_t USB_ACK_STAT:1;
      uint64_t USB_TX_URUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXS1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TX_EN:1;
      uint64_t USB_LAST:1;
      uint64_t USB_TOGGLE_TX:1;
      uint64_t USB_FLUSH:1;
      uint64_t USB_RFF:1;
      uint64_t USB_TFWL:2;
      uint64_t USB_IGN_ISOMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXC1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t USB_EP_EN:1;
      uint64_t USB_ISO:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXD1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RCOUNT:4;
      uint64_t USB_RX_LAST:1;
      uint64_t USB_TOGGLE_RX:1;
      uint64_t USB_SETUP:1;
      uint64_t USB_RX_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXS1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RX_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_IGN_SETUP:1;
      uint64_t USB_FLUSH:1;
      uint64_t reservedSpace1:1;
      uint64_t USB_RFWL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXC1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t USB_EP_EN:1;
      uint64_t USB_ISO:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXD2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TCOUNT:5;
      uint64_t USB_TX_DONE:1;
      uint64_t USB_ACK_STAT:1;
      uint64_t USB_TX_URUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXS2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TX_EN:1;
      uint64_t USB_LAST:1;
      uint64_t USB_TOGGLE_TX:1;
      uint64_t USB_FLUSH:1;
      uint64_t USB_RFF:1;
      uint64_t USB_TFWL:2;
      uint64_t USB_IGN_ISOMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXC2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t USB_EP_EN:1;
      uint64_t USB_ISO:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXD2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RCOUNT:4;
      uint64_t USB_RX_LAST:1;
      uint64_t USB_TOGGLE_RX:1;
      uint64_t USB_SETUP:1;
      uint64_t USB_RX_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXS2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RX_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_IGN_SETUP:1;
      uint64_t USB_FLUSH:1;
      uint64_t reservedSpace1:1;
      uint64_t USB_RFWL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXC2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t USB_EP_EN:1;
      uint64_t USB_ISO:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC5_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXD3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TCOUNT:5;
      uint64_t USB_TX_DONE:1;
      uint64_t USB_ACK_STAT:1;
      uint64_t USB_TX_URUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXS3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_TX_EN:1;
      uint64_t USB_LAST:1;
      uint64_t USB_TOGGLE_TX:1;
      uint64_t USB_FLUSH:1;
      uint64_t USB_RFF:1;
      uint64_t USB_TFWL:2;
      uint64_t USB_IGN_ISOMSK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_TXC3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_EP:4;
      uint64_t USB_EP_EN:1;
      uint64_t USB_ISO:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_STALL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_EPC6_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RXFD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXD3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RCOUNT:4;
      uint64_t USB_RX_LAST:1;
      uint64_t USB_TOGGLE_RX:1;
      uint64_t USB_SETUP:1;
      uint64_t USB_RX_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXS3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_RX_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t USB_IGN_SETUP:1;
      uint64_t USB_FLUSH:1;
      uint64_t reservedSpace1:1;
      uint64_t USB_RFWL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_RXC3_REG;

  uint8_t res1[80];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_DMA_RX:3;
      uint64_t USB_DMA_TX:3;
      uint64_t USB_DMA_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_DMA_CTRL_REG;

  uint8_t res2[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_CHARGE_ON:1;
      uint64_t IDP_SRC_ON:1;
      uint64_t VDP_SRC_ON:1;
      uint64_t VDM_SRC_ON:1;
      uint64_t IDP_SINK_ON:1;
      uint64_t IDM_SINK_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_CHARGER_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t USB_DCP_DET:1;
      uint64_t USB_CHG_DET:1;
      uint64_t USB_DP_VAL:1;
      uint64_t USB_DM_VAL:1;
      uint64_t USB_DP_VAL2:1;
      uint64_t USB_DM_VAL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) USB_CHARGER_STAT_REG;

};

#define USB (*(volatile struct USB_tag *) 0x50001800)

struct WAKEUP_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_DEB_VALUE:6;
      uint64_t WKUP_SFT_KEYHIT:1;
      uint64_t WKUP_ENABLE_IRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_CTRL_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMPARE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_COMPARE_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_IRQ_RST:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_RESET_IRQ_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EVENT_VALUE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_COUNTER_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_CNTR_RST:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_RESET_CNTR_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_SELECT_P0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_SELECT_P0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_SELECT_P1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_SELECT_P1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_SELECT_P2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_SELECT_P2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_SELECT_P3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_SELECT_P3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_SELECT_P4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_SELECT_P4_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_POL_P0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_POL_P0_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_POL_P1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_POL_P1_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_POL_P2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_POL_P2_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_POL_P3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_POL_P3_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t WKUP_POL_P4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WKUP_POL_P4_REG;

};

#define WAKEUP (*(volatile struct WAKEUP_tag *) 0x50000100)

struct WDOG_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t WDOG_VAL:8;
      uint64_t WDOG_VAL_NEG:1;
      uint64_t WDOG_WEN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WATCHDOG_REG;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NMI_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) WATCHDOG_CTRL_REG;

};

#define WDOG (*(volatile struct WDOG_tag *) 0x50003100)

