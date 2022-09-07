#include <stdint.h>

struct SPR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRMC:2;
      uint64_t FOVFE:1;
      uint64_t FUNFE:1;
      uint64_t FDBZE:1;
      uint64_t FINVE:1;
      uint64_t FINXE:1;
      uint64_t reservedSpace0:1;
      uint64_t FOVF:1;
      uint64_t FUNF:1;
      uint64_t FDBZ:1;
      uint64_t FINV:1;
      uint64_t FX:1;
      uint64_t FG:1;
      uint64_t OV:1;
      uint64_t SOV:1;
      uint64_t MODE:1;
      uint64_t FOVFS:1;
      uint64_t FUNFS:1;
      uint64_t FDBZS:1;
      uint64_t FINVS:1;
      uint64_t FINXS:1;
      uint64_t reservedSpace1:2;
      uint64_t FOVFH:1;
      uint64_t FUNFH:1;
      uint64_t FDBZH:1;
      uint64_t FINVH:1;
      uint64_t FXH:1;
      uint64_t FGH:1;
      uint64_t OVH:1;
      uint64_t SOVH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPEFSCR;

};

#define SPR (*(volatile struct SPR_tag *) 0x200)

struct ADC_ADC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORT_CHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t STCL:1;
      uint64_t reservedSpace2:1;
      uint64_t CTUEN:1;
      uint64_t reservedSpace3:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace4:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:4;
      uint64_t MODE:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t CTUSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t SELF_TEST_S:1;
      uint64_t reservedSpace3:1;
      uint64_t JSTART:1;
      uint64_t reservedSpace4:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:6;
      uint64_t CALIBRTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH0:1;
      uint64_t EOCCH1:1;
      uint64_t EOCCH2:1;
      uint64_t EOCCH3:1;
      uint64_t EOCCH4:1;
      uint64_t EOCCH5:1;
      uint64_t EOCCH6:1;
      uint64_t EOCCH7:1;
      uint64_t EOCCH8:1;
      uint64_t EOCCH9:1;
      uint64_t EOCCH10:1;
      uint64_t EOCCH11:1;
      uint64_t EOCCH12:1;
      uint64_t EOCCH13:1;
      uint64_t EOCCH14:1;
      uint64_t EOCCH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
      uint64_t WDG4L:1;
      uint64_t WDG4H:1;
      uint64_t WDG5L:1;
      uint64_t WDG5H:1;
      uint64_t WDG6L:1;
      uint64_t WDG6H:1;
      uint64_t WDG7L:1;
      uint64_t WDG7H:1;
      uint64_t WDG8L:1;
      uint64_t WDG8H:1;
      uint64_t WDG9L:1;
      uint64_t WDG9H:1;
      uint64_t WDG10L:1;
      uint64_t WDG10H:1;
      uint64_t WDG11L:1;
      uint64_t WDG11H:1;
      uint64_t WDG12L:1;
      uint64_t WDG12H:1;
      uint64_t WDG13L:1;
      uint64_t WDG13H:1;
      uint64_t WDG14L:1;
      uint64_t WDG14H:1;
      uint64_t WDG15L:1;
      uint64_t WDG15H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
      uint64_t MSKWDG4L:1;
      uint64_t MSKWDG4H:1;
      uint64_t MSKWDG5L:1;
      uint64_t MSKWDG5H:1;
      uint64_t MSKWDG6L:1;
      uint64_t MSKWDG6H:1;
      uint64_t MSKWDG7L:1;
      uint64_t MSKWDG7H:1;
      uint64_t MSKWDG8L:1;
      uint64_t MSKWDG8H:1;
      uint64_t MSKWDG9L:1;
      uint64_t MSKWDG9H:1;
      uint64_t MSKWDG10L:1;
      uint64_t MSKWDG10H:1;
      uint64_t MSKWDG11L:1;
      uint64_t MSKWDG11H:1;
      uint64_t MSKWDG12L:1;
      uint64_t MSKWDG12H:1;
      uint64_t MSKWDG13L:1;
      uint64_t MSKWDG13H:1;
      uint64_t MSKWDG14L:1;
      uint64_t MSKWDG14H:1;
      uint64_t MSKWDG15L:1;
      uint64_t MSKWDG15H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTIMR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DMA8:1;
      uint64_t DMA9:1;
      uint64_t DMA10:1;
      uint64_t DMA11:1;
      uint64_t DMA12:1;
      uint64_t DMA13:1;
      uint64_t DMA14:1;
      uint64_t DMA15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR1;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR0;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR0;

  uint8_t res9[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDEDR;

  uint8_t res10[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR15;

  uint8_t res11[320];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH8:4;
      uint64_t WSEL_CH9:4;
      uint64_t WSEL_CH10:4;
      uint64_t WSEL_CH11:4;
      uint64_t WSEL_CH12:4;
      uint64_t WSEL_CH13:4;
      uint64_t WSEL_CH14:4;
      uint64_t WSEL_CH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR1;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN0:1;
      uint64_t CWEN1:1;
      uint64_t CWEN2:1;
      uint64_t CWEN3:1;
      uint64_t CWEN4:1;
      uint64_t CWEN5:1;
      uint64_t CWEN6:1;
      uint64_t CWEN7:1;
      uint64_t CWEN8:1;
      uint64_t CWEN9:1;
      uint64_t CWEN10:1;
      uint64_t CWEN11:1;
      uint64_t CWEN12:1;
      uint64_t CWEN13:1;
      uint64_t CWEN14:1;
      uint64_t CWEN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR0;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR0;

  uint8_t res14[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INPSAMP_S:8;
      uint64_t reservedSpace1:8;
      uint64_t INPSAMP_C:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMA_S:1;
      uint64_t reservedSpace0:1;
      uint64_t FMA_C:1;
      uint64_t FMA_WDTERR:1;
      uint64_t FMA_WDSERR:1;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
      uint64_t reservedSpace2:3;
      uint64_t MSKERR_S0:1;
      uint64_t MSKERR_S1:1;
      uint64_t MSKERR_S2:1;
      uint64_t reservedSpace3:1;
      uint64_t MSKERR_C:1;
      uint64_t MSKWDG_EOA_S:1;
      uint64_t reservedSpace4:1;
      uint64_t MSKWDG_EOA_C:1;
      uint64_t reservedSpace5:4;
      uint64_t MSKST_EOC:1;
      uint64_t reservedSpace6:1;
      uint64_t MSKWDTERR:1;
      uint64_t SERR:1;
      uint64_t MSKWDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEP:5;
      uint64_t reservedSpace0:3;
      uint64_t ALG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:8;
      uint64_t reservedSpace0:8;
      uint64_t WDT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t STEP_C:5;
      uint64_t reservedSpace1:1;
      uint64_t ERR_S0:1;
      uint64_t ERR_S1:1;
      uint64_t ERR_S2:1;
      uint64_t reservedSpace2:1;
      uint64_t ERR_C:1;
      uint64_t WDG_EOA_S:1;
      uint64_t reservedSpace3:1;
      uint64_t WDG_EOA_C:1;
      uint64_t reservedSpace4:4;
      uint64_t ST_EOC:1;
      uint64_t OVERWR:1;
      uint64_t WDTERR:1;
      uint64_t reservedSpace5:1;
      uint64_t WDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
      uint64_t reservedSpace1:3;
      uint64_t OVFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res15[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
      uint64_t FDATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR2;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:3;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:19;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TEST_FAIL:1;
      uint64_t AVG_EN:1;
      uint64_t NR_SMPL:2;
      uint64_t reservedSpace1:8;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
      uint64_t OPMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET_USER:8;
      uint64_t reservedSpace0:8;
      uint64_t GAIN_USER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFSGNUSR;

};

#define ADC_ADC_0 (*(volatile struct ADC_ADC_0_tag *) 0xfbe00000)

struct ADC_ADC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t REFSEL:2;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t ABORT:1;
      uint64_t ABORT_CHAIN:1;
      uint64_t ADCLKSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t STCL:1;
      uint64_t reservedSpace2:1;
      uint64_t CTUEN:1;
      uint64_t reservedSpace3:2;
      uint64_t JSTART:1;
      uint64_t JEDGE:1;
      uint64_t JTRGEN:1;
      uint64_t reservedSpace4:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:4;
      uint64_t MODE:1;
      uint64_t WLSIDE:1;
      uint64_t OWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCSTATUS:3;
      uint64_t reservedSpace0:2;
      uint64_t ACKO:1;
      uint64_t reservedSpace1:3;
      uint64_t CHADDR:7;
      uint64_t CTUSTART:1;
      uint64_t reservedSpace2:1;
      uint64_t SELF_TEST_S:1;
      uint64_t reservedSpace3:1;
      uint64_t JSTART:1;
      uint64_t reservedSpace4:2;
      uint64_t JABORT:1;
      uint64_t NSTART:1;
      uint64_t reservedSpace5:6;
      uint64_t CALIBRTD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECH:1;
      uint64_t EOC:1;
      uint64_t JECH:1;
      uint64_t JEOC:1;
      uint64_t EOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCCH0:1;
      uint64_t EOCCH1:1;
      uint64_t EOCCH2:1;
      uint64_t EOCCH3:1;
      uint64_t EOCCH4:1;
      uint64_t EOCCH5:1;
      uint64_t EOCCH6:1;
      uint64_t EOCCH7:1;
      uint64_t EOCCH8:1;
      uint64_t EOCCH9:1;
      uint64_t EOCCH10:1;
      uint64_t EOCCH11:1;
      uint64_t EOCCH12:1;
      uint64_t EOCCH13:1;
      uint64_t EOCCH14:1;
      uint64_t EOCCH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CEOCFR0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKECH:1;
      uint64_t MSKEOC:1;
      uint64_t MSKJECH:1;
      uint64_t MSKJEOC:1;
      uint64_t MSKEOCTU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIM0:1;
      uint64_t CIM1:1;
      uint64_t CIM2:1;
      uint64_t CIM3:1;
      uint64_t CIM4:1;
      uint64_t CIM5:1;
      uint64_t CIM6:1;
      uint64_t CIM7:1;
      uint64_t CIM8:1;
      uint64_t CIM9:1;
      uint64_t CIM10:1;
      uint64_t CIM11:1;
      uint64_t CIM12:1;
      uint64_t CIM13:1;
      uint64_t CIM14:1;
      uint64_t CIM15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIMR0;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDG0L:1;
      uint64_t WDG0H:1;
      uint64_t WDG1L:1;
      uint64_t WDG1H:1;
      uint64_t WDG2L:1;
      uint64_t WDG2H:1;
      uint64_t WDG3L:1;
      uint64_t WDG3H:1;
      uint64_t WDG4L:1;
      uint64_t WDG4H:1;
      uint64_t WDG5L:1;
      uint64_t WDG5H:1;
      uint64_t WDG6L:1;
      uint64_t WDG6H:1;
      uint64_t WDG7L:1;
      uint64_t WDG7H:1;
      uint64_t WDG8L:1;
      uint64_t WDG8H:1;
      uint64_t WDG9L:1;
      uint64_t WDG9H:1;
      uint64_t WDG10L:1;
      uint64_t WDG10H:1;
      uint64_t WDG11L:1;
      uint64_t WDG11H:1;
      uint64_t WDG12L:1;
      uint64_t WDG12H:1;
      uint64_t WDG13L:1;
      uint64_t WDG13H:1;
      uint64_t WDG14L:1;
      uint64_t WDG14H:1;
      uint64_t WDG15L:1;
      uint64_t WDG15H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSKWDG0L:1;
      uint64_t MSKWDG0H:1;
      uint64_t MSKWDG1L:1;
      uint64_t MSKWDG1H:1;
      uint64_t MSKWDG2L:1;
      uint64_t MSKWDG2H:1;
      uint64_t MSKWDG3L:1;
      uint64_t MSKWDG3H:1;
      uint64_t MSKWDG4L:1;
      uint64_t MSKWDG4H:1;
      uint64_t MSKWDG5L:1;
      uint64_t MSKWDG5H:1;
      uint64_t MSKWDG6L:1;
      uint64_t MSKWDG6H:1;
      uint64_t MSKWDG7L:1;
      uint64_t MSKWDG7H:1;
      uint64_t MSKWDG8L:1;
      uint64_t MSKWDG8H:1;
      uint64_t MSKWDG9L:1;
      uint64_t MSKWDG9H:1;
      uint64_t MSKWDG10L:1;
      uint64_t MSKWDG10H:1;
      uint64_t MSKWDG11L:1;
      uint64_t MSKWDG11H:1;
      uint64_t MSKWDG12L:1;
      uint64_t MSKWDG12H:1;
      uint64_t MSKWDG13L:1;
      uint64_t MSKWDG13H:1;
      uint64_t MSKWDG14L:1;
      uint64_t MSKWDG14H:1;
      uint64_t MSKWDG15L:1;
      uint64_t MSKWDG15H:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WTIMR;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA0:1;
      uint64_t DMA1:1;
      uint64_t DMA2:1;
      uint64_t DMA3:1;
      uint64_t DMA4:1;
      uint64_t DMA5:1;
      uint64_t DMA6:1;
      uint64_t DMA7:1;
      uint64_t DMA8:1;
      uint64_t DMA9:1;
      uint64_t DMA10:1;
      uint64_t DMA11:1;
      uint64_t DMA12:1;
      uint64_t DMA13:1;
      uint64_t DMA14:1;
      uint64_t DMA15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAR0;

  uint8_t res4[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRECONV:1;
      uint64_t PREVAL0:2;
      uint64_t PREVAL1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRES0:1;
      uint64_t PRES1:1;
      uint64_t PRES2:1;
      uint64_t PRES3:1;
      uint64_t PRES4:1;
      uint64_t PRES5:1;
      uint64_t PRES6:1;
      uint64_t PRES7:1;
      uint64_t PRES8:1;
      uint64_t PRES9:1;
      uint64_t PRES10:1;
      uint64_t PRES11:1;
      uint64_t PRES12:1;
      uint64_t PRES13:1;
      uint64_t PRES14:1;
      uint64_t PRES15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSR0;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPSAMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTR1;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCMR0;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH0:1;
      uint64_t CH1:1;
      uint64_t CH2:1;
      uint64_t CH3:1;
      uint64_t CH4:1;
      uint64_t CH5:1;
      uint64_t CH6:1;
      uint64_t CH7:1;
      uint64_t CH8:1;
      uint64_t CH9:1;
      uint64_t CH10:1;
      uint64_t CH11:1;
      uint64_t CH12:1;
      uint64_t CH13:1;
      uint64_t CH14:1;
      uint64_t CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JCMR0;

  uint8_t res9[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDEDR;

  uint8_t res10[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDATA:16;
      uint64_t RESULT:2;
      uint64_t OVERW:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDR15;

  uint8_t res11[320];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) THRHLR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH0:4;
      uint64_t WSEL_CH1:4;
      uint64_t WSEL_CH2:4;
      uint64_t WSEL_CH3:4;
      uint64_t WSEL_CH4:4;
      uint64_t WSEL_CH5:4;
      uint64_t WSEL_CH6:4;
      uint64_t WSEL_CH7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSEL_CH8:4;
      uint64_t WSEL_CH9:4;
      uint64_t WSEL_CH10:4;
      uint64_t WSEL_CH11:4;
      uint64_t WSEL_CH12:4;
      uint64_t WSEL_CH13:4;
      uint64_t WSEL_CH14:4;
      uint64_t WSEL_CH15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWSELR1;

  uint8_t res12[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CWEN0:1;
      uint64_t CWEN1:1;
      uint64_t CWEN2:1;
      uint64_t CWEN3:1;
      uint64_t CWEN4:1;
      uint64_t CWEN5:1;
      uint64_t CWEN6:1;
      uint64_t CWEN7:1;
      uint64_t CWEN8:1;
      uint64_t CWEN9:1;
      uint64_t CWEN10:1;
      uint64_t CWEN11:1;
      uint64_t CWEN12:1;
      uint64_t CWEN13:1;
      uint64_t CWEN14:1;
      uint64_t CWEN15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CWENR0;

  uint8_t res13[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWOR_CH0:1;
      uint64_t AWOR_CH1:1;
      uint64_t AWOR_CH2:1;
      uint64_t AWOR_CH3:1;
      uint64_t AWOR_CH4:1;
      uint64_t AWOR_CH5:1;
      uint64_t AWOR_CH6:1;
      uint64_t AWOR_CH7:1;
      uint64_t AWOR_CH8:1;
      uint64_t AWOR_CH9:1;
      uint64_t AWOR_CH10:1;
      uint64_t AWOR_CH11:1;
      uint64_t AWOR_CH12:1;
      uint64_t AWOR_CH13:1;
      uint64_t AWOR_CH14:1;
      uint64_t AWOR_CH15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWORR0;

  uint8_t res14[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t INPSAMP_S:8;
      uint64_t reservedSpace1:8;
      uint64_t INPSAMP_C:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMA_S:1;
      uint64_t reservedSpace0:1;
      uint64_t FMA_C:1;
      uint64_t FMA_WDTERR:1;
      uint64_t FMA_WDSERR:1;
      uint64_t reservedSpace1:2;
      uint64_t EN:1;
      uint64_t reservedSpace2:3;
      uint64_t MSKERR_S0:1;
      uint64_t MSKERR_S1:1;
      uint64_t MSKERR_S2:1;
      uint64_t reservedSpace3:1;
      uint64_t MSKERR_C:1;
      uint64_t MSKWDG_EOA_S:1;
      uint64_t reservedSpace4:1;
      uint64_t MSKWDG_EOA_C:1;
      uint64_t reservedSpace5:4;
      uint64_t MSKST_EOC:1;
      uint64_t reservedSpace6:1;
      uint64_t MSKWDTERR:1;
      uint64_t SERR:1;
      uint64_t MSKWDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTEP:5;
      uint64_t reservedSpace0:3;
      uint64_t ALG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR:8;
      uint64_t reservedSpace0:8;
      uint64_t WDT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t STEP_C:5;
      uint64_t reservedSpace1:1;
      uint64_t ERR_S0:1;
      uint64_t ERR_S1:1;
      uint64_t ERR_S2:1;
      uint64_t reservedSpace2:1;
      uint64_t ERR_C:1;
      uint64_t WDG_EOA_S:1;
      uint64_t reservedSpace3:1;
      uint64_t WDG_EOA_C:1;
      uint64_t reservedSpace4:4;
      uint64_t ST_EOC:1;
      uint64_t OVERWR:1;
      uint64_t WDTERR:1;
      uint64_t reservedSpace5:1;
      uint64_t WDSERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
      uint64_t reservedSpace1:3;
      uint64_t OVFL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:12;
      uint64_t reservedSpace0:4;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DATA1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STSR4;

  uint8_t res15[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDATA:12;
      uint64_t reservedSpace0:6;
      uint64_t OWERWR:1;
      uint64_t VALID:1;
      uint64_t FDATA:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STDR2;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:3;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1AR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW1BR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:19;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW2R;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
      uint64_t reservedSpace1:2;
      uint64_t WDTE:1;
      uint64_t AWDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRL:12;
      uint64_t reservedSpace0:4;
      uint64_t THRH:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAW5R;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TEST_FAIL:1;
      uint64_t AVG_EN:1;
      uint64_t NR_SMPL:2;
      uint64_t reservedSpace1:8;
      uint64_t C_T_BUSY:1;
      uint64_t reservedSpace2:11;
      uint64_t TSAMP:2;
      uint64_t OPMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALBISTREG;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET_USER:8;
      uint64_t reservedSpace0:8;
      uint64_t GAIN_USER:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFSGNUSR;

};

#define ADC_ADC_1 (*(volatile struct ADC_ADC_1_tag *) 0xffe04000)

struct AFE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:3;
      uint64_t ICAL:4;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t EN_EXT:1;
      uint64_t RESERVED_5:2;
      uint64_t IE:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:4;
      uint64_t RESERVED_8:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STS:1;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCV:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSCDLY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:3;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:1;
      uint64_t RST_B:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:3;
      uint64_t RESERVED_9:1;
      uint64_t CLKGEN_EN:1;
      uint64_t DCBIAS_LO_LIM:4;
      uint64_t DCBIAS_HI_LIM:4;
      uint64_t RESERVED_10:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t START:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:4;
      uint64_t RESERVED_4:6;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:1;
      uint64_t FCAP_LO_LIM:6;
      uint64_t RESERVED_7:2;
      uint64_t FCAP_HI_LIM:6;
      uint64_t RESERVED_8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCKLOIE:1;
      uint64_t LCKHIIE:1;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:4;
      uint64_t CP_I_SEL:3;
      uint64_t LORIE:1;
      uint64_t RESERVED_3:1;
      uint64_t LW64:1;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:1;
      uint64_t RESERVED_6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTRL3;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCLKBY2_CNT:11;
      uint64_t RESERVED_0:1;
      uint64_t REFCLK_CNT:4;
      uint64_t RESERVED_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTRL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK:1;
      uint64_t LOR:1;
      uint64_t CALERR:1;
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:4;
      uint64_t RESERVED_2:6;
      uint64_t RESERVED_3:1;
      uint64_t LCKLOSS:1;
      uint64_t RESERVED_4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLSTS;

  uint8_t res1[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:3;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:2;
      uint64_t RESERVED_4:1;
      uint64_t RESERVED_5:6;
      uint64_t RESERVED_6:1;
      uint64_t RESERVED_7:1;
      uint64_t RESERVED_8:6;
      uint64_t RESERVED_9:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VRFCTRL1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:25;
      uint64_t BGOK:1;
      uint64_t RESERVED_1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVDSTS;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:4;
      uint64_t RESERVED_5:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VRGCTRL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:4;
      uint64_t RESERVED_5:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VRGCTRL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:4;
      uint64_t RESERVED_5:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VRGCTRL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t RESERVED_4:4;
      uint64_t RESERVED_5:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VRGCTRL8;

};

#define AFE (*(volatile struct AFE_tag *) 0xfbf0c000)

struct AIPS_AIPS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL7:1;
      uint64_t MTW7:1;
      uint64_t MTR7:1;
      uint64_t reservedSpace0:1;
      uint64_t MPL6:1;
      uint64_t MTW6:1;
      uint64_t MTR6:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL5:1;
      uint64_t MTW5:1;
      uint64_t MTR5:1;
      uint64_t reservedSpace2:1;
      uint64_t MPL4:1;
      uint64_t MTW4:1;
      uint64_t MTR4:1;
      uint64_t reservedSpace3:1;
      uint64_t MPL3:1;
      uint64_t MTW3:1;
      uint64_t MTR3:1;
      uint64_t reservedSpace4:1;
      uint64_t MPL2:1;
      uint64_t MTW2:1;
      uint64_t MTR2:1;
      uint64_t reservedSpace5:1;
      uint64_t MPL1:1;
      uint64_t MTW1:1;
      uint64_t MTR1:1;
      uint64_t reservedSpace6:1;
      uint64_t MPL0:1;
      uint64_t MTW0:1;
      uint64_t MTR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL15:1;
      uint64_t MTW15:1;
      uint64_t MTR15:1;
      uint64_t reservedSpace0:1;
      uint64_t MP14:1;
      uint64_t MTW14:1;
      uint64_t MTR14:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL13:1;
      uint64_t MTW13:1;
      uint64_t MTR13:1;
      uint64_t reservedSpace2:1;
      uint64_t MPL12:1;
      uint64_t MTW12:1;
      uint64_t MTR12:1;
      uint64_t reservedSpace3:5;
      uint64_t MPL10:1;
      uint64_t MTW10:1;
      uint64_t MTR10:1;
      uint64_t reservedSpace4:1;
      uint64_t MPL9:1;
      uint64_t MTW9:1;
      uint64_t MTR9:1;
      uint64_t reservedSpace5:1;
      uint64_t MPL8:1;
      uint64_t MTW8:1;
      uint64_t MTR8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRB;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACR_Reserved_Peripheral_Access_Control_Register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRH;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAF;

};

#define AIPS_AIPS_0 (*(volatile struct AIPS_AIPS_0_tag *) 0xfc000000)

struct AIPS_AIPS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL7:1;
      uint64_t MTW7:1;
      uint64_t MTR7:1;
      uint64_t reservedSpace0:1;
      uint64_t MPL6:1;
      uint64_t MTW6:1;
      uint64_t MTR6:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL5:1;
      uint64_t MTW5:1;
      uint64_t MTR5:1;
      uint64_t reservedSpace2:1;
      uint64_t MPL4:1;
      uint64_t MTW4:1;
      uint64_t MTR4:1;
      uint64_t reservedSpace3:1;
      uint64_t MPL3:1;
      uint64_t MTW3:1;
      uint64_t MTR3:1;
      uint64_t reservedSpace4:1;
      uint64_t MPL2:1;
      uint64_t MTW2:1;
      uint64_t MTR2:1;
      uint64_t reservedSpace5:1;
      uint64_t MPL1:1;
      uint64_t MTW1:1;
      uint64_t MTR1:1;
      uint64_t reservedSpace6:1;
      uint64_t MPL0:1;
      uint64_t MTW0:1;
      uint64_t MTR0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPL15:1;
      uint64_t MTW15:1;
      uint64_t MTR15:1;
      uint64_t reservedSpace0:1;
      uint64_t MP14:1;
      uint64_t MTW14:1;
      uint64_t MTR14:1;
      uint64_t reservedSpace1:1;
      uint64_t MPL13:1;
      uint64_t MTW13:1;
      uint64_t MTR13:1;
      uint64_t reservedSpace2:1;
      uint64_t MPL12:1;
      uint64_t MTW12:1;
      uint64_t MTR12:1;
      uint64_t reservedSpace3:5;
      uint64_t MPL10:1;
      uint64_t MTW10:1;
      uint64_t MTR10:1;
      uint64_t reservedSpace4:1;
      uint64_t MPL9:1;
      uint64_t MTW9:1;
      uint64_t MTR9:1;
      uint64_t reservedSpace5:1;
      uint64_t MPL8:1;
      uint64_t MTW8:1;
      uint64_t MTR8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPRB;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACR_Reserved_Peripheral_Access_Control_Register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACRH;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRJ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TP7:1;
      uint64_t WP7:1;
      uint64_t SP7:1;
      uint64_t reservedSpace0:1;
      uint64_t TP6:1;
      uint64_t WP6:1;
      uint64_t SP6:1;
      uint64_t reservedSpace1:1;
      uint64_t TP5:1;
      uint64_t WP5:1;
      uint64_t SP5:1;
      uint64_t reservedSpace2:1;
      uint64_t TP4:1;
      uint64_t WP4:1;
      uint64_t SP4:1;
      uint64_t reservedSpace3:1;
      uint64_t TP3:1;
      uint64_t WP3:1;
      uint64_t SP3:1;
      uint64_t reservedSpace4:1;
      uint64_t TP2:1;
      uint64_t WP2:1;
      uint64_t SP2:1;
      uint64_t reservedSpace5:1;
      uint64_t TP1:1;
      uint64_t WP1:1;
      uint64_t SP1:1;
      uint64_t reservedSpace6:1;
      uint64_t TP0:1;
      uint64_t WP0:1;
      uint64_t SP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPACRAF;

};

#define AIPS_AIPS_1 (*(volatile struct AIPS_AIPS_1_tag *) 0xf8000000)

struct AXBS_AXBS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS0;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS0;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS1;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS1;

  uint8_t res3[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS2;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS2;

  uint8_t res5[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS3;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS3;

  uint8_t res7[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS4;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS4;

  uint8_t res9[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS5;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS5;

  uint8_t res11[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS6;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS6;

  uint8_t res13[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS7;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS7;

};

#define AXBS_AXBS_0 (*(volatile struct AXBS_AXBS_0_tag *) 0xfc004000)

struct AXBS_AXBS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS0;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS0;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS1;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS1;

  uint8_t res3[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS2;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS2;

  uint8_t res5[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS3;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS3;

  uint8_t res7[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS4;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS4;

  uint8_t res9[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS5;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS5;

  uint8_t res11[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS6;

  uint8_t res12[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS6;

  uint8_t res13[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
      uint64_t reservedSpace3:1;
      uint64_t M4:3;
      uint64_t reservedSpace4:1;
      uint64_t M5:3;
      uint64_t reservedSpace5:1;
      uint64_t M6:3;
      uint64_t reservedSpace6:1;
      uint64_t M7:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS7;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:6;
      uint64_t HPE0:1;
      uint64_t HPE1:1;
      uint64_t HPE2:1;
      uint64_t HPE3:1;
      uint64_t HPE4:1;
      uint64_t HPE5:1;
      uint64_t HPE6:1;
      uint64_t HPE7:1;
      uint64_t reservedSpace3:6;
      uint64_t HLP:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS7;

};

#define AXBS_AXBS_1 (*(volatile struct AXBS_AXBS_1_tag *) 0xfc008000)

struct C55FMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EHV:1;
      uint64_t ESUS:1;
      uint64_t ERS:1;
      uint64_t PSUS:1;
      uint64_t PGM:1;
      uint64_t reservedSpace0:3;
      uint64_t PECIE:1;
      uint64_t PEG:1;
      uint64_t DONE:1;
      uint64_t PEAS:1;
      uint64_t reservedSpace1:1;
      uint64_t SBC:1;
      uint64_t RWE:1;
      uint64_t EER:1;
      uint64_t reservedSpace2:12;
      uint64_t EEE:1;
      uint64_t AEE:1;
      uint64_t RRE:1;
      uint64_t RVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t n16Kl:3;
      uint64_t n32Kl:2;
      uint64_t n64Kl:3;
      uint64_t n16Km:3;
      uint64_t n32Km:2;
      uint64_t n64Km:3;
      uint64_t n16Kh:3;
      uint64_t n32Kh:2;
      uint64_t n64Kh:3;
      uint64_t n256K:5;
      uint64_t reservedSpace0:2;
      uint64_t HT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCRE;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDLOCK:16;
      uint64_t LOWLOCK:14;
      uint64_t reservedSpace0:1;
      uint64_t TSLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KLOCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK3;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDSEL:16;
      uint64_t LOWSEL:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHSEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KSEL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KSEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEL3;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDR:21;
      uint64_t a16k:1;
      uint64_t a32k:1;
      uint64_t a64k:1;
      uint64_t a256k:1;
      uint64_t aL:1;
      uint64_t aM:1;
      uint64_t aH:1;
      uint64_t SAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AID:1;
      uint64_t AIE:1;
      uint64_t AIS:1;
      uint64_t reservedSpace0:1;
      uint64_t MRV:1;
      uint64_t MRE:1;
      uint64_t AISUS:1;
      uint64_t reservedSpace1:1;
      uint64_t AIBPE:1;
      uint64_t NAIBP:1;
      uint64_t reservedSpace2:6;
      uint64_t CPE:1;
      uint64_t CPA:1;
      uint64_t CPR:1;
      uint64_t reservedSpace3:11;
      uint64_t SBCE:1;
      uint64_t UTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UM9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDOPP:16;
      uint64_t LOWOPP:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHOPP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KOPP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A256KOPP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMD;

};

#define C55FMC (*(volatile struct C55FMC_tag *) 0xfffe0000)

struct CAN_Flex_Controller_Area_Network_module_CAN_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:1;
      uint64_t FDEN:1;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t reservedSpace2:2;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace5:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t CLKSRC:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
      uint64_t TXERRCNT_FAST:8;
      uint64_t RXERRCNT_FAST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t reservedSpace1:1;
      uint64_t ERRINT_FAST:1;
      uint64_t ERROVR:1;
      uint64_t reservedSpace2:4;
      uint64_t STFERR_FAST:1;
      uint64_t FRMERR_FAST:1;
      uint64_t CRCERR_FAST:1;
      uint64_t reservedSpace3:1;
      uint64_t BIT0ERR_FAST:1;
      uint64_t BIT1ERR_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t EDFLTDIS:1;
      uint64_t reservedSpace1:2;
      uint64_t PREXCEN:1;
      uint64_t reservedSpace2:1;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t WRMFRZ:1;
      uint64_t ECRWRE:1;
      uint64_t reservedSpace3:1;
      uint64_t ERRMSK_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:5;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG3;

  uint8_t res4[2056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR95;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t NCEFAFRZ:1;
      uint64_t ECCDIS:1;
      uint64_t RERRDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTERRIE:1;
      uint64_t FAERRIE:1;
      uint64_t HAERRIE:1;
      uint64_t reservedSpace2:15;
      uint64_t ECRWRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP1:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP2:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRADDR:14;
      uint64_t reservedSpace0:2;
      uint64_t SAID:3;
      uint64_t reservedSpace1:5;
      uint64_t NCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRSYNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEIOF:1;
      uint64_t reservedSpace0:1;
      uint64_t FANCEIOF:1;
      uint64_t HANCEIOF:1;
      uint64_t reservedSpace1:12;
      uint64_t CEIF:1;
      uint64_t reservedSpace2:1;
      uint64_t FANCEIF:1;
      uint64_t HANCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSR;

  uint8_t res6[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCVAL:6;
      uint64_t reservedSpace0:2;
      uint64_t TDCOFF:5;
      uint64_t reservedSpace1:1;
      uint64_t TDCFAIL:1;
      uint64_t TDCEN:1;
      uint64_t MBDSR0:2;
      uint64_t reservedSpace2:1;
      uint64_t MBDSR1:2;
      uint64_t reservedSpace3:1;
      uint64_t MBDSR2:2;
      uint64_t reservedSpace4:7;
      uint64_t FDRATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPSEG2:3;
      uint64_t reservedSpace0:2;
      uint64_t FPSEG1:3;
      uint64_t reservedSpace1:2;
      uint64_t FPROPSEG:5;
      uint64_t reservedSpace2:1;
      uint64_t FRJW:3;
      uint64_t reservedSpace3:1;
      uint64_t FPRESDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD_TXCRC:21;
      uint64_t reservedSpace0:3;
      uint64_t FD_MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCRC;

};

#define CAN_Flex_Controller_Area_Network_module_CAN_0 (*(volatile struct CAN_Flex_Controller_Area_Network_module_CAN_0_tag *) 0xffec0000)

struct CAN_Flex_Controller_Area_Network_module_CAN_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXMB:7;
      uint64_t reservedSpace0:1;
      uint64_t IDAM:2;
      uint64_t reservedSpace1:1;
      uint64_t FDEN:1;
      uint64_t AEN:1;
      uint64_t LPRIOEN:1;
      uint64_t reservedSpace2:2;
      uint64_t IRMQ:1;
      uint64_t SRXDIS:1;
      uint64_t reservedSpace3:2;
      uint64_t LPMACK:1;
      uint64_t WRNEN:1;
      uint64_t reservedSpace4:1;
      uint64_t SUPV:1;
      uint64_t FRZACK:1;
      uint64_t SOFTRST:1;
      uint64_t reservedSpace5:1;
      uint64_t NOTRDY:1;
      uint64_t HALT:1;
      uint64_t RFEN:1;
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROPSEG:3;
      uint64_t LOM:1;
      uint64_t LBUF:1;
      uint64_t TSYN:1;
      uint64_t BOFFREC:1;
      uint64_t SMP:1;
      uint64_t reservedSpace0:2;
      uint64_t RWRNMSK:1;
      uint64_t TWRNMSK:1;
      uint64_t LPB:1;
      uint64_t CLKSRC:1;
      uint64_t ERRMSK:1;
      uint64_t BOFFMSK:1;
      uint64_t PSEG2:3;
      uint64_t PSEG1:3;
      uint64_t RJW:2;
      uint64_t PRESDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMER;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX14M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX14MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX15M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX15MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXERRCNT:8;
      uint64_t RXERRCNT:8;
      uint64_t TXERRCNT_FAST:8;
      uint64_t RXERRCNT_FAST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ERRINT:1;
      uint64_t BOFFINT:1;
      uint64_t RX:1;
      uint64_t FLTCONF:2;
      uint64_t TX:1;
      uint64_t IDLE:1;
      uint64_t RXWRN:1;
      uint64_t TXWRN:1;
      uint64_t STFERR:1;
      uint64_t FRMERR:1;
      uint64_t CRCERR:1;
      uint64_t ACKERR:1;
      uint64_t BIT0ERR:1;
      uint64_t BIT1ERR:1;
      uint64_t RWRNINT:1;
      uint64_t TWRNINT:1;
      uint64_t SYNCH:1;
      uint64_t reservedSpace1:1;
      uint64_t ERRINT_FAST:1;
      uint64_t ERROVR:1;
      uint64_t reservedSpace2:4;
      uint64_t STFERR_FAST:1;
      uint64_t FRMERR_FAST:1;
      uint64_t CRCERR_FAST:1;
      uint64_t reservedSpace3:1;
      uint64_t BIT0ERR_FAST:1;
      uint64_t BIT1ERR_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF31TO0M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF63TO32I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF0I:1;
      uint64_t BUF4TO1I:4;
      uint64_t BUF5I:1;
      uint64_t BUF6I:1;
      uint64_t BUF7I:1;
      uint64_t BUF31TO8I:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t EDFLTDIS:1;
      uint64_t reservedSpace1:2;
      uint64_t PREXCEN:1;
      uint64_t reservedSpace2:1;
      uint64_t EACEN:1;
      uint64_t RRS:1;
      uint64_t MRP:1;
      uint64_t TASD:5;
      uint64_t RFFN:4;
      uint64_t WRMFRZ:1;
      uint64_t ECRWRE:1;
      uint64_t reservedSpace3:1;
      uint64_t ERRMSK_FAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t IMB:1;
      uint64_t VPS:1;
      uint64_t reservedSpace1:1;
      uint64_t LPTM:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCRC:15;
      uint64_t reservedSpace0:1;
      uint64_t MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FGM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFGMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDHIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSEG2:5;
      uint64_t EPSEG1:5;
      uint64_t EPROPSEG:6;
      uint64_t ERJW:5;
      uint64_t EPRESDIV:10;
      uint64_t BTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CBT;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMASK3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFLAG3;

  uint8_t res4[2056];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXIMR95;

  uint8_t res5[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t NCEFAFRZ:1;
      uint64_t ECCDIS:1;
      uint64_t RERRDIS:1;
      uint64_t reservedSpace1:3;
      uint64_t EXTERRIE:1;
      uint64_t FAERRIE:1;
      uint64_t HAERRIE:1;
      uint64_t reservedSpace2:15;
      uint64_t ECRWRDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INJADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFLIP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIDPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFLIP0:5;
      uint64_t reservedSpace0:3;
      uint64_t PFLIP1:5;
      uint64_t reservedSpace1:3;
      uint64_t PFLIP2:5;
      uint64_t reservedSpace2:3;
      uint64_t PFLIP3:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRIPPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRADDR:14;
      uint64_t reservedSpace0:2;
      uint64_t SAID:3;
      uint64_t reservedSpace1:5;
      uint64_t NCE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYND0:5;
      uint64_t reservedSpace0:2;
      uint64_t BE0:1;
      uint64_t SYND1:5;
      uint64_t reservedSpace1:2;
      uint64_t BE1:1;
      uint64_t SYND2:5;
      uint64_t reservedSpace2:2;
      uint64_t BE2:1;
      uint64_t SYND3:5;
      uint64_t reservedSpace3:2;
      uint64_t BE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RERRSYNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEIOF:1;
      uint64_t reservedSpace0:1;
      uint64_t FANCEIOF:1;
      uint64_t HANCEIOF:1;
      uint64_t reservedSpace1:12;
      uint64_t CEIF:1;
      uint64_t reservedSpace2:1;
      uint64_t FANCEIF:1;
      uint64_t HANCEIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSR;

  uint8_t res6[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDCVAL:6;
      uint64_t reservedSpace0:2;
      uint64_t TDCOFF:5;
      uint64_t reservedSpace1:1;
      uint64_t TDCFAIL:1;
      uint64_t TDCEN:1;
      uint64_t MBDSR0:2;
      uint64_t reservedSpace2:1;
      uint64_t MBDSR1:2;
      uint64_t reservedSpace3:1;
      uint64_t MBDSR2:2;
      uint64_t reservedSpace4:7;
      uint64_t FDRATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPSEG2:3;
      uint64_t reservedSpace0:2;
      uint64_t FPSEG1:3;
      uint64_t reservedSpace1:2;
      uint64_t FPROPSEG:5;
      uint64_t reservedSpace2:1;
      uint64_t FRJW:3;
      uint64_t reservedSpace3:1;
      uint64_t FPRESDIV:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCBT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD_TXCRC:21;
      uint64_t reservedSpace0:3;
      uint64_t FD_MBCRC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDCRC;

};

#define CAN_Flex_Controller_Area_Network_module_CAN_2 (*(volatile struct CAN_Flex_Controller_Area_Network_module_CAN_2_tag *) 0xfbec0000)

struct CMU_CMU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_0 (*(volatile struct CMU_CMU_0_tag *) 0xfbfb0200)

struct CMU_CMU_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_2 (*(volatile struct CMU_CMU_2_tag *) 0xfbfb0280)

struct CMU_CMU_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_3 (*(volatile struct CMU_CMU_3_tag *) 0xfbfb02c0)

struct CMU_CMU_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_4 (*(volatile struct CMU_CMU_4_tag *) 0xfbfb0300)

struct CMU_CMU_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_6 (*(volatile struct CMU_CMU_6_tag *) 0xfbfb0380)

struct CMU_CMU_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_7 (*(volatile struct CMU_CMU_7_tag *) 0xfbfb03c0)

struct CMU_CMU_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_8 (*(volatile struct CMU_CMU_8_tag *) 0xfbfb0400)

struct CMU_CMU_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_9 (*(volatile struct CMU_CMU_9_tag *) 0xfbfb0440)

struct CMU_CMU_10_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_10 (*(volatile struct CMU_CMU_10_tag *) 0xfbfb0480)

struct CMU_CMU_11_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_11 (*(volatile struct CMU_CMU_11_tag *) 0xfbfb04c0)

struct CMU_CMU_12_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CME:1;
      uint64_t RCDIV:2;
      uint64_t reservedSpace0:5;
      uint64_t CKSEL1:2;
      uint64_t reservedSpace1:13;
      uint64_t SFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFREF:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFREFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OLRI:1;
      uint64_t FLLI:1;
      uint64_t FHHI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MD:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MDR;

};

#define CMU_CMU_12 (*(volatile struct CMU_CMU_12_tag *) 0xfbfb0500)

struct CRC_CRC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP3;

};

#define CRC_CRC_0 (*(volatile struct CRC_CRC_0_tag *) 0xfff64000)

struct CRC_CRC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INV:1;
      uint64_t SWAP:1;
      uint64_t POLYG:2;
      uint64_t SWAP_BITWISE:1;
      uint64_t SWAP_BYTEWISE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OUTP3;

};

#define CRC_CRC_1 (*(volatile struct CRC_CRC_1_tag *) 0xfbf64000)

struct CSE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIE:1;
      uint64_t DRE:1;
      uint64_t SUS:1;
      uint64_t MDIS:1;
      uint64_t SFE:1;
      uint64_t KBS:1;
      uint64_t reservedSpace0:2;
      uint64_t DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:1;
      uint64_t SB:1;
      uint64_t BIN:1;
      uint64_t BFN:1;
      uint64_t BOK:1;
      uint64_t RIN:1;
      uint64_t EDB:1;
      uint64_t IDB:1;
      uint64_t EX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P5;

};

#define CSE (*(volatile struct CSE_tag *) 0xfc074000)

struct CTE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REP_CNT:16;
      uint64_t RFS_DLY:4;
      uint64_t RCS_DLY:4;
      uint64_t OPMOD_SL:2;
      uint64_t eDMA_CTL:2;
      uint64_t MA_SL_ST:1;
      uint64_t CTE_RST:1;
      uint64_t RFS_PGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTECK_DV:6;
      uint64_t reservedSpace0:2;
      uint64_t CLKDIV_1:3;
      uint64_t CLKDIV_2:3;
      uint64_t reservedSpace1:2;
      uint64_t CLKDIV_3:3;
      uint64_t CLKDIV_4:3;
      uint64_t reservedSpace2:2;
      uint64_t TIMEMODE:1;
      uint64_t CTE_EN:1;
      uint64_t CHKSM_MD:1;
      uint64_t CKSM_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_0:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_LSB31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT0_MSB31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIME_1:16;
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:9;
      uint64_t SPT_PHIV:1;
      uint64_t SPT_EVT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_LSB31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
      uint64_t RCS_DEF:2;
      uint64_t RFS_DEF:2;
      uint64_t ACQ_WIN:1;
      uint64_t ETIME_AX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT1_MSB31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:8;
      uint64_t PH_INVT:1;
      uint64_t STP_EVT:4;
      uint64_t reservedSpace2:1;
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGTYPE00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RCV_OVF:1;
      uint64_t reservedSpace1:8;
      uint64_t PH_INVT:1;
      uint64_t STP_EVT:4;
      uint64_t reservedSpace2:1;
      uint64_t CTE_TYP0:2;
      uint64_t CTE_TYP1:2;
      uint64_t CTE_TYP2:2;
      uint64_t CTE_TYP3:2;
      uint64_t CTE_TYP4:2;
      uint64_t CTE_TYP5:2;
      uint64_t CTE_TYP6:2;
      uint64_t CTE_TYP7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGTYPE01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCS:2;
      uint64_t RFS:2;
      uint64_t :1;
      uint64_t ETIME_AUX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGTYPE10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCS:2;
      uint64_t RFS:2;
      uint64_t :1;
      uint64_t ETIME_AUX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGTYPE11;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TT0_STEN:1;
      uint64_t TT1_STEN:1;
      uint64_t TT0_EDEN:1;
      uint64_t TT1_EDEN:1;
      uint64_t AC_WD_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RCS_EN:1;
      uint64_t RFS_EN:1;
      uint64_t eDMA_TEN:1;
      uint64_t LST_EXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TT0_STRT:1;
      uint64_t TT1_STRT:1;
      uint64_t TT0_END:1;
      uint64_t TT1_END:1;
      uint64_t ACQ_WIN:1;
      uint64_t reservedSpace0:1;
      uint64_t RCS:1;
      uint64_t RFS:1;
      uint64_t eDMA_TRG:1;
      uint64_t LAST_EXC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCV_OVCT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCVOFCNT;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKS_LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSM_LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHKS_MSB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CKSM_MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LUT_SEL:1;
      uint64_t CONT_ERR:1;
      uint64_t SLV_ALGN:1;
      uint64_t FSM_ST:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBG_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TT0_DUR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_DUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TT1_DUR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LUT_DUR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SEL0:2;
      uint64_t CLK_SEL1:2;
      uint64_t CLK_SEL2:2;
      uint64_t CLK_SEL3:2;
      uint64_t CLK_SEL4:2;
      uint64_t CLK_SEL5:2;
      uint64_t CLK_SEL6:2;
      uint64_t CLK_SEL7:2;
      uint64_t CLK_SEL8:2;
      uint64_t CLK_SEL9:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSEL;

};

#define CTE (*(volatile struct CTE_tag *) 0xffd0c000)

struct DMAMUX_DMAMUX_0_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX_DMAMUX_0 (*(volatile struct DMAMUX_DMAMUX_0_tag *) 0xfff6c000)

struct DMAMUX_DMAMUX_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t SOURCE:6;
      uint64_t TRIG:1;
      uint64_t ENBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) CHCFG15;

};

#define DMAMUX_DMAMUX_1 (*(volatile struct DMAMUX_DMAMUX_1_tag *) 0xfbf6c000)

struct DTS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTS_EN:1;
      uint64_t DTS_EN_B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STARTUP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEMAPHORE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEMAPHORE_B;

};

#define DTS (*(volatile struct DTS_tag *) 0xfff38000)

struct EIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIMCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t EICH0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHEN;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CHKBIT_MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD_WORD00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_3DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD_WORD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B4_7DATA_MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EICHD_WORD20;

};

#define EIM (*(volatile struct EIM_tag *) 0xfc07c000)

struct eTimer_Enhanced_Motor_Control_Timer_ETIMER_1_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t COMP2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_COMP27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CAPT27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LOAD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_LOAD7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t HOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_HOLD7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNTR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CNTR7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SECSRC:5;
      uint64_t DIR:1;
      uint64_t LENGTH:1;
      uint64_t ONCE:1;
      uint64_t PRISRC:5;
      uint64_t CNTMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUTMODE:4;
      uint64_t MSTR:1;
      uint64_t OPS:1;
      uint64_t PIPS:1;
      uint64_t SIPS:1;
      uint64_t COINIT:2;
      uint64_t COFRC:1;
      uint64_t FORCE:1;
      uint64_t VAL:1;
      uint64_t INPUT:1;
      uint64_t RDNT:1;
      uint64_t OEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBGEN:2;
      uint64_t C1FCNT:3;
      uint64_t C2FCNT:3;
      uint64_t reservedSpace0:5;
      uint64_t ROC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CTRL37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCF:1;
      uint64_t TCF1:1;
      uint64_t TCF2:1;
      uint64_t TOF:1;
      uint64_t IELF:1;
      uint64_t IEHF:1;
      uint64_t ICF1:1;
      uint64_t ICF2:1;
      uint64_t RCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_STS7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TCFIE:1;
      uint64_t TCF1IE:1;
      uint64_t TCF2IE:1;
      uint64_t TOFIE:1;
      uint64_t IELFIE:1;
      uint64_t IEHFIE:1;
      uint64_t ICF1IE:1;
      uint64_t ICF2IE:1;
      uint64_t RCFIE:1;
      uint64_t reservedSpace0:3;
      uint64_t CMPLD1DE:1;
      uint64_t CMPLD2DE:1;
      uint64_t ICF1DE:1;
      uint64_t ICF2DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_INTDMA7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPLD2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CMPLD27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARM:1;
      uint64_t ONESHOT:1;
      uint64_t CFWM:2;
      uint64_t CPT1MODE:2;
      uint64_t CPT2MODE:2;
      uint64_t CMPMODE:2;
      uint64_t CLC1:3;
      uint64_t CLC2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_CCCTRL7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CH_FILT7;

  uint8_t res0[12];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ENBL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ENBL;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DREQ0:5;
      uint64_t reservedSpace0:10;
      uint64_t DREQ0_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DREQ0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DREQ1:5;
      uint64_t reservedSpace0:10;
      uint64_t DREQ1_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DREQ1;

};

#define eTimer_Enhanced_Motor_Control_Timer_ETIMER_1 (*(volatile struct eTimer_Enhanced_Motor_Control_Timer_ETIMER_1_tag *) 0xffc24000)

struct FCCU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPR:5;
      uint64_t reservedSpace0:1;
      uint64_t OPS:2;
      uint64_t NVML:1;
      uint64_t DEBUG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTRLK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRLK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FOP:6;
      uint64_t FOM:3;
      uint64_t PS:1;
      uint64_t SM:1;
      uint64_t reservedSpace0:1;
      uint64_t OD:1;
      uint64_t reservedSpace1:2;
      uint64_t FOPE:1;
      uint64_t reservedSpace2:6;
      uint64_t FCCU_SET_CLEAR:2;
      uint64_t FCCU_SET_AFTER_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  uint8_t res0[16];

  uint32_t NCF_CFG0;
  uint32_t NCF_CFG1;
  uint32_t NCF_CFG2;
  uint32_t NCF_CFG3;
  uint8_t res1[32];

  uint32_t NCFS_CFG0;
  uint32_t NCFS_CFG1;
  uint32_t NCFS_CFG2;
  uint32_t NCFS_CFG3;
  uint32_t NCFS_CFG4;
  uint32_t NCFS_CFG5;
  uint32_t NCFS_CFG6;
  uint32_t NCFS_CFG7;
  uint8_t res2[20];

  uint32_t NCF_S0;
  uint32_t NCF_S1;
  uint32_t NCF_S2;
  uint32_t NCF_S3;
  uint32_t NCFK;
  uint32_t NCF_E0;
  uint32_t NCF_E1;
  uint32_t NCF_E2;
  uint32_t NCF_E3;
  uint32_t NCF_TOE0;
  uint32_t NCF_TOE1;
  uint32_t NCF_TOE2;
  uint32_t NCF_TOE3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NCF_TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_TO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUT0:1;
      uint64_t EOUT1:1;
      uint64_t reservedSpace0:2;
      uint64_t EIN0:1;
      uint64_t EIN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EINOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATUS:3;
      uint64_t ESTAT:1;
      uint64_t PhysicErrorPin:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NAFS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) N2AF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFFS:8;
      uint64_t AF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) A2FF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NFFS:8;
      uint64_t NF_SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) N2FF_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAFS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2A_STATUS;

  uint8_t res3[8];

  uint32_t NCFF;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_TO_STAT:1;
      uint64_t ALRM_STAT:1;
      uint64_t NMI_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_TO_IEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XTMR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) XTMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MCS0:4;
      uint64_t reservedSpace0:2;
      uint64_t FS0:1;
      uint64_t VL0:1;
      uint64_t MCS1:4;
      uint64_t reservedSpace1:2;
      uint64_t FS1:1;
      uint64_t VL1:1;
      uint64_t MCS2:4;
      uint64_t reservedSpace2:2;
      uint64_t FS2:1;
      uint64_t VL2:1;
      uint64_t MCS3:4;
      uint64_t reservedSpace3:2;
      uint64_t FS3:1;
      uint64_t VL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSKEY:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRANS_LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERMNTKEY:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERMNT_LOCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DELTA_T:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DELTA_T;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_ALARM_EN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMIENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_EN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOUTENx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOUT_SIG_EN3;

};

#define FCCU (*(volatile struct FCCU_tag *) 0xfbf58000)

struct FlexPWM_FlexPWM_0_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CNT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INIT0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLK_SEL:2;
      uint64_t RELOAD_SEL:1;
      uint64_t FORCE_SEL:3;
      uint64_t FORCE:1;
      uint64_t FRCEN:1;
      uint64_t INIT_SEL:2;
      uint64_t PWMX_INIT:1;
      uint64_t PWM45_INIT:1;
      uint64_t PWM23_INIT:1;
      uint64_t INDEP:1;
      uint64_t reservedSpace0:1;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBLEN:1;
      uint64_t reservedSpace0:1;
      uint64_t LDMOD:1;
      uint64_t PHSSHFT:1;
      uint64_t PRSC:3;
      uint64_t reservedSpace1:1;
      uint64_t DT:2;
      uint64_t FULL:1;
      uint64_t HALF:1;
      uint64_t LDFQ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL50;

  uint8_t res0[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWMXFS:2;
      uint64_t PWMBFS:2;
      uint64_t PWMAFS:2;
      uint64_t reservedSpace0:2;
      uint64_t POLX:1;
      uint64_t POLB:1;
      uint64_t POLA:1;
      uint64_t reservedSpace1:2;
      uint64_t PWMX_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_OCTRL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF:6;
      uint64_t CFX0:1;
      uint64_t CFX1:1;
      uint64_t reservedSpace0:4;
      uint64_t RF:1;
      uint64_t REF:1;
      uint64_t RUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_STS0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPIE:6;
      uint64_t CX0IE:1;
      uint64_t CX1IE:1;
      uint64_t reservedSpace0:4;
      uint64_t RIE:1;
      uint64_t REIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INTEN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CX0DE:1;
      uint64_t CX1DE:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPTDE:2;
      uint64_t FAND:1;
      uint64_t VALDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DMAEN0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUT_TRIG_EN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_TCTRL0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DISA:4;
      uint64_t DISB:4;
      uint64_t DISX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DISMAP0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT1:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT10;

  uint8_t res1[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARMX:1;
      uint64_t ONESHOTX:1;
      uint64_t EDGX0:2;
      uint64_t EDGX1:2;
      uint64_t INPSELX:1;
      uint64_t EDGCNTX_EN:1;
      uint64_t CFXWM:2;
      uint64_t CX0CNT:3;
      uint64_t CX1CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCTRLX0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EDGCMPX:8;
      uint64_t EDGCNTX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCMPX0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL00;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL0CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL0CYC0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL1CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL1CYC0;

  uint8_t res2[20];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CNT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INIT1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLK_SEL:2;
      uint64_t RELOAD_SEL:1;
      uint64_t FORCE_SEL:3;
      uint64_t FORCE:1;
      uint64_t FRCEN:1;
      uint64_t INIT_SEL:2;
      uint64_t PWMX_INIT:1;
      uint64_t PWM45_INIT:1;
      uint64_t PWM23_INIT:1;
      uint64_t INDEP:1;
      uint64_t reservedSpace0:1;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBLEN:1;
      uint64_t reservedSpace0:1;
      uint64_t LDMOD:1;
      uint64_t PHSSHFT:1;
      uint64_t PRSC:3;
      uint64_t reservedSpace1:1;
      uint64_t DT:2;
      uint64_t FULL:1;
      uint64_t HALF:1;
      uint64_t LDFQ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL51;

  uint8_t res3[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWMXFS:2;
      uint64_t PWMBFS:2;
      uint64_t PWMAFS:2;
      uint64_t reservedSpace0:2;
      uint64_t POLX:1;
      uint64_t POLB:1;
      uint64_t POLA:1;
      uint64_t reservedSpace1:2;
      uint64_t PWMX_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_OCTRL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF:6;
      uint64_t CFX0:1;
      uint64_t CFX1:1;
      uint64_t reservedSpace0:4;
      uint64_t RF:1;
      uint64_t REF:1;
      uint64_t RUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_STS1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPIE:6;
      uint64_t CX0IE:1;
      uint64_t CX1IE:1;
      uint64_t reservedSpace0:4;
      uint64_t RIE:1;
      uint64_t REIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INTEN1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CX0DE:1;
      uint64_t CX1DE:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPTDE:2;
      uint64_t FAND:1;
      uint64_t VALDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DMAEN1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUT_TRIG_EN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_TCTRL1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DISA:4;
      uint64_t DISB:4;
      uint64_t DISX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DISMAP1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT1:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT11;

  uint8_t res4[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARMX:1;
      uint64_t ONESHOTX:1;
      uint64_t EDGX0:2;
      uint64_t EDGX1:2;
      uint64_t INPSELX:1;
      uint64_t EDGCNTX_EN:1;
      uint64_t CFXWM:2;
      uint64_t CX0CNT:3;
      uint64_t CX1CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCTRLX1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EDGCMPX:8;
      uint64_t EDGCNTX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCMPX1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL01;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL0CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL0CYC1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL1CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL1CYC1;

  uint8_t res5[20];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CNT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INIT2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLK_SEL:2;
      uint64_t RELOAD_SEL:1;
      uint64_t FORCE_SEL:3;
      uint64_t FORCE:1;
      uint64_t FRCEN:1;
      uint64_t INIT_SEL:2;
      uint64_t PWMX_INIT:1;
      uint64_t PWM45_INIT:1;
      uint64_t PWM23_INIT:1;
      uint64_t INDEP:1;
      uint64_t reservedSpace0:1;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBLEN:1;
      uint64_t reservedSpace0:1;
      uint64_t LDMOD:1;
      uint64_t PHSSHFT:1;
      uint64_t PRSC:3;
      uint64_t reservedSpace1:1;
      uint64_t DT:2;
      uint64_t FULL:1;
      uint64_t HALF:1;
      uint64_t LDFQ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL02;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL52;

  uint8_t res6[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWMXFS:2;
      uint64_t PWMBFS:2;
      uint64_t PWMAFS:2;
      uint64_t reservedSpace0:2;
      uint64_t POLX:1;
      uint64_t POLB:1;
      uint64_t POLA:1;
      uint64_t reservedSpace1:2;
      uint64_t PWMX_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_OCTRL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF:6;
      uint64_t CFX0:1;
      uint64_t CFX1:1;
      uint64_t reservedSpace0:4;
      uint64_t RF:1;
      uint64_t REF:1;
      uint64_t RUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_STS2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPIE:6;
      uint64_t CX0IE:1;
      uint64_t CX1IE:1;
      uint64_t reservedSpace0:4;
      uint64_t RIE:1;
      uint64_t REIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INTEN2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CX0DE:1;
      uint64_t CX1DE:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPTDE:2;
      uint64_t FAND:1;
      uint64_t VALDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DMAEN2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUT_TRIG_EN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_TCTRL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DISA:4;
      uint64_t DISB:4;
      uint64_t DISX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DISMAP2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT02;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT1:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT12;

  uint8_t res7[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARMX:1;
      uint64_t ONESHOTX:1;
      uint64_t EDGX0:2;
      uint64_t EDGX1:2;
      uint64_t INPSELX:1;
      uint64_t EDGCNTX_EN:1;
      uint64_t CFXWM:2;
      uint64_t CX0CNT:3;
      uint64_t CX1CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCTRLX2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EDGCMPX:8;
      uint64_t EDGCNTX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCMPX2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL02;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL0CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL0CYC2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL1CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL1CYC2;

  uint8_t res8[20];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CNT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INIT3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CLK_SEL:2;
      uint64_t RELOAD_SEL:1;
      uint64_t FORCE_SEL:3;
      uint64_t FORCE:1;
      uint64_t FRCEN:1;
      uint64_t INIT_SEL:2;
      uint64_t PWMX_INIT:1;
      uint64_t PWM45_INIT:1;
      uint64_t PWM23_INIT:1;
      uint64_t INDEP:1;
      uint64_t reservedSpace0:1;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DBLEN:1;
      uint64_t reservedSpace0:1;
      uint64_t LDMOD:1;
      uint64_t PHSSHFT:1;
      uint64_t PRSC:3;
      uint64_t reservedSpace1:1;
      uint64_t DT:2;
      uint64_t FULL:1;
      uint64_t HALF:1;
      uint64_t LDFQ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CTRL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL03;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t VAL5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_VAL53;

  uint8_t res9[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWMXFS:2;
      uint64_t PWMBFS:2;
      uint64_t PWMAFS:2;
      uint64_t reservedSpace0:2;
      uint64_t POLX:1;
      uint64_t POLB:1;
      uint64_t POLA:1;
      uint64_t reservedSpace1:2;
      uint64_t PWMX_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_OCTRL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPF:6;
      uint64_t CFX0:1;
      uint64_t CFX1:1;
      uint64_t reservedSpace0:4;
      uint64_t RF:1;
      uint64_t REF:1;
      uint64_t RUF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_STS3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CMPIE:6;
      uint64_t CX0IE:1;
      uint64_t CX1IE:1;
      uint64_t reservedSpace0:4;
      uint64_t RIE:1;
      uint64_t REIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_INTEN3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CX0DE:1;
      uint64_t CX1DE:1;
      uint64_t reservedSpace0:4;
      uint64_t CAPTDE:2;
      uint64_t FAND:1;
      uint64_t VALDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DMAEN3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUT_TRIG_EN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_TCTRL3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DISA:4;
      uint64_t DISB:4;
      uint64_t DISX:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DISMAP3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT0:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT03;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DTCNT1:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_DTCNT13;

  uint8_t res10[8];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ARMX:1;
      uint64_t ONESHOTX:1;
      uint64_t EDGX0:2;
      uint64_t EDGX1:2;
      uint64_t INPSELX:1;
      uint64_t EDGCNTX_EN:1;
      uint64_t CFXWM:2;
      uint64_t CX0CNT:3;
      uint64_t CX1CNT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCTRLX3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t EDGCMPX:8;
      uint64_t EDGCNTX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CAPTCMPX3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL03;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL0CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL0CYC3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CAPTVAL1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t CVAL1CYC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SUB_CVAL1CYC3;

  uint8_t res11[20];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PWMX_EN:4;
      uint64_t PWMB_EN:4;
      uint64_t PWMA_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) OUTEN;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t MASKX:4;
      uint64_t MASKB:4;
      uint64_t MASKA:4;
      uint64_t UPDATE_MASK:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MASK;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t OUT45_0:1;
      uint64_t OUT23_0:1;
      uint64_t OUT45_1:1;
      uint64_t OUT23_1:1;
      uint64_t OUT45_2:1;
      uint64_t OUT23_2:1;
      uint64_t OUT45_3:1;
      uint64_t OUT23_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) SWCOUT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SEL45_0:2;
      uint64_t SEL23_0:2;
      uint64_t SEL45_1:2;
      uint64_t SEL23_1:2;
      uint64_t SEL45_2:2;
      uint64_t SEL23_2:2;
      uint64_t SEL45_3:2;
      uint64_t SEL23_3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) DTSRCSEL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t LDOK:4;
      uint64_t CLDOK:4;
      uint64_t RUN:4;
      uint64_t IPOL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MCTRL;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FIE:4;
      uint64_t FSAFE:4;
      uint64_t FAUTO:4;
      uint64_t FLVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCTRL;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FFLAG:4;
      uint64_t FFULL:4;
      uint64_t FFPIN:4;
      uint64_t FTEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FSTS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t FILT_PER:8;
      uint64_t FILT_CNT:3;
      uint64_t reservedSpace0:4;
      uint64_t GSTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FFILT;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t NOCOMB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) FCTRL2;

};

#define FlexPWM_FlexPWM_0 (*(volatile struct FlexPWM_FlexPWM_0_tag *) 0xfbc00000)

struct I2C_I2C_1_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBAD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IBC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DMAEN:1;
      uint64_t RSTA:1;
      uint64_t NOACK:1;
      uint64_t TXRX:1;
      uint64_t MSSL:1;
      uint64_t IBIE:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RXAK:1;
      uint64_t IBIF:1;
      uint64_t SRW:1;
      uint64_t reservedSpace0:2;
      uint64_t IBB:1;
      uint64_t IAAS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t BIIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBIC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IPG_DEBUG_EN:1;
      uint64_t IPG_DEBUG_HALTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBDBG;

};

#define I2C_I2C_1 (*(volatile struct I2C_I2C_1_tag *) 0xfbe68000)

struct I2C_I2C_2_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ADR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBAD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IBC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBFD;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DMAEN:1;
      uint64_t RSTA:1;
      uint64_t NOACK:1;
      uint64_t TXRX:1;
      uint64_t MSSL:1;
      uint64_t IBIE:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBCR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RXAK:1;
      uint64_t IBIF:1;
      uint64_t SRW:1;
      uint64_t reservedSpace0:2;
      uint64_t IBB:1;
      uint64_t IAAS:1;
      uint64_t TCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBSR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBDR;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t BIIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBIC;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t IPG_DEBUG_EN:1;
      uint64_t IPG_DEBUG_HALTED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) IBDBG;

};

#define I2C_I2C_2 (*(volatile struct I2C_I2C_2_tag *) 0xfbe6c000)

struct INTC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t HVEN1:1;
      uint64_t reservedSpace1:3;
      uint64_t HVEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPR2;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INTVEC:10;
      uint64_t VTBA:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IACKR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t INTVEC:10;
      uint64_t VTBA:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IACKR2;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EOIR2;

  uint8_t res3[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR0;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR1;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR2;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR3;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR4;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR5;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR6;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR7;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR8;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR9;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR10;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR11;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR12;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR13;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR14;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t CLR:1;
      uint64_t SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) SSCIR15;

  uint8_t res4[16];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR12;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR13;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR14;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR15;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR16;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR17;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR18;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR19;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR20;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR21;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR22;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR23;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR24;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR25;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR26;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR27;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR28;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR29;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR30;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR31;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR32;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR33;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR34;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR35;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR36;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR37;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR38;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR39;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR40;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR41;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR42;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR43;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR44;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR45;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR46;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR47;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR48;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR49;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR50;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR51;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR52;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR53;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR54;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR55;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR56;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR57;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR58;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR59;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR60;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR61;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR62;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR63;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR64;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR65;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR66;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR67;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR68;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR69;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR70;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR71;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR72;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR73;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR74;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR75;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR76;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR77;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR78;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR79;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR80;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR81;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR82;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR83;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR84;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR85;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR86;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR87;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR88;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR89;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR90;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR91;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR92;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR93;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR94;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR95;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR96;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR97;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR98;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR99;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR100;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR101;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR102;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR103;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR104;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR105;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR106;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR107;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR108;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR109;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR110;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR111;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR112;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR113;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR114;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR115;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR116;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR117;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR118;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR119;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR120;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR121;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR122;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR123;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR124;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR125;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR126;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR127;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR128;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR129;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR130;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR131;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR132;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR133;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR134;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR135;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR136;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR137;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR138;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR139;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR140;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR141;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR142;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR143;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR144;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR145;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR146;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR147;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR148;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR149;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR150;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR151;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR152;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR153;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR154;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR155;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR156;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR157;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR158;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR159;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR160;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR161;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR162;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR163;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR164;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR165;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR166;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR167;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR168;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR169;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR170;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR171;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR172;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR173;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR174;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR175;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR176;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR177;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR178;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR179;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR180;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR181;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR182;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR183;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR184;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR185;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR186;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR187;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR188;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR189;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR190;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR191;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR192;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR193;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR194;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR195;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR196;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR197;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR198;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR199;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR200;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR201;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR202;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR203;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR204;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR205;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR206;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR207;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR208;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR209;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR210;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR211;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR212;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR213;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR214;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR215;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR216;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR217;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR218;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR219;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR220;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR221;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR222;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR223;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR224;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR225;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR226;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR227;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR228;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR229;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR230;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR231;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR232;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR233;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR234;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR235;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR236;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR237;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR238;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR239;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR240;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR241;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR242;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR243;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR244;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR245;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR246;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR247;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR248;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR249;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR250;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR251;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR252;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR253;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR254;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR255;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR256;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR257;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR258;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR259;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR260;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR261;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR262;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR263;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR264;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR265;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR266;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR267;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR268;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR269;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR270;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR271;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR272;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR273;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR274;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR275;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR276;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR277;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR278;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR279;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR280;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR281;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR282;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR283;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR284;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR285;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR286;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR287;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR288;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR289;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR290;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR291;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR292;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR293;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR294;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR295;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR296;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR297;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR298;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR299;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR300;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR301;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR302;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR303;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR304;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR305;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR306;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR307;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR308;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR309;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR310;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR311;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR312;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR313;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR314;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR315;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR316;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR317;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR318;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR319;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR320;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR321;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR322;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR323;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR324;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR325;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR326;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR327;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR328;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR329;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR330;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR331;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR332;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR333;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR334;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR335;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR336;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR337;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR338;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR339;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR340;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR341;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR342;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR343;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR344;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR345;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR346;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR347;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR348;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR349;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR350;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR351;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR352;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR353;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR354;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR355;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR356;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR357;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR358;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR359;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR360;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR361;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR362;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR363;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR364;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR365;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR366;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR367;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR368;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR369;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR370;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR371;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR372;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR373;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR374;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR375;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR376;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR377;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR378;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR379;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR380;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR381;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR382;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR383;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR384;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR385;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR386;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR387;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR388;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR389;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR390;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR391;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR392;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR393;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR394;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR395;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR396;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR397;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR398;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR399;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR400;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR401;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR402;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR403;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR404;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR405;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR406;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR407;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR408;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR409;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR410;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR411;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR412;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR413;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR414;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR415;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR416;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR417;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR418;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR419;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR420;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR421;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR422;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR423;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR424;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR425;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR426;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR427;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR428;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR429;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR430;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR431;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR432;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR433;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR434;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR435;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR436;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR437;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR438;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR439;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR440;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR441;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR442;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR443;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR444;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR445;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR446;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR447;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR448;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR449;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR450;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR451;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR452;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR453;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR454;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR455;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR456;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR457;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR458;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR459;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR460;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR461;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR462;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR463;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR464;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR465;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR466;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR467;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR468;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR469;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR470;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR471;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR472;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR473;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR474;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR475;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR476;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR477;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR478;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR479;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR480;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR481;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR482;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR483;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR484;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR485;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR486;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR487;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR488;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR489;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR490;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR491;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR492;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR493;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR494;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR495;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR496;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR497;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR498;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR499;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR500;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR501;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR502;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR503;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR504;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR505;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR506;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR507;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR508;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR509;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR510;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR511;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR512;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR513;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR514;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR515;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR516;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR517;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR518;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR519;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR520;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR521;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR522;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR523;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR524;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR525;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR526;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR527;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR528;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR529;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR530;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR531;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR532;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR533;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR534;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR535;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR536;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR537;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR538;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR539;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR540;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR541;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR542;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR543;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR544;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR545;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR546;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR547;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR548;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR549;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR550;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR551;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR552;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR553;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR554;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR555;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR556;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR557;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR558;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR559;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR560;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR561;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR562;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR563;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR564;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR565;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR566;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR567;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR568;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR569;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR570;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR571;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR572;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR573;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR574;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR575;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR576;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR577;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR578;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR579;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR580;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR581;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR582;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR583;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR584;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR585;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR586;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR587;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR588;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR589;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR590;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR591;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR592;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR593;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR594;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR595;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR596;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR597;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR598;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR599;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR600;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR601;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR602;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR603;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR604;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR605;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR606;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR607;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR608;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR609;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR610;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR611;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR612;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR613;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR614;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR615;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR616;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR617;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR618;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR619;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR620;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR621;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR622;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR623;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR624;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR625;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR626;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR627;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR628;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR629;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR630;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR631;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR632;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR633;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR634;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR635;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR636;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR637;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR638;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR639;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR640;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR641;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR642;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR643;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR644;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR645;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR646;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR647;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR648;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR649;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR650;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR651;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR652;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR653;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR654;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR655;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR656;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR657;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR658;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR659;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR660;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR661;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR662;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR663;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR664;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR665;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR666;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR667;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR668;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR669;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR670;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR671;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR672;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR673;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR674;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR675;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR676;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR677;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR678;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR679;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR680;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR681;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR682;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR683;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR684;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR685;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR686;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR687;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR688;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR689;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR690;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR691;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR692;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR693;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR694;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR695;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR696;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR697;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR698;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR699;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR700;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR701;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR702;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR703;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR704;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR705;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR706;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR707;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR708;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR709;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR710;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR711;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR712;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR713;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR714;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR715;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR716;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR717;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR718;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR719;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR720;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR721;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR722;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR723;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR724;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR725;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR726;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR727;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR728;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR729;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR730;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR731;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR732;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR733;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR734;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR735;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR736;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR737;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR738;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR739;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR740;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR741;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR742;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR743;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR744;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR745;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR746;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR747;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR748;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR749;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR750;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR751;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR752;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR753;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR754;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR755;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR756;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR757;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR758;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR759;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR760;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR761;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR762;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR763;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR764;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR765;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR766;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR767;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR768;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR769;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR770;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR771;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR772;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR773;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR774;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR775;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR776;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR777;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR778;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR779;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR780;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR781;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR782;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR783;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR784;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR785;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR786;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR787;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR788;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR789;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR790;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR791;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR792;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR793;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR794;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR795;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR796;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR797;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR798;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR799;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR800;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR801;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR802;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR803;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR804;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR805;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR806;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR807;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR808;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR809;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR810;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR811;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR812;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR813;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR814;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR815;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR816;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR817;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR818;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR819;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR820;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR821;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR822;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR823;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR824;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR825;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR826;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR827;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR828;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR829;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR830;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR831;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR832;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR833;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR834;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR835;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR836;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR837;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR838;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR839;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR840;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR841;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR842;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR843;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR844;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR845;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR846;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR847;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR848;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR849;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR850;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR851;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR852;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR853;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR854;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR855;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR856;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR857;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR858;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR859;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR860;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR861;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR862;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR863;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR864;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR865;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR866;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR867;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR868;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR869;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR870;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR871;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR872;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR873;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR874;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR875;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR876;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR877;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR878;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR879;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR880;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR881;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR882;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR883;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR884;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR885;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR886;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR887;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR888;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR889;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR890;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR891;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR892;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR893;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR894;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR895;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR896;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR897;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR898;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR899;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR900;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR901;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR902;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR903;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR904;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR905;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR906;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR907;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR908;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR909;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR910;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR911;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR912;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR913;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR914;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR915;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR916;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR917;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR918;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR919;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR920;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR921;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR922;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR923;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR924;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR925;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR926;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR927;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR928;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR929;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR930;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR931;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR932;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR933;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR934;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR935;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR936;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR937;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR938;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR939;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR940;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR941;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR942;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR943;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR944;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR945;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR946;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR947;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR948;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR949;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR950;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR951;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR952;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR953;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR954;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR955;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR956;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR957;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR958;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR959;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR960;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR961;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR962;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR963;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR964;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR965;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR966;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR967;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR968;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR969;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR970;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR971;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR972;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR973;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR974;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR975;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR976;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR977;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR978;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR979;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR980;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR981;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR982;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR983;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR984;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR985;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR986;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR987;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR988;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR989;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR990;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR991;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR992;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR993;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR994;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR995;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR996;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR997;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR998;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR999;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1000;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1001;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1002;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1003;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1004;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1005;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1006;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1007;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1008;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1009;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1010;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1011;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1012;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1013;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1014;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1015;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1016;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1017;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1018;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1019;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1020;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1021;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1022;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PRIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SWTN:1;
      uint64_t reservedSpace1:4;
      uint64_t PRC_SELN2:1;
      uint64_t PRC_SELN1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PSR1023;

  uint8_t res5[2004];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC12;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC12;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC12;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMRC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQ:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIPRIC22;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LATC22;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMERC22;

};

#define INTC (*(volatile struct INTC_tag *) 0xfc040000)

struct IRCOSC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t USER_TRIM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

};

