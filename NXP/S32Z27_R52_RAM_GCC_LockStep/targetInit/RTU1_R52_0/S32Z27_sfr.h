#include <stdint.h>

struct MC_ME_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEST_RST:1;
      uint64_t FUNC_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_CONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE_UPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODE_UPD;

  uint8_t res0[244];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_STAT;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE0_ADDR;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE1_ADDR;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE2_ADDR;

  uint8_t res4[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE3_ADDR;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE4_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE4_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE4_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE4_ADDR;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE5_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE5_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE5_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE5_ADDR;

  uint8_t res7[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE6_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE6_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE6_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE6_ADDR;

  uint8_t res8[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE7_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE7_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE7_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN0_CORE7_ADDR;

  uint8_t res9[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_STAT;

  uint8_t res10[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE0_ADDR;

  uint8_t res11[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE1_ADDR;

  uint8_t res12[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE2_ADDR;

  uint8_t res13[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN1_CORE3_ADDR;

  uint8_t res14[336];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCE:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCUD:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSUD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS:1;
      uint64_t reservedSpace0:1;
      uint64_t OSSS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_STAT;

  uint8_t res15[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE0_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE0_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE0_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE0_ADDR;

  uint8_t res16[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE1_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE1_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE1_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE1_ADDR;

  uint8_t res17[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE2_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE2_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE2_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE2_ADDR;

  uint8_t res18[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE3_PCONF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCUPD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE3_PUPD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCS:1;
      uint64_t reservedSpace0:30;
      uint64_t WFI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE3_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTN2_CORE3_ADDR;

};

#define MC_ME (*(volatile struct MC_ME_tag *) 0x41900000)

struct MC_RGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_POR:1;
      uint64_t F_DR_1:1;
      uint64_t reservedSpace0:1;
      uint64_t F_DR_3:1;
      uint64_t F_DR_4:1;
      uint64_t reservedSpace1:1;
      uint64_t F_DR_6:1;
      uint64_t reservedSpace2:1;
      uint64_t F_DR_8:1;
      uint64_t F_DR_9:1;
      uint64_t F_DR_10:1;
      uint64_t F_DR_11:1;
      uint64_t F_DR_12:1;
      uint64_t F_DR_13:1;
      uint64_t F_DR_14:1;
      uint64_t F_DR_15:1;
      uint64_t F_DR_16:1;
      uint64_t F_DR_17:1;
      uint64_t F_DR_18:1;
      uint64_t reservedSpace3:11;
      uint64_t F_DR_30:1;
      uint64_t F_DR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DES;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_EXR:1;
      uint64_t reservedSpace0:2;
      uint64_t F_FR_3:1;
      uint64_t F_FR_4:1;
      uint64_t reservedSpace1:15;
      uint64_t F_FR_20:1;
      uint64_t reservedSpace2:9;
      uint64_t F_FR_30:1;
      uint64_t F_FR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_EXR:1;
      uint64_t reservedSpace0:2;
      uint64_t D_F_FR_3:1;
      uint64_t D_F_FR_4:1;
      uint64_t reservedSpace1:15;
      uint64_t D_F_FR_20:1;
      uint64_t reservedSpace2:10;
      uint64_t D_F_FR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BE_EXR:1;
      uint64_t reservedSpace0:2;
      uint64_t BE_F_FR_3:1;
      uint64_t BE_F_FR_4:1;
      uint64_t reservedSpace1:15;
      uint64_t BE_F_FR_20:1;
      uint64_t reservedSpace2:9;
      uint64_t BE_F_FR_30:1;
      uint64_t BE_F_FR_31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FREC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERASSERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERCTRL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRET_EN:1;
      uint64_t FRET_TIMEOUT:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRENTC;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PERIPH_3_RST:1;
      uint64_t PERIPH_4_RST:1;
      uint64_t reservedSpace1:3;
      uint64_t PERIPH_8_RST:1;
      uint64_t reservedSpace2:7;
      uint64_t PERIPH_16_RST:1;
      uint64_t PERIPH_17_RST:1;
      uint64_t reservedSpace3:6;
      uint64_t PERIPH_24_RST:1;
      uint64_t PERIPH_25_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST0_0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_64_RST:1;
      uint64_t PERIPH_65_RST:1;
      uint64_t PERIPH_66_RST:1;
      uint64_t PERIPH_67_RST:1;
      uint64_t PERIPH_68_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST1_0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_128_RST:1;
      uint64_t PERIPH_129_RST:1;
      uint64_t PERIPH_130_RST:1;
      uint64_t PERIPH_131_RST:1;
      uint64_t PERIPH_132_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRST2_0;

  uint8_t res5[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t PERIPH_3_STAT:1;
      uint64_t PERIPH_4_STAT:1;
      uint64_t reservedSpace1:3;
      uint64_t PERIPH_8_STAT:1;
      uint64_t reservedSpace2:7;
      uint64_t PERIPH_16_STAT:1;
      uint64_t PERIPH_17_STAT:1;
      uint64_t reservedSpace3:6;
      uint64_t PERIPH_24_STAT:1;
      uint64_t PERIPH_25_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT0_0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_64_STAT:1;
      uint64_t PERIPH_65_STAT:1;
      uint64_t PERIPH_66_STAT:1;
      uint64_t PERIPH_67_STAT:1;
      uint64_t PERIPH_68_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT1_0;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIPH_128_STAT:1;
      uint64_t PERIPH_129_STAT:1;
      uint64_t PERIPH_130_STAT:1;
      uint64_t PERIPH_131_STAT:1;
      uint64_t PERIPH_132_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSTAT2_0;

};

#define MC_RGM (*(volatile struct MC_RGM_tag *) 0x41850000)

struct RTU0__GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLT_LCK:1;
      uint64_t TCM_BT:1;
      uint64_t THUMB:1;
      uint64_t CAINV:1;
      uint64_t INITREG:1;
      uint64_t reservedSpace0:3;
      uint64_t PMC_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CORE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUPERR0:1;
      uint64_t BUPERR1:1;
      uint64_t BUPERR2:1;
      uint64_t BUPERR3:1;
      uint64_t BUPERR4:1;
      uint64_t BUPERR5:1;
      uint64_t BUPERR6:1;
      uint64_t BUPERR7:1;
      uint64_t BUPERR8:1;
      uint64_t BUPERR9:1;
      uint64_t BUPERR10:1;
      uint64_t BUPERR11:1;
      uint64_t BUPERR12:1;
      uint64_t BUPERR13:1;
      uint64_t BUPERR14:1;
      uint64_t BUPERR15:1;
      uint64_t BUPERR16:1;
      uint64_t BUPERR17:1;
      uint64_t BUPERR18:1;
      uint64_t BUPERR19:1;
      uint64_t BUPERR20:1;
      uint64_t BUPERR21:1;
      uint64_t BUPERR22:1;
      uint64_t BUPERR23:1;
      uint64_t BUPERR24:1;
      uint64_t BUPERR25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_BUPERR_DIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUPERR0:1;
      uint64_t BUPERR1:1;
      uint64_t BUPERR2:1;
      uint64_t BUPERR3:1;
      uint64_t BUPERR4:1;
      uint64_t BUPERR5:1;
      uint64_t BUPERR6:1;
      uint64_t BUPERR7:1;
      uint64_t BUPERR8:1;
      uint64_t BUPERR9:1;
      uint64_t BUPERR10:1;
      uint64_t BUPERR11:1;
      uint64_t BUPERR12:1;
      uint64_t BUPERR13:1;
      uint64_t BUPERR14:1;
      uint64_t BUPERR15:1;
      uint64_t BUPERR16:1;
      uint64_t BUPERR17:1;
      uint64_t BUPERR18:1;
      uint64_t BUPERR19:1;
      uint64_t BUPERR20:1;
      uint64_t BUPERR21:1;
      uint64_t BUPERR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_BUPERR_DIS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFDEN0:1;
      uint64_t MFDEN1:1;
      uint64_t MFDEN2:1;
      uint64_t MFDEN3:1;
      uint64_t FFDEN0:1;
      uint64_t FFDEN1:1;
      uint64_t FFDEN2:1;
      uint64_t FFDEN3:1;
      uint64_t LFDEN0:1;
      uint64_t LFDEN1:1;
      uint64_t LFDEN2:1;
      uint64_t LFDEN3:1;
      uint64_t reservedSpace0:4;
      uint64_t SFDEN:1;
      uint64_t reservedSpace1:11;
      uint64_t ISOLEN0:1;
      uint64_t ISOLEN1:1;
      uint64_t ISOLEN2:1;
      uint64_t ISOLEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_FD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTDV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CNTDV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT0:1;
      uint64_t HALT1:1;
      uint64_t HALT2:1;
      uint64_t HALT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_HALT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFDID0:1;
      uint64_t MFDID1:1;
      uint64_t MFDID2:1;
      uint64_t MFDID3:1;
      uint64_t FFDID0:1;
      uint64_t FFDID1:1;
      uint64_t FFDID2:1;
      uint64_t FFDID3:1;
      uint64_t LFDID0:1;
      uint64_t LFDID1:1;
      uint64_t LFDID2:1;
      uint64_t LFDID3:1;
      uint64_t reservedSpace0:4;
      uint64_t SFDID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_FD;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WFI0:1;
      uint64_t WFI1:1;
      uint64_t WFI2:1;
      uint64_t WFI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_WFI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WFE0:1;
      uint64_t WFE1:1;
      uint64_t WFE2:1;
      uint64_t WFE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_WFE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARMRSTREQ0:1;
      uint64_t WARMRSTREQ1:1;
      uint64_t WARMRSTREQ2:1;
      uint64_t WARMRSTREQ3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_WRSTREQ;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C0_EV0:1;
      uint64_t C0_EV1:1;
      uint64_t C0_EV2:1;
      uint64_t C0_EV3:1;
      uint64_t C0_EV4:1;
      uint64_t C0_EV5:1;
      uint64_t C0_EV6:1;
      uint64_t C0_EV7:1;
      uint64_t C0_EV8:1;
      uint64_t C0_EV9:1;
      uint64_t C0_EV10:1;
      uint64_t C0_EV11:1;
      uint64_t C0_EV12:1;
      uint64_t C0_EV13:1;
      uint64_t C0_EV14:1;
      uint64_t C0_EV15:1;
      uint64_t C0_EV16:1;
      uint64_t C0_EV17:1;
      uint64_t C0_EV18:1;
      uint64_t C0_EV19:1;
      uint64_t C0_EV20:1;
      uint64_t C0_EV21:1;
      uint64_t C0_EV22:1;
      uint64_t C0_EV23:1;
      uint64_t C0_EV24:1;
      uint64_t C0_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1_EV0:1;
      uint64_t C1_EV1:1;
      uint64_t C1_EV2:1;
      uint64_t C1_EV3:1;
      uint64_t C1_EV4:1;
      uint64_t C1_EV5:1;
      uint64_t C1_EV6:1;
      uint64_t C1_EV7:1;
      uint64_t C1_EV8:1;
      uint64_t C1_EV9:1;
      uint64_t C1_EV10:1;
      uint64_t C1_EV11:1;
      uint64_t C1_EV12:1;
      uint64_t C1_EV13:1;
      uint64_t C1_EV14:1;
      uint64_t C1_EV15:1;
      uint64_t C1_EV16:1;
      uint64_t C1_EV17:1;
      uint64_t C1_EV18:1;
      uint64_t C1_EV19:1;
      uint64_t C1_EV20:1;
      uint64_t C1_EV21:1;
      uint64_t C1_EV22:1;
      uint64_t C1_EV23:1;
      uint64_t C1_EV24:1;
      uint64_t C1_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2_EV0:1;
      uint64_t C2_EV1:1;
      uint64_t C2_EV2:1;
      uint64_t C2_EV3:1;
      uint64_t C2_EV4:1;
      uint64_t C2_EV5:1;
      uint64_t C2_EV6:1;
      uint64_t C2_EV7:1;
      uint64_t C2_EV8:1;
      uint64_t C2_EV9:1;
      uint64_t C2_EV10:1;
      uint64_t C2_EV11:1;
      uint64_t C2_EV12:1;
      uint64_t C2_EV13:1;
      uint64_t C2_EV14:1;
      uint64_t C2_EV15:1;
      uint64_t C2_EV16:1;
      uint64_t C2_EV17:1;
      uint64_t C2_EV18:1;
      uint64_t C2_EV19:1;
      uint64_t C2_EV20:1;
      uint64_t C2_EV21:1;
      uint64_t C2_EV22:1;
      uint64_t C2_EV23:1;
      uint64_t C2_EV24:1;
      uint64_t C2_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C3_EV0:1;
      uint64_t C3_EV1:1;
      uint64_t C3_EV2:1;
      uint64_t C3_EV3:1;
      uint64_t C3_EV4:1;
      uint64_t C3_EV5:1;
      uint64_t C3_EV6:1;
      uint64_t C3_EV7:1;
      uint64_t C3_EV8:1;
      uint64_t C3_EV9:1;
      uint64_t C3_EV10:1;
      uint64_t C3_EV11:1;
      uint64_t C3_EV12:1;
      uint64_t C3_EV13:1;
      uint64_t C3_EV14:1;
      uint64_t C3_EV15:1;
      uint64_t C3_EV16:1;
      uint64_t C3_EV17:1;
      uint64_t C3_EV18:1;
      uint64_t C3_EV19:1;
      uint64_t C3_EV20:1;
      uint64_t C3_EV21:1;
      uint64_t C3_EV22:1;
      uint64_t C3_EV23:1;
      uint64_t C3_EV24:1;
      uint64_t C3_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM0:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX0:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM0:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX0:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM1:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM1:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM2:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX2:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM2:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX2:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM3:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX3:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM3:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX3:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV3;

};

#define RTU0__GPR (*(volatile struct RTU0__GPR_tag *) 0x76120000)

struct RTU1__GPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPLT_LCK:1;
      uint64_t TCM_BT:1;
      uint64_t THUMB:1;
      uint64_t CAINV:1;
      uint64_t INITREG:1;
      uint64_t reservedSpace0:3;
      uint64_t PMC_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CORE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUPERR0:1;
      uint64_t BUPERR1:1;
      uint64_t BUPERR2:1;
      uint64_t BUPERR3:1;
      uint64_t BUPERR4:1;
      uint64_t BUPERR5:1;
      uint64_t BUPERR6:1;
      uint64_t BUPERR7:1;
      uint64_t BUPERR8:1;
      uint64_t BUPERR9:1;
      uint64_t BUPERR10:1;
      uint64_t BUPERR11:1;
      uint64_t BUPERR12:1;
      uint64_t BUPERR13:1;
      uint64_t BUPERR14:1;
      uint64_t BUPERR15:1;
      uint64_t BUPERR16:1;
      uint64_t BUPERR17:1;
      uint64_t BUPERR18:1;
      uint64_t BUPERR19:1;
      uint64_t BUPERR20:1;
      uint64_t BUPERR21:1;
      uint64_t BUPERR22:1;
      uint64_t BUPERR23:1;
      uint64_t BUPERR24:1;
      uint64_t BUPERR25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_BUPERR_DIS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUPERR0:1;
      uint64_t BUPERR1:1;
      uint64_t BUPERR2:1;
      uint64_t BUPERR3:1;
      uint64_t BUPERR4:1;
      uint64_t BUPERR5:1;
      uint64_t BUPERR6:1;
      uint64_t BUPERR7:1;
      uint64_t BUPERR8:1;
      uint64_t BUPERR9:1;
      uint64_t BUPERR10:1;
      uint64_t BUPERR11:1;
      uint64_t BUPERR12:1;
      uint64_t BUPERR13:1;
      uint64_t BUPERR14:1;
      uint64_t BUPERR15:1;
      uint64_t BUPERR16:1;
      uint64_t BUPERR17:1;
      uint64_t BUPERR18:1;
      uint64_t BUPERR19:1;
      uint64_t BUPERR20:1;
      uint64_t BUPERR21:1;
      uint64_t BUPERR22:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_BUPERR_DIS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFDEN0:1;
      uint64_t MFDEN1:1;
      uint64_t MFDEN2:1;
      uint64_t MFDEN3:1;
      uint64_t FFDEN0:1;
      uint64_t FFDEN1:1;
      uint64_t FFDEN2:1;
      uint64_t FFDEN3:1;
      uint64_t LFDEN0:1;
      uint64_t LFDEN1:1;
      uint64_t LFDEN2:1;
      uint64_t LFDEN3:1;
      uint64_t reservedSpace0:4;
      uint64_t SFDEN:1;
      uint64_t reservedSpace1:11;
      uint64_t ISOLEN0:1;
      uint64_t ISOLEN1:1;
      uint64_t ISOLEN2:1;
      uint64_t ISOLEN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_FD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTDV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CNTDV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALT0:1;
      uint64_t HALT1:1;
      uint64_t HALT2:1;
      uint64_t HALT3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_HALT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFDID0:1;
      uint64_t MFDID1:1;
      uint64_t MFDID2:1;
      uint64_t MFDID3:1;
      uint64_t FFDID0:1;
      uint64_t FFDID1:1;
      uint64_t FFDID2:1;
      uint64_t FFDID3:1;
      uint64_t LFDID0:1;
      uint64_t LFDID1:1;
      uint64_t LFDID2:1;
      uint64_t LFDID3:1;
      uint64_t reservedSpace0:4;
      uint64_t SFDID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_FD;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WFI0:1;
      uint64_t WFI1:1;
      uint64_t WFI2:1;
      uint64_t WFI3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_WFI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WFE0:1;
      uint64_t WFE1:1;
      uint64_t WFE2:1;
      uint64_t WFE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_WFE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WARMRSTREQ0:1;
      uint64_t WARMRSTREQ1:1;
      uint64_t WARMRSTREQ2:1;
      uint64_t WARMRSTREQ3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_WRSTREQ;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C0_EV0:1;
      uint64_t C0_EV1:1;
      uint64_t C0_EV2:1;
      uint64_t C0_EV3:1;
      uint64_t C0_EV4:1;
      uint64_t C0_EV5:1;
      uint64_t C0_EV6:1;
      uint64_t C0_EV7:1;
      uint64_t C0_EV8:1;
      uint64_t C0_EV9:1;
      uint64_t C0_EV10:1;
      uint64_t C0_EV11:1;
      uint64_t C0_EV12:1;
      uint64_t C0_EV13:1;
      uint64_t C0_EV14:1;
      uint64_t C0_EV15:1;
      uint64_t C0_EV16:1;
      uint64_t C0_EV17:1;
      uint64_t C0_EV18:1;
      uint64_t C0_EV19:1;
      uint64_t C0_EV20:1;
      uint64_t C0_EV21:1;
      uint64_t C0_EV22:1;
      uint64_t C0_EV23:1;
      uint64_t C0_EV24:1;
      uint64_t C0_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1_EV0:1;
      uint64_t C1_EV1:1;
      uint64_t C1_EV2:1;
      uint64_t C1_EV3:1;
      uint64_t C1_EV4:1;
      uint64_t C1_EV5:1;
      uint64_t C1_EV6:1;
      uint64_t C1_EV7:1;
      uint64_t C1_EV8:1;
      uint64_t C1_EV9:1;
      uint64_t C1_EV10:1;
      uint64_t C1_EV11:1;
      uint64_t C1_EV12:1;
      uint64_t C1_EV13:1;
      uint64_t C1_EV14:1;
      uint64_t C1_EV15:1;
      uint64_t C1_EV16:1;
      uint64_t C1_EV17:1;
      uint64_t C1_EV18:1;
      uint64_t C1_EV19:1;
      uint64_t C1_EV20:1;
      uint64_t C1_EV21:1;
      uint64_t C1_EV22:1;
      uint64_t C1_EV23:1;
      uint64_t C1_EV24:1;
      uint64_t C1_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2_EV0:1;
      uint64_t C2_EV1:1;
      uint64_t C2_EV2:1;
      uint64_t C2_EV3:1;
      uint64_t C2_EV4:1;
      uint64_t C2_EV5:1;
      uint64_t C2_EV6:1;
      uint64_t C2_EV7:1;
      uint64_t C2_EV8:1;
      uint64_t C2_EV9:1;
      uint64_t C2_EV10:1;
      uint64_t C2_EV11:1;
      uint64_t C2_EV12:1;
      uint64_t C2_EV13:1;
      uint64_t C2_EV14:1;
      uint64_t C2_EV15:1;
      uint64_t C2_EV16:1;
      uint64_t C2_EV17:1;
      uint64_t C2_EV18:1;
      uint64_t C2_EV19:1;
      uint64_t C2_EV20:1;
      uint64_t C2_EV21:1;
      uint64_t C2_EV22:1;
      uint64_t C2_EV23:1;
      uint64_t C2_EV24:1;
      uint64_t C2_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C3_EV0:1;
      uint64_t C3_EV1:1;
      uint64_t C3_EV2:1;
      uint64_t C3_EV3:1;
      uint64_t C3_EV4:1;
      uint64_t C3_EV5:1;
      uint64_t C3_EV6:1;
      uint64_t C3_EV7:1;
      uint64_t C3_EV8:1;
      uint64_t C3_EV9:1;
      uint64_t C3_EV10:1;
      uint64_t C3_EV11:1;
      uint64_t C3_EV12:1;
      uint64_t C3_EV13:1;
      uint64_t C3_EV14:1;
      uint64_t C3_EV15:1;
      uint64_t C3_EV16:1;
      uint64_t C3_EV17:1;
      uint64_t C3_EV18:1;
      uint64_t C3_EV19:1;
      uint64_t C3_EV20:1;
      uint64_t C3_EV21:1;
      uint64_t C3_EV22:1;
      uint64_t C3_EV23:1;
      uint64_t C3_EV24:1;
      uint64_t C3_EV25:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_EVC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM0:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX0:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM0:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX0:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM1:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM1:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX1:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM2:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX2:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM2:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX2:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEM3:15;
      uint64_t reservedSpace0:16;
      uint64_t PRIMEMERRMEMV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIMEMERRMEIDX3:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRPX3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEM3:15;
      uint64_t reservedSpace0:16;
      uint64_t SECMEMERRMEMV3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECMEMERRMEIDX3:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_MERRSX3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU0EV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMUEVENT3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_PMU1EV3;

};

#define RTU1__GPR (*(volatile struct RTU1__GPR_tag *) 0x76920000)

struct GPR3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHID:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVFCCUGD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVFCCULD9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVFCCULD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVFCCULD11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCMC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDRCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMR:1;
      uint64_t DSRR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDRCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GENC0;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INITM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TARGTMS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TARGTMC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDREQ_SYS_NOC:1;
      uint64_t FDREQ_LLC:1;
      uint64_t SRAM_KILL_ACCESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0FDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDLE_SYS_NOC:1;
      uint64_t IDLE_LLC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0FDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDREQ_SYS_NOC:1;
      uint64_t FDREQ_LLC:1;
      uint64_t SRAM_KILL_ACCESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1FDC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDLE_SYS_NOC:1;
      uint64_t IDLE_LLC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1FDS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVAL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE0RSTCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTVAL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE1RSTCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MUXSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUT4SEL;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XRDC_INT_SRC:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XRDC_INT_S;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPDEEP:1;
      uint64_t SLEEPHOLDAn:1;
      uint64_t SLEEPING:1;
      uint64_t CORECLKEN:1;
      uint64_t INTVFETCH:1;
      uint64_t CPULOCKUP:1;
      uint64_t CURRNS:1;
      uint64_t SYSRSTREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXLLCECM33S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLEEPDEEP:1;
      uint64_t SLEEPHOLDAn:1;
      uint64_t SLEEPING:1;
      uint64_t CORECLKEN:1;
      uint64_t INTVFETCH:1;
      uint64_t CPULOCKUP:1;
      uint64_t CURRNS:1;
      uint64_t SYSRSTREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLEXLLCECM33CES;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVFCCU3S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVFCCU3S_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS:6;
      uint64_t reservedSpace0:2;
      uint64_t STAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XPAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS:6;
      uint64_t reservedSpace0:2;
      uint64_t STAT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XPAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0XPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1XPAR;

};

#define GPR3 (*(volatile struct GPR3_tag *) 0x41860000)

struct RDC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE:1;
      uint64_t reservedSpace1:27;
      uint64_t RD1_CTRL_UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD1_CTRL_REG;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT:1;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD1_STAT_REG;

};

#define RDC_0 (*(volatile struct RDC_0_tag *) 0x41890004)

struct RDC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE:1;
      uint64_t reservedSpace1:27;
      uint64_t RD1_CTRL_UNLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD1_CTRL_REG;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE_REQ_ACK_STAT:1;
      uint64_t RD1_INTERCONNECT_INTERFACE_DISABLE_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RD1_STAT_REG;

};

#define RDC_1 (*(volatile struct RDC_1_tag *) 0x418a0004)

#define RTU0__RTUM_NIC_D (*(volatile struct RTU0__RTUM_NIC_D_tag *) 0x75000000)

struct RTU1__RTUM_NIC_D_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU1__RTUM_NIC_D (*(volatile struct RTU1__RTUM_NIC_D_tag *) 0x75400000)

struct RTU0__RTUF_NIC_D_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU0__RTUF_NIC_D (*(volatile struct RTU0__RTUF_NIC_D_tag *) 0x75100000)

struct RTU1__RTUF_NIC_D_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU1__RTUF_NIC_D (*(volatile struct RTU1__RTUF_NIC_D_tag *) 0x75500000)

struct RTU0__RTUP_NIC_B_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU0__RTUP_NIC_B (*(volatile struct RTU0__RTUP_NIC_B_tag *) 0x75200000)

struct RTU1__RTUP_NIC_B_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU1__RTUP_NIC_B (*(volatile struct RTU1__RTUP_NIC_B_tag *) 0x75600000)

struct RTU0__RTUE_NIC_D_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU0__RTUE_NIC_D (*(volatile struct RTU0__RTUE_NIC_D_tag *) 0x75300000)

struct RTU1__RTUE_NIC_D_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t remap:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) remap;

};

#define RTU1__RTUE_NIC_D (*(volatile struct RTU1__RTUE_NIC_D_tag *) 0x75700000)

struct RTU0__LLC_FSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t bist_start:1;
      uint64_t bist_step:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCBISTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t bist_done:5;
      uint64_t bist_err:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCBISTAR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t latent_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCLF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t latent_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCLF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t latent_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCLF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t latent_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCLF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mission_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCMF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mission_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCMF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mission_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCMF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t mission_fault:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCMF3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cerr_over_thresh:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCCETHF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cerr_over_thresh:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCCETHF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cerr_over_thresh:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCCETHF2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t cerr_over_thresh:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSCCETHF3;

};

struct SMU__SWT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WEN:1;
      uint64_t FRZ:1;
      uint64_t reservedSpace0:2;
      uint64_t SLK:1;
      uint64_t HLK:1;
      uint64_t ITR:1;
      uint64_t WND:1;
      uint64_t RIA:1;
      uint64_t SMD:2;
      uint64_t reservedSpace1:13;
      uint64_t MAP7:1;
      uint64_t MAP6:1;
      uint64_t MAP5:1;
      uint64_t MAP4:1;
      uint64_t MAP3:1;
      uint64_t MAP2:1;
      uint64_t MAP1:1;
      uint64_t MAP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WTO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RRR;

};

#define SMU__SWT (*(volatile struct SMU__SWT_tag *) 0x45024000)

struct MDM_AP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SYSTEM_RESET:1;
      uint64_t reservedSpace1:3;
      uint64_t CSYSPWRUPREQ:1;
      uint64_t CDBGPWRUPREQ:1;
      uint64_t JTAG_ACTIVE:1;
      uint64_t reservedSpace2:3;
      uint64_t SMU_HALTED:1;
      uint64_t CE_A_HALTED:1;
      uint64_t CE_B_HALTED:1;
      uint64_t reservedSpace3:1;
      uint64_t SMU_SLEEPDEEP:1;
      uint64_t CE_A_SLEEPDEEP:1;
      uint64_t CE_B_SLEEPDEEP:1;
      uint64_t reservedSpace4:1;
      uint64_t SMU_SLEEPING:1;
      uint64_t CE_A_SLEEPING:1;
      uint64_t CE_B_SLEEPING:1;
      uint64_t reservedSpace5:5;
      uint64_t SMU_DBGRSTRTS:1;
      uint64_t CE_A_DBGRSTRTS:1;
      uint64_t CE_B_DBGRSTRTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t ETR_HANDSHAKE_0:1;
      uint64_t ETR_HANDSHAKE_1:1;
      uint64_t SMU_EDBGREQ:1;
      uint64_t COMMS_0_EDBGREQ:1;
      uint64_t COMMS_1_EDBGREQ:1;
      uint64_t reservedSpace1:4;
      uint64_t DIS_POR_WDOG_MSK:1;
      uint64_t reservedSpace2:4;
      uint64_t TPIU_OVERRIDE:1;
      uint64_t ETR_OVERRIDE_SMU:1;
      uint64_t reservedSpace3:1;
      uint64_t MSK_DBG_FAULT:1;
      uint64_t MSK_FCCU_RST_TRIGGER:1;
      uint64_t reservedSpace4:3;
      uint64_t SMU_DBGRSTRT:1;
      uint64_t CE_A_DBGRSTRT:1;
      uint64_t CE_B_DBGRSTRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL;

  uint8_t res0[56];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR52_RTU0_0_DBGMODE:1;
      uint64_t CR52_RTU0_1_DBGMODE:1;
      uint64_t CR52_RTU0_2_DBGMODE:1;
      uint64_t CR52_RTU0_3_DBGMODE:1;
      uint64_t CR52_RTU0_0_WFI:1;
      uint64_t CR52_RTU0_1_WFI:1;
      uint64_t CR52_RTU0_2_WFI:1;
      uint64_t CR52_RTU0_3_WFI:1;
      uint64_t CR52_RTU0_0_WFE:1;
      uint64_t CR52_RTU0_1_WFE:1;
      uint64_t CR52_RTU0_2_WFE:1;
      uint64_t CR52_RTU0_3_WFE:1;
      uint64_t reservedSpace0:4;
      uint64_t CR52_RTU1_0_DBGMODE:1;
      uint64_t CR52_RTU1_1_DBGMODE:1;
      uint64_t CR52_RTU1_2_DBGMODE:1;
      uint64_t CR52_RTU1_3_DBGMODE:1;
      uint64_t CR52_RTU1_0_WFI:1;
      uint64_t CR52_RTU1_1_WFI:1;
      uint64_t CR52_RTU1_2_WFI:1;
      uint64_t CR52_RTU1_3_WFI:1;
      uint64_t CR52_RTU1_0_WFE:1;
      uint64_t CR52_RTU1_1_WFE:1;
      uint64_t CR52_RTU1_2_WFE:1;
      uint64_t CR52_RTU1_3_WFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t RTU0_ETR_HANDSHAKE_0:1;
      uint64_t RTU0_ETR_HANDSHAKE_1:1;
      uint64_t reservedSpace1:8;
      uint64_t CR52_RTU0_0_EDBGREQ:1;
      uint64_t CR52_RTU0_1_EDBGREQ:1;
      uint64_t CR52_RTU0_2_EDBGREQ:1;
      uint64_t CR52_RTU0_3_EDBGREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t RTU1_ETR_HANDSHAKE_0:1;
      uint64_t RTU1_ETR_HANDSHAKE_1:1;
      uint64_t reservedSpace1:8;
      uint64_t CR52_RTU1_0_EDBGREQ:1;
      uint64_t CR52_RTU1_1_EDBGREQ:1;
      uint64_t CR52_RTU1_2_EDBGREQ:1;
      uint64_t CR52_RTU1_3_EDBGREQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONTROL3;

  uint8_t res2[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU0_0_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0_Core_0_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU0_1_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0_Core_1_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU0_2_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0_Core_2_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU0_3_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0_Core_3_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU1_0_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1_Core_0_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU1_1_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1_Core_1_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU1_2_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1_Core_2_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTU1_3_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1_Core_3_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CM33_SMU_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMU_Cortex_M33_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CE_CM33_0_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE_Cortex_M33_0_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CE_CM33_1_IP_DBGDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE_Cortex_M33_1_IP_DBG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWT0_MASK_DBG:1;
      uint64_t SWT1_MASK_DBG:1;
      uint64_t SWT2_MASK_DBG:1;
      uint64_t SWT3_MASK_DBG:1;
      uint64_t SWT4_MASK_DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0_SWTMASK_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWT0_MASK_DBG:1;
      uint64_t SWT1_MASK_DBG:1;
      uint64_t SWT2_MASK_DBG:1;
      uint64_t SWT3_MASK_DBG:1;
      uint64_t SWT4_MASK_DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1_SWTMASK_IP_DBG;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM0_MASK_DBG:1;
      uint64_t STM1_MASK_DBG:1;
      uint64_t STM2_MASK_DBG:1;
      uint64_t STM3_MASK_DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU0_STMMASK_IP_DBG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STM0_MASK_DBG:1;
      uint64_t STM1_MASK_DBG:1;
      uint64_t STM2_MASK_DBG:1;
      uint64_t STM3_MASK_DBG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTU1_STMMASK_IP_DBG;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RTU0_HIDEN3:1;
      uint64_t RTU0_HNIDEN3:1;
      uint64_t RTU0_DBGEN3:1;
      uint64_t RTU0_NIDEN3:1;
      uint64_t reservedSpace1:2;
      uint64_t RTU0_HIDEN2:1;
      uint64_t RTU0_HNIDEN2:1;
      uint64_t RTU0_DBGEN2:1;
      uint64_t RTU0_NIDEN2:1;
      uint64_t reservedSpace2:2;
      uint64_t RTU0_HIDEN1:1;
      uint64_t RTU0_HNIDEN1:1;
      uint64_t RTU0_DBGEN1:1;
      uint64_t RTU0_NIDEN1:1;
      uint64_t reservedSpace3:2;
      uint64_t RTU0_HIDEN0:1;
      uint64_t RTU0_HNIDEN0:1;
      uint64_t RTU0_DBGEN0:1;
      uint64_t RTU0_NIDEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGENCNTRL;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RTU1_HIDEN3:1;
      uint64_t RTU1_HNIDEN3:1;
      uint64_t RTU1_DBGEN3:1;
      uint64_t RTU1_NIDEN3:1;
      uint64_t reservedSpace1:2;
      uint64_t RTU1_HIDEN2:1;
      uint64_t RTU1_HNIDEN2:1;
      uint64_t RTU1_DBGEN2:1;
      uint64_t RTU1_NIDEN2:1;
      uint64_t reservedSpace2:2;
      uint64_t RTU1_HIDEN1:1;
      uint64_t RTU1_HNIDEN1:1;
      uint64_t RTU1_DBGEN1:1;
      uint64_t RTU1_NIDEN1:1;
      uint64_t reservedSpace3:2;
      uint64_t RTU1_HIDEN0:1;
      uint64_t RTU1_HNIDEN0:1;
      uint64_t RTU1_DBGEN0:1;
      uint64_t RTU1_NIDEN0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGENCNTRL2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t GDBGEN:1;
      uint64_t GNIDEN:1;
      uint64_t GSPIDEN:1;
      uint64_t GSPNIDEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CEVA_SPF2_DBGEN:1;
      uint64_t CEVA_SPF2_NIDEN:1;
      uint64_t CEVA_SPF2_SPIDEN:1;
      uint64_t CEVA_SPF2_SPNIDEN:1;
      uint64_t reservedSpace2:1;
      uint64_t GTM_DBGEN:1;
      uint64_t reservedSpace3:4;
      uint64_t CE_A_DBGEN:1;
      uint64_t CE_A_NIDEN:1;
      uint64_t CE_A_SPIDEN:1;
      uint64_t CE_A_SPNIDEN:1;
      uint64_t CE_B_DBGEN:1;
      uint64_t CE_B_NIDEN:1;
      uint64_t CE_B_SPIDEN:1;
      uint64_t CE_B_SPNIDEN:1;
      uint64_t SYSM_DBGEN:1;
      uint64_t SYSM_NIDEN:1;
      uint64_t SYSM_SPIDEN:1;
      uint64_t SYSM_SPNIDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBGENCNTRL3;

  uint8_t res8[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS_EN:1;
      uint64_t DTS_EN_B:1;
      uint64_t DTS_EN_C:1;
      uint64_t DTS_EN_D:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_ENABLE;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_STARTUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_STARTUP_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_STARTUP_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_STARTUP_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_SEMAPHORE;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_SEMAPHORE_B;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_C:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_SEMAPHORE_C;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTS_SEMAPHORE_D;

  uint8_t res13[3240];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Type:4;
      uint64_t Variant:4;
      uint64_t reservedSpace0:5;
      uint64_t Class:4;
      uint64_t JEDEC_code:7;
      uint64_t JEDEC_bank:4;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  uint8_t res14[444];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARCHID:16;
      uint64_t REVISION:4;
      uint64_t PRESENT:1;
      uint64_t ARCHITECT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVARCH;

  uint8_t res15[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAJOR:4;
      uint64_t SUB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_2:4;
      uint64_t SIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIDR4;

  uint8_t res16[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PART_1:4;
      uint64_t DES_0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DES_1:3;
      uint64_t JEDEC:1;
      uint64_t REVISION:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMOD:4;
      uint64_t REVAND:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_1:4;
      uint64_t CLASS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRMBL_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIDR3;

};

#define MDM_AP (*(volatile struct MDM_AP_tag *) 0x4c000000)