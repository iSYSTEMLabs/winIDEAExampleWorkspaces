#include <stdint.h>

#define GIODIRA   (*(unsigned volatile int *) (0xFFF7BC34))

struct Floating_point_registers_Advanced_SIMD_and_Floating_point_Extension_system_registers_tag
{
  uint32_t FPSID;
  uint8_t res0[4092];

  uint32_t FPSCR;
  uint8_t res1[20476];

  uint32_t MVFR1;
  uint8_t res2[4092];

  uint32_t MVFR0;
  uint8_t res3[4092];

  uint32_t FPEXC;
};

#define Floating_point_registers_Advanced_SIMD_and_Floating_point_Extension_system_registers (*(volatile struct Floating_point_registers_Advanced_SIMD_and_Floating_point_Extension_system_registers_tag *) 0xa0000)

struct DSS_REG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVT0:7;
      uint64_t reservedSpace0:9;
      uint64_t EVT1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIEVENTCAPTURESEL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CQDATAWIDTH:2;
      uint64_t reservedSpace0:1;
      uint64_t CQ96BITPACKEN:1;
      uint64_t CQ0BASEADDR:9;
      uint64_t CQ1BASEADDR:9;
      uint64_t CQ2BASEADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CQCFG1;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPCCPARITYSTAT:8;
      uint64_t TPCCPARITYCLR:1;
      uint64_t TPCCPARITYEN:1;
      uint64_t TPCCPARITYTSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPCCPARSTATCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSI2TXPARITYSTAT:7;
      uint64_t reservedSpace0:1;
      uint64_t CSI2TXPARITYCLR:1;
      uint64_t CSI2TXPARITYEN:1;
      uint64_t CSI2TXPARITYTSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSI2TXPARSTATCFG;

  uint8_t res2[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t CSIMIDLEREQ:1;
      uint64_t reservedSpace1:2;
      uint64_t CSILANEENABLE:5;
      uint64_t CSISIDLEACK:1;
      uint64_t reservedSpace2:1;
      uint64_t CSIPIPD0:1;
      uint64_t CSIPIPD1:1;
      uint64_t CSIPIPD2:1;
      uint64_t CSIPIPD3:1;
      uint64_t CSIPIPD4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSICFG1;

  uint8_t res3[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUSTADD5;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUENDADD5;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0WRMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUSTADD5;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUENDADD5;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0RDMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC0RDMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUSTADD5;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUENDADD5;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1WRMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1WRMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUSTADD5;

  uint8_t res10[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUENDADD5;

  uint8_t res11[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC1RDMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC1RDMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPURNGVLD:8;
      uint64_t TPTC0RDMPURNGVLD:8;
      uint64_t TPTC1WRMPURNGVLD:8;
      uint64_t TPTC1RDMPURNGVLD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTCMPUVALIDCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC0WRMPUEN:1;
      uint64_t TPTC0RDMPUEN:1;
      uint64_t TPTC1WRMPUEN:1;
      uint64_t TPTC1RDMPUEN:1;
      uint64_t TPTC0WRMPUERRCLR:1;
      uint64_t TPTC0RDMPUERRCLR:1;
      uint64_t TPTC1WRMPUERRCLR:1;
      uint64_t TPTC1RDMPUERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTCMPUENCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX1IOFFSET:16;
      uint64_t TSTPATRX1IINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX1ICFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX2IOFFSET:16;
      uint64_t TSTPATRX2IINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX2ICFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX3IOFFSET:16;
      uint64_t TSTPATRX3IINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX3ICFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX4IOFFSET:16;
      uint64_t TSTPATRX4IINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX4ICFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX1QOFFSET:16;
      uint64_t TSTPATRX1QINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX1QCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX2QOFFSET:16;
      uint64_t TSTPATRX2QINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX2QCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX3QOFFSET:16;
      uint64_t TSTPATRX3QINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX3QCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATRX4QOFFSET:16;
      uint64_t TSTPATRX4QINCR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNRX4QCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSTPATVLDCNT:8;
      uint64_t TSTPATGENEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TESTPATTERNVLDCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t FFTACCSLVEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSSMISC;

  uint8_t res12[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPCC1PARITYSTAT:9;
      uint64_t TPCC1PARITYCLR:1;
      uint64_t TPCC1PARITYEN:1;
      uint64_t TPCC1PARITYTSTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPCC1PARSTATCFG;

  uint8_t res13[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DMMADCBUFPINPONSEL:1;
      uint64_t DMMADCBUFWREN:1;
      uint64_t DMMCPBPMPINPONSEL:1;
      uint64_t DMMCPBPMWREN:1;
      uint64_t DMMCPBPMMEMSEL:1;
      uint64_t DMMCQPINPONSEL:1;
      uint64_t DMMCQWREN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMSWINT1;

  uint8_t res14[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRAMESTRTINTMUXSEL:2;
      uint64_t CHIRPAVLINTMUXSEL:2;
      uint64_t PINPONINTMUXSEL:2;
      uint64_t LGFRAMESTRTINTMUXSEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSSINTRCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPUMSTID0:8;
      uint64_t MPUMSTID1:8;
      uint64_t MPUMSTID2:8;
      uint64_t MPUMSTID3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUMSTIDCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPUMSTID4:8;
      uint64_t MPUMSTID5:8;
      uint64_t MPUMSTID6:8;
      uint64_t MPUMSTID7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUMSTIDCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPUMSTIDVLD:8;
      uint64_t MPUERRMSTID:8;
      uint64_t reservedSpace0:1;
      uint64_t MPUERRCLR:1;
      uint64_t reservedSpace1:1;
      uint64_t MPUMSTIDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUMSTIDCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSRAM1ECCINIT:1;
      uint64_t HSRAM1ECCINITDONE:1;
      uint64_t HSRAM1ECCEN:1;
      uint64_t HSRAM1ECCERRCLR:1;
      uint64_t HSRAM1ECCFAULTADDRESS:11;
      uint64_t HSRAM1ECCREPAIREDBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HSRAM1ECCCFG;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATATRRAMECCINIT:1;
      uint64_t DATATRRAMECCINITDONE:1;
      uint64_t DATATRRAMECCEN:1;
      uint64_t DATATRRAMECCERRCLR:1;
      uint64_t DATATRRAMECCFAULTADDRESS:9;
      uint64_t DATATRRAMECCREPAIREDBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATATRRAMECCCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBUFPINGECCINIT:1;
      uint64_t ADCBUFPINGECCINITDONE:1;
      uint64_t ADCBUFPINGECCEN:1;
      uint64_t ADCBUFPINGECCERRCLR:1;
      uint64_t ADCBUFPINGECCFAULTADDRESS:11;
      uint64_t ADCBUFPINGECCREPAIREDBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCBUFPINGECCCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBUFPONGECCINIT:1;
      uint64_t ADCBUFPONGECCINITDONE:1;
      uint64_t ADCBUFPONGECCEN:1;
      uint64_t ADCBUFPONGECCERRCLR:1;
      uint64_t ADCBUFPONGECCFAULTADDRESS:11;
      uint64_t ADCBUFPONGECCREPAIREDBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCBUFPONGECCCFG;

  uint8_t res16[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP0PAREN:1;
      uint64_t UMAP0PARERRCLR:1;
      uint64_t UMAP0BANK01ERROUT:1;
      uint64_t UMAP0BANK23ERROUT:1;
      uint64_t UMAP0BANK01ADDOUT:11;
      uint64_t UMAP0BANK23ADDOUT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UMAP0PARITYCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP0BANK0BITOUT:16;
      uint64_t UMAP0BANK1BITOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UMAP0PARITYCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP0BANK2BITOUT:16;
      uint64_t UMAP0BANK3BITOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UMAP0PARITYCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP1PAREN:1;
      uint64_t UMAP1PARERRCLR:1;
      uint64_t UMAP1BANK01ERROUT:1;
      uint64_t UMAP1BANK23ERROUT:1;
      uint64_t UMAP1BANK01ADDOUT:11;
      uint64_t UMAP1BANK23ADDOUT:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UMAP1PARITYCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP1BANK0BITOUT:16;
      uint64_t UMAP1BANK1BITOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UMAP1PARITYCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP1BANK2BITOUT:16;
      uint64_t UMAP1BANK3BITOUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UMAP1PARITYCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESMGRP2MASK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMGRP2MASKCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP0BANK0DATAINIT:1;
      uint64_t UMAP0BANK1DATAINIT:1;
      uint64_t UMAP0BANK2DATAINIT:1;
      uint64_t UMAP0BANK3DATAINIT:1;
      uint64_t UMAP1BANK0DATAINIT:1;
      uint64_t UMAP1BANK1DATAINIT:1;
      uint64_t UMAP1BANK2DATAINIT:1;
      uint64_t UMAP1BANK3DATAINIT:1;
      uint64_t UMAP0BANK0PARINIT:1;
      uint64_t UMAP0BANK1PARINIT:1;
      uint64_t UMAP0BANK2PARINIT:1;
      uint64_t UMAP0BANK3PARINIT:1;
      uint64_t UMAP1BANK0PARINIT:1;
      uint64_t UMAP1BANK1PARINIT:1;
      uint64_t UMAP1BANK2PARINIT:1;
      uint64_t UMAP1BANK3PARINIT:1;
      uint64_t UMAP0BANK0DATAINITDONE:1;
      uint64_t UMAP0BANK1DATAINITDONE:1;
      uint64_t UMAP0BANK2DATAINITDONE:1;
      uint64_t UMAP0BANK3DATAINITDONE:1;
      uint64_t UMAP1BANK0DATAINITDONE:1;
      uint64_t UMAP1BANK1DATAINITDONE:1;
      uint64_t UMAP1BANK2DATAINITDONE:1;
      uint64_t UMAP1BANK3DATAINITDONE:1;
      uint64_t UMAP0BANK0PARINITDONE:1;
      uint64_t UMAP0BANK1PARINITDONE:1;
      uint64_t UMAP0BANK2PARINITDONE:1;
      uint64_t UMAP0BANK3PARINITDONE:1;
      uint64_t UMAP1BANK0PARINITDONE:1;
      uint64_t UMAP1BANK1PARINITDONE:1;
      uint64_t UMAP1BANK2PARINITDONE:1;
      uint64_t UMAP1BANK3PARINITDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2MEMINITCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UMAP0BANK0PRAMINIT:1;
      uint64_t UMAP0BANK1PRAMINIT:1;
      uint64_t UMAP1BANK0PRAMINIT:1;
      uint64_t UMAP1BANK1PRAMINIT:1;
      uint64_t UMAP0BANK0PRAMINITDONE:1;
      uint64_t UMAP0BANK1PRAMINITDONE:1;
      uint64_t UMAP1BANK0PRAMINITDONE:1;
      uint64_t UMAP1BANK1PRAMINITDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L2MEMINITCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEMLRSTCAUSE:8;
      uint64_t GEMGRSTCAUSE:8;
      uint64_t GEMPORCAUSE:8;
      uint64_t GEMRSTCAUSECLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEMRSTCAUSE;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t PWRSMMODESTATUS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEMPWRSMCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PWRSMSLEEPTRIG:1;
      uint64_t PWRSMLRSTHALT:1;
      uint64_t GEMEVENTMASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEMPWRSMCFG4;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKEMASK0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKEMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKEMASK1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKEMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKEMASK2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKEMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMMISEVTMASK0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMMISEVTMASK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMMISEVTMASK1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMMISEVTMASK1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMMISEVTMASK2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMMISEVTMASK2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKESRCSTAT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKESRCSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKESRCSTAT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKESRCSTAT1;

  uint8_t res19[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKESRCSTAT2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKESRCSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMEVNTMONSTAT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMEVNTMONSTAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMEVNTMONSTAT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMEVNTMONSTAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMEVNTMONSTAT2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMEVNTMONSTAT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKESRCSTATCLR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKESRCSTATCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKESRCSTATCLR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKESRCSTATCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRSMWAKESRCSTATCLR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWRSMWAKESRCSTATCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t ADCBUFREALONLYMODE:1;
      uint64_t reservedSpace1:2;
      uint64_t ADCBUFIQSWAP:1;
      uint64_t RX0EN:1;
      uint64_t RX1EN:1;
      uint64_t RX2EN:1;
      uint64_t RX3EN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADCBUFWRITEMODE:1;
      uint64_t ADCBUFCONTMODEEN:1;
      uint64_t ADCBUFCONTSTRTPL:1;
      uint64_t ADCBUFCONTSTOPPL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCBUFCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBUFADDRX0:11;
      uint64_t reservedSpace0:5;
      uint64_t ADCBUFADDRX1:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCBUFCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBUFADDRX2:11;
      uint64_t reservedSpace0:5;
      uint64_t ADCBUFADDRX3:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCBUFCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCBUFSAMPCNT:16;
      uint64_t ADCBUFNUMCHRPPING:5;
      uint64_t ADCBUFNUMCHRPPONG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCBUFCFG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t STCPBISTLRSTDASRTHALT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCPBISTSMCFG1;

  uint8_t res20[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTI2EVT0:7;
      uint64_t reservedSpace0:9;
      uint64_t RTI2EVT1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTI2EVENTCAPTURESEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CQPIPOSELCNT:1;
      uint64_t CQPIPOSELVAL:1;
      uint64_t CPBPMPIPOSELCNT:1;
      uint64_t CPBPMPIPOSELVAL:1;
      uint64_t TPCC0PARMEMINIT:1;
      uint64_t TPCC1PARMEMINIT:1;
      uint64_t TPCC0PARMEMINITDONE:1;
      uint64_t TPCC1PARMEMINITDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSSMISC5;

};

#define DSS_REG (*(volatile struct DSS_REG_tag *) 0x50000450)

struct DSS_REG2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUSTADD5;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUENDADD5;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2WRMPUERRADD;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUSTADD5;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUENDADD5;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2RDMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC2RDMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUSTADD5;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUENDADD5;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3WRMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3WRMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUSTADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUSTADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUSTADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUSTADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUSTADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUSTADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUSTADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUSTADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUSTADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUSTADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUSTADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUSTADD5;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUENDADD0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUENDADD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUENDADD1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUENDADD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUENDADD2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUENDADD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUENDADD3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUENDADD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUENDADD4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUENDADD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUENDADD5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUENDADD5;

  uint8_t res8[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC3RDMPUERRADD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTC3RDMPUERRADD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPURNGVLD:8;
      uint64_t TPTC2RDMPURNGVLD:8;
      uint64_t TPTC3WRMPURNGVLD:8;
      uint64_t TPTC3RDMPURNGVLD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTCMPUVALIDCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPTC2WRMPUEN:1;
      uint64_t TPTC2RDMPUEN:1;
      uint64_t TPTC3WRMPUEN:1;
      uint64_t TPTC3RDMPUEN:1;
      uint64_t TPTC2WRMPUERRCLR:1;
      uint64_t TPTC2RDMPUERRCLR:1;
      uint64_t TPTC3WRMPUERRCLR:1;
      uint64_t TPTC3RDMPUERRCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPTCMPUENCFG2;

  uint8_t res9[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3ECCEN:1;
      uint64_t L3ECCERRCLR:1;
      uint64_t L3ECCERRSTAT:1;
      uint64_t L3ECCREPAIREDBIT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L3ECCCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t L3ECCFAULTADDR:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) L3ECCCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSSSWIRQ1:1;
      uint64_t MSSSWIRQ2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSS2MSSSWIRQ;

};

#define DSS_REG2 (*(volatile struct DSS_REG2_tag *) 0x50000d00)

struct DSS_CBUFF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_1LVDS_0CSI:1;
      uint64_t CFG_ECC_EN:1;
      uint64_t cftrigen:1;
      uint64_t CFG_SW_TRIG_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t cvc0en:2;
      uint64_t cvc1en:2;
      uint64_t cvc2en:2;
      uint64_t cvc3en:2;
      uint64_t reservedSpace1:6;
      uint64_t CFG_CHIRP_AVAIL_TRIG:1;
      uint64_t CFG_FRAME_START_TRIG:1;
      uint64_t reservedSpace2:1;
      uint64_t cswcrst:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG_REG_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_SPHDR_ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_SPHDR_ADDRESS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_CMD_HSVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CMD_HSVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_CMD_HEVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CMD_HEVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_CMD_VSVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CMD_VSVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_CMD_VEVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CMD_VEVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LPHDR_ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LPHDR_ADDRESS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_CHIRPS_PER_FRAME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_CHIRPS_PER_FRAME;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_FIFO_FREE_THRESHOLD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_FIFO_FREE_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LPPYLD_ADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LPPYLD_ADDRESS;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL0_VALID:1;
      uint64_t LL0_HE:1;
      uint64_t LL0_HS:1;
      uint64_t LL0_VCNUM:2;
      uint64_t LL0_FMT:2;
      uint64_t LL0_FMT_MAP:1;
      uint64_t LL0_FMT_IN:1;
      uint64_t LL0_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL0_LPHDR_EN:1;
      uint64_t LL0_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL0_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL0_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL0_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL0_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll0dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL0_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL1_VALID:1;
      uint64_t LL1_HE:1;
      uint64_t LL1_HS:1;
      uint64_t LL1_VCNUM:2;
      uint64_t LL1_FMT:2;
      uint64_t LL1_FMT_MAP:1;
      uint64_t LL1_FMT_IN:1;
      uint64_t LL1_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL1_LPHDR_EN:1;
      uint64_t LL1_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL1_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL1_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL1_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL1_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll1dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL1_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL2_VALID:1;
      uint64_t LL2_HE:1;
      uint64_t LL2_HS:1;
      uint64_t LL2_VCNUM:2;
      uint64_t LL2_FMT:2;
      uint64_t LL2_FMT_MAP:1;
      uint64_t LL2_FMT_IN:1;
      uint64_t LL2_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL2_LPHDR_EN:1;
      uint64_t LL2_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL2_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL2_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL2_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL2_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll2dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL2_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL3_VALID:1;
      uint64_t LL3_HE:1;
      uint64_t LL3_HS:1;
      uint64_t LL3_VCNUM:2;
      uint64_t LL3_FMT:2;
      uint64_t LL3_FMT_MAP:1;
      uint64_t LL3_FMT_IN:1;
      uint64_t LL3_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL3_LPHDR_EN:1;
      uint64_t LL3_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL3_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL3_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL3_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL3_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll3dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL3_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL4_VALID:1;
      uint64_t LL4_HE:1;
      uint64_t LL4_HS:1;
      uint64_t LL4_VCNUM:2;
      uint64_t LL4_FMT:2;
      uint64_t LL4_FMT_MAP:1;
      uint64_t LL4_FMT_IN:1;
      uint64_t LL4_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL4_LPHDR_EN:1;
      uint64_t LL4_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL4_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL4_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL4_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL4_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll4dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL4_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL5_VALID:1;
      uint64_t LL5_HE:1;
      uint64_t LL5_HS:1;
      uint64_t LL5_VCNUM:2;
      uint64_t LL5_FMT:2;
      uint64_t LL5_FMT_MAP:1;
      uint64_t LL5_FMT_IN:1;
      uint64_t LL5_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL5_LPHDR_EN:1;
      uint64_t LL5_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL5_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL5_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL5_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL5_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll5dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL5_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL6_VALID:1;
      uint64_t LL6_HE:1;
      uint64_t LL6_HS:1;
      uint64_t LL6_VCNUM:2;
      uint64_t LL6_FMT:2;
      uint64_t LL6_FMT_MAP:1;
      uint64_t LL6_FMT_IN:1;
      uint64_t LL6_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL6_LPHDR_EN:1;
      uint64_t LL6_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL6_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL6_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL6_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL6_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll6dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL6_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL7_VALID:1;
      uint64_t LL7_HE:1;
      uint64_t LL7_HS:1;
      uint64_t LL7_VCNUM:2;
      uint64_t LL7_FMT:2;
      uint64_t LL7_FMT_MAP:1;
      uint64_t LL7_FMT_IN:1;
      uint64_t LL7_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL7_LPHDR_EN:1;
      uint64_t LL7_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL7_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL7_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL7_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL7_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll7dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL7_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL8_VALID:1;
      uint64_t LL8_HE:1;
      uint64_t LL8_HS:1;
      uint64_t LL8_VCNUM:2;
      uint64_t LL8_FMT:2;
      uint64_t LL8_FMT_MAP:1;
      uint64_t LL8_FMT_IN:1;
      uint64_t LL8_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL8_LPHDR_EN:1;
      uint64_t LL8_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL8_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL8_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL8_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL8_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll8dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL8_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL9_VALID:1;
      uint64_t LL9_HE:1;
      uint64_t LL9_HS:1;
      uint64_t LL9_VCNUM:2;
      uint64_t LL9_FMT:2;
      uint64_t LL9_FMT_MAP:1;
      uint64_t LL9_FMT_IN:1;
      uint64_t LL9_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL9_LPHDR_EN:1;
      uint64_t LL9_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL9_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL9_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL9_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL9_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll9dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL9_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL10_VALID:1;
      uint64_t LL10_HE:1;
      uint64_t LL10_HS:1;
      uint64_t LL10_VCNUM:2;
      uint64_t LL10_FMT:2;
      uint64_t LL10_FMT_MAP:1;
      uint64_t LL10_FMT_IN:1;
      uint64_t LL10_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL10_LPHDR_EN:1;
      uint64_t LL10_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL10_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL10_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL10_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL10_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll10dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL10_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL11_VALID:1;
      uint64_t LL11_HE:1;
      uint64_t LL11_HS:1;
      uint64_t LL11_VCNUM:2;
      uint64_t LL11_FMT:2;
      uint64_t LL11_FMT_MAP:1;
      uint64_t LL11_FMT_IN:1;
      uint64_t LL11_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL11_LPHDR_EN:1;
      uint64_t LL11_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL11_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL11_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL11_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL11_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll11dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL11_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL12_VALID:1;
      uint64_t LL12_HE:1;
      uint64_t LL12_HS:1;
      uint64_t LL12_VCNUM:2;
      uint64_t LL12_FMT:2;
      uint64_t LL12_FMT_MAP:1;
      uint64_t LL12_FMT_IN:1;
      uint64_t LL12_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL12_LPHDR_EN:1;
      uint64_t LL12_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL12_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL12_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL12_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL12_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll12dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL12_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL13_VALID:1;
      uint64_t LL13_HE:1;
      uint64_t LL13_HS:1;
      uint64_t LL13_VCNUM:2;
      uint64_t LL13_FMT:2;
      uint64_t LL13_FMT_MAP:1;
      uint64_t LL13_FMT_IN:1;
      uint64_t LL13_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL13_LPHDR_EN:1;
      uint64_t LL13_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL13_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL13_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL13_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL13_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll13dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL13_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL14_VALID:1;
      uint64_t LL14_HE:1;
      uint64_t LL14_HS:1;
      uint64_t LL14_VCNUM:2;
      uint64_t LL14_FMT:2;
      uint64_t LL14_FMT_MAP:1;
      uint64_t LL14_FMT_IN:1;
      uint64_t LL14_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL14_LPHDR_EN:1;
      uint64_t LL14_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL14_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL14_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL14_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL14_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll14dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL14_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL15_VALID:1;
      uint64_t LL15_HE:1;
      uint64_t LL15_HS:1;
      uint64_t LL15_VCNUM:2;
      uint64_t LL15_FMT:2;
      uint64_t LL15_FMT_MAP:1;
      uint64_t LL15_FMT_IN:1;
      uint64_t LL15_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL15_LPHDR_EN:1;
      uint64_t LL15_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL15_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL15_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL15_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL15_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll15dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL15_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL16_VALID:1;
      uint64_t LL16_HE:1;
      uint64_t LL16_HS:1;
      uint64_t LL16_VCNUM:2;
      uint64_t LL16_FMT:2;
      uint64_t LL16_FMT_MAP:1;
      uint64_t LL16_FMT_IN:1;
      uint64_t LL16_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL16_LPHDR_EN:1;
      uint64_t LL16_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL16_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL16_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL16_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL16_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll16dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL16_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL17_VALID:1;
      uint64_t LL17_HE:1;
      uint64_t LL17_HS:1;
      uint64_t LL17_VCNUM:2;
      uint64_t LL17_FMT:2;
      uint64_t LL17_FMT_MAP:1;
      uint64_t LL17_FMT_IN:1;
      uint64_t LL17_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL17_LPHDR_EN:1;
      uint64_t LL17_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL17_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL17_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL17_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL17_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll17dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL17_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL18_VALID:1;
      uint64_t LL18_HE:1;
      uint64_t LL18_HS:1;
      uint64_t LL18_VCNUM:2;
      uint64_t LL18_FMT:2;
      uint64_t LL18_FMT_MAP:1;
      uint64_t LL18_FMT_IN:1;
      uint64_t LL18_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL18_LPHDR_EN:1;
      uint64_t LL18_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL18_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL18_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL18_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL18_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll18dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL18_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL19_VALID:1;
      uint64_t LL19_HE:1;
      uint64_t LL19_HS:1;
      uint64_t LL19_VCNUM:2;
      uint64_t LL19_FMT:2;
      uint64_t LL19_FMT_MAP:1;
      uint64_t LL19_FMT_IN:1;
      uint64_t LL19_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL19_LPHDR_EN:1;
      uint64_t LL19_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL19_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL19_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL19_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL19_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll19dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL19_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL20_VALID:1;
      uint64_t LL20_HE:1;
      uint64_t LL20_HS:1;
      uint64_t LL20_VCNUM:2;
      uint64_t LL20_FMT:2;
      uint64_t LL20_FMT_MAP:1;
      uint64_t LL20_FMT_IN:1;
      uint64_t LL20_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL20_LPHDR_EN:1;
      uint64_t LL20_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL20_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL20_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL20_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL20_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll20dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL20_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL21_VALID:1;
      uint64_t LL21_HE:1;
      uint64_t LL21_HS:1;
      uint64_t LL21_VCNUM:2;
      uint64_t LL21_FMT:2;
      uint64_t LL21_FMT_MAP:1;
      uint64_t LL21_FMT_IN:1;
      uint64_t LL21_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL21_LPHDR_EN:1;
      uint64_t LL21_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL21_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL21_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL21_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL21_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll21dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL21_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL22_VALID:1;
      uint64_t LL22_HE:1;
      uint64_t LL22_HS:1;
      uint64_t LL22_VCNUM:2;
      uint64_t LL22_FMT:2;
      uint64_t LL22_FMT_MAP:1;
      uint64_t LL22_FMT_IN:1;
      uint64_t LL22_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL22_LPHDR_EN:1;
      uint64_t LL22_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL22_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL22_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL22_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL22_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll22dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL22_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL23_VALID:1;
      uint64_t LL23_HE:1;
      uint64_t LL23_HS:1;
      uint64_t LL23_VCNUM:2;
      uint64_t LL23_FMT:2;
      uint64_t LL23_FMT_MAP:1;
      uint64_t LL23_FMT_IN:1;
      uint64_t LL23_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL23_LPHDR_EN:1;
      uint64_t LL23_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL23_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL23_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL23_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL23_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll23dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL23_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL24_VALID:1;
      uint64_t LL24_HE:1;
      uint64_t LL24_HS:1;
      uint64_t LL24_VCNUM:2;
      uint64_t LL24_FMT:2;
      uint64_t LL24_FMT_MAP:1;
      uint64_t LL24_FMT_IN:1;
      uint64_t LL24_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL24_LPHDR_EN:1;
      uint64_t LL24_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL24_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL24_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL24_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL24_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll24dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL24_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL25_VALID:1;
      uint64_t LL25_HE:1;
      uint64_t LL25_HS:1;
      uint64_t LL25_VCNUM:2;
      uint64_t LL25_FMT:2;
      uint64_t LL25_FMT_MAP:1;
      uint64_t LL25_FMT_IN:1;
      uint64_t LL25_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL25_LPHDR_EN:1;
      uint64_t LL25_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL25_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL25_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL25_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL25_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll25dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL25_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL26_VALID:1;
      uint64_t LL26_HE:1;
      uint64_t LL26_HS:1;
      uint64_t LL26_VCNUM:2;
      uint64_t LL26_FMT:2;
      uint64_t LL26_FMT_MAP:1;
      uint64_t LL26_FMT_IN:1;
      uint64_t LL26_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL26_LPHDR_EN:1;
      uint64_t LL26_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL26_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL26_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL26_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL26_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll26dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL26_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL27_VALID:1;
      uint64_t LL27_HE:1;
      uint64_t LL27_HS:1;
      uint64_t LL27_VCNUM:2;
      uint64_t LL27_FMT:2;
      uint64_t LL27_FMT_MAP:1;
      uint64_t LL27_FMT_IN:1;
      uint64_t LL27_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL27_LPHDR_EN:1;
      uint64_t LL27_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL27_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL27_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL27_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL27_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll27dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL27_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL28_VALID:1;
      uint64_t LL28_HE:1;
      uint64_t LL28_HS:1;
      uint64_t LL28_VCNUM:2;
      uint64_t LL28_FMT:2;
      uint64_t LL28_FMT_MAP:1;
      uint64_t LL28_FMT_IN:1;
      uint64_t LL28_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL28_LPHDR_EN:1;
      uint64_t LL28_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL28_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL28_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL28_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL28_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll28dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL28_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL29_VALID:1;
      uint64_t LL29_HE:1;
      uint64_t LL29_HS:1;
      uint64_t LL29_VCNUM:2;
      uint64_t LL29_FMT:2;
      uint64_t LL29_FMT_MAP:1;
      uint64_t LL29_FMT_IN:1;
      uint64_t LL29_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL29_LPHDR_EN:1;
      uint64_t LL29_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL29_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL29_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL29_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL29_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll29dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL29_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL30_VALID:1;
      uint64_t LL30_HE:1;
      uint64_t LL30_HS:1;
      uint64_t LL30_VCNUM:2;
      uint64_t LL30_FMT:2;
      uint64_t LL30_FMT_MAP:1;
      uint64_t LL30_FMT_IN:1;
      uint64_t LL30_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL30_LPHDR_EN:1;
      uint64_t LL30_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL30_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL30_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL30_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL30_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll30dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL30_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL31_VALID:1;
      uint64_t LL31_HE:1;
      uint64_t LL31_HS:1;
      uint64_t LL31_VCNUM:2;
      uint64_t LL31_FMT:2;
      uint64_t LL31_FMT_MAP:1;
      uint64_t LL31_FMT_IN:1;
      uint64_t LL31_SIZE:14;
      uint64_t reservedSpace0:4;
      uint64_t LL31_LPHDR_EN:1;
      uint64_t LL31_CRC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL31_LPHDR_VAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL31_LPHDR_VAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LL31_RD_THRESHOLD:7;
      uint64_t reservedSpace0:1;
      uint64_t LL31_WR_THRESHOLD:7;
      uint64_t reservedSpace1:1;
      uint64_t ll31dman:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_DATA_LL31_THRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_0_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE0_FMT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_0_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE1_FMT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_0_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE2_FMT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_0_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE3_FMT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE0_FMT_1_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE0_FMT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE1_FMT_1_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE1_FMT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE2_FMT_1_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE2_FMT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_A:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_B:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_C:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_D:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_E:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_F:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_G:4;
      uint64_t CFG_LVDS_MAPPING_LANE3_FMT_1_H:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_MAPPING_LANE3_FMT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_LANE0_EN:1;
      uint64_t CFG_LVDS_LANE1_EN:1;
      uint64_t CFG_LVDS_LANE2_EN:1;
      uint64_t CFG_LVDS_LANE3_EN:1;
      uint64_t reservedSpace0:6;
      uint64_t CFG_BIT_CLK_MODE:1;
      uint64_t ccsmen:1;
      uint64_t reservedSpace1:10;
      uint64_t cpossel:1;
      uint64_t cmsbf:1;
      uint64_t cfdly:4;
      uint64_t cbcrcen:1;
      uint64_t reservedSpace2:1;
      uint64_t cpz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_GEN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t c3c3l:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_GEN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_LVDS_GEN_2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_LVDS_GEN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_MASK_REG0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_MASK_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_MASK_REG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_MASK_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFG_MASK_REG2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFG_MASK_REG2;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t S_CHIRP_DONE:1;
      uint64_t S_FRAME_DONE:1;
      uint64_t STAT_CBUFF_REG0_OTHERS:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_CBUFF_REG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t S_CHIRP_ERR:1;
      uint64_t S_FRAME_ERR:1;
      uint64_t reservedSpace1:3;
      uint64_t S1_UNUSED3:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_CBUFF_REG1;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t C_CHIRP_DONE:1;
      uint64_t C_FRAME_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_CBUFF_REG0;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t seccadd:6;
      uint64_t reservedSpace0:2;
      uint64_t seccsbe:1;
      uint64_t seccdbe:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_CBUFF_ECC_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t meccsbe:1;
      uint64_t meccdbe:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_CBUFF_ECC_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ceccadd:1;
      uint64_t reservedSpace0:7;
      uint64_t ceccsbe:1;
      uint64_t ceccdbe:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_CBUFF_ECC_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAF_CRC:8;
      uint64_t SAF_CHIRP_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STAT_SAFETY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASK_SAFETY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK_SAFETY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_SAFETY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR_SAFETY;

};

#define DSS_CBUFF (*(volatile struct DSS_CBUFF_tag *) 0x50070000)

struct DSS_HW_ACC_PARAM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM3_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM4_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM5_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM6_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM7_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM8_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM9_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM10_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM11_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM12_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM13_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM14_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM15_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGMODE:3;
      uint64_t DMA2ACC_CHANNEL_TRIGSRC:4;
      uint64_t CR4INTREN:1;
      uint64_t DMATRIGEN:1;
      uint64_t ACC2DMA_CHANNEL_TRIGDST:4;
      uint64_t BPM_EN:1;
      uint64_t FFT_EN:1;
      uint64_t WINDOW_EN:1;
      uint64_t LOG2EN:1;
      uint64_t ABS_EN:1;
      uint64_t CMULT_MODE:3;
      uint64_t ACCEL_MODE:2;
      uint64_t FFT_OUTPUT_MODE:2;
      uint64_t NU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCADDR:16;
      uint64_t DSTADDR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCACNT:12;
      uint64_t SRCREAL:1;
      uint64_t SRC16b32b:1;
      uint64_t SRCSIGNED:1;
      uint64_t SRCCONJ:1;
      uint64_t DSTACNT:12;
      uint64_t DSTREAL:1;
      uint64_t DST16b32b:1;
      uint64_t DSTSIGNED:1;
      uint64_t DSTCONJ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCAINDX:16;
      uint64_t DSTAINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SRCBINDX:16;
      uint64_t DSTBINDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG_BCNT:12;
      uint64_t REG_SRCSCAL:4;
      uint64_t REG_DSTSCAL:4;
      uint64_t REG_DST_SKIP_INIT:10;
      uint64_t NU:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSTWIDTH:2;
      uint64_t FFTSIZE:4;
      uint64_t WINSYMM:1;
      uint64_t INTERF_THRESH_EN:1;
      uint64_t BPMPHASE:4;
      uint64_t WINDOW_START:10;
      uint64_t BFLY_SCALING:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIRCIRSHIFT:12;
      uint64_t TWIDINCR:14;
      uint64_t WINDOW_INTERP_FRACTION:2;
      uint64_t CIRCSHIFTWRAP:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAM16_7;

};

#define DSS_HW_ACC_PARAM (*(volatile struct DSS_HW_ACC_PARAM_tag *) 0x50080000)

struct DSS_HW_ACC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACCENABLE:3;
      uint64_t ACCCLKEN:1;
      uint64_t ACCRESET:3;
      uint64_t NU2:1;
      uint64_t NLOOPS:12;
      uint64_t PARAMSTART:4;
      uint64_t PARAMSTOP:4;
      uint64_t FFT1DEN:1;
      uint64_t NU:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA2ACCTRIG:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR42ACCTRIG:1;
      uint64_t NU:15;
      uint64_t CR42DMATRIG:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAMDONESTAT:16;
      uint64_t PARAMDONECLR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BPMPATTERNMSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BPMPATTERNLSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BPMRATE:10;
      uint64_t NU1:6;
      uint64_t DITHERTWIDEN:1;
      uint64_t NU2:7;
      uint64_t STG1LUTSELWR:1;
      uint64_t NU3:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTERFTHRESH:24;
      uint64_t FFTSUMDIV:5;
      uint64_t NU:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICMULTSCALE:21;
      uint64_t NU:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QCMULTSCALE:21;
      uint64_t NU:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSRSEED:29;
      uint64_t NU:2;
      uint64_t LFSRLOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_TRIGGER_IN_STAT:19;
      uint64_t NU1:5;
      uint64_t ACC_TRIGGER_IN_CLR:1;
      uint64_t reservedSpace0:5;
      uint64_t NU2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFAR_THRESH:18;
      uint64_t NU:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTRAMISO:3;
      uint64_t NU1:1;
      uint64_t OUTRAMAGOODIN:3;
      uint64_t NU2:1;
      uint64_t OUTRAMAONIN:3;
      uint64_t NU3:21;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWACCREG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED1:24;
      uint64_t TI_RESERVED2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX1VALUE:24;
      uint64_t NU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX1VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX1INDEX:12;
      uint64_t NU:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX1INDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM1LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM1LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM1MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM1MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM1LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM1LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM1MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM1MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX2VALUE:24;
      uint64_t NU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX2VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX2INDEX:12;
      uint64_t NU:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX2INDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM2LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM2LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM2MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM2MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM2LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM2LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM2MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM2MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX3VALUE:24;
      uint64_t NU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX3VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX3INDEX:12;
      uint64_t NU:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX3INDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM3LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM3LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM3MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM3MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM3LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM3LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM3MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM3MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX4VALUE:24;
      uint64_t NU:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX4VALUE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX4INDEX:12;
      uint64_t NU:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAX4INDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM4LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM4LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ISUM4MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISUM4MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM4LSB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM4LSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSUM4MSB:4;
      uint64_t NU:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) QSUM4MSB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED3:24;
      uint64_t TI_RESERVED4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED5:24;
      uint64_t TI_RESERVED6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED7:24;
      uint64_t TI_RESERVED8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAMADDR:4;
      uint64_t LOOPCNT:12;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH1DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH1DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH2DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH2DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH3DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH3DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH4DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH4DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH5DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH5DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH6DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH6DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH7DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH7DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH8DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH8DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH9DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH9DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH10DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH10DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH11DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH11DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH12DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH12DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH13DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH13DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH14DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH14DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH15DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH15DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SIGDMACH16DONE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIGDMACH16DONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRCODECLR:4;
      uint64_t NU1:4;
      uint64_t ERRCODEMASK:4;
      uint64_t NU2:4;
      uint64_t STATERRCODE:4;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMACCESSERR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFTCLCIPSTAT:10;
      uint64_t NU1:6;
      uint64_t CLRFFTCLIPSTAT:1;
      uint64_t NU2:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFTCLIP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFTPEAKCNT:12;
      uint64_t NU:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FFTPEAKCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED10:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED11:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG7;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED12:5;
      uint64_t TI_RESERVED13:3;
      uint64_t TI_RESERVED14:5;
      uint64_t TI_RESERVED15:3;
      uint64_t TI_RESERVED16:5;
      uint64_t TI_RESERVED17:3;
      uint64_t TI_RESERVED18:5;
      uint64_t TI_RESERVED19:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED20:5;
      uint64_t TI_RESERVED21:3;
      uint64_t TI_RESERVED22:5;
      uint64_t TI_RESERVED23:3;
      uint64_t TI_RESERVED24:5;
      uint64_t TI_RESERVED25:3;
      uint64_t TI_RESERVED26:5;
      uint64_t TI_RESERVED27:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED28:5;
      uint64_t TI_RESERVED29:3;
      uint64_t TI_RESERVED30:5;
      uint64_t TI_RESERVED31:3;
      uint64_t TI_RESERVED32:5;
      uint64_t TI_RESERVED33:3;
      uint64_t TI_RESERVED34:5;
      uint64_t TI_RESERVED35:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED36:5;
      uint64_t TI_RESERVED37:3;
      uint64_t TI_RESERVED38:5;
      uint64_t TI_RESERVED39:3;
      uint64_t TI_RESERVED40:5;
      uint64_t TI_RESERVED41:3;
      uint64_t TI_RESERVED42:5;
      uint64_t TI_RESERVED43:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG11;

  uint8_t res1[208];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN_RAM_ECC_EN:1;
      uint64_t PARAM_ECC_EN:1;
      uint64_t TI_RESERVED44:1;
      uint64_t TI_RESERVED45:1;
      uint64_t TI_RESERVED46:1;
      uint64_t TI_RESERVED47:1;
      uint64_t TI_RESERVED48:1;
      uint64_t TI_RESERVED49:1;
      uint64_t TI_RESERVED50:1;
      uint64_t TI_RESERVED51:1;
      uint64_t TI_RESERVED52:1;
      uint64_t TI_RESERVED53:1;
      uint64_t IPING_ECC_EN:1;
      uint64_t IPONG_ECC_EN:1;
      uint64_t OPING_ECC_EN:1;
      uint64_t OPONG_ECC_EN:1;
      uint64_t FSM_LOCKSTEP_EN:1;
      uint64_t FSM_LOCKSTEP_SELFTEST_EN:1;
      uint64_t NU2:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN_RAM_ECC_ERRCLR:1;
      uint64_t PARAM_ECC_ERRCLR:1;
      uint64_t TI_RESERVED54:1;
      uint64_t TI_RESERVED55:1;
      uint64_t TI_RESERVED56:1;
      uint64_t TI_RESERVED57:1;
      uint64_t TI_RESERVED58:1;
      uint64_t TI_RESERVED59:1;
      uint64_t TI_RESERVED60:1;
      uint64_t TI_RESERVED61:1;
      uint64_t TI_RESERVED62:1;
      uint64_t TI_RESERVED63:1;
      uint64_t IPING_ECC_ERRCLR:1;
      uint64_t IPONG_ECC_ERRCLR:1;
      uint64_t OPING_ECC_ERRCLR:1;
      uint64_t OPONG_ECC_ERRCLR:1;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN_RAM_INIT:1;
      uint64_t PARAM_INIT:1;
      uint64_t TI_RESERVED64:1;
      uint64_t TI_RESERVED65:1;
      uint64_t TI_RESERVED66:1;
      uint64_t TI_RESERVED67:1;
      uint64_t TI_RESERVED68:1;
      uint64_t TI_RESERVED69:1;
      uint64_t TI_RESERVED70:1;
      uint64_t TI_RESERVED71:1;
      uint64_t TI_RESERVED72:1;
      uint64_t TI_RESERVED73:1;
      uint64_t IPING_INIT:1;
      uint64_t IPONG_INIT:1;
      uint64_t OPING_INIT:1;
      uint64_t OPONG_INIT:1;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMINIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN_RAM_INITDONE:1;
      uint64_t PARAM_INITDONE:1;
      uint64_t TI_RESERVED74:1;
      uint64_t TI_RESERVED75:1;
      uint64_t TI_RESERVED76:1;
      uint64_t TI_RESERVED77:1;
      uint64_t TI_RESERVED78:1;
      uint64_t TI_RESERVED79:1;
      uint64_t TI_RESERVED80:1;
      uint64_t TI_RESERVED81:1;
      uint64_t TI_RESERVED82:1;
      uint64_t TI_RESERVED83:1;
      uint64_t IPING_INITDONE:1;
      uint64_t IPONG_INITDONE:1;
      uint64_t OPING_INITDONE:1;
      uint64_t OPONG_INITDONE:1;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMINITDONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU1:1;
      uint64_t NU2:1;
      uint64_t TI_RESERVED84:1;
      uint64_t TI_RESERVED85:1;
      uint64_t TI_RESERVED86:1;
      uint64_t TI_RESERVED87:1;
      uint64_t TI_RESERVED88:1;
      uint64_t TI_RESERVED89:1;
      uint64_t TI_RESERVED90:1;
      uint64_t TI_RESERVED91:1;
      uint64_t TI_RESERVED92:1;
      uint64_t TI_RESERVED93:1;
      uint64_t IPING_ECC_SBE:1;
      uint64_t IPONG_ECC_SBE:1;
      uint64_t OPING_ECC_SBE:1;
      uint64_t OPONG_ECC_SBE:1;
      uint64_t NU3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_SBE_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU1:1;
      uint64_t NU2:1;
      uint64_t TI_RESERVED94:1;
      uint64_t TI_RESERVED95:1;
      uint64_t TI_RESERVED96:1;
      uint64_t TI_RESERVED97:1;
      uint64_t TI_RESERVED98:1;
      uint64_t TI_RESERVED99:1;
      uint64_t TI_RESERVED100:1;
      uint64_t TI_RESERVED101:1;
      uint64_t TI_RESERVED102:1;
      uint64_t TI_RESERVED103:1;
      uint64_t IPING_ECC_DBE:1;
      uint64_t IPONG_ECC_DBE:1;
      uint64_t OPING_ECC_DBE:1;
      uint64_t OPONG_ECC_DBE:1;
      uint64_t NU3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECC_DBE_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN_RAM_ERR_ADDR:16;
      uint64_t WIN_RAM_ERR_BIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINRAMERRLOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARAM_ERR_ADDR:16;
      uint64_t PARAM_ERR_BIT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARAMRAMERRLOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED104:16;
      uint64_t TI_RESERVED105:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED106:16;
      uint64_t TI_RESERVED107:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED108:16;
      uint64_t TI_RESERVED109:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED110:16;
      uint64_t TI_RESERVED111:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED112:16;
      uint64_t TI_RESERVED113:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED114:16;
      uint64_t TI_RESERVED115:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED116:16;
      uint64_t TI_RESERVED117:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED118:16;
      uint64_t TI_RESERVED119:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED120:16;
      uint64_t TI_RESERVED121:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED122:16;
      uint64_t TI_RESERVED123:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPING_ERR_ADDR:16;
      uint64_t IPING_ERR_BIT_REGION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPINGERRLOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPING_ERR_BIT_LOC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPINGSBELOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPONG_ERR_ADDR:16;
      uint64_t IPONG_ERR_BIT_REGION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPONGERRLOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPONG_ERR_BIT_LOC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPONGSBELOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPING_ERR_ADDR:16;
      uint64_t OPING_ERR_BIT_REGION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPINGERRLOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPING_ERR_BIT_LOC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPINGSBELOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPONG_ERR_ADDR:16;
      uint64_t OPONG_ERR_BIT_REGION:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPONGERRLOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPONG_ERR_BIT_LOC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPONGSBELOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED124:9;
      uint64_t TI_RESERVED125:3;
      uint64_t TI_RESERVED126:4;
      uint64_t TI_RESERVED127:1;
      uint64_t TI_RESERVED128:7;
      uint64_t TI_RESERVED129:1;
      uint64_t TI_RESERVED130:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED131:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TI_RESERVED132:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TI_RESERVED_REG24;

};

#define DSS_HW_ACC (*(volatile struct DSS_HW_ACC_tag *) 0x50080800)

struct TOPRCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t BSSCPUHALT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t GEMPORZ:1;
      uint64_t GEMGRSTN:1;
      uint64_t GEMLRSTN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSSCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTCLK1DIV:8;
      uint64_t EXTCLK2DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTCLKDIV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTCLK1SRCSEL:4;
      uint64_t reservedSpace0:4;
      uint64_t EXTCLK2SRCSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTCLKSRCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTCLK1GATE:8;
      uint64_t EXTCLK2GATE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTCLKCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFTSYSRST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTSYSRST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDRSTEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDRSTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSRSTCAUSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSRSTCAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSRSTCAUSECLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSRSTCAUSECLR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MISCCAPT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCCAPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDCCTL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCDCRST:1;
      uint64_t DCDCLKEN:1;
      uint64_t DCDCCTL1:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCDCCTL1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USERMODEEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERMODEEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDSPADCTL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVDSPADCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LVDSPADCTL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LVDSPADCTL1;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFTREG0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFTREG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFTREG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFTREG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFTREG2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFTREG2;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFTREG5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFTREG5;

  uint8_t res4[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSPRSTVAL:22;
      uint64_t reservedSpace0:2;
      uint64_t EMCCFGCLK:2;
      uint64_t EMCDMACLK:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSSIOCTL;

  uint8_t res5[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSS_SIGNATURE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS_SIGNATURE;

  uint8_t res6[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Device_Specific_REG00:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REG00;

  uint8_t res7[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GEMBOOTSTCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEMBOOTSTCEN;

  uint8_t res8[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USERMODEEN2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERMODEEN2;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSTICK:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTICK;

  uint8_t res10[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t CUSTCEKFIREWALLEN:3;
      uint64_t reservedSpace1:1;
      uint64_t CRYPTOFIREWALLEN:3;
      uint64_t reservedSpace2:1;
      uint64_t TRACEFIREWALLEN:3;
      uint64_t reservedSpace3:1;
      uint64_t LOGGERFIREWALLEN:3;
      uint64_t reservedSpace4:1;
      uint64_t SECURERAMFIREWALLEN:3;
      uint64_t reservedSpace5:5;
      uint64_t JTAGFIREWALLEN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURECFGREG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMMFIREWALLEN:3;
      uint64_t reservedSpace0:5;
      uint64_t CUSTKEYERASE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURECFGREG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOGGERSTICKYBIT:3;
      uint64_t reservedSpace0:5;
      uint64_t CUSTCEKSTICKYBIT:3;
      uint64_t reservedSpace1:1;
      uint64_t CRYPTOSTICKYBIT:3;
      uint64_t reservedSpace2:1;
      uint64_t TRACESTICKYBIT:3;
      uint64_t reservedSpace3:1;
      uint64_t SECURERAMSTICKYBIT:3;
      uint64_t reservedSpace4:5;
      uint64_t JTAGSTICKYBIT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURECFGREG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMMSTICKYBIT:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURECFGREG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECURERAMRDDONE:1;
      uint64_t reservedSpace0:7;
      uint64_t SECURERAMKEYRD:1;
      uint64_t reservedSpace1:7;
      uint64_t SECURERAMKEYIDX:8;
      uint64_t SECURERAMKEY255:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURERAMREG;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPAREMULTIBIT0:1;
      uint64_t SPAREMULTIBIT1:1;
      uint64_t SPAREMULTIBIT2:1;
      uint64_t SPAREMULTIBIT3:1;
      uint64_t SPAREMULTIBIT4:1;
      uint64_t SPAREMULTIBIT5:1;
      uint64_t SPAREMULTIBIT6:1;
      uint64_t SPAREMULTIBIT7:1;
      uint64_t SPAREMULTIBIT8:1;
      uint64_t SPAREMULTIBIT9:1;
      uint64_t SPAREMULTIBIT10:1;
      uint64_t SPAREMULTIBIT11:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPAREMULTIBIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE5:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE6:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE7:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE8:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPARE9:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPARE9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID31TO0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UID31TO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID63TO32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UID63TO32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID95TO64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UID95TO64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UID119TO96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UID119TO96;

  uint8_t res12[152];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMINITSTARTBANK0:1;
      uint64_t MEMINITSTARTBANK1:1;
      uint64_t MEMINITSTARTBANK2:1;
      uint64_t MEMINITSTARTBANK3:1;
      uint64_t MEMINITSTARTBANK4:1;
      uint64_t MEMINITSTARTBANK5:1;
      uint64_t MEMINITSTARTBANK6:1;
      uint64_t MEMINITSTARTBANK7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMINITSTARTSHMEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMINITDONEBANK0:1;
      uint64_t MEMINITDONEBANK1:1;
      uint64_t MEMINITDONEBANK2:1;
      uint64_t MEMINITDONEBANK3:1;
      uint64_t MEMINITDONEBANK4:1;
      uint64_t MEMINITDONEBANK5:1;
      uint64_t MEMINITDONEBANK6:1;
      uint64_t MEMINITDONEBANK7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMINITDONESHMEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSSMEMTAB0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DSSMEMTAB0;

  uint8_t res13[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMAMEMTAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCMAMEMTAB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TCMBMEMTAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCMBMEMTAB;

  uint8_t res14[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK0:8;
      uint64_t BANK1:8;
      uint64_t BANK2:8;
      uint64_t BANK3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHMEMBANKSEL3TO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK4:8;
      uint64_t BANK5:8;
      uint64_t BANK6:8;
      uint64_t BANK7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHMEMBANKSEL7TO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBIST300MCLKDIV:4;
      uint64_t PBIST300MCLKSRCSEL:4;
      uint64_t PBIST300MCLKGATE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBISTCLKCTL;

};

#define TOPRCM (*(volatile struct TOPRCM_tag *) 0xffffe108)

struct RCM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR4SYSRST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTRST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t VIMRST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTRST2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDTRST:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTRST3;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t VCLKCLKDIV:8;
      uint64_t DCANCLKDIV:8;
      uint64_t FDCANCLKDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIVCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCANCLKSRCSEL:4;
      uint64_t reservedSpace0:4;
      uint64_t FDCANCLKSRCSEL:4;
      uint64_t reservedSpace1:4;
      uint64_t QSPICLKSRCSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSRCSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t CR4MEMSWAP:8;
      uint64_t MEMSWAPWAIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR4CTL;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t QSPICLKGATE:1;
      uint64_t DCANCLKGATE:1;
      uint64_t FDCANCLKGATE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKGATE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCLKCLKSRCSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSRCSEL1;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t VCLKCURRCLKDIV:8;
      uint64_t DCANCURRCLKDIV:8;
      uint64_t FDCANCURRCLKDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURRCLKDIV0;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR4TCMAMEM:1;
      uint64_t CR4TCMBMEM:1;
      uint64_t DMAMEM:1;
      uint64_t VIMMEM:1;
      uint64_t SPIAMEM:1;
      uint64_t SPIBMEM:1;
      uint64_t DCANMEM:1;
      uint64_t MSSMBOX4BSSMEM:1;
      uint64_t BSSMBOX4MSSMEM:1;
      uint64_t DMA2MEM:1;
      uint64_t reservedSpace0:4;
      uint64_t GEMMBOX4BSSMEM:1;
      uint64_t GEMMBOX4MSSMEM:1;
      uint64_t MSSMBOX4GEMMEM:1;
      uint64_t BSSMBOX4GEMMEM:1;
      uint64_t reservedSpace1:6;
      uint64_t MEMINITKEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMINITSTART;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPICURRCLKDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CURRCLKDIV1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CR4TCMAMEM:1;
      uint64_t CR4TCMBMEM:1;
      uint64_t DMAMEM:1;
      uint64_t VIMMEM:1;
      uint64_t SPIAMEM:1;
      uint64_t SPIBMEM:1;
      uint64_t DCANMEM:1;
      uint64_t MSSMBOX4BSSMEM:1;
      uint64_t BSSMBOX4MSSMEM:1;
      uint64_t DMA2MEM:1;
      uint64_t reservedSpace0:4;
      uint64_t GEMMBOX4BSSMEM:1;
      uint64_t GEMMBOX4MSSMEM:1;
      uint64_t MSSMBOX4GEMMEM:1;
      uint64_t BSSMBOX4GEMMEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MEMINITDONE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCENMSSGEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCENMSSGEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCCAPTMSSGEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCCAPTMSSGEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCENBSSGEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCENBSSGEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCCAPTBSSGEM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCCAPTBSSGEM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USERMODEEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERMODEEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NSYSPERUSERMODEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NSYSPERUSERMODEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECURERAMINIT:1;
      uint64_t reservedSpace0:15;
      uint64_t SECURERAMINITDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURERAMMMI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECURERAMECCEN:8;
      uint64_t SECURERAMECCCLR:3;
      uint64_t reservedSpace0:5;
      uint64_t SECURERAMADDR:8;
      uint64_t SECURERAMBIT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SECURERAMECC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESMGATE0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMGATE0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESMGATE1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMGATE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESMGATE2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMGATE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESMGATE3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMGATE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESMGATE4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMGATE4;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEY;

  uint8_t res7[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIRQ0DAT:8;
      uint64_t SWIRQ0:8;
      uint64_t SWIRQ1DAT:8;
      uint64_t SWIRQ1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIRQA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIRQ2DAT:8;
      uint64_t SWIRQ2:8;
      uint64_t SWIRQ3DAT:8;
      uint64_t SWIRQ3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIRQB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TCMAEZDIS:3;
      uint64_t TCMB0EZDIS:3;
      uint64_t TCMB1EZDIS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MISCCTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRATCADDRCLR:3;
      uint64_t ATCFORCEERR:3;
      uint64_t reservedSpace0:2;
      uint64_t ERRATCADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ATCMERRCAPTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRB0TCADDRCLR:3;
      uint64_t B0TCFORCEERR:3;
      uint64_t reservedSpace0:2;
      uint64_t ERRB0TCADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B0TCMERRCAPTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRB1TCADDRCLR:3;
      uint64_t B1TCFORCEERR:3;
      uint64_t reservedSpace0:2;
      uint64_t ERRB1TCADDR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) B1TCMERRCAPTCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t RSTTOASSRTDLY:8;
      uint64_t reservedSpace1:8;
      uint64_t RST_WFICHECKEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTCORERST;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTCAUSE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTCAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSTCAUSECLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RSTCAUSECLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPIATRIG0:1;
      uint64_t reservedSpace0:7;
      uint64_t SPIATRIG1:1;
      uint64_t reservedSpace1:7;
      uint64_t SPIBTRIG:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPITRIGSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCLKINUSE:4;
      uint64_t FDCANCLKINUSE:4;
      uint64_t DCANCLKINUSE:4;
      uint64_t QSPICLKINUSE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKINUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCENMSSBSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCENMSSBSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCCAPTMSSBSS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCCAPTMSSBSS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QSPICLKDIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKDIVCTL2;

  uint8_t res9[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIRQ4DAT:8;
      uint64_t SWIRQ4:8;
      uint64_t SWIRQ5DAT:8;
      uint64_t SWIRQ5:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIRQC;

};

#define RCM (*(volatile struct RCM_tag *) 0xffffff04)

struct GPCFG_REG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPCFG0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPCFG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPCFG2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPCFG3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPCFG4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCFG4;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSS2BSSSWIRQ1:1;
      uint64_t MSS2BSSSWIRQ2:1;
      uint64_t reservedSpace0:6;
      uint64_t DSS2BSSSWIRQ1:1;
      uint64_t DSS2BSSSWIRQ2:1;
      uint64_t reservedSpace1:6;
      uint64_t BSS2DSSSWIRQ1:1;
      uint64_t BSS2DSSSWIRQ2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPCFG11;

  uint8_t res1[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCA_CLOCK0_SEL:3;
      uint64_t CCCA_CLOCK1_SEL:3;
      uint64_t CCCA_DISABLE_CLOCKS:1;
      uint64_t CCCA_ENABLE_MODULE:1;
      uint64_t CCCA_SINGLE_SHOT_MODE:1;
      uint64_t reservedSpace0:7;
      uint64_t CCCA_MARGIN_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCACFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCACFG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCACFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCACFG2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCACFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCACFG3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCACFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCB_CLOCK0_SEL:3;
      uint64_t CCCB_CLOCK1_SEL:3;
      uint64_t CCCB_DISABLE_CLOCKS:1;
      uint64_t CCCB_ENABLE_MODULE:1;
      uint64_t CCCB_SINGLE_SHOT_MODE:1;
      uint64_t reservedSpace0:7;
      uint64_t CCCB_MARGIN_COUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCBCFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCBCFG1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCBCFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCBCFG2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCBCFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCBCFG3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCBCFG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCACNTVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCACNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCBCNTVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCBCNTVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCCABERRSTAT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCABERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USERMODEEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERMODEEN;

  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPWMCFG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EPWMCFG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMMSWINT0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMSWINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMMSWINT1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMSWINT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMMSWINTSEL0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMSWINTSEL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMMSWINTSEL1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMSWINTSEL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLECCBERRNMI:1;
      uint64_t reservedSpace0:15;
      uint64_t ENABLECCBERRRSTN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCCBWDEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIO0EDGESEL:1;
      uint64_t GPIO1EDGESEL:1;
      uint64_t GPIO2EDGESEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOINTREDGESEL;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWMDMATRIGEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWMDMATRIGEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAGTXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGTXDATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAGTXCONTROL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGTXCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAGRXDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGRXDATA;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAGTXDATARD:1;
      uint64_t reservedSpace0:7;
      uint64_t JTAGRXDATAWR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGTXRXACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JTAGRXCONTROL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JTAGRXCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSS2GEMSWIRQ1:1;
      uint64_t MSS2GEMSWIRQ2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSS2GEMSWIRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSETBFLUSHIN:1;
      uint64_t reservedSpace0:7;
      uint64_t CSETBFLUSHINACK:1;
      uint64_t CSETBACQ_COMPLETE:1;
      uint64_t CSETBFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSETBFLUSH;

};

#define GPCFG_REG (*(volatile struct GPCFG_REG_tag *) 0xfffff800)

struct IOMUX_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAD_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAP_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAQ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAR_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAS_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAT_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAU_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAV_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAW_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAX_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAY_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADAZ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBA_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBB_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBC_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBD_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBE_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBF_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBG_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBH_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBI_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBJ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBK_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBL_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBM_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBN_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBO_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBP_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBQ_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBR_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBS_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBT_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBU_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBV_cfg_reg;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t func_sel:4;
      uint64_t ie_override_ctrl:1;
      uint64_t ie_override:1;
      uint64_t oe_override_ctrl:1;
      uint64_t oe_override:1;
      uint64_t pi:1;
      uint64_t pupdsel:1;
      uint64_t sc1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADBW_cfg_reg;

  uint8_t res0[300];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USERMODEEN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USERMODEEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PADGLBLCFGREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PADGLBLCFGREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOCFGKICK0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFGKICK0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOCFGKICK1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCFGKICK1;

};

#define IOMUX (*(volatile struct IOMUX_tag *) 0xffffea00)

struct DMM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONOFF:4;
      uint64_t reservedSpace0:4;
      uint64_t TM_DMM:1;
      uint64_t reservedSpace1:7;
      uint64_t RESET:1;
      uint64_t COS:1;
      uint64_t CONTCLK:1;
      uint64_t reservedSpace2:5;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t reservedSpace0:4;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t reservedSpace0:4;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERRENA:1;
      uint64_t DEST1_ERRENA:1;
      uint64_t DEST2_ERRENA:1;
      uint64_t DEST3_ERRENA:1;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERRENA:1;
      uint64_t DEST1_ERRENA:1;
      uint64_t DEST2_ERRENA:1;
      uint64_t DEST3_ERRENA:1;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTFLAG;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDMDEST;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POINTER:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDMPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPT:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST0REG1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST0REG2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST1REG1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST1REG2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST2REG1;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST2REG2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST3REG1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST3REG2;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCFUNC:1;
      uint64_t CLKFUNC:1;
      uint64_t DATAxFUNC:16;
      uint64_t ENAFUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCDIR:1;
      uint64_t CLKDIR:1;
      uint64_t DATAxDIR:16;
      uint64_t ENADIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCIN:1;
      uint64_t CLKIN:1;
      uint64_t DATAxIN:16;
      uint64_t ENAIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOUT:1;
      uint64_t CLKOUT:1;
      uint64_t DATAxOUT:16;
      uint64_t ENAOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCSET:1;
      uint64_t CLKSET:1;
      uint64_t DATAxSET:16;
      uint64_t ENASET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCCLR:1;
      uint64_t CLKCLR:1;
      uint64_t DATAxCLR:16;
      uint64_t ENACLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPDR:1;
      uint64_t CLKPDR:1;
      uint64_t DATAxPDR:16;
      uint64_t ENAPDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPDIS:1;
      uint64_t CLKPDIS:1;
      uint64_t DATAxPDIS:16;
      uint64_t ENAPDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPSEL:1;
      uint64_t CLKPDSEL:1;
      uint64_t DATAxPSEL:16;
      uint64_t ENAPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC8;

};

#define DMM (*(volatile struct DMM_tag *) 0xfcfff700)

struct DMM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONOFF:4;
      uint64_t reservedSpace0:4;
      uint64_t TM_DMM:1;
      uint64_t reservedSpace1:7;
      uint64_t RESET:1;
      uint64_t COS:1;
      uint64_t CONTCLK:1;
      uint64_t reservedSpace2:5;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t reservedSpace0:4;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t reservedSpace0:4;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERRENA:1;
      uint64_t DEST1_ERRENA:1;
      uint64_t DEST2_ERRENA:1;
      uint64_t DEST3_ERRENA:1;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERRENA:1;
      uint64_t DEST1_ERRENA:1;
      uint64_t DEST2_ERRENA:1;
      uint64_t DEST3_ERRENA:1;
      uint64_t SRC_OVF:1;
      uint64_t BUFF_OVF:1;
      uint64_t BUSERROR:1;
      uint64_t DEST0REG1:1;
      uint64_t DEST0REG2:1;
      uint64_t DEST1REG1:1;
      uint64_t DEST1REG2:1;
      uint64_t DEST2REG1:1;
      uint64_t DEST2REG2:1;
      uint64_t DEST3REG1:1;
      uint64_t DEST3REG2:1;
      uint64_t EO_BUFF:1;
      uint64_t PROG_BUFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTFLAG;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDMDEST;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POINTER:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DDMPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPT:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST0REG1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST0REG2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST1REG1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST1REG2;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST2REG1;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST2REG2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST3REG1;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEST3REG2;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCFUNC:1;
      uint64_t CLKFUNC:1;
      uint64_t DATAxFUNC:16;
      uint64_t ENAFUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCDIR:1;
      uint64_t CLKDIR:1;
      uint64_t DATAxDIR:16;
      uint64_t ENADIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCIN:1;
      uint64_t CLKIN:1;
      uint64_t DATAxIN:16;
      uint64_t ENAIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOUT:1;
      uint64_t CLKOUT:1;
      uint64_t DATAxOUT:16;
      uint64_t ENAOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCSET:1;
      uint64_t CLKSET:1;
      uint64_t DATAxSET:16;
      uint64_t ENASET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCCLR:1;
      uint64_t CLKCLR:1;
      uint64_t DATAxCLR:16;
      uint64_t ENACLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPDR:1;
      uint64_t CLKPDR:1;
      uint64_t DATAxPDR:16;
      uint64_t ENAPDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPDIS:1;
      uint64_t CLKPDIS:1;
      uint64_t DATAxPDIS:16;
      uint64_t ENAPDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPSEL:1;
      uint64_t CLKPDSEL:1;
      uint64_t DATAxPSEL:16;
      uint64_t ENAPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC8;

};

#define DMM2 (*(volatile struct DMM2_tag *) 0xfcfff600)

struct ETPWM1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBCTL_CTRMODE:2;
      uint64_t TBCTL_PHSEN:1;
      uint64_t TBCTL_PRDLD:1;
      uint64_t TBCTL_SYNCOSEL:2;
      uint64_t TBCTL_SWFSYNC:1;
      uint64_t TBCTL_HSPCLKDIV:3;
      uint64_t TBCTL_CLKDIV:3;
      uint64_t TBCTL_PHSDIR:1;
      uint64_t TBCTL_FREE_SOFT:2;
      uint64_t TBSTS_CTRDIR:1;
      uint64_t TBSTS_SYNCI:1;
      uint64_t TBSTS_CTRMAX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTL_TBSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TBPHS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPHS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBCTR:16;
      uint64_t TBPRD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTR_TBPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LOADAMODE:2;
      uint64_t LOADBMODE:2;
      uint64_t SHDWAMODE:1;
      uint64_t reservedSpace1:1;
      uint64_t SHDWBMODE:1;
      uint64_t reservedSpace2:1;
      uint64_t SHDWAFULL:1;
      uint64_t SHDWBFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
      uint64_t AQCTLA_ZRO:2;
      uint64_t AQCTLA_PRD:2;
      uint64_t AQCTLA_CAU:2;
      uint64_t AQCTLA_CAD:2;
      uint64_t AQCTLA_CBU:2;
      uint64_t AQCTLA_CBD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPB_AQCTLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AQCTLB_ZRO:2;
      uint64_t AQCTLB_PRD:2;
      uint64_t AQCTLB_CAU:2;
      uint64_t AQCTLB_CAD:2;
      uint64_t AQCTLB_CBU:2;
      uint64_t AQCTLB_CBD:2;
      uint64_t reservedSpace0:4;
      uint64_t AQSFRC_ACTSFA:2;
      uint64_t AQSFRC_OTSFA:1;
      uint64_t AQSFRC_ACTSFB:2;
      uint64_t AQSFRC_OTSFB:1;
      uint64_t AQSFRC_RLDCSF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AQCTLB_AQSFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AQCSFRC_CSFA:2;
      uint64_t AQCSFRC_CSFB:2;
      uint64_t reservedSpace0:12;
      uint64_t DBCTL_OUT_MODE:2;
      uint64_t DBCTL_POLSEL:2;
      uint64_t DBCTL_IN_MODE:2;
      uint64_t reservedSpace1:9;
      uint64_t DBCTL_HALFCYCLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AQCSFRC_DBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBRED_DEL:10;
      uint64_t reservedSpace0:6;
      uint64_t DBFED_DEL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBRED_DBFED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZSEL_CBC1:1;
      uint64_t TZSEL_CBC2:1;
      uint64_t TZSEL_CBC3:1;
      uint64_t TZSEL_CBC4:1;
      uint64_t TZSEL_CBC5:1;
      uint64_t TZSEL_CBC6:1;
      uint64_t TZSEL_DCAEVT2:1;
      uint64_t TZSEL_DCBEVT2:1;
      uint64_t TZSEL_OSHT1:1;
      uint64_t TZSEL_OSHT2:1;
      uint64_t TZSEL_OSHT3:1;
      uint64_t TZSEL_OSHT4:1;
      uint64_t TZSEL_OSHT5:1;
      uint64_t TZSEL_OSHT6:1;
      uint64_t TZSEL_DCAEVT1:1;
      uint64_t TZSEL_DCBEVT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZSEL_TZDCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZCTL_TZA:2;
      uint64_t TZCTL_TZB:2;
      uint64_t TZCTL_DCAEVT1:2;
      uint64_t TZCTL_DCAEVT2:2;
      uint64_t TZCTL_DCBEVT1:2;
      uint64_t TZCTL_DCBEVT2:2;
      uint64_t reservedSpace0:5;
      uint64_t TZEINT_CBC:1;
      uint64_t TZEINT_OST:1;
      uint64_t TZEINT_DCAEVT1:1;
      uint64_t TZEINT_DCAEVT2:1;
      uint64_t TZEINT_DCBEVT1:1;
      uint64_t TZEINT_DCBEVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZCTL_TZEINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZFLG_INT:1;
      uint64_t TZFLG_CBC:1;
      uint64_t TZFLG_OST:1;
      uint64_t TZFLG_DCAEVT1:1;
      uint64_t TZFLG_DCAEVT2:1;
      uint64_t TZFLG_DCBEVT1:1;
      uint64_t TZFLG_DCBEVT2:1;
      uint64_t reservedSpace0:9;
      uint64_t TZCLR_INT:1;
      uint64_t TZCLR_CBC:1;
      uint64_t TZCLR_OST:1;
      uint64_t TZCLR_DCAEVT1:1;
      uint64_t TZCLR_DCAEVT2:1;
      uint64_t TZCLR_DCBEVT1:1;
      uint64_t TZCLR_DCBEVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZFLG_TZCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TZFRC_CBC:1;
      uint64_t TZFRC_OST:1;
      uint64_t TZFRC_DCAEVT1:1;
      uint64_t TZFRC_DCAEVT2:1;
      uint64_t TZFRC_DCBEVT1:1;
      uint64_t TZFRC_DCBEVT2:1;
      uint64_t reservedSpace1:12;
      uint64_t ETSEL_INTEN:1;
      uint64_t reservedSpace2:4;
      uint64_t ETSEL_SOCASEL:3;
      uint64_t ETSEL_SOCAEN:1;
      uint64_t ETSEL_SOCBSEL:3;
      uint64_t ETSEL_SOCBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZFRC_ETSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETPS_INTPRD:2;
      uint64_t ETPS_INTCNT:2;
      uint64_t reservedSpace0:4;
      uint64_t ETPS_SOCAPRD:2;
      uint64_t ETPS_SOCACNT:2;
      uint64_t ETPS_SOCBPRD:2;
      uint64_t ETPS_SOCBCNT:2;
      uint64_t ETFLG_INT:1;
      uint64_t reservedSpace1:1;
      uint64_t ETFLG_SOCA:1;
      uint64_t ETFLG_SOCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPS_ETFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETCLR_INT:1;
      uint64_t reservedSpace0:1;
      uint64_t ETCLR_SOCA:1;
      uint64_t ETCLR_SOCB:1;
      uint64_t reservedSpace1:12;
      uint64_t ETFRC_INT:1;
      uint64_t reservedSpace2:1;
      uint64_t ETFRC_SOCA:1;
      uint64_t ETFRC_SOCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETCLR_ETFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPEN:1;
      uint64_t OSHTWTH:4;
      uint64_t CHPFREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCTL;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DCACTL_EVT1SRCSEL:1;
      uint64_t DCACTL_EVT1FRC_SYNCSEL:1;
      uint64_t DCACTL_EVT1SOCE:1;
      uint64_t DCACTL_EVT1SYNCE:1;
      uint64_t reservedSpace1:4;
      uint64_t DCACTL_EVT2SRCSEL:1;
      uint64_t DCACTL_EVT2FRC_SYNCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRIPSEL_DCACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCBCTL_EVT1SRCSEL:1;
      uint64_t DCBCTL_EVT1FRC_SYNCSEL:1;
      uint64_t DCBCTL_EVT1SOCE:1;
      uint64_t DCBCTL_EVT1SYNCE:1;
      uint64_t reservedSpace0:4;
      uint64_t DCBCTL_EVT2SRCSEL:1;
      uint64_t DCBCTL_EVT2FRC_SYNCSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t DCFCTL_SRCSEL:2;
      uint64_t DCFCTL_BLANKE:1;
      uint64_t DCFCTL_BLANKINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCBCTL_DCFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCAPCTL_CAPE:1;
      uint64_t DCCAPCTL_SHDWMODE:1;
      uint64_t reservedSpace0:14;
      uint64_t DCFOFFSET_OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCAPCTL_DCFOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFOFFSETCNT_OFFSETCNT:16;
      uint64_t DCFWINDOW_WINDOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFOFFSETCNT_DCFWINDOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFWINDOWCNT:8;
      uint64_t reservedSpace0:8;
      uint64_t DCCAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFWINDOWCNT_DCCAP;

};

#define ETPWM1 (*(volatile struct ETPWM1_tag *) 0xfcf78c00)

struct ETPWM2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBCTL_CTRMODE:2;
      uint64_t TBCTL_PHSEN:1;
      uint64_t TBCTL_PRDLD:1;
      uint64_t TBCTL_SYNCOSEL:2;
      uint64_t TBCTL_SWFSYNC:1;
      uint64_t TBCTL_HSPCLKDIV:3;
      uint64_t TBCTL_CLKDIV:3;
      uint64_t TBCTL_PHSDIR:1;
      uint64_t TBCTL_FREE_SOFT:2;
      uint64_t TBSTS_CTRDIR:1;
      uint64_t TBSTS_SYNCI:1;
      uint64_t TBSTS_CTRMAX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTL_TBSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TBPHS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPHS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBCTR:16;
      uint64_t TBPRD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTR_TBPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LOADAMODE:2;
      uint64_t LOADBMODE:2;
      uint64_t SHDWAMODE:1;
      uint64_t reservedSpace1:1;
      uint64_t SHDWBMODE:1;
      uint64_t reservedSpace2:1;
      uint64_t SHDWAFULL:1;
      uint64_t SHDWBFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
      uint64_t AQCTLA_ZRO:2;
      uint64_t AQCTLA_PRD:2;
      uint64_t AQCTLA_CAU:2;
      uint64_t AQCTLA_CAD:2;
      uint64_t AQCTLA_CBU:2;
      uint64_t AQCTLA_CBD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPB_AQCTLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AQCTLB_ZRO:2;
      uint64_t AQCTLB_PRD:2;
      uint64_t AQCTLB_CAU:2;
      uint64_t AQCTLB_CAD:2;
      uint64_t AQCTLB_CBU:2;
      uint64_t AQCTLB_CBD:2;
      uint64_t reservedSpace0:4;
      uint64_t AQSFRC_ACTSFA:2;
      uint64_t AQSFRC_OTSFA:1;
      uint64_t AQSFRC_ACTSFB:2;
      uint64_t AQSFRC_OTSFB:1;
      uint64_t AQSFRC_RLDCSF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AQCTLB_AQSFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AQCSFRC_CSFA:2;
      uint64_t AQCSFRC_CSFB:2;
      uint64_t reservedSpace0:12;
      uint64_t DBCTL_OUT_MODE:2;
      uint64_t DBCTL_POLSEL:2;
      uint64_t DBCTL_IN_MODE:2;
      uint64_t reservedSpace1:9;
      uint64_t DBCTL_HALFCYCLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AQCSFRC_DBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBRED_DEL:10;
      uint64_t reservedSpace0:6;
      uint64_t DBFED_DEL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBRED_DBFED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZSEL_CBC1:1;
      uint64_t TZSEL_CBC2:1;
      uint64_t TZSEL_CBC3:1;
      uint64_t TZSEL_CBC4:1;
      uint64_t TZSEL_CBC5:1;
      uint64_t TZSEL_CBC6:1;
      uint64_t TZSEL_DCAEVT2:1;
      uint64_t TZSEL_DCBEVT2:1;
      uint64_t TZSEL_OSHT1:1;
      uint64_t TZSEL_OSHT2:1;
      uint64_t TZSEL_OSHT3:1;
      uint64_t TZSEL_OSHT4:1;
      uint64_t TZSEL_OSHT5:1;
      uint64_t TZSEL_OSHT6:1;
      uint64_t TZSEL_DCAEVT1:1;
      uint64_t TZSEL_DCBEVT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZSEL_TZDCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZCTL_TZA:2;
      uint64_t TZCTL_TZB:2;
      uint64_t TZCTL_DCAEVT1:2;
      uint64_t TZCTL_DCAEVT2:2;
      uint64_t TZCTL_DCBEVT1:2;
      uint64_t TZCTL_DCBEVT2:2;
      uint64_t reservedSpace0:5;
      uint64_t TZEINT_CBC:1;
      uint64_t TZEINT_OST:1;
      uint64_t TZEINT_DCAEVT1:1;
      uint64_t TZEINT_DCAEVT2:1;
      uint64_t TZEINT_DCBEVT1:1;
      uint64_t TZEINT_DCBEVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZCTL_TZEINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZFLG_INT:1;
      uint64_t TZFLG_CBC:1;
      uint64_t TZFLG_OST:1;
      uint64_t TZFLG_DCAEVT1:1;
      uint64_t TZFLG_DCAEVT2:1;
      uint64_t TZFLG_DCBEVT1:1;
      uint64_t TZFLG_DCBEVT2:1;
      uint64_t reservedSpace0:9;
      uint64_t TZCLR_INT:1;
      uint64_t TZCLR_CBC:1;
      uint64_t TZCLR_OST:1;
      uint64_t TZCLR_DCAEVT1:1;
      uint64_t TZCLR_DCAEVT2:1;
      uint64_t TZCLR_DCBEVT1:1;
      uint64_t TZCLR_DCBEVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZFLG_TZCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TZFRC_CBC:1;
      uint64_t TZFRC_OST:1;
      uint64_t TZFRC_DCAEVT1:1;
      uint64_t TZFRC_DCAEVT2:1;
      uint64_t TZFRC_DCBEVT1:1;
      uint64_t TZFRC_DCBEVT2:1;
      uint64_t reservedSpace1:12;
      uint64_t ETSEL_INTEN:1;
      uint64_t reservedSpace2:4;
      uint64_t ETSEL_SOCASEL:3;
      uint64_t ETSEL_SOCAEN:1;
      uint64_t ETSEL_SOCBSEL:3;
      uint64_t ETSEL_SOCBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZFRC_ETSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETPS_INTPRD:2;
      uint64_t ETPS_INTCNT:2;
      uint64_t reservedSpace0:4;
      uint64_t ETPS_SOCAPRD:2;
      uint64_t ETPS_SOCACNT:2;
      uint64_t ETPS_SOCBPRD:2;
      uint64_t ETPS_SOCBCNT:2;
      uint64_t ETFLG_INT:1;
      uint64_t reservedSpace1:1;
      uint64_t ETFLG_SOCA:1;
      uint64_t ETFLG_SOCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPS_ETFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETCLR_INT:1;
      uint64_t reservedSpace0:1;
      uint64_t ETCLR_SOCA:1;
      uint64_t ETCLR_SOCB:1;
      uint64_t reservedSpace1:12;
      uint64_t ETFRC_INT:1;
      uint64_t reservedSpace2:1;
      uint64_t ETFRC_SOCA:1;
      uint64_t ETFRC_SOCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETCLR_ETFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPEN:1;
      uint64_t OSHTWTH:4;
      uint64_t CHPFREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCTL;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DCACTL_EVT1SRCSEL:1;
      uint64_t DCACTL_EVT1FRC_SYNCSEL:1;
      uint64_t DCACTL_EVT1SOCE:1;
      uint64_t DCACTL_EVT1SYNCE:1;
      uint64_t reservedSpace1:4;
      uint64_t DCACTL_EVT2SRCSEL:1;
      uint64_t DCACTL_EVT2FRC_SYNCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRIPSEL_DCACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCBCTL_EVT1SRCSEL:1;
      uint64_t DCBCTL_EVT1FRC_SYNCSEL:1;
      uint64_t DCBCTL_EVT1SOCE:1;
      uint64_t DCBCTL_EVT1SYNCE:1;
      uint64_t reservedSpace0:4;
      uint64_t DCBCTL_EVT2SRCSEL:1;
      uint64_t DCBCTL_EVT2FRC_SYNCSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t DCFCTL_SRCSEL:2;
      uint64_t DCFCTL_BLANKE:1;
      uint64_t DCFCTL_BLANKINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCBCTL_DCFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCAPCTL_CAPE:1;
      uint64_t DCCAPCTL_SHDWMODE:1;
      uint64_t reservedSpace0:14;
      uint64_t DCFOFFSET_OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCAPCTL_DCFOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFOFFSETCNT_OFFSETCNT:16;
      uint64_t DCFWINDOW_WINDOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFOFFSETCNT_DCFWINDOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFWINDOWCNT:8;
      uint64_t reservedSpace0:8;
      uint64_t DCCAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFWINDOWCNT_DCCAP;

};

#define ETPWM2 (*(volatile struct ETPWM2_tag *) 0xfcf78d00)

struct ETPWM3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBCTL_CTRMODE:2;
      uint64_t TBCTL_PHSEN:1;
      uint64_t TBCTL_PRDLD:1;
      uint64_t TBCTL_SYNCOSEL:2;
      uint64_t TBCTL_SWFSYNC:1;
      uint64_t TBCTL_HSPCLKDIV:3;
      uint64_t TBCTL_CLKDIV:3;
      uint64_t TBCTL_PHSDIR:1;
      uint64_t TBCTL_FREE_SOFT:2;
      uint64_t TBSTS_CTRDIR:1;
      uint64_t TBSTS_SYNCI:1;
      uint64_t TBSTS_CTRMAX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTL_TBSTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t TBPHS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBPHS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBCTR:16;
      uint64_t TBPRD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TBCTR_TBPRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LOADAMODE:2;
      uint64_t LOADBMODE:2;
      uint64_t SHDWAMODE:1;
      uint64_t reservedSpace1:1;
      uint64_t SHDWBMODE:1;
      uint64_t reservedSpace2:1;
      uint64_t SHDWAFULL:1;
      uint64_t SHDWBFULL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t CMPA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPB:16;
      uint64_t AQCTLA_ZRO:2;
      uint64_t AQCTLA_PRD:2;
      uint64_t AQCTLA_CAU:2;
      uint64_t AQCTLA_CAD:2;
      uint64_t AQCTLA_CBU:2;
      uint64_t AQCTLA_CBD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMPB_AQCTLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AQCTLB_ZRO:2;
      uint64_t AQCTLB_PRD:2;
      uint64_t AQCTLB_CAU:2;
      uint64_t AQCTLB_CAD:2;
      uint64_t AQCTLB_CBU:2;
      uint64_t AQCTLB_CBD:2;
      uint64_t reservedSpace0:4;
      uint64_t AQSFRC_ACTSFA:2;
      uint64_t AQSFRC_OTSFA:1;
      uint64_t AQSFRC_ACTSFB:2;
      uint64_t AQSFRC_OTSFB:1;
      uint64_t AQSFRC_RLDCSF:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AQCTLB_AQSFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AQCSFRC_CSFA:2;
      uint64_t AQCSFRC_CSFB:2;
      uint64_t reservedSpace0:12;
      uint64_t DBCTL_OUT_MODE:2;
      uint64_t DBCTL_POLSEL:2;
      uint64_t DBCTL_IN_MODE:2;
      uint64_t reservedSpace1:9;
      uint64_t DBCTL_HALFCYCLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AQCSFRC_DBCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBRED_DEL:10;
      uint64_t reservedSpace0:6;
      uint64_t DBFED_DEL:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DBRED_DBFED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZSEL_CBC1:1;
      uint64_t TZSEL_CBC2:1;
      uint64_t TZSEL_CBC3:1;
      uint64_t TZSEL_CBC4:1;
      uint64_t TZSEL_CBC5:1;
      uint64_t TZSEL_CBC6:1;
      uint64_t TZSEL_DCAEVT2:1;
      uint64_t TZSEL_DCBEVT2:1;
      uint64_t TZSEL_OSHT1:1;
      uint64_t TZSEL_OSHT2:1;
      uint64_t TZSEL_OSHT3:1;
      uint64_t TZSEL_OSHT4:1;
      uint64_t TZSEL_OSHT5:1;
      uint64_t TZSEL_OSHT6:1;
      uint64_t TZSEL_DCAEVT1:1;
      uint64_t TZSEL_DCBEVT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZSEL_TZDCSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZCTL_TZA:2;
      uint64_t TZCTL_TZB:2;
      uint64_t TZCTL_DCAEVT1:2;
      uint64_t TZCTL_DCAEVT2:2;
      uint64_t TZCTL_DCBEVT1:2;
      uint64_t TZCTL_DCBEVT2:2;
      uint64_t reservedSpace0:5;
      uint64_t TZEINT_CBC:1;
      uint64_t TZEINT_OST:1;
      uint64_t TZEINT_DCAEVT1:1;
      uint64_t TZEINT_DCAEVT2:1;
      uint64_t TZEINT_DCBEVT1:1;
      uint64_t TZEINT_DCBEVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZCTL_TZEINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TZFLG_INT:1;
      uint64_t TZFLG_CBC:1;
      uint64_t TZFLG_OST:1;
      uint64_t TZFLG_DCAEVT1:1;
      uint64_t TZFLG_DCAEVT2:1;
      uint64_t TZFLG_DCBEVT1:1;
      uint64_t TZFLG_DCBEVT2:1;
      uint64_t reservedSpace0:9;
      uint64_t TZCLR_INT:1;
      uint64_t TZCLR_CBC:1;
      uint64_t TZCLR_OST:1;
      uint64_t TZCLR_DCAEVT1:1;
      uint64_t TZCLR_DCAEVT2:1;
      uint64_t TZCLR_DCBEVT1:1;
      uint64_t TZCLR_DCBEVT2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZFLG_TZCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TZFRC_CBC:1;
      uint64_t TZFRC_OST:1;
      uint64_t TZFRC_DCAEVT1:1;
      uint64_t TZFRC_DCAEVT2:1;
      uint64_t TZFRC_DCBEVT1:1;
      uint64_t TZFRC_DCBEVT2:1;
      uint64_t reservedSpace1:12;
      uint64_t ETSEL_INTEN:1;
      uint64_t reservedSpace2:4;
      uint64_t ETSEL_SOCASEL:3;
      uint64_t ETSEL_SOCAEN:1;
      uint64_t ETSEL_SOCBSEL:3;
      uint64_t ETSEL_SOCBEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TZFRC_ETSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETPS_INTPRD:2;
      uint64_t ETPS_INTCNT:2;
      uint64_t reservedSpace0:4;
      uint64_t ETPS_SOCAPRD:2;
      uint64_t ETPS_SOCACNT:2;
      uint64_t ETPS_SOCBPRD:2;
      uint64_t ETPS_SOCBCNT:2;
      uint64_t ETFLG_INT:1;
      uint64_t reservedSpace1:1;
      uint64_t ETFLG_SOCA:1;
      uint64_t ETFLG_SOCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETPS_ETFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ETCLR_INT:1;
      uint64_t reservedSpace0:1;
      uint64_t ETCLR_SOCA:1;
      uint64_t ETCLR_SOCB:1;
      uint64_t reservedSpace1:12;
      uint64_t ETFRC_INT:1;
      uint64_t reservedSpace2:1;
      uint64_t ETFRC_SOCA:1;
      uint64_t ETFRC_SOCB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ETCLR_ETFRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHPEN:1;
      uint64_t OSHTWTH:4;
      uint64_t CHPFREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCCTL;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DCACTL_EVT1SRCSEL:1;
      uint64_t DCACTL_EVT1FRC_SYNCSEL:1;
      uint64_t DCACTL_EVT1SOCE:1;
      uint64_t DCACTL_EVT1SYNCE:1;
      uint64_t reservedSpace1:4;
      uint64_t DCACTL_EVT2SRCSEL:1;
      uint64_t DCACTL_EVT2FRC_SYNCSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRIPSEL_DCACTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCBCTL_EVT1SRCSEL:1;
      uint64_t DCBCTL_EVT1FRC_SYNCSEL:1;
      uint64_t DCBCTL_EVT1SOCE:1;
      uint64_t DCBCTL_EVT1SYNCE:1;
      uint64_t reservedSpace0:4;
      uint64_t DCBCTL_EVT2SRCSEL:1;
      uint64_t DCBCTL_EVT2FRC_SYNCSEL:1;
      uint64_t reservedSpace1:6;
      uint64_t DCFCTL_SRCSEL:2;
      uint64_t DCFCTL_BLANKE:1;
      uint64_t DCFCTL_BLANKINV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCBCTL_DCFCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCAPCTL_CAPE:1;
      uint64_t DCCAPCTL_SHDWMODE:1;
      uint64_t reservedSpace0:14;
      uint64_t DCFOFFSET_OFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCAPCTL_DCFOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFOFFSETCNT_OFFSETCNT:16;
      uint64_t DCFWINDOW_WINDOW:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFOFFSETCNT_DCFWINDOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCFWINDOWCNT:8;
      uint64_t reservedSpace0:8;
      uint64_t DCCAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCFWINDOWCNT_DCCAP;

};

#define ETPWM3 (*(volatile struct ETPWM3_tag *) 0xfcf78e00)

struct DTHE_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONFIG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP_CONFIG;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP57T_IMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP57T_IRIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP57T_IMIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP57T_ICIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP36T_IMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP36T_IRIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP36T_IMIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP36T_ICIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP16T_IMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP16T_IRIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP16T_IMIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP16T_ICIS;

  uint8_t res1[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP57_CFG:1;
      uint64_t EIP36_CFG:1;
      uint64_t EIP16_CFG:1;
      uint64_t EIP75_CFG:1;
      uint64_t EIP29_CFG:1;
      uint64_t RES:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP_CGCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP57_REQ:1;
      uint64_t EIP36_REQ:1;
      uint64_t EIP16_REQ:1;
      uint64_t EIP75_REQ:1;
      uint64_t EIP29_REQ:1;
      uint64_t RES:23;
      uint64_t KEY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_EIP_CGREQ;

  uint8_t res2[504];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TYPE:4;
      uint64_t ENDIAN:2;
      uint64_t RES1:1;
      uint64_t IBR:1;
      uint64_t OBR:1;
      uint64_t OINV:1;
      uint64_t RES2:2;
      uint64_t BYTE:1;
      uint64_t INIT:2;
      uint64_t FLASH_ACC2CRC:1;
      uint64_t RES3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_CRC_CTRL;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_CRC_SEED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_CRC_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSLT_PP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_CRC_RSLT_PP;

  uint8_t res4[1012];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP57T_IMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP57T_IRIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP57T_IMIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t RES:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP57T_ICIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP36T_IMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP36T_IRIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP36T_IMIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t COUT:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP36T_ICIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP16T_IMST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP16T_IRIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP16T_IMIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CIN:1;
      uint64_t RES1:1;
      uint64_t DIN:1;
      uint64_t DOUT:1;
      uint64_t RES2:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP16T_ICIS;

  uint8_t res5[448];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP57_CFG:1;
      uint64_t EIP36_CFG:1;
      uint64_t EIP16_CFG:1;
      uint64_t EIP75_CFG:1;
      uint64_t EIP29_CFG:1;
      uint64_t RES:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP_CGCFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIP57_REQ:1;
      uint64_t EIP36_REQ:1;
      uint64_t EIP16_REQ:1;
      uint64_t EIP75_REQ:1;
      uint64_t EIP29_REQ:1;
      uint64_t RES:23;
      uint64_t KEY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_EIP_CGREQ;

  uint8_t res6[504];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TYPE:4;
      uint64_t ENDIAN:2;
      uint64_t RES1:1;
      uint64_t IBR:1;
      uint64_t OBR:1;
      uint64_t OINV:1;
      uint64_t RES2:2;
      uint64_t BYTE:1;
      uint64_t INIT:2;
      uint64_t FLASH_ACC2CRC:1;
      uint64_t RES3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_CRC_CTRL;

  uint8_t res7[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_CRC_SEED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_CRC_DIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSLT_PP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_CRC_RSLT_PP;

  uint8_t res8[740];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_RAND_KEY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_RAND_KEY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY95_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_RAND_KEY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY127_96:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_RAND_KEY3;

};

#define DTHE (*(volatile struct DTHE_tag *) 0xfd000000)

struct AES_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_KEY1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IV_IN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IV_IN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IV_IN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IV_IN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPUT_READY:1;
      uint64_t INPUT_READY:1;
      uint64_t DIRECTION:1;
      uint64_t KEY_SIZE:2;
      uint64_t MODE:1;
      uint64_t CTR:1;
      uint64_t CTR_WIDTH:2;
      uint64_t ICM:1;
      uint64_t CFB:1;
      uint64_t XTS:2;
      uint64_t F8:1;
      uint64_t F9:1;
      uint64_t CBCMAC:1;
      uint64_t GCM:2;
      uint64_t CCM:1;
      uint64_t CCM_L:3;
      uint64_t CCM_M:3;
      uint64_t RESERVED:4;
      uint64_t SAVE_CONTEXT:1;
      uint64_t SAVE_CONTEXT_READY:1;
      uint64_t CONTEXT_READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_C_LENGTH_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:29;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_C_LENGTH_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_AUTH_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA_IN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA_IN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA_IN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA_IN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_TAG_OUT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_TAG_OUT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_TAG_OUT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_TAG_OUT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t X_MAJOR:3;
      uint64_t R_RTL:5;
      uint64_t FUNC:12;
      uint64_t RESERVED:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_REVISION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOIDLE:1;
      uint64_t SOFTRESET:1;
      uint64_t SIDLE:2;
      uint64_t DIRECTBUSEN:1;
      uint64_t DMA_REQ_DATA_IN_EN:1;
      uint64_t DMA_REQ_DATA_OUT_EN:1;
      uint64_t DMA_REQ_CONTEXT_IN_EN:1;
      uint64_t DMA_REQ_CONTEXT_OUT_EN:1;
      uint64_t MAP_CONTEXT_OUT_ON_DATA_OUT:1;
      uint64_t KEK_MODE:1;
      uint64_t KEY_ENC:1;
      uint64_t K3:1;
      uint64_t RESERVED:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_SYSCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_SYSSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTEX_IN:1;
      uint64_t DATA_IN:1;
      uint64_t DATA_OUT:1;
      uint64_t CONTEXT_OUT:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IRQSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTEX_IN:1;
      uint64_t DATA_IN:1;
      uint64_t DATA_OUT:1;
      uint64_t CONTEXT_OUT:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IRQENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_ACCESS:1;
      uint64_t S_DIRTY:1;
      uint64_t P_ACCESS:1;
      uint64_t P_DIRTY:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DIRTYBITS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY_LOCK:1;
      uint64_t KEY2_LOCK:1;
      uint64_t KEY3_LOCK:1;
      uint64_t IV_LOCK:1;
      uint64_t CONTROL_LOCK:1;
      uint64_t LENGTH_LOCK:1;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_LOCKDOWN;

  uint8_t res0[3940];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY2_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_KEY1_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IV_IN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IV_IN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IV_IN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IV_IN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPUT_READY:1;
      uint64_t INPUT_READY:1;
      uint64_t DIRECTION:1;
      uint64_t KEY_SIZE:2;
      uint64_t MODE:1;
      uint64_t CTR:1;
      uint64_t CTR_WIDTH:2;
      uint64_t ICM:1;
      uint64_t CFB:1;
      uint64_t XTS:2;
      uint64_t F8:1;
      uint64_t F9:1;
      uint64_t CBCMAC:1;
      uint64_t GCM:2;
      uint64_t CCM:1;
      uint64_t CCM_L:3;
      uint64_t CCM_M:3;
      uint64_t RESERVED:4;
      uint64_t SAVE_CONTEXT:1;
      uint64_t SAVE_CONTEXT_READY:1;
      uint64_t CONTEXT_READY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_C_LENGTH_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:29;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_C_LENGTH_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_AUTH_LENGTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA_IN_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA_IN_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA_IN_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA_IN_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_TAG_OUT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_TAG_OUT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_TAG_OUT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HASH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_TAG_OUT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t X_MAJOR:3;
      uint64_t R_RTL:5;
      uint64_t FUNC:12;
      uint64_t RESERVED:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_REVISION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOIDLE:1;
      uint64_t SOFTRESET:1;
      uint64_t SIDLE:2;
      uint64_t DIRECTBUSEN:1;
      uint64_t DMA_REQ_DATA_IN_EN:1;
      uint64_t DMA_REQ_DATA_OUT_EN:1;
      uint64_t DMA_REQ_CONTEXT_IN_EN:1;
      uint64_t DMA_REQ_CONTEXT_OUT_EN:1;
      uint64_t MAP_CONTEXT_OUT_ON_DATA_OUT:1;
      uint64_t RESERVED:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_SYSCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_SYSSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTEX_IN:1;
      uint64_t DATA_IN:1;
      uint64_t DATA_OUT:1;
      uint64_t CONTEXT_OUT:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IRQSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTEX_IN:1;
      uint64_t DATA_IN:1;
      uint64_t DATA_OUT:1;
      uint64_t CONTEXT_OUT:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IRQENABLE;

};

#define AES (*(volatile struct AES_tag *) 0xfd006000)

struct PKA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERFLOW:1;
      uint64_t MMMBUSY:1;
      uint64_t CMDERROR:1;
      uint64_t RESERVED:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MMMOP:2;
      uint64_t MMEXP:1;
      uint64_t RESERVED1:2;
      uint64_t ABORT:1;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_CONTROL;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NBASE:10;
      uint64_t RESERVED2:6;
      uint64_t NYDIGITS:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_NBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t XBASE:10;
      uint64_t RESERVED1:6;
      uint64_t XDIGITS:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_XBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t YBASE:10;
      uint64_t RESERVED2:6;
      uint64_t NPASSES:8;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_YBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BBASE:11;
      uint64_t RESERVED1:5;
      uint64_t BCNTR:13;
      uint64_t RESERVED:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_BBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NACC:8;
      uint64_t NACCBUSY:1;
      uint64_t RESERVED1:7;
      uint64_t EXPARRAY:5;
      uint64_t RESERVED:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_NACC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NZERO:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_NZERO;

  uint8_t res1[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED3:2;
      uint64_t CONF:3;
      uint64_t RESERVED2:7;
      uint64_t MMM3A:1;
      uint64_t RESERVED1:3;
      uint64_t PENUM:6;
      uint64_t RESERVED:2;
      uint64_t FIFO:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_OPTIONS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIPNUM:8;
      uint64_t EIPNUM1:8;
      uint64_t PATCH:4;
      uint64_t REVMIN:4;
      uint64_t REVMAX:4;
      uint64_t RESERVED:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_REVSFT;

  uint8_t res2[7904];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t X_MAJOR:3;
      uint64_t R_RTL:4;
      uint64_t reservedSpace0:1;
      uint64_t FUNC:12;
      uint64_t RESERVED:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_REVISION;

  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOIDLE:1;
      uint64_t SOFTRESET:1;
      uint64_t RESERVED1:2;
      uint64_t SIDLE:2;
      uint64_t RESERVED:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_SYSCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_SYSSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKAIRQSTAT:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_IRQSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PKAIRQEN:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_IRQENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATARAM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_RAM_START;

  uint8_t res4[4088];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATARAM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PKA_RAM_END;

};

#define PKA (*(volatile struct PKA_tag *) 0xfd00c080)

struct SHA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_ODIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IDIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DIGEST_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved2:1;
      uint64_t ALGO:2;
      uint64_t ALGO_CONSTANT:1;
      uint64_t CLOSE_HASH:1;
      uint64_t HMAC_KEY_PROC:1;
      uint64_t Reserved1:1;
      uint64_t HMAC_OUTER_HASH:1;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_LENGTH;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA2_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA3_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA4_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA5_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA5_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA6_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA6_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA7_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA7_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA8_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA8_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA9_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA9_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA10_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA10_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA11_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA11_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA12_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA12_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA13_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA13_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA14_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA14_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA15_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_DATA15_IN;

  uint8_t res1[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t X_MAJOR:3;
      uint64_t R_RTL:5;
      uint64_t FUNC:12;
      uint64_t Reserved1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_REVISION;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved2:2;
      uint64_t PIT_EN:1;
      uint64_t PDMA_EN:1;
      uint64_t Reserved1:2;
      uint64_t PCONT_SWT:1;
      uint64_t PADVANCED:1;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_SYSCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_SYSSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPUT_READY:1;
      uint64_t INPUT_READY:1;
      uint64_t PARTHASH_READY:1;
      uint64_t CONTEXT_READY:1;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IRQSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_OUTPUT_READY:1;
      uint64_t M_INPUT_READY:1;
      uint64_t M_PARTHASH_READY:1;
      uint64_t M_CONTEXT_READY:1;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_IRQENABLE;

  uint8_t res3[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SACCESSED:1;
      uint64_t SDIRTY:1;
      uint64_t PACCESSED:1;
      uint64_t PDIRTY:1;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_XSSTATUS;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCK_ALGO:3;
      uint64_t LOCK_USE_ALOG_CONST:1;
      uint64_t LOCK_CLOSE_HASH:1;
      uint64_t LOCK_HMAC_KEY:1;
      uint64_t LOCK_REUSE_HMAC_KEY:1;
      uint64_t LOCK_HMAC_OUTER_HASH:1;
      uint64_t RESERVED1:16;
      uint64_t LOCK_IDIGEST:1;
      uint64_t LOCK_ODIGEST:1;
      uint64_t LOCK_DIGESTCOUNT:1;
      uint64_t LOCK_LENGTH:1;
      uint64_t BLOCK_ODIGEST_RD:1;
      uint64_t RESERVED2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_LOCKDOWN;

  uint8_t res5[176];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_C:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_E:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_F:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_G:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_J:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_K:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_N:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_O:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_P:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_ODIGEST_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_C:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_E:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_F:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_G:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_J:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_K:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_N:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_O:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_P:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_IDIGEST_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIGEST_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_DIGEST_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALGORITHM:3;
      uint64_t USE_ALG_CONSTANTS:1;
      uint64_t CLOSE_HASH:1;
      uint64_t HMAC_KEY_PROCESSING:1;
      uint64_t REUSE_HMAC_KEY:1;
      uint64_t HMAC_OUTER_HASH:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) S_HASH512_LENGTH;

  uint8_t res6[3444];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_ODIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IDIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DIGEST_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved2:1;
      uint64_t ALGO:2;
      uint64_t ALGO_CONSTANT:1;
      uint64_t CLOSE_HASH:1;
      uint64_t HMAC_KEY_PROC:1;
      uint64_t Reserved1:1;
      uint64_t HMAC_OUTER_HASH:1;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_LENGTH;

  uint8_t res7[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA0_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA1_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA2_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA2_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA3_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA3_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA4_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA4_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA5_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA5_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA6_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA6_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA7_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA7_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA8_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA8_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA9_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA9_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA10_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA10_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA11_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA11_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA12_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA12_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA13_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA13_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA14_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA14_IN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA15_IN:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_DATA15_IN;

  uint8_t res8[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Y_MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t X_MAJOR:3;
      uint64_t R_RTL:5;
      uint64_t FUNC:12;
      uint64_t Reserved1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_REVISION;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved2:2;
      uint64_t PIT_EN:1;
      uint64_t PDMA_EN:1;
      uint64_t Reserved1:2;
      uint64_t PCONT_SWT:1;
      uint64_t PADVANCED:1;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_SYSCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESETDONE:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_SYSSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPUT_READY:1;
      uint64_t INPUT_READY:1;
      uint64_t PARTHASH_READY:1;
      uint64_t CONTEXT_READY:1;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IRQSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_OUTPUT_READY:1;
      uint64_t M_INPUT_READY:1;
      uint64_t M_PARTHASH_READY:1;
      uint64_t M_CONTEXT_READY:1;
      uint64_t Reserved:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_IRQENABLE;

  uint8_t res10[224];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_C:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_E:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_F:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_G:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_J:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_K:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_N:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_O:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODIGEST_P:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_ODIGEST_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_A:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_A;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_B:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_B;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_C:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_D:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_D;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_E:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_F:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_F;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_G:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_G;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_I:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_I;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_J:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_J;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_K:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_K;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_M:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_N:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_N;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_O:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_O;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDIGEST_P:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_IDIGEST_P;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIGEST_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_DIGEST_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALGORITHM:3;
      uint64_t USE_ALG_CONSTANTS:1;
      uint64_t CLOSE_HASH:1;
      uint64_t HMAC_KEY_PROCESSING:1;
      uint64_t REUSE_HMAC_KEY:1;
      uint64_t HMAC_OUTER_HASH:1;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LENGTH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) P_HASH512_LENGTH;

};

#define SHA (*(volatile struct SHA_tag *) 0xfd004000)

struct TRNG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RNG_OUT_L:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_OUTPUT_L_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RNG_OUT_H:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_OUTPUT_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READY:1;
      uint64_t SHUTDOWN_OFLO:1;
      uint64_t RESERVED:29;
      uint64_t NEED_CLOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READY:1;
      uint64_t SHUTDOWN_OFLO:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_INTMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READY:1;
      uint64_t SHUTDOWN_OFLO:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_INTACK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED2:1;
      uint64_t TEST_MODE:1;
      uint64_t NO_LFSR_FB:1;
      uint64_t RESERVED1:7;
      uint64_t ENABLE_TRNG:1;
      uint64_t RESERVED:5;
      uint64_t STARTUP_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MIN_REFILL_CYCLES:8;
      uint64_t SAMPLE_DIV:4;
      uint64_t RESERVED:4;
      uint64_t MAX_REFILL_CYCLES:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALARM_THRESHOLD:8;
      uint64_t RESERVED2:8;
      uint64_t SHUTDOWN_THRESHOLD:5;
      uint64_t RESERVED1:3;
      uint64_t SHUTDOWN_COUNT:6;
      uint64_t RESERVED:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ALARMCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_ENABLES:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_FROENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_DETUNES:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_FRODETUNE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_ALARMMASKS:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ALARMMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRO_ALARMSTOPS:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_ALARMSTOP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_LFSR_L;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_LFSR_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSR_80_64:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_LFSR_H;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAMPLE_COUNTER:24;
      uint64_t RESERVED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_COUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_EN_OUT:1;
      uint64_t TEST_PATT_FRO:1;
      uint64_t TEST_PATT_DET:1;
      uint64_t RESERVED2:5;
      uint64_t TEST_SELECT:5;
      uint64_t RESERVED1:3;
      uint64_t TEST_PATTERN:12;
      uint64_t RESERVED:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_TEST;

  uint8_t res0[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESERVED1:6;
      uint64_t NR_OF_FROS:6;
      uint64_t RESERVED:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_OPTIONS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASIC_EIP_NUMBER:8;
      uint64_t COMPLEMENT_OF_BASIC_EIP_NUMBER:8;
      uint64_t HW_PATCH_LEVEL:4;
      uint64_t MINOR_HW_REVISION:4;
      uint64_t MAJOR_HW_REVISION:4;
      uint64_t RESERVED:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_EIP_REV;

  uint8_t res1[8024];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t READY:1;
      uint64_t SHUTDOWN_OFLO:1;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR_STATUS_EN;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:8;
      uint64_t RESERVED:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_REV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOIDLE:1;
      uint64_t RESERVED1:2;
      uint64_t IDLE_TYPE:2;
      uint64_t RESERVED:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYS_CONFIG_REG;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW_INTR_STATUS_SET:2;
      uint64_t RESERVED:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MMR_STATUS_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFT_RESET:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFT_RESET_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PULSE_INT_CLEAR:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQ_EOI_REG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRNGIRQEN:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRNG_IRQSTATUS;

};

#define TRNG (*(volatile struct TRNG_tag *) 0xfd00a000)

struct GIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOGCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPWDN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPOL_0:8;
      uint64_t GIOPOL_1:8;
      uint64_t GIOPOL_2:8;
      uint64_t GIOPOL_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOENASET_0:8;
      uint64_t GIOENASET_1:8;
      uint64_t GIOENASET_2:8;
      uint64_t GIOENASET_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOENASET;

  uint32_t GIOENACLR;
  uint32_t GIOLVL_SET;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOLVLCLR_0:8;
      uint64_t GIOLVLCLR_1:8;
      uint64_t GIOLVLCLR_2:8;
      uint64_t GIOLVLCLR_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOLVLCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOFLG_0:8;
      uint64_t GIOFLG_1:8;
      uint64_t GIOFLG_2:8;
      uint64_t GIOFLG_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOOFFA:6;
      uint64_t Reserved:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOOFFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOOFFB:6;
      uint64_t Reserved:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOOFFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOEMUA:6;
      uint64_t Reserved:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOEMUA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOEMUB:6;
      uint64_t Reserved:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOEMUB;

  uint32_t GIODIR0A;
  uint32_t GIODIN0A;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTA:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTA;

  uint32_t GIOSETA;
  uint32_t GIOCLRA;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRA:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISA:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLA:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLA;

  uint32_t GIODIR0B;
  uint32_t GIODIN0B;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTB:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTB;

  uint32_t GIOSETB;
  uint32_t GIOCLRB;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRB:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISB:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLB:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLB;

  uint32_t GIODIR0C;
  uint32_t GIODIN0C;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTC:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTC;

  uint32_t GIOSETC;
  uint32_t GIOCLRC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRC:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISC:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLC:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLC;

  uint32_t GIODIR0D;
  uint32_t GIODIN0D;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTD:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTD;

  uint32_t GIOSETD;
  uint32_t GIOCLRD;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRD:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISD:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLD:8;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLD;

};

#define GIO (*(volatile struct GIO_tag *) 0xfff7bc00)

struct DMA1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMARES:1;
      uint64_t Reserved1:7;
      uint64_t DEBUG_MODE:2;
      uint64_t Reserved2:4;
      uint64_t BUS_BUSY:1;
      uint64_t Reserved3:1;
      uint64_t DMA_EN:1;
      uint64_t Reserved4:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSP_FB:4;
      uint64_t Reserved1:4;
      uint64_t FSM_FB:4;
      uint64_t Reserved2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMASTAT;

  uint32_t MSS_DMA_Reserved1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCHENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCHENAS;

  uint32_t MSS_DMA_Reserved2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCHDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCHENAR;

  uint32_t MSS_DMA_Reserved3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCHENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCHENAS;

  uint32_t MSS_DMA_Reserved4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCHDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCHENAR;

  uint32_t MSS_DMA_Reserved5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPRIOS;

  uint32_t MSS_DMA_Reserved6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPRIOR;

  uint32_t MSS_DMA_Reserved7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCHIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCHIENAS;

  uint32_t MSS_DMA_Reserved8;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCHIENAR;

  uint32_t MSS_DMA_Reserved9;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH3ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH2ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH1ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH0ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH7ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH6ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH5ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH4ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH11ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH10ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH9ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH8ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH15ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH14ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH13ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH12ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH19ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH18ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH17ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH16ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH23ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH22ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH21ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH20ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH27ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH26ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH25ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH24ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH31ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH30ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH29ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH28ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI7;

  uint32_t MSS_DMA_Reserved10;
  uint32_t MSS_DMA_Reserved11;
  uint32_t MSS_DMA_Reserved12;
  uint32_t MSS_DMA_Reserved13;
  uint32_t MSS_DMA_Reserved14;
  uint32_t MSS_DMA_Reserved15;
  uint32_t MSS_DMA_Reserved16;
  uint32_t MSS_DMA_Reserved17;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH7PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH6PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH5PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH4PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH3PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH2PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH1PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH0PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH15PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH14PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH13PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH12PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH11PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH10PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH9PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH8PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH23PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH22PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH21PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH20PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH19PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH18PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH17PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH16PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH31PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH30PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH29PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH28PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH27PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH26PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH25PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH24PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR3;

  uint32_t MSS_DMA_Reserved18;
  uint32_t MSS_DMA_Reserved19;
  uint32_t MSS_DMA_Reserved20;
  uint32_t MSS_DMA_Reserved21;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCMAP;

  uint32_t MSS_DMA_Reserved22;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSMAP;

  uint32_t MSS_DMA_Reserved23;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCMAP;

  uint32_t MSS_DMA_Reserved24;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCMAP;

  uint32_t MSS_DMA_Reserved25;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERMAP;

  uint32_t MSS_DMA_Reserved26;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCINTENAS;

  uint32_t MSS_DMA_Reserved27;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCINTENAR;

  uint32_t MSS_DMA_Reserved28;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSINTENAS;

  uint32_t MSS_DMA_Reserved29;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSINTENAR;

  uint32_t MSS_DMA_Reserved30;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCINTENAS;

  uint32_t MSS_DMA_Reserved31;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCINTENAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Reserved32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCINTENAS;

  uint32_t MSS_DMA_Reserved33;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCINTENAR;

  uint32_t MSS_DMA_Reserved34;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GINT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTFLAG;

  uint32_t MSS_DMA_Reserved35;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCFLAG;

  uint32_t MSS_DMA_Reserved36;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSFLAG;

  uint32_t MSS_DMA_Reserved37;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCFLAG;

  uint32_t MSS_DMA_Reserved38;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCFLAG;

  uint32_t MSS_DMA_Reserved39;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERFLAG;

  uint32_t MSS_DMA_Reserved40;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERBOFFSET;

  uint32_t MSS_DMA_Reserved41;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSFRLQPA:1;
      uint64_t PSFRHQPA:1;
      uint64_t BYA:1;
      uint64_t Reserved1:5;
      uint64_t PENDA:1;
      uint64_t Reserved2:7;
      uint64_t PSFRLQPB:1;
      uint64_t PSFRHQPB:1;
      uint64_t BYB:1;
      uint64_t Reserved3:5;
      uint64_t PENDB:1;
      uint64_t Reserved4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTCRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:1;
      uint64_t Reserved1:15;
      uint64_t DMADBGS:1;
      uint64_t Reserved2:7;
      uint64_t CHNUM:5;
      uint64_t Reserved3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAACSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAACDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAETCOUNT_12_0:13;
      uint64_t Reserved1:3;
      uint64_t PAFTCOUNT_28_16:13;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBACSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBACDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBETCOUNT_12_0:13;
      uint64_t Reserved1:3;
      uint64_t PBFTCOUNT_28_16:13;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACTC;

  uint32_t MSS_DMA_Reserved42;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t Reserved1:4;
      uint64_t TEST:1;
      uint64_t Reserved2:7;
      uint64_t ERRA:1;
      uint64_t Reserved3:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR_ADDRESS_11_0:12;
      uint64_t Reserved1:12;
      uint64_t EDFLG:1;
      uint64_t Reserved2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0ENA:1;
      uint64_t REG0AP:2;
      uint64_t INT0ENA:1;
      uint64_t INT0AB:1;
      uint64_t Reserved1:3;
      uint64_t REG1ENA:1;
      uint64_t REG1AP:2;
      uint64_t INT1ENA:1;
      uint64_t INT1AB:1;
      uint64_t Reserved2:3;
      uint64_t REG2ENA:1;
      uint64_t REG2AP:2;
      uint64_t INT2ENA:1;
      uint64_t INT2AB:1;
      uint64_t Reserved3:3;
      uint64_t REG3ENA:1;
      uint64_t REG3AP:2;
      uint64_t INT3ENA:1;
      uint64_t INT3AB:1;
      uint64_t Reserved4:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0FT:1;
      uint64_t Reserved1:7;
      uint64_t REG1FT:1;
      uint64_t Reserved2:7;
      uint64_t REG2FT:1;
      uint64_t Reserved3:7;
      uint64_t REG3FT:1;
      uint64_t Reserved4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR0S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR0E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR3S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR3E;

};

#define DMA1 (*(volatile struct DMA1_tag *) 0xfffff000)

struct DMA2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMARES:1;
      uint64_t Reserved1:7;
      uint64_t DEBUG_MODE:2;
      uint64_t Reserved2:4;
      uint64_t BUS_BUSY:1;
      uint64_t Reserved3:1;
      uint64_t DMA_EN:1;
      uint64_t Reserved4:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VBUSP_FB:4;
      uint64_t Reserved1:4;
      uint64_t FSM_FB:4;
      uint64_t Reserved2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMASTAT;

  uint32_t MSS_DMA_Reserved1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCHENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCHENAS;

  uint32_t MSS_DMA_Reserved2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCHDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCHENAR;

  uint32_t MSS_DMA_Reserved3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCHENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCHENAS;

  uint32_t MSS_DMA_Reserved4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCHDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCHENAR;

  uint32_t MSS_DMA_Reserved5;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPRIOS;

  uint32_t MSS_DMA_Reserved6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPRIOR;

  uint32_t MSS_DMA_Reserved7;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCHIE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCHIENAS;

  uint32_t MSS_DMA_Reserved8;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCHID:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCHIENAR;

  uint32_t MSS_DMA_Reserved9;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH3ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH2ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH1ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH0ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH7ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH6ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH5ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH4ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH11ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH10ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH9ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH8ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH15ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH14ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH13ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH12ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH19ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH18ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH17ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH16ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH23ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH22ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH21ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH20ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH27ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH26ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH25ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH24ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH31ASI_5_0:6;
      uint64_t Reserved1:2;
      uint64_t CH30ASI_5_0:6;
      uint64_t Reserved2:2;
      uint64_t CH29ASI_5_0:6;
      uint64_t Reserved3:2;
      uint64_t CH28ASI_5_0:6;
      uint64_t Reserved4:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI7;

  uint32_t MSS_DMA_Reserved10;
  uint32_t MSS_DMA_Reserved11;
  uint32_t MSS_DMA_Reserved12;
  uint32_t MSS_DMA_Reserved13;
  uint32_t MSS_DMA_Reserved14;
  uint32_t MSS_DMA_Reserved15;
  uint32_t MSS_DMA_Reserved16;
  uint32_t MSS_DMA_Reserved17;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH7PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH6PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH5PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH4PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH3PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH2PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH1PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH0PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH15PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH14PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH13PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH12PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH11PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH10PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH9PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH8PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH23PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH22PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH21PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH20PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH19PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH18PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH17PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH16PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH31PA_2_0:3;
      uint64_t Reserved1:1;
      uint64_t CH30PA_2_0:3;
      uint64_t Reserved2:1;
      uint64_t CH29PA_2_0:3;
      uint64_t Reserved3:1;
      uint64_t CH28PA_2_0:3;
      uint64_t Reserved4:1;
      uint64_t CH27PA_2_0:3;
      uint64_t Reserved5:1;
      uint64_t CH26PA_2_0:3;
      uint64_t Reserved6:1;
      uint64_t CH25PA_2_0:3;
      uint64_t Reserved7:1;
      uint64_t CH24PA_2_0:3;
      uint64_t Reserved8:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR3;

  uint32_t MSS_DMA_Reserved18;
  uint32_t MSS_DMA_Reserved19;
  uint32_t MSS_DMA_Reserved20;
  uint32_t MSS_DMA_Reserved21;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCMAP;

  uint32_t MSS_DMA_Reserved22;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSMAP;

  uint32_t MSS_DMA_Reserved23;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCMAP;

  uint32_t MSS_DMA_Reserved24;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCMAP;

  uint32_t MSS_DMA_Reserved25;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERAB:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERMAP;

  uint32_t MSS_DMA_Reserved26;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCINTENAS;

  uint32_t MSS_DMA_Reserved27;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCINTENAR;

  uint32_t MSS_DMA_Reserved28;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSINTENAS;

  uint32_t MSS_DMA_Reserved29;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSINTENAR;

  uint32_t MSS_DMA_Reserved30;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCINTENAS;

  uint32_t MSS_DMA_Reserved31;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCINTENAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Reserved32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCINTENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCINTENAS;

  uint32_t MSS_DMA_Reserved33;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCINTDIS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCINTENAR;

  uint32_t MSS_DMA_Reserved34;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GINT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTFLAG;

  uint32_t MSS_DMA_Reserved35;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTC:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCFLAG;

  uint32_t MSS_DMA_Reserved36;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSFLAG;

  uint32_t MSS_DMA_Reserved37;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCFLAG;

  uint32_t MSS_DMA_Reserved38;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCFLAG;

  uint32_t MSS_DMA_Reserved39;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERFLAG;

  uint32_t MSS_DMA_Reserved40;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERA_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERB_5_0:6;
      uint64_t sbz:2;
      uint64_t Reserved:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERBOFFSET;

  uint32_t MSS_DMA_Reserved41;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSFRLQPA:1;
      uint64_t PSFRHQPA:1;
      uint64_t BYA:1;
      uint64_t Reserved1:5;
      uint64_t PENDA:1;
      uint64_t Reserved2:7;
      uint64_t PSFRLQPB:1;
      uint64_t PSFRHQPB:1;
      uint64_t BYB:1;
      uint64_t Reserved3:5;
      uint64_t PENDB:1;
      uint64_t Reserved4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTCRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC:1;
      uint64_t Reserved:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:1;
      uint64_t Reserved1:15;
      uint64_t DMADBGS:1;
      uint64_t Reserved2:7;
      uint64_t CHNUM:5;
      uint64_t Reserved3:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WM:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAACSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAACDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAETCOUNT_12_0:13;
      uint64_t Reserved1:3;
      uint64_t PAFTCOUNT_28_16:13;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBACSA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACSADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBACDA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACDADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBETCOUNT_12_0:13;
      uint64_t Reserved1:3;
      uint64_t PBFTCOUNT_28_16:13;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACTC;

  uint32_t MSS_DMA_Reserved42;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t Reserved1:4;
      uint64_t TEST:1;
      uint64_t Reserved2:7;
      uint64_t ERRA:1;
      uint64_t Reserved3:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERROR_ADDRESS_11_0:12;
      uint64_t Reserved1:12;
      uint64_t EDFLG:1;
      uint64_t Reserved2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAPAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0ENA:1;
      uint64_t REG0AP:2;
      uint64_t INT0ENA:1;
      uint64_t INT0AB:1;
      uint64_t Reserved1:3;
      uint64_t REG1ENA:1;
      uint64_t REG1AP:2;
      uint64_t INT1ENA:1;
      uint64_t INT1AB:1;
      uint64_t Reserved2:3;
      uint64_t REG2ENA:1;
      uint64_t REG2AP:2;
      uint64_t INT2ENA:1;
      uint64_t INT2AB:1;
      uint64_t Reserved3:3;
      uint64_t REG3ENA:1;
      uint64_t REG3AP:2;
      uint64_t INT3ENA:1;
      uint64_t INT3AB:1;
      uint64_t Reserved4:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0FT:1;
      uint64_t Reserved1:7;
      uint64_t REG1FT:1;
      uint64_t Reserved2:7;
      uint64_t REG2FT:1;
      uint64_t Reserved3:7;
      uint64_t REG3FT:1;
      uint64_t Reserved4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR0S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR0E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR1S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR1E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR2S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR2E;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR3S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDADDRESS:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPR3E;

};

#define DMA2 (*(volatile struct DMA2_tag *) 0xfcfff800)

struct VIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQIVEC:8;
      uint64_t RESERVED1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQIVEC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQIVEC:8;
      uint64_t RESERVED2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQIVEC;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NMI0:1;
      uint64_t NMI1:1;
      uint64_t FIRQPRO0:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRQPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQPRO1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRQPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQPRO2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRQPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQPRO3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRQPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTREQ0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTREQ0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTREQ1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTREQ1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTREQ2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTREQ2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTREQ3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTREQ3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKBIT0:1;
      uint64_t MASKBIT1:1;
      uint64_t REQMASKSET0:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQMASKSET1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQMASKSET2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQMASKSET3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKSET3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASKCLRBIT0:1;
      uint64_t MASKCLRBIT1:1;
      uint64_t REQMASKCLR0:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQMASKCLR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQMASKCLR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQMASKCLR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQMASKCLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKSET0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKSET1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKSET2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKSET3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKSET3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKCLR0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKCLR1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKCLR2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEMASKCLR3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WAKEMASKCLR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQVECREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQVECREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQVECREG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQVECREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPEVTSRC0:8;
      uint64_t RESERVED1:8;
      uint64_t CAPEVTSRC1:8;
      uint64_t RESERVED2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPEVT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL22;

  uint32_t CHANCTRL23;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAPx3:7;
      uint64_t RESERVED3:1;
      uint64_t CHANMAPx2:7;
      uint64_t RESERVED2:1;
      uint64_t CHANMAPx1:7;
      uint64_t RESERVED1:1;
      uint64_t CHANMAPx0:7;
      uint64_t RESERVED0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL31;

};

#define VIM (*(volatile struct VIM_tag *) 0xfffffe00)

struct RTIA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t RESERVED1:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
      uint64_t RESERVED2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
      uint64_t RESERVED4:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0SEL:1;
      uint64_t RESERVED5:3;
      uint64_t COMP1SEL:1;
      uint64_t RESERVED6:3;
      uint64_t COMP2SEL:1;
      uint64_t RESERVED7:3;
      uint64_t COMP3SEL:1;
      uint64_t RESERVED8:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC0;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP3;

  uint8_t res5[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT0:1;
      uint64_t SETINT1:1;
      uint64_t SETINT2:1;
      uint64_t SETINT3:1;
      uint64_t RESERVED9:4;
      uint64_t SETDMA0:1;
      uint64_t SETDMA1:1;
      uint64_t SETDMA2:1;
      uint64_t SETDMA3:1;
      uint64_t RESERVED10:5;
      uint64_t SETOVL0INT:1;
      uint64_t SETOVL1INT:1;
      uint64_t RESERVED11:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT0:1;
      uint64_t CLEARINT1:1;
      uint64_t CLEARINT2:1;
      uint64_t CLEARINT3:1;
      uint64_t RESERVED12:4;
      uint64_t CLEARDMA0:1;
      uint64_t CLEARDMA1:1;
      uint64_t CLEARDMA2:1;
      uint64_t CLEARDMA3:1;
      uint64_t RESERVED13:5;
      uint64_t CLEAROVL0INT:1;
      uint64_t CLEAROVL1INT:1;
      uint64_t RESERVED14:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0:1;
      uint64_t INT1:1;
      uint64_t INT2:1;
      uint64_t INT3:1;
      uint64_t RESERVED15:13;
      uint64_t OVL0INT:1;
      uint64_t OVL1INT:1;
      uint64_t RESERVED16:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res6[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLRENABLE0:4;
      uint64_t RESERVED22:4;
      uint64_t INTCLRENABLE1:4;
      uint64_t RESERVED23:4;
      uint64_t INTCLRENABLE2:4;
      uint64_t RESERVED24:4;
      uint64_t INTCLRENABLE3:4;
      uint64_t RESERVED25:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTCLRENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3CLR;

};

#define RTIA (*(volatile struct RTIA_tag *) 0xfffffc00)

struct RTIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t RESERVED1:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
      uint64_t RESERVED2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBEXT:1;
      uint64_t INC:1;
      uint64_t RESERVED3:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
      uint64_t RESERVED4:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0SEL:1;
      uint64_t RESERVED5:3;
      uint64_t COMP1SEL:1;
      uint64_t RESERVED6:3;
      uint64_t COMP2SEL:1;
      uint64_t RESERVED7:3;
      uint64_t COMP3SEL:1;
      uint64_t RESERVED8:19;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC0;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICPUC1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAFRC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAFRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAUC1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAUC1;

  uint8_t res3[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UDCP3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIUDCP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBLCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBLCOMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBHCOMP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBHCOMP;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT0:1;
      uint64_t SETINT1:1;
      uint64_t SETINT2:1;
      uint64_t SETINT3:1;
      uint64_t RESERVED9:4;
      uint64_t SETDMA0:1;
      uint64_t SETDMA1:1;
      uint64_t SETDMA2:1;
      uint64_t SETDMA3:1;
      uint64_t RESERVED10:4;
      uint64_t SETTBINT:1;
      uint64_t SETOVL0INT:1;
      uint64_t SETOVL1INT:1;
      uint64_t RESERVED11:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT0:1;
      uint64_t CLEARINT1:1;
      uint64_t CLEARINT2:1;
      uint64_t CLEARINT3:1;
      uint64_t RESERVED12:4;
      uint64_t CLEARDMA0:1;
      uint64_t CLEARDMA1:1;
      uint64_t CLEARDMA2:1;
      uint64_t CLEARDMA3:1;
      uint64_t RESERVED13:4;
      uint64_t CLEARTBINT:1;
      uint64_t CLEAROVL0INT:1;
      uint64_t CLEAROVL1INT:1;
      uint64_t RESERVED14:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT0:1;
      uint64_t INT1:1;
      uint64_t INT2:1;
      uint64_t INT3:1;
      uint64_t RESERVED15:12;
      uint64_t TBINT:1;
      uint64_t OVL0INT:1;
      uint64_t OVL1INT:1;
      uint64_t RESERVED16:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCTRL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDPRLD:12;
      uint64_t RESERVED17:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDPRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDST:1;
      uint64_t DWDST:1;
      uint64_t KEYST:1;
      uint64_t STARTTIMEVIOL:1;
      uint64_t ENDTIMEVIOL:1;
      uint64_t DWWD_ST:1;
      uint64_t RESERVED18:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDKEY:16;
      uint64_t RESERVED19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCNTR:25;
      uint64_t RESERVED20:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDRXN:4;
      uint64_t RESERVED21:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDRXNCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDSIZE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDSIZECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCLRENABLE0:4;
      uint64_t RESERVED22:4;
      uint64_t INTCLRENABLE1:4;
      uint64_t RESERVED23:4;
      uint64_t INTCLRENABLE2:4;
      uint64_t RESERVED24:4;
      uint64_t INTCLRENABLE3:4;
      uint64_t RESERVED25:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTCLRENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP0CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP0CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP1CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP2CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP3CLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMP3CLR;

};

#define RTIB (*(volatile struct RTIB_tag *) 0xffffee00)

struct QSPI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t Reserved:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  uint32_t MSS_QSPI_Reserved1;
  uint32_t MSS_QSPI_Reserved2;
  uint32_t MSS_QSPI_Reserved3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved1:2;
      uint64_t IDLEMODE:2;
      uint64_t Reserved2:2;
      uint64_t Reserved3:26;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCONFIG;

  uint32_t MSS_QSPI_Reserved4;
  uint32_t MSS_QSPI_Reserved5;
  uint32_t MSS_QSPI_Reserved6;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQ_RAW:1;
      uint64_t WIRQ_RAW:1;
      uint64_t Reserved:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_STATUS_RAW_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQ_ENA:1;
      uint64_t WIRQ_ENA:1;
      uint64_t Reserved:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_STATUS_ENABLED_CLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQ_ENA_SET:1;
      uint64_t WIRQ_ENA_SET:1;
      uint64_t Reserved:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_ENABLE_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIRQ_ENA_CLR:1;
      uint64_t WIRQ_ENA_CLR:1;
      uint64_t Reserved:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_ENABLE_CLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOI_VECTOR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTC_EOI;

  uint32_t MSS_QSPI_Reserved7;
  uint32_t MSS_QSPI_Reserved8;
  uint32_t MSS_QSPI_Reserved9;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCLK_DIV:16;
      uint64_t Reserved:15;
      uint64_t CLKEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_CLOCK_CNTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKP0:1;
      uint64_t CSP0:1;
      uint64_t CKPH0:1;
      uint64_t DD0:2;
      uint64_t Reserved1:3;
      uint64_t CKP1:1;
      uint64_t CSP1:1;
      uint64_t CKPH1:1;
      uint64_t DD1:2;
      uint64_t Reserved2:3;
      uint64_t CKP2:1;
      uint64_t CSP2:1;
      uint64_t CKPH2:1;
      uint64_t DD2:2;
      uint64_t Reserved3:3;
      uint64_t CKP3:1;
      uint64_t CSP3:1;
      uint64_t CKPH3:1;
      uint64_t DD3:2;
      uint64_t Reserved4:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_DC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLEN:12;
      uint64_t Reserved1:2;
      uint64_t WIRQ:1;
      uint64_t FIRQ:1;
      uint64_t CMD:2;
      uint64_t reservedSpace0:1;
      uint64_t WLEN:7;
      uint64_t Reserved2:2;
      uint64_t CSNUM:2;
      uint64_t Reserved3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY:1;
      uint64_t WC:1;
      uint64_t FC:1;
      uint64_t Reserved1:13;
      uint64_t WDCNT:12;
      uint64_t Reserved2:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_DATA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCMD:8;
      uint64_t NUM_A_BYTES:2;
      uint64_t NUM_D_BYTES:2;
      uint64_t READ_TYPE:2;
      uint64_t Reserved1:2;
      uint64_t WCMD:8;
      uint64_t NUM_D_BITS:5;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_SETUP0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCMD:8;
      uint64_t NUM_A_BYTES:2;
      uint64_t NUM_D_BYTES:2;
      uint64_t READ_TYPE:2;
      uint64_t Reserved1:2;
      uint64_t WCMD:8;
      uint64_t NUM_D_BITS:5;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_SETUP1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCMD:8;
      uint64_t NUM_A_BYTES:2;
      uint64_t NUM_D_BYTES:2;
      uint64_t READ_TYPE:2;
      uint64_t Reserved1:2;
      uint64_t WCMD:8;
      uint64_t NUM_D_BITS:5;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_SETUP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCMD:8;
      uint64_t NUM_A_BYTES:2;
      uint64_t NUM_D_BYTES:2;
      uint64_t READ_TYPE:2;
      uint64_t Reserved1:2;
      uint64_t WCMD:8;
      uint64_t NUM_D_BITS:5;
      uint64_t Reserved2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_SETUP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MMPT_S:1;
      uint64_t MM_INT_EN:1;
      uint64_t Reserved:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_SWITCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_DATA1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_DATA2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_DATA3;

};

#define QSPI (*(volatile struct QSPI_tag *) 0xc0800000)

struct SCIA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMM_MODE:1;
      uint64_t TIMING_MODE:1;
      uint64_t PARITY_ENA:1;
      uint64_t PARITY:1;
      uint64_t STOP:1;
      uint64_t CLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t SW_nRESET:1;
      uint64_t SLEEP:1;
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace1:6;
      uint64_t LOOP_BACK:1;
      uint64_t CONT:1;
      uint64_t reservedSpace2:6;
      uint64_t RXENA:1;
      uint64_t TXENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT:1;
      uint64_t SET_WAKEUP_INT:1;
      uint64_t reservedSpace0:6;
      uint64_t SET_TX_INT:1;
      uint64_t SET_RX_INT:1;
      uint64_t reservedSpace1:6;
      uint64_t SET_TX_DMA:1;
      uint64_t SET_RX_DMA:1;
      uint64_t SET_RX_DMA_ALL:1;
      uint64_t reservedSpace2:5;
      uint64_t SET_PE_INT:1;
      uint64_t SET_OE_INT:1;
      uint64_t SET_FE_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT:1;
      uint64_t CLR_WAKEUP_INT:1;
      uint64_t reservedSpace0:6;
      uint64_t CLR_TX_INT:1;
      uint64_t CLR_RX_INT:1;
      uint64_t reservedSpace1:6;
      uint64_t CLR_TX_DMA:1;
      uint64_t CLR_RX_DMA:1;
      uint64_t CLR_RX_DMA_ALL:1;
      uint64_t reservedSpace2:5;
      uint64_t CLR_PE_INT:1;
      uint64_t CLR_OE_INT:1;
      uint64_t CLR_FE_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT_LVL:1;
      uint64_t SET_WAKEUP_INT_LVL:1;
      uint64_t reservedSpace0:6;
      uint64_t SET_TX_INT_LVL:1;
      uint64_t SET_RX_INT_LVL:1;
      uint64_t reservedSpace1:5;
      uint64_t SET_INC_BR_INT_LVL:1;
      uint64_t reservedSpace2:2;
      uint64_t SET_RX_DMA_ALL_INT_LVL:1;
      uint64_t reservedSpace3:5;
      uint64_t SET_PE_INT_LVL:1;
      uint64_t SET_OE_INT_LVL:1;
      uint64_t SET_FE_INT_LVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT_LVL:1;
      uint64_t CLR_WAKEUP_INT_LVL:1;
      uint64_t reservedSpace0:6;
      uint64_t CLR_TX_INT_LVL:1;
      uint64_t CLR_RX_INT_LVL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_INC_BR_INT_LVL:1;
      uint64_t reservedSpace2:2;
      uint64_t CLR_RX_DMA_ALL_INT_LVL:1;
      uint64_t reservedSpace3:5;
      uint64_t CLR_PE_INT_LVL:1;
      uint64_t CLR_OE_INT_LVL:1;
      uint64_t CLR_FE_INT_LVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRKDT:1;
      uint64_t WAKEUP:1;
      uint64_t IDLE:1;
      uint64_t Bus_busy_flag:1;
      uint64_t reservedSpace0:4;
      uint64_t TXRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXWAKE:1;
      uint64_t TX_EMPTY:1;
      uint64_t RXWAKE:1;
      uint64_t reservedSpace1:11;
      uint64_t PE:1;
      uint64_t OE:1;
      uint64_t FE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIBAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCITD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_FUNC:1;
      uint64_t RX_FUNC:1;
      uint64_t TX_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DIR:1;
      uint64_t RX_DIR:1;
      uint64_t TX_DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_IN:1;
      uint64_t RX_DATA_IN:1;
      uint64_t TX_DATA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_OUT:1;
      uint64_t RX_DATA_OUT:1;
      uint64_t TX_DATA_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_SET:1;
      uint64_t RX_DATA_SET:1;
      uint64_t TX_DATA_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_CLR:1;
      uint64_t RX_DATA_CLR:1;
      uint64_t TX_DATA_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PDR:1;
      uint64_t RX_PDR:1;
      uint64_t TX_PDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PD:1;
      uint64_t RX_PD:1;
      uint64_t TX_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PSL:1;
      uint64_t RX_PSL:1;
      uint64_t TX_PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO8;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SL:1;
      uint64_t RX_SL:1;
      uint64_t TX_SL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO9;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP_ENA:1;
      uint64_t LBP_ENA:1;
      uint64_t reservedSpace0:6;
      uint64_t IODFTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t TX_SHIFT:3;
      uint64_t PIN_SAMPLE_MASK:2;
      uint64_t reservedSpace2:3;
      uint64_t BRKDT_ENA:1;
      uint64_t PEN:1;
      uint64_t FEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIIODCTRL;

};

#define SCIA (*(volatile struct SCIA_tag *) 0xfff7e500)

struct SCIB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMM_MODE:1;
      uint64_t TIMING_MODE:1;
      uint64_t PARITY_ENA:1;
      uint64_t PARITY:1;
      uint64_t STOP:1;
      uint64_t CLOCK:1;
      uint64_t reservedSpace0:1;
      uint64_t SW_nRESET:1;
      uint64_t SLEEP:1;
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace1:6;
      uint64_t LOOP_BACK:1;
      uint64_t CONT:1;
      uint64_t reservedSpace2:6;
      uint64_t RXENA:1;
      uint64_t TXENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT:1;
      uint64_t SET_WAKEUP_INT:1;
      uint64_t reservedSpace0:6;
      uint64_t SET_TX_INT:1;
      uint64_t SET_RX_INT:1;
      uint64_t reservedSpace1:6;
      uint64_t SET_TX_DMA:1;
      uint64_t SET_RX_DMA:1;
      uint64_t SET_RX_DMA_ALL:1;
      uint64_t reservedSpace2:5;
      uint64_t SET_PE_INT:1;
      uint64_t SET_OE_INT:1;
      uint64_t SET_FE_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT:1;
      uint64_t CLR_WAKEUP_INT:1;
      uint64_t reservedSpace0:6;
      uint64_t CLR_TX_INT:1;
      uint64_t CLR_RX_INT:1;
      uint64_t reservedSpace1:6;
      uint64_t CLR_TX_DMA:1;
      uint64_t CLR_RX_DMA:1;
      uint64_t CLR_RX_DMA_ALL:1;
      uint64_t reservedSpace2:5;
      uint64_t CLR_PE_INT:1;
      uint64_t CLR_OE_INT:1;
      uint64_t CLR_FE_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_BRKDT_INT_LVL:1;
      uint64_t SET_WAKEUP_INT_LVL:1;
      uint64_t reservedSpace0:6;
      uint64_t SET_TX_INT_LVL:1;
      uint64_t SET_RX_INT_LVL:1;
      uint64_t reservedSpace1:5;
      uint64_t SET_INC_BR_INT_LVL:1;
      uint64_t reservedSpace2:2;
      uint64_t SET_RX_DMA_ALL_INT_LVL:1;
      uint64_t reservedSpace3:5;
      uint64_t SET_PE_INT_LVL:1;
      uint64_t SET_OE_INT_LVL:1;
      uint64_t SET_FE_INT_LVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_BRKDT_INT_LVL:1;
      uint64_t CLR_WAKEUP_INT_LVL:1;
      uint64_t reservedSpace0:6;
      uint64_t CLR_TX_INT_LVL:1;
      uint64_t CLR_RX_INT_LVL:1;
      uint64_t reservedSpace1:5;
      uint64_t CLR_INC_BR_INT_LVL:1;
      uint64_t reservedSpace2:2;
      uint64_t CLR_RX_DMA_ALL_INT_LVL:1;
      uint64_t reservedSpace3:5;
      uint64_t CLR_PE_INT_LVL:1;
      uint64_t CLR_OE_INT_LVL:1;
      uint64_t CLR_FE_INT_LVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRKDT:1;
      uint64_t WAKEUP:1;
      uint64_t IDLE:1;
      uint64_t Bus_busy_flag:1;
      uint64_t reservedSpace0:4;
      uint64_t TXRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXWAKE:1;
      uint64_t TX_EMPTY:1;
      uint64_t RXWAKE:1;
      uint64_t reservedSpace1:11;
      uint64_t PE:1;
      uint64_t OE:1;
      uint64_t FE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIINTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICHAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BAUD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIBAUD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIRD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCITD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_FUNC:1;
      uint64_t RX_FUNC:1;
      uint64_t TX_FUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DIR:1;
      uint64_t RX_DIR:1;
      uint64_t TX_DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_IN:1;
      uint64_t RX_DATA_IN:1;
      uint64_t TX_DATA_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_OUT:1;
      uint64_t RX_DATA_OUT:1;
      uint64_t TX_DATA_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_SET:1;
      uint64_t RX_DATA_SET:1;
      uint64_t TX_DATA_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_DATA_CLR:1;
      uint64_t RX_DATA_CLR:1;
      uint64_t TX_DATA_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PDR:1;
      uint64_t RX_PDR:1;
      uint64_t TX_PDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PD:1;
      uint64_t RX_PD:1;
      uint64_t TX_PD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_PSL:1;
      uint64_t RX_PSL:1;
      uint64_t TX_PSL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO8;

  uint8_t res1[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SL:1;
      uint64_t RX_SL:1;
      uint64_t TX_SL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO9;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP_ENA:1;
      uint64_t LBP_ENA:1;
      uint64_t reservedSpace0:6;
      uint64_t IODFTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t TX_SHIFT:3;
      uint64_t PIN_SAMPLE_MASK:2;
      uint64_t reservedSpace2:3;
      uint64_t BRKDT_ENA:1;
      uint64_t PEN:1;
      uint64_t FEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIIODCTRL;

};

#define SCIB (*(volatile struct SCIB_tag *) 0xfff7e700)

struct I2C_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t A9_A0:10;
      uint64_t NU:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AL:1;
      uint64_t NACK:1;
      uint64_t ARDY:1;
      uint64_t ICRRDY:1;
      uint64_t ICXRDY:1;
      uint64_t SCD:1;
      uint64_t AAS:1;
      uint64_t NU:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AL:1;
      uint64_t NACK:1;
      uint64_t ARDY:1;
      uint64_t ICRRDY:1;
      uint64_t ICXRDY:1;
      uint64_t SCD:1;
      uint64_t NU1:2;
      uint64_t AD0:1;
      uint64_t AAS:1;
      uint64_t XSMT:1;
      uint64_t RSFULL:1;
      uint64_t BB:1;
      uint64_t NACKSNT:1;
      uint64_t SDIR:1;
      uint64_t NU2:17;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICCL15_ICCL0:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCLKL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICCH15_ICCLH0:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCLKH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ICDC15_ICDC0:16;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D7_D0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A9_A0:10;
      uint64_t NU:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D7_D0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDXR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BC0:1;
      uint64_t BC1:1;
      uint64_t BC2:1;
      uint64_t FDF:1;
      uint64_t STB:1;
      uint64_t IRS:1;
      uint64_t DLB:1;
      uint64_t RM:1;
      uint64_t XA:1;
      uint64_t TRX:1;
      uint64_t MST:1;
      uint64_t STP:1;
      uint64_t NU1:1;
      uint64_t STT:1;
      uint64_t FREE:1;
      uint64_t NACKMOD:1;
      uint64_t NU2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTCODE:3;
      uint64_t NU1:5;
      uint64_t TESTMD:4;
      uint64_t NU2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICIVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCM:1;
      uint64_t IGNACK:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICEMDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPSC7_IPSC0:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REVISION:8;
      uint64_t CLASS:8;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TYPE:8;
      uint64_t NU:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICDMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_Reserved1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NU:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_Reserved2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PFUNC0:1;
      uint64_t NU:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPFUNC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIR0:1;
      uint64_t PDIR1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDIN0:1;
      uint64_t PDIN1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDOUT0:1;
      uint64_t PDOUT1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDSET0:1;
      uint64_t PDSET1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDCLR0:1;
      uint64_t PDCLR1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDRV0:1;
      uint64_t PDRV1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPDRV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPDIS0:1;
      uint64_t PPDIS1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPPDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PPSEL0:1;
      uint64_t PPSEL1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPPSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSRS0:1;
      uint64_t PSRS1:1;
      uint64_t NU:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPSRS;

};

#define I2C (*(volatile struct I2C_tag *) 0xfff7d400)

struct TPTC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t RES1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:3;
      uint64_t RES4:1;
      uint64_t BUSWIDTH:2;
      uint64_t RES3:2;
      uint64_t DREGDEPTH:2;
      uint64_t RES2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCFG;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGBUSY:1;
      uint64_t SRCACTV:1;
      uint64_t WSACTV:1;
      uint64_t RES8:1;
      uint64_t DSTACTV:3;
      uint64_t RES7:1;
      uint64_t ACTV:1;
      uint64_t RES6:3;
      uint64_t DFSTRTPTR:2;
      uint64_t RES5:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES9:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES10:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES11:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES12:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCMD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES14:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES13:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES16:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES15:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES18:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES17:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:4;
      uint64_t RES21:4;
      uint64_t TCC:6;
      uint64_t RES20:2;
      uint64_t TCINTEN:1;
      uint64_t TCCHEN:1;
      uint64_t RES19:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES22:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCMD;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRATE:3;
      uint64_t RES23:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDRATE;

  uint8_t res3[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES29:2;
      uint64_t PRI:3;
      uint64_t RES28:1;
      uint64_t FWID:3;
      uint64_t RES27:1;
      uint64_t TCC:6;
      uint64_t RES26:2;
      uint64_t TCINTEN:1;
      uint64_t RES25:1;
      uint64_t TCCHEN:1;
      uint64_t RES24:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES31:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES30:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPPRXY;

  uint8_t res4[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES37:2;
      uint64_t PRI:3;
      uint64_t RES36:1;
      uint64_t FWID:3;
      uint64_t RES35:1;
      uint64_t TCC:6;
      uint64_t RES34:2;
      uint64_t TCINTEN:1;
      uint64_t RES33:1;
      uint64_t TCCHEN:1;
      uint64_t RES32:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNT;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SABIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES39:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES38:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPPRXY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES40:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRCBREF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADSTBREF;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES41:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRCBREF;

  uint8_t res7[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES47:2;
      uint64_t PRI:3;
      uint64_t RES46:1;
      uint64_t FWID:3;
      uint64_t RES45:1;
      uint64_t TCC:6;
      uint64_t RES44:2;
      uint64_t TCINTEN:1;
      uint64_t RES43:1;
      uint64_t TCCHEN:1;
      uint64_t RES42:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES49:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES48:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFMPPRXY;

};

#define TPTC0 (*(volatile struct TPTC0_tag *) 0x50000000)

struct TPTC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t RES1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:3;
      uint64_t RES4:1;
      uint64_t BUSWIDTH:2;
      uint64_t RES3:2;
      uint64_t DREGDEPTH:2;
      uint64_t RES2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCFG;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGBUSY:1;
      uint64_t SRCACTV:1;
      uint64_t WSACTV:1;
      uint64_t RES8:1;
      uint64_t DSTACTV:3;
      uint64_t RES7:1;
      uint64_t ACTV:1;
      uint64_t RES6:3;
      uint64_t DFSTRTPTR:2;
      uint64_t RES5:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES9:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES10:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES11:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES12:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCMD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES14:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES13:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES16:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES15:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES18:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES17:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:4;
      uint64_t RES21:4;
      uint64_t TCC:6;
      uint64_t RES20:2;
      uint64_t TCINTEN:1;
      uint64_t TCCHEN:1;
      uint64_t RES19:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES22:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCMD;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRATE:3;
      uint64_t RES23:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDRATE;

  uint8_t res3[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES29:2;
      uint64_t PRI:3;
      uint64_t RES28:1;
      uint64_t FWID:3;
      uint64_t RES27:1;
      uint64_t TCC:6;
      uint64_t RES26:2;
      uint64_t TCINTEN:1;
      uint64_t RES25:1;
      uint64_t TCCHEN:1;
      uint64_t RES24:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES31:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES30:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPPRXY;

  uint8_t res4[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES37:2;
      uint64_t PRI:3;
      uint64_t RES36:1;
      uint64_t FWID:3;
      uint64_t RES35:1;
      uint64_t TCC:6;
      uint64_t RES34:2;
      uint64_t TCINTEN:1;
      uint64_t RES33:1;
      uint64_t TCCHEN:1;
      uint64_t RES32:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNT;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SABIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES39:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES38:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPPRXY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES40:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRCBREF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADSTBREF;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES41:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRCBREF;

  uint8_t res7[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES47:2;
      uint64_t PRI:3;
      uint64_t RES46:1;
      uint64_t FWID:3;
      uint64_t RES45:1;
      uint64_t TCC:6;
      uint64_t RES44:2;
      uint64_t TCINTEN:1;
      uint64_t RES43:1;
      uint64_t TCCHEN:1;
      uint64_t RES42:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES49:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES48:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFMPPRXY;

};

#define TPTC1 (*(volatile struct TPTC1_tag *) 0x50000800)

struct TPTC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t RES1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:3;
      uint64_t RES4:1;
      uint64_t BUSWIDTH:2;
      uint64_t RES3:2;
      uint64_t DREGDEPTH:2;
      uint64_t RES2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCFG;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGBUSY:1;
      uint64_t SRCACTV:1;
      uint64_t WSACTV:1;
      uint64_t RES8:1;
      uint64_t DSTACTV:3;
      uint64_t RES7:1;
      uint64_t ACTV:1;
      uint64_t RES6:3;
      uint64_t DFSTRTPTR:2;
      uint64_t RES5:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES9:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES10:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES11:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES12:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCMD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES14:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES13:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES16:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES15:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES18:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES17:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:4;
      uint64_t RES21:4;
      uint64_t TCC:6;
      uint64_t RES20:2;
      uint64_t TCINTEN:1;
      uint64_t TCCHEN:1;
      uint64_t RES19:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES22:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCMD;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRATE:3;
      uint64_t RES23:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDRATE;

  uint8_t res3[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES29:2;
      uint64_t PRI:3;
      uint64_t RES28:1;
      uint64_t FWID:3;
      uint64_t RES27:1;
      uint64_t TCC:6;
      uint64_t RES26:2;
      uint64_t TCINTEN:1;
      uint64_t RES25:1;
      uint64_t TCCHEN:1;
      uint64_t RES24:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES31:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES30:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPPRXY;

  uint8_t res4[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES37:2;
      uint64_t PRI:3;
      uint64_t RES36:1;
      uint64_t FWID:3;
      uint64_t RES35:1;
      uint64_t TCC:6;
      uint64_t RES34:2;
      uint64_t TCINTEN:1;
      uint64_t RES33:1;
      uint64_t TCCHEN:1;
      uint64_t RES32:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNT;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SABIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES39:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES38:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPPRXY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES40:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRCBREF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADSTBREF;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES41:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRCBREF;

  uint8_t res7[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES47:2;
      uint64_t PRI:3;
      uint64_t RES46:1;
      uint64_t FWID:3;
      uint64_t RES45:1;
      uint64_t TCC:6;
      uint64_t RES44:2;
      uint64_t TCINTEN:1;
      uint64_t RES43:1;
      uint64_t TCCHEN:1;
      uint64_t RES42:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES49:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES48:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFMPPRXY;

};

#define TPTC2 (*(volatile struct TPTC2_tag *) 0x50090000)

struct TPTC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:6;
      uint64_t CUSTOM:2;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t RES1:2;
      uint64_t SCHEME:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOSIZE:3;
      uint64_t RES4:1;
      uint64_t BUSWIDTH:2;
      uint64_t RES3:2;
      uint64_t DREGDEPTH:2;
      uint64_t RES2:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCCFG;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGBUSY:1;
      uint64_t SRCACTV:1;
      uint64_t WSACTV:1;
      uint64_t RES8:1;
      uint64_t DSTACTV:3;
      uint64_t RES7:1;
      uint64_t ACTV:1;
      uint64_t RES6:3;
      uint64_t DFSTRTPTR:2;
      uint64_t RES5:18;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES9:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES10:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROGEMPTY:1;
      uint64_t TRDONE:1;
      uint64_t RES11:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES12:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCMD;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES14:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES13:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES16:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES15:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERREN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSERR:1;
      uint64_t RES18:1;
      uint64_t TRERR:1;
      uint64_t MMRAERR:1;
      uint64_t RES17:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STAT:4;
      uint64_t RES21:4;
      uint64_t TCC:6;
      uint64_t RES20:2;
      uint64_t TCINTEN:1;
      uint64_t TCCHEN:1;
      uint64_t RES19:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVAL:1;
      uint64_t SET:1;
      uint64_t RES22:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERRCMD;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDRATE:3;
      uint64_t RES23:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDRATE;

  uint8_t res3[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES29:2;
      uint64_t PRI:3;
      uint64_t RES28:1;
      uint64_t FWID:3;
      uint64_t RES27:1;
      uint64_t TCC:6;
      uint64_t RES26:2;
      uint64_t TCINTEN:1;
      uint64_t RES25:1;
      uint64_t TCCHEN:1;
      uint64_t RES24:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES31:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES30:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPPRXY;

  uint8_t res4[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES37:2;
      uint64_t PRI:3;
      uint64_t RES36:1;
      uint64_t FWID:3;
      uint64_t RES35:1;
      uint64_t TCC:6;
      uint64_t RES34:2;
      uint64_t TCINTEN:1;
      uint64_t RES33:1;
      uint64_t TCCHEN:1;
      uint64_t RES32:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNT;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SABIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES39:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES38:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SAMPPRXY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES40:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SACNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SASRCBREF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SADSTBREF;

  uint8_t res6[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNTRLD:16;
      uint64_t RES41:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNTRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDRBREF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRCBREF;

  uint8_t res7[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SAM:1;
      uint64_t DAM:1;
      uint64_t RES47:2;
      uint64_t PRI:3;
      uint64_t RES46:1;
      uint64_t FWID:3;
      uint64_t RES45:1;
      uint64_t TCC:6;
      uint64_t RES44:2;
      uint64_t TCINTEN:1;
      uint64_t RES43:1;
      uint64_t TCCHEN:1;
      uint64_t RES42:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFOPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACNT:16;
      uint64_t BCNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFDST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBIDX:16;
      uint64_t DBIDX:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFBIDX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIVID:4;
      uint64_t RES49:4;
      uint64_t PRIV:1;
      uint64_t SECURE:1;
      uint64_t RES48:22;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFMPPRXY;

};

#define TPTC3 (*(volatile struct TPTC3_tag *) 0x50090400)

struct CRC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_PSA_SWREST:1;
      uint64_t CH1_DW_SEL:2;
      uint64_t CH1_CRC_SEL:2;
      uint64_t CH1_BIT_SWAP:1;
      uint64_t CH1_BYTE_SWAP:1;
      uint64_t CH1_CRC_SEL2:1;
      uint64_t CH2_PSA_SWREST:1;
      uint64_t CH2_DW_SEL:2;
      uint64_t CH2_CRC_SEL:2;
      uint64_t CH2_BIT_SWAP:1;
      uint64_t CH2_BYTE_SWAP:1;
      uint64_t CH2_CRC_SEL2:1;
      uint64_t CH3_PSA_SWREST:1;
      uint64_t CH3_DW_SEL:2;
      uint64_t CH3_CRC_SEL:2;
      uint64_t CH3_BIT_SWAP:1;
      uint64_t CH3_BYTE_SWAP:1;
      uint64_t CH3_CRC_SEL2:1;
      uint64_t CH4_PSA_SWREST:1;
      uint64_t CH4_DW_SEL:2;
      uint64_t CH4_CRC_SEL:2;
      uint64_t CH4_BIT_SWAP:1;
      uint64_t CH4_BYTE_SWAP:1;
      uint64_t CH4_CRC_SEL2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
      uint64_t Reserved1:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_MODE:2;
      uint64_t Reserved1:2;
      uint64_t CH1_TRACEEN:1;
      uint64_t Reserved2:3;
      uint64_t CH2_MODE:2;
      uint64_t Reserved3:6;
      uint64_t CH3_MODE:2;
      uint64_t Reserved4:6;
      uint64_t CH4_MODE:2;
      uint64_t Reserved5:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL2;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved1:1;
      uint64_t CH1_CRCFAILENS:1;
      uint64_t CH1_OVERENS:1;
      uint64_t CH1_UNDERENS:1;
      uint64_t CH1_TIMEOUTENS:1;
      uint64_t Reserved2:4;
      uint64_t CH2_CRCFAILENS:1;
      uint64_t CH2_OVERENS:1;
      uint64_t CH2_UNDERENS:1;
      uint64_t CH2_TIMEOUTENS:1;
      uint64_t Reserved3:4;
      uint64_t CH3_CRCFAILENS:1;
      uint64_t CH3_OVERENS:1;
      uint64_t CH3_UNDERENS:1;
      uint64_t CH3_TIMEOUTENS:1;
      uint64_t Reserved4:4;
      uint64_t CH4_CRCFAILENS:1;
      uint64_t CH4_OVERENS:1;
      uint64_t CH4_UNDERENS:1;
      uint64_t CH4_TIMEOUTENS:1;
      uint64_t Reserved5:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_INTS;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved1:1;
      uint64_t CH1_CRCFAILENR:1;
      uint64_t CH1_OVERENR:1;
      uint64_t CH1_UNDERENR:1;
      uint64_t CH1_TIMEOUTENR:1;
      uint64_t Reserved2:4;
      uint64_t CH2_CRCFAILENR:1;
      uint64_t CH2_OVERENR:1;
      uint64_t CH2_UNDERENR:1;
      uint64_t CH2_TIMEOUTENR:1;
      uint64_t Reserved3:4;
      uint64_t CH3_CRCFAILENR:1;
      uint64_t CH3_OVERENR:1;
      uint64_t CH3_UNDERENR:1;
      uint64_t CH3_TIMEOUTENR:1;
      uint64_t Reserved4:4;
      uint64_t CH4_CRCFAILENR:1;
      uint64_t CH4_OVERENR:1;
      uint64_t CH4_UNDERENR:1;
      uint64_t CH4_TIMEOUTENR:1;
      uint64_t Reserved5:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_INTR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved1:1;
      uint64_t CH1_CRCFAIL:1;
      uint64_t CH1_OVER:1;
      uint64_t CH1_UNDER:1;
      uint64_t CH1_TIMEOUT:1;
      uint64_t Reserved2:4;
      uint64_t CH2_CRCFAIL:1;
      uint64_t CH2_OVER:1;
      uint64_t CH2_UNDER:1;
      uint64_t CH2_TIMEOUT:1;
      uint64_t Reserved3:4;
      uint64_t CH3_CRCFAIL:1;
      uint64_t CH3_OVER:1;
      uint64_t CH3_UNDER:1;
      uint64_t CH3_TIMEOUT:1;
      uint64_t Reserved4:4;
      uint64_t CH4_CRCFAIL:1;
      uint64_t CH4_OVER:1;
      uint64_t CH4_UNDER:1;
      uint64_t CH4_TIMEOUT:1;
      uint64_t Reserved5:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_STATUS_REG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFSTREG:8;
      uint64_t Reserved1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_INT_OFFSET_REG;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_BUSY:1;
      uint64_t Reserved1:7;
      uint64_t Ch2_BUSY:1;
      uint64_t Reserved2:7;
      uint64_t Ch3_BUSY:1;
      uint64_t Reserved3:7;
      uint64_t Ch4_BUSY:1;
      uint64_t Reserved4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BUSY;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT1:20;
      uint64_t Reserved1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT1:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC1:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD1:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTOPLD1:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD1;

  uint8_t res8[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASIG1_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSA_SIG1_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC1_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC1_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG1_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG1_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA1_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA1_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGH1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT2:20;
      uint64_t Reserved1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT2:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC2:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD2:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTOPLD2:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD2;

  uint8_t res9[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASIG2_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSA_SIG2_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC2_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC2_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG2_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG2_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA2_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA2_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGH2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT3:20;
      uint64_t Reserved1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT3:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC3:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD3:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTOPLD3:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD3;

  uint8_t res10[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASIG3_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSA_SIG3_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC3_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC3_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG3_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG3_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA3_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA3_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGH3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT4:20;
      uint64_t Reserved1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT4:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC4:16;
      uint64_t Reserved1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD4:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTOPLD4:24;
      uint64_t Reserved1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD4;

  uint8_t res11[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASIG4_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSA_SIG4_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SIGREGH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC4_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC4_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_REGH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG4_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSASECSIG4_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSA_SECSIGREGH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA4_31_0:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAW_DATA4_63_32:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAW_DATAREGH4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITCMEn:1;
      uint64_t DTCMEn:1;
      uint64_t MEn:1;
      uint64_t Reserved1:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCRC_BUS_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED1;

  uint8_t res12[692];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Reserved1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED2;

};

#define CRC (*(volatile struct CRC_tag *) 0xfe000000)

struct DCCA_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCENA:4;
      uint64_t ERRENA:4;
      uint64_t SINGLESHOT:4;
      uint64_t DONENA:4;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:5;
      uint64_t CUSTOM:1;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU1:2;
      uint64_t SCHEME:3;
      uint64_t NU2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED0:20;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDSEED0:16;
      uint64_t NU4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALIDSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED1:20;
      uint64_t NU5:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t DONE:1;
      uint64_t NU6:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT0:20;
      uint64_t NU7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID0:16;
      uint64_t NU8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT1:20;
      uint64_t NU9:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC1:4;
      uint64_t NU10:8;
      uint64_t KEY_B4:4;
      uint64_t NU11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC0:4;
      uint64_t NU12:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC0;

};

#define DCCA (*(volatile struct DCCA_tag *) 0xffffec00)

struct DCCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCCENA:4;
      uint64_t ERRENA:4;
      uint64_t SINGLESHOT:4;
      uint64_t DONENA:4;
      uint64_t NU:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINOR:5;
      uint64_t CUSTOM:1;
      uint64_t MAJOR:3;
      uint64_t RTL:5;
      uint64_t FUNC:12;
      uint64_t NU1:2;
      uint64_t SCHEME:3;
      uint64_t NU2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCREV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED0:20;
      uint64_t NU3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALIDSEED0:16;
      uint64_t NU4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALIDSEED0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTSEED1:20;
      uint64_t NU5:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNTSEED1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERR:1;
      uint64_t DONE:1;
      uint64_t NU6:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT0:20;
      uint64_t NU7:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VALID0:16;
      uint64_t NU8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCVALID0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT1:20;
      uint64_t NU9:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCNT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC1:4;
      uint64_t NU10:8;
      uint64_t KEY_B4:4;
      uint64_t NU11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK_SRC0:4;
      uint64_t NU12:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCCCLKSSRC0;

};

#define DCCB (*(volatile struct DCCB_tag *) 0xfffff400)

struct ESM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSF:1;
      uint64_t RESERVED:31;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMEPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTOFFH:7;
      uint64_t RESERVED:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIOFFHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTOFFL:7;
      uint64_t RESERVED:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIOFFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTCP:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMLTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTCP:16;
      uint64_t RESERVED:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMLTCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EKEY:4;
      uint64_t RESERVED:28;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMEKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSSR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR4;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IEPCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIEPCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIESR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTENCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIECR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILSR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLVLCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMILCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESF:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMSR7;

};

#define ESM (*(volatile struct ESM_tag *) 0xfffff500)

struct MBX_DSS2MSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK:1;
      uint64_t MAILBOX_ACK_INT_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_SET:1;
      uint64_t MAILBOX_ACK_INT_MASK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_SET;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_CLR:1;
      uint64_t MAILBOX_ACK_INT_MASK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_CLR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_CLR:1;
      uint64_t MAILBOX_ACK_INT_STS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_CLR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_ACK:1;
      uint64_t MAILBOX_ACK_INT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ACK;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_TRIG:1;
      uint64_t MAILBOX_ACK_TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_TRIG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_MASKED:1;
      uint64_t MAILBOX_ACK_STS_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_MASKED;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_RAW:1;
      uint64_t MAILBOX_ACK_STS_RAW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_RAW;

};

#define MBX_DSS2MSS (*(volatile struct MBX_DSS2MSS_tag *) 0xf0608300)

struct MBX_MSS2DSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK:1;
      uint64_t MAILBOX_ACK_INT_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_SET:1;
      uint64_t MAILBOX_ACK_INT_MASK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_SET;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_CLR:1;
      uint64_t MAILBOX_ACK_INT_MASK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_CLR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_CLR:1;
      uint64_t MAILBOX_ACK_INT_STS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_CLR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_ACK:1;
      uint64_t MAILBOX_ACK_INT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ACK;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_TRIG:1;
      uint64_t MAILBOX_ACK_TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_TRIG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_MASKED:1;
      uint64_t MAILBOX_ACK_STS_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_MASKED;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_RAW:1;
      uint64_t MAILBOX_ACK_STS_RAW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_RAW;

};

#define MBX_MSS2DSS (*(volatile struct MBX_MSS2DSS_tag *) 0xf0608400)

struct MBX_MSS2RSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK:1;
      uint64_t MAILBOX_ACK_INT_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_SET:1;
      uint64_t MAILBOX_ACK_INT_MASK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_SET;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_CLR:1;
      uint64_t MAILBOX_ACK_INT_MASK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_CLR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_CLR:1;
      uint64_t MAILBOX_ACK_INT_STS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_CLR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_ACK:1;
      uint64_t MAILBOX_ACK_INT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ACK;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_TRIG:1;
      uint64_t MAILBOX_ACK_TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_TRIG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_MASKED:1;
      uint64_t MAILBOX_ACK_STS_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_MASKED;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_RAW:1;
      uint64_t MAILBOX_ACK_STS_RAW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_RAW;

};

#define MBX_MSS2RSS (*(volatile struct MBX_MSS2RSS_tag *) 0xf0608000)

struct MBX_RSS2MSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK:1;
      uint64_t MAILBOX_ACK_INT_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_SET:1;
      uint64_t MAILBOX_ACK_INT_MASK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_SET;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_MASK_CLR:1;
      uint64_t MAILBOX_ACK_INT_MASK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MASK_CLR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_CLR:1;
      uint64_t MAILBOX_ACK_INT_STS_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_CLR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_ACK:1;
      uint64_t MAILBOX_ACK_INT_ACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_ACK;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_TRIG:1;
      uint64_t MAILBOX_ACK_TRIG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_TRIG;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_MASKED:1;
      uint64_t MAILBOX_ACK_STS_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_MASKED;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAILBOX_INT_STS_RAW:1;
      uint64_t MAILBOX_ACK_STS_RAW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_STS_RAW;

};

#define MBX_RSS2MSS (*(volatile struct MBX_RSS2MSS_tag *) 0xf0608600)