#define IRCOSC (*(volatile struct IRCOSC_tag *) 0xfffb0000)

struct JTAGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTM:1;
      uint64_t jtagm_JCOMP:1;
      uint64_t TCKSEL:3;
      uint64_t IIE:1;
      uint64_t reservedSpace0:2;
      uint64_t inter_jtag_frame_timer:6;
      uint64_t reservedSpace1:17;
      uint64_t SWRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t NR:1;
      uint64_t Idle:1;
      uint64_t Nexus_err:1;
      uint64_t reservedSpace1:5;
      uint64_t TOOL:1;
      uint64_t reservedSpace2:2;
      uint64_t JTAGSAFE:1;
      uint64_t reservedSpace3:1;
      uint64_t JTAGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMS_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TMS_LOW:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDI_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TDI_LOW:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR3;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDO_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t TDO_HIGH:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIR1;

};

#define JTAGM (*(volatile struct JTAGM_tag *) 0xfff48000)

struct LINFlexD_LINFlexD_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:1;
      uint64_t SLEEP:1;
      uint64_t RBLM:1;
      uint64_t SSBL:1;
      uint64_t MME:1;
      uint64_t LBKM:1;
      uint64_t reservedSpace0:1;
      uint64_t BF:1;
      uint64_t MBL:4;
      uint64_t AUTOWU:1;
      uint64_t LASE:1;
      uint64_t CFD:1;
      uint64_t CCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRIE:1;
      uint64_t DTIE:1;
      uint64_t DRIE:1;
      uint64_t TOIE:1;
      uint64_t reservedSpace0:1;
      uint64_t WUIE:1;
      uint64_t LSIE:1;
      uint64_t BOIE:1;
      uint64_t FEIE:1;
      uint64_t reservedSpace1:2;
      uint64_t HEIE:1;
      uint64_t CEIE:1;
      uint64_t BEIE:1;
      uint64_t OCIE:1;
      uint64_t SZIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRF:1;
      uint64_t DTF:1;
      uint64_t DRF:1;
      uint64_t reservedSpace0:2;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t RXbusy:1;
      uint64_t DRBNE:1;
      uint64_t RMB:1;
      uint64_t reservedSpace1:2;
      uint64_t LINS:4;
      uint64_t RDC:3;
      uint64_t AUTOSYNC_COMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t reservedSpace0:6;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t IDPEF:1;
      uint64_t SDEF:1;
      uint64_t SFEF:1;
      uint64_t CEF:1;
      uint64_t BEF:1;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UART:1;
      uint64_t WL0:1;
      uint64_t PCE:1;
      uint64_t PC0:1;
      uint64_t TxEn:1;
      uint64_t RxEn:1;
      uint64_t PC1:1;
      uint64_t WL1:1;
      uint64_t TFBM:1;
      uint64_t RFBM:1;
      uint64_t RDFL_RFC:3;
      uint64_t TDFL_TFC:3;
      uint64_t WLS:1;
      uint64_t SBUR:2;
      uint64_t DTU_PCETX:1;
      uint64_t NEF:3;
      uint64_t ROSE:1;
      uint64_t OSR:4;
      uint64_t CSP:3;
      uint64_t MIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NF:1;
      uint64_t DTFTFF:1;
      uint64_t DRFRFE:1;
      uint64_t TO:1;
      uint64_t RFNE:1;
      uint64_t WUF:1;
      uint64_t RDI:1;
      uint64_t BOF:1;
      uint64_t FEF:1;
      uint64_t RMB:1;
      uint64_t PE:4;
      uint64_t OCF:1;
      uint64_t SZF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:8;
      uint64_t TOCE:1;
      uint64_t IOT:1;
      uint64_t MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OC1:8;
      uint64_t OC2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTO:7;
      uint64_t reservedSpace0:1;
      uint64_t RTO:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTOCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBR:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINFBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINIBRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HTRQ:1;
      uint64_t ABRQ:1;
      uint64_t DTRQ:1;
      uint64_t DDRQ:1;
      uint64_t WURQ:1;
      uint64_t IOPE:1;
      uint64_t IOBE:1;
      uint64_t TBDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BIDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:8;
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4:8;
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDRM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFMI:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:6;
      uint64_t reservedSpace0:2;
      uint64_t CCS:1;
      uint64_t DIR:1;
      uint64_t DFL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR:1;
      uint64_t STOP:1;
      uint64_t RDLIS:1;
      uint64_t TDLIS:1;
      uint64_t RDFBM:1;
      uint64_t TDFBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTPTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTO:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UARTCTO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMATXE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMARXE;

};

