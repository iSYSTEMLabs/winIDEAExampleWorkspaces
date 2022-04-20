#include <stdint.h>

struct DAC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t BOFF1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:3;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWTRIGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8R1;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t DMAUDR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define DAC_0 (*(volatile struct DAC_0_tag *) 0x40007400)

struct DMA1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF1:1;
      uint64_t TCIF1:1;
      uint64_t HTIF1:1;
      uint64_t TEIF1:1;
      uint64_t GIF2:1;
      uint64_t TCIF2:1;
      uint64_t HTIF2:1;
      uint64_t TEIF2:1;
      uint64_t GIF3:1;
      uint64_t TCIF3:1;
      uint64_t HTIF3:1;
      uint64_t TEIF3:1;
      uint64_t GIF4:1;
      uint64_t TCIF4:1;
      uint64_t HTIF4:1;
      uint64_t TEIF4:1;
      uint64_t GIF5:1;
      uint64_t TCIF5:1;
      uint64_t HTIF5:1;
      uint64_t TEIF5:1;
      uint64_t GIF6:1;
      uint64_t TCIF6:1;
      uint64_t HTIF6:1;
      uint64_t TEIF6:1;
      uint64_t GIF7:1;
      uint64_t TCIF7:1;
      uint64_t HTIF7:1;
      uint64_t TEIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CGIF1:1;
      uint64_t CTCIF1:1;
      uint64_t CHTIF1:1;
      uint64_t CTEIF1:1;
      uint64_t CGIF2:1;
      uint64_t CTCIF2:1;
      uint64_t CHTIF2:1;
      uint64_t CTEIF2:1;
      uint64_t CGIF3:1;
      uint64_t CTCIF3:1;
      uint64_t CHTIF3:1;
      uint64_t CTEIF3:1;
      uint64_t CGIF4:1;
      uint64_t CTCIF4:1;
      uint64_t CHTIF4:1;
      uint64_t CTEIF4:1;
      uint64_t CGIF5:1;
      uint64_t CTCIF5:1;
      uint64_t CHTIF5:1;
      uint64_t CTEIF5:1;
      uint64_t CGIF6:1;
      uint64_t CTCIF6:1;
      uint64_t CHTIF6:1;
      uint64_t CTEIF6:1;
      uint64_t CGIF7:1;
      uint64_t CTCIF7:1;
      uint64_t CHTIF7:1;
      uint64_t CTEIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR3;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR4;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR5;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR6;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR7;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1S:4;
      uint64_t C2S:4;
      uint64_t C3S:4;
      uint64_t C4S:4;
      uint64_t C5S:4;
      uint64_t C6S:4;
      uint64_t C7S:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSELR;

};

#define DMA1_0 (*(volatile struct DMA1_0_tag *) 0x40020000)

struct CRC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:2;
      uint64_t POLYSIZE:2;
      uint64_t REV_IN:2;
      uint64_t REV_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_INIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Polynomialcoefficients:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

};

#define CRC_0 (*(volatile struct CRC_0_tag *) 0x40023000)

struct GPIOA_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOA_0 (*(volatile struct GPIOA_0_tag *) 0x50000000)

struct GPIOB_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOB_0 (*(volatile struct GPIOB_0_tag *) 0x50000400)

struct GPIOC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOC_0 (*(volatile struct GPIOC_0_tag *) 0x50000800)

struct GPIOD_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOD_0 (*(volatile struct GPIOD_0_tag *) 0x50000c00)

struct GPIOH_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOH_0 (*(volatile struct GPIOH_0_tag *) 0x50001c00)

struct LCD_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDEN:1;
      uint64_t VSEL:1;
      uint64_t DUTY:3;
      uint64_t BIAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t SOFIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UDDIE:1;
      uint64_t PON:3;
      uint64_t DEAD:3;
      uint64_t CC:3;
      uint64_t BLINKF:3;
      uint64_t BLINK:2;
      uint64_t DIV:4;
      uint64_t PS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENS:1;
      uint64_t SOF:1;
      uint64_t UDR:1;
      uint64_t UDD:1;
      uint64_t RDY:1;
      uint64_t FCRSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SOFC:1;
      uint64_t reservedSpace1:1;
      uint64_t UDDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM5;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM6;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM7;

};

#define LCD_0 (*(volatile struct LCD_0_tag *) 0x40002400)

struct LPTIM_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPM:1;
      uint64_t ARRM:1;
      uint64_t EXTTRIG:1;
      uint64_t CMPOK:1;
      uint64_t ARROK:1;
      uint64_t UP:1;
      uint64_t DOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMCF:1;
      uint64_t ARRMCF:1;
      uint64_t EXTTRIGCF:1;
      uint64_t CMPOKCF:1;
      uint64_t ARROKCF:1;
      uint64_t UPCF:1;
      uint64_t DOWNCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMIE:1;
      uint64_t ARRMIE:1;
      uint64_t EXTTRIGIE:1;
      uint64_t CMPOKIE:1;
      uint64_t ARROKIE:1;
      uint64_t UPIE:1;
      uint64_t DOWNIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:1;
      uint64_t CKPOL:2;
      uint64_t CKFLT:2;
      uint64_t reservedSpace0:1;
      uint64_t TRGFLT:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESC:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
      uint64_t TRIGEN:2;
      uint64_t TIMOUT:1;
      uint64_t WAVE:1;
      uint64_t WAVPOL:1;
      uint64_t PRELOAD:1;
      uint64_t COUNTMODE:1;
      uint64_t ENC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SNGSTRT:1;
      uint64_t CNTSTRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

};

#define LPTIM_0 (*(volatile struct LPTIM_0_tag *) 0x40007c00)

struct RNG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RNGEN:1;
      uint64_t IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRDY:1;
      uint64_t CECS:1;
      uint64_t SECS:1;
      uint64_t reservedSpace0:2;
      uint64_t CEIS:1;
      uint64_t SEIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RNDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define RNG_0 (*(volatile struct RNG_0_tag *) 0x40025000)

struct RTC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t reservedSpace0:2;
      uint64_t MU:4;
      uint64_t MT:1;
      uint64_t WDU:3;
      uint64_t YU:4;
      uint64_t YT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUCKSEL:3;
      uint64_t TSEDGE:1;
      uint64_t REFCKON:1;
      uint64_t BYPSHAD:1;
      uint64_t FMT:1;
      uint64_t reservedSpace0:1;
      uint64_t ALRAE:1;
      uint64_t ALRBE:1;
      uint64_t WUTE:1;
      uint64_t TSE:1;
      uint64_t ALRAIE:1;
      uint64_t ALRBIE:1;
      uint64_t WUTIE:1;
      uint64_t TSIE:1;
      uint64_t ADD1H:1;
      uint64_t SUB1H:1;
      uint64_t BKP:1;
      uint64_t COSEL:1;
      uint64_t POL:1;
      uint64_t OSEL:2;
      uint64_t COE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRAWF:1;
      uint64_t ALRBWF:1;
      uint64_t WUTWF:1;
      uint64_t SHPF:1;
      uint64_t INITS:1;
      uint64_t RSF:1;
      uint64_t INITF:1;
      uint64_t INIT:1;
      uint64_t ALRAF:1;
      uint64_t ALRBF:1;
      uint64_t WUTF:1;
      uint64_t TSF:1;
      uint64_t TSOVF:1;
      uint64_t TAMP1F:1;
      uint64_t TAMP2F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV_S:16;
      uint64_t PREDIV_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t MSK1:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSK2:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
      uint64_t MSK3:1;
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t WDSEL:1;
      uint64_t MSK4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t MSK1:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSK2:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
      uint64_t MSK3:1;
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t WDSEL:1;
      uint64_t MSK4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBFS:15;
      uint64_t reservedSpace0:16;
      uint64_t ADD1S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t reservedSpace0:2;
      uint64_t MU:4;
      uint64_t MT:1;
      uint64_t WDU:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALM:9;
      uint64_t reservedSpace0:4;
      uint64_t CALW16:1;
      uint64_t CALW8:1;
      uint64_t CALP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1E:1;
      uint64_t TAMP1TRG:1;
      uint64_t TAMPIE:1;
      uint64_t TAMP2E:1;
      uint64_t TAMP2_TRG:1;
      uint64_t reservedSpace0:2;
      uint64_t TAMPTS:1;
      uint64_t TAMPFREQ:3;
      uint64_t TAMPFLT:2;
      uint64_t TAMPPRCH:2;
      uint64_t TAMPPUDIS:1;
      uint64_t TAMP1IE:1;
      uint64_t TAMP1NOERASE:1;
      uint64_t TAMP1MF:1;
      uint64_t TAMP2IE:1;
      uint64_t TAMP2NOERASE:1;
      uint64_t TAMP2MF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMASSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_ALARM_TYPE:1;
      uint64_t RTC_OUT_RMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP4R;

};

#define RTC_0 (*(volatile struct RTC_0_tag *) 0x40002800)

struct USART1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

};

#define USART1_0 (*(volatile struct USART1_0_tag *) 0x40013800)

struct USART2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

};

#define USART2_0 (*(volatile struct USART2_0_tag *) 0x40004400)

struct TSC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSCE:1;
      uint64_t START:1;
      uint64_t AM:1;
      uint64_t SYNCPOL:1;
      uint64_t IODEF:1;
      uint64_t MCV:3;
      uint64_t reservedSpace0:4;
      uint64_t PGPSC:3;
      uint64_t SSPSC:1;
      uint64_t SSE:1;
      uint64_t SSD:7;
      uint64_t CTPL:4;
      uint64_t CTPH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAIE:1;
      uint64_t MCEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAIC:1;
      uint64_t MCEIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAF:1;
      uint64_t MCEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOHCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOASCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSCR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCCR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1E:1;
      uint64_t G2E:1;
      uint64_t G3E:1;
      uint64_t G4E:1;
      uint64_t G5E:1;
      uint64_t G6E:1;
      uint64_t G7E:1;
      uint64_t G8E:1;
      uint64_t reservedSpace0:8;
      uint64_t G1S:1;
      uint64_t G2S:1;
      uint64_t G3S:1;
      uint64_t G4S:1;
      uint64_t G5S:1;
      uint64_t G6S:1;
      uint64_t G7S:1;
      uint64_t G8S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOGCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG8CR;

};

#define TSC_0 (*(volatile struct TSC_0_tag *) 0x40024000)

struct IWDG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVU:1;
      uint64_t RVU:1;
      uint64_t WVU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINR;

};

#define IWDG_0 (*(volatile struct IWDG_0_tag *) 0x40003000)

struct WWDG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t T:7;
      uint64_t WDGA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t W:7;
      uint64_t WDGTB0:1;
      uint64_t WDGTB1:1;
      uint64_t EWI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define WWDG_0 (*(volatile struct WWDG_0_tag *) 0x40002c00)

struct COMP_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t COMP1_INN_SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t COMP1_WM:1;
      uint64_t reservedSpace2:3;
      uint64_t COMP1_OUT_SEL:3;
      uint64_t COMP1_POLARITY:1;
      uint64_t reservedSpace3:14;
      uint64_t COMP1_VALUE:1;
      uint64_t COMP1_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t COMP2_SPEED:1;
      uint64_t COMP2_INN_SEL:3;
      uint64_t reservedSpace1:1;
      uint64_t COMP2_INP_SEL:3;
      uint64_t reservedSpace2:1;
      uint64_t COMP2_OUT_SEL:3;
      uint64_t COMP2_POLARITY:1;
      uint64_t reservedSpace3:14;
      uint64_t COMP2_VALUE:1;
      uint64_t COMP2_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP2_CSR;

};

#define COMP_0 (*(volatile struct COMP_0_tag *) 0x40010030)

struct USB_FS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP7R;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRES:1;
      uint64_t PDWN:1;
      uint64_t LPMODE:1;
      uint64_t FSUSP:1;
      uint64_t RESUME:1;
      uint64_t L1RESUME:1;
      uint64_t reservedSpace0:1;
      uint64_t L1REQM:1;
      uint64_t ESOFM:1;
      uint64_t SOFM:1;
      uint64_t RESETM:1;
      uint64_t SUSPM:1;
      uint64_t WKUPM:1;
      uint64_t ERRM:1;
      uint64_t PMAOVRM:1;
      uint64_t CTRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_ID:4;
      uint64_t DIR:1;
      uint64_t reservedSpace0:2;
      uint64_t L1REQ:1;
      uint64_t ESOF:1;
      uint64_t SOF:1;
      uint64_t RESET:1;
      uint64_t SUSP:1;
      uint64_t WKUP:1;
      uint64_t ERR:1;
      uint64_t PMAOVR:1;
      uint64_t CTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FN:11;
      uint64_t LSOF:2;
      uint64_t LCK:1;
      uint64_t RXDM:1;
      uint64_t RXDP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:7;
      uint64_t EF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BTABLE:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMEN:1;
      uint64_t LPMACK:1;
      uint64_t reservedSpace0:1;
      uint64_t REMWAKE:1;
      uint64_t BESL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPMCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCDEN:1;
      uint64_t DCDEN:1;
      uint64_t PDEN:1;
      uint64_t SDEN:1;
      uint64_t DCDET:1;
      uint64_t PDET:1;
      uint64_t SDET:1;
      uint64_t PS2DET:1;
      uint64_t reservedSpace0:7;
      uint64_t DPPU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCDR;

};

#define USB_FS_0 (*(volatile struct USB_FS_0_tag *) 0x40005c00)

struct CRS_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKIE:1;
      uint64_t SYNCWARNIE:1;
      uint64_t ERRIE:1;
      uint64_t ESYNCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CEN:1;
      uint64_t AUTOTRIMEN:1;
      uint64_t SWSYNC:1;
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:16;
      uint64_t FELIM:8;
      uint64_t SYNCDIV:3;
      uint64_t reservedSpace0:1;
      uint64_t SYNCSRC:2;
      uint64_t reservedSpace1:1;
      uint64_t SYNCPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKF:1;
      uint64_t SYNCWARNF:1;
      uint64_t ERRF:1;
      uint64_t ESYNCF:1;
      uint64_t reservedSpace0:4;
      uint64_t SYNCERR:1;
      uint64_t SYNCMISS:1;
      uint64_t TRIMOVF:1;
      uint64_t reservedSpace1:4;
      uint64_t FEDIR:1;
      uint64_t FECAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKC:1;
      uint64_t SYNCWARNC:1;
      uint64_t ERRC:1;
      uint64_t ESYNCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

};

#define CRS_0 (*(volatile struct CRS_0_tag *) 0x40006c00)

struct Firewall_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_CSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LENG:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_CSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_NVDSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LENG:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_NVDSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t ADD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_VDSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t LENG:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_VDSL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPA:1;
      uint64_t VDS:1;
      uint64_t VDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_CR;

};

#define Firewall_0 (*(volatile struct Firewall_0_tag *) 0x40011c00)

struct RCC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI16ON:1;
      uint64_t HSI16KERON:1;
      uint64_t HSI16RDYF:1;
      uint64_t HSI16DIVEN:1;
      uint64_t HSI16DIVF:1;
      uint64_t reservedSpace0:3;
      uint64_t MSION:1;
      uint64_t MSIRDY:1;
      uint64_t reservedSpace1:6;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSLSEON:1;
      uint64_t RTCPRE:2;
      uint64_t reservedSpace2:2;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI16CAL:8;
      uint64_t HSI16TRIM:5;
      uint64_t MSIRANGE:3;
      uint64_t MSICAL:8;
      uint64_t MSITRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI48ON:1;
      uint64_t HSI48RDY:1;
      uint64_t reservedSpace0:6;
      uint64_t HSI48CAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:2;
      uint64_t SWS:2;
      uint64_t HPRE:4;
      uint64_t PPRE1:3;
      uint64_t PPRE2:3;
      uint64_t reservedSpace0:1;
      uint64_t STOPWUCK:1;
      uint64_t PLLSRC:1;
      uint64_t reservedSpace1:1;
      uint64_t PLLMUL:4;
      uint64_t PLLDIV:2;
      uint64_t MCOSEL:3;
      uint64_t reservedSpace2:1;
      uint64_t MCOPRE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSI16RDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t MSIRDYIE:1;
      uint64_t HSI48RDYIE:1;
      uint64_t CSSLSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSI16RDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t MSIRDYF:1;
      uint64_t HSI48RDYF:1;
      uint64_t CSSLSEF:1;
      uint64_t CSSHSEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSI16RDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t MSIRDYC:1;
      uint64_t HSI48RDYC:1;
      uint64_t CSSLSEC:1;
      uint64_t CSSHSEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOPARST:1;
      uint64_t IOPBRST:1;
      uint64_t IOPCRST:1;
      uint64_t IOPDRST:1;
      uint64_t reservedSpace0:3;
      uint64_t IOPHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMARST:1;
      uint64_t reservedSpace0:7;
      uint64_t MIFRST:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCRST:1;
      uint64_t reservedSpace2:3;
      uint64_t TOUCHRST:1;
      uint64_t reservedSpace3:3;
      uint64_t RNGRST:1;
      uint64_t reservedSpace4:3;
      uint64_t CRYPRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace0:1;
      uint64_t TIM21RST:1;
      uint64_t reservedSpace1:2;
      uint64_t TM12RST:1;
      uint64_t reservedSpace2:3;
      uint64_t ADCRST:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI1RST:1;
      uint64_t reservedSpace4:1;
      uint64_t USART1RST:1;
      uint64_t reservedSpace5:7;
      uint64_t DBGRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t reservedSpace0:3;
      uint64_t TIM6RST:1;
      uint64_t reservedSpace1:4;
      uint64_t LCDRST:1;
      uint64_t reservedSpace2:1;
      uint64_t WWDRST:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2RST:1;
      uint64_t reservedSpace4:2;
      uint64_t LPUART12RST:1;
      uint64_t LPUART1RST:1;
      uint64_t reservedSpace5:2;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t USBRST:1;
      uint64_t reservedSpace6:3;
      uint64_t CRSRST:1;
      uint64_t PWRRST:1;
      uint64_t DACRST:1;
      uint64_t reservedSpace7:1;
      uint64_t LPTIM1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOPAEN:1;
      uint64_t IOPBEN:1;
      uint64_t IOPCEN:1;
      uint64_t IOPDEN:1;
      uint64_t reservedSpace0:3;
      uint64_t IOPHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:7;
      uint64_t MIFEN:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TOUCHEN:1;
      uint64_t reservedSpace3:3;
      uint64_t RNGEN:1;
      uint64_t reservedSpace4:3;
      uint64_t CRYPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace0:1;
      uint64_t TIM21EN:1;
      uint64_t reservedSpace1:2;
      uint64_t TIM22EN:1;
      uint64_t reservedSpace2:1;
      uint64_t MIFIEN:1;
      uint64_t reservedSpace3:1;
      uint64_t ADCEN:1;
      uint64_t reservedSpace4:2;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace5:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace6:7;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t reservedSpace0:3;
      uint64_t TIM6EN:1;
      uint64_t reservedSpace1:4;
      uint64_t LCDEN:1;
      uint64_t reservedSpace2:1;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2EN:1;
      uint64_t LPUART1EN:1;
      uint64_t reservedSpace5:2;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t USBEN:1;
      uint64_t reservedSpace6:3;
      uint64_t CRSEN:1;
      uint64_t PWREN:1;
      uint64_t DACEN:1;
      uint64_t reservedSpace7:1;
      uint64_t LPTIM1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOPASMEN:1;
      uint64_t IOPBSMEN:1;
      uint64_t IOPCSMEN:1;
      uint64_t IOPDSMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t IOPHSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPSMEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMASMEN:1;
      uint64_t reservedSpace0:7;
      uint64_t MIFSMEN:1;
      uint64_t SRAMSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCSMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TOUCHSMEN:1;
      uint64_t reservedSpace3:3;
      uint64_t RNGSMEN:1;
      uint64_t reservedSpace4:3;
      uint64_t CRYPSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBSMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGSMEN:1;
      uint64_t reservedSpace0:1;
      uint64_t TIM21SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TIM22SMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ADCSMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI1SMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t USART1SMEN:1;
      uint64_t reservedSpace5:7;
      uint64_t DBGSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2SMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TIM6SMEN:1;
      uint64_t reservedSpace1:4;
      uint64_t LCDSMEN:1;
      uint64_t reservedSpace2:1;
      uint64_t WWDGSMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2SMEN:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2SMEN:1;
      uint64_t LPUART1SMEN:1;
      uint64_t reservedSpace5:2;
      uint64_t I2C1SMEN:1;
      uint64_t I2C2SMEN:1;
      uint64_t USBSMEN:1;
      uint64_t reservedSpace6:3;
      uint64_t CRSSMEN:1;
      uint64_t PWRSMEN:1;
      uint64_t DACSMEN:1;
      uint64_t reservedSpace7:1;
      uint64_t LPTIM1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART1SEL0:1;
      uint64_t USART1SEL1:1;
      uint64_t USART2SEL0:1;
      uint64_t USART2SEL1:1;
      uint64_t reservedSpace0:6;
      uint64_t LPUART1SEL0:1;
      uint64_t LPUART1SEL1:1;
      uint64_t I2C1SEL0:1;
      uint64_t I2C1SEL1:1;
      uint64_t reservedSpace1:4;
      uint64_t LPTIM1SEL0:1;
      uint64_t LPTIM1SEL1:1;
      uint64_t reservedSpace2:6;
      uint64_t HSI48MSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:6;
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t LSEDRV:2;
      uint64_t CSSLSEON:1;
      uint64_t CSSLSED:1;
      uint64_t reservedSpace1:1;
      uint64_t RTCSEL:2;
      uint64_t RTCEN:1;
      uint64_t RTCRST:1;
      uint64_t reservedSpace2:4;
      uint64_t RMVF:1;
      uint64_t OBLRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define RCC_0 (*(volatile struct RCC_0_tag *) 0x40021000)

struct SYSCFG_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_MODE:2;
      uint64_t reservedSpace0:6;
      uint64_t BOOT_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWDISEN:1;
      uint64_t CAPA:3;
      uint64_t reservedSpace0:4;
      uint64_t I2C_PB6_FMP:1;
      uint64_t I2C_PB7_FMP:1;
      uint64_t I2C_PB8_FMP:1;
      uint64_t I2C_PB9_FMP:1;
      uint64_t I2C1_FMP:1;
      uint64_t I2C2_FMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI0:4;
      uint64_t EXTI1:4;
      uint64_t EXTI2:4;
      uint64_t EXTI3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI4:4;
      uint64_t EXTI5:4;
      uint64_t EXTI6:4;
      uint64_t EXTI7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI8:4;
      uint64_t EXTI9:4;
      uint64_t EXTI10:4;
      uint64_t EXTI11:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI12:4;
      uint64_t EXTI13:4;
      uint64_t EXTI14:4;
      uint64_t EXTI15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR4;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN_BGAP:1;
      uint64_t reservedSpace0:3;
      uint64_t SEL_VREF_OUT:2;
      uint64_t reservedSpace1:2;
      uint64_t ENBUF_BGAP_ADC:1;
      uint64_t ENBUF_SENSOR_ADC:1;
      uint64_t reservedSpace2:2;
      uint64_t ENBUF_VREFINT_COMP:1;
      uint64_t ENREF_RC48MHz:1;
      uint64_t reservedSpace3:12;
      uint64_t REF_RC48MHz_RDYF:1;
      uint64_t SENSOR_ADC_RDYF:1;
      uint64_t VREFINT_ADC_RDYF:1;
      uint64_t VREFINT_COMP_RDYF:1;
      uint64_t VREFINT_RDYF:1;
      uint64_t REF_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR3;

};

#define SYSCFG_0 (*(volatile struct SYSCFG_0_tag *) 0x40010000)

struct SPI1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI1_0 (*(volatile struct SPI1_0_tag *) 0x40013000)

struct SPI2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI2_0 (*(volatile struct SPI2_0_tag *) 0x40003800)

struct I2C1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C1_0 (*(volatile struct I2C1_0_tag *) 0x40005400)

struct I2C2_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C2_0 (*(volatile struct I2C2_0_tag *) 0x40005800)

struct PWR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDS:1;
      uint64_t PDDS:1;
      uint64_t CWUF:1;
      uint64_t CSBF:1;
      uint64_t PVDE:1;
      uint64_t PLS:3;
      uint64_t DBP:1;
      uint64_t FPDS:1;
      uint64_t FWU:1;
      uint64_t VOS:2;
      uint64_t DS_EE_KOFF:1;
      uint64_t LPRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUF:1;
      uint64_t SBF:1;
      uint64_t PVDO:1;
      uint64_t BRR:1;
      uint64_t VOSF:1;
      uint64_t REGLPF:1;
      uint64_t reservedSpace0:2;
      uint64_t EWUP:1;
      uint64_t BRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define PWR_0 (*(volatile struct PWR_0_tag *) 0x40007000)

struct Flash_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:1;
      uint64_t PRFTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SLEEP_PD:1;
      uint64_t RUN_PD:1;
      uint64_t DESAB_BUF:1;
      uint64_t PRE_READ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PELOCK:1;
      uint64_t PRGLOCK:1;
      uint64_t OPTLOCK:1;
      uint64_t PROG:1;
      uint64_t DATA:1;
      uint64_t reservedSpace0:3;
      uint64_t FTDW:1;
      uint64_t ERASE:1;
      uint64_t FPRG:1;
      uint64_t reservedSpace1:4;
      uint64_t PARALLELBANK:1;
      uint64_t EOPIE:1;
      uint64_t ERRIE:1;
      uint64_t OBL_LAUNCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRGKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRGKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:1;
      uint64_t EOP:1;
      uint64_t ENDHV:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:4;
      uint64_t WRPERR:1;
      uint64_t PGAERR:1;
      uint64_t SIZERR:1;
      uint64_t OPTVERR:1;
      uint64_t reservedSpace1:2;
      uint64_t RDERR:1;
      uint64_t reservedSpace2:1;
      uint64_t NOTZEROERR:1;
      uint64_t FWWERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDPRT:8;
      uint64_t SPRMOD:1;
      uint64_t reservedSpace0:7;
      uint64_t BOR_LEV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRPR;

};

#define Flash_0 (*(volatile struct Flash_0_tag *) 0x40022000)

struct EXTI_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0:1;
      uint64_t MR1:1;
      uint64_t MR2:1;
      uint64_t MR3:1;
      uint64_t MR4:1;
      uint64_t MR5:1;
      uint64_t MR6:1;
      uint64_t MR7:1;
      uint64_t MR8:1;
      uint64_t MR9:1;
      uint64_t MR10:1;
      uint64_t MR11:1;
      uint64_t MR12:1;
      uint64_t MR13:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t reservedSpace0:1;
      uint64_t MR19:1;
      uint64_t reservedSpace1:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t reservedSpace2:1;
      uint64_t MR25:1;
      uint64_t reservedSpace3:1;
      uint64_t MR27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0:1;
      uint64_t MR1:1;
      uint64_t MR2:1;
      uint64_t MR3:1;
      uint64_t MR4:1;
      uint64_t MR5:1;
      uint64_t MR6:1;
      uint64_t MR7:1;
      uint64_t MR8:1;
      uint64_t MR9:1;
      uint64_t MR10:1;
      uint64_t MR11:1;
      uint64_t MR12:1;
      uint64_t MR13:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t reservedSpace0:1;
      uint64_t MR19:1;
      uint64_t reservedSpace1:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t reservedSpace2:1;
      uint64_t MR25:1;
      uint64_t reservedSpace3:1;
      uint64_t MR27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR0:1;
      uint64_t TR1:1;
      uint64_t TR2:1;
      uint64_t TR3:1;
      uint64_t TR4:1;
      uint64_t TR5:1;
      uint64_t TR6:1;
      uint64_t TR7:1;
      uint64_t TR8:1;
      uint64_t TR9:1;
      uint64_t TR10:1;
      uint64_t TR11:1;
      uint64_t TR12:1;
      uint64_t TR13:1;
      uint64_t TR14:1;
      uint64_t TR15:1;
      uint64_t TR16:1;
      uint64_t TR17:1;
      uint64_t reservedSpace0:1;
      uint64_t TR19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR0:1;
      uint64_t TR1:1;
      uint64_t TR2:1;
      uint64_t TR3:1;
      uint64_t TR4:1;
      uint64_t TR5:1;
      uint64_t TR6:1;
      uint64_t TR7:1;
      uint64_t TR8:1;
      uint64_t TR9:1;
      uint64_t TR10:1;
      uint64_t TR11:1;
      uint64_t TR12:1;
      uint64_t TR13:1;
      uint64_t TR14:1;
      uint64_t TR15:1;
      uint64_t TR16:1;
      uint64_t TR17:1;
      uint64_t reservedSpace0:1;
      uint64_t TR19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIER0:1;
      uint64_t SWIER1:1;
      uint64_t SWIER2:1;
      uint64_t SWIER3:1;
      uint64_t SWIER4:1;
      uint64_t SWIER5:1;
      uint64_t SWIER6:1;
      uint64_t SWIER7:1;
      uint64_t SWIER8:1;
      uint64_t SWIER9:1;
      uint64_t SWIER10:1;
      uint64_t SWIER11:1;
      uint64_t SWIER12:1;
      uint64_t SWIER13:1;
      uint64_t SWIER14:1;
      uint64_t SWIER15:1;
      uint64_t SWIER16:1;
      uint64_t SWIER17:1;
      uint64_t reservedSpace0:1;
      uint64_t SWIER19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
      uint64_t PR16:1;
      uint64_t PR17:1;
      uint64_t reservedSpace0:1;
      uint64_t PR19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define EXTI_0 (*(volatile struct EXTI_0_tag *) 0x40010400)

struct ADC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY:1;
      uint64_t EOSMP:1;
      uint64_t EOC:1;
      uint64_t EOS:1;
      uint64_t OVR:1;
      uint64_t reservedSpace0:2;
      uint64_t AWD:1;
      uint64_t reservedSpace1:3;
      uint64_t EOCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDYIE:1;
      uint64_t EOSMPIE:1;
      uint64_t EOCIE:1;
      uint64_t EOSIE:1;
      uint64_t OVRIE:1;
      uint64_t reservedSpace0:2;
      uint64_t AWDIE:1;
      uint64_t reservedSpace1:3;
      uint64_t EOCALIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEN:1;
      uint64_t ADDIS:1;
      uint64_t ADSTART:1;
      uint64_t reservedSpace0:1;
      uint64_t ADSTP:1;
      uint64_t reservedSpace1:23;
      uint64_t ADVREGEN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DMACFG:1;
      uint64_t SCANDIR:1;
      uint64_t RES:2;
      uint64_t ALIGN:1;
      uint64_t EXTSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t AUTOFF:1;
      uint64_t DISCEN:1;
      uint64_t reservedSpace1:5;
      uint64_t AWDSGL:1;
      uint64_t AWDEN:1;
      uint64_t reservedSpace2:2;
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVSE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TOVS:1;
      uint64_t reservedSpace1:20;
      uint64_t CKMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
      uint64_t reservedSpace0:4;
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSEL0:1;
      uint64_t CHSEL1:1;
      uint64_t CHSEL2:1;
      uint64_t CHSEL3:1;
      uint64_t CHSEL4:1;
      uint64_t CHSEL5:1;
      uint64_t CHSEL6:1;
      uint64_t CHSEL7:1;
      uint64_t CHSEL8:1;
      uint64_t CHSEL9:1;
      uint64_t CHSEL10:1;
      uint64_t CHSEL11:1;
      uint64_t CHSEL12:1;
      uint64_t CHSEL13:1;
      uint64_t CHSEL14:1;
      uint64_t CHSEL15:1;
      uint64_t CHSEL16:1;
      uint64_t CHSEL17:1;
      uint64_t CHSEL18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELR;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res3[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  uint8_t res4[592];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t TSEN:1;
      uint64_t VLCDEN:1;
      uint64_t LFMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

};

