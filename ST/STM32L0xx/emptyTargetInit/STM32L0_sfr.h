#include <stdint.h>

struct DAC_tag
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

#define DAC (*(volatile struct DAC_tag *) 0x40007400)

struct DMA1_tag
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

#define DMA1 (*(volatile struct DMA1_tag *) 0x40020000)

struct CRC_tag
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

#define CRC (*(volatile struct CRC_tag *) 0x40023000)

struct GPIOA_tag
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

#define GPIOA (*(volatile struct GPIOA_tag *) 0x50000000)

struct GPIOB_tag
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

#define GPIOB (*(volatile struct GPIOB_tag *) 0x50000400)

struct GPIOC_tag
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

#define GPIOC (*(volatile struct GPIOC_tag *) 0x50000800)

struct GPIOD_tag
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

#define GPIOD (*(volatile struct GPIOD_tag *) 0x50000c00)

struct GPIOH_tag
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

#define GPIOH (*(volatile struct GPIOH_tag *) 0x50001c00)

struct LCD_tag
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

#define LCD (*(volatile struct LCD_tag *) 0x40002400)

struct LPTIM_tag
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

#define LPTIM (*(volatile struct LPTIM_tag *) 0x40007c00)

struct RNG_tag
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

#define RNG (*(volatile struct RNG_tag *) 0x40025000)

struct RTC_tag
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

#define RTC (*(volatile struct RTC_tag *) 0x40002800)

struct USART1_tag
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

#define USART1 (*(volatile struct USART1_tag *) 0x40013800)

struct USART2_tag
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

#define USART2 (*(volatile struct USART2_tag *) 0x40004400)

struct TSC_tag
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

#define TSC (*(volatile struct TSC_tag *) 0x40024000)

struct IWDG_tag
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

#define IWDG (*(volatile struct IWDG_tag *) 0x40003000)

struct WWDG_tag
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

#define WWDG (*(volatile struct WWDG_tag *) 0x40002c00)

struct COMP_tag
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

#define COMP (*(volatile struct COMP_tag *) 0x40010030)

struct USB_FS_tag
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

#define USB_FS (*(volatile struct USB_FS_tag *) 0x40005c00)

struct CRS_tag
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

#define CRS (*(volatile struct CRS_tag *) 0x40006c00)

struct Firewall_tag
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

#define Firewall (*(volatile struct Firewall_tag *) 0x40011c00)

struct RCC_tag
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

#define RCC (*(volatile struct RCC_tag *) 0x40021000)

struct SYSCFG_tag
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

#define SYSCFG (*(volatile struct SYSCFG_tag *) 0x40010000)

struct SPI1_tag
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

#define SPI1 (*(volatile struct SPI1_tag *) 0x40013000)

struct SPI2_tag
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

#define SPI2 (*(volatile struct SPI2_tag *) 0x40003800)

struct I2C1_tag
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

#define I2C1 (*(volatile struct I2C1_tag *) 0x40005400)

struct I2C2_tag
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

#define I2C2 (*(volatile struct I2C2_tag *) 0x40005800)

struct PWR_tag
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

#define PWR (*(volatile struct PWR_tag *) 0x40007000)

struct Flash_tag
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

#define Flash (*(volatile struct Flash_tag *) 0x40022000)

struct EXTI_tag
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

#define EXTI (*(volatile struct EXTI_tag *) 0x40010400)

struct ADC_tag
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

#define ADC (*(volatile struct ADC_tag *) 0x40012400)

struct DBGMCU_tag
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

#define DBGMCU (*(volatile struct DBGMCU_tag *) 0x40015800)

struct TIM6_tag
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

#define TIM6 (*(volatile struct TIM6_tag *) 0x40001000)

struct LPUSART1_tag
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

#define LPUSART1 (*(volatile struct LPUSART1_tag *) 0x40004800)

struct NVIC_tag
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

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e100)