#define LINFlexD_LINFlexD_1 (*(volatile struct LINFlexD_LINFlexD_1_tag *) 0xffe90000)

struct MCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISABLE_SPECIAL_ENABLE:1;
      uint64_t RESERVED_0:7;
      uint64_t FIFO_DEPTH:4;
      uint64_t WATER_MARK:4;
      uint64_t NPC_NAL_FIFO_EXTENSION_MODE:2;
      uint64_t RESERVED_1:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NPC_SPECIAL_ENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFE_REF_LVD_MASK:1;
      uint64_t reservedSpace0:1;
      uint64_t RESERVED_0:1;
      uint64_t reservedSpace1:2;
      uint64_t AFE_LVD5_MASK:1;
      uint64_t AFE_LVD6_MASK:1;
      uint64_t AFE_LVD7_MASK:1;
      uint64_t AFE_LVD8_MASK:1;
      uint64_t reservedSpace2:1;
      uint64_t RESERVED_1:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFE_LVD_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RESERVED_0:2;
      uint64_t IN_CTE:1;
      uint64_t OUT_CTE:1;
      uint64_t reservedSpace1:10;
      uint64_t SIN_END_BYP:1;
      uint64_t RESERVED_1:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RCCU_DMA_STATUS:1;
      uint64_t SPT_NEXUS_THROTTLE_CONTROL:6;
      uint64_t reservedSpace0:3;
      uint64_t NXMC_2_FIFO_EN:1;
      uint64_t RESERVED_1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t POR_REN:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISC3;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NXMC_2_FIFO_OFLOW:1;
      uint64_t NAL_NPC_FIFO_OFLOW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NEX_FIFO_STATUS;

  uint8_t res1[16356];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED_0:1;
      uint64_t RESERVED_1:1;
      uint64_t CLKOUT1:4;
      uint64_t CLKOUT0:4;
      uint64_t RESERVED_2:1;
      uint64_t RESERVED_3:1;
      uint64_t CGM_SINK_SEL_1:4;
      uint64_t CGM_SINK_SEL2:4;
      uint64_t CGM_SINK_SEL_3:4;
      uint64_t RESERVED_4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKOUT_SEL;

};