#define ADC_0 (*(volatile struct ADC_0_tag *) 0x40012400)

struct DBGMCU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ID:12;
      uint64_t reservedSpace0:4;
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_SLEEP:1;
      uint64_t DBG_STOP:1;
      uint64_t DBG_STANDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIMER2_STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t DBG_TIMER6_STOP:1;
      uint64_t reservedSpace1:5;
      uint64_t DBG_RTC_STOP:1;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_IWDG_STOP:1;
      uint64_t reservedSpace2:8;
      uint64_t DBG_I2C1_STOP:1;
      uint64_t DBG_I2C2_STOP:1;
      uint64_t reservedSpace3:8;
      uint64_t DBG_LPTIMER_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1_FZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DBG_TIMER21_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t DBG_TIMER22_STO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2_FZ;

};

#define DBGMCU_0 (*(volatile struct DBGMCU_0_tag *) 0x40015800)

struct TIM6_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t UDIS:1;
      uint64_t URS:1;
      uint64_t OPM:1;
      uint64_t reservedSpace0:3;
      uint64_t ARPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIE:1;
      uint64_t reservedSpace0:7;
      uint64_t UDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EGR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

};

#define TIM6_0 (*(volatile struct TIM6_0_tag *) 0x40001000)

struct LPUSART1_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t reservedSpace1:2;
      uint64_t M1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t reservedSpace1:6;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t reservedSpace2:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t reservedSpace3:4;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:2;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t reservedSpace2:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace3:4;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace0:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t reservedSpace1:5;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:2;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:7;
      uint64_t CMCF:1;
      uint64_t reservedSpace3:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

};

#define LPUSART1_0 (*(volatile struct LPUSART1_0_tag *) 0x40004800)

struct NVIC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER;

  uint8_t res1[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR;

  uint8_t res2[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR;

  uint8_t res3[380];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_0:8;
      uint64_t PRI_1:8;
      uint64_t PRI_2:8;
      uint64_t PRI_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
      uint64_t PRI_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_8:8;
      uint64_t PRI_9:8;
      uint64_t PRI_10:8;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_12:8;
      uint64_t PRI_13:8;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_16:8;
      uint64_t PRI_17:8;
      uint64_t PRI_18:8;
      uint64_t PRI_19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_20:8;
      uint64_t PRI_21:8;
      uint64_t PRI_22:8;
      uint64_t PRI_23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_24:8;
      uint64_t PRI_25:8;
      uint64_t PRI_26:8;
      uint64_t PRI_27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_28:8;
      uint64_t PRI_29:8;
      uint64_t PRI_30:8;
      uint64_t PRI_31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

};

#define NVIC_0 (*(volatile struct NVIC_0_tag *) 0xe000e100)

struct DAC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN1:1;
      uint64_t BOFF1:1;
      uint64_t TEN1:1;
      uint64_t TSEL1:3;
      uint64_t WAVE1:2;
      uint64_t MAMP1:4;
      uint64_t DMAEN1:1;
      uint64_t DMAUDRIE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWTRIGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12L1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8R1;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:13;
      uint64_t DMAUDR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define DAC_1 (*(volatile struct DAC_1_tag *) 0x40007400)

struct DMA1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIF1:1;
      uint64_t TCIF1:1;
      uint64_t HTIF1:1;
      uint64_t TEIF1:1;
      uint64_t GIF2:1;
      uint64_t TCIF2:1;
      uint64_t HTIF2:1;
      uint64_t TEIF2:1;
      uint64_t GIF3:1;
      uint64_t TCIF3:1;
      uint64_t HTIF3:1;
      uint64_t TEIF3:1;
      uint64_t GIF4:1;
      uint64_t TCIF4:1;
      uint64_t HTIF4:1;
      uint64_t TEIF4:1;
      uint64_t GIF5:1;
      uint64_t TCIF5:1;
      uint64_t HTIF5:1;
      uint64_t TEIF5:1;
      uint64_t GIF6:1;
      uint64_t TCIF6:1;
      uint64_t HTIF6:1;
      uint64_t TEIF6:1;
      uint64_t GIF7:1;
      uint64_t TCIF7:1;
      uint64_t HTIF7:1;
      uint64_t TEIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CGIF1:1;
      uint64_t CTCIF1:1;
      uint64_t CHTIF1:1;
      uint64_t CTEIF1:1;
      uint64_t CGIF2:1;
      uint64_t CTCIF2:1;
      uint64_t CHTIF2:1;
      uint64_t CTEIF2:1;
      uint64_t CGIF3:1;
      uint64_t CTCIF3:1;
      uint64_t CHTIF3:1;
      uint64_t CTEIF3:1;
      uint64_t CGIF4:1;
      uint64_t CTCIF4:1;
      uint64_t CHTIF4:1;
      uint64_t CTEIF4:1;
      uint64_t CGIF5:1;
      uint64_t CTCIF5:1;
      uint64_t CHTIF5:1;
      uint64_t CTEIF5:1;
      uint64_t CGIF6:1;
      uint64_t CTCIF6:1;
      uint64_t CHTIF6:1;
      uint64_t CTEIF6:1;
      uint64_t CGIF7:1;
      uint64_t CTCIF7:1;
      uint64_t CHTIF7:1;
      uint64_t CTEIF7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IFCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR3;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR4;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR5;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR6;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t TCIE:1;
      uint64_t HTIE:1;
      uint64_t TEIE:1;
      uint64_t DIR:1;
      uint64_t CIRC:1;
      uint64_t PINC:1;
      uint64_t MINC:1;
      uint64_t PSIZE:2;
      uint64_t MSIZE:2;
      uint64_t PL:2;
      uint64_t MEM2MEM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NDT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNDTR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPAR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMAR7;

  uint8_t res6[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C1S:4;
      uint64_t C2S:4;
      uint64_t C3S:4;
      uint64_t C4S:4;
      uint64_t C5S:4;
      uint64_t C6S:4;
      uint64_t C7S:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSELR;

};

#define DMA1_1 (*(volatile struct DMA1_1_tag *) 0x40020000)

struct CRC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
      uint64_t reservedSpace0:2;
      uint64_t POLYSIZE:2;
      uint64_t REV_IN:2;
      uint64_t REV_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_INIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Polynomialcoefficients:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POL;

};

#define CRC_1 (*(volatile struct CRC_1_tag *) 0x40023000)

struct GPIOA_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOA_1 (*(volatile struct GPIOA_1_tag *) 0x50000000)

struct GPIOB_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOB_1 (*(volatile struct GPIOB_1_tag *) 0x50000400)

struct GPIOC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOC_1 (*(volatile struct GPIOC_1_tag *) 0x50000800)

struct GPIOD_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOD_1 (*(volatile struct GPIOD_1_tag *) 0x50000c00)

struct GPIOH_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t MODE1:2;
      uint64_t MODE2:2;
      uint64_t MODE3:2;
      uint64_t MODE4:2;
      uint64_t MODE5:2;
      uint64_t MODE6:2;
      uint64_t MODE7:2;
      uint64_t MODE8:2;
      uint64_t MODE9:2;
      uint64_t MODE10:2;
      uint64_t MODE11:2;
      uint64_t MODE12:2;
      uint64_t MODE13:2;
      uint64_t MODE14:2;
      uint64_t MODE15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MODER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OT0:1;
      uint64_t OT1:1;
      uint64_t OT2:1;
      uint64_t OT3:1;
      uint64_t OT4:1;
      uint64_t OT5:1;
      uint64_t OT6:1;
      uint64_t OT7:1;
      uint64_t OT8:1;
      uint64_t OT9:1;
      uint64_t OT10:1;
      uint64_t OT11:1;
      uint64_t OT12:1;
      uint64_t OT13:1;
      uint64_t OT14:1;
      uint64_t OT15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSPEED0:2;
      uint64_t OSPEED1:2;
      uint64_t OSPEED2:2;
      uint64_t OSPEED3:2;
      uint64_t OSPEED4:2;
      uint64_t OSPEED5:2;
      uint64_t OSPEED6:2;
      uint64_t OSPEED7:2;
      uint64_t OSPEED8:2;
      uint64_t OSPEED9:2;
      uint64_t OSPEED10:2;
      uint64_t OSPEED11:2;
      uint64_t OSPEED12:2;
      uint64_t OSPEED13:2;
      uint64_t OSPEED14:2;
      uint64_t OSPEED15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPD0:2;
      uint64_t PUPD1:2;
      uint64_t PUPD2:2;
      uint64_t PUPD3:2;
      uint64_t PUPD4:2;
      uint64_t PUPD5:2;
      uint64_t PUPD6:2;
      uint64_t PUPD7:2;
      uint64_t PUPD8:2;
      uint64_t PUPD9:2;
      uint64_t PUPD10:2;
      uint64_t PUPD11:2;
      uint64_t PUPD12:2;
      uint64_t PUPD13:2;
      uint64_t PUPD14:2;
      uint64_t PUPD15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID0:1;
      uint64_t ID1:1;
      uint64_t ID2:1;
      uint64_t ID3:1;
      uint64_t ID4:1;
      uint64_t ID5:1;
      uint64_t ID6:1;
      uint64_t ID7:1;
      uint64_t ID8:1;
      uint64_t ID9:1;
      uint64_t ID10:1;
      uint64_t ID11:1;
      uint64_t ID12:1;
      uint64_t ID13:1;
      uint64_t ID14:1;
      uint64_t ID15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OD0:1;
      uint64_t OD1:1;
      uint64_t OD2:1;
      uint64_t OD3:1;
      uint64_t OD4:1;
      uint64_t OD5:1;
      uint64_t OD6:1;
      uint64_t OD7:1;
      uint64_t OD8:1;
      uint64_t OD9:1;
      uint64_t OD10:1;
      uint64_t OD11:1;
      uint64_t OD12:1;
      uint64_t OD13:1;
      uint64_t OD14:1;
      uint64_t OD15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ODR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BS0:1;
      uint64_t BS1:1;
      uint64_t BS2:1;
      uint64_t BS3:1;
      uint64_t BS4:1;
      uint64_t BS5:1;
      uint64_t BS6:1;
      uint64_t BS7:1;
      uint64_t BS8:1;
      uint64_t BS9:1;
      uint64_t BS10:1;
      uint64_t BS11:1;
      uint64_t BS12:1;
      uint64_t BS13:1;
      uint64_t BS14:1;
      uint64_t BS15:1;
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BSRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCK0:1;
      uint64_t LCK1:1;
      uint64_t LCK2:1;
      uint64_t LCK3:1;
      uint64_t LCK4:1;
      uint64_t LCK5:1;
      uint64_t LCK6:1;
      uint64_t LCK7:1;
      uint64_t LCK8:1;
      uint64_t LCK9:1;
      uint64_t LCK10:1;
      uint64_t LCK11:1;
      uint64_t LCK12:1;
      uint64_t LCK13:1;
      uint64_t LCK14:1;
      uint64_t LCK15:1;
      uint64_t LCKK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCKR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL0:4;
      uint64_t AFSEL1:4;
      uint64_t AFSEL2:4;
      uint64_t AFSEL3:4;
      uint64_t AFSEL4:4;
      uint64_t AFSEL5:4;
      uint64_t AFSEL6:4;
      uint64_t AFSEL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFSEL8:4;
      uint64_t AFSEL9:4;
      uint64_t AFSEL10:4;
      uint64_t AFSEL11:4;
      uint64_t AFSEL12:4;
      uint64_t AFSEL13:4;
      uint64_t AFSEL14:4;
      uint64_t AFSEL15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR0:1;
      uint64_t BR1:1;
      uint64_t BR2:1;
      uint64_t BR3:1;
      uint64_t BR4:1;
      uint64_t BR5:1;
      uint64_t BR6:1;
      uint64_t BR7:1;
      uint64_t BR8:1;
      uint64_t BR9:1;
      uint64_t BR10:1;
      uint64_t BR11:1;
      uint64_t BR12:1;
      uint64_t BR13:1;
      uint64_t BR14:1;
      uint64_t BR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

};

#define GPIOH_1 (*(volatile struct GPIOH_1_tag *) 0x50001c00)

struct LCD_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LCDEN:1;
      uint64_t VSEL:1;
      uint64_t DUTY:3;
      uint64_t BIAS:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HD:1;
      uint64_t SOFIE:1;
      uint64_t reservedSpace0:1;
      uint64_t UDDIE:1;
      uint64_t PON:3;
      uint64_t DEAD:3;
      uint64_t CC:3;
      uint64_t BLINKF:3;
      uint64_t BLINK:2;
      uint64_t DIV:4;
      uint64_t PS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENS:1;
      uint64_t SOF:1;
      uint64_t UDR:1;
      uint64_t UDD:1;
      uint64_t RDY:1;
      uint64_t FCRSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SOFC:1;
      uint64_t reservedSpace1:1;
      uint64_t UDDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM0;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM1;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM2;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM3;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM4;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM5;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM6;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S00:1;
      uint64_t S01:1;
      uint64_t S02:1;
      uint64_t S03:1;
      uint64_t S04:1;
      uint64_t S05:1;
      uint64_t S06:1;
      uint64_t S07:1;
      uint64_t S08:1;
      uint64_t S09:1;
      uint64_t S10:1;
      uint64_t S11:1;
      uint64_t S12:1;
      uint64_t S13:1;
      uint64_t S14:1;
      uint64_t S15:1;
      uint64_t S16:1;
      uint64_t S17:1;
      uint64_t S18:1;
      uint64_t S19:1;
      uint64_t S20:1;
      uint64_t S21:1;
      uint64_t S22:1;
      uint64_t S23:1;
      uint64_t S24:1;
      uint64_t S25:1;
      uint64_t S26:1;
      uint64_t S27:1;
      uint64_t S28:1;
      uint64_t S29:1;
      uint64_t S30:1;
      uint64_t S31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_COM7;

};

#define LCD_1 (*(volatile struct LCD_1_tag *) 0x40002400)

struct LPTIM_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPM:1;
      uint64_t ARRM:1;
      uint64_t EXTTRIG:1;
      uint64_t CMPOK:1;
      uint64_t ARROK:1;
      uint64_t UP:1;
      uint64_t DOWN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMCF:1;
      uint64_t ARRMCF:1;
      uint64_t EXTTRIGCF:1;
      uint64_t CMPOKCF:1;
      uint64_t ARROKCF:1;
      uint64_t UPCF:1;
      uint64_t DOWNCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMPMIE:1;
      uint64_t ARRMIE:1;
      uint64_t EXTTRIGIE:1;
      uint64_t CMPOKIE:1;
      uint64_t ARROKIE:1;
      uint64_t UPIE:1;
      uint64_t DOWNIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CKSEL:1;
      uint64_t CKPOL:2;
      uint64_t CKFLT:2;
      uint64_t reservedSpace0:1;
      uint64_t TRGFLT:2;
      uint64_t reservedSpace1:1;
      uint64_t PRESC:3;
      uint64_t reservedSpace2:1;
      uint64_t TRIGSEL:3;
      uint64_t reservedSpace3:1;
      uint64_t TRIGEN:2;
      uint64_t TIMOUT:1;
      uint64_t WAVE:1;
      uint64_t WAVPOL:1;
      uint64_t PRELOAD:1;
      uint64_t COUNTMODE:1;
      uint64_t ENC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SNGSTRT:1;
      uint64_t CNTSTRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

};

#define LPTIM_1 (*(volatile struct LPTIM_1_tag *) 0x40007c00)

struct RNG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t RNGEN:1;
      uint64_t IE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DRDY:1;
      uint64_t CECS:1;
      uint64_t SECS:1;
      uint64_t reservedSpace0:2;
      uint64_t CEIS:1;
      uint64_t SEIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RNDATA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define RNG_1 (*(volatile struct RNG_1_tag *) 0x40025000)

struct RTC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t reservedSpace0:2;
      uint64_t MU:4;
      uint64_t MT:1;
      uint64_t WDU:3;
      uint64_t YU:4;
      uint64_t YT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUCKSEL:3;
      uint64_t TSEDGE:1;
      uint64_t REFCKON:1;
      uint64_t BYPSHAD:1;
      uint64_t FMT:1;
      uint64_t reservedSpace0:1;
      uint64_t ALRAE:1;
      uint64_t ALRBE:1;
      uint64_t WUTE:1;
      uint64_t TSE:1;
      uint64_t ALRAIE:1;
      uint64_t ALRBIE:1;
      uint64_t WUTIE:1;
      uint64_t TSIE:1;
      uint64_t ADD1H:1;
      uint64_t SUB1H:1;
      uint64_t BKP:1;
      uint64_t COSEL:1;
      uint64_t POL:1;
      uint64_t OSEL:2;
      uint64_t COE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRAWF:1;
      uint64_t ALRBWF:1;
      uint64_t WUTWF:1;
      uint64_t SHPF:1;
      uint64_t INITS:1;
      uint64_t RSF:1;
      uint64_t INITF:1;
      uint64_t INIT:1;
      uint64_t ALRAF:1;
      uint64_t ALRBF:1;
      uint64_t WUTF:1;
      uint64_t TSF:1;
      uint64_t TSOVF:1;
      uint64_t TAMP1F:1;
      uint64_t TAMP2F:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV_S:16;
      uint64_t PREDIV_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WUTR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t MSK1:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSK2:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
      uint64_t MSK3:1;
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t WDSEL:1;
      uint64_t MSK4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t MSK1:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t MSK2:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
      uint64_t MSK3:1;
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t WDSEL:1;
      uint64_t MSK4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUBFS:15;
      uint64_t reservedSpace0:16;
      uint64_t ADD1S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHIFTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SU:4;
      uint64_t ST:3;
      uint64_t reservedSpace0:1;
      uint64_t MNU:4;
      uint64_t MNT:3;
      uint64_t reservedSpace1:1;
      uint64_t HU:4;
      uint64_t HT:2;
      uint64_t PM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DU:4;
      uint64_t DT:2;
      uint64_t reservedSpace0:2;
      uint64_t MU:4;
      uint64_t MT:1;
      uint64_t WDU:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALM:9;
      uint64_t reservedSpace0:4;
      uint64_t CALW16:1;
      uint64_t CALW8:1;
      uint64_t CALP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAMP1E:1;
      uint64_t TAMP1TRG:1;
      uint64_t TAMPIE:1;
      uint64_t TAMP2E:1;
      uint64_t TAMP2_TRG:1;
      uint64_t reservedSpace0:2;
      uint64_t TAMPTS:1;
      uint64_t TAMPFREQ:3;
      uint64_t TAMPFLT:2;
      uint64_t TAMPPRCH:2;
      uint64_t TAMPPUDIS:1;
      uint64_t TAMP1IE:1;
      uint64_t TAMP1NOERASE:1;
      uint64_t TAMP1MF:1;
      uint64_t TAMP2IE:1;
      uint64_t TAMP2NOERASE:1;
      uint64_t TAMP2MF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAMPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMASSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SS:15;
      uint64_t reservedSpace0:9;
      uint64_t MASKSS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRMBSSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC_ALARM_TYPE:1;
      uint64_t RTC_OUT_RMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP4R;

};

#define RTC_1 (*(volatile struct RTC_1_tag *) 0x40002800)

struct USART1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

};

#define USART1_1 (*(volatile struct USART1_1_tag *) 0x40013800)

struct USART2_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
      uint64_t M1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD0:1;
      uint64_t ABRMOD1:1;
      uint64_t RTOEN:1;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t IREN:1;
      uint64_t IRLP:1;
      uint64_t HDSEL:1;
      uint64_t NACK:1;
      uint64_t SCEN:1;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t ONEBIT:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace0:1;
      uint64_t SCARCNT:3;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIV_Fraction:4;
      uint64_t DIV_Mantissa:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTO:24;
      uint64_t BLEN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABRRQ:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
      uint64_t TXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBDF:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t RTOF:1;
      uint64_t EOBF:1;
      uint64_t reservedSpace0:1;
      uint64_t ABRE:1;
      uint64_t ABRF:1;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:1;
      uint64_t LBDCF:1;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:1;
      uint64_t RTOCF:1;
      uint64_t EOBCF:1;
      uint64_t reservedSpace3:4;
      uint64_t CMCF:1;
      uint64_t reservedSpace4:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

};

#define USART2_1 (*(volatile struct USART2_1_tag *) 0x40004400)

struct TSC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSCE:1;
      uint64_t START:1;
      uint64_t AM:1;
      uint64_t SYNCPOL:1;
      uint64_t IODEF:1;
      uint64_t MCV:3;
      uint64_t reservedSpace0:4;
      uint64_t PGPSC:3;
      uint64_t SSPSC:1;
      uint64_t SSE:1;
      uint64_t SSD:7;
      uint64_t CTPL:4;
      uint64_t CTPH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAIE:1;
      uint64_t MCEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAIC:1;
      uint64_t MCEIC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOAF:1;
      uint64_t MCEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOHCR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOASCR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOSCR;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_IO1:1;
      uint64_t G1_IO2:1;
      uint64_t G1_IO3:1;
      uint64_t G1_IO4:1;
      uint64_t G2_IO1:1;
      uint64_t G2_IO2:1;
      uint64_t G2_IO3:1;
      uint64_t G2_IO4:1;
      uint64_t G3_IO1:1;
      uint64_t G3_IO2:1;
      uint64_t G3_IO3:1;
      uint64_t G3_IO4:1;
      uint64_t G4_IO1:1;
      uint64_t G4_IO2:1;
      uint64_t G4_IO3:1;
      uint64_t G4_IO4:1;
      uint64_t G5_IO1:1;
      uint64_t G5_IO2:1;
      uint64_t G5_IO3:1;
      uint64_t G5_IO4:1;
      uint64_t G6_IO1:1;
      uint64_t G6_IO2:1;
      uint64_t G6_IO3:1;
      uint64_t G6_IO4:1;
      uint64_t G7_IO1:1;
      uint64_t G7_IO2:1;
      uint64_t G7_IO3:1;
      uint64_t G7_IO4:1;
      uint64_t G8_IO1:1;
      uint64_t G8_IO2:1;
      uint64_t G8_IO3:1;
      uint64_t G8_IO4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOCCR;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1E:1;
      uint64_t G2E:1;
      uint64_t G3E:1;
      uint64_t G4E:1;
      uint64_t G5E:1;
      uint64_t G6E:1;
      uint64_t G7E:1;
      uint64_t G8E:1;
      uint64_t reservedSpace0:8;
      uint64_t G1S:1;
      uint64_t G2S:1;
      uint64_t G3S:1;
      uint64_t G4S:1;
      uint64_t G5S:1;
      uint64_t G6S:1;
      uint64_t G7S:1;
      uint64_t G8S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOGCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG3CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG4CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG5CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG6CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG7CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOG8CR;

};

#define TSC_1 (*(volatile struct TSC_1_tag *) 0x40024000)

struct IWDG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RL:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PVU:1;
      uint64_t RVU:1;
      uint64_t WVU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WIN:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WINR;

};

#define IWDG_1 (*(volatile struct IWDG_1_tag *) 0x40003000)

struct WWDG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t T:7;
      uint64_t WDGA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t W:7;
      uint64_t WDGTB0:1;
      uint64_t WDGTB1:1;
      uint64_t EWI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define WWDG_1 (*(volatile struct WWDG_1_tag *) 0x40002c00)

struct COMP_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t COMP1_INN_SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t COMP1_WM:1;
      uint64_t reservedSpace2:3;
      uint64_t COMP1_OUT_SEL:3;
      uint64_t COMP1_POLARITY:1;
      uint64_t reservedSpace3:14;
      uint64_t COMP1_VALUE:1;
      uint64_t COMP1_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP1_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP2_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t COMP2_SPEED:1;
      uint64_t COMP2_INN_SEL:3;
      uint64_t reservedSpace1:1;
      uint64_t COMP2_INP_SEL:3;
      uint64_t reservedSpace2:1;
      uint64_t COMP2_OUT_SEL:3;
      uint64_t COMP2_POLARITY:1;
      uint64_t reservedSpace3:14;
      uint64_t COMP2_VALUE:1;
      uint64_t COMP2_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COMP2_CSR;

};

#define COMP_1 (*(volatile struct COMP_1_tag *) 0x40010030)

struct USB_FS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP4R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP5R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP6R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EA:4;
      uint64_t STAT_TX:2;
      uint64_t DTOG_TX:1;
      uint64_t CTR_TX:1;
      uint64_t EP_KIND:1;
      uint64_t EPTYPE:2;
      uint64_t SETUP:1;
      uint64_t STAT_RX:2;
      uint64_t DTOG_RX:1;
      uint64_t CTR_RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EP7R;

  uint8_t res0[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRES:1;
      uint64_t PDWN:1;
      uint64_t LPMODE:1;
      uint64_t FSUSP:1;
      uint64_t RESUME:1;
      uint64_t L1RESUME:1;
      uint64_t reservedSpace0:1;
      uint64_t L1REQM:1;
      uint64_t ESOFM:1;
      uint64_t SOFM:1;
      uint64_t RESETM:1;
      uint64_t SUSPM:1;
      uint64_t WKUPM:1;
      uint64_t ERRM:1;
      uint64_t PMAOVRM:1;
      uint64_t CTRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_ID:4;
      uint64_t DIR:1;
      uint64_t reservedSpace0:2;
      uint64_t L1REQ:1;
      uint64_t ESOF:1;
      uint64_t SOF:1;
      uint64_t RESET:1;
      uint64_t SUSP:1;
      uint64_t WKUP:1;
      uint64_t ERR:1;
      uint64_t PMAOVR:1;
      uint64_t CTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FN:11;
      uint64_t LSOF:2;
      uint64_t LCK:1;
      uint64_t RXDM:1;
      uint64_t RXDP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FNR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:7;
      uint64_t EF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t BTABLE:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPMEN:1;
      uint64_t LPMACK:1;
      uint64_t reservedSpace0:1;
      uint64_t REMWAKE:1;
      uint64_t BESL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPMCSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BCDEN:1;
      uint64_t DCDEN:1;
      uint64_t PDEN:1;
      uint64_t SDEN:1;
      uint64_t DCDET:1;
      uint64_t PDET:1;
      uint64_t SDET:1;
      uint64_t PS2DET:1;
      uint64_t reservedSpace0:7;
      uint64_t DPPU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCDR;

};

#define USB_FS_1 (*(volatile struct USB_FS_1_tag *) 0x40005c00)

struct CRS_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKIE:1;
      uint64_t SYNCWARNIE:1;
      uint64_t ERRIE:1;
      uint64_t ESYNCIE:1;
      uint64_t reservedSpace0:1;
      uint64_t CEN:1;
      uint64_t AUTOTRIMEN:1;
      uint64_t SWSYNC:1;
      uint64_t TRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:16;
      uint64_t FELIM:8;
      uint64_t SYNCDIV:3;
      uint64_t reservedSpace0:1;
      uint64_t SYNCSRC:2;
      uint64_t reservedSpace1:1;
      uint64_t SYNCPOL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKF:1;
      uint64_t SYNCWARNF:1;
      uint64_t ERRF:1;
      uint64_t ESYNCF:1;
      uint64_t reservedSpace0:4;
      uint64_t SYNCERR:1;
      uint64_t SYNCMISS:1;
      uint64_t TRIMOVF:1;
      uint64_t reservedSpace1:4;
      uint64_t FEDIR:1;
      uint64_t FECAP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCOKC:1;
      uint64_t SYNCWARNC:1;
      uint64_t ERRC:1;
      uint64_t ESYNCC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

};

#define CRS_1 (*(volatile struct CRS_1_tag *) 0x40006c00)

struct Firewall_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_CSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LENG:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_CSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t ADD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_NVDSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LENG:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_NVDSL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t ADD:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_VDSSA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t LENG:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_VDSL;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FPA:1;
      uint64_t VDS:1;
      uint64_t VDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIREWALL_CR;

};

#define Firewall_1 (*(volatile struct Firewall_1_tag *) 0x40011c00)

struct RCC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI16ON:1;
      uint64_t HSI16KERON:1;
      uint64_t HSI16RDYF:1;
      uint64_t HSI16DIVEN:1;
      uint64_t HSI16DIVF:1;
      uint64_t reservedSpace0:3;
      uint64_t MSION:1;
      uint64_t MSIRDY:1;
      uint64_t reservedSpace1:6;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSLSEON:1;
      uint64_t RTCPRE:2;
      uint64_t reservedSpace2:2;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI16CAL:8;
      uint64_t HSI16TRIM:5;
      uint64_t MSIRANGE:3;
      uint64_t MSICAL:8;
      uint64_t MSITRIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI48ON:1;
      uint64_t HSI48RDY:1;
      uint64_t reservedSpace0:6;
      uint64_t HSI48CAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:2;
      uint64_t SWS:2;
      uint64_t HPRE:4;
      uint64_t PPRE1:3;
      uint64_t PPRE2:3;
      uint64_t reservedSpace0:1;
      uint64_t STOPWUCK:1;
      uint64_t PLLSRC:1;
      uint64_t reservedSpace1:1;
      uint64_t PLLMUL:4;
      uint64_t PLLDIV:2;
      uint64_t MCOSEL:3;
      uint64_t reservedSpace2:1;
      uint64_t MCOPRE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSI16RDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t MSIRDYIE:1;
      uint64_t HSI48RDYIE:1;
      uint64_t CSSLSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSI16RDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t MSIRDYF:1;
      uint64_t HSI48RDYF:1;
      uint64_t CSSLSEF:1;
      uint64_t CSSHSEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSI16RDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t MSIRDYC:1;
      uint64_t HSI48RDYC:1;
      uint64_t CSSLSEC:1;
      uint64_t CSSHSEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOPARST:1;
      uint64_t IOPBRST:1;
      uint64_t IOPCRST:1;
      uint64_t IOPDRST:1;
      uint64_t reservedSpace0:3;
      uint64_t IOPHRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMARST:1;
      uint64_t reservedSpace0:7;
      uint64_t MIFRST:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCRST:1;
      uint64_t reservedSpace2:3;
      uint64_t TOUCHRST:1;
      uint64_t reservedSpace3:3;
      uint64_t RNGRST:1;
      uint64_t reservedSpace4:3;
      uint64_t CRYPRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace0:1;
      uint64_t TIM21RST:1;
      uint64_t reservedSpace1:2;
      uint64_t TM12RST:1;
      uint64_t reservedSpace2:3;
      uint64_t ADCRST:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI1RST:1;
      uint64_t reservedSpace4:1;
      uint64_t USART1RST:1;
      uint64_t reservedSpace5:7;
      uint64_t DBGRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t reservedSpace0:3;
      uint64_t TIM6RST:1;
      uint64_t reservedSpace1:4;
      uint64_t LCDRST:1;
      uint64_t reservedSpace2:1;
      uint64_t WWDRST:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2RST:1;
      uint64_t reservedSpace4:2;
      uint64_t LPUART12RST:1;
      uint64_t LPUART1RST:1;
      uint64_t reservedSpace5:2;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t USBRST:1;
      uint64_t reservedSpace6:3;
      uint64_t CRSRST:1;
      uint64_t PWRRST:1;
      uint64_t DACRST:1;
      uint64_t reservedSpace7:1;
      uint64_t LPTIM1RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOPAEN:1;
      uint64_t IOPBEN:1;
      uint64_t IOPCEN:1;
      uint64_t IOPDEN:1;
      uint64_t reservedSpace0:3;
      uint64_t IOPHEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:7;
      uint64_t MIFEN:1;
      uint64_t reservedSpace1:3;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TOUCHEN:1;
      uint64_t reservedSpace3:3;
      uint64_t RNGEN:1;
      uint64_t reservedSpace4:3;
      uint64_t CRYPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace0:1;
      uint64_t TIM21EN:1;
      uint64_t reservedSpace1:2;
      uint64_t TIM22EN:1;
      uint64_t reservedSpace2:1;
      uint64_t MIFIEN:1;
      uint64_t reservedSpace3:1;
      uint64_t ADCEN:1;
      uint64_t reservedSpace4:2;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace5:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace6:7;
      uint64_t DBGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t reservedSpace0:3;
      uint64_t TIM6EN:1;
      uint64_t reservedSpace1:4;
      uint64_t LCDEN:1;
      uint64_t reservedSpace2:1;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2EN:1;
      uint64_t LPUART1EN:1;
      uint64_t reservedSpace5:2;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t USBEN:1;
      uint64_t reservedSpace6:3;
      uint64_t CRSEN:1;
      uint64_t PWREN:1;
      uint64_t DACEN:1;
      uint64_t reservedSpace7:1;
      uint64_t LPTIM1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOPASMEN:1;
      uint64_t IOPBSMEN:1;
      uint64_t IOPCSMEN:1;
      uint64_t IOPDSMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t IOPHSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPSMEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMASMEN:1;
      uint64_t reservedSpace0:7;
      uint64_t MIFSMEN:1;
      uint64_t SRAMSMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t CRCSMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t TOUCHSMEN:1;
      uint64_t reservedSpace3:3;
      uint64_t RNGSMEN:1;
      uint64_t reservedSpace4:3;
      uint64_t CRYPSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBSMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGSMEN:1;
      uint64_t reservedSpace0:1;
      uint64_t TIM21SMEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TIM22SMEN:1;
      uint64_t reservedSpace2:3;
      uint64_t ADCSMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI1SMEN:1;
      uint64_t reservedSpace4:1;
      uint64_t USART1SMEN:1;
      uint64_t reservedSpace5:7;
      uint64_t DBGSMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2SMEN:1;
      uint64_t reservedSpace0:3;
      uint64_t TIM6SMEN:1;
      uint64_t reservedSpace1:4;
      uint64_t LCDSMEN:1;
      uint64_t reservedSpace2:1;
      uint64_t WWDGSMEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2SMEN:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2SMEN:1;
      uint64_t LPUART1SMEN:1;
      uint64_t reservedSpace5:2;
      uint64_t I2C1SMEN:1;
      uint64_t I2C2SMEN:1;
      uint64_t USBSMEN:1;
      uint64_t reservedSpace6:3;
      uint64_t CRSSMEN:1;
      uint64_t PWRSMEN:1;
      uint64_t DACSMEN:1;
      uint64_t reservedSpace7:1;
      uint64_t LPTIM1SMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1SMENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART1SEL0:1;
      uint64_t USART1SEL1:1;
      uint64_t USART2SEL0:1;
      uint64_t USART2SEL1:1;
      uint64_t reservedSpace0:6;
      uint64_t LPUART1SEL0:1;
      uint64_t LPUART1SEL1:1;
      uint64_t I2C1SEL0:1;
      uint64_t I2C1SEL1:1;
      uint64_t reservedSpace1:4;
      uint64_t LPTIM1SEL0:1;
      uint64_t LPTIM1SEL1:1;
      uint64_t reservedSpace2:6;
      uint64_t HSI48MSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCIPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:6;
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t LSEDRV:2;
      uint64_t CSSLSEON:1;
      uint64_t CSSLSED:1;
      uint64_t reservedSpace1:1;
      uint64_t RTCSEL:2;
      uint64_t RTCEN:1;
      uint64_t RTCRST:1;
      uint64_t reservedSpace2:4;
      uint64_t RMVF:1;
      uint64_t OBLRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define RCC_1 (*(volatile struct RCC_1_tag *) 0x40021000)

struct SYSCFG_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEM_MODE:2;
      uint64_t reservedSpace0:6;
      uint64_t BOOT_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FWDISEN:1;
      uint64_t CAPA:3;
      uint64_t reservedSpace0:4;
      uint64_t I2C_PB6_FMP:1;
      uint64_t I2C_PB7_FMP:1;
      uint64_t I2C_PB8_FMP:1;
      uint64_t I2C_PB9_FMP:1;
      uint64_t I2C1_FMP:1;
      uint64_t I2C2_FMP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI0:4;
      uint64_t EXTI1:4;
      uint64_t EXTI2:4;
      uint64_t EXTI3:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI4:4;
      uint64_t EXTI5:4;
      uint64_t EXTI6:4;
      uint64_t EXTI7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI8:4;
      uint64_t EXTI9:4;
      uint64_t EXTI10:4;
      uint64_t EXTI11:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXTI12:4;
      uint64_t EXTI13:4;
      uint64_t EXTI14:4;
      uint64_t EXTI15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EXTICR4;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN_BGAP:1;
      uint64_t reservedSpace0:3;
      uint64_t SEL_VREF_OUT:2;
      uint64_t reservedSpace1:2;
      uint64_t ENBUF_BGAP_ADC:1;
      uint64_t ENBUF_SENSOR_ADC:1;
      uint64_t reservedSpace2:2;
      uint64_t ENBUF_VREFINT_COMP:1;
      uint64_t ENREF_RC48MHz:1;
      uint64_t reservedSpace3:12;
      uint64_t REF_RC48MHz_RDYF:1;
      uint64_t SENSOR_ADC_RDYF:1;
      uint64_t VREFINT_ADC_RDYF:1;
      uint64_t VREFINT_COMP_RDYF:1;
      uint64_t VREFINT_RDYF:1;
      uint64_t REF_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR3;

};

#define SYSCFG_1 (*(volatile struct SYSCFG_1_tag *) 0x40010000)

struct SPI1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI1_1 (*(volatile struct SPI1_1_tag *) 0x40013000)

struct SPI2_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t MSTR:1;
      uint64_t BR:3;
      uint64_t SPE:1;
      uint64_t LSBFIRST:1;
      uint64_t SSI:1;
      uint64_t SSM:1;
      uint64_t RXONLY:1;
      uint64_t DFF:1;
      uint64_t CRCNEXT:1;
      uint64_t CRCEN:1;
      uint64_t BIDIOE:1;
      uint64_t BIDIMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
      uint64_t SSOE:1;
      uint64_t reservedSpace0:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXNE:1;
      uint64_t TXE:1;
      uint64_t CHSIDE:1;
      uint64_t UDR:1;
      uint64_t CRCERR:1;
      uint64_t MODF:1;
      uint64_t OVR:1;
      uint64_t BSY:1;
      uint64_t TIFRFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRCPOLY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxCRC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHLEN:1;
      uint64_t DATLEN:2;
      uint64_t CKPOL:1;
      uint64_t I2SSTD:2;
      uint64_t reservedSpace0:1;
      uint64_t PCMSYNC:1;
      uint64_t I2SCFG:2;
      uint64_t I2SE:1;
      uint64_t I2SMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SCFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2SDIV:8;
      uint64_t ODD:1;
      uint64_t MCKOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2SPR;

};

#define SPI2_1 (*(volatile struct SPI2_1_tag *) 0x40003800)

struct I2C1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C1_1 (*(volatile struct I2C1_1_tag *) 0x40005400)

struct I2C2_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t ADDRIE:1;
      uint64_t NACKIE:1;
      uint64_t STOPIE:1;
      uint64_t TCIE:1;
      uint64_t ERRIE:1;
      uint64_t DNF:4;
      uint64_t ANFOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t TXDMAEN:1;
      uint64_t RXDMAEN:1;
      uint64_t SBC:1;
      uint64_t NOSTRETCH:1;
      uint64_t WUPEN:1;
      uint64_t GCEN:1;
      uint64_t SMBHEN:1;
      uint64_t SMBDEN:1;
      uint64_t ALERTEN:1;
      uint64_t PECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SADD:10;
      uint64_t RD_WRN:1;
      uint64_t ADD10:1;
      uint64_t HEAD10R:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t NACK:1;
      uint64_t NBYTES:8;
      uint64_t RELOAD:1;
      uint64_t AUTOEND:1;
      uint64_t PECBYTE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OA1:10;
      uint64_t OA1MODE:1;
      uint64_t reservedSpace0:4;
      uint64_t OA1EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t OA2:7;
      uint64_t OA2MSK:3;
      uint64_t reservedSpace1:4;
      uint64_t OA2EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCLL:8;
      uint64_t SCLH:8;
      uint64_t SDADEL:4;
      uint64_t SCLDEL:4;
      uint64_t reservedSpace0:4;
      uint64_t PRESC:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMINGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMEOUTA:12;
      uint64_t TIDLE:1;
      uint64_t reservedSpace0:2;
      uint64_t TIMOUTEN:1;
      uint64_t TIMEOUTB:12;
      uint64_t reservedSpace1:3;
      uint64_t TEXTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TIMEOUTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXE:1;
      uint64_t TXIS:1;
      uint64_t RXNE:1;
      uint64_t ADDR:1;
      uint64_t NACKF:1;
      uint64_t STOPF:1;
      uint64_t TC:1;
      uint64_t TCR:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t TIMEOUT:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace0:1;
      uint64_t BUSY:1;
      uint64_t DIR:1;
      uint64_t ADDCODE:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRCF:1;
      uint64_t NACKCF:1;
      uint64_t STOPCF:1;
      uint64_t reservedSpace1:2;
      uint64_t BERRCF:1;
      uint64_t ARLOCF:1;
      uint64_t OVRCF:1;
      uint64_t PECCF:1;
      uint64_t TIMOUTCF:1;
      uint64_t ALERTCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

};

#define I2C2_1 (*(volatile struct I2C2_1_tag *) 0x40005800)

struct PWR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LPDS:1;
      uint64_t PDDS:1;
      uint64_t CWUF:1;
      uint64_t CSBF:1;
      uint64_t PVDE:1;
      uint64_t PLS:3;
      uint64_t DBP:1;
      uint64_t FPDS:1;
      uint64_t FWU:1;
      uint64_t VOS:2;
      uint64_t DS_EE_KOFF:1;
      uint64_t LPRUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WUF:1;
      uint64_t SBF:1;
      uint64_t PVDO:1;
      uint64_t BRR:1;
      uint64_t VOSF:1;
      uint64_t REGLPF:1;
      uint64_t reservedSpace0:2;
      uint64_t EWUP:1;
      uint64_t BRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define PWR_1 (*(volatile struct PWR_1_tag *) 0x40007000)

struct Flash_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:1;
      uint64_t PRFTEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SLEEP_PD:1;
      uint64_t RUN_PD:1;
      uint64_t DESAB_BUF:1;
      uint64_t PRE_READ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PELOCK:1;
      uint64_t PRGLOCK:1;
      uint64_t OPTLOCK:1;
      uint64_t PROG:1;
      uint64_t DATA:1;
      uint64_t reservedSpace0:3;
      uint64_t FTDW:1;
      uint64_t ERASE:1;
      uint64_t FPRG:1;
      uint64_t reservedSpace1:4;
      uint64_t PARALLELBANK:1;
      uint64_t EOPIE:1;
      uint64_t ERRIE:1;
      uint64_t OBL_LAUNCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PDKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PDKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRGKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRGKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:1;
      uint64_t EOP:1;
      uint64_t ENDHV:1;
      uint64_t READY:1;
      uint64_t reservedSpace0:4;
      uint64_t WRPERR:1;
      uint64_t PGAERR:1;
      uint64_t SIZERR:1;
      uint64_t OPTVERR:1;
      uint64_t reservedSpace1:2;
      uint64_t RDERR:1;
      uint64_t reservedSpace2:1;
      uint64_t NOTZEROERR:1;
      uint64_t FWWERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDPRT:8;
      uint64_t SPRMOD:1;
      uint64_t reservedSpace0:7;
      uint64_t BOR_LEV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRPR;

};

#define Flash_1 (*(volatile struct Flash_1_tag *) 0x40022000)

struct EXTI_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0:1;
      uint64_t MR1:1;
      uint64_t MR2:1;
      uint64_t MR3:1;
      uint64_t MR4:1;
      uint64_t MR5:1;
      uint64_t MR6:1;
      uint64_t MR7:1;
      uint64_t MR8:1;
      uint64_t MR9:1;
      uint64_t MR10:1;
      uint64_t MR11:1;
      uint64_t MR12:1;
      uint64_t MR13:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t reservedSpace0:1;
      uint64_t MR19:1;
      uint64_t reservedSpace1:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t reservedSpace2:1;
      uint64_t MR25:1;
      uint64_t reservedSpace3:1;
      uint64_t MR27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MR0:1;
      uint64_t MR1:1;
      uint64_t MR2:1;
      uint64_t MR3:1;
      uint64_t MR4:1;
      uint64_t MR5:1;
      uint64_t MR6:1;
      uint64_t MR7:1;
      uint64_t MR8:1;
      uint64_t MR9:1;
      uint64_t MR10:1;
      uint64_t MR11:1;
      uint64_t MR12:1;
      uint64_t MR13:1;
      uint64_t MR14:1;
      uint64_t MR15:1;
      uint64_t MR16:1;
      uint64_t MR17:1;
      uint64_t reservedSpace0:1;
      uint64_t MR19:1;
      uint64_t reservedSpace1:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t reservedSpace2:1;
      uint64_t MR25:1;
      uint64_t reservedSpace3:1;
      uint64_t MR27:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR0:1;
      uint64_t TR1:1;
      uint64_t TR2:1;
      uint64_t TR3:1;
      uint64_t TR4:1;
      uint64_t TR5:1;
      uint64_t TR6:1;
      uint64_t TR7:1;
      uint64_t TR8:1;
      uint64_t TR9:1;
      uint64_t TR10:1;
      uint64_t TR11:1;
      uint64_t TR12:1;
      uint64_t TR13:1;
      uint64_t TR14:1;
      uint64_t TR15:1;
      uint64_t TR16:1;
      uint64_t TR17:1;
      uint64_t reservedSpace0:1;
      uint64_t TR19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR0:1;
      uint64_t TR1:1;
      uint64_t TR2:1;
      uint64_t TR3:1;
      uint64_t TR4:1;
      uint64_t TR5:1;
      uint64_t TR6:1;
      uint64_t TR7:1;
      uint64_t TR8:1;
      uint64_t TR9:1;
      uint64_t TR10:1;
      uint64_t TR11:1;
      uint64_t TR12:1;
      uint64_t TR13:1;
      uint64_t TR14:1;
      uint64_t TR15:1;
      uint64_t TR16:1;
      uint64_t TR17:1;
      uint64_t reservedSpace0:1;
      uint64_t TR19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWIER0:1;
      uint64_t SWIER1:1;
      uint64_t SWIER2:1;
      uint64_t SWIER3:1;
      uint64_t SWIER4:1;
      uint64_t SWIER5:1;
      uint64_t SWIER6:1;
      uint64_t SWIER7:1;
      uint64_t SWIER8:1;
      uint64_t SWIER9:1;
      uint64_t SWIER10:1;
      uint64_t SWIER11:1;
      uint64_t SWIER12:1;
      uint64_t SWIER13:1;
      uint64_t SWIER14:1;
      uint64_t SWIER15:1;
      uint64_t SWIER16:1;
      uint64_t SWIER17:1;
      uint64_t reservedSpace0:1;
      uint64_t SWIER19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PR0:1;
      uint64_t PR1:1;
      uint64_t PR2:1;
      uint64_t PR3:1;
      uint64_t PR4:1;
      uint64_t PR5:1;
      uint64_t PR6:1;
      uint64_t PR7:1;
      uint64_t PR8:1;
      uint64_t PR9:1;
      uint64_t PR10:1;
      uint64_t PR11:1;
      uint64_t PR12:1;
      uint64_t PR13:1;
      uint64_t PR14:1;
      uint64_t PR15:1;
      uint64_t PR16:1;
      uint64_t PR17:1;
      uint64_t reservedSpace0:1;
      uint64_t PR19:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define EXTI_1 (*(volatile struct EXTI_1_tag *) 0x40010400)

struct ADC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDY:1;
      uint64_t EOSMP:1;
      uint64_t EOC:1;
      uint64_t EOS:1;
      uint64_t OVR:1;
      uint64_t reservedSpace0:2;
      uint64_t AWD:1;
      uint64_t reservedSpace1:3;
      uint64_t EOCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADRDYIE:1;
      uint64_t EOSMPIE:1;
      uint64_t EOCIE:1;
      uint64_t EOSIE:1;
      uint64_t OVRIE:1;
      uint64_t reservedSpace0:2;
      uint64_t AWDIE:1;
      uint64_t reservedSpace1:3;
      uint64_t EOCALIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEN:1;
      uint64_t ADDIS:1;
      uint64_t ADSTART:1;
      uint64_t reservedSpace0:1;
      uint64_t ADSTP:1;
      uint64_t reservedSpace1:23;
      uint64_t ADVREGEN:1;
      uint64_t reservedSpace2:2;
      uint64_t ADCAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t DMACFG:1;
      uint64_t SCANDIR:1;
      uint64_t RES:2;
      uint64_t ALIGN:1;
      uint64_t EXTSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t EXTEN:2;
      uint64_t OVRMOD:1;
      uint64_t CONT:1;
      uint64_t AUTDLY:1;
      uint64_t AUTOFF:1;
      uint64_t DISCEN:1;
      uint64_t reservedSpace1:5;
      uint64_t AWDSGL:1;
      uint64_t AWDEN:1;
      uint64_t reservedSpace2:2;
      uint64_t AWDCH:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVSE:1;
      uint64_t reservedSpace0:1;
      uint64_t OVSR:3;
      uint64_t OVSS:4;
      uint64_t TOVS:1;
      uint64_t reservedSpace1:20;
      uint64_t CKMODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMPR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
      uint64_t reservedSpace0:4;
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHSEL0:1;
      uint64_t CHSEL1:1;
      uint64_t CHSEL2:1;
      uint64_t CHSEL3:1;
      uint64_t CHSEL4:1;
      uint64_t CHSEL5:1;
      uint64_t CHSEL6:1;
      uint64_t CHSEL7:1;
      uint64_t CHSEL8:1;
      uint64_t CHSEL9:1;
      uint64_t CHSEL10:1;
      uint64_t CHSEL11:1;
      uint64_t CHSEL12:1;
      uint64_t CHSEL13:1;
      uint64_t CHSEL14:1;
      uint64_t CHSEL15:1;
      uint64_t CHSEL16:1;
      uint64_t CHSEL17:1;
      uint64_t CHSEL18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHSELR;

  uint8_t res2[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  uint8_t res3[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CALFACT:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CALFACT;

  uint8_t res4[592];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:18;
      uint64_t PRESC:4;
      uint64_t VREFEN:1;
      uint64_t TSEN:1;
      uint64_t VLCDEN:1;
      uint64_t LFMEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

};

#define ADC_1 (*(volatile struct ADC_1_tag *) 0x40012400)

struct DBGMCU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ID:12;
      uint64_t reservedSpace0:4;
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_SLEEP:1;
      uint64_t DBG_STOP:1;
      uint64_t DBG_STANDBY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBG_TIMER2_STOP:1;
      uint64_t reservedSpace0:3;
      uint64_t DBG_TIMER6_STOP:1;
      uint64_t reservedSpace1:5;
      uint64_t DBG_RTC_STOP:1;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_IWDG_STOP:1;
      uint64_t reservedSpace2:8;
      uint64_t DBG_I2C1_STOP:1;
      uint64_t DBG_I2C2_STOP:1;
      uint64_t reservedSpace3:8;
      uint64_t DBG_LPTIMER_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1_FZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DBG_TIMER21_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t DBG_TIMER22_STO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2_FZ;

};

#define DBGMCU_1 (*(volatile struct DBGMCU_1_tag *) 0x40015800)

struct TIM6_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CEN:1;
      uint64_t UDIS:1;
      uint64_t URS:1;
      uint64_t OPM:1;
      uint64_t reservedSpace0:3;
      uint64_t ARPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t MMS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIE:1;
      uint64_t reservedSpace0:7;
      uint64_t UDE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EGR;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ARR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARR;

};

#define TIM6_1 (*(volatile struct TIM6_1_tag *) 0x40001000)

struct LPUSART1_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t UE:1;
      uint64_t UESM:1;
      uint64_t RE:1;
      uint64_t TE:1;
      uint64_t IDLEIE:1;
      uint64_t RXNEIE:1;
      uint64_t TCIE:1;
      uint64_t TXEIE:1;
      uint64_t PEIE:1;
      uint64_t PS:1;
      uint64_t PCE:1;
      uint64_t WAKE:1;
      uint64_t M0:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DEDT0:1;
      uint64_t DEDT1:1;
      uint64_t DEDT2:1;
      uint64_t DEDT3:1;
      uint64_t DEDT4:1;
      uint64_t DEAT0:1;
      uint64_t DEAT1:1;
      uint64_t DEAT2:1;
      uint64_t DEAT3:1;
      uint64_t DEAT4:1;
      uint64_t reservedSpace1:2;
      uint64_t M1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t ADDM7:1;
      uint64_t reservedSpace1:6;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t reservedSpace2:1;
      uint64_t SWAP:1;
      uint64_t RXINV:1;
      uint64_t TXINV:1;
      uint64_t TAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t reservedSpace3:4;
      uint64_t ADD0_3:4;
      uint64_t ADD4_7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIE:1;
      uint64_t reservedSpace0:2;
      uint64_t HDSEL:1;
      uint64_t reservedSpace1:2;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
      uint64_t RTSE:1;
      uint64_t CTSE:1;
      uint64_t CTSIE:1;
      uint64_t reservedSpace2:1;
      uint64_t OVRDIS:1;
      uint64_t DDRE:1;
      uint64_t DEM:1;
      uint64_t DEP:1;
      uint64_t reservedSpace3:4;
      uint64_t WUS:2;
      uint64_t WUFIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRR:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BRR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t SBKRQ:1;
      uint64_t MMRQ:1;
      uint64_t RXFRQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NF:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t reservedSpace0:1;
      uint64_t CTSIF:1;
      uint64_t CTS:1;
      uint64_t reservedSpace1:5;
      uint64_t BUSY:1;
      uint64_t CMF:1;
      uint64_t SBKF:1;
      uint64_t RWU:1;
      uint64_t WUF:1;
      uint64_t TEACK:1;
      uint64_t REACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PECF:1;
      uint64_t FECF:1;
      uint64_t NCF:1;
      uint64_t ORECF:1;
      uint64_t IDLECF:1;
      uint64_t reservedSpace0:1;
      uint64_t TCCF:1;
      uint64_t reservedSpace1:2;
      uint64_t CTSCF:1;
      uint64_t reservedSpace2:7;
      uint64_t CMCF:1;
      uint64_t reservedSpace3:2;
      uint64_t WUCF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TDR;

};

#define LPUSART1_1 (*(volatile struct LPUSART1_1_tag *) 0x40004800)

struct NVIC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER;

  uint8_t res0[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER;

  uint8_t res1[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR;

  uint8_t res2[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR;

  uint8_t res3[380];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_0:8;
      uint64_t PRI_1:8;
      uint64_t PRI_2:8;
      uint64_t PRI_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
      uint64_t PRI_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_8:8;
      uint64_t PRI_9:8;
      uint64_t PRI_10:8;
      uint64_t PRI_11:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_12:8;
      uint64_t PRI_13:8;
      uint64_t PRI_14:8;
      uint64_t PRI_15:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_16:8;
      uint64_t PRI_17:8;
      uint64_t PRI_18:8;
      uint64_t PRI_19:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_20:8;
      uint64_t PRI_21:8;
      uint64_t PRI_22:8;
      uint64_t PRI_23:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_24:8;
      uint64_t PRI_25:8;
      uint64_t PRI_26:8;
      uint64_t PRI_27:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_28:8;
      uint64_t PRI_29:8;
      uint64_t PRI_30:8;
      uint64_t PRI_31:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

};

#define NVIC_1 (*(volatile struct NVIC_1_tag *) 0xe000e100)

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

struct TCRAMW_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECC_0:4;
      uint64_t reservedSpace0:4;
      uint64_t ECC_1:1;
      uint64_t reservedSpace1:7;
      uint64_t ADDR_0:4;
      uint64_t reservedSpace2:4;
      uint64_t ADDR_1:4;
      uint64_t reservedSpace3:2;
      uint64_t EMU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t THRESHOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMTHRESHOLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINGLE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMOCCUR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMINTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SERR:1;
      uint64_t reservedSpace0:1;
      uint64_t ADDR_0:1;
      uint64_t reservedSpace1:1;
      uint64_t ADDR_1:1;
      uint64_t DERR:1;
      uint64_t reservedSpace2:2;
      uint64_t RADDR:1;
      uint64_t WADDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMERRSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t SINGLE:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMSERRADDR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t UNCORRECTABLE:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMUERRADDR;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_0:4;
      uint64_t reservedSpace0:2;
      uint64_t TEST_1:2;
      uint64_t TRIGGER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMTEST;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM:16;
      uint64_t reservedSpace0:10;
      uint64_t ECC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMADDRDECVECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t ADDRESS:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMPERRADDR;

};

#define TCRAMW (*(volatile struct TCRAMW_tag *) 0xfffff800)

struct SYS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKFUN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKDIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKDOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKPUE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLKPS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC9;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSR_1_0OFF:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKSR_7_3OFF:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETCLKSR_1_0OFF:2;
      uint64_t reservedSpace0:1;
      uint64_t SETCLKSR_7_3OFF:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSDISSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRCLKSR_1_0OFF:2;
      uint64_t reservedSpace0:1;
      uint64_t CLRCLKSR_7_3OFF:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSDISCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCLKOFF:1;
      uint64_t HCLKOFF:1;
      uint64_t VCLKPOFF:1;
      uint64_t VCLK2OFF:1;
      uint64_t VCLKA1OFF:1;
      uint64_t VCLKA2OFF:1;
      uint64_t reservedSpace0:2;
      uint64_t VCLK3OFF:1;
      uint64_t reservedSpace1:1;
      uint64_t VCLKA3OFF:1;
      uint64_t VCLKA4OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETGCLKOFF:1;
      uint64_t SETHCLKOFF:1;
      uint64_t SETVCLKPOFF:1;
      uint64_t SETVCLK2OFF:1;
      uint64_t SETVCLKA1OFF:1;
      uint64_t SETVCLKA2OFF:1;
      uint64_t SETRTI1CLKOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t SETVCLK3OFF:1;
      uint64_t reservedSpace1:1;
      uint64_t SETVCLKA3OFF:1;
      uint64_t SETVCLKA4OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDDISSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRGCLKOFF:1;
      uint64_t CLRHCLKOFF:1;
      uint64_t CLRVCLKPOFF:1;
      uint64_t CLRVCLK2OFF:1;
      uint64_t CLRVCLKA1OFF:1;
      uint64_t CLRVCLKA2OFF:1;
      uint64_t CLRRTI1CLKOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t CLRVCLK3OFF:1;
      uint64_t reservedSpace1:1;
      uint64_t CLRVCLKA3OFF:1;
      uint64_t CLRVCLKA4OFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CDDISCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GHVSRC:4;
      uint64_t reservedSpace0:12;
      uint64_t HVLPM:4;
      uint64_t reservedSpace1:4;
      uint64_t GHVWAKE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GHVSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCLKA1S:4;
      uint64_t reservedSpace0:4;
      uint64_t VCLKA2S:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCLKASRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTI1SRC:4;
      uint64_t reservedSpace0:4;
      uint64_t RTI1DIV:2;
      uint64_t reservedSpace1:6;
      uint64_t RTI2SRC:4;
      uint64_t reservedSpace2:4;
      uint64_t RTI2DIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCLKSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKSR_1_0V:2;
      uint64_t reservedSpace0:1;
      uint64_t CLKSR_7_3V:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSVSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTGENA:4;
      uint64_t reservedSpace0:4;
      uint64_t ROM_DIV:2;
      uint64_t reservedSpace1:6;
      uint64_t MBIST_ALGSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTGCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MINITGENA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MINITGCR;

  uint32_t MSINENA;
  uint32_t MSTFAIL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSTDONE:1;
      uint64_t reservedSpace0:7;
      uint64_t MINIDONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MSTCGSTAT;

  uint32_t MINISTAT;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLMUL:16;
      uint64_t REFCLKDIV:6;
      uint64_t reservedSpace0:1;
      uint64_t ROF:1;
      uint64_t PLLDIV:5;
      uint64_t MASK_SLIP:2;
      uint64_t ROS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPR_AMOUNT:9;
      uint64_t ODPLL:3;
      uint64_t MULMOD:9;
      uint64_t reservedSpace0:1;
      uint64_t SPREADINGRATE:9;
      uint64_t FMENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPCLK_SLEW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t X:8;
      uint64_t Y:8;
      uint64_t WAFER:6;
      uint64_t LOT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEIDL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOT:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIEIDH;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFTRIM:4;
      uint64_t reservedSpace0:4;
      uint64_t HFTRIM:4;
      uint64_t reservedSpace1:4;
      uint64_t OSCFRQCONFIGCNT:1;
      uint64_t reservedSpace2:7;
      uint64_t BIAS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LPOMONCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_ECP_PIN:4;
      uint64_t reservedSpace0:4;
      uint64_t CLK_GIO_PIN:4;
      uint64_t reservedSpace1:4;
      uint64_t CLK_TEST_EN:4;
      uint64_t reservedSpace2:4;
      uint64_t RANGEDETENASSEL:4;
      uint64_t RANGEDETCTRL:4;
      uint64_t ALTLIMPCLOCKENABLE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKTEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_MODE_KEY:4;
      uint64_t reservedSpace0:4;
      uint64_t DFTREAD:2;
      uint64_t reservedSpace1:2;
      uint64_t DFTWRITE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFTCTRLREG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_MODE_KEY:4;
      uint64_t IMPDF_270:27;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFTCTRLREG2;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OUTPUT_BUFFER_LOW_EMI_MODE:16;
      uint64_t PLL1_RFSLIP_FILTER_KEY:4;
      uint64_t PLL1_FBSLIP_FILTER_COUNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG1;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATYPE:1;
      uint64_t reservedSpace0:7;
      uint64_t VBUSA:1;
      uint64_t NCBA:1;
      uint64_t EMIFA:1;
      uint64_t reservedSpace1:5;
      uint64_t MASTERID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IMPFASTS;

  uint32_t IMPFTADD;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDATA1:8;
      uint64_t SSKEY1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSIR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDATA2:8;
      uint64_t SSKEY2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSIR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDATA3:8;
      uint64_t SSKEY3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSIR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSDATA4:8;
      uint64_t SSKEY4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSIR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST_DENA0:1;
      uint64_t reservedSpace0:1;
      uint64_t WST_AENA0:1;
      uint64_t reservedSpace1:13;
      uint64_t RAM_DFT_EN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMGCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSW:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BMMCR1;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPURSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t PENA:1;
      uint64_t reservedSpace1:7;
      uint64_t VCLKR:4;
      uint64_t reservedSpace2:4;
      uint64_t VCLK2R:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCNTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECPDIV:16;
      uint64_t ECPINSEL:2;
      uint64_t reservedSpace0:5;
      uint64_t ECPCOS:1;
      uint64_t ECPSSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECPCNTL;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEVPARSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:14;
      uint64_t RESET0:1;
      uint64_t RESET1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPMODE:1;
      uint64_t reservedSpace0:2;
      uint64_t EXTRST:1;
      uint64_t SWRST:1;
      uint64_t CPURST:1;
      uint64_t reservedSpace1:7;
      uint64_t WDRST:1;
      uint64_t OSCRST:1;
      uint64_t PORST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFUSE_Abort:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSTASR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OSCFAIL:1;
      uint64_t reservedSpace0:7;
      uint64_t RFSLIP:1;
      uint64_t FBSLIP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GLBSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLATFORM:3;
      uint64_t VERSION:5;
      uint64_t RAM:1;
      uint64_t FLASH:2;
      uint64_t Peripheral_parity:1;
      uint64_t IO_VOLTAGE:1;
      uint64_t TECH:4;
      uint64_t UNIQUE:14;
      uint64_t CP15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEVID;

};