#define MCB (*(volatile struct MCB_tag *) 0xffc0c008)

struct MC_CGM_tag
{
  union
  {
    uint8_t R;
    struct
    {
      uint64_t SDUR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCS_SDUR;

  uint8_t res0[3];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RATE:8;
      uint64_t reservedSpace0:8;
      uint64_t INIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCS_DIVS4;

  uint8_t res1[156];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYS_DIV_RATIO_CHNG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_DIV_RC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t SYS_UPD_TYPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_UPD_TYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_UPD_TRIGGER:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_UPD_TRIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUX0_UPD_STAT:1;
      uint64_t reservedSpace0:1;
      uint64_t AUX2_UPD_STAT:1;
      uint64_t reservedSpace1:4;
      uint64_t AUX7_UPD_STAT:1;
      uint64_t reservedSpace2:1;
      uint64_t AUX9_UPD_STAT:1;
      uint64_t reservedSpace3:2;
      uint64_t AUX12_UPD_STAT:1;
      uint64_t AUX13_UPD_STAT:1;
      uint64_t AUX14_UPD_STAT:1;
      uint64_t reservedSpace4:16;
      uint64_t SYS_UPD_STAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_UPD_STAT;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t SWIP:1;
      uint64_t SWTRG:3;
      uint64_t reservedSpace1:4;
      uint64_t SELSTAT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_DC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_DC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_DC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_DC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SC_DC4;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC0_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC0_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC0_DC0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:5;
      uint64_t reservedSpace1:10;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC0_DC2;