#define SYS (*(volatile struct SYS_tag *) 0xffffff00)

struct SYS2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLMUL2:16;
      uint64_t REFCLKDIV2:6;
      uint64_t reservedSpace0:2;
      uint64_t PLLDIV2:5;
      uint64_t ODPLL2:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTL3;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:24;
      uint64_t CLKDIV:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCLKDIV;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCLK3R:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK2CNTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VCLKA3S:4;
      uint64_t VCLKA3_DIV_CDDIS:1;
      uint64_t reservedSpace0:3;
      uint64_t VCLKA3R:3;
      uint64_t reservedSpace1:5;
      uint64_t VCLKA4S:4;
      uint64_t VCLKA4_DIV_CDDIS:1;
      uint64_t reservedSpace2:3;
      uint64_t VCLKA4R:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VCLKACON1;

  uint8_t res2[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL1_SLIP_FILTER_KEY:4;
      uint64_t reservedSpace0:4;
      uint64_t PLL1_SLIP_FILTER_COUNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSLIP;

  uint8_t res3[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EFC_INSTR_WEN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EFC_CTLREG;

  uint32_t DIEIDL_REG0;
  uint32_t DIEIDH_REG1;
  uint32_t DIEIDL_REG2;
  uint32_t DIEIDH_REG3;
};

#define SYS2 (*(volatile struct SYS2_tag *) 0xffffe100)

struct PCR_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPROTSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPROTSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTSET1;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPROTCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPROTCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMPROTCLR1;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0:4;
      uint64_t PCS1:4;
      uint64_t PCS2:4;
      uint64_t PCS3:4;
      uint64_t PCS4:4;
      uint64_t PCS5:4;
      uint64_t PCS6:4;
      uint64_t PCS7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS8:4;
      uint64_t PCS9:4;
      uint64_t PCS10:4;
      uint64_t PCS11:4;
      uint64_t PCS12:4;
      uint64_t PCS13:4;
      uint64_t PCS14:4;
      uint64_t PCS15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS16:4;
      uint64_t PCS17:4;
      uint64_t PCS18:4;
      uint64_t PCS19:4;
      uint64_t PCS20:4;
      uint64_t PCS21:4;
      uint64_t PCS22:4;
      uint64_t PCS23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS24:4;
      uint64_t PCS25:4;
      uint64_t PCS26:4;
      uint64_t PCS27:4;
      uint64_t PCS28:4;
      uint64_t PCS29:4;
      uint64_t PCS30:4;
      uint64_t PCS31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTSET3;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0:4;
      uint64_t PCS1:4;
      uint64_t PCS2:4;
      uint64_t PCS3:4;
      uint64_t PCS4:4;
      uint64_t PCS5:4;
      uint64_t PCS6:4;
      uint64_t PCS7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS8:4;
      uint64_t PCS9:4;
      uint64_t PCS10:4;
      uint64_t PCS11:4;
      uint64_t PCS12:4;
      uint64_t PCS13:4;
      uint64_t PCS14:4;
      uint64_t PCS15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS16:4;
      uint64_t PCS17:4;
      uint64_t PCS18:4;
      uint64_t PCS19:4;
      uint64_t PCS20:4;
      uint64_t PCS21:4;
      uint64_t PCS22:4;
      uint64_t PCS23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS24:4;
      uint64_t PCS25:4;
      uint64_t PCS26:4;
      uint64_t PCS27:4;
      uint64_t PCS28:4;
      uint64_t PCS29:4;
      uint64_t PCS30:4;
      uint64_t PCS31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PPROTCLR3;

  uint8_t res3[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPWRDNSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPWRDNSET:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNSET1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPWRDNCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCSPWRDNCLR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCSPWRDWNCLR1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0:4;
      uint64_t PCS1:4;
      uint64_t PCS2:4;
      uint64_t PCS3:4;
      uint64_t PCS4:4;
      uint64_t PCS5:4;
      uint64_t PCS6:4;
      uint64_t PCS7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS8:4;
      uint64_t PCS9:4;
      uint64_t PCS10:4;
      uint64_t PCS11:4;
      uint64_t PCS12:4;
      uint64_t PCS13:4;
      uint64_t PCS14:4;
      uint64_t PCS15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS16:4;
      uint64_t PCS17:4;
      uint64_t PCS18:4;
      uint64_t PCS19:4;
      uint64_t PCS20:4;
      uint64_t PCS21:4;
      uint64_t PCS22:4;
      uint64_t PCS23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS24:4;
      uint64_t PCS25:4;
      uint64_t PCS26:4;
      uint64_t PCS27:4;
      uint64_t PCS28:4;
      uint64_t PCS29:4;
      uint64_t PCS30:4;
      uint64_t PCS31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNSET3;

  uint8_t res6[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS0:4;
      uint64_t PCS1:4;
      uint64_t PCS2:4;
      uint64_t PCS3:4;
      uint64_t PCS4:4;
      uint64_t PCS5:4;
      uint64_t PCS6:4;
      uint64_t PCS7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS8:4;
      uint64_t PCS9:4;
      uint64_t PCS10:4;
      uint64_t PCS11:4;
      uint64_t PCS12:4;
      uint64_t PCS13:4;
      uint64_t PCS14:4;
      uint64_t PCS15:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS16:4;
      uint64_t PCS17:4;
      uint64_t PCS18:4;
      uint64_t PCS19:4;
      uint64_t PCS20:4;
      uint64_t PCS21:4;
      uint64_t PCS22:4;
      uint64_t PCS23:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCS24:4;
      uint64_t PCS25:4;
      uint64_t PCS26:4;
      uint64_t PCS27:4;
      uint64_t PCS28:4;
      uint64_t PCS29:4;
      uint64_t PCS30:4;
      uint64_t PCS31:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PSPWRDWNCLR3;

};

#define PCR (*(volatile struct PCR_tag *) 0xffffe000)

struct PBIST_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLS:2;
      uint64_t PLS:4;
      uint64_t SMS:2;
      uint64_t DWR:8;
      uint64_t RDS:8;
      uint64_t RGS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAMT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t DLR2:1;
      uint64_t reservedSpace1:1;
      uint64_t DLR4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLR;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACT0:1;
      uint64_t PACT1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBIST_bitfield:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBIST_register;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OVER;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSRF0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSRF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSRF1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSRF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSRC0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSRC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSRC1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSRC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSRA0:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSRA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSRA1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSRA1;

  uint32_t FSRDL0;
  uint8_t res2[4];

  uint32_t FSRDL1;
  uint8_t res3[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALGO0:8;
      uint64_t ALGO1:8;
      uint64_t ALGO2:8;
      uint64_t ALGO3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALGO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RINFOL0:8;
      uint64_t RINFOL1:8;
      uint64_t RINFOL2:8;
      uint64_t RINFOL3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RINFOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RINFOU0:8;
      uint64_t RINFOU1:8;
      uint64_t RINFOU2:8;
      uint64_t RINFOU3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RINFOU;

};

#define PBIST (*(volatile struct PBIST_tag *) 0xffffe560)

struct STC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS_CNT:1;
      uint64_t reservedSpace0:15;
      uint64_t INTCOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STC_ENA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCGCR1;

  uint32_t STCTPR;
  uint32_t STC_CADDR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t N:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCCICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEST_DONE:1;
      uint64_t TEST_FAIL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCGSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU1_FAIL:1;
      uint64_t CPU2_FAIL:1;
      uint64_t TO_ERR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STCFSTAT;

  uint8_t res0[16];

  uint32_t CPU1_CURMISR3;
  uint32_t CPU1_CURMISR2;
  uint32_t CPU1_CURMISR1;
  uint32_t CPU1_CURMISR0;
  uint32_t CPU2_CURMISR3;
  uint32_t CPU2_CURMISR2;
  uint32_t CPU2_CURMISR1;
  uint32_t CPU2_CURMISR0;
};

#define STC (*(volatile struct STC_tag *) 0xffffe600)

struct PLL_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLMUL:16;
      uint64_t REFCLKDIV:6;
      uint64_t reservedSpace0:2;
      uint64_t PLLDIV:4;
      uint64_t reservedSpace1:1;
      uint64_t ODPLL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTL3;

  uint8_t res0[108];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLL1_RFSLIP_FILTER_KEY:4;
      uint64_t reservedSpace0:4;
      uint64_t PLL1_RFSLIP_FILTER_COUNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKSLIP;

  uint8_t res1[7600];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EXT_COUNTER_EN:1;
      uint64_t TAP_COUNTER_DIS:3;
      uint64_t COUNTER_EN:1;
      uint64_t COUNTER_RESET:1;
      uint64_t COUNTER_READ_READY:1;
      uint64_t reservedSpace0:1;
      uint64_t CAPTURE_WINDOW_INDEX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SSWPLL1;

  uint32_t SSWPLL2;
  uint32_t SSWPLL3;
  uint8_t res2[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PLLMUL:16;
      uint64_t REFCLKDIV:6;
      uint64_t reservedSpace0:1;
      uint64_t ROF:1;
      uint64_t PLLDIV:5;
      uint64_t BPOS:2;
      uint64_t ROS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPR_AMOUNT:9;
      uint64_t ODPLL:3;
      uint64_t MULMOD:9;
      uint64_t reservedSpace0:1;
      uint64_t SPREADINGRATE:9;
      uint64_t FMENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PLLCTL2;

  uint8_t res3[40];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PLL1_FBSLIP_FILTER_KEY:4;
      uint64_t PLL1_FBSLIP_FILTER_COUNT:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPREG1;

};

#define PLL (*(volatile struct PLL_tag *) 0xffffe100)

struct Flash_Module_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENPIPE:1;
      uint64_t reservedSpace0:3;
      uint64_t ASWSTEN:1;
      uint64_t reservedSpace1:3;
      uint64_t RWAIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRDCNTL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDACEN:4;
      uint64_t EZCV:1;
      uint64_t EOCV:1;
      uint64_t reservedSpace0:2;
      uint64_t EPEN:1;
      uint64_t EZFEN:1;
      uint64_t reservedSpace1:6;
      uint64_t EDACMODE:3;
      uint64_t reservedSpace2:5;
      uint64_t SUSP_IGNR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEC_THRESHOLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FEDACCTRL2;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t UNC_ERR_ADD:29;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FUNC_ERR_ADD;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTL1DIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBPROT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBSE;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREADST:8;
      uint64_t BAGP:8;
      uint64_t OTPPROTDIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANKPWR0:2;
      uint64_t BANKPWR1:2;
      uint64_t BANKPWR2:2;
      uint64_t BANKPWR3:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FBFALLBACK;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUMPPWR:1;
      uint64_t reservedSpace0:15;
      uint64_t PSLEEP:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPAC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BANK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMAC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SLOCK:1;
      uint64_t PSUSP:1;
      uint64_t ESUSP:1;
      uint64_t VOLTSTAT:1;
      uint64_t CSTAT:1;
      uint64_t INVDAT:1;
      uint64_t PGM:1;
      uint64_t ERS:1;
      uint64_t BUSY:1;
      uint64_t CV:1;
      uint64_t EV:1;
      uint64_t PCV:1;
      uint64_t PGV:1;
      uint64_t DBT:1;
      uint64_t ILA:1;
      uint64_t RVF:1;
      uint64_t RVDER:1;
      uint64_t RVSUSP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FMSTAT;

  uint8_t res5[560];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WR_ENA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSM_WR_ENA;

  uint8_t res6[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTOSTART_GRACE:8;
      uint64_t AUTOSUSP_EN:3;
      uint64_t reservedSpace0:5;
      uint64_t EWAIT:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EEPROM_CONFIG;

};

#define Flash_Module (*(volatile struct Flash_Module_tag *) 0xfff87000)

struct EMIF_tag
{
  uint32_t MIDR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAX_EXT_WAIT:8;
      uint64_t reservedSpace0:8;
      uint64_t CS2_WAIT:2;
      uint64_t CS3_WAIT:2;
      uint64_t CS4_WAIT:2;
      uint64_t CS5_WAIT:2;
      uint64_t reservedSpace1:4;
      uint64_t WP0:1;
      uint64_t WP1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AWCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAGESIZE:3;
      uint64_t reservedSpace0:1;
      uint64_t IBANK:3;
      uint64_t reservedSpace1:1;
      uint64_t BIT11_9LOCK:1;
      uint64_t CL:3;
      uint64_t reservedSpace2:2;
      uint64_t NM:1;
      uint64_t reservedSpace3:14;
      uint64_t PDWR:1;
      uint64_t PD:1;
      uint64_t SR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RR:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDRCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASIZE:2;
      uint64_t TA:2;
      uint64_t R_HOLD:3;
      uint64_t R_STROBE:6;
      uint64_t R_SETUP:4;
      uint64_t W_HOLD:3;
      uint64_t W_STROBE:6;
      uint64_t W_SETUP:4;
      uint64_t reservedSpace0:1;
      uint64_t SS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE2CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASIZE:2;
      uint64_t TA:2;
      uint64_t R_HOLD:3;
      uint64_t R_STROBE:6;
      uint64_t R_SETUP:4;
      uint64_t W_HOLD:3;
      uint64_t W_STROBE:6;
      uint64_t W_SETUP:4;
      uint64_t reservedSpace0:1;
      uint64_t SS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE3CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASIZE:2;
      uint64_t TA:2;
      uint64_t R_HOLD:3;
      uint64_t R_STROBE:6;
      uint64_t R_SETUP:4;
      uint64_t W_HOLD:3;
      uint64_t W_STROBE:6;
      uint64_t W_SETUP:4;
      uint64_t reservedSpace0:1;
      uint64_t SS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE4CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASIZE:2;
      uint64_t TA:2;
      uint64_t R_HOLD:3;
      uint64_t R_STROBE:6;
      uint64_t R_SETUP:4;
      uint64_t W_HOLD:3;
      uint64_t W_STROBE:6;
      uint64_t W_SETUP:4;
      uint64_t reservedSpace0:1;
      uint64_t SS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CE5CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t T_RRD:3;
      uint64_t reservedSpace1:1;
      uint64_t T_RC:4;
      uint64_t T_RAS:4;
      uint64_t T_WR:3;
      uint64_t reservedSpace2:1;
      uint64_t T_RCD:3;
      uint64_t reservedSpace3:1;
      uint64_t T_RP:3;
      uint64_t T_RFC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDTIMR;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T_XS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SDSRETR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AT:1;
      uint64_t LT:1;
      uint64_t WR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AT_MASKED:1;
      uint64_t LT_MASKED:1;
      uint64_t WR_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AT_MASK_SET:1;
      uint64_t LT_MASK_SET:1;
      uint64_t WR_MASK_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMSKSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AT_MASK_CLR:1;
      uint64_t LT_MASK_CLR:1;
      uint64_t WR_MASK_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTMSKCLR;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CS2_PG_MD_EN:1;
      uint64_t CS2_PG_SIZE:1;
      uint64_t CS2_PG_DEL:6;
      uint64_t CS3_PG_MD_EN:1;
      uint64_t CS3_PG_SIZE:1;
      uint64_t CS3_PG_DEL:6;
      uint64_t CS4_PG_MD_EN:1;
      uint64_t CS4_PG_SIZE:1;
      uint64_t CS4_PG_DEL:6;
      uint64_t CS5_PG_MD_EN:1;
      uint64_t CS5_PG_SIZE:1;
      uint64_t CS5_PG_DEL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMCR;

};

#define EMIF (*(volatile struct EMIF_tag *) 0xfcffe800)

struct GIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOGCR0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOINTDET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOINTDET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPOL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPOL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOENASET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOENASET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOENACLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOENACLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOLVLSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOLVLSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOLVLCLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOLVLCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOFLG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOOFFA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOOFFA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOOFFB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOOFFB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOEMUA:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOEMUA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOEMUB:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOEMUB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODSETA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODCLRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODIRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODIRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODINB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODINB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODOUTB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODOUTB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODSETB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODSETB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIODCLRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIODCLRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPDRB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPDRB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPULDISB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPULDISB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GIOPSLB:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GIOPSLB;

};

#define GIO (*(volatile struct GIO_tag *) 0xfff7bc00)

struct SCILIN_Serial_Communication_InterfaceLocal_Interconnect_Network_Module_SCILIN_0_tag
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
      uint64_t COMM:1;
      uint64_t TIMING:1;
      uint64_t PARITY_0:1;
      uint64_t PARITY_1:1;
      uint64_t STOP_0:1;
      uint64_t CLOCK:1;
      uint64_t LIN:1;
      uint64_t SWnRST:1;
      uint64_t SLEEP:1;
      uint64_t ADAPT:1;
      uint64_t MBUF:1;
      uint64_t CTYPE:1;
      uint64_t HGEN:1;
      uint64_t STOP_1:1;
      uint64_t reservedSpace0:2;
      uint64_t LOOP:1;
      uint64_t CONT:1;
      uint64_t reservedSpace1:6;
      uint64_t RXENA:1;
      uint64_t TXENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GEN:1;
      uint64_t reservedSpace1:7;
      uint64_t SC:1;
      uint64_t CC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:1;
      uint64_t SET_1:1;
      uint64_t reservedSpace0:2;
      uint64_t SET_2:1;
      uint64_t reservedSpace1:1;
      uint64_t SET_3:1;
      uint64_t SET_4:1;
      uint64_t SET_5:1;
      uint64_t SET_6:1;
      uint64_t reservedSpace2:3;
      uint64_t SET_7:1;
      uint64_t reservedSpace3:2;
      uint64_t SET_8:1;
      uint64_t SET_9:1;
      uint64_t SET_10:1;
      uint64_t reservedSpace4:5;
      uint64_t SET_11:1;
      uint64_t SET_12:1;
      uint64_t SET_13:1;
      uint64_t SET_14:1;
      uint64_t SET_15:1;
      uint64_t SET_16:1;
      uint64_t SET_17:1;
      uint64_t SET_18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:1;
      uint64_t CLR_1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_2:1;
      uint64_t reservedSpace1:1;
      uint64_t CLR_3:1;
      uint64_t CLR_4:1;
      uint64_t CLR_5:1;
      uint64_t CLR_6:1;
      uint64_t reservedSpace2:3;
      uint64_t CLR_7:1;
      uint64_t reservedSpace3:2;
      uint64_t CLR_8:1;
      uint64_t CLR_9:1;
      uint64_t CLR_10:1;
      uint64_t reservedSpace4:5;
      uint64_t CLR_11:1;
      uint64_t CLR_12:1;
      uint64_t CLR_13:1;
      uint64_t CLR_14:1;
      uint64_t CLR_15:1;
      uint64_t CLR_16:1;
      uint64_t CLR_17:1;
      uint64_t CLR_18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:1;
      uint64_t SET_1:1;
      uint64_t reservedSpace0:2;
      uint64_t SET_2:1;
      uint64_t reservedSpace1:1;
      uint64_t SET_3:1;
      uint64_t SET_4:1;
      uint64_t SET_5:1;
      uint64_t SET_6:1;
      uint64_t reservedSpace2:3;
      uint64_t SET_7:1;
      uint64_t reservedSpace3:4;
      uint64_t SET_8:1;
      uint64_t reservedSpace4:5;
      uint64_t SET_9:1;
      uint64_t SET_10:1;
      uint64_t SET_11:1;
      uint64_t SET_12:1;
      uint64_t SET_13:1;
      uint64_t SET_14:1;
      uint64_t SET_15:1;
      uint64_t SET_16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:1;
      uint64_t CLR_1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_2:1;
      uint64_t reservedSpace1:1;
      uint64_t CLR_3:1;
      uint64_t CLR_4:1;
      uint64_t CLR_5:1;
      uint64_t CLR_6:1;
      uint64_t reservedSpace2:3;
      uint64_t CLR_7:1;
      uint64_t reservedSpace3:4;
      uint64_t CLR_8:1;
      uint64_t reservedSpace4:5;
      uint64_t CLR_9:1;
      uint64_t CLR_10:1;
      uint64_t CLR_11:1;
      uint64_t CLR_12:1;
      uint64_t CLR_13:1;
      uint64_t CLR_14:1;
      uint64_t CLR_15:1;
      uint64_t CLR_16:1;
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
      uint64_t BUSY:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace0:1;
      uint64_t TOAWUS:1;
      uint64_t TOA3WUS:1;
      uint64_t TXRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXWAKE:1;
      uint64_t TX:1;
      uint64_t RXWAKE:1;
      uint64_t ID_0:1;
      uint64_t ID_1:1;
      uint64_t reservedSpace1:9;
      uint64_t PE:1;
      uint64_t OE:1;
      uint64_t FE:1;
      uint64_t NRE:1;
      uint64_t ISFE:1;
      uint64_t CE:1;
      uint64_t PBE:1;
      uint64_t BE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAR:3;
      uint64_t reservedSpace0:13;
      uint64_t LENGTH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFORMAT;

  uint8_t res0[4];

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
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBREAK:3;
      uint64_t reservedSpace0:5;
      uint64_t SDEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCOMPARE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD3:8;
      uint64_t RD2:8;
      uint64_t RD1:8;
      uint64_t RD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD7:8;
      uint64_t RD6:8;
      uint64_t RD5:8;
      uint64_t RD4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:8;
      uint64_t reservedSpace0:8;
      uint64_t RX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
      uint64_t ID_SlaveTask_BYTE:8;
      uint64_t Received_ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD3:8;
      uint64_t TD2:8;
      uint64_t TD1:8;
      uint64_t TD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD7:8;
      uint64_t TD6:8;
      uint64_t TD5:8;
      uint64_t TD4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBR:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBRS;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPENA:1;
      uint64_t LPBENA:1;
      uint64_t reservedSpace0:6;
      uint64_t IODFTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t TX:3;
      uint64_t PIN:2;
      uint64_t reservedSpace2:3;
      uint64_t BRKD:1;
      uint64_t PEN:1;
      uint64_t FEN:1;
      uint64_t reservedSpace3:1;
      uint64_t ISFE:1;
      uint64_t CEN:1;
      uint64_t PBEN:1;
      uint64_t BEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IODFTCTRL;

};

#define SCILIN_Serial_Communication_InterfaceLocal_Interconnect_Network_Module_SCILIN_0 (*(volatile struct SCILIN_Serial_Communication_InterfaceLocal_Interconnect_Network_Module_SCILIN_0_tag *) 0xfff7e400)

struct SCILIN_Serial_Communication_InterfaceLocal_Interconnect_Network_Module_SCILIN_1_tag
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
      uint64_t COMM:1;
      uint64_t TIMING:1;
      uint64_t PARITY_0:1;
      uint64_t PARITY_1:1;
      uint64_t STOP_0:1;
      uint64_t CLOCK:1;
      uint64_t LIN:1;
      uint64_t SWnRST:1;
      uint64_t SLEEP:1;
      uint64_t ADAPT:1;
      uint64_t MBUF:1;
      uint64_t CTYPE:1;
      uint64_t HGEN:1;
      uint64_t STOP_1:1;
      uint64_t reservedSpace0:2;
      uint64_t LOOP:1;
      uint64_t CONT:1;
      uint64_t reservedSpace1:6;
      uint64_t RXENA:1;
      uint64_t TXENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GEN:1;
      uint64_t reservedSpace1:7;
      uint64_t SC:1;
      uint64_t CC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIGCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:1;
      uint64_t SET_1:1;
      uint64_t reservedSpace0:2;
      uint64_t SET_2:1;
      uint64_t reservedSpace1:1;
      uint64_t SET_3:1;
      uint64_t SET_4:1;
      uint64_t SET_5:1;
      uint64_t SET_6:1;
      uint64_t reservedSpace2:3;
      uint64_t SET_7:1;
      uint64_t reservedSpace3:2;
      uint64_t SET_8:1;
      uint64_t SET_9:1;
      uint64_t SET_10:1;
      uint64_t reservedSpace4:5;
      uint64_t SET_11:1;
      uint64_t SET_12:1;
      uint64_t SET_13:1;
      uint64_t SET_14:1;
      uint64_t SET_15:1;
      uint64_t SET_16:1;
      uint64_t SET_17:1;
      uint64_t SET_18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:1;
      uint64_t CLR_1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_2:1;
      uint64_t reservedSpace1:1;
      uint64_t CLR_3:1;
      uint64_t CLR_4:1;
      uint64_t CLR_5:1;
      uint64_t CLR_6:1;
      uint64_t reservedSpace2:3;
      uint64_t CLR_7:1;
      uint64_t reservedSpace3:2;
      uint64_t CLR_8:1;
      uint64_t CLR_9:1;
      uint64_t CLR_10:1;
      uint64_t reservedSpace4:5;
      uint64_t CLR_11:1;
      uint64_t CLR_12:1;
      uint64_t CLR_13:1;
      uint64_t CLR_14:1;
      uint64_t CLR_15:1;
      uint64_t CLR_16:1;
      uint64_t CLR_17:1;
      uint64_t CLR_18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCICLEARINT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:1;
      uint64_t SET_1:1;
      uint64_t reservedSpace0:2;
      uint64_t SET_2:1;
      uint64_t reservedSpace1:1;
      uint64_t SET_3:1;
      uint64_t SET_4:1;
      uint64_t SET_5:1;
      uint64_t SET_6:1;
      uint64_t reservedSpace2:3;
      uint64_t SET_7:1;
      uint64_t reservedSpace3:4;
      uint64_t SET_8:1;
      uint64_t reservedSpace4:5;
      uint64_t SET_9:1;
      uint64_t SET_10:1;
      uint64_t SET_11:1;
      uint64_t SET_12:1;
      uint64_t SET_13:1;
      uint64_t SET_14:1;
      uint64_t SET_15:1;
      uint64_t SET_16:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCISETINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:1;
      uint64_t CLR_1:1;
      uint64_t reservedSpace0:2;
      uint64_t CLR_2:1;
      uint64_t reservedSpace1:1;
      uint64_t CLR_3:1;
      uint64_t CLR_4:1;
      uint64_t CLR_5:1;
      uint64_t CLR_6:1;
      uint64_t reservedSpace2:3;
      uint64_t CLR_7:1;
      uint64_t reservedSpace3:4;
      uint64_t CLR_8:1;
      uint64_t reservedSpace4:5;
      uint64_t CLR_9:1;
      uint64_t CLR_10:1;
      uint64_t CLR_11:1;
      uint64_t CLR_12:1;
      uint64_t CLR_13:1;
      uint64_t CLR_14:1;
      uint64_t CLR_15:1;
      uint64_t CLR_16:1;
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
      uint64_t BUSY:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace0:1;
      uint64_t TOAWUS:1;
      uint64_t TOA3WUS:1;
      uint64_t TXRDY:1;
      uint64_t RXRDY:1;
      uint64_t TXWAKE:1;
      uint64_t TX:1;
      uint64_t RXWAKE:1;
      uint64_t ID_0:1;
      uint64_t ID_1:1;
      uint64_t reservedSpace1:9;
      uint64_t PE:1;
      uint64_t OE:1;
      uint64_t FE:1;
      uint64_t NRE:1;
      uint64_t ISFE:1;
      uint64_t CE:1;
      uint64_t PBE:1;
      uint64_t BE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHAR:3;
      uint64_t reservedSpace0:13;
      uint64_t LENGTH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIFORMAT;

  uint8_t res0[4];

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
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:1;
      uint64_t RX:1;
      uint64_t TX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCIPIO8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SBREAK:3;
      uint64_t reservedSpace0:5;
      uint64_t SDEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINCOMPARE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD3:8;
      uint64_t RD2:8;
      uint64_t RD1:8;
      uint64_t RD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINRD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RD7:8;
      uint64_t RD6:8;
      uint64_t RD5:8;
      uint64_t RD4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINRD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX:8;
      uint64_t reservedSpace0:8;
      uint64_t RX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINMASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:8;
      uint64_t ID_SlaveTask_BYTE:8;
      uint64_t Received_ID:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD3:8;
      uint64_t TD2:8;
      uint64_t TD1:8;
      uint64_t TD0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTD0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TD7:8;
      uint64_t TD6:8;
      uint64_t TD5:8;
      uint64_t TD4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LINTD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBR:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBRS;

  uint8_t res1[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPENA:1;
      uint64_t LPBENA:1;
      uint64_t reservedSpace0:6;
      uint64_t IODFTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t TX:3;
      uint64_t PIN:2;
      uint64_t reservedSpace2:3;
      uint64_t BRKD:1;
      uint64_t PEN:1;
      uint64_t FEN:1;
      uint64_t reservedSpace3:1;
      uint64_t ISFE:1;
      uint64_t CEN:1;
      uint64_t PBEN:1;
      uint64_t BEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IODFTCTRL;

};

#define SCILIN_Serial_Communication_InterfaceLocal_Interconnect_Network_Module_SCILIN_1 (*(volatile struct SCILIN_Serial_Communication_InterfaceLocal_Interconnect_Network_Module_SCILIN_1_tag *) 0xfff7e500)