  uint8_t res5[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC2_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC2_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:7;
      uint64_t reservedSpace1:8;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC2_DC0;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC3_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC3_SS;

  uint8_t res7[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC4_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC4_SS;

  uint8_t res8[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC7_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC7_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:4;
      uint64_t reservedSpace1:11;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC7_DC0;

  uint8_t res9[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:7;
      uint64_t reservedSpace1:8;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC9_DC0;

  uint8_t res10[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC12_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC12_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:7;
      uint64_t reservedSpace1:8;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC12_DC0;

  uint8_t res11[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELCTL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC13_SC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t SELSTAT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC13_SS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:7;
      uint64_t reservedSpace1:8;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC13_DC0;

  uint8_t res12[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DIV:7;
      uint64_t reservedSpace1:8;
      uint64_t DE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AC14_DC0;

};

#define MC_CGM (*(volatile struct MC_CGM_tag *) 0xfffb0700)

struct MC_ME_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SYSCLK:4;
      uint64_t S_IRC:1;
      uint64_t S_XOSC:1;
      uint64_t S_PLL0:1;
      uint64_t S_PLL1:1;
      uint64_t S_SDPLL:1;
      uint64_t reservedSpace0:7;
      uint64_t S_FLA:2;
      uint64_t reservedSpace1:2;
      uint64_t S_MVR:1;
      uint64_t reservedSpace2:2;
      uint64_t S_PDO:1;
      uint64_t reservedSpace3:3;
      uint64_t S_MTRANS:1;
      uint64_t S_CURRENT_MODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
      uint64_t reservedSpace0:12;
      uint64_t TARGET_MODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_FUNC:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
      uint64_t reservedSpace1:4;
      uint64_t RESET_DEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I_MTC:1;
      uint64_t I_SAFE:1;
      uint64_t I_IMODE:1;
      uint64_t I_ICONF:1;
      uint64_t I_ICONF_CU:1;
      uint64_t I_ICONF_CC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_MTC:1;
      uint64_t M_SAFE:1;
      uint64_t M_IMODE:1;
      uint64_t M_ICONF:1;
      uint64_t M_ICONF_CU:1;
      uint64_t M_ICONF_CC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_SEA:1;
      uint64_t S_NMA:1;
      uint64_t S_DMA:1;
      uint64_t S_MRI:1;
      uint64_t reservedSpace0:1;
      uint64_t S_MRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CDP_PRPH_0_31:1;
      uint64_t CDP_PRPH_32_63:1;
      uint64_t CDP_PRPH_64_95:1;
      uint64_t CDP_PRPH_96_127:1;
      uint64_t CDP_PRPH_128_159:1;
      uint64_t CDP_PRPH_160_191:1;
      uint64_t CDP_PRPH_192_223:1;
      uint64_t CDP_PRPH_224_255:1;
      uint64_t reservedSpace0:2;
      uint64_t SYSCLK_SW:1;
      uint64_t SCSRC_SC:1;
      uint64_t IRC_SC:1;
      uint64_t CSRC_CSRC_SC:1;
      uint64_t VREG_CSRC_SC:1;
      uint64_t reservedSpace1:1;
      uint64_t SMR:1;
      uint64_t PCS_PROG:1;
      uint64_t CCKL_PROG:1;
      uint64_t DBG_MODE:1;
      uint64_t PMC_PROG:1;
      uint64_t reservedSpace2:2;
      uint64_t MPH_BUSY:1;
      uint64_t reservedSpace3:4;
      uint64_t PREVIOUS_MODE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMTS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESET_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAFE_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DRUN_MC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_MC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_MC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_MC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_MC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HALT0_MC;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCLK:4;
      uint64_t IRCON:1;
      uint64_t XOSCON:1;
      uint64_t PLL0ON:1;
      uint64_t PLL1ON:1;
      uint64_t SDPLLON:1;
      uint64_t reservedSpace0:11;
      uint64_t MVRON:1;
      uint64_t reservedSpace1:2;
      uint64_t PDO:1;
      uint64_t reservedSpace2:4;
      uint64_t PWRLVL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STOP0_MC;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t S_PIT_RTC_0:1;
      uint64_t S_PIT_RTC_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t S_DMAMUX_0:1;
      uint64_t reservedSpace1:1;
      uint64_t S_CRC_0:1;
      uint64_t reservedSpace2:10;
      uint64_t S_DTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t S_FLEXCAN_2:1;
      uint64_t reservedSpace1:1;
      uint64_t S_FLEXCAN_0:1;
      uint64_t reservedSpace2:11;
      uint64_t S_LIN_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t S_SPI_1:1;
      uint64_t reservedSpace1:1;
      uint64_t S_IIC_2:1;
      uint64_t reservedSpace2:1;
      uint64_t S_IIC_1:1;
      uint64_t reservedSpace3:23;
      uint64_t S_SAR_ADC_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t S_ETIMER_1:1;
      uint64_t reservedSpace1:8;
      uint64_t S_DMAMUX_1:1;
      uint64_t reservedSpace2:1;
      uint64_t S_CRC_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:27;
      uint64_t S_SPT:1;
      uint64_t S_RADAR_CTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t S_DSPI_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t S_SAR_ADC_0:1;
      uint64_t reservedSpace1:13;
      uint64_t S_CTU_0:1;
      uint64_t reservedSpace2:3;
      uint64_t S_FlexPWM_0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN_PC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t HALT0:1;
      uint64_t reservedSpace1:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LP_PC7;

  uint8_t res3[30];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL30;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL31;

  uint8_t res4[4];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL36;

  uint8_t res5[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL38;

  uint8_t res6[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL45;

  uint8_t res7[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL49;

  uint8_t res8[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL61;

  uint8_t res9[15];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL77;

  uint8_t res10[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL79;

  uint8_t res11[11];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL91;

  uint8_t res12[6];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL98;

  uint8_t res13[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL100;

  uint8_t res14[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL102;

  uint8_t res15[23];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL126;

  uint8_t res16[10];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL137;

  uint8_t res17[8];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL146;

  uint8_t res18[1];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL148;

  uint8_t res19[38];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL187;

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL188;

  uint8_t res20[20];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL209;

  uint8_t res21[27];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL237;

  uint8_t res22[13];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL251;

  uint8_t res23[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t RUN_CFG:3;
      uint64_t LP_CFG:3;
      uint64_t DBG_F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) PCTL255;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t S_CORE2:1;
      uint64_t S_CORE3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS;

  uint8_t res24[4];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCTL2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t TEST:1;
      uint64_t SAFE:1;
      uint64_t DRUN:1;
      uint64_t RUN0:1;
      uint64_t RUN1:1;
      uint64_t RUN2:1;
      uint64_t RUN3:1;
      uint64_t HALT0:1;
      uint64_t reservedSpace0:1;
      uint64_t STOP0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) CCTL3;

  uint8_t res25[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMC:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RMC:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CADDR3;

};

#define MC_ME (*(volatile struct MC_ME_tag *) 0xfffb8000)

struct MC_PCU_tag
{
  uint32_t PSTAT;
};

#define MC_PCU (*(volatile struct MC_PCU_tag *) 0xfffa0080)

struct MEMU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:15;
      uint64_t SWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SR_EBO:1;
      uint64_t SR_UCO:1;
      uint64_t SR_CEO:1;
      uint64_t SR_UCE:1;
      uint64_t SR_CE:1;
      uint64_t reservedSpace0:3;
      uint64_t F_EBO:1;
      uint64_t F_UCO:1;
      uint64_t F_CEO:1;
      uint64_t F_UCE:1;
      uint64_t F_CE:1;
      uint64_t reservedSpace1:3;
      uint64_t PR_EBO:1;
      uint64_t PR_UCO:1;
      uint64_t PR_CEO:1;
      uint64_t PR_UCE:1;
      uint64_t PR_CE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_FLAG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FR_SR_EBO:1;
      uint64_t FR_SR_UCO:1;
      uint64_t FR_SR_CEO:1;
      uint64_t FR_SR_UCE:1;
      uint64_t FR_SR_CE:1;
      uint64_t reservedSpace0:3;
      uint64_t FR_F_EBO:1;
      uint64_t FR_F_UCO:1;
      uint64_t FR_F_CEO:1;
      uint64_t FR_F_UCE:1;
      uint64_t FR_F_CE:1;
      uint64_t reservedSpace1:3;
      uint64_t FR_PR_EBO:1;
      uint64_t FR_PR_UCO:1;
      uint64_t FR_PR_CEO:1;
      uint64_t FR_PR_UCE:1;
      uint64_t FR_PR_CE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEBUG;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_STS9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_CERR_ADDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_UNCERR_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_UNCERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFLW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_OFLW0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFLW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_RAM_OFLW1;

  uint8_t res2[1440];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_CERR_STS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_CERR_ADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_CERR_STS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_CERR_ADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_UNCERR_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_UNCERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFLW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIPH_RAM_OFLW0;

  uint8_t res3[1508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAD_BIT:8;
      uint64_t reservedSpace0:23;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_STS19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CERR_ADDR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t VLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_UNCERR_STS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_ADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_UNCERR_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFLW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_OFLW0;

};

#define MEMU (*(volatile struct MEMU_tag *) 0xfff50000)

struct MIPICSI2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t NULANE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PDRX:1;
      uint64_t reservedSpace1:2;
      uint64_t RTERM_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PHYC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSRA:1;
      uint64_t ULPSC:1;
      uint64_t CSTOP:1;
      uint64_t CULPSA:1;
      uint64_t CULPMA:1;
      uint64_t HSSETL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXVALH:1;
      uint64_t RXACTH:1;
      uint64_t reservedSpace0:1;
      uint64_t D0STOP:1;
      uint64_t D0ULPA:1;
      uint64_t D0ULMA:1;
      uint64_t D0HSET:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAN0CS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXVALH:1;
      uint64_t RXACTH:1;
      uint64_t reservedSpace0:1;
      uint64_t D1STOP:1;
      uint64_t D1ULPA:1;
      uint64_t D1ULMA:1;
      uint64_t D1HSET:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LAN1CS;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NOCAL:1;
      uint64_t reservedSpace0:2;
      uint64_t RCALI:2;
      uint64_t CALCOM:1;
      uint64_t CALOUT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESCS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t GNSPR:1;
      uint64_t reservedSpace1:19;
      uint64_t SOFRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATIDF:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATAID;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCONE:1;
      uint64_t ECCTWO:1;
      uint64_t ERFSYN:1;
      uint64_t ERFDAT:1;
      uint64_t CRCERR:1;
      uint64_t INVID:1;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRPPREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRPOS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRPOS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCOIE:1;
      uint64_t ECCTIE:1;
      uint64_t ERFSIE:1;
      uint64_t ERFDIE:1;
      uint64_t CRCEIE:1;
      uint64_t INIDIE:1;
      uint64_t GSPIE:1;
      uint64_t RESERVED:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERPPINTEN;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRSY0:1;
      uint64_t NOSYN0:1;
      uint64_t ERRESC0:1;
      uint64_t ERSYES0:1;
      uint64_t ERCTRL0:1;
      uint64_t ERRSYN1:1;
      uint64_t NOSYN1:1;
      uint64_t ERRESC1:1;
      uint64_t ERSYES1:1;
      uint64_t ERCTRL1:1;
      uint64_t reservedSpace0:10;
      uint64_t RESERVED:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRPHY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERSIE0:1;
      uint64_t NOSIE0:1;
      uint64_t ESERIE0:1;
      uint64_t ERSYIE0:1;
      uint64_t ERCLIE0:1;
      uint64_t ERSIE1:1;
      uint64_t NOSIE1:1;
      uint64_t ESERIE1:1;
      uint64_t ERSYIE1:1;
      uint64_t ERCLIE1:1;
      uint64_t reservedSpace0:10;
      uint64_t RESERVED:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERPHYIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t DATAID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GNSP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INVID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINLEN:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXPLINES:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXPCTDL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRMSRTIE:1;
      uint64_t FRMENDIE:1;
      uint64_t LINLENIE:1;
      uint64_t LINCNTIE:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRMSTR:1;
      uint64_t FRMEND:1;
      uint64_t LINLENERR:1;
      uint64_t LINCNTERR:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTRS;

};

#define MIPICSI2 (*(volatile struct MIPICSI2_tag *) 0xfbf08000)

struct PASS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIFE:3;
      uint64_t reservedSpace0:26;
      uint64_t TME:1;
      uint64_t JUN:1;
      uint64_t CNS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCSTAT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSEL;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMST:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSTAT;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PW32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIN7;

  uint8_t res3[192];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDLOCK:16;
      uint64_t LOWLOCK:14;
      uint64_t reservedSpace0:1;
      uint64_t TSLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_PG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK1_PG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_256LCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK2_PG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t U_256LCK:16;
      uint64_t RL0:1;
      uint64_t RL1:1;
      uint64_t RL2:1;
      uint64_t RL3:1;
      uint64_t RL4:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTR:4;
      uint64_t reservedSpace1:1;
      uint64_t MO:1;
      uint64_t DBL:1;
      uint64_t PGL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK3_PG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDLOCK:16;
      uint64_t LOWLOCK:14;
      uint64_t reservedSpace0:1;
      uint64_t TSLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_PG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK1_PG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_256LCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK2_PG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t U_256LCK:16;
      uint64_t RL0:1;
      uint64_t RL1:1;
      uint64_t RL2:1;
      uint64_t RL3:1;
      uint64_t RL4:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTR:4;
      uint64_t reservedSpace1:1;
      uint64_t MO:1;
      uint64_t DBL:1;
      uint64_t PGL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK3_PG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDLOCK:16;
      uint64_t LOWLOCK:14;
      uint64_t reservedSpace0:1;
      uint64_t TSLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_PG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK1_PG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_256LCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK2_PG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t U_256LCK:16;
      uint64_t RL0:1;
      uint64_t RL1:1;
      uint64_t RL2:1;
      uint64_t RL3:1;
      uint64_t RL4:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTR:4;
      uint64_t reservedSpace1:1;
      uint64_t MO:1;
      uint64_t DBL:1;
      uint64_t PGL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK3_PG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIDLOCK:16;
      uint64_t LOWLOCK:14;
      uint64_t reservedSpace0:1;
      uint64_t TSLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK0_PG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGHLOCK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK1_PG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L_256LCK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK2_PG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t U_256LCK:16;
      uint64_t RL0:1;
      uint64_t RL1:1;
      uint64_t RL2:1;
      uint64_t RL3:1;
      uint64_t RL4:1;
      uint64_t reservedSpace0:3;
      uint64_t MSTR:4;
      uint64_t reservedSpace1:1;
      uint64_t MO:1;
      uint64_t DBL:1;
      uint64_t PGL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LOCK3_PG3;

};

#define PASS (*(volatile struct PASS_tag *) 0xffff4000)

struct PCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BWE_I2D:1;
      uint64_t BRE_I2D:1;
      uint64_t PRE_I2D:1;
      uint64_t reservedSpace0:5;
      uint64_t BWE_D2I:1;
      uint64_t BRE_D2I:1;
      uint64_t PRE_D2I:1;
      uint64_t reservedSpace1:5;
      uint64_t BWE_DMA:1;
      uint64_t BRE_DMA:1;
      uint64_t PRE_DMA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAHB_BE1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BWE_AIPS0:1;
      uint64_t BRE_AIPS0:1;
      uint64_t PRE_AIPS0:1;
      uint64_t reservedSpace0:5;
      uint64_t BWE_AIPS1:1;
      uint64_t BRE_AIPS1:1;
      uint64_t PRE_AIPS1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAHB_BE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BWE_PRAM1:1;
      uint64_t BRE_PRAM1:1;
      uint64_t PRE_PRAM1:1;
      uint64_t reservedSpace0:5;
      uint64_t BWE_PRAM2:1;
      uint64_t BRE_PRAM2:1;
      uint64_t PRE_PRAM2:1;
      uint64_t reservedSpace1:5;
      uint64_t BWE_PRAM3:1;
      uint64_t BRE_PRAM3:1;
      uint64_t PRE_PRAM3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAHB_BE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BWE_SPT:1;
      uint64_t BRE_SPT:1;
      uint64_t PRE_SPT:1;
      uint64_t reservedSpace0:5;
      uint64_t BWE_Z7A:1;
      uint64_t BRE_Z7A:1;
      uint64_t PRE_Z7A:1;
      uint64_t reservedSpace1:5;
      uint64_t BWE_Z7B:1;
      uint64_t BRE_Z7B:1;
      uint64_t PRE_Z7B:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IAHB_BE5;

};

#define PCM (*(volatile struct PCM_tag *) 0xfc028004)

struct PFLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t P0_BFEN:1;
      uint64_t P0_PFLIM:2;
      uint64_t reservedSpace0:1;
      uint64_t P0_IPFEN:1;
      uint64_t reservedSpace1:1;
      uint64_t P0_DPFEN:1;
      uint64_t reservedSpace2:1;
      uint64_t RWSC:5;
      uint64_t APC:3;
      uint64_t P0_M0PFE:1;
      uint64_t P0_M1PFE:1;
      uint64_t P0_M2PFE:1;
      uint64_t P0_M3PFE:1;
      uint64_t P0_M4PFE:1;
      uint64_t P0_M5PFE:1;
      uint64_t P0_M6PFE:1;
      uint64_t P0_M7PFE:1;
      uint64_t P0_M8PFE:1;
      uint64_t P0_M9PFE:1;
      uint64_t P0_M10PFE:1;
      uint64_t P0_M11PFE:1;
      uint64_t P0_M12PFE:1;
      uint64_t P0_M13PFE:1;
      uint64_t P0_M14PFE:1;
      uint64_t P0_M15PFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P1_BFEN:1;
      uint64_t P1_PFLIM:2;
      uint64_t reservedSpace0:1;
      uint64_t P1_IPFEN:1;
      uint64_t reservedSpace1:1;
      uint64_t P1_DPFEN:1;
      uint64_t reservedSpace2:9;
      uint64_t P1_M0PFE:1;
      uint64_t P1_M1PFE:1;
      uint64_t P1_M2PFE:1;
      uint64_t P1_M3PFE:1;
      uint64_t P1_M4PFE:1;
      uint64_t P1_M5PFE:1;
      uint64_t P1_M6PFE:1;
      uint64_t P1_M7PFE:1;
      uint64_t P1_M8PFE:1;
      uint64_t P1_M9PFE:1;
      uint64_t P1_M10PFE:1;
      uint64_t P1_M11PFE:1;
      uint64_t P1_M12PFE:1;
      uint64_t P1_M13PFE:1;
      uint64_t P1_M14PFE:1;
      uint64_t P1_M15PFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:12;
      uint64_t ARBM:4;
      uint64_t BFEN_LK:1;
      uint64_t reservedSpace1:9;
      uint64_t P2_WCFG:2;
      uint64_t P1_WCFG:2;
      uint64_t P0_WCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15AP:2;
      uint64_t M14AP:2;
      uint64_t M13AP:2;
      uint64_t M12AP:2;
      uint64_t M11AP:2;
      uint64_t M10AP:2;
      uint64_t M9AP:2;
      uint64_t M8AP:2;
      uint64_t M7AP:2;
      uint64_t M6AP:2;
      uint64_t M5AP:2;
      uint64_t M4AP:2;
      uint64_t M3AP:2;
      uint64_t M2AP:2;
      uint64_t M1AP:2;
      uint64_t M0AP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFAPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GRMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t IRMEN:1;
      uint64_t reservedSpace1:3;
      uint64_t SAFE_CAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CRD7EN:1;
      uint64_t CRD6EN:1;
      uint64_t CRD5EN:1;
      uint64_t CRD4EN:1;
      uint64_t CRD3EN:1;
      uint64_t CRD2EN:1;
      uint64_t CRD1EN:1;
      uint64_t CRD0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRDE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t P2_BFEN:1;
      uint64_t P2_PFLIM:2;
      uint64_t reservedSpace0:1;
      uint64_t P2_IPFEN:1;
      uint64_t reservedSpace1:1;
      uint64_t P2_DPFEN:1;
      uint64_t reservedSpace2:9;
      uint64_t P2_M0PFE:1;
      uint64_t P2_M1PFE:1;
      uint64_t P2_M2PFE:1;
      uint64_t P2_M3PFE:1;
      uint64_t P2_M4PFE:1;
      uint64_t P2_M5PFE:1;
      uint64_t P2_M6PFE:1;
      uint64_t P2_M7PFE:1;
      uint64_t P2_M8PFE:1;
      uint64_t P2_M9PFE:1;
      uint64_t P2_M10PFE:1;
      uint64_t P2_M11PFE:1;
      uint64_t P2_M12PFE:1;
      uint64_t P2_M13PFE:1;
      uint64_t P2_M14PFE:1;
      uint64_t P2_M15PFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCR4;

  uint8_t res0[228];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word20;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word21;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word22;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word23;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word24;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word25;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word26;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t LSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t PSTARTADDR:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRDSize:5;
      uint64_t reservedSpace0:11;
      uint64_t M15EN:1;
      uint64_t M14EN:1;
      uint64_t M13EN:1;
      uint64_t M12EN:1;
      uint64_t M11EN:1;
      uint64_t M10EN:1;
      uint64_t M9EN:1;
      uint64_t M8EN:1;
      uint64_t M7EN:1;
      uint64_t M6EN:1;
      uint64_t M5EN:1;
      uint64_t M4EN:1;
      uint64_t M3EN:1;
      uint64_t M2EN:1;
      uint64_t M1EN:1;
      uint64_t M0EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PFCRD_Word27;

};

#define PFLASH (*(volatile struct PFLASH_tag *) 0xfc030000)

struct PIT_PIT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64L;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG3;

};

#define PIT_PIT_0 (*(volatile struct PIT_PIT_0_tag *) 0xfff84000)

struct PIT_PIT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ:1;
      uint64_t MDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCR;

  uint8_t res0[220];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTMR64L;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSV:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TVL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEN:1;
      uint64_t TIE:1;
      uint64_t CHN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TFLG3;

};

#define PIT_PIT_1 (*(volatile struct PIT_PIT_1_tag *) 0xfff80000)

struct PLLDIG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LOLIE:1;
      uint64_t reservedSpace1:4;
      uint64_t CLKCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOCK:1;
      uint64_t LOLF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:7;
      uint64_t reservedSpace0:5;
      uint64_t PREDIV:3;
      uint64_t reservedSpace1:1;
      uint64_t RFDPHI:6;
      uint64_t reservedSpace2:5;
      uint64_t RFDPHI1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL0DV;

  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t LOLIE:1;
      uint64_t reservedSpace1:4;
      uint64_t CLKCFG:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t LOCK:1;
      uint64_t LOLF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MFD:7;
      uint64_t reservedSpace0:9;
      uint64_t RFDPHI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1DV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INCSTP:15;
      uint64_t reservedSpace0:1;
      uint64_t MODPRD:13;
      uint64_t MODSEL:1;
      uint64_t MODEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1FM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRCDIV:12;
      uint64_t reservedSpace0:18;
      uint64_t FDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL1FD;

};

#define PLLDIG (*(volatile struct PLLDIG_tag *) 0xfffb0100)

struct PMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMC_SMPS_EN:1;
      uint64_t PMC_SMPS_SS:2;
      uint64_t reservedSpace0:1;
      uint64_t PMC_SMPS_GD_SLOPE:2;
      uint64_t reservedSpace1:2;
      uint64_t PMC_SMPS_ENCOR:1;
      uint64_t PMC_SMPS_ENILIM:1;
      uint64_t reservedSpace2:1;
      uint64_t PMC_SMPS_GI:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPS_CNTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STTW:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STTW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VD_ST_CTRL:4;
      uint64_t reservedSpace0:2;
      uint64_t ST_MODE:2;
      uint64_t reservedSpace1:8;
      uint64_t ST_DONE:1;
      uint64_t ST_RESULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SELF_TEST_UM_VD_REG;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t AFE_INT_EN_VREG5:1;
      uint64_t AFE_INT_EN_VREG6:1;
      uint64_t AFE_INT_EN_VREG7:1;
      uint64_t AFE_INT_EN_VREG8:1;
      uint64_t reservedSpace1:23;
      uint64_t IE_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFE_INTR_ENA;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t AFE_INT_STATUS_VREG5:1;
      uint64_t AFE_INT_STATUS_VREG6:1;
      uint64_t AFE_INT_STATUS_VREG7:1;
      uint64_t AFE_INT_STATUS_VREG8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFE_INTR_STATUS;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVD_FAULT:1;
      uint64_t HVD_FAULT:1;
      uint64_t reservedSpace0:1;
      uint64_t STEST_FAULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVD_CORE_INT_ENABLE_AND_LVD_PLL_ENABLE:1;
      uint64_t HVD_CORE_INT_ENABLE:1;
      uint64_t LVD_ADC_ENABLE:1;
      uint64_t HVD_ADC_ENABLE:1;
      uint64_t LVD_FLASH_ENABLE:1;
      uint64_t reservedSpace0:1;
      uint64_t LVD_IO_ENABLE:1;
      uint64_t LVD_PMC_ENABLE:1;
      uint64_t LVD_MIPI_ENABLE:1;
      uint64_t reservedSpace1:22;
      uint64_t PMC_ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS0_0IE:1;
      uint64_t TS0_2IE:1;
      uint64_t reservedSpace0:1;
      uint64_t TS1_0IE:1;
      uint64_t TS1_2IE:1;
      uint64_t reservedSpace1:26;
      uint64_t TS_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TS_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP0_0:1;
      uint64_t TEMP0_2:1;
      uint64_t reservedSpace0:1;
      uint64_t TEMP1_0:1;
      uint64_t TEMP1_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESR_TD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP0_0:1;
      uint64_t TEMP0_2:1;
      uint64_t reservedSpace0:1;
      uint64_t TEMP1_0:1;
      uint64_t TEMP1_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REE_TD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEMP0_0:1;
      uint64_t TEMP0_2:1;
      uint64_t reservedSpace0:1;
      uint64_t :1;
      uint64_t TEMP1_2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES_TD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TS0_AOUT_EN:1;
      uint64_t TS0_DOUT_EN:1;
      uint64_t TS0_TRIM_ADJ:5;
      uint64_t reservedSpace0:1;
      uint64_t TS1_AOUT_EN:1;
      uint64_t TS1_DOUT_EN:1;
      uint64_t TS1_TRIM_ADJ:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL_TD;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSNS_FAULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TS_FIR;

};

#define PMC (*(volatile struct PMC_tag *) 0xfffa0464)

struct PRAMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FT_DIS:1;
      uint64_t reservedSpace0:5;
      uint64_t P0_BO_DIS:1;
      uint64_t P1_BO_DIS:1;
      uint64_t PRI:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRCR6;

};

#define PRAMC (*(volatile struct PRAMC_tag *) 0xfc020000)

struct PRAM_XBAR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS0;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:21;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS0;

  uint8_t res1[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS1;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:21;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS1;

  uint8_t res3[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS2;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:21;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS2;

  uint8_t res5[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS3;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:21;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS3;

  uint8_t res7[236];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS4;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:21;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS4;

  uint8_t res9[748];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M0:3;
      uint64_t reservedSpace0:1;
      uint64_t M1:3;
      uint64_t reservedSpace1:1;
      uint64_t M2:3;
      uint64_t reservedSpace2:1;
      uint64_t M3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRS7;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARK:3;
      uint64_t reservedSpace0:1;
      uint64_t PCTL:2;
      uint64_t reservedSpace1:2;
      uint64_t ARB:2;
      uint64_t reservedSpace2:21;
      uint64_t LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRS7;

};

#define PRAM_XBAR (*(volatile struct PRAM_XBAR_tag *) 0xfc00c000)

struct RGM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_POR:1;
      uint64_t reservedSpace0:2;
      uint64_t F_SOFT_DEST:1;
      uint64_t F_FFRR:1;
      uint64_t F_STCU_SUF:1;
      uint64_t F_SSSR:1;
      uint64_t reservedSpace1:1;
      uint64_t F_EDR:1;
      uint64_t F_LVD_CORE:1;
      uint64_t F_HVD_CORE:1;
      uint64_t F_LVD_ADC:1;
      uint64_t F_HVD_ADC:1;
      uint64_t F_LVD_FLASH:1;
      uint64_t F_LVD_PLL:1;
      uint64_t F_LVD_IO:1;
      uint64_t F_LVD_PMC:1;
      uint64_t F_AFE_LVD0:1;
      uint64_t reservedSpace2:4;
      uint64_t F_AFE_LVD5:1;
      uint64_t F_TSR_DEST:1;
      uint64_t F_AFE_LVD7:1;
      uint64_t F_AFE_LVD8:1;
      uint64_t F_AFE_LVD6:1;
      uint64_t reservedSpace3:1;
      uint64_t F_LVD_MIPI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DES;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D_POR:1;
      uint64_t reservedSpace0:2;
      uint64_t D_SOFT_DEST:1;
      uint64_t D_FFRR:1;
      uint64_t D_STCU_SUF:1;
      uint64_t D_SSSR:1;
      uint64_t reservedSpace1:1;
      uint64_t D_EDR:1;
      uint64_t D_LVD_CORE:1;
      uint64_t D_HVD_CORE:1;
      uint64_t D_LVD_ADC:1;
      uint64_t D_HVD_ADC:1;
      uint64_t D_LVD_FLASH:1;
      uint64_t D_LVD_PLL:1;
      uint64_t D_LVD_IO:1;
      uint64_t D_LVD_PMC:1;
      uint64_t D_AFE_LVD0:1;
      uint64_t reservedSpace2:4;
      uint64_t D_AFE_LVD5:1;
      uint64_t D_TSR_DEST:1;
      uint64_t D_AFE_LVD7:1;
      uint64_t D_AFE_LVD8:1;
      uint64_t D_AFE_LVD6:1;
      uint64_t reservedSpace3:1;
      uint64_t D_LVD_MIPI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DERD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:23;
      uint64_t AR_TSR_DEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEAR;

  uint8_t res2[732];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t F_EXR:1;
      uint64_t reservedSpace0:1;
      uint64_t F_ST_DONE:1;
      uint64_t F_SOFT_FUNC:1;
      uint64_t reservedSpace1:1;
      uint64_t F_FCCU_HARD:1;
      uint64_t F_FCCU_SOFT:1;
      uint64_t reservedSpace2:3;
      uint64_t F_JTAG_FUNC:1;
      uint64_t reservedSpace3:12;
      uint64_t F_TSR_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FES;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t D_ST_DONE:1;
      uint64_t D_SOFT_FUNC:1;
      uint64_t reservedSpace1:1;
      uint64_t D_FCCU_HARD:1;
      uint64_t D_FCCU_SOFT:1;
      uint64_t reservedSpace2:3;
      uint64_t D_JTAG_FUNC:1;
      uint64_t reservedSpace3:12;
      uint64_t D_TSR_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FERD;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:10;
      uint64_t AR_JTAG_FUNC:1;
      uint64_t reservedSpace1:12;
      uint64_t AR_TSR_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEAR;

  uint8_t res5[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BE_EXR:1;
      uint64_t reservedSpace0:1;
      uint64_t BE_ST_DONE:1;
      uint64_t BE_SOFT_FUNC:1;
      uint64_t reservedSpace1:1;
      uint64_t BE_FCCU_HARD:1;
      uint64_t BE_FCCU_SOFT:1;
      uint64_t reservedSpace2:3;
      uint64_t BE_JTAG_FUNC:1;
      uint64_t reservedSpace3:12;
      uint64_t BE_TSR_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBRE;

  uint8_t res6[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS_EXR:1;
      uint64_t reservedSpace0:1;
      uint64_t SS_ST_DONE:1;
      uint64_t SS_SOFT_FUNC:1;
      uint64_t reservedSpace1:1;
      uint64_t SS_FCCU_HARD:1;
      uint64_t SS_FCCU_SOFT:1;
      uint64_t reservedSpace2:3;
      uint64_t SS_JTAG_FUNC:1;
      uint64_t reservedSpace3:12;
      uint64_t SS_TSR_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FESS;

  uint8_t res7[704];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t FRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) FRET;

  uint8_t res8[3];

  union
  {
    uint8_t R;
    struct
    {
      uint64_t DRET:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(1))) DRET;

};

#define RGM (*(volatile struct RGM_tag *) 0xfffa8000)

struct SIUL2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR_MASK:4;
      uint64_t MAJOR_MASK:4;
      uint64_t reservedSpace0:4;
      uint64_t Pkg:2;
      uint64_t reservedSpace1:6;
      uint64_t PARTNUM:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Configuration:8;
      uint64_t Performance:8;
      uint64_t Product_Family:8;
      uint64_t CANFD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIDR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIF0:1;
      uint64_t EIF1:1;
      uint64_t EIF2:1;
      uint64_t EIF3:1;
      uint64_t EIF4:1;
      uint64_t EIF5:1;
      uint64_t EIF6:1;
      uint64_t EIF7:1;
      uint64_t EIF8:1;
      uint64_t EIF9:1;
      uint64_t EIF10:1;
      uint64_t EIF11:1;
      uint64_t EIF12:1;
      uint64_t EIF13:1;
      uint64_t EIF14:1;
      uint64_t EIF15:1;
      uint64_t EIF16:1;
      uint64_t EIF17:1;
      uint64_t EIF18:1;
      uint64_t EIF19:1;
      uint64_t EIF20:1;
      uint64_t EIF21:1;
      uint64_t EIF22:1;
      uint64_t EIF23:1;
      uint64_t EIF24:1;
      uint64_t EIF25:1;
      uint64_t EIF26:1;
      uint64_t EIF27:1;
      uint64_t EIF28:1;
      uint64_t EIF29:1;
      uint64_t EIF30:1;
      uint64_t EIF31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DISR0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIRE0:1;
      uint64_t EIRE1:1;
      uint64_t EIRE2:1;
      uint64_t EIRE3:1;
      uint64_t EIRE4:1;
      uint64_t EIRE5:1;
      uint64_t EIRE6:1;
      uint64_t EIRE7:1;
      uint64_t EIRE8:1;
      uint64_t EIRE9:1;
      uint64_t EIRE10:1;
      uint64_t EIRE11:1;
      uint64_t EIRE12:1;
      uint64_t EIRE13:1;
      uint64_t EIRE14:1;
      uint64_t EIRE15:1;
      uint64_t EIRE16:1;
      uint64_t EIRE17:1;
      uint64_t EIRE18:1;
      uint64_t EIRE19:1;
      uint64_t EIRE20:1;
      uint64_t EIRE21:1;
      uint64_t EIRE22:1;
      uint64_t EIRE23:1;
      uint64_t EIRE24:1;
      uint64_t EIRE25:1;
      uint64_t EIRE26:1;
      uint64_t EIRE27:1;
      uint64_t EIRE28:1;
      uint64_t EIRE29:1;
      uint64_t EIRE30:1;
      uint64_t EIRE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRER0;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIRSR0:1;
      uint64_t DIRSR1:1;
      uint64_t DIRSR2:1;
      uint64_t DIRSR3:1;
      uint64_t DIRSR4:1;
      uint64_t DIRSR5:1;
      uint64_t DIRSR6:1;
      uint64_t DIRSR7:1;
      uint64_t DIRSR8:1;
      uint64_t DIRSR9:1;
      uint64_t DIRSR10:1;
      uint64_t DIRSR11:1;
      uint64_t DIRSR12:1;
      uint64_t DIRSR13:1;
      uint64_t DIRSR14:1;
      uint64_t DIRSR15:1;
      uint64_t DIRSR16:1;
      uint64_t DIRSR17:1;
      uint64_t DIRSR18:1;
      uint64_t DIRSR19:1;
      uint64_t DIRSR20:1;
      uint64_t DIRSR21:1;
      uint64_t DIRSR22:1;
      uint64_t DIRSR23:1;
      uint64_t DIRSR24:1;
      uint64_t DIRSR25:1;
      uint64_t DIRSR26:1;
      uint64_t DIRSR27:1;
      uint64_t DIRSR28:1;
      uint64_t DIRSR29:1;
      uint64_t DIRSR30:1;
      uint64_t DIRSR31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIRSR0;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREE0:1;
      uint64_t IREE1:1;
      uint64_t IREE2:1;
      uint64_t IREE3:1;
      uint64_t IREE4:1;
      uint64_t IREE5:1;
      uint64_t IREE6:1;
      uint64_t IREE7:1;
      uint64_t IREE8:1;
      uint64_t IREE9:1;
      uint64_t IREE10:1;
      uint64_t IREE11:1;
      uint64_t IREE12:1;
      uint64_t IREE13:1;
      uint64_t IREE14:1;
      uint64_t IREE15:1;
      uint64_t IREE16:1;
      uint64_t IREE17:1;
      uint64_t IREE18:1;
      uint64_t IREE19:1;
      uint64_t IREE20:1;
      uint64_t IREE21:1;
      uint64_t IREE22:1;
      uint64_t IREE23:1;
      uint64_t IREE24:1;
      uint64_t IREE25:1;
      uint64_t IREE26:1;
      uint64_t IREE27:1;
      uint64_t IREE28:1;
      uint64_t IREE29:1;
      uint64_t IREE30:1;
      uint64_t IREE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IREER0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFEE0:1;
      uint64_t IFEE1:1;
      uint64_t IFEE2:1;
      uint64_t IFEE3:1;
      uint64_t IFEE4:1;
      uint64_t IFEE5:1;
      uint64_t IFEE6:1;
      uint64_t IFEE7:1;
      uint64_t IFEE8:1;
      uint64_t IFEE9:1;
      uint64_t IFEE10:1;
      uint64_t IFEE11:1;
      uint64_t IFEE12:1;
      uint64_t IFEE13:1;
      uint64_t IFEE14:1;
      uint64_t IFEE15:1;
      uint64_t IFEE16:1;
      uint64_t IFEE17:1;
      uint64_t IFEE18:1;
      uint64_t IFEE19:1;
      uint64_t IFEE20:1;
      uint64_t IFEE21:1;
      uint64_t IFEE22:1;
      uint64_t IFEE23:1;
      uint64_t IFEE24:1;
      uint64_t IFEE25:1;
      uint64_t IFEE26:1;
      uint64_t IFEE27:1;
      uint64_t IFEE28:1;
      uint64_t IFEE29:1;
      uint64_t IFEE30:1;
      uint64_t IFEE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFEER0;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFE0:1;
      uint64_t IFE1:1;
      uint64_t IFE2:1;
      uint64_t IFE3:1;
      uint64_t IFE4:1;
      uint64_t IFE5:1;
      uint64_t IFE6:1;
      uint64_t IFE7:1;
      uint64_t IFE8:1;
      uint64_t IFE9:1;
      uint64_t IFE10:1;
      uint64_t IFE11:1;
      uint64_t IFE12:1;
      uint64_t IFE13:1;
      uint64_t IFE14:1;
      uint64_t IFE15:1;
      uint64_t IFE16:1;
      uint64_t IFE17:1;
      uint64_t IFE18:1;
      uint64_t IFE19:1;
      uint64_t IFE20:1;
      uint64_t IFE21:1;
      uint64_t IFE22:1;
      uint64_t IFE23:1;
      uint64_t IFE24:1;
      uint64_t IFE25:1;
      uint64_t IFE26:1;
      uint64_t IFE27:1;
      uint64_t IFE28:1;
      uint64_t IFE29:1;
      uint64_t IFE30:1;
      uint64_t IFE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFER0;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAXCNT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFMCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFCP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCPR;

  uint8_t res7[380];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR128;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR129;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR130;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR132;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR133;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR134;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR136;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR137;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR138;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR140;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR141;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR142;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR144;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR145;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR146;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR148;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR149;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR150;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR152;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR153;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR154;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR156;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR157;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR158;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR160;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR161;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR162;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR164;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR165;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR166;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR168;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR169;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR170;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR172;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR173;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR174;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR176;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR177;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR178;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR180;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR181;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR182;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR184;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR185;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR186;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR188;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR189;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR190;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR192;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR193;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR194;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR196;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR197;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:11;
      uint64_t INV:1;
      uint64_t PUE:1;
      uint64_t PUS:1;
      uint64_t HYS:1;
      uint64_t IBE:1;
      uint64_t reservedSpace1:2;
      uint64_t APC:1;
      uint64_t SMC:1;
      uint64_t ODE:1;
      uint64_t OBE:1;
      uint64_t reservedSpace2:2;
      uint64_t SRC:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSCR198;

  uint8_t res8[1252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSS:4;
      uint64_t reservedSpace0:27;
      uint64_t INV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMCR93;

  uint8_t res9[1864];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO8_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO12_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO16_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO20_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO24_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO28_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO32_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO36_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO40_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO44_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO48_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO52_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO56_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO60_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO64_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO68_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO72_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO76_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO80_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO84_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO88_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO92_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO96_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO100_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO104_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO108_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO112_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO116_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO120_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO124_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO128_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO132_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO136_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO140_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO144_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO148_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO152_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO156_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO160_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO164_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO168_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO172_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO176_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO180_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO184_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO188_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO192_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDO_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDO_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDO_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDO_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDO;

  uint8_t res10[312];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI0_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI8_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI12_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI16_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI20_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI24_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI28_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI32_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI36_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI40_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI44_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI48_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI52_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI56_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI60_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI64_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI68_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI72_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI76_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI80_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI84_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI88_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI92_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI96_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI100_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI104_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI108_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI112_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI116_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI120_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI124_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI128_131;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI132_135;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI136_139;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI140_143;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI144_147;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI148_151;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI152_155;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI156_159;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI160_163;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI164_167;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI168_171;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI172_175;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI176_179;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI180_183;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI184_187;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI188_191;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI192_195;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDI_4n3:1;
      uint64_t reservedSpace0:7;
      uint64_t PDI_4n2:1;
      uint64_t reservedSpace1:7;
      uint64_t PDI_4n1:1;
      uint64_t reservedSpace2:7;
      uint64_t PDI_4n:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPDI;

  uint8_t res11[312];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDO:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDO12;

  uint8_t res12[38];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI0;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI1;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI2;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI3;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI4;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI5;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI6;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI7;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI8;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI9;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI10;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI11;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PPDI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) PGPDI12;

  uint8_t res13[38];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPPDO:16;
      uint64_t MASK:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPGPDO12;

};

#define SIUL2 (*(volatile struct SIUL2_tag *) 0xfffc0004)

struct SMPU_SMPU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GVLD:1;
      uint64_t HRL:3;
      uint64_t reservedSpace0:12;
      uint64_t MERR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CESR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NRGD:4;
      uint64_t reservedSpace0:12;
      uint64_t MEOVR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CESR1;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR15;

  uint8_t res1[640];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD315;

};

#define SMPU_SMPU_0 (*(volatile struct SMPU_SMPU_0_tag *) 0xfc010000)

struct SMPU_SMPU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GVLD:1;
      uint64_t HRL:3;
      uint64_t reservedSpace0:12;
      uint64_t MERR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CESR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NRGD:4;
      uint64_t reservedSpace0:12;
      uint64_t MEOVR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CESR1;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EAR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMN:4;
      uint64_t ERW:1;
      uint64_t EATTR:2;
      uint64_t reservedSpace0:1;
      uint64_t EACD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EDR15;

  uint8_t res1[640];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD00;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD02;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD03;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD04;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD05;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD06;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD07;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD08;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD09;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD010;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD210;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD310;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD011;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD211;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD311;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD012;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD212;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD312;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD013;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD213;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD313;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD014;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD214;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD314;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD015;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M15P:2;
      uint64_t M14P:2;
      uint64_t M13P:2;
      uint64_t M12P:2;
      uint64_t M11P:2;
      uint64_t M10P:2;
      uint64_t M9P:2;
      uint64_t M8P:2;
      uint64_t M7P:2;
      uint64_t M6P:2;
      uint64_t M5P:2;
      uint64_t M4P:2;
      uint64_t M3P:2;
      uint64_t M2P:2;
      uint64_t M1P:2;
      uint64_t M0P:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD215;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VLD:1;
      uint64_t CI:1;
      uint64_t reservedSpace0:1;
      uint64_t RO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RGD_WORD315;

};

#define SMPU_SMPU_1 (*(volatile struct SMPU_SMPU_1_tag *) 0xfc014000)

struct SPT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPT_EN:1;
      uint64_t ACQ_EN:1;
      uint64_t PG_ST_CTRL:1;
      uint64_t AHB_BYTE_SWAP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GBL_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reserved:12;
      uint64_t reservedSpace0:1;
      uint64_t INF_SMPLS:1;
      uint64_t INF_CHRPS:1;
      uint64_t CSI_ADC_SEL:1;
      uint64_t CH_A_SEL:2;
      uint64_t CH_B_SEL:2;
      uint64_t CH_C_SEL:2;
      uint64_t CH_D_SEL:2;
      uint64_t CH_E_SEL:2;
      uint64_t CH_F_SEL:2;
      uint64_t CH_G_SEL:2;
      uint64_t CH_H_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_GBL_CTRL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUM_CHRP:16;
      uint64_t NUM_SMPL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_GBL_CTRL_1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_B_DC:15;
      uint64_t reservedSpace0:1;
      uint64_t CH_A_DC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_D_DC:15;
      uint64_t reservedSpace0:1;
      uint64_t CH_C_DC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_F_DC:15;
      uint64_t reservedSpace0:1;
      uint64_t CH_E_DC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_CTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_H_DC:15;
      uint64_t reservedSpace0:1;
      uint64_t CH_G_DC:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_CTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t SDMA_START_ADDR:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMA_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE_LEN:11;
      uint64_t TRF_MOD:1;
      uint64_t DATA_ORG_CFG:2;
      uint64_t reservedSpace0:1;
      uint64_t HMASTER_ENC_DIS:1;
      uint64_t SDMA_BUF_LEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMA_CTRL1;

  uint8_t res1[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_A_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_A0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_A_MIN:16;
      uint64_t CH_A_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_A1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_A_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_A2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_B_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_B0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_B_MIN:16;
      uint64_t CH_B_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_B1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_B_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_B2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_C_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_C0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_C_MIN:16;
      uint64_t CH_C_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_C1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_C_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_C2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_D_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_D0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_D_MIN:16;
      uint64_t CH_D_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_D1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_D_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_D2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_E_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_E0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_E_MIN:16;
      uint64_t CH_E_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_E1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_E_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_E2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_F_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_F0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_F_MIN:16;
      uint64_t CH_F_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_F1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_F_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_F2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_G_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_G0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_G_MIN:16;
      uint64_t CH_G_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_G1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_G_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_G2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_H_SUM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_H0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_H_MIN:16;
      uint64_t CH_H_MAX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_H1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_H_BT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_STATUS_H2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INPUT_MODE:1;
      uint64_t DATA_MODE:1;
      uint64_t CALIB_ON:1;
      uint64_t REAL_DATA_MUX:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_CSI_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t SDMA_START_ADDR_BYP:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMA_BYP_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LINE_LEN_BYP:11;
      uint64_t reservedSpace0:5;
      uint64_t SDMA_BUF_LEN_BYP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDMA_BYP_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t NUM_SMPL_BYP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACQ_BYP_CTRL;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG_ST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_PG_ST_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP:1;
      uint64_t ASYNCSTOP:1;
      uint64_t DEBUG_MD:2;
      uint64_t CS_IMM_DEBUG:1;
      uint64_t CS_BKPT_DEBUG:1;
      uint64_t CS_SYS_DEBUG:1;
      uint64_t BKPT0_EN:1;
      uint64_t BKPT0_RE:1;
      uint64_t BKPT1_EN:1;
      uint64_t BKPT1_RE:1;
      uint64_t BKPT2_EN:1;
      uint64_t BKPT2_RE:1;
      uint64_t BKPT3_EN:1;
      uint64_t BKPT3_RE:1;
      uint64_t PREFETCH:1;
      uint64_t ERROR_EN:1;
      uint64_t CSDMA_BRST_SZ:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_MODE_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WD_COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_WD_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKPT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_BKPT0_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKPT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_BKPT1_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKPT2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_BKPT2_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKPT3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_BKPT3_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JAM_INST_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_JAM_INST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JAM_INST_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_JAM_INST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JAM_INST_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_JAM_INST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JAM_INST_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_JAM_INST3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT_INST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_CURR_INST_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_INST_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_CURR_INST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_INST_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_CURR_INST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_INST_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_CURR_INST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_INST_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_CURR_INST3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOP_CNTR0:16;
      uint64_t LOOP_CNTR1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_LOOPCNTR01;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOP_CNTR2:16;
      uint64_t LOOP_CNTR3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_LOOPCNTR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR_INST_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_ERR_INST_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_INST_127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_ERR_INST0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_INST_95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_ERR_INST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_INST_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_ERR_INST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR_INST_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_ERR_INST3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS_START:1;
      uint64_t PS_WAIT:1;
      uint64_t PS_DEBUG:1;
      uint64_t PS_STOP:1;
      uint64_t PS_ASYNCSTOP:1;
      uint64_t PS_RUN:1;
      uint64_t MD_HALT:1;
      uint64_t MD_STEP_ONCE:1;
      uint64_t MD_STEP_JUMP:1;
      uint64_t MD_JAM:1;
      uint64_t STEP_ONCE_OVR:1;
      uint64_t STEP_JUMP_OVR:1;
      uint64_t JAM_OVR:1;
      uint64_t BKPT0_OCC:1;
      uint64_t BKPT1_OCC:1;
      uint64_t BKPT2_OCC:1;
      uint64_t BKPT3_OCC:1;
      uint64_t reservedSpace0:14;
      uint64_t WD_ZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_STATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILL_OPCODE:1;
      uint64_t ILL_LOOP:1;
      uint64_t ILL_0CNTLOOP:1;
      uint64_t ILL_NEXT:1;
      uint64_t ILL_SET:1;
      uint64_t ILL_GET:1;
      uint64_t ILL_ADD:1;
      uint64_t JAM_ILL_OPCODE:1;
      uint64_t JAM_ILL_SYNC:1;
      uint64_t JAM_ILL_LOOP:1;
      uint64_t JAM_ILL_NEXT:1;
      uint64_t JAM_ILL_JUMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_STATUS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAITREG_SW:8;
      uint64_t WAITREG_CTE:4;
      uint64_t WAITREG_RCS:1;
      uint64_t WAITREG_RFS:1;
      uint64_t WAITREG_CAD:1;
      uint64_t WAITREG_FAD:1;
      uint64_t WAITREG_PXD:1;
      uint64_t WAITREG_TR:2;
      uint64_t WD_WAITREG_CTE:4;
      uint64_t WD_WAITREG_RCS:1;
      uint64_t WD_WAITREG_RFS:1;
      uint64_t WD_WAITREG_TR:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_STATUS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOOP_DEPTH:3;
      uint64_t PROC_STATE:4;
      uint64_t CS_DMA_ON:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_STATUS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTREG1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_EVTREG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTREG2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_EVTREG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_EVTREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_SW_EVTREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTREG1:8;
      uint64_t ACQ_WIN_DONE_EVT1:1;
      uint64_t ACQ_FRM_DONE_EVT1:1;
      uint64_t PDMA_TRANS_DONE_EVT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE1_VER_EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVTREG2:8;
      uint64_t ACQ_WIN_DONE_EVT2:1;
      uint64_t ACQ_FRM_DONE_EVT2:1;
      uint64_t PDMA_TRANS_DONE_EVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CORE2_VER_EVT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHRP_ACQ_DONE_RST:1;
      uint64_t FRM_ACQ_DONE_RST:1;
      uint64_t PDMA_TRANS_DONE_RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVENT_RST_CTRL;

  uint8_t res3[60];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMA_LFSR_LOAD_VAL_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMA_LFSR_LOAD_VAL_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMA_LFSR_LOAD_VAL_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMA_LFSR_LOAD_VAL_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDMA_LFSR_LOAD_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t PDMA_MAX_BURST_SIZE:2;
      uint64_t reservedSpace1:12;
      uint64_t PDMA_COUNT_CS_PRIORITY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMA_CONTROL;

  uint8_t res4[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRANSFER_COUNT:16;
      uint64_t AGGR_DATA_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMA_TRANSFER_COUNT_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXPN_ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDMA_FMTB_EXP_ADDR_STATUS;

  uint8_t res5[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OR_PAR_ERR_INJ:4;
      uint64_t TR_PAR_ERR_INJ:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM_ERR_INJECT_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WR_LCK_VIOL:1;
      uint64_t reservedSpace1:13;
      uint64_t TR_PAR_ERR:1;
      uint64_t reservedSpace2:12;
      uint64_t OR_3_ACC_CONTN:1;
      uint64_t OR_2_ACC_CONTN:1;
      uint64_t OR_DMA_PAR_ERR:1;
      uint64_t OR_MOD_PAR_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t WR_LCK_IE:1;
      uint64_t reservedSpace1:13;
      uint64_t TR_PAR_IE:1;
      uint64_t reservedSpace2:12;
      uint64_t OR_3_ACC_IE:1;
      uint64_t OR_2_ACC_IE:1;
      uint64_t OR_DMA_PAR_IE:1;
      uint64_t OR_MOD_PAR_IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEM_ERR_INT_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ILLEGAL_COMMAND_ERR:1;
      uint64_t DMA_COMMAND_ERR:1;
      uint64_t SDMA_WR_ERR:1;
      uint64_t SDMA_RD_ERR:1;
      uint64_t PDMA_AHB_ERR:1;
      uint64_t SDMA_AHB_ERR:1;
      uint64_t CS_AHB_ERR:1;
      uint64_t SDMA_RD_ERR_BYP:1;
      uint64_t SDMA_WR_ERR_BYP:1;
      uint64_t LINE_LEN_EXCD_ERR:1;
      uint64_t LINE_LEN_EXCD_BYP_ERR:1;
      uint64_t INCMPLT_SMPL_RCVD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t ILLEGAL_COMMAND_ERR_IE:1;
      uint64_t DMA_COMMAND_ERR_IE:1;
      uint64_t SDMA_WR_ERR_IE:1;
      uint64_t SDMA_RD_ERR_IE:1;
      uint64_t PDMA_AHB_ERR_IE:1;
      uint64_t SDMA_AHB_ERR_IE:1;
      uint64_t CS_AHB_ERR_IE:1;
      uint64_t SDMA_RD_ERR_BYP_IE:1;
      uint64_t SDMA_WR_ERR_BYP_IE:1;
      uint64_t LINE_LEN_EXCD_IE:1;
      uint64_t LINE_LEN_EXCD_BYP_IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA_ERR_INT_EN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHRP_ACQ_DONE:1;
      uint64_t FRM_ACQ_DONE:1;
      uint64_t PDMA_TRANS_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GBL_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHRP_ACQ_DONE_IE:1;
      uint64_t FRM_ACQ_DONE_IE:1;
      uint64_t PDMA_TRANS_DONE_IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GBL_STATUS_IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMT_DVS_ERR:1;
      uint64_t VMT_SS_CB_ERR:1;
      uint64_t VMT_CON_RL_ERR:1;
      uint64_t VMT_SHFT_OVF_ERR:1;
      uint64_t reservedSpace0:2;
      uint64_t HST_INVALID_WR_ACCESS_ERR:1;
      uint64_t HST_VECLEN_NOT_MULTOF8_ERR:1;
      uint64_t HST_SRC_NOT_OR_ERR:1;
      uint64_t HST_SRCADDR_NOT_MULTOF8_ERR:1;
      uint64_t HST_DESTADDR_NOT_MULTOF8_ERR:1;
      uint64_t reservedSpace1:4;
      uint64_t FFT_ILL_SHFTVAL:1;
      uint64_t reservedSpace2:3;
      uint64_t COPY_IP_CMD_ERR:1;
      uint64_t reservedSpace3:3;
      uint64_t MAXS_IP_CMD_ERR:1;
      uint64_t FFT_WIN_RND_ERR:1;
      uint64_t FFT_RDX4_RND_ERR:1;
      uint64_t FFT_QE_VL_OVS_ERR:1;
      uint64_t FFT_TW_OVS_ERR:1;
      uint64_t FFT_MULT_COEF1_ERR:1;
      uint64_t FFT_MULT_COEF2_ERR:1;
      uint64_t FFT_OPR_ADDR_ERR:1;
      uint64_t FFT_RDX2_RND_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_ACC_ERR_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VMT_DVS_IE:1;
      uint64_t VMT_SS_CB_IE:1;
      uint64_t VMT_CON_RL_IE:1;
      uint64_t VMT_SHFT_OVF_IE:1;
      uint64_t reservedSpace0:2;
      uint64_t HST_INVALID_WR_ACCESS_ERR_IE:1;
      uint64_t HST_VECLEN_NOT_MULTOF8_ERR_IE:1;
      uint64_t HST_SRC_NOT_OR_ERR_IE:1;
      uint64_t HST_SRCADDR_NOT_MULTOF8_ERR_IE:1;
      uint64_t HST_DESTADDR_NOT_MULTOF8_ERR_IE:1;
      uint64_t reservedSpace1:4;
      uint64_t FFT_ILL_SHFTVAL_IE:1;
      uint64_t reservedSpace2:3;
      uint64_t COPY_IP_CMD_IE:1;
      uint64_t reservedSpace3:3;
      uint64_t MAXS_IP_CMD_IE:1;
      uint64_t FFT_WIN_RND_IE:1;
      uint64_t FFT_RDX4_RND_IE:1;
      uint64_t FFT_QE_VL_OVS_IE:1;
      uint64_t FFT_TW_OVS_IE:1;
      uint64_t FFT_MULT_COEF1_IE:1;
      uint64_t FFT_MULT_COEF2_IE:1;
      uint64_t FFT_OPR_ADDR_IE:1;
      uint64_t FFT_RDX2_RND_IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HW_ACC_ERR_IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B0_OVF:1;
      uint64_t B1_OVF:1;
      uint64_t B2_OVF:1;
      uint64_t B3_OVF:1;
      uint64_t B4_OVF:1;
      uint64_t B5_OVF:1;
      uint64_t B6_OVF:1;
      uint64_t B7_OVF:1;
      uint64_t B8_OVF:1;
      uint64_t B9_OVF:1;
      uint64_t B10_OVF:1;
      uint64_t B11_OVF:1;
      uint64_t B12_OVF:1;
      uint64_t B13_OVF:1;
      uint64_t B14_OVF:1;
      uint64_t B15_OVF:1;
      uint64_t B16_OVF:1;
      uint64_t B17_OVF:1;
      uint64_t B18_OVF:1;
      uint64_t B19_OVF:1;
      uint64_t B20_OVF:1;
      uint64_t B21_OVF:1;
      uint64_t B22_OVF:1;
      uint64_t B23_OVF:1;
      uint64_t B24_OVF:1;
      uint64_t B25_OVF:1;
      uint64_t B26_OVF:1;
      uint64_t B27_OVF:1;
      uint64_t B28_OVF:1;
      uint64_t B29_OVF:1;
      uint64_t B30_OVF:1;
      uint64_t B31_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIST_OVF_STATUS0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t B32_OVF:1;
      uint64_t B33_OVF:1;
      uint64_t B34_OVF:1;
      uint64_t B35_OVF:1;
      uint64_t B36_OVF:1;
      uint64_t B37_OVF:1;
      uint64_t B38_OVF:1;
      uint64_t B39_OVF:1;
      uint64_t B40_OVF:1;
      uint64_t B41_OVF:1;
      uint64_t B42_OVF:1;
      uint64_t B43_OVF:1;
      uint64_t B44_OVF:1;
      uint64_t B45_OVF:1;
      uint64_t B46_OVF:1;
      uint64_t B47_OVF:1;
      uint64_t B48_OVF:1;
      uint64_t B49_OVF:1;
      uint64_t B50_OVF:1;
      uint64_t B51_OVF:1;
      uint64_t B52_OVF:1;
      uint64_t B53_OVF:1;
      uint64_t B54_OVF:1;
      uint64_t B55_OVF:1;
      uint64_t B56_OVF:1;
      uint64_t B57_OVF:1;
      uint64_t B58_OVF:1;
      uint64_t B59_OVF:1;
      uint64_t B60_OVF:1;
      uint64_t B61_OVF:1;
      uint64_t B62_OVF:1;
      uint64_t B63_OVF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIST_OVF_STATUS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVF_IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HIST_OVF_IE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS_START_INTEN:1;
      uint64_t PS_WAIT_INTEN:1;
      uint64_t PS_DEBUG_INTEN:1;
      uint64_t PS_STOP_INTEN:1;
      uint64_t PS_ASYNCSTOP_INTEN:1;
      uint64_t PS_RUN_INTEN:1;
      uint64_t MD_HALT_INTEN:1;
      uint64_t MD_STEP_ONCE_INTEN:1;
      uint64_t MD_STEP_JUMP_INTEN:1;
      uint64_t MD_JAM_INTEN:1;
      uint64_t STEP_ONCE_OVR_INTEN:1;
      uint64_t STEP_JUMP_OVR_INTEN:1;
      uint64_t JAM_OVR_INTEN:1;
      uint64_t BKPT0_OCC_INTEN:1;
      uint64_t BKPT1_OCC_INTEN:1;
      uint64_t BKPT2_OCC_INTEN:1;
      uint64_t BKPT3_OCC_INTEN:1;
      uint64_t reservedSpace0:14;
      uint64_t WD_ZERO_INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_INTEN0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ILL_OPCODE_INTEN:1;
      uint64_t ILL_LOOP_INTEN:1;
      uint64_t ILL_0CNTLOOP_INTEN:1;
      uint64_t ILL_NEXT_INTEN:1;
      uint64_t ILL_SET_INTEN:1;
      uint64_t ILL_GET_INTEN:1;
      uint64_t ILL_ADD_INTEN:1;
      uint64_t JAM_ILL_OPCODE_INTEN:1;
      uint64_t JAM_ILL_SYNC_INTEN:1;
      uint64_t JAM_ILL_LOOP_INTEN:1;
      uint64_t JAM_ILL_NEXT_INTEN:1;
      uint64_t JAM_ILL_JUMP_INTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_INTEN1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT1_INTEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_EVT1_INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT2_INTEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CS_EVT2_INTEN;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR0_LCK:1;
      uint64_t WR0_ACC_CTRL:1;
      uint64_t WR1_LCK:1;
      uint64_t WR1_ACC_CTRL:1;
      uint64_t WR2_LCK:1;
      uint64_t WR2_ACC_CTRL:1;
      uint64_t WR3_LCK:1;
      uint64_t WR3_ACC_CTRL:1;
      uint64_t WR4_LCK:1;
      uint64_t WR4_ACC_CTRL:1;
      uint64_t WR5_LCK:1;
      uint64_t WR5_ACC_CTRL:1;
      uint64_t WR6_LCK:1;
      uint64_t WR6_ACC_CTRL:1;
      uint64_t WR7_LCK:1;
      uint64_t WR7_ACC_CTRL:1;
      uint64_t WR8_LCK:1;
      uint64_t WR8_ACC_CTRL:1;
      uint64_t WR9_LCK:1;
      uint64_t WR9_ACC_CTRL:1;
      uint64_t WR10_LCK:1;
      uint64_t WR10_ACC_CTRL:1;
      uint64_t WR11_LCK:1;
      uint64_t WR11_ACC_CTRL:1;
      uint64_t WR12_LCK:1;
      uint64_t WR12_ACC_CTRL:1;
      uint64_t WR13_LCK:1;
      uint64_t WR13_ACC_CTRL:1;
      uint64_t WR14_LCK:1;
      uint64_t WR14_ACC_CTRL:1;
      uint64_t WR15_LCK:1;
      uint64_t WR15_ACC_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_0_15_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR16_LCK:1;
      uint64_t WR16_ACC_CTRL:1;
      uint64_t WR17_LCK:1;
      uint64_t WR17_ACC_CTRL:1;
      uint64_t WR18_LCK:1;
      uint64_t WR18_ACC_CTRL:1;
      uint64_t WR19_LCK:1;
      uint64_t WR19_ACC_CTRL:1;
      uint64_t WR20_LCK:1;
      uint64_t WR20_ACC_CTRL:1;
      uint64_t WR21_LCK:1;
      uint64_t WR21_ACC_CTRL:1;
      uint64_t WR22_LCK:1;
      uint64_t WR22_ACC_CTRL:1;
      uint64_t WR23_LCK:1;
      uint64_t WR23_ACC_CTRL:1;
      uint64_t WR24_LCK:1;
      uint64_t WR24_ACC_CTRL:1;
      uint64_t WR25_LCK:1;
      uint64_t WR25_ACC_CTRL:1;
      uint64_t WR26_LCK:1;
      uint64_t WR26_ACC_CTRL:1;
      uint64_t WR27_LCK:1;
      uint64_t WR27_ACC_CTRL:1;
      uint64_t WR28_LCK:1;
      uint64_t WR28_ACC_CTRL:1;
      uint64_t WR29_LCK:1;
      uint64_t WR29_ACC_CTRL:1;
      uint64_t WR30_LCK:1;
      uint64_t WR30_ACC_CTRL:1;
      uint64_t WR31_LCK:1;
      uint64_t WR31_ACC_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_16_31_CTRL_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR32_LCK:1;
      uint64_t WR32_ACC_CTRL:1;
      uint64_t WR33_LCK:1;
      uint64_t WR33_ACC_CTRL:1;
      uint64_t WR34_LCK:1;
      uint64_t WR34_ACC_CTRL:1;
      uint64_t WR35_LCK:1;
      uint64_t WR35_ACC_CTRL:1;
      uint64_t WR36_LCK:1;
      uint64_t WR36_ACC_CTRL:1;
      uint64_t WR37_LCK:1;
      uint64_t WR37_ACC_CTRL:1;
      uint64_t WR38_LCK:1;
      uint64_t WR38_ACC_CTRL:1;
      uint64_t WR39_LCK:1;
      uint64_t WR39_ACC_CTRL:1;
      uint64_t WR40_LCK:1;
      uint64_t WR40_ACC_CTRL:1;
      uint64_t WR41_LCK:1;
      uint64_t WR41_ACC_CTRL:1;
      uint64_t WR42_LCK:1;
      uint64_t WR42_ACC_CTRL:1;
      uint64_t WR43_LCK:1;
      uint64_t WR43_ACC_CTRL:1;
      uint64_t WR44_LCK:1;
      uint64_t WR44_ACC_CTRL:1;
      uint64_t WR45_LCK:1;
      uint64_t WR45_ACC_CTRL:1;
      uint64_t WR46_LCK:1;
      uint64_t WR46_ACC_CTRL:1;
      uint64_t WR47_LCK:1;
      uint64_t WR47_ACC_CTRL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_32_47_CTRL_REG;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R0:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R0_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R0:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R0_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R1:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R1_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R1:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R1_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R2:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R2_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R2:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R2_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R3:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R3_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R3:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R3_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R4:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R4_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R4:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R4_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R5:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R5_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R5:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R5_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R6:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R6_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R6:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R6_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R7:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R7_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R7:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R7_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R8:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R8_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R8:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R8_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R9:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R9_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R9:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R9_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R10:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R10_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R10:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R10_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R11:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R11_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R11:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R11_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R12:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R12_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R12:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R12_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R13:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R13_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R13:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R13_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R14:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R14_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R14:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R14_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R15:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R15_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R15:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R15_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R16:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R16_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R16:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R16_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R17:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R17_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R17:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R17_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R18:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R18_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R18:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R18_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R19:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R19_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R19:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R19_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R20:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R20_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R20:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R20_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R21:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R21_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R21:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R21_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R22:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R22_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R22:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R22_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R23:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R23_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R23:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R23_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R24:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R24_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R24:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R24_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R25:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R25_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R25:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R25_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R26:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R26_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R26:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R26_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R27:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R27_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R27:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R27_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R28:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R28_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R28:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R28_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R29:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R29_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R29:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R29_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R30:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R30_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R30:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R30_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R31:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R31_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R31:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R31_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R32:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R32_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R32:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R32_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R33:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R33_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R33:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R33_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R34:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R34_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R34:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R34_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R35:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R35_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R35:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R35_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R36:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R36_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R36:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R36_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R37:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R37_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R37:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R37_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R38:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R38_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R38:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R38_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R39:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R39_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R39:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R39_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R40:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R40_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R40:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R40_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R41:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R41_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R41:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R41_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R42:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R42_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R42:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R42_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R43:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R43_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R43:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R43_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R44:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R44_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R44:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R44_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R45:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R45_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R45:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R45_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R46:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R46_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R46:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R46_IM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REAL_R47:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R47_RE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IM_R47:24;
      uint64_t SIGN_EXT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WR_R47_IM;

};

#define SPT (*(volatile struct SPT_tag *) 0xffd10000)

struct SSCM_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t BMODE:3;
      uint64_t reservedSpace1:4;
      uint64_t NXEN1:1;
      uint64_t CERS:1;
      uint64_t CER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) STATUS;

  union
  {
    uint16_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t MREV:4;
      uint64_t IVLD:1;
      uint64_t JPIN:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) MEMCONFIG;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RAE:1;
      uint64_t PAE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) ERROR;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCSTAT;

};

#define SSCM (*(volatile struct SSCM_tag *) 0xffff8000)

struct STCU2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUN:1;
      uint64_t reservedSpace0:7;
      uint64_t LBPLLEN:1;
      uint64_t MBPLLEN:1;
      uint64_t BYP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RUNSW:1;
      uint64_t reservedSpace0:7;
      uint64_t LBSWPLLEN:1;
      uint64_t MBSWPLLEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RUNSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SKC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SKC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_CFG:3;
      uint64_t MBU:1;
      uint64_t PMOSEN:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace0:2;
      uint64_t WRP:1;
      uint64_t reservedSpace1:7;
      uint64_t LB_DELAY:8;
      uint64_t PTR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLLDF:7;
      uint64_t reservedSpace0:9;
      uint64_t PLLIDF:3;
      uint64_t reservedSpace1:5;
      uint64_t PLLODF:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLL_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDGEOC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDG;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVP:1;
      uint64_t ENGE:1;
      uint64_t CRCS:1;
      uint64_t WDTO:1;
      uint64_t LOCKE:1;
      uint64_t reservedSpace0:3;
      uint64_t RFSF:1;
      uint64_t UFSF:1;
      uint64_t reservedSpace1:6;
      uint64_t INVPSW:1;
      uint64_t ENGESW:1;
      uint64_t CRCSSW:1;
      uint64_t WDTOSW:1;
      uint64_t LOCKESW:1;
      uint64_t reservedSpace2:4;
      uint64_t ABORTHW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_STAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INVPUFM:1;
      uint64_t ENGEUFM:1;
      uint64_t CRCSUFM:1;
      uint64_t WDTOUFM:1;
      uint64_t LOCKEUFM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERR_FM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBS0:1;
      uint64_t LBS1:1;
      uint64_t LBS2:1;
      uint64_t LBS3:1;
      uint64_t LBS4:1;
      uint64_t LBS5:1;
      uint64_t LBS6:1;
      uint64_t LBS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBE0:1;
      uint64_t LBE1:1;
      uint64_t LBE2:1;
      uint64_t LBE3:1;
      uint64_t LBE4:1;
      uint64_t LBE5:1;
      uint64_t LBE6:1;
      uint64_t LBE7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBSSW0:1;
      uint64_t LBSSW1:1;
      uint64_t LBSSW2:1;
      uint64_t LBSSW3:1;
      uint64_t LBSSW4:1;
      uint64_t LBSSW5:1;
      uint64_t LBSSW6:1;
      uint64_t LBSSW7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBSSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBESW0:1;
      uint64_t LBESW1:1;
      uint64_t LBESW2:1;
      uint64_t LBESW3:1;
      uint64_t LBESW4:1;
      uint64_t LBESW5:1;
      uint64_t LBESW6:1;
      uint64_t LBESW7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBESW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBRMSW0:1;
      uint64_t LBRMSW1:1;
      uint64_t LBRMSW2:1;
      uint64_t LBRMSW3:1;
      uint64_t LBRMSW4:1;
      uint64_t LBRMSW5:1;
      uint64_t LBRMSW6:1;
      uint64_t LBRMSW7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBRMSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBUFM0:1;
      uint64_t LBUFM1:1;
      uint64_t LBUFM2:1;
      uint64_t LBUFM3:1;
      uint64_t LBUFM4:1;
      uint64_t LBUFM5:1;
      uint64_t LBUFM6:1;
      uint64_t LBUFM7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LBUFM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBS0:1;
      uint64_t MBS1:1;
      uint64_t MBS2:1;
      uint64_t MBS3:1;
      uint64_t MBS4:1;
      uint64_t MBS5:1;
      uint64_t MBS6:1;
      uint64_t MBS7:1;
      uint64_t MBS8:1;
      uint64_t MBS9:1;
      uint64_t MBS10:1;
      uint64_t MBS11:1;
      uint64_t MBS12:1;
      uint64_t MBS13:1;
      uint64_t MBS14:1;
      uint64_t MBS15:1;
      uint64_t MBS16:1;
      uint64_t MBS17:1;
      uint64_t MBS18:1;
      uint64_t MBS19:1;
      uint64_t MBS20:1;
      uint64_t MBS21:1;
      uint64_t MBS22:1;
      uint64_t MBS23:1;
      uint64_t MBS24:1;
      uint64_t MBS25:1;
      uint64_t MBS26:1;
      uint64_t MBS27:1;
      uint64_t MBS28:1;
      uint64_t MBS29:1;
      uint64_t MBS30:1;
      uint64_t MBS31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBS32:1;
      uint64_t MBS33:1;
      uint64_t MBS34:1;
      uint64_t MBS35:1;
      uint64_t MBS36:1;
      uint64_t MBS37:1;
      uint64_t MBS38:1;
      uint64_t MBS39:1;
      uint64_t MBS40:1;
      uint64_t MBS41:1;
      uint64_t MBS42:1;
      uint64_t MBS43:1;
      uint64_t MBS44:1;
      uint64_t MBS45:1;
      uint64_t MBS46:1;
      uint64_t MBS47:1;
      uint64_t MBS48:1;
      uint64_t MBS49:1;
      uint64_t MBS50:1;
      uint64_t MBS51:1;
      uint64_t MBS52:1;
      uint64_t MBS53:1;
      uint64_t MBS54:1;
      uint64_t MBS55:1;
      uint64_t MBS56:1;
      uint64_t MBS57:1;
      uint64_t MBS58:1;
      uint64_t MBS59:1;
      uint64_t MBS60:1;
      uint64_t MBS61:1;
      uint64_t MBS62:1;
      uint64_t MBS63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBS64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBE0:1;
      uint64_t MBE1:1;
      uint64_t MBE2:1;
      uint64_t MBE3:1;
      uint64_t MBE4:1;
      uint64_t MBE5:1;
      uint64_t MBE6:1;
      uint64_t MBE7:1;
      uint64_t MBE8:1;
      uint64_t MBE9:1;
      uint64_t MBE10:1;
      uint64_t MBE11:1;
      uint64_t MBE12:1;
      uint64_t MBE13:1;
      uint64_t MBE14:1;
      uint64_t MBE15:1;
      uint64_t MBE16:1;
      uint64_t MBE17:1;
      uint64_t MBE18:1;
      uint64_t MBE19:1;
      uint64_t MBE20:1;
      uint64_t MBE21:1;
      uint64_t MBE22:1;
      uint64_t MBE23:1;
      uint64_t MBE24:1;
      uint64_t MBE25:1;
      uint64_t MBE26:1;
      uint64_t MBE27:1;
      uint64_t MBE28:1;
      uint64_t MBE29:1;
      uint64_t MBE30:1;
      uint64_t MBE31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBE32:1;
      uint64_t MBE33:1;
      uint64_t MBE34:1;
      uint64_t MBE35:1;
      uint64_t MBE36:1;
      uint64_t MBE37:1;
      uint64_t MBE38:1;
      uint64_t MBE39:1;
      uint64_t MBE40:1;
      uint64_t MBE41:1;
      uint64_t MBE42:1;
      uint64_t MBE43:1;
      uint64_t MBE44:1;
      uint64_t MBE45:1;
      uint64_t MBE46:1;
      uint64_t MBE47:1;
      uint64_t MBE48:1;
      uint64_t MBE49:1;
      uint64_t MBE50:1;
      uint64_t MBE51:1;
      uint64_t MBE52:1;
      uint64_t MBE53:1;
      uint64_t MBE54:1;
      uint64_t MBE55:1;
      uint64_t MBE56:1;
      uint64_t MBE57:1;
      uint64_t MBE58:1;
      uint64_t MBE59:1;
      uint64_t MBE60:1;
      uint64_t MBE61:1;
      uint64_t MBE62:1;
      uint64_t MBE63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBE64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBEH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW0:1;
      uint64_t MBSSW1:1;
      uint64_t MBSSW2:1;
      uint64_t MBSSW3:1;
      uint64_t MBSSW4:1;
      uint64_t MBSSW5:1;
      uint64_t MBSSW6:1;
      uint64_t MBSSW7:1;
      uint64_t MBSSW8:1;
      uint64_t MBSSW9:1;
      uint64_t MBSSW10:1;
      uint64_t MBSSW11:1;
      uint64_t MBSSW12:1;
      uint64_t MBSSW13:1;
      uint64_t MBSSW14:1;
      uint64_t MBSSW15:1;
      uint64_t MBSSW16:1;
      uint64_t MBSSW17:1;
      uint64_t MBSSW18:1;
      uint64_t MBSSW19:1;
      uint64_t MBSSW20:1;
      uint64_t MBSSW21:1;
      uint64_t MBSSW22:1;
      uint64_t MBSSW23:1;
      uint64_t MBSSW24:1;
      uint64_t MBSSW25:1;
      uint64_t MBSSW26:1;
      uint64_t MBSSW27:1;
      uint64_t MBSSW28:1;
      uint64_t MBSSW29:1;
      uint64_t MBSSW30:1;
      uint64_t MBSSW31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSLSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW32:1;
      uint64_t MBSSW33:1;
      uint64_t MBSSW34:1;
      uint64_t MBSSW35:1;
      uint64_t MBSSW36:1;
      uint64_t MBSSW37:1;
      uint64_t MBSSW38:1;
      uint64_t MBSSW39:1;
      uint64_t MBSSW40:1;
      uint64_t MBSSW41:1;
      uint64_t MBSSW42:1;
      uint64_t MBSSW43:1;
      uint64_t MBSSW44:1;
      uint64_t MBSSW45:1;
      uint64_t MBSSW46:1;
      uint64_t MBSSW47:1;
      uint64_t MBSSW48:1;
      uint64_t MBSSW49:1;
      uint64_t MBSSW50:1;
      uint64_t MBSSW51:1;
      uint64_t MBSSW52:1;
      uint64_t MBSSW53:1;
      uint64_t MBSSW54:1;
      uint64_t MBSSW55:1;
      uint64_t MBSSW56:1;
      uint64_t MBSSW57:1;
      uint64_t MBSSW58:1;
      uint64_t MBSSW59:1;
      uint64_t MBSSW60:1;
      uint64_t MBSSW61:1;
      uint64_t MBSSW62:1;
      uint64_t MBSSW63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSMSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBSSW64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBSHSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW0:1;
      uint64_t MBESW1:1;
      uint64_t MBESW2:1;
      uint64_t MBESW3:1;
      uint64_t MBESW4:1;
      uint64_t MBESW5:1;
      uint64_t MBESW6:1;
      uint64_t MBESW7:1;
      uint64_t MBESW8:1;
      uint64_t MBESW9:1;
      uint64_t MBESW10:1;
      uint64_t MBESW11:1;
      uint64_t MBESW12:1;
      uint64_t MBESW13:1;
      uint64_t MBESW14:1;
      uint64_t MBESW15:1;
      uint64_t MBESW16:1;
      uint64_t MBESW17:1;
      uint64_t MBESW18:1;
      uint64_t MBESW19:1;
      uint64_t MBESW20:1;
      uint64_t MBESW21:1;
      uint64_t MBESW22:1;
      uint64_t MBESW23:1;
      uint64_t MBESW24:1;
      uint64_t MBESW25:1;
      uint64_t MBESW26:1;
      uint64_t MBESW27:1;
      uint64_t MBESW28:1;
      uint64_t MBESW29:1;
      uint64_t MBESW30:1;
      uint64_t MBESW31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBELSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW32:1;
      uint64_t MBESW33:1;
      uint64_t MBESW34:1;
      uint64_t MBESW35:1;
      uint64_t MBESW36:1;
      uint64_t MBESW37:1;
      uint64_t MBESW38:1;
      uint64_t MBESW39:1;
      uint64_t MBESW40:1;
      uint64_t MBESW41:1;
      uint64_t MBESW42:1;
      uint64_t MBESW43:1;
      uint64_t MBESW44:1;
      uint64_t MBESW45:1;
      uint64_t MBESW46:1;
      uint64_t MBESW47:1;
      uint64_t MBESW48:1;
      uint64_t MBESW49:1;
      uint64_t MBESW50:1;
      uint64_t MBESW51:1;
      uint64_t MBESW52:1;
      uint64_t MBESW53:1;
      uint64_t MBESW54:1;
      uint64_t MBESW55:1;
      uint64_t MBESW56:1;
      uint64_t MBESW57:1;
      uint64_t MBESW58:1;
      uint64_t MBESW59:1;
      uint64_t MBESW60:1;
      uint64_t MBESW61:1;
      uint64_t MBESW62:1;
      uint64_t MBESW63:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBEMSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBESW64:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBEHSW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBUFM0:1;
      uint64_t MBUFM1:1;
      uint64_t MBUFM2:1;
      uint64_t MBUFM3:1;
      uint64_t MBUFM4:1;
      uint64_t MBUFM5:1;
      uint64_t MBUFM6:1;
      uint64_t MBUFM7:1;
      uint64_t MBUFM8:1;