struct MibSPI_MibSPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t CLKMOD:1;
      uint64_t reservedSpace0:6;
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace1:7;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace2:7;
      uint64_t SPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRENA:1;
      uint64_t TIMEOUTENA:1;
      uint64_t PARERRENA:1;
      uint64_t DESYNCENA:1;
      uint64_t BITERRENA:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTENA:1;
      uint64_t reservedSpace1:1;
      uint64_t RXINTENA:1;
      uint64_t TXINTENA:1;
      uint64_t reservedSpace2:6;
      uint64_t DMAREQEN:1;
      uint64_t reservedSpace3:7;
      uint64_t ENABLEHIGHZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLEN:1;
      uint64_t TIMEOUTLVL:1;
      uint64_t PARERRLVL:1;
      uint64_t DESYNCLVL:1;
      uint64_t BITERRLVL:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTLVL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXINTLVL:1;
      uint64_t TXINTLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPILVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLEN:1;
      uint64_t TIMEOUTFLG:1;
      uint64_t PARITYERRFLG:1;
      uint64_t DESYNCFLG:1;
      uint64_t BITERRFLG:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTFLG:1;
      uint64_t RXINTFLG:1;
      uint64_t TXINTFLG:1;
      uint64_t BUFINITACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSFUN:8;
      uint64_t ENAFUN:1;
      uint64_t CLKFUN:1;
      uint64_t SIMOFUN0:1;
      uint64_t SOMIFUN0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOFUN:8;
      uint64_t SOMIFUN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIR:8;
      uint64_t ENADIR:1;
      uint64_t CLKDIR:1;
      uint64_t SIMODIR0:1;
      uint64_t SOMIDIR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIR:8;
      uint64_t SOMIDIR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIN:8;
      uint64_t ENADIN:1;
      uint64_t CLKDIN:1;
      uint64_t SIMODIN0:1;
      uint64_t SOMIDIN0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIN:8;
      uint64_t SOMIDIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDOUT:8;
      uint64_t ENADOUT:1;
      uint64_t CLKDOUT:1;
      uint64_t SIMODOUT0:1;
      uint64_t SOMIDOUT0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODOUT:8;
      uint64_t SOMIDOUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSET:8;
      uint64_t ENASET:1;
      uint64_t CLKSET:1;
      uint64_t SIMOSET0:1;
      uint64_t SOMISET0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOSET:8;
      uint64_t SOMISET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCLR:8;
      uint64_t ENACLR:1;
      uint64_t CLKCLR:1;
      uint64_t SIMOCLR0:1;
      uint64_t SOMICLR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOCLR:8;
      uint64_t SOMICLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPDR:8;
      uint64_t ENAPDR:1;
      uint64_t CLKPDR:1;
      uint64_t SIMOPDR0:1;
      uint64_t SOMIPDR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOPDR:8;
      uint64_t SOMIPDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIS:8;
      uint64_t ENADIS:1;
      uint64_t CLKDIS:1;
      uint64_t SIMODIS0:1;
      uint64_t SOMIDIS0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIS:8;
      uint64_t SOMIDIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPSEL:8;
      uint64_t ENAPSEL:1;
      uint64_t CLKPSEL:1;
      uint64_t SIMOPSEL0:1;
      uint64_t SOMIPSEL0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOPSEL:8;
      uint64_t SOMIPSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t reservedSpace0:1;
      uint64_t CSHOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMU_RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIEMU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2EDELAY:8;
      uint64_t T2EDELAY:8;
      uint64_t T2CDELAY:8;
      uint64_t C2TDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND0:1;
      uint64_t INTVECT0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND1:1;
      uint64_t INTVECT1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE_0:2;
      uint64_t MMODE_0:3;
      uint64_t MOD_0:1;
      uint64_t reservedSpace0:2;
      uint64_t PMODE_1:2;
      uint64_t MMODE_1:3;
      uint64_t MOD_1:1;
      uint64_t reservedSpace1:2;
      uint64_t PMODE_2:2;
      uint64_t MMODE_2:3;
      uint64_t MOD_2:1;
      uint64_t reservedSpace2:2;
      uint64_t PMODE_3:2;
      uint64_t MMODE_3:3;
      uint64_t MOD_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSPIENA:1;
      uint64_t reservedSpace0:15;
      uint64_t RXRAMACCESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBSPIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:16;
      uint64_t SET_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:16;
      uint64_t CLR_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:16;
      uint64_t SET_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:16;
      uint64_t CLR_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLGSUS:16;
      uint64_t INTFLGRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTFLAG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TICKVALUE:16;
      uint64_t reservedSpace0:12;
      uint64_t CLKCTRL:2;
      uint64_t RELOAD:1;
      uint64_t TICKENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TICKCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LPEND:7;
      uint64_t reservedSpace1:9;
      uint64_t TG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTGPEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG8CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG9CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG10CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG11CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG12CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG13CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG14CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG15CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LARGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACNTLEN;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDEN:4;
      uint64_t reservedSpace0:4;
      uint64_t PTESTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDFLG0:1;
      uint64_t EDFLG1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRADDR1:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVRN_BUF_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXOVRN_BUF_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t LPBK:1;
      uint64_t CTRL_0:1;
      uint64_t ERR:3;
      uint64_t reservedSpace0:2;
      uint64_t IOLPBKTSTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t CTRL_1:1;
      uint64_t CTRL_2:1;
      uint64_t CTRL_3:1;
      uint64_t CTRL_4:1;
      uint64_t CTRL_5:1;
      uint64_t reservedSpace2:3;
      uint64_t SCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOLPBKTSTCR;

};

#define MibSPI_MibSPI1 (*(volatile struct MibSPI_MibSPI1_tag *) 0xfff7f400)

struct MibSPI_MibSPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t CLKMOD:1;
      uint64_t reservedSpace0:6;
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace1:7;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace2:7;
      uint64_t SPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRENA:1;
      uint64_t TIMEOUTENA:1;
      uint64_t PARERRENA:1;
      uint64_t DESYNCENA:1;
      uint64_t BITERRENA:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTENA:1;
      uint64_t reservedSpace1:1;
      uint64_t RXINTENA:1;
      uint64_t TXINTENA:1;
      uint64_t reservedSpace2:6;
      uint64_t DMAREQEN:1;
      uint64_t reservedSpace3:7;
      uint64_t ENABLEHIGHZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLEN:1;
      uint64_t TIMEOUTLVL:1;
      uint64_t PARERRLVL:1;
      uint64_t DESYNCLVL:1;
      uint64_t BITERRLVL:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTLVL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXINTLVL:1;
      uint64_t TXINTLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPILVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLEN:1;
      uint64_t TIMEOUTFLG:1;
      uint64_t PARITYERRFLG:1;
      uint64_t DESYNCFLG:1;
      uint64_t BITERRFLG:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTFLG:1;
      uint64_t RXINTFLG:1;
      uint64_t TXINTFLG:1;
      uint64_t BUFINITACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSFUN:8;
      uint64_t ENAFUN:1;
      uint64_t CLKFUN:1;
      uint64_t SIMOFUN0:1;
      uint64_t SOMIFUN0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOFUN:8;
      uint64_t SOMIFUN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIR:8;
      uint64_t ENADIR:1;
      uint64_t CLKDIR:1;
      uint64_t SIMODIR0:1;
      uint64_t SOMIDIR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIR:8;
      uint64_t SOMIDIR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIN:8;
      uint64_t ENADIN:1;
      uint64_t CLKDIN:1;
      uint64_t SIMODIN0:1;
      uint64_t SOMIDIN0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIN:8;
      uint64_t SOMIDIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDOUT:8;
      uint64_t ENADOUT:1;
      uint64_t CLKDOUT:1;
      uint64_t SIMODOUT0:1;
      uint64_t SOMIDOUT0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODOUT:8;
      uint64_t SOMIDOUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSET:8;
      uint64_t ENASET:1;
      uint64_t CLKSET:1;
      uint64_t SIMOSET0:1;
      uint64_t SOMISET0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOSET:8;
      uint64_t SOMISET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCLR:8;
      uint64_t ENACLR:1;
      uint64_t CLKCLR:1;
      uint64_t SIMOCLR0:1;
      uint64_t SOMICLR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOCLR:8;
      uint64_t SOMICLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPDR:8;
      uint64_t ENAPDR:1;
      uint64_t CLKPDR:1;
      uint64_t SIMOPDR0:1;
      uint64_t SOMIPDR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOPDR:8;
      uint64_t SOMIPDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIS:8;
      uint64_t ENADIS:1;
      uint64_t CLKDIS:1;
      uint64_t SIMODIS0:1;
      uint64_t SOMIDIS0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIS:8;
      uint64_t SOMIDIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPSEL:8;
      uint64_t ENAPSEL:1;
      uint64_t CLKPSEL:1;
      uint64_t SIMOPSEL0:1;
      uint64_t SOMIPSEL0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOPSEL:8;
      uint64_t SOMIPSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t reservedSpace0:1;
      uint64_t CSHOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMU_RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIEMU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2EDELAY:8;
      uint64_t T2EDELAY:8;
      uint64_t T2CDELAY:8;
      uint64_t C2TDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND0:1;
      uint64_t INTVECT0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND1:1;
      uint64_t INTVECT1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE_0:2;
      uint64_t MMODE_0:3;
      uint64_t MOD_0:1;
      uint64_t reservedSpace0:2;
      uint64_t PMODE_1:2;
      uint64_t MMODE_1:3;
      uint64_t MOD_1:1;
      uint64_t reservedSpace1:2;
      uint64_t PMODE_2:2;
      uint64_t MMODE_2:3;
      uint64_t MOD_2:1;
      uint64_t reservedSpace2:2;
      uint64_t PMODE_3:2;
      uint64_t MMODE_3:3;
      uint64_t MOD_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSPIENA:1;
      uint64_t reservedSpace0:15;
      uint64_t RXRAMACCESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBSPIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:16;
      uint64_t SET_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:16;
      uint64_t CLR_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:16;
      uint64_t SET_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:16;
      uint64_t CLR_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLGSUS:16;
      uint64_t INTFLGRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTFLAG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TICKVALUE:16;
      uint64_t reservedSpace0:12;
      uint64_t CLKCTRL:2;
      uint64_t RELOAD:1;
      uint64_t TICKENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TICKCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LPEND:7;
      uint64_t reservedSpace1:9;
      uint64_t TG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTGPEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG8CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG9CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG10CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG11CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG12CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG13CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG14CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG15CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LARGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACNTLEN;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDEN:4;
      uint64_t reservedSpace0:4;
      uint64_t PTESTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDFLG0:1;
      uint64_t EDFLG1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRADDR1:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVRN_BUF_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXOVRN_BUF_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t LPBK:1;
      uint64_t CTRL_0:1;
      uint64_t ERR:3;
      uint64_t reservedSpace0:2;
      uint64_t IOLPBKTSTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t CTRL_1:1;
      uint64_t CTRL_2:1;
      uint64_t CTRL_3:1;
      uint64_t CTRL_4:1;
      uint64_t CTRL_5:1;
      uint64_t reservedSpace2:3;
      uint64_t SCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOLPBKTSTCR;

};

#define MibSPI_MibSPI3 (*(volatile struct MibSPI_MibSPI3_tag *) 0xfff7f800)

struct MibSPI_MibSPI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MASTER:1;
      uint64_t CLKMOD:1;
      uint64_t reservedSpace0:6;
      uint64_t POWERDOWN:1;
      uint64_t reservedSpace1:7;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace2:7;
      uint64_t SPIEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIGCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLENERRENA:1;
      uint64_t TIMEOUTENA:1;
      uint64_t PARERRENA:1;
      uint64_t DESYNCENA:1;
      uint64_t BITERRENA:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTENA:1;
      uint64_t reservedSpace1:1;
      uint64_t RXINTENA:1;
      uint64_t TXINTENA:1;
      uint64_t reservedSpace2:6;
      uint64_t DMAREQEN:1;
      uint64_t reservedSpace3:7;
      uint64_t ENABLEHIGHZ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIINT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLEN:1;
      uint64_t TIMEOUTLVL:1;
      uint64_t PARERRLVL:1;
      uint64_t DESYNCLVL:1;
      uint64_t BITERRLVL:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTLVL:1;
      uint64_t reservedSpace1:1;
      uint64_t RXINTLVL:1;
      uint64_t TXINTLVL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPILVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLEN:1;
      uint64_t TIMEOUTFLG:1;
      uint64_t PARITYERRFLG:1;
      uint64_t DESYNCFLG:1;
      uint64_t BITERRFLG:1;
      uint64_t reservedSpace0:1;
      uint64_t RXOVRNINTFLG:1;
      uint64_t RXINTFLG:1;
      uint64_t TXINTFLG:1;
      uint64_t BUFINITACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSFUN:8;
      uint64_t ENAFUN:1;
      uint64_t CLKFUN:1;
      uint64_t SIMOFUN0:1;
      uint64_t SOMIFUN0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOFUN:8;
      uint64_t SOMIFUN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIR:8;
      uint64_t ENADIR:1;
      uint64_t CLKDIR:1;
      uint64_t SIMODIR0:1;
      uint64_t SOMIDIR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIR:8;
      uint64_t SOMIDIR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIN:8;
      uint64_t ENADIN:1;
      uint64_t CLKDIN:1;
      uint64_t SIMODIN0:1;
      uint64_t SOMIDIN0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIN:8;
      uint64_t SOMIDIN:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDOUT:8;
      uint64_t ENADOUT:1;
      uint64_t CLKDOUT:1;
      uint64_t SIMODOUT0:1;
      uint64_t SOMIDOUT0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODOUT:8;
      uint64_t SOMIDOUT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSSET:8;
      uint64_t ENASET:1;
      uint64_t CLKSET:1;
      uint64_t SIMOSET0:1;
      uint64_t SOMISET0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOSET:8;
      uint64_t SOMISET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSCLR:8;
      uint64_t ENACLR:1;
      uint64_t CLKCLR:1;
      uint64_t SIMOCLR0:1;
      uint64_t SOMICLR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOCLR:8;
      uint64_t SOMICLR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPDR:8;
      uint64_t ENAPDR:1;
      uint64_t CLKPDR:1;
      uint64_t SIMOPDR0:1;
      uint64_t SOMIPDR0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOPDR:8;
      uint64_t SOMIPDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSDIS:8;
      uint64_t ENADIS:1;
      uint64_t CLKDIS:1;
      uint64_t SIMODIS0:1;
      uint64_t SOMIDIS0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMODIS:8;
      uint64_t SOMIDIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCSPSEL:8;
      uint64_t ENAPSEL:1;
      uint64_t CLKPSEL:1;
      uint64_t SIMOPSEL0:1;
      uint64_t SOMIPSEL0:1;
      uint64_t reservedSpace0:4;
      uint64_t SIMOPSEL:8;
      uint64_t SOMIPSEL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t reservedSpace0:1;
      uint64_t CSHOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDAT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLENERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIBUF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EMU_RXDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIEMU;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t C2EDELAY:8;
      uint64_t T2EDELAY:8;
      uint64_t T2CDELAY:8;
      uint64_t C2TDELAY:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDELAY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CSDEF:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIDEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHARLEN:5;
      uint64_t reservedSpace0:3;
      uint64_t PRESCALE:8;
      uint64_t PHASE:1;
      uint64_t POLARITY:1;
      uint64_t DIS:1;
      uint64_t reservedSpace1:1;
      uint64_t SHIFTDIR:1;
      uint64_t WAITENA:1;
      uint64_t PARITYENA:1;
      uint64_t PARPOL:1;
      uint64_t WDELAY:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIFMT3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND0:1;
      uint64_t INTVECT0:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUSPEND1:1;
      uint64_t INTVECT1:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTVECT1;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PMODE_0:2;
      uint64_t MMODE_0:3;
      uint64_t MOD_0:1;
      uint64_t reservedSpace0:2;
      uint64_t PMODE_1:2;
      uint64_t MMODE_1:3;
      uint64_t MOD_1:1;
      uint64_t reservedSpace1:2;
      uint64_t PMODE_2:2;
      uint64_t MMODE_2:3;
      uint64_t MOD_2:1;
      uint64_t reservedSpace2:2;
      uint64_t PMODE_3:2;
      uint64_t MMODE_3:3;
      uint64_t MOD_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPIPMCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSPIENA:1;
      uint64_t reservedSpace0:15;
      uint64_t RXRAMACCESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MIBSPIE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:16;
      uint64_t SET_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:16;
      uint64_t CLR_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITENCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SET_0:16;
      uint64_t SET_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLR_0:16;
      uint64_t CLR_1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGITLVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTFLGSUS:16;
      uint64_t INTFLGRDY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TGINTFLAG;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TICKVALUE:16;
      uint64_t reservedSpace0:12;
      uint64_t CLKCTRL:2;
      uint64_t RELOAD:1;
      uint64_t TICKENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TICKCNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:8;
      uint64_t LPEND:7;
      uint64_t reservedSpace1:9;
      uint64_t TG:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTGPEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG8CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG9CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG10CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG11CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG12CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG13CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG14CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PCURRENT:7;
      uint64_t reservedSpace0:1;
      uint64_t PSTART:7;
      uint64_t reservedSpace1:1;
      uint64_t TRIGSRC:4;
      uint64_t TRIGEVT:4;
      uint64_t reservedSpace2:4;
      uint64_t TGTD:1;
      uint64_t PRST:1;
      uint64_t ONESHOT:1;
      uint64_t TGENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TG15CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA0CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA1CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA2CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA3CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA4CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA5CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA6CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT_0:6;
      uint64_t COUNT_1:1;
      uint64_t reservedSpace0:1;
      uint64_t ICOUNT:5;
      uint64_t NOBRK:1;
      uint64_t TXDMAENA:1;
      uint64_t RXDMAENA:1;
      uint64_t TXDMA_MAP:4;
      uint64_t RXDMA_MAP:4;
      uint64_t BUFID:7;
      uint64_t ONESHOT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMA7CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNT:16;
      uint64_t ICOUNT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICOUNT_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LARGE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMACNTLEN;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDEN:4;
      uint64_t reservedSpace0:4;
      uint64_t PTESTEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDFLG0:1;
      uint64_t EDFLG1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRADDR1:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERRADDR1:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UERRADDR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXOVRN_BUF_ADDR:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXOVRN_BUF_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXP:1;
      uint64_t LPBK:1;
      uint64_t CTRL_0:1;
      uint64_t ERR:3;
      uint64_t reservedSpace0:2;
      uint64_t IOLPBKTSTENA:4;
      uint64_t reservedSpace1:4;
      uint64_t CTRL_1:1;
      uint64_t CTRL_2:1;
      uint64_t CTRL_3:1;
      uint64_t CTRL_4:1;
      uint64_t CTRL_5:1;
      uint64_t reservedSpace2:3;
      uint64_t SCS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOLPBKTSTCR;

};

#define MibSPI_MibSPI5 (*(volatile struct MibSPI_MibSPI5_tag *) 0xfff7fc00)

struct Multi_buffer_RAM_MibSPI1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_127;

};

#define Multi_buffer_RAM_MibSPI1 (*(volatile struct Multi_buffer_RAM_MibSPI1_tag *) 0xff0e0000)

struct Multi_buffer_RAM_MibSPI3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_127;

};

#define Multi_buffer_RAM_MibSPI3 (*(volatile struct Multi_buffer_RAM_MibSPI3_tag *) 0xff0c0000)

struct Multi_buffer_RAM_MibSPI5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXDATA:16;
      uint64_t CSNR:8;
      uint64_t DFSEL:2;
      uint64_t WDEL:1;
      uint64_t LOCK:1;
      uint64_t CSHOLD:1;
      uint64_t BUFMODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Transmit_Data_Register_127;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDATA:16;
      uint64_t LCSNR:8;
      uint64_t DLEN_ERR:1;
      uint64_t TIMEOUT:1;
      uint64_t PARITYERR:1;
      uint64_t DESYNC:1;
      uint64_t BITERR:1;
      uint64_t TXFULL:1;
      uint64_t RXOVR:1;
      uint64_t RXEMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Multi_buffer_RAM_Receive_Buffer_Register_127;

};

#define Multi_buffer_RAM_MibSPI5 (*(volatile struct Multi_buffer_RAM_MibSPI5_tag *) 0xff0a0000)

struct ADC_ADC0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADRSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_EN:1;
      uint64_t reservedSpace0:15;
      uint64_t RAM_TEST_EN:1;
      uint64_t reservedSpace1:7;
      uint64_t COS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOPMODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCLOCKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t HILO:1;
      uint64_t BRIDGE_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t CAL_ST:1;
      uint64_t reservedSpace2:7;
      uint64_t SELF_TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCALCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ_EV:1;
      uint64_t EV_MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t OVR_EV_RAM_IGN:1;
      uint64_t EV_CHID:1;
      uint64_t reservedSpace1:2;
      uint64_t EV_DATA_FMT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVMODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ_G1:1;
      uint64_t G1_MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t G1_HW_TRIG:1;
      uint64_t OVR_G1_RAM_IGN:1;
      uint64_t G1_CHID:1;
      uint64_t reservedSpace1:2;
      uint64_t G1_DATA_FMT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1MODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ_G2:1;
      uint64_t G2_MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t G2_HW_TRIG:1;
      uint64_t OVR_G2_RAM_IGN:1;
      uint64_t G2_CHID:1;
      uint64_t reservedSpace1:2;
      uint64_t G2_DATA_FMT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2MODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSRC:3;
      uint64_t EV_EDG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1SRC:3;
      uint64_t G1_EDG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2SRC:3;
      uint64_t G2_EDG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_THR_INT_EN:1;
      uint64_t EV_OVR_INT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t EV_END_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVINTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_THR_INT_EN:1;
      uint64_t G1_OVR_INT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G1_END_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1INTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_THR_INT_EN:1;
      uint64_t G2_OVR_INT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G2_END_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2INTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_THR_INT_FLG:1;
      uint64_t EV_MEM_OVERRUN:1;
      uint64_t EV_MEM_EMPTY:1;
      uint64_t EV_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVINTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_THR_INT_FLG:1;
      uint64_t G1_MEM_OVERRUN:1;
      uint64_t G1_MEM_EMPTY:1;
      uint64_t G1_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1INTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_THR_INT_FLG:1;
      uint64_t G2_MEM_OVERRUN:1;
      uint64_t G2_MEM_EMPTY:1;
      uint64_t G2_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2INTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_THR:9;
      uint64_t Sign_Extension:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTHRINTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_THR:9;
      uint64_t Sign_Extension:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1THRINTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_THR:9;
      uint64_t Sign_Extension:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2THRINTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t EV_BLK_XFER:1;
      uint64_t reservedSpace1:13;
      uint64_t EVBLOCKS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVDMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G1_BLK_XFER:1;
      uint64_t reservedSpace1:13;
      uint64_t G1BLOCKS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1DMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G2_BLK_XFER:1;
      uint64_t reservedSpace1:13;
      uint64_t G2BLOCKS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2DMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDB:9;
      uint64_t reservedSpace0:7;
      uint64_t BNDA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADBNDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDEND:3;
      uint64_t reservedSpace0:13;
      uint64_t BUF_Init_Active:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADBNDEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_ACQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_ACQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_ACQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_END:1;
      uint64_t EV_STOP:1;
      uint64_t EV_BUSY:1;
      uint64_t EV_MEM_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_END:1;
      uint64_t G1_STOP:1;
      uint64_t G1_BUSY:1;
      uint64_t G1_MEM_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_END:1;
      uint64_t G2_STOP:1;
      uint64_t G2_BUSY:1;
      uint64_t G2_MEM_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_SEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_SEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCALR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCALR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAST_CONV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER7;

  uint32_t ADEVEMUBUFFER;
  uint32_t ADG1EMUBUFFER;
  uint32_t ADG2EMUBUFFER;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_PDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_PDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTPDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_PSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTPSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SAMP_DIS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t EV_SAMP_DIS_CYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSAMPDISEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_SAMP_DIS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t G1_SAMP_DIS_CYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SAMPDISEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_SAMP_DIS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t G2_SAMP_DIS_CYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SAMPDISEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_CHID:5;
      uint64_t reservedSpace0:3;
      uint64_t COMP_CHID:5;
      uint64_t reservedSpace1:1;
      uint64_t CMP_GELT:1;
      uint64_t CHNTHR_COMP:1;
      uint64_t MAG_THR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINT0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAG0MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_CHID:5;
      uint64_t reservedSpace0:3;
      uint64_t COMP_CHID:5;
      uint64_t reservedSpace1:1;
      uint64_t CMP_GELT:1;
      uint64_t CHNTHR_COMP:1;
      uint64_t MAG_THR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINT1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG1_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAG1MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_CHID:5;
      uint64_t reservedSpace0:3;
      uint64_t COMP_CHID:5;
      uint64_t reservedSpace1:1;
      uint64_t CMP_GELT:1;
      uint64_t CHNTHR_COMP:1;
      uint64_t MAG_THR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINT2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG2_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAG2MASK;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_ENA_SET:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTENASET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_ENA_CLR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTENACLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_FLG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_OFF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTOFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_FIFO_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVFIFORESETCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_FIFO_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1FIFORESETCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_FIFO_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2FIFORESETCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_RAM_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVRAMWRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_RAM_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1RAMWRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_RAM_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2RAMWRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADPARCR;

  uint32_t ADPARADDR;
};

#define ADC_ADC0 (*(volatile struct ADC_ADC0_tag *) 0xfff7c000)

struct ADC_ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADRSTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADC_EN:1;
      uint64_t reservedSpace0:15;
      uint64_t RAM_TEST_EN:1;
      uint64_t reservedSpace1:7;
      uint64_t COS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADOPMODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCLOCKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t HILO:1;
      uint64_t BRIDGE_EN:1;
      uint64_t reservedSpace1:6;
      uint64_t CAL_ST:1;
      uint64_t reservedSpace2:7;
      uint64_t SELF_TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCALCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ_EV:1;
      uint64_t EV_MODE:1;
      uint64_t reservedSpace0:2;
      uint64_t OVR_EV_RAM_IGN:1;
      uint64_t EV_CHID:1;
      uint64_t reservedSpace1:2;
      uint64_t EV_DATA_FMT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVMODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ_G1:1;
      uint64_t G1_MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t G1_HW_TRIG:1;
      uint64_t OVR_G1_RAM_IGN:1;
      uint64_t G1_CHID:1;
      uint64_t reservedSpace1:2;
      uint64_t G1_DATA_FMT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1MODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FRZ_G2:1;
      uint64_t G2_MODE:1;
      uint64_t reservedSpace0:1;
      uint64_t G2_HW_TRIG:1;
      uint64_t OVR_G2_RAM_IGN:1;
      uint64_t G2_CHID:1;
      uint64_t reservedSpace1:2;
      uint64_t G2_DATA_FMT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2MODECR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EVSRC:3;
      uint64_t EV_EDG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1SRC:3;
      uint64_t G1_EDG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2SRC:3;
      uint64_t G2_EDG_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_THR_INT_EN:1;
      uint64_t EV_OVR_INT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t EV_END_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVINTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_THR_INT_EN:1;
      uint64_t G1_OVR_INT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G1_END_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1INTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_THR_INT_EN:1;
      uint64_t G2_OVR_INT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G2_END_INT_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2INTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_THR_INT_FLG:1;
      uint64_t EV_MEM_OVERRUN:1;
      uint64_t EV_MEM_EMPTY:1;
      uint64_t EV_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVINTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_THR_INT_FLG:1;
      uint64_t G1_MEM_OVERRUN:1;
      uint64_t G1_MEM_EMPTY:1;
      uint64_t G1_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1INTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_THR_INT_FLG:1;
      uint64_t G2_MEM_OVERRUN:1;
      uint64_t G2_MEM_EMPTY:1;
      uint64_t G2_END:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2INTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_THR:9;
      uint64_t Sign_Extension:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTHRINTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_THR:9;
      uint64_t Sign_Extension:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1THRINTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_THR:9;
      uint64_t Sign_Extension:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2THRINTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t EV_BLK_XFER:1;
      uint64_t reservedSpace1:13;
      uint64_t EVBLOCKS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVDMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G1_BLK_XFER:1;
      uint64_t reservedSpace1:13;
      uint64_t G1BLOCKS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1DMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DMA_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t G2_BLK_XFER:1;
      uint64_t reservedSpace1:13;
      uint64_t G2BLOCKS:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2DMACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDB:9;
      uint64_t reservedSpace0:7;
      uint64_t BNDA:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADBNDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BNDEND:3;
      uint64_t reservedSpace0:13;
      uint64_t BUF_Init_Active:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADBNDEND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_ACQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_ACQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_ACQ:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SAMP;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_END:1;
      uint64_t EV_STOP:1;
      uint64_t EV_BUSY:1;
      uint64_t EV_MEM_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_END:1;
      uint64_t G1_STOP:1;
      uint64_t G1_BUSY:1;
      uint64_t G1_MEM_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_END:1;
      uint64_t G2_STOP:1;
      uint64_t G2_BUSY:1;
      uint64_t G2_MEM_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_SEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_SEL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADCALR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADCALR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LAST_CONV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t EV_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t EV_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADLASTCONV7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G1_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G1_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1BUFFER7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_DR:12;
      uint64_t reservedSpace0:4;
      uint64_t G2_CHID:5;
      uint64_t reservedSpace1:10;
      uint64_t G2_EMPTY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2BUFFER7;

  uint32_t ADEVEMUBUFFER;
  uint32_t ADG1EMUBUFFER;
  uint32_t ADG2EMUBUFFER;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTDIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTOUT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_IN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTIN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_CLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_PDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVPDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_PDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTPDIS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADEVT_PSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVTPSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_SAMP_DIS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t EV_SAMP_DIS_CYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVSAMPDISEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_SAMP_DIS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t G1_SAMP_DIS_CYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1SAMPDISEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_SAMP_DIS_EN:1;
      uint64_t reservedSpace0:7;
      uint64_t G2_SAMP_DIS_CYC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2SAMPDISEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_CHID:5;
      uint64_t reservedSpace0:3;
      uint64_t COMP_CHID:5;
      uint64_t reservedSpace1:1;
      uint64_t CMP_GELT:1;
      uint64_t CHNTHR_COMP:1;
      uint64_t MAG_THR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINT0CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAG0MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_CHID:5;
      uint64_t reservedSpace0:3;
      uint64_t COMP_CHID:5;
      uint64_t reservedSpace1:1;
      uint64_t CMP_GELT:1;
      uint64_t CHNTHR_COMP:1;
      uint64_t MAG_THR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINT1CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG1_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAG1MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_CHID:5;
      uint64_t reservedSpace0:3;
      uint64_t COMP_CHID:5;
      uint64_t reservedSpace1:1;
      uint64_t CMP_GELT:1;
      uint64_t CHNTHR_COMP:1;
      uint64_t MAG_THR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINT2CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG2_MASK:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAG2MASK;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_ENA_SET:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTENASET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_ENA_CLR:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTENACLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_FLG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MAG_INT_OFF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADMAGINTOFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_FIFO_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVFIFORESETCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_FIFO_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1FIFORESETCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_FIFO_RESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2FIFORESETCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EV_RAM_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADEVRAMWRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G1_RAM_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG1RAMWRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t G2_RAM_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADG2RAMWRADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADPARCR;

  uint32_t ADPARADDR;
};

#define ADC_ADC1 (*(volatile struct ADC_ADC1_tag *) 0xfff7c200)

struct DCAN_DCAN1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Init:1;
      uint64_t IE0:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t Test:1;
      uint64_t IDS:1;
      uint64_t ABO:1;
      uint64_t PMD:4;
      uint64_t reservedSpace1:1;
      uint64_t SWR:1;
      uint64_t InitDbg:1;
      uint64_t IE1:1;
      uint64_t DE1:1;
      uint64_t DE2:1;
      uint64_t DE3:1;
      uint64_t reservedSpace2:3;
      uint64_t PDR:1;
      uint64_t WUBA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TxOk:1;
      uint64_t RxOk:1;
      uint64_t EPass:1;
      uint64_t EWarn:1;
      uint64_t BOff:1;
      uint64_t PER:1;
      uint64_t WakeUp_Pnd:1;
      uint64_t PDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ERRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSeg1:4;
      uint64_t TSeg2:3;
      uint64_t reservedSpace0:1;
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_BTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntID:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t Silent:1;
      uint64_t LBack:1;
      uint64_t Tx:2;
      uint64_t Rx:1;
      uint64_t EXL:1;
      uint64_t RDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TEST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t Word_Number:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_PERR;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ABOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqstReg1:2;
      uint64_t TxRqstReg2:2;
      uint64_t TxRqstReg3:2;
      uint64_t TxRqstReg4:2;
      uint64_t TxRqstReg5:2;
      uint64_t TxRqstReg6:2;
      uint64_t TxRqstReg7:2;
      uint64_t TxRqstReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDatReg1:2;
      uint64_t NewDatReg2:2;
      uint64_t NewDatReg3:2;
      uint64_t NewDatReg4:2;
      uint64_t NewDatReg5:2;
      uint64_t NewDatReg6:2;
      uint64_t NewDatReg7:2;
      uint64_t NewDatReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPndReg1:2;
      uint64_t IntPndReg2:2;
      uint64_t IntPndReg3:2;
      uint64_t IntPndReg4:2;
      uint64_t IntPndReg5:2;
      uint64_t IntPndReg6:2;
      uint64_t IntPndReg7:2;
      uint64_t IntPndReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVALReg1:2;
      uint64_t MSGVALReg2:2;
      uint64_t MSGVALReg3:2;
      uint64_t MSGVALReg4:2;
      uint64_t MSGVALReg5:2;
      uint64_t MSGVALReg6:2;
      uint64_t MSGVALReg7:2;
      uint64_t MSGVALReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL78;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX78;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t reservedSpace0:6;
      uint64_t DMAactive:1;
      uint64_t Busy:1;
      uint64_t Data_B:1;
      uint64_t Data_A:1;
      uint64_t TxRqstNewDat:1;
      uint64_t ClrIntPnd:1;
      uint64_t Control:1;
      uint64_t Arb:1;
      uint64_t Mask:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1DATA_1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t reservedSpace0:6;
      uint64_t DMAactive:1;
      uint64_t Busy:1;
      uint64_t Data_B:1;
      uint64_t Data_A:1;
      uint64_t TxRqstNewDat:1;
      uint64_t ClrIntPnd:1;
      uint64_t Control:1;
      uint64_t Arb:1;
      uint64_t Mask:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2DATA_1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Mask:1;
      uint64_t Arb:1;
      uint64_t Ctrl:1;
      uint64_t DataA:1;
      uint64_t DataB:1;
      uint64_t reservedSpace0:3;
      uint64_t IF3_0:1;
      uint64_t IF3_1:1;
      uint64_t IF3_2:1;
      uint64_t IF3_3:1;
      uint64_t IF3_4:1;
      uint64_t reservedSpace1:2;
      uint64_t IF3_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3OBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3DATA_1;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD78;

  uint8_t res7[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t In:1;
      uint64_t Out:1;
      uint64_t Dir:1;
      uint64_t Func:1;
      uint64_t reservedSpace0:12;
      uint64_t OD:1;
      uint64_t PD:1;
      uint64_t PU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TIOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t In:1;
      uint64_t Out:1;
      uint64_t Dir:1;
      uint64_t Func:1;
      uint64_t reservedSpace0:12;
      uint64_t OD:1;
      uint64_t PD:1;
      uint64_t PU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_RIOC;

};

#define DCAN_DCAN1 (*(volatile struct DCAN_DCAN1_tag *) 0xfff7dc00)

struct DCAN_DCAN2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Init:1;
      uint64_t IE0:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t Test:1;
      uint64_t IDS:1;
      uint64_t ABO:1;
      uint64_t PMD:4;
      uint64_t reservedSpace1:1;
      uint64_t SWR:1;
      uint64_t InitDbg:1;
      uint64_t IE1:1;
      uint64_t DE1:1;
      uint64_t DE2:1;
      uint64_t DE3:1;
      uint64_t reservedSpace2:3;
      uint64_t PDR:1;
      uint64_t WUBA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TxOk:1;
      uint64_t RxOk:1;
      uint64_t EPass:1;
      uint64_t EWarn:1;
      uint64_t BOff:1;
      uint64_t PER:1;
      uint64_t WakeUp_Pnd:1;
      uint64_t PDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ERRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSeg1:4;
      uint64_t TSeg2:3;
      uint64_t reservedSpace0:1;
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_BTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntID:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t Silent:1;
      uint64_t LBack:1;
      uint64_t Tx:2;
      uint64_t Rx:1;
      uint64_t EXL:1;
      uint64_t RDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TEST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t Word_Number:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_PERR;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ABOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqstReg1:2;
      uint64_t TxRqstReg2:2;
      uint64_t TxRqstReg3:2;
      uint64_t TxRqstReg4:2;
      uint64_t TxRqstReg5:2;
      uint64_t TxRqstReg6:2;
      uint64_t TxRqstReg7:2;
      uint64_t TxRqstReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDatReg1:2;
      uint64_t NewDatReg2:2;
      uint64_t NewDatReg3:2;
      uint64_t NewDatReg4:2;
      uint64_t NewDatReg5:2;
      uint64_t NewDatReg6:2;
      uint64_t NewDatReg7:2;
      uint64_t NewDatReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPndReg1:2;
      uint64_t IntPndReg2:2;
      uint64_t IntPndReg3:2;
      uint64_t IntPndReg4:2;
      uint64_t IntPndReg5:2;
      uint64_t IntPndReg6:2;
      uint64_t IntPndReg7:2;
      uint64_t IntPndReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVALReg1:2;
      uint64_t MSGVALReg2:2;
      uint64_t MSGVALReg3:2;
      uint64_t MSGVALReg4:2;
      uint64_t MSGVALReg5:2;
      uint64_t MSGVALReg6:2;
      uint64_t MSGVALReg7:2;
      uint64_t MSGVALReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL78;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX78;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t reservedSpace0:6;
      uint64_t DMAactive:1;
      uint64_t Busy:1;
      uint64_t Data_B:1;
      uint64_t Data_A:1;
      uint64_t TxRqstNewDat:1;
      uint64_t ClrIntPnd:1;
      uint64_t Control:1;
      uint64_t Arb:1;
      uint64_t Mask:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1DATA_1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t reservedSpace0:6;
      uint64_t DMAactive:1;
      uint64_t Busy:1;
      uint64_t Data_B:1;
      uint64_t Data_A:1;
      uint64_t TxRqstNewDat:1;
      uint64_t ClrIntPnd:1;
      uint64_t Control:1;
      uint64_t Arb:1;
      uint64_t Mask:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2DATA_1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Mask:1;
      uint64_t Arb:1;
      uint64_t Ctrl:1;
      uint64_t DataA:1;
      uint64_t DataB:1;
      uint64_t reservedSpace0:3;
      uint64_t IF3_0:1;
      uint64_t IF3_1:1;
      uint64_t IF3_2:1;
      uint64_t IF3_3:1;
      uint64_t IF3_4:1;
      uint64_t reservedSpace1:2;
      uint64_t IF3_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3OBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3DATA_1;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD78;

  uint8_t res7[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t In:1;
      uint64_t Out:1;
      uint64_t Dir:1;
      uint64_t Func:1;
      uint64_t reservedSpace0:12;
      uint64_t OD:1;
      uint64_t PD:1;
      uint64_t PU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TIOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t In:1;
      uint64_t Out:1;
      uint64_t Dir:1;
      uint64_t Func:1;
      uint64_t reservedSpace0:12;
      uint64_t OD:1;
      uint64_t PD:1;
      uint64_t PU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_RIOC;

};

#define DCAN_DCAN2 (*(volatile struct DCAN_DCAN2_tag *) 0xfff7de00)

struct DCAN_DCAN3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Init:1;
      uint64_t IE0:1;
      uint64_t SIE:1;
      uint64_t EIE:1;
      uint64_t reservedSpace0:1;
      uint64_t DAR:1;
      uint64_t CCE:1;
      uint64_t Test:1;
      uint64_t IDS:1;
      uint64_t ABO:1;
      uint64_t PMD:4;
      uint64_t reservedSpace1:1;
      uint64_t SWR:1;
      uint64_t InitDbg:1;
      uint64_t IE1:1;
      uint64_t DE1:1;
      uint64_t DE2:1;
      uint64_t DE3:1;
      uint64_t reservedSpace2:3;
      uint64_t PDR:1;
      uint64_t WUBA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEC:3;
      uint64_t TxOk:1;
      uint64_t RxOk:1;
      uint64_t EPass:1;
      uint64_t EWarn:1;
      uint64_t BOff:1;
      uint64_t PER:1;
      uint64_t WakeUp_Pnd:1;
      uint64_t PDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TEC:8;
      uint64_t REC:7;
      uint64_t RP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ERRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:6;
      uint64_t SJW:2;
      uint64_t TSeg1:4;
      uint64_t TSeg2:3;
      uint64_t reservedSpace0:1;
      uint64_t BRPE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_BTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntID:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:3;
      uint64_t Silent:1;
      uint64_t LBack:1;
      uint64_t Tx:2;
      uint64_t Rx:1;
      uint64_t EXL:1;
      uint64_t RDA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TEST;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t Word_Number:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_PERR;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ABO:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_ABOTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqstReg1:2;
      uint64_t TxRqstReg2:2;
      uint64_t TxRqstReg3:2;
      uint64_t TxRqstReg4:2;
      uint64_t TxRqstReg5:2;
      uint64_t TxRqstReg6:2;
      uint64_t TxRqstReg7:2;
      uint64_t TxRqstReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TxRqst:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TXRQ78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDatReg1:2;
      uint64_t NewDatReg2:2;
      uint64_t NewDatReg3:2;
      uint64_t NewDatReg4:2;
      uint64_t NewDatReg5:2;
      uint64_t NewDatReg6:2;
      uint64_t NewDatReg7:2;
      uint64_t NewDatReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NewDat:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_NWDAT78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPndReg1:2;
      uint64_t IntPndReg2:2;
      uint64_t IntPndReg3:2;
      uint64_t IntPndReg4:2;
      uint64_t IntPndReg5:2;
      uint64_t IntPndReg6:2;
      uint64_t IntPndReg7:2;
      uint64_t IntPndReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IntPnd:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTPND78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVALReg1:2;
      uint64_t MSGVALReg2:2;
      uint64_t MSGVALReg3:2;
      uint64_t MSGVALReg4:2;
      uint64_t MSGVALReg5:2;
      uint64_t MSGVALReg6:2;
      uint64_t MSGVALReg7:2;
      uint64_t MSGVALReg8:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSGVAL:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_MSGVAL78;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTMUX:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_INTMUX78;

  uint8_t res3[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t reservedSpace0:6;
      uint64_t DMAactive:1;
      uint64_t Busy:1;
      uint64_t Data_B:1;
      uint64_t Data_A:1;
      uint64_t TxRqstNewDat:1;
      uint64_t ClrIntPnd:1;
      uint64_t Control:1;
      uint64_t Arb:1;
      uint64_t Mask:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF1DATA_1;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Message_Number:8;
      uint64_t reservedSpace0:6;
      uint64_t DMAactive:1;
      uint64_t Busy:1;
      uint64_t Data_B:1;
      uint64_t Data_A:1;
      uint64_t TxRqstNewDat:1;
      uint64_t ClrIntPnd:1;
      uint64_t Control:1;
      uint64_t Arb:1;
      uint64_t Mask:1;
      uint64_t WRRD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF2DATA_1;

  uint8_t res5[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Mask:1;
      uint64_t Arb:1;
      uint64_t Ctrl:1;
      uint64_t DataA:1;
      uint64_t DataB:1;
      uint64_t reservedSpace0:3;
      uint64_t IF3_0:1;
      uint64_t IF3_1:1;
      uint64_t IF3_2:1;
      uint64_t IF3_3:1;
      uint64_t IF3_4:1;
      uint64_t reservedSpace1:2;
      uint64_t IF3_5:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3OBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Msk:29;
      uint64_t reservedSpace0:1;
      uint64_t MDir:1;
      uint64_t MXtd:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3MSK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ID:29;
      uint64_t Dir:1;
      uint64_t Xtd:1;
      uint64_t MsgVal:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3ARB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:3;
      uint64_t reservedSpace0:4;
      uint64_t EoB:1;
      uint64_t TxRqst:1;
      uint64_t RmtEn:1;
      uint64_t RxIE:1;
      uint64_t TxIE:1;
      uint64_t UMask:1;
      uint64_t IntPnd:1;
      uint64_t MsgLst:1;
      uint64_t NewDat:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3MCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_0:8;
      uint64_t Data_1:8;
      uint64_t Data_2:8;
      uint64_t Data_3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3DATA_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Data_4:8;
      uint64_t Data_5:8;
      uint64_t Data_6:8;
      uint64_t Data_7:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3DATA_1;

  uint8_t res6[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IF3UPD:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_IF3UPD78;

  uint8_t res7[112];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t In:1;
      uint64_t Out:1;
      uint64_t Dir:1;
      uint64_t Func:1;
      uint64_t reservedSpace0:12;
      uint64_t OD:1;
      uint64_t PD:1;
      uint64_t PU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_TIOC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t In:1;
      uint64_t Out:1;
      uint64_t Dir:1;
      uint64_t Func:1;
      uint64_t reservedSpace0:12;
      uint64_t OD:1;
      uint64_t PD:1;
      uint64_t PU:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCAN_RIOC;

};

#define DCAN_DCAN3 (*(volatile struct DCAN_DCAN3_tag *) 0xfff7e000)

struct I2C_tag
{
  union
  {
    uint16_t R;
    struct
    {
      uint64_t OA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2COAR;

  uint8_t res0[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t ALEN:1;
      uint64_t NACKEN:1;
      uint64_t ARDYEN:1;
      uint64_t RXRDYEN:1;
      uint64_t TXRDYEN:1;
      uint64_t SCDEN:1;
      uint64_t AASEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CIMR;

  uint8_t res1[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t AL:1;
      uint64_t NACK:1;
      uint64_t ARDY:1;
      uint64_t RXRDY:1;
      uint64_t TXRDY:1;
      uint64_t SCD:1;
      uint64_t reservedSpace0:2;
      uint64_t AD0:1;
      uint64_t AAS:1;
      uint64_t XSMT:1;
      uint64_t RSFULL:1;
      uint64_t BB:1;
      uint64_t NACKSNT:1;
      uint64_t SDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CSTR;

  uint8_t res2[2];

  uint16_t I2CCKL;
  uint8_t res3[2];

  uint16_t I2CCKH;
  uint8_t res4[2];

  uint16_t I2CCNT;
  uint8_t res5[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATARX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDRR;

  uint8_t res6[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SA:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CSAR;

  uint8_t res7[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t DATATX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDXR;

  uint8_t res8[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BC:3;
      uint64_t FDF:1;
      uint64_t STB:1;
      uint64_t nIRS:1;
      uint64_t DLB:1;
      uint64_t RM:1;
      uint64_t XA:1;
      uint64_t TRX:1;
      uint64_t MST:1;
      uint64_t STP:1;
      uint64_t reservedSpace0:1;
      uint64_t STT:1;
      uint64_t FREE:1;
      uint64_t NACKMOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CMDR;

  uint8_t res9[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t INTCODE:3;
      uint64_t reservedSpace0:5;
      uint64_t TESTMD:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CIVR;

  uint8_t res10[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t BCM:1;
      uint64_t IGNACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CEMDR;

  uint8_t res11[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PSC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPSC;

  uint8_t res12[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t REVISION:8;
      uint64_t CLASS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPID1;

  uint8_t res13[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t TYPE:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPID2;

  uint8_t res14[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t RXDMAEN:1;
      uint64_t TXDMAEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDMACR;

  uint8_t res15[10];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t PINFUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPFNC;

  uint8_t res16[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLDIR:1;
      uint64_t SDADIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPDIR;

  uint8_t res17[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLIN:1;
      uint64_t SDAIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDIN;

  uint8_t res18[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLOUT:1;
      uint64_t SDAOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDOUT;

  uint8_t res19[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLSET:1;
      uint64_t SDASET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDSET;

  uint8_t res20[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLCLR:1;
      uint64_t SDACLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CDCLR;

  uint8_t res21[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLPDR:1;
      uint64_t SDAPDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPDR;

  uint8_t res22[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLPDIS:1;
      uint64_t SDAPDIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPDIS;

  uint8_t res23[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLPSEL:1;
      uint64_t SDAPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CPSEL;

  uint8_t res24[2];

  union
  {
    uint16_t R;
    struct
    {
      uint64_t SCLSRS:1;
      uint64_t SDASRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(2))) I2CSRS;

};

#define I2C (*(volatile struct I2C_tag *) 0xfff7d400)

struct EMAC_tag
{
  uint32_t TXREVID;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXTDNCH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXTEARDOWN;

  uint8_t res0[4];

  uint32_t RXREVID;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXTDNCH:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXTEARDOWN;

  uint8_t res1[100];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX0PEND:1;
      uint64_t TX1PEND:1;
      uint64_t TX2PEND:1;
      uint64_t TX3PEND:1;
      uint64_t TX4PEND:1;
      uint64_t TX5PEND:1;
      uint64_t TX6PEND:1;
      uint64_t TX7PEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXINTSTATRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX0PEND:1;
      uint64_t TX1PEND:1;
      uint64_t TX2PEND:1;
      uint64_t TX3PEND:1;
      uint64_t TX4PEND:1;
      uint64_t TX5PEND:1;
      uint64_t TX6PEND:1;
      uint64_t TX7PEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXINTSTATMASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX0MASK:1;
      uint64_t TX1MASK:1;
      uint64_t TX2MASK:1;
      uint64_t TX3MASK:1;
      uint64_t TX4MASK:1;
      uint64_t TX5MASK:1;
      uint64_t TX6MASK:1;
      uint64_t TX7MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXINTMASKSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX0MASK:1;
      uint64_t TX1MASK:1;
      uint64_t TX2MASK:1;
      uint64_t TX3MASK:1;
      uint64_t TX4MASK:1;
      uint64_t TX5MASK:1;
      uint64_t TX6MASK:1;
      uint64_t TX7MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXINTMASKCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXPEND:8;
      uint64_t RXTHRESHPEND:8;
      uint64_t TXPEND:8;
      uint64_t USERINT0:1;
      uint64_t LINKINT0:1;
      uint64_t HOSTPEND:1;
      uint64_t STATPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACINVECTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTVECT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACEOIVECTOR;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX0PEND:1;
      uint64_t RX1PEND:1;
      uint64_t RX2PEND:1;
      uint64_t RX3PEND:1;
      uint64_t RX4PEND:1;
      uint64_t RX5PEND:1;
      uint64_t RX6PEND:1;
      uint64_t RX7PEND:1;
      uint64_t RX0THRESHPEND:1;
      uint64_t RX1THRESHPEND:1;
      uint64_t RX2THRESHPEND:1;
      uint64_t RX3THRESHPEND:1;
      uint64_t RX4THRESHPEND:1;
      uint64_t RX5THRESHPEND:1;
      uint64_t RX6THRESHPEND:1;
      uint64_t RX7THRESHPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXINTSTATRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX0PEND:1;
      uint64_t RX1PEND:1;
      uint64_t RX2PEND:1;
      uint64_t RX3PEND:1;
      uint64_t RX4PEND:1;
      uint64_t RX5PEND:1;
      uint64_t RX6PEND:1;
      uint64_t RX7PEND:1;
      uint64_t RX0THRESHPEND:1;
      uint64_t RX1THRESHPEND:1;
      uint64_t RX2THRESHPEND:1;
      uint64_t RX3THRESHPEND:1;
      uint64_t RX4THRESHPEND:1;
      uint64_t RX5THRESHPEND:1;
      uint64_t RX6THRESHPEND:1;
      uint64_t RX7THRESHPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXINTSTATMASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX0MASK:1;
      uint64_t RX1MASK:1;
      uint64_t RX2MASK:1;
      uint64_t RX3MASK:1;
      uint64_t RX4MASK:1;
      uint64_t RX5MASK:1;
      uint64_t RX6MASK:1;
      uint64_t RX7MASK:1;
      uint64_t RX0THRESHMASK:1;
      uint64_t RX1THRESHMASK:1;
      uint64_t RX2THRESHMASK:1;
      uint64_t RX3THRESHMASK:1;
      uint64_t RX4THRESHMASK:1;
      uint64_t RX5THRESHMASK:1;
      uint64_t RX6THRESHMASK:1;
      uint64_t RX7THRESHMASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXINTMASKSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX0MASK:1;
      uint64_t RX1MASK:1;
      uint64_t RX2MASK:1;
      uint64_t RX3MASK:1;
      uint64_t RX4MASK:1;
      uint64_t RX5MASK:1;
      uint64_t RX6MASK:1;
      uint64_t RX7MASK:1;
      uint64_t RX0THRESHMASK:1;
      uint64_t RX1THRESHMASK:1;
      uint64_t RX2THRESHMASK:1;
      uint64_t RX3THRESHMASK:1;
      uint64_t RX4THRESHMASK:1;
      uint64_t RX5THRESHMASK:1;
      uint64_t RX6THRESHMASK:1;
      uint64_t RX7THRESHMASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXINTMASKCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATPEND:1;
      uint64_t HOSTPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACINTSTATRAW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATPEND:1;
      uint64_t HOSTPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACINTSTATMASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATPEND:1;
      uint64_t HOSTPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACINTMASKSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STATPEND:1;
      uint64_t HOSTPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACINTMASKCLEAR;

  uint8_t res3[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMULTCH:3;
      uint64_t reservedSpace0:2;
      uint64_t RXMULTEN:1;
      uint64_t reservedSpace1:2;
      uint64_t RXBROADCH:3;
      uint64_t reservedSpace2:2;
      uint64_t RXBROADEN:1;
      uint64_t reservedSpace3:2;
      uint64_t RXPROMCH:3;
      uint64_t reservedSpace4:2;
      uint64_t RXCAFEN:1;
      uint64_t RXCEFEN:1;
      uint64_t RXCSFEN:1;
      uint64_t RXCMFEN:1;
      uint64_t reservedSpace5:3;
      uint64_t RXNOCHAIN:1;
      uint64_t RXQOSEN:1;
      uint64_t RXPASSCRC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMBPENABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCH0EN:1;
      uint64_t RXCH1EN:1;
      uint64_t RXCH2EN:1;
      uint64_t RXCH3EN:1;
      uint64_t RXCH4EN:1;
      uint64_t RXCH5EN:1;
      uint64_t RXCH6EN:1;
      uint64_t RXCH7EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUNICASTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXCH0EN:1;
      uint64_t RXCH1EN:1;
      uint64_t RXCH2EN:1;
      uint64_t RXCH3EN:1;
      uint64_t RXCH4EN:1;
      uint64_t RXCH5EN:1;
      uint64_t RXCH6EN:1;
      uint64_t RXCH7EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXUNICASTCLEAR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXMAXLEN:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXMAXLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBUFFEROFFSET:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXBUFFEROFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXFILTERTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXFILTERLOWTHRESH;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX0FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX0FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX1FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX1FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX2FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX2FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX3FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX3FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX4FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX4FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX5FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX5FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX6FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX6FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX7FLOWTHRESH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX7FLOWTHRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX0FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX0FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX1FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX1FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX2FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX2FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX3FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX3FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX4FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX4FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX5FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX5FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX6FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX6FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RX7FREEBUF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX7FREEBUFFER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FULLDUPLEX:1;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace0:1;
      uint64_t RXBUFFERFLOWEN:1;
      uint64_t TXFLOWEN:1;
      uint64_t GMIIEN:1;
      uint64_t TXPACE:1;
      uint64_t reservedSpace1:2;
      uint64_t TXPTYPE:1;
      uint64_t TXSHORTGAPEN:1;
      uint64_t CMDIDLE:1;
      uint64_t reservedSpace2:1;
      uint64_t RXOWNERSHIP:1;
      uint64_t RXOFFLENBLOCK:1;
      uint64_t RMIISPEED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXFLOWACT:1;
      uint64_t RXFLOWACT:1;
      uint64_t RXQOSACT:1;
      uint64_t reservedSpace0:5;
      uint64_t RXERRCH:3;
      uint64_t reservedSpace1:1;
      uint64_t RXERRCODE:4;
      uint64_t TXERRCH:3;
      uint64_t reservedSpace2:1;
      uint64_t TXERRCODE:4;
      uint64_t reservedSpace3:7;
      uint64_t IDLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREE:1;
      uint64_t SOFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EMCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXCELLTHRESH:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACCFIG:8;
      uint64_t ADDRESSTYPE:8;
      uint64_t RXCELLDEPTH:8;
      uint64_t TXCELLDEPTH:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACCONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SOFTRESET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SOFTRESET_0;

  uint8_t res5[88];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSRCADDR1:8;
      uint64_t MACSRCADDR0:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSRCADDRLO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACSRCADDR5:8;
      uint64_t MACSRCADDR4:8;
      uint64_t MACSRCADDR3:8;
      uint64_t MACSRCADDR2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACSRCADDRHI;

  uint32_t MACHASH1;
  uint32_t MACHASH2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXBACKOFF:10;
      uint64_t reservedSpace0:2;
      uint64_t COLLCOUNT:4;
      uint64_t RNDNUM:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BOFFTEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACEVAL:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TPACETEST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAUSETIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXPAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAUSETIMER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXPAUSE;

  uint8_t res6[16];

  uint32_t RXGOODFRAMES;
  uint32_t RXBCASTFRAMES;
  uint32_t RXMCASTFRAMES;
  uint32_t RXPAUSEFRAMES;
  uint32_t RXCRCERRORS;
  uint32_t RXALIGNCODEERRORS;
  uint32_t RXOVERSIZED;
  uint32_t RXJABBER;
  uint32_t RXUNDERSIZED;
  uint32_t RXFRAGMENTS;
  uint32_t RXFILTERED;
  uint32_t RXQOSFILTERED;
  uint32_t RXOCTETS;
  uint32_t TXGOODFRAMES;
  uint32_t TXBCASTFRAMES;
  uint32_t TXMCASTFRAMES;
  uint32_t TXPAUSEFRAMES;
  uint32_t TXDEFERRED;
  uint32_t TXCOLLISION;
  uint32_t TXSINGLECOLL;
  uint32_t TXMULTICOLL;
  uint32_t TXEXCESSIVECOLL;
  uint32_t TXLATECOLL;
  uint32_t TXUNDERRUN;
  uint32_t TXCARRIERSENSE;
  uint32_t TXOCTETS;
  uint32_t FRAME64;
  uint32_t FRAME65T127;
  uint32_t FRAME128T255;
  uint32_t FRAME256T511;
  uint32_t FRAME512T1023;
  uint32_t FRAME1024TUP;
  uint32_t NETOCTETS;
  uint32_t RXSOFOVERRUNS;
  uint32_t RXMOFOVERRUNS;
  uint32_t RXDMAOVERRUNS;
  uint8_t res7[624];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACADDR1:8;
      uint64_t MACADDR0:8;
      uint64_t CHANNEL:3;
      uint64_t MATCHFILT:1;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACADDRLO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACADDR5:8;
      uint64_t MACADDR4:8;
      uint64_t MACADDR3:8;
      uint64_t MACADDR2:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACADDRHI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MACINDEX:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MACINDEX;

  uint8_t res8[244];

  uint32_t TX0HDP;
  uint32_t TX1HDP;
  uint32_t TX2HDP;
  uint32_t TX3HDP;
  uint32_t TX4HDP;
  uint32_t TX5HDP;
  uint32_t TX6HDP;
  uint32_t TX7HDP;
  uint32_t RX0HDP;
  uint32_t RX1HDP;
  uint32_t RX2HDP;
  uint32_t RX3HDP;
  uint32_t RX4HDP;
  uint32_t RX5HDP;
  uint32_t RX6HDP;
  uint32_t RX7HDP;
  uint32_t TX0CP;
  uint32_t TX1CP;
  uint32_t TX2CP;
  uint32_t TX3CP;
  uint32_t TX4CP;
  uint32_t TX5CP;
  uint32_t TX6CP;
  uint32_t TX7CP;
  uint32_t RX0CP;
  uint32_t RX1CP;
  uint32_t RX2CP;
  uint32_t RX3CP;
  uint32_t RX4CP;
  uint32_t RX5CP;
  uint32_t RX6CP;
  uint32_t RX7CP;
  uint8_t res9[384];

  uint32_t REVID;
  uint32_t SOFTRESET_1;
  uint8_t res10[4];

  uint32_t INTCONTROL;
  uint32_t C0RXTHRESHEN;
  uint32_t C0RXEN;
  uint32_t C0TXEN;
  uint32_t C0MISCEN;
  uint8_t res11[32];

  uint32_t C0RXTHRESHSTAT;
  uint32_t C0RXSTAT;
  uint32_t C0TXSTAT;
  uint32_t C0MISCSTAT;
  uint8_t res12[32];

  uint32_t C0RXIMAX;
  uint32_t C0TXIMAX;
};

#define EMAC (*(volatile struct EMAC_tag *) 0xfcf78000)

struct MDIO_tag
{
  uint32_t REVID;
  uint32_t CONTROL;
  uint32_t ALIVE;
  uint32_t LINK;
  uint32_t LINKINTRAW;
  uint32_t LINKINTMASKED;
  uint8_t res0[8];

  uint32_t USERINTRAW;
  uint32_t USERINTMASKED;
  uint32_t USERINTMASKSET;
  uint32_t USERINTMASKCLEAR;
  uint8_t res1[80];

  uint32_t USERACCESS0;
  uint32_t USERPHYSEL0;
  uint32_t USERACCESS1;
  uint32_t USERPHYSEL1;
};

#define MDIO (*(volatile struct MDIO_tag *) 0xfcf78900)

struct FTU_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSO:14;
      uint64_t TPTCC:1;
      uint64_t THTCC:1;
      uint64_t TPTSM:1;
      uint64_t THTSM:1;
      uint64_t STXR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TCR;

  uint8_t res0[508];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAB0:1;
      uint64_t reservedSpace0:7;
      uint64_t PAB1:1;
      uint64_t reservedSpace1:7;
      uint64_t PAB2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Parity_Information_in_TCR_Parity_Test_Mode;

  uint8_t res1[10984956];

  uint32_t GSN0;
  uint32_t GSN1;
  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUE:1;
      uint64_t TUH:1;
      uint64_t reservedSpace0:2;
      uint64_t EILE:1;
      uint64_t SILE:1;
      uint64_t reservedSpace1:2;
      uint64_t ETSM:1;
      uint64_t reservedSpace2:3;
      uint64_t CTTSM:1;
      uint64_t CTTCC:1;
      uint64_t CETESM:1;
      uint64_t reservedSpace3:1;
      uint64_t PAL:4;
      uint64_t PFT:1;
      uint64_t PRIO:1;
      uint64_t reservedSpace4:2;
      uint64_t ENDP:2;
      uint64_t ENDH:2;
      uint64_t ENDR:2;
      uint64_t ENDVBS:1;
      uint64_t ENDVBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TUE:1;
      uint64_t TUH:1;
      uint64_t reservedSpace0:2;
      uint64_t EILE:1;
      uint64_t SILE:1;
      uint64_t reservedSpace1:2;
      uint64_t ETSM:1;
      uint64_t reservedSpace2:3;
      uint64_t CTTSM:1;
      uint64_t CTTCC:1;
      uint64_t CETESM:1;
      uint64_t reservedSpace3:1;
      uint64_t PAL:4;
      uint64_t PFT:1;
      uint64_t PRIO:1;
      uint64_t reservedSpace4:2;
      uint64_t ENDP:2;
      uint64_t ENDH:2;
      uint64_t ENDR:2;
      uint64_t ENDVBS:1;
      uint64_t ENDVBM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BN:7;
      uint64_t reservedSpace0:1;
      uint64_t IDLE:1;
      uint64_t reservedSpace1:3;
      uint64_t STUH:1;
      uint64_t reservedSpace2:3;
      uint64_t TSMS:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TSCB;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTBCC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BN:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTBSM;

  uint32_t TBA;
  uint32_t NTBA;
  uint32_t BAMS;
  uint32_t SAMP;
  uint32_t EAMP;
  uint8_t res3[8];

  uint32_t TSMO1;
  uint32_t TSMO2;
  uint32_t TSMO3;
  uint32_t TSMO4;
  uint32_t TCCO1;
  uint32_t TCCO2;
  uint32_t TCCO3;
  uint32_t TCCO4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFF:8;
      uint64_t TDIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TOOFF;

  uint8_t res4[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEADR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAC:1;
      uint64_t TNR:1;
      uint64_t reservedSpace0:2;
      uint64_t SSTAT:3;
      uint64_t reservedSpace1:1;
      uint64_t RSTAT:3;
      uint64_t reservedSpace2:5;
      uint64_t PE:1;
      uint64_t MPV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACE:1;
      uint64_t TNRE:1;
      uint64_t reservedSpace0:2;
      uint64_t SSTATE:3;
      uint64_t reservedSpace1:1;
      uint64_t RSTATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEIRES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACE:1;
      uint64_t TNRE:1;
      uint64_t reservedSpace0:2;
      uint64_t SSTATE:3;
      uint64_t reservedSpace1:1;
      uint64_t RSTATE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEIRER;

  uint32_t TTSMS1;
  uint32_t TTSMR1;
  uint32_t TTSMS2;
  uint32_t TTSMR2;
  uint32_t TTSMS3;
  uint32_t TTSMR3;
  uint32_t TTSMS4;
  uint32_t TTSMR4;
  uint32_t TTCCS1;
  uint32_t TTCCR1;
  uint32_t TTCCS2;
  uint32_t TTCCR2;
  uint32_t TTCCS3;
  uint32_t TTCCR3;
  uint32_t TTCCS4;
  uint32_t TTCCR4;
  uint32_t ETESMS1;
  uint32_t ETESMR1;
  uint32_t ETESMS2;
  uint32_t ETESMR2;
  uint32_t ETESMS3;
  uint32_t ETESMR3;
  uint32_t ETESMS4;
  uint32_t ETESMR4;
  uint32_t CESMS1;
  uint32_t CESMR1;
  uint32_t CESMS2;
  uint32_t CESMR2;
  uint32_t CESMS3;
  uint32_t CESMR3;
  uint32_t CESMS4;
  uint32_t CESMR4;
  uint32_t TSMIES1;
  uint32_t TSMIER1;
  uint32_t TSMIES2;
  uint32_t TSMIER2;
  uint32_t TSMIES3;
  uint32_t TSMIER3;
  uint32_t TSMIES4;
  uint32_t TSMIER4;
  uint32_t TCCIES1;
  uint32_t TCCIER1;
  uint32_t TCCIES2;
  uint32_t TCCIER2;
  uint32_t TCCIES3;
  uint32_t TCCIER3;
  uint32_t TCCIES4;
  uint32_t TCCIER4;
};

#define FTU (*(volatile struct FTU_tag *) 0xff500000)

struct FlexRay_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRTEN:1;
      uint64_t ELBE:1;
      uint64_t reservedSpace0:2;
      uint64_t TMC:2;
      uint64_t reservedSpace1:2;
      uint64_t AOA:1;
      uint64_t AOB:1;
      uint64_t reservedSpace2:6;
      uint64_t RXA:1;
      uint64_t RXB:1;
      uint64_t TXA:1;
      uint64_t TXB:1;
      uint64_t TXENA:1;
      uint64_t TXENB:1;
      uint64_t reservedSpace3:2;
      uint64_t CERA:4;
      uint64_t CERB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RS:3;
      uint64_t reservedSpace0:1;
      uint64_t SSEL:3;
      uint64_t reservedSpace1:7;
      uint64_t WRPB:1;
      uint64_t RDPB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST2;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLK:8;
      uint64_t TMK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LCK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEMC:1;
      uint64_t CNA:1;
      uint64_t SFBM:1;
      uint64_t SFO:1;
      uint64_t CCF:1;
      uint64_t CCL:1;
      uint64_t PERR:1;
      uint64_t RFO:1;
      uint64_t EFA:1;
      uint64_t IIBA:1;
      uint64_t IOBA:1;
      uint64_t MHF:1;
      uint64_t reservedSpace0:4;
      uint64_t EDA:1;
      uint64_t LTVA:1;
      uint64_t TABA:1;
      uint64_t reservedSpace1:5;
      uint64_t EDB:1;
      uint64_t LTVB:1;
      uint64_t TABB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WST:1;
      uint64_t CAS:1;
      uint64_t CYCS:1;
      uint64_t TXI:1;
      uint64_t RXI:1;
      uint64_t RFNE:1;
      uint64_t RFCL:1;
      uint64_t NMVC:1;
      uint64_t TI0:1;
      uint64_t TI1:1;
      uint64_t TIBC:1;
      uint64_t TOBC:1;
      uint64_t SWE:1;
      uint64_t SUCS:1;
      uint64_t MBSI:1;
      uint64_t SDS:1;
      uint64_t WUPA:1;
      uint64_t MTSA:1;
      uint64_t reservedSpace0:6;
      uint64_t WUPB:1;
      uint64_t MTSB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEMCL:1;
      uint64_t CNAL:1;
      uint64_t SFBML:1;
      uint64_t SFOL:1;
      uint64_t CCFL:1;
      uint64_t CCLL:1;
      uint64_t PERRL:1;
      uint64_t RFOL:1;
      uint64_t EFAL:1;
      uint64_t IIBAL:1;
      uint64_t IOBAL:1;
      uint64_t MHFL:1;
      uint64_t reservedSpace0:4;
      uint64_t EDAL:1;
      uint64_t LTVAL:1;
      uint64_t TABAL:1;
      uint64_t reservedSpace1:5;
      uint64_t EDBL:1;
      uint64_t LTVBL:1;
      uint64_t TABBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSTL:1;
      uint64_t CASL:1;
      uint64_t CYCSL:1;
      uint64_t TXIL:1;
      uint64_t RXIL:1;
      uint64_t RFNEL:1;
      uint64_t RFCLL:1;
      uint64_t NMVCL:1;
      uint64_t TI0L:1;
      uint64_t TI1L:1;
      uint64_t TIBCL:1;
      uint64_t TOBCL:1;
      uint64_t SWEL:1;
      uint64_t SUCSL:1;
      uint64_t MBSIL:1;
      uint64_t SDSL:1;
      uint64_t WUPAL:1;
      uint64_t MTSAL:1;
      uint64_t reservedSpace0:6;
      uint64_t WUPBL:1;
      uint64_t MTSBL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SILS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEMCE:1;
      uint64_t CNAE:1;
      uint64_t SFBME:1;
      uint64_t SFOE:1;
      uint64_t CCFE:1;
      uint64_t CCLE:1;
      uint64_t PERRE:1;
      uint64_t RFOE:1;
      uint64_t EFAE:1;
      uint64_t IIBAE:1;
      uint64_t IOBAE:1;
      uint64_t MHFE:1;
      uint64_t reservedSpace0:4;
      uint64_t EDAE:1;
      uint64_t LTVAE:1;
      uint64_t TABAE:1;
      uint64_t reservedSpace1:5;
      uint64_t EDBE:1;
      uint64_t LTVBE:1;
      uint64_t TABBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEMCE:1;
      uint64_t CNAE:1;
      uint64_t SFBME:1;
      uint64_t SFOE:1;
      uint64_t CCFE:1;
      uint64_t CCLE:1;
      uint64_t PERRE:1;
      uint64_t RFOE:1;
      uint64_t EFAE:1;
      uint64_t IIBAE:1;
      uint64_t IOBAE:1;
      uint64_t MHFE:1;
      uint64_t reservedSpace0:4;
      uint64_t EDAE:1;
      uint64_t LTVAE:1;
      uint64_t TABAE:1;
      uint64_t reservedSpace1:5;
      uint64_t EDBE:1;
      uint64_t LTVBE:1;
      uint64_t TABBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSTE:1;
      uint64_t CASE:1;
      uint64_t CYCSE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t RFNEE:1;
      uint64_t RFCLE:1;
      uint64_t NMVCE:1;
      uint64_t TI0E:1;
      uint64_t TI1E:1;
      uint64_t TIBCE:1;
      uint64_t TOBCE:1;
      uint64_t SWEE:1;
      uint64_t SUCSE:1;
      uint64_t MBSIE:1;
      uint64_t SDSE:1;
      uint64_t WUPAE:1;
      uint64_t MTSAE:1;
      uint64_t reservedSpace0:6;
      uint64_t WUPBE:1;
      uint64_t MTSBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIES;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WSTE:1;
      uint64_t CASE:1;
      uint64_t CYCSE:1;
      uint64_t TXIE:1;
      uint64_t RXIE:1;
      uint64_t RFNEE:1;
      uint64_t RFCLE:1;
      uint64_t NMVCE:1;
      uint64_t TI0E:1;
      uint64_t TI1E:1;
      uint64_t TIBCE:1;
      uint64_t TOBCE:1;
      uint64_t SWEE:1;
      uint64_t SUCSE:1;
      uint64_t MBSIE:1;
      uint64_t SDSE:1;
      uint64_t WUPAE:1;
      uint64_t MTSAE:1;
      uint64_t reservedSpace0:6;
      uint64_t WUPBE:1;
      uint64_t MTSBE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EINT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ILE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TORC:1;
      uint64_t TOMS:1;
      uint64_t reservedSpace0:6;
      uint64_t TOCC:8;
      uint64_t TOMO:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T0C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t T1RC:1;
      uint64_t T1MS:1;
      uint64_t reservedSpace0:14;
      uint64_t TIMC:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) T1C;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ESWT:1;
      uint64_t SWMS:1;
      uint64_t EDGE:1;
      uint64_t SSWT:1;
      uint64_t EETP:1;
      uint64_t EINT0:1;
      uint64_t EINT1:1;
      uint64_t reservedSpace0:1;
      uint64_t SCCV:6;
      uint64_t reservedSpace1:2;
      uint64_t SMTV:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STPW1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSCVA:11;
      uint64_t reservedSpace0:5;
      uint64_t SSCVB:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STPW2;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMD:4;
      uint64_t reservedSpace0:3;
      uint64_t PBSY:1;
      uint64_t TXST:1;
      uint64_t TXSY:1;
      uint64_t reservedSpace1:1;
      uint64_t CSA:5;
      uint64_t PTA:4;
      uint64_t PTA4:1;
      uint64_t WUCS:1;
      uint64_t TSM:1;
      uint64_t HCSE:1;
      uint64_t MTSA:1;
      uint64_t MTSB:1;
      uint64_t CCHA:1;
      uint64_t CCHB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUCC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:21;
      uint64_t reservedSpace0:3;
      uint64_t LTN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUCC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WCP:4;
      uint64_t WCF:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SUCC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NML:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NEMC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TSST:4;
      uint64_t CASM:7;
      uint64_t reservedSpace0:1;
      uint64_t SPP:2;
      uint64_t BRP:2;
      uint64_t RXW:9;
      uint64_t reservedSpace1:1;
      uint64_t RPW:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXI:6;
      uint64_t reservedSpace0:2;
      uint64_t RXL:6;
      uint64_t reservedSpace1:2;
      uint64_t TXI:8;
      uint64_t TXL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRTC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SFDL:7;
      uint64_t reservedSpace0:9;
      uint64_t SLT:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MHDC;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UT:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MPC:14;
      uint64_t reservedSpace0:2;
      uint64_t SNM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t UIOA:8;
      uint64_t UIOB:8;
      uint64_t MIOA:7;
      uint64_t reservedSpace0:1;
      uint64_t MIOB:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NIT:14;
      uint64_t reservedSpace0:2;
      uint64_t OCS:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCA:8;
      uint64_t DCB:8;
      uint64_t CDD:5;
      uint64_t reservedSpace0:3;
      uint64_t DEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ASR:11;
      uint64_t reservedSpace0:5;
      uint64_t MOD:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SSL:10;
      uint64_t reservedSpace0:6;
      uint64_t NSS:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSL:6;
      uint64_t reservedSpace0:10;
      uint64_t NMS:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t APO:6;
      uint64_t reservedSpace0:2;
      uint64_t MAPO:5;
      uint64_t reservedSpace1:3;
      uint64_t DSI:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOC:14;
      uint64_t reservedSpace0:2;
      uint64_t MRC:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EOCC:2;
      uint64_t reservedSpace0:6;
      uint64_t ERCC:2;
      uint64_t reservedSpace1:6;
      uint64_t EOC:3;
      uint64_t reservedSpace2:5;
      uint64_t ERC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTUC11;

  uint8_t res3[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POCS:6;
      uint64_t FSI:1;
      uint64_t HQR:1;
      uint64_t SLM:2;
      uint64_t reservedSpace0:2;
      uint64_t CSNI:1;
      uint64_t CSAI:1;
      uint64_t CSI:1;
      uint64_t reservedSpace1:1;
      uint64_t WSV:3;
      uint64_t RCA:5;
      uint64_t PSL:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCSV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCFC:4;
      uint64_t reservedSpace0:2;
      uint64_t ERRM:2;
      uint64_t PTAC:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCEV;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SCCA:11;
      uint64_t reservedSpace0:5;
      uint64_t SCCB:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MTV:14;
      uint64_t reservedSpace0:2;
      uint64_t CCV:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTCCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RCV:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCV:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OCV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VSAE:4;
      uint64_t VSAO:4;
      uint64_t VSBE:4;
      uint64_t VSBO:4;
      uint64_t MOCS:1;
      uint64_t OCLR:1;
      uint64_t MRCS:1;
      uint64_t RCLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SFS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SESA:1;
      uint64_t SBSA:1;
      uint64_t TCSA:1;
      uint64_t SESB:1;
      uint64_t SBSB:1;
      uint64_t TCSB:1;
      uint64_t MTSA:1;
      uint64_t MTSB:1;
      uint64_t SENA:1;
      uint64_t SBNA:1;
      uint64_t SENB:1;
      uint64_t SBNB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWNIT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VFRA:1;
      uint64_t SEDA:1;
      uint64_t CEDA:1;
      uint64_t CIA:1;
      uint64_t SBVA:1;
      uint64_t reservedSpace0:3;
      uint64_t VFRB:1;
      uint64_t SEDB:1;
      uint64_t CEDB:1;
      uint64_t CIB:1;
      uint64_t SBVB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACS;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXEA:1;
      uint64_t RXEB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESID15;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OID:10;
      uint64_t reservedSpace0:4;
      uint64_t RXOA:1;
      uint64_t RXOB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSID15;

  uint8_t res7[4];

  uint32_t NMV1;
  uint32_t NMV2;
  uint32_t NMV3;
  uint8_t res8[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FDB:4;
      uint64_t reservedSpace0:4;
      uint64_t FFB:4;
      uint64_t reservedSpace1:4;
      uint64_t LCB:4;
      uint64_t reservedSpace2:4;
      uint64_t SEC:2;
      uint64_t SPLM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:2;
      uint64_t FID:11;
      uint64_t reservedSpace0:3;
      uint64_t CYF:7;
      uint64_t RSS:1;
      uint64_t RNF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t MFID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FRFM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FCL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIBF:1;
      uint64_t POBF:1;
      uint64_t PMR:1;
      uint64_t PTFB1:1;
      uint64_t PTFB2:1;
      uint64_t FMBD:1;
      uint64_t MFMB:1;
      uint64_t CRAM:1;
      uint64_t FMB:7;
      uint64_t reservedSpace0:1;
      uint64_t MBT:7;
      uint64_t reservedSpace1:1;
      uint64_t MBU:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MHDS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LDTA:11;
      uint64_t reservedSpace0:5;
      uint64_t LDTB:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LDTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RFNE:1;
      uint64_t RFCL:1;
      uint64_t RFO:1;
      uint64_t reservedSpace0:5;
      uint64_t RFFL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SNUA:1;
      uint64_t SNUB:1;
      uint64_t FNFA:1;
      uint64_t FNFB:1;
      uint64_t TBFA:1;
      uint64_t TBFB:1;
      uint64_t TNSB:1;
      uint64_t TNSA:1;
      uint64_t WAHP:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MHDF;

  uint32_t TXRQ1;
  uint32_t TXRQ2;
  uint32_t TXRQ3;
  uint32_t TXRQ4;
  uint32_t NDAT1;
  uint32_t NDAT2;
  uint32_t NDAT3;
  uint32_t NDAT4;
  uint32_t MBSC1;
  uint32_t MBSC2;
  uint32_t MBSC3;
  uint32_t MBSC4;
  uint8_t res9[160];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DAY:8;
      uint64_t MON:8;
      uint64_t YEAR:4;
      uint64_t STEP:8;
      uint64_t REL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CREL;

  uint32_t ENDN;
  uint8_t res10[8];

  uint32_t Write_Data_Section_1;
  uint32_t Write_Data_Section_2;
  uint32_t Write_Data_Section_3;
  uint32_t Write_Data_Section_4;
  uint32_t Write_Data_Section_5;
  uint32_t Write_Data_Section_6;
  uint32_t Write_Data_Section_7;
  uint32_t Write_Data_Section_8;
  uint32_t Write_Data_Section_9;
  uint32_t Write_Data_Section_10;
  uint32_t Write_Data_Section_11;
  uint32_t Write_Data_Section_12;
  uint32_t Write_Data_Section_13;
  uint32_t Write_Data_Section_14;
  uint32_t Write_Data_Section_15;
  uint32_t Write_Data_Section_16;
  uint32_t Write_Data_Section_17;
  uint32_t Write_Data_Section_18;
  uint32_t Write_Data_Section_19;
  uint32_t Write_Data_Section_20;
  uint32_t Write_Data_Section_21;
  uint32_t Write_Data_Section_22;
  uint32_t Write_Data_Section_23;
  uint32_t Write_Data_Section_24;
  uint32_t Write_Data_Section_25;
  uint32_t Write_Data_Section_26;
  uint32_t Write_Data_Section_27;
  uint32_t Write_Data_Section_28;
  uint32_t Write_Data_Section_29;
  uint32_t Write_Data_Section_30;
  uint32_t Write_Data_Section_31;
  uint32_t Write_Data_Section_32;
  uint32_t Write_Data_Section_33;
  uint32_t Write_Data_Section_34;
  uint32_t Write_Data_Section_35;
  uint32_t Write_Data_Section_36;
  uint32_t Write_Data_Section_37;
  uint32_t Write_Data_Section_38;
  uint32_t Write_Data_Section_39;
  uint32_t Write_Data_Section_40;
  uint32_t Write_Data_Section_41;
  uint32_t Write_Data_Section_42;
  uint32_t Write_Data_Section_43;
  uint32_t Write_Data_Section_44;
  uint32_t Write_Data_Section_45;
  uint32_t Write_Data_Section_46;
  uint32_t Write_Data_Section_47;
  uint32_t Write_Data_Section_48;
  uint32_t Write_Data_Section_49;
  uint32_t Write_Data_Section_50;
  uint32_t Write_Data_Section_51;
  uint32_t Write_Data_Section_52;
  uint32_t Write_Data_Section_53;
  uint32_t Write_Data_Section_54;
  uint32_t Write_Data_Section_55;
  uint32_t Write_Data_Section_56;
  uint32_t Write_Data_Section_57;
  uint32_t Write_Data_Section_58;
  uint32_t Write_Data_Section_59;
  uint32_t Write_Data_Section_60;
  uint32_t Write_Data_Section_61;
  uint32_t Write_Data_Section_62;
  uint32_t Write_Data_Section_63;
  uint32_t Write_Data_Section_64;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FID:11;
      uint64_t reservedSpace0:5;
      uint64_t CYC:7;
      uint64_t reservedSpace1:1;
      uint64_t CHA:1;
      uint64_t CHB:1;
      uint64_t CFG:1;
      uint64_t PPIT:1;
      uint64_t TXM:1;
      uint64_t MBI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRHS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:11;
      uint64_t reservedSpace0:5;
      uint64_t PLC:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRHS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DP:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRHS3;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LHSH:1;
      uint64_t LDSH:1;
      uint64_t STXRH:1;
      uint64_t reservedSpace0:13;
      uint64_t LHSS:1;
      uint64_t LDSS:1;
      uint64_t STXRS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IBCM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IBRH:7;
      uint64_t reservedSpace0:8;
      uint64_t IBSYH:1;
      uint64_t IBRS:7;
      uint64_t reservedSpace1:8;
      uint64_t IBSYS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IBCR;

  uint8_t res12[232];

  uint32_t Read_Data_Section_1;
  uint32_t Read_Data_Section_2;
  uint32_t Read_Data_Section_3;
  uint32_t Read_Data_Section_4;
  uint32_t Read_Data_Section_5;
  uint32_t Read_Data_Section_6;
  uint32_t Read_Data_Section_7;
  uint32_t Read_Data_Section_8;
  uint32_t Read_Data_Section_9;
  uint32_t Read_Data_Section_10;
  uint32_t Read_Data_Section_11;
  uint32_t Read_Data_Section_12;
  uint32_t Read_Data_Section_13;
  uint32_t Read_Data_Section_14;
  uint32_t Read_Data_Section_15;
  uint32_t Read_Data_Section_16;
  uint32_t Read_Data_Section_17;
  uint32_t Read_Data_Section_18;
  uint32_t Read_Data_Section_19;
  uint32_t Read_Data_Section_20;
  uint32_t Read_Data_Section_21;
  uint32_t Read_Data_Section_22;
  uint32_t Read_Data_Section_23;
  uint32_t Read_Data_Section_24;
  uint32_t Read_Data_Section_25;
  uint32_t Read_Data_Section_26;
  uint32_t Read_Data_Section_27;
  uint32_t Read_Data_Section_28;
  uint32_t Read_Data_Section_29;
  uint32_t Read_Data_Section_30;
  uint32_t Read_Data_Section_31;
  uint32_t Read_Data_Section_32;
  uint32_t Read_Data_Section_33;
  uint32_t Read_Data_Section_34;
  uint32_t Read_Data_Section_35;
  uint32_t Read_Data_Section_36;
  uint32_t Read_Data_Section_37;
  uint32_t Read_Data_Section_38;
  uint32_t Read_Data_Section_39;
  uint32_t Read_Data_Section_40;
  uint32_t Read_Data_Section_41;
  uint32_t Read_Data_Section_42;
  uint32_t Read_Data_Section_43;
  uint32_t Read_Data_Section_44;
  uint32_t Read_Data_Section_45;
  uint32_t Read_Data_Section_46;
  uint32_t Read_Data_Section_47;
  uint32_t Read_Data_Section_48;
  uint32_t Read_Data_Section_49;
  uint32_t Read_Data_Section_50;
  uint32_t Read_Data_Section_51;
  uint32_t Read_Data_Section_52;
  uint32_t Read_Data_Section_53;
  uint32_t Read_Data_Section_54;
  uint32_t Read_Data_Section_55;
  uint32_t Read_Data_Section_56;
  uint32_t Read_Data_Section_57;
  uint32_t Read_Data_Section_58;
  uint32_t Read_Data_Section_59;
  uint32_t Read_Data_Section_60;
  uint32_t Read_Data_Section_61;
  uint32_t Read_Data_Section_62;
  uint32_t Read_Data_Section_63;
  uint32_t Read_Data_Section_64;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FID:11;
      uint64_t reservedSpace0:5;
      uint64_t CYC:7;
      uint64_t reservedSpace1:1;
      uint64_t CHA:1;
      uint64_t CHB:1;
      uint64_t CFG:1;
      uint64_t PPIT:1;
      uint64_t TXM:1;
      uint64_t MBI:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDHS1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC:11;
      uint64_t reservedSpace0:5;
      uint64_t PLC:7;
      uint64_t reservedSpace1:1;
      uint64_t PLR:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDHS2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DP:11;
      uint64_t reservedSpace0:5;
      uint64_t RCC:6;
      uint64_t reservedSpace1:2;
      uint64_t RCI:1;
      uint64_t SFI:1;
      uint64_t SYN:1;
      uint64_t NFI:1;
      uint64_t PPI:1;
      uint64_t RES:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDHS3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VFRA:1;
      uint64_t VFRB:1;
      uint64_t SEOA:1;
      uint64_t SEOB:1;
      uint64_t CEOA:1;
      uint64_t CEOB:1;
      uint64_t SVOA:1;
      uint64_t SVOB:1;
      uint64_t TCIA:1;
      uint64_t TCIB:1;
      uint64_t ESA:1;
      uint64_t ESB:1;
      uint64_t MLST:1;
      uint64_t reservedSpace0:1;
      uint64_t FTA:1;
      uint64_t FTB:1;
      uint64_t CCS:6;
      uint64_t reservedSpace1:2;
      uint64_t RCIS:1;
      uint64_t SFIS:1;
      uint64_t SYNS:1;
      uint64_t MFIS:1;
      uint64_t PPIS:1;
      uint64_t RESS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MBS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RHSS:1;
      uint64_t RDSS:1;
      uint64_t reservedSpace0:14;
      uint64_t RHSH:1;
      uint64_t RDSH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBCM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OBRS:7;
      uint64_t reservedSpace0:1;
      uint64_t VIEW:1;
      uint64_t REQ:1;
      uint64_t reservedSpace1:5;
      uint64_t OBSYS:1;
      uint64_t OBRH:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBCR;

};

#define FlexRay (*(volatile struct FlexRay_tag *) 0xfff7c810)

struct N2HET_N2HET1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:1;
      uint64_t reservedSpace0:15;
      uint64_t CMS:1;
      uint64_t IS:1;
      uint64_t PPF:1;
      uint64_t reservedSpace1:2;
      uint64_t MP:2;
      uint64_t reservedSpace2:1;
      uint64_t HET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETGCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRPFC:6;
      uint64_t reservedSpace0:2;
      uint64_t LRPFC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETPFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HETADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Offset1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Offset2:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETOFF2;

  uint32_t HETINTENAS;
  uint32_t HETINTENAC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Prgm_Ovrfl_Pry:1;
      uint64_t APCNT_0:1;
      uint64_t APCNT_1:1;
      uint64_t reservedSpace0:5;
      uint64_t Prgm_Ovrfl_Ena:1;
      uint64_t reservedSpace1:7;
      uint64_t APCNT_2:1;
      uint64_t reservedSpace2:7;
      uint64_t APCNT_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETEXC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Prgm_Ovrfl_Flag:1;
      uint64_t APCNT_0:1;
      uint64_t APCNT_1:1;
      uint64_t reservedSpace0:5;
      uint64_t Debug_Status_Flag:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETEXC2;

  uint32_t HETPRY;
  uint32_t HETFLG;
  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETHRSH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETXOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQENA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETREQENS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQDIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETREQENC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDS:8;
      uint64_t reservedSpace0:8;
      uint64_t TDBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETREQDS;

  uint8_t res1[4];

  uint32_t HETDIR;
  uint32_t HETDIN;
  uint32_t HETDOUT;
  uint32_t HETDSET;
  uint32_t HETDCLR;
  uint32_t HETPDR;
  uint32_t HETPULDIS;
  uint32_t HETPSL;
  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PAOFF:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETPAR;

  uint32_t HETPPR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRLD:10;
      uint64_t reservedSpace0:6;
      uint64_t CCDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETSFPRLD;

  uint32_t HETSFENA;
  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBPSEL:16;
      uint64_t LBPTYPE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETLBPSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBPDIR:16;
      uint64_t IODFTENA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETLBPDIR;

  uint32_t HETPINDIS;
};

#define N2HET_N2HET1 (*(volatile struct N2HET_N2HET1_tag *) 0xfff7b800)

struct N2HET_N2HET2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t TO:1;
      uint64_t reservedSpace0:15;
      uint64_t CMS:1;
      uint64_t IS:1;
      uint64_t PPF:1;
      uint64_t reservedSpace1:2;
      uint64_t MP:2;
      uint64_t reservedSpace2:1;
      uint64_t HET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETGCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HRPFC:6;
      uint64_t reservedSpace0:2;
      uint64_t LRPFC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETPFR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HETADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Offset1:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Offset2:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETOFF2;

  uint32_t HETINTENAS;
  uint32_t HETINTENAC;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t Prgm_Ovrfl_Pry:1;
      uint64_t APCNT_0:1;
      uint64_t APCNT_1:1;
      uint64_t reservedSpace0:5;
      uint64_t Prgm_Ovrfl_Ena:1;
      uint64_t reservedSpace1:7;
      uint64_t APCNT_2:1;
      uint64_t reservedSpace2:7;
      uint64_t APCNT_3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETEXC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Prgm_Ovrfl_Flag:1;
      uint64_t APCNT_0:1;
      uint64_t APCNT_1:1;
      uint64_t reservedSpace0:5;
      uint64_t Debug_Status_Flag:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETEXC2;

  uint32_t HETPRY;
  uint32_t HETFLG;
  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETHRSH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETXOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQENA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETREQENS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REQDIS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETREQENC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TDS:8;
      uint64_t reservedSpace0:8;
      uint64_t TDBS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETREQDS;

  uint8_t res1[4];

  uint32_t HETDIR;
  uint32_t HETDIN;
  uint32_t HETDOUT;
  uint32_t HETDSET;
  uint32_t HETDCLR;
  uint32_t HETPDR;
  uint32_t HETPULDIS;
  uint32_t HETPSL;
  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t PAOFF:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETPAR;

  uint32_t HETPPR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRLD:10;
      uint64_t reservedSpace0:6;
      uint64_t CCDIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETSFPRLD;

  uint32_t HETSFENA;
  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBPSEL:16;
      uint64_t LBPTYPE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETLBPSEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LBPDIR:16;
      uint64_t IODFTENA:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HETLBPDIR;

  uint32_t HETPINDIS;
};

#define N2HET_N2HET2 (*(volatile struct N2HET_N2HET2_tag *) 0xfff7b900)

struct HTU_tag
{
  uint32_t HTU_IFADDRA;
  uint32_t HTU_IFADDRB;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t IHADDR:11;
      uint64_t reservedSpace1:3;
      uint64_t TMBB:2;
      uint64_t TMBA:2;
      uint64_t ADDFM:1;
      uint64_t ADDMH:1;
      uint64_t SIZE:1;
      uint64_t DIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_IHADDRCT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IFTCOUNT:8;
      uint64_t reservedSpace0:8;
      uint64_t IETCOUNT:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_ITCOUNT;

  uint8_t res0[240];

  uint32_t HTU_CFADDRA;
  uint32_t HTU_CFADDRB;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CFTCTB:8;
      uint64_t reservedSpace0:8;
      uint64_t CFTCTA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_CFCOUNT;

  uint8_t res1[11117300];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HTURES:1;
      uint64_t reservedSpace0:7;
      uint64_t DEBM:1;
      uint64_t reservedSpace1:7;
      uint64_t HTUEN:1;
      uint64_t reservedSpace2:7;
      uint64_t VBUSHOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_GC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_CPENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY1B:1;
      uint64_t reservedSpace0:7;
      uint64_t BUSY1A:1;
      uint64_t reservedSpace1:7;
      uint64_t BUSY0B:1;
      uint64_t reservedSpace2:7;
      uint64_t BUSY0A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BUSY0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY3B:1;
      uint64_t reservedSpace0:7;
      uint64_t BUSY3A:1;
      uint64_t reservedSpace1:7;
      uint64_t BUSY2B:1;
      uint64_t reservedSpace2:7;
      uint64_t BUSY2A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BUSY1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY5B:1;
      uint64_t reservedSpace0:7;
      uint64_t BUSY5A:1;
      uint64_t reservedSpace1:7;
      uint64_t BUSY4B:1;
      uint64_t reservedSpace2:7;
      uint64_t BUSY4A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BUSY2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUSY7B:1;
      uint64_t reservedSpace0:7;
      uint64_t BUSY7A:1;
      uint64_t reservedSpace1:7;
      uint64_t BUSY6B:1;
      uint64_t reservedSpace2:7;
      uint64_t BUSY6A:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BUSY3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NACP:4;
      uint64_t reservedSpace0:4;
      uint64_t CETCOUNT:5;
      uint64_t reservedSpace1:1;
      uint64_t BUSBUSY:1;
      uint64_t TIPF:1;
      uint64_t ERRCPN:4;
      uint64_t reservedSpace2:4;
      uint64_t ERRETC:5;
      uint64_t reservedSpace3:2;
      uint64_t ERRF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_ACPE;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RLINTENA:1;
      uint64_t reservedSpace0:7;
      uint64_t CORL:1;
      uint64_t reservedSpace1:7;
      uint64_t BERINTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_RLBECTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFINTENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BFINTS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFINTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BFINTC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPINTMAP:16;
      uint64_t MAPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_INTMAP;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOFF0:4;
      uint64_t reservedSpace0:4;
      uint64_t INTTYPE0:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_INTOFF0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPOFF1:4;
      uint64_t reservedSpace0:4;
      uint64_t INTTYPE1:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_INTOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BIM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BIM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPRLFL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_RLOSTFL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BFINTFL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BFINTFL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERINTFL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_BERINTFL;

  uint32_t HTU_MP1S;
  uint32_t HTU_MP1E;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBREN:1;
      uint64_t reservedSpace0:15;
      uint64_t HTUDBGS:1;
      uint64_t reservedSpace1:7;
      uint64_t CPNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_DCTRL;

  uint32_t HTU_WPR;
  uint32_t HTU_WMR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:8;
      uint64_t TYPE:8;
      uint64_t CLASS:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_ID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
      uint64_t reservedSpace1:7;
      uint64_t COPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_PCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAOFF:9;
      uint64_t reservedSpace0:7;
      uint64_t PEFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_PAR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0ENA:1;
      uint64_t ACCR:1;
      uint64_t INTENA0:1;
      uint64_t REG01ENA:1;
      uint64_t ACCR01:1;
      uint64_t INTENA01:1;
      uint64_t reservedSpace0:2;
      uint64_t CPNUM1:4;
      uint64_t reservedSpace1:4;
      uint64_t MPEFT0:1;
      uint64_t MPEFT1:1;
      uint64_t reservedSpace2:6;
      uint64_t CPNUM0:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTU_MPCS;

  uint32_t HTU_MP0S;
  uint32_t HTU_MP0E;
};

#define HTU (*(volatile struct HTU_tag *) 0xff4e0000)

struct DMA_tag
{
  uint32_t ISADDR;
  uint32_t IDADDR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IETCOUNT:13;
      uint64_t reservedSpace0:3;
      uint64_t IFTCOUNT:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ITCOUNT;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AIM:1;
      uint64_t ADDMW:2;
      uint64_t ADDMR:2;
      uint64_t reservedSpace0:3;
      uint64_t TTYPE:1;
      uint64_t reservedSpace1:3;
      uint64_t WES:2;
      uint64_t RES:2;
      uint64_t CHAIN:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EIDXS:13;
      uint64_t reservedSpace0:3;
      uint64_t EIDXD:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EIOFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIDXS:13;
      uint64_t reservedSpace0:3;
      uint64_t FIDXD:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIOFF;

  uint8_t res1[2020];

  uint32_t CSADDR;
  uint32_t CDADDR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CETCOUNT:13;
      uint64_t reservedSpace0:3;
      uint64_t CFTCOUNT:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTCOUNT;

  uint8_t res2[518132];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA_bitfield:1;
      uint64_t reservedSpace0:7;
      uint64_t DEBUG:2;
      uint64_t reservedSpace1:4;
      uint64_t BUS:1;
      uint64_t reservedSpace2:1;
      uint64_t DMA_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PEND:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PEND;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STCH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMASTAT;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCHENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCHENAS;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HWCHDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HWCHENAR;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCHENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCHENAS;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWCHDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SWCHENAR;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPRIOS;

  uint8_t res9[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHPRIOR;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCHIE:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCHIENAS;

  uint8_t res11[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCHID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GCHIENAR;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH3ASI:6;
      uint64_t reservedSpace0:2;
      uint64_t CH2ASI:6;
      uint64_t reservedSpace1:2;
      uint64_t CH1ASI:6;
      uint64_t reservedSpace2:2;
      uint64_t CH0ASI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH7ASI:6;
      uint64_t reservedSpace0:2;
      uint64_t CH6ASI:6;
      uint64_t reservedSpace1:2;
      uint64_t CH5ASI:6;
      uint64_t reservedSpace2:2;
      uint64_t CH4ASI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH11ASI:6;
      uint64_t reservedSpace0:2;
      uint64_t CH10ASI:6;
      uint64_t reservedSpace1:2;
      uint64_t CH9ASI:6;
      uint64_t reservedSpace2:2;
      uint64_t CH8ASI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH15ASI:6;
      uint64_t reservedSpace0:2;
      uint64_t CH14ASI:6;
      uint64_t reservedSpace1:2;
      uint64_t CH13ASI:6;
      uint64_t reservedSpace2:2;
      uint64_t CH12ASI:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DREQASI3;

  uint8_t res13[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH7PA:3;
      uint64_t reservedSpace0:1;
      uint64_t CH6PA:3;
      uint64_t reservedSpace1:1;
      uint64_t CH5PA:3;
      uint64_t reservedSpace2:1;
      uint64_t CH4PA:3;
      uint64_t reservedSpace3:1;
      uint64_t CH3PA:3;
      uint64_t reservedSpace4:1;
      uint64_t CH2PA:3;
      uint64_t reservedSpace5:1;
      uint64_t CH1PA:3;
      uint64_t reservedSpace6:1;
      uint64_t CH0PA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH15PA:3;
      uint64_t reservedSpace0:1;
      uint64_t CH14PA:3;
      uint64_t reservedSpace1:1;
      uint64_t CH13PA:3;
      uint64_t reservedSpace2:1;
      uint64_t CH12PA:3;
      uint64_t reservedSpace3:1;
      uint64_t CH11PA:3;
      uint64_t reservedSpace4:1;
      uint64_t CH10PA:3;
      uint64_t reservedSpace5:1;
      uint64_t CH9PA:3;
      uint64_t reservedSpace6:1;
      uint64_t CH8PA:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAR1;

  uint8_t res14[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCMAP;

  uint8_t res15[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSMAP;

  uint8_t res16[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCMAP;

  uint8_t res17[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCMAP;

  uint8_t res18[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERAB:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERMAP;

  uint8_t res19[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCINTENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCINTENAS;

  uint8_t res20[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCINTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCINTENAR;

  uint8_t res21[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSINTENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSINTENAS;

  uint8_t res22[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSINTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSINTENAR;

  uint8_t res23[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCINTENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCINTENAS;

  uint8_t res24[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCINTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCINTENAR;

  uint8_t res25[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCINTENA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCINTENAS;

  uint8_t res26[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCINTDIS:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCINTENAR;

  uint8_t res27[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GINT:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GINTFLAG;

  uint8_t res28[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCFLAG;

  uint8_t res29[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSFLAG;

  uint8_t res30[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCFLAG;

  uint8_t res31[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCFLAG;

  uint8_t res32[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERI:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERFLAG;

  uint8_t res33[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCA:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSA:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCA:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCA:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERA:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERAOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FTCB:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FTCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LFSB:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LFSBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HBCB:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HBCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BTCB:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTCBOFFSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BERB:6;
      uint64_t sbz:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BERBOFFSET;

  uint8_t res34[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t PSFRLQPB:1;
      uint64_t PSFRHQPB:1;
      uint64_t BYB:1;
      uint64_t reservedSpace1:5;
      uint64_t PENDB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PTCRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RTC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DBGEN:1;
      uint64_t reservedSpace0:15;
      uint64_t DMADBGS:1;
      uint64_t reservedSpace1:7;
      uint64_t CHNUM:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRL;

  uint32_t WPR;
  uint32_t WMR;
  uint32_t PAACSADDR;
  uint32_t PAACDADDR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAETCOUNT:13;
      uint64_t reservedSpace0:3;
      uint64_t PAFTCOUNT:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PAACTC;

  uint32_t PBACSADDR;
  uint32_t PBACDADDR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PBETCOUNT:13;
      uint64_t reservedSpace0:3;
      uint64_t PBFTCOUNT:13;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PBACTC;

  uint8_t res35[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARITY_ENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
      uint64_t reservedSpace1:7;
      uint64_t ERRA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAPCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ERRORADDRESS:12;
      uint64_t reservedSpace0:12;
      uint64_t EDFLAG:1;
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
      uint64_t reservedSpace0:3;
      uint64_t REG1ENA:1;
      uint64_t REG1AP:2;
      uint64_t INT1ENA:1;
      uint64_t INT1AB:1;
      uint64_t reservedSpace1:3;
      uint64_t REG2ENA:1;
      uint64_t REG2AP:2;
      uint64_t INT2ENA:1;
      uint64_t INT2AB:1;
      uint64_t reservedSpace2:3;
      uint64_t REG3ENA:1;
      uint64_t REG3AP:2;
      uint64_t INT3ENA:1;
      uint64_t INT3AB:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REG0FT:1;
      uint64_t reservedSpace0:7;
      uint64_t REG1FT:1;
      uint64_t reservedSpace1:7;
      uint64_t REG2FT:1;
      uint64_t reservedSpace2:7;
      uint64_t REG3FT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAMPST;

  uint32_t DMAMPR0S;
  uint32_t DMAMPR0E;
  uint32_t DMAMPR1S;
  uint32_t DMAMPR1E;
  uint32_t DMAMPR2S;
  uint32_t DMAMPR2E;
  uint32_t DMAMPR3S;
  uint32_t DMAMPR3E;
};

#define DMA (*(volatile struct DMA_tag *) 0xfff80000)

struct RTI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNT0EN:1;
      uint64_t CNT1EN:1;
      uint64_t reservedSpace0:13;
      uint64_t COS:1;
      uint64_t NTUSEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TBEXT:1;
      uint64_t INC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTITBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPCNTR0:1;
      uint64_t CAPCNTR1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICAPCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMPSEL0:1;
      uint64_t reservedSpace0:3;
      uint64_t COMPSEL1:1;
      uint64_t reservedSpace1:3;
      uint64_t COMPSEL2:1;
      uint64_t reservedSpace2:3;
      uint64_t COMPSEL3:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICOMPCTRL;

  uint32_t RTIFRC0;
  uint32_t RTIUC0;
  uint32_t RTICPUC0;
  uint8_t res0[4];

  uint32_t RTICAFRC0;
  uint32_t RTICAUC0;
  uint8_t res1[8];

  uint32_t RTIFRC1;
  uint32_t RTIUC1;
  uint32_t RTICPUC1;
  uint8_t res2[4];

  uint32_t RTICAFRC1;
  uint32_t RTICAUC1;
  uint8_t res3[8];

  uint32_t RTICOMP0;
  uint32_t RTIUDCP0;
  uint32_t RTICOMP1;
  uint32_t RTIUDCP1;
  uint32_t RTICOMP2;
  uint32_t RTIUDCP2;
  uint32_t RTICOMP3;
  uint32_t RTIUDCP3;
  uint32_t RTITBLCOMP;
  uint32_t RTITBHCOMP;
  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETINT:4;
      uint64_t reservedSpace0:4;
      uint64_t SETDMA:4;
      uint64_t reservedSpace1:4;
      uint64_t SETTBINT:1;
      uint64_t SETOVLINT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTISETINTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLEARINT:4;
      uint64_t reservedSpace0:4;
      uint64_t CLEARDMA:4;
      uint64_t reservedSpace1:4;
      uint64_t CLEARTBINT:1;
      uint64_t CLEAROVLINT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTICLEARINTENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:4;
      uint64_t reservedSpace0:12;
      uint64_t TBINT:1;
      uint64_t OVLINT:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIINTFLAG;

  uint8_t res5[4];

  uint32_t RTIDWDCTRL;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDPRLD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDPRLD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t DWD:1;
      uint64_t KEY:1;
      uint64_t START:1;
      uint64_t END:1;
      uint64_t DWWD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDSTATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDKEY:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWDKEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DWDCNTR:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIDWDCNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WWDRXN:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTIWWDRXNCTRL;

  uint32_t RTIWWDSIZECTRL;
};

#define RTI (*(volatile struct RTI_tag *) 0xfffffc00)

struct CRC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_PSA_SWREST:1;
      uint64_t reservedSpace0:7;
      uint64_t CH2_PSA_SWREST:1;
      uint64_t reservedSpace1:7;
      uint64_t CH3_PSA_SWREST:1;
      uint64_t reservedSpace2:7;
      uint64_t CH4_PSA_SWREST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL0;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWDN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL1;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_MODE:1;
      uint64_t reservedSpace0:3;
      uint64_t CH1_TRACEEN:1;
      uint64_t reservedSpace1:3;
      uint64_t CH2_MODE:1;
      uint64_t reservedSpace2:7;
      uint64_t CH3_MODE:1;
      uint64_t reservedSpace3:7;
      uint64_t CH4_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CTRL2;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_CCITENS:1;
      uint64_t CH1_CRCFAILENS:1;
      uint64_t CH1_OVERENS:1;
      uint64_t CH1_UNDERENS:1;
      uint64_t CH1_TIMEOUTENS:1;
      uint64_t reservedSpace0:3;
      uint64_t CH2_CCITENS:1;
      uint64_t CH2_CRCFAILENS:1;
      uint64_t CH2_OVERENS:1;
      uint64_t CH2_UNDERENS:1;
      uint64_t CH2_TIMEOUTENS:1;
      uint64_t reservedSpace1:3;
      uint64_t CH3_CCITENS:1;
      uint64_t CH3_CRCFAILENS:1;
      uint64_t CH3_OVERENS:1;
      uint64_t CH3_UNDERENS:1;
      uint64_t CH3_TIMEOUTENS:1;
      uint64_t reservedSpace2:3;
      uint64_t CH4_CCITENS:1;
      uint64_t CH4_CRCFAILENS:1;
      uint64_t CH4_OVERENS:1;
      uint64_t CH4_UNDERENS:1;
      uint64_t CH4_TIMEOUTENS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_INTS;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_CCITENR:1;
      uint64_t CH1_CRCFAILENR:1;
      uint64_t CH1_OVERENR:1;
      uint64_t CH1_UNDERENR:1;
      uint64_t CH1_TIMEOUTENR:1;
      uint64_t reservedSpace0:3;
      uint64_t CH2_CCITENR:1;
      uint64_t CH2_CRCFAILENR:1;
      uint64_t CH2_OVERENR:1;
      uint64_t CH2_UNDERENR:1;
      uint64_t CH2_TIMEOUTENR:1;
      uint64_t reservedSpace1:3;
      uint64_t CH3_CCITENR:1;
      uint64_t CH3_CRCFAILENR:1;
      uint64_t CH3_OVERENR:1;
      uint64_t CH3_UNDERENR:1;
      uint64_t CH3_TIMEOUTENR:1;
      uint64_t reservedSpace2:3;
      uint64_t CH4_CCITENR:1;
      uint64_t CH4_CRCFAILENR:1;
      uint64_t CH4_OVERENR:1;
      uint64_t CH4_UNDERENR:1;
      uint64_t CH4_TIMEOUTENR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_INTR;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_CCIT:1;
      uint64_t CH1_CRCFAIL:1;
      uint64_t CH1_OVER:1;
      uint64_t CH1_UNDER:1;
      uint64_t CH1_TIMEOUT:1;
      uint64_t reservedSpace0:3;
      uint64_t CH2_CCIT:1;
      uint64_t CH2_CRCFAIL:1;
      uint64_t CH2_OVER:1;
      uint64_t CH2_UNDER:1;
      uint64_t CH2_TIMEOUT:1;
      uint64_t reservedSpace1:3;
      uint64_t CH3_CCIT:1;
      uint64_t CH3_CRCFAIL:1;
      uint64_t CH3_OVER:1;
      uint64_t CH3_UNDER:1;
      uint64_t CH3_TIMEOUT:1;
      uint64_t reservedSpace2:3;
      uint64_t CH4_CCIT:1;
      uint64_t CH4_CRCFAIL:1;
      uint64_t CH4_OVER:1;
      uint64_t CH4_UNDER:1;
      uint64_t CH4_TIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_STATUS;

  uint8_t res5[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFSTREG:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_INT_OFFSET_REG;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH1_BUSY:1;
      uint64_t reservedSpace0:7;
      uint64_t CH2_BUSY:1;
      uint64_t reservedSpace1:7;
      uint64_t CH3_BUSY:1;
      uint64_t reservedSpace2:7;
      uint64_t CH4_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BUSY;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT1:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTCPLD1:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD1;

  uint8_t res8[12];

  uint32_t PSA_SIGREGL1;
  uint32_t PSA_SIGREGH1;
  uint32_t CRC_REGL1;
  uint32_t PSA_REGH1;
  uint32_t PSA_SECSIGREGL1;
  uint32_t PSA_SECSIGREGH1;
  uint32_t RAW_DATAREGL1;
  uint32_t RAW_DATAREGH1;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT2:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTCPLD2:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD2;

  uint8_t res9[12];

  uint32_t PSA_SIGREGL2;
  uint32_t PSA_SIGREGH2;
  uint32_t CRC_REGL2;
  uint32_t PSA_REGH2;
  uint32_t PSA_SECSIGREGL2;
  uint32_t PSA_SECSIGREGH2;
  uint32_t RAW_DATAREGL2;
  uint32_t RAW_DATAREGH2;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT3:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD3:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTCPLD3:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD3;

  uint8_t res10[12];

  uint32_t PSA_SIGREGL3;
  uint32_t PSA_SIGREGH3;
  uint32_t CRC_REGL3;
  uint32_t PSA_REGH3;
  uint32_t PSA_SECSIGREGL3;
  uint32_t PSA_SECSIGREGH3;
  uint32_t RAW_DATAREGL3;
  uint32_t RAW_DATAREGH3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_PAT_COUNT4:20;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_PCOUNT_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_SEC_COUNT4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_SCOUNT_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_CURSEC4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_CURSEC_REG4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_WDTOPLD4:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_WDTOPLD4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CRC_BCTCPLD4:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRC_BCTOPLD4;

  uint8_t res11[12];

  uint32_t PSA_SIGREGL4;
  uint32_t PSA_SIGREGH4;
  uint32_t CRC_REGL4;
  uint32_t PSA_REGH4;
  uint32_t PSA_SECSIGREGL4;
  uint32_t PSA_SECSIGREGH4;
  uint32_t RAW_DATAREGL4;
  uint32_t RAW_DATAREGH4;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ITCMEn:1;
      uint64_t DTCMEn:1;
      uint64_t MEn:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MCRC_TRACE_BUS_SEL;

};

#define CRC_2 (*(volatile struct CRC_2_tag *) 0xfe000000)

struct CCM_R4F_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STE:1;
      uint64_t STET:1;
      uint64_t reservedSpace0:6;
      uint64_t STC_bitfield:1;
      uint64_t reservedSpace1:7;
      uint64_t CMPE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MKEY:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCMKEYR;

};

#define CCM_R4F (*(volatile struct CCM_R4F_tag *) 0xfffff600)

struct VIM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARFLG:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PARENA:4;
      uint64_t reservedSpace0:4;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PARCTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t Word_offset:2;
      uint64_t ADDERR:7;
      uint64_t Interrupt_Vector_Table_offset:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ADDERR;

  uint32_t FBPARERR;
  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRQINDEX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IRQINDEX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIQINDEX:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIQINDEX;

  uint8_t res1[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t FIRQPR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIRQPR0;

  uint32_t FIRQPR1;
  uint32_t FIRQPR2;
  uint8_t res2[4];

  uint32_t INTREQ0;
  uint32_t INTREQ1;
  uint32_t INTREQ2;
  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t REQENASET:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQENASET0;

  uint32_t REQENASET1;
  uint32_t REQENASET2;
  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t REQENACLR:30;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REQENACLR0;

  uint32_t REQENACLR1;
  uint32_t REQENACLR2;
  uint8_t res5[4];

  uint32_t WAKEENASET0;
  uint32_t WAKEENASET1;
  uint32_t WAKEENASET2;
  uint8_t res6[4];

  uint32_t WAKEENACLR0;
  uint32_t WAKEENACLR1;
  uint32_t WAKEENACLR2;
  uint8_t res7[4];

  uint32_t IRQVECREG;
  uint32_t FIQVECREG;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPEVTSRC0:7;
      uint64_t reservedSpace0:9;
      uint64_t CAPEVTSRC1:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAPEVT;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP3:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP2:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP1:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP0:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP7:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP6:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP5:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP4:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP11:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP10:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP9:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP8:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP15:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP14:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP13:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP12:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP19:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP18:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP17:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP16:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP23:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP22:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP21:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP20:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP27:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP26:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP25:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP24:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP31:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP30:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP29:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP28:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP35:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP34:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP33:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP32:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP39:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP38:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP37:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP36:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP43:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP42:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP41:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP40:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP47:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP46:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP45:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP44:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP51:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP50:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP49:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP48:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP55:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP54:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP53:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP52:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP59:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP58:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP57:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP56:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP63:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP62:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP61:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP60:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP67:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP66:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP65:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP64:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP71:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP70:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP69:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP68:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP75:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP74:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP73:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP72:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP79:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP78:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP77:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP76:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP83:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP82:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP81:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP80:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP87:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP86:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP85:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP84:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP91:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP90:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP89:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP88:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHANMAP95:7;
      uint64_t reservedSpace0:1;
      uint64_t CHANMAP94:7;
      uint64_t reservedSpace1:1;
      uint64_t CHANMAP93:7;
      uint64_t reservedSpace2:1;
      uint64_t CHANMAP92:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHANCTRL23;

};

#define VIM (*(volatile struct VIM_tag *) 0xfffffdec)

struct ESM_tag
{
  uint32_t ESMEEPAPR1;
  uint32_t ESMDEPAPR1;
  uint32_t ESMIESR1;
  uint32_t ESMIECR1;
  uint32_t ESMILSR1;
  uint32_t ESMILCR1;
  uint32_t ESMSR1;
  uint32_t ESMSR2;
  uint32_t ESMSR3;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t EPSF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMEPSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTOFFH:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIOFFHR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTOFFL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMIOFFLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMLTCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LTCP:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMLTCPR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EKEY:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ESMEKR;

  uint32_t ESMSSR2;
  uint32_t ESMIEPSR4;
  uint32_t ESMIEPCR4;
  uint32_t ESMIESR4;
  uint32_t ESMIECR4;
  uint32_t ESMILSR4;
  uint32_t ESMILCR4;
  uint32_t ESMSR4;
};

#define ESM (*(volatile struct ESM_tag *) 0xfffff500)

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
      uint64_t DDM_WIDTH:2;
      uint64_t reservedSpace1:5;
      uint64_t RESET:1;
      uint64_t COS:1;
      uint64_t CONTCLK:1;
      uint64_t reservedSpace2:5;
      uint64_t BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMGLBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERR:1;
      uint64_t DEST1_ERR:1;
      uint64_t DEST2_ERR:1;
      uint64_t DEST3_ERR:1;
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
  } __attribute__((aligned(4))) DMMINTSET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERR:1;
      uint64_t DEST1_ERR:1;
      uint64_t DEST2_ERR:1;
      uint64_t DEST3_ERR:1;
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
  } __attribute__((aligned(4))) DMMINTCLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERR:1;
      uint64_t DEST1_ERR:1;
      uint64_t DEST2_ERR:1;
      uint64_t DEST3_ERR:1;
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
  } __attribute__((aligned(4))) DMMINTLVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PACKET_ERR_INT:1;
      uint64_t DEST0_ERR:1;
      uint64_t DEST1_ERR:1;
      uint64_t DEST2_ERR:1;
      uint64_t DEST3_ERR:1;
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
  } __attribute__((aligned(4))) DMMINTFLG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMOFF1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMOFF2;

  uint32_t DMMDDMDEST;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDDMBL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POINTER:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDDMPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTPT:15;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMINTPT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST0REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST0BL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST0REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST0BL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST1REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST1BL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST1REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST1BL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST2REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST2BL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST2REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST2BL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST3REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST3BL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKADDR:18;
      uint64_t BASEADDR:14;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST3REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BLOCKSIZE:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMDEST3BL2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCFUNC:1;
      uint64_t CLKFUNC:1;
      uint64_t DATAFUNC:16;
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
      uint64_t DATADIR:16;
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
      uint64_t DATAIN:16;
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
      uint64_t DATAOUT:16;
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
      uint64_t DATASET:16;
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
      uint64_t DATACLR:16;
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
      uint64_t DATAPDR:16;
      uint64_t ENAPDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCDIS:1;
      uint64_t CLKDIS:1;
      uint64_t DATADIS:16;
      uint64_t ENADIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNCPSEL:1;
      uint64_t CLKPSEL:1;
      uint64_t DATAPSEL:16;
      uint64_t ENAPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMMPC8;

};

#define DMM (*(volatile struct DMM_tag *) 0xfffff700)

struct RTP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ONOFF:4;
      uint64_t INV_RGN:1;
      uint64_t HOVF:1;
      uint64_t CONTCLK:1;
      uint64_t RESET:1;
      uint64_t PW:2;
      uint64_t TM_DDM:1;
      uint64_t DDM_RW:1;
      uint64_t DDM_WIDTH:2;
      uint64_t reservedSpace0:2;
      uint64_t PRESCALER:3;
      uint64_t reservedSpace1:5;
      uint64_t TEST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPGLBCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENA1:1;
      uint64_t reservedSpace0:7;
      uint64_t ENA2:1;
      uint64_t reservedSpace1:15;
      uint64_t ENA4:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPTRENA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVF1:1;
      uint64_t OVF2:1;
      uint64_t reservedSpace0:1;
      uint64_t OVFPER:1;
      uint64_t reservedSpace1:4;
      uint64_t EMPTY1:1;
      uint64_t EMPTY2:1;
      uint64_t reservedSpace2:1;
      uint64_t EMPTYPER:1;
      uint64_t EMPTYSER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPGSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:18;
      uint64_t reservedSpace0:6;
      uint64_t BLOCKSIZE:4;
      uint64_t RW:1;
      uint64_t CPU_DMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPRAM1REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:18;
      uint64_t reservedSpace0:6;
      uint64_t BLOCKSIZE:4;
      uint64_t RW:1;
      uint64_t CPU_DMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPRAM1REG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:18;
      uint64_t reservedSpace0:6;
      uint64_t BLOCKSIZE:4;
      uint64_t RW:1;
      uint64_t CPU_DMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPRAM2REG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:18;
      uint64_t reservedSpace0:6;
      uint64_t BLOCKSIZE:4;
      uint64_t RW:1;
      uint64_t CPU_DMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPRAM2REG2;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:24;
      uint64_t BLOCKSIZE:4;
      uint64_t RW:1;
      uint64_t CPU_DMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPERREG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STARTADDR:24;
      uint64_t BLOCKSIZE:4;
      uint64_t RW:1;
      uint64_t CPU_DMA:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPERREG2;

  uint32_t RTPDDMW;
  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAFUNC:16;
      uint64_t SYNCFUNC:1;
      uint64_t CLKFUNC:1;
      uint64_t ENAFUNC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATADIR:16;
      uint64_t SYNCDIR:1;
      uint64_t CLKDIR:1;
      uint64_t ENADIR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAIN:16;
      uint64_t SYNCIN:1;
      uint64_t CLKIN:1;
      uint64_t ENAIN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAOUT:16;
      uint64_t SYNCOUT:1;
      uint64_t CLKOUT:1;
      uint64_t ENAOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATASET:16;
      uint64_t SYNCSET:1;
      uint64_t CLKSET:1;
      uint64_t ENASET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATACLR:16;
      uint64_t SYNCCLR:1;
      uint64_t CLKCLR:1;
      uint64_t ENACLR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAPDR:16;
      uint64_t SYNCPDR:1;
      uint64_t CLKPDR:1;
      uint64_t ENAPDR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATADIS:16;
      uint64_t SYNCDIS:1;
      uint64_t CLKDIS:1;
      uint64_t ENADIS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATAPSEL:16;
      uint64_t SYNCPSEL:1;
      uint64_t CLKPSEL:1;
      uint64_t ENAPSEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTPPC8;

};

#define RTP (*(volatile struct RTP_tag *) 0xfffffa00)

