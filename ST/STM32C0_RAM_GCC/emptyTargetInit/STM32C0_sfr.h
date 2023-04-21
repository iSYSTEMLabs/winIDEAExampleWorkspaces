#include <stdint.h>

struct RCC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t HSIKERDIV:3;
      uint64_t HSION:1;
      uint64_t HSIKERON:1;
      uint64_t HSIRDY:1;
      uint64_t HSIDIV:3;
      uint64_t reservedspace1:2;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t reservedSpace2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  uint8_t res0[4];
  
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:3;
      uint64_t SWS:3;
      uint64_t reservedSpace0:2;
      uint64_t HPRE:4;
      uint64_t PPRE:3;
      uint64_t reservedSpace1:1;
      uint64_t MCO2SEL:3;
      uint64_t reservedSpace2:1;
      uint64_t MCO2PRE:3;
      uint64_t reservedSpace3:1;
      uint64_t MCOSEL:3;
      uint64_t reservedSpace4:1;
      uint64_t MCOPRE:3;
      uint64_t reservedSpace5:1;
      
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  uint8_t res1[28];
  
  union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOAEN:1;
      uint64_t GPIOBEN:1;
      uint64_t GPIOCEN:1;
      uint64_t GPIODEN:1;
      uint64_t reservedSpace1:1;
      uint64_t GPIOFEN:1;
      uint64_t reservedSpace2:26;
     
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IOPENR;
  
  
  uint8_t res9[4];

 union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TIM3EN:1;
      uint64_t reservedSpace1:8;
      uint64_t RTCAPBEN:1;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace2:5;
      uint64_t USART2EN:1;
      uint64_t reservedSpace3:3;
      uint64_t I2C1EN:1;
      uint64_t reservedSpace4:5;
      uint64_t DBGEN:1;
      uint64_t PWREN:1;
      uint64_t reservedSpace5:3;
      
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBENR1;

 
};

#define RCC (*(volatile struct RCC_tag *) 0x40021000)

struct NVIC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  uint8_t res0[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISER1;

  uint8_t res1[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRENA:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICER1;

  uint8_t res2[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SETPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISPR1;

  uint8_t res3[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLRPEND:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICPR1;

  uint8_t res4[120];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACTIVE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IABR1;

  uint8_t res5[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IPR_N0:8;
      uint64_t IPR_N1:8;
      uint64_t IPR_N2:8;
      uint64_t IPR_N3:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR14;

  uint8_t res6[2756];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

};

#define NVIC (*(volatile struct NVIC_tag *) 0xe000e004)

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
      uint64_t OT1:2;
      uint64_t OT2:2;
      uint64_t OT3:2;
      uint64_t OT4:2;
      uint64_t OT5:2;
      uint64_t OT6:2;
      uint64_t OT7:2;
      uint64_t OT8:2;
      uint64_t OT9:2;
      uint64_t OT10:2;
      uint64_t OT11:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OTYPER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IDR0:1;
      uint64_t IDR1:1;
      uint64_t IDR2:1;
      uint64_t IDR3:1;
      uint64_t IDR4:1;
      uint64_t IDR5:1;
      uint64_t IDR6:1;
      uint64_t IDR7:1;
      uint64_t IDR8:1;
      uint64_t IDR9:1;
      uint64_t IDR10:1;
      uint64_t IDR11:1;
      uint64_t IDR12:1;
      uint64_t IDR13:1;
      uint64_t IDR14:1;
      uint64_t IDR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ODR0:1;
      uint64_t ODR1:1;
      uint64_t ODR2:1;
      uint64_t ODR3:1;
      uint64_t ODR4:1;
      uint64_t ODR5:1;
      uint64_t ODR6:1;
      uint64_t ODR7:1;
      uint64_t ODR8:1;
      uint64_t ODR9:1;
      uint64_t ODR10:1;
      uint64_t ODR11:1;
      uint64_t ODR12:1;
      uint64_t ODR13:1;
      uint64_t ODR14:1;
      uint64_t ODR15:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
  } __attribute__((aligned(4))) ODR;

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
  } __attribute__((aligned(4))) AFRL;
  
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
  } __attribute__((aligned(4))) AFRH;
  
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
  } __attribute__((aligned(4))) BRR;

};

#define GPIOA (*(volatile struct GPIOA_tag *) 0x50000000)


struct RCCIOPENR_tag
{
    union
  {
    uint32_t R;
    struct
    {
      uint64_t GPIOAEN:1;
      uint64_t GPIOBEN:1;
      uint64_t GPIOCEN:1;
      uint64_t GPIODEN:1;
      uint64_t GPIOFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) H;
    
};

#define TIM3EN (*(volatile unsigned long *) 0x4002103C)
#define GPIOBMODER (*(volatile unsigned long *) 0x50000400)
#define GPIOAOTYPER (*(volatile unsigned long *) 0x50000004)
#define GPIOENABLE (*(volatile unsigned long *) 0x40021034)
#define TIM3ARR (*(volatile unsigned long *) 0x4000042C)
#define TIM3PSC (*(volatile unsigned long *) 0x40000428)
#define TIM3CR1 (*(volatile unsigned long *) 0x40000400)
#define TIM3EGR (*(volatile unsigned long *) 0x40000414)
#define TIM3DIER (*(volatile unsigned long *) 0x4000040C)
#define TIM3SR (*(volatile unsigned long *) 0x40000410)
#define NVICSETENA0_31 (*(volatile unsigned long *) 0xE000E100)
#define NVICCLRENA0_31 (*(volatile unsigned long *) 0xE000E180)
#define GPIOBODR (*(volatile unsigned long *) 0x50000414)
#define FLASH (*(volatile unsigned long *) 0x40022000)
#define NVICTRIGGER (*(volatile unsigned long *) 0xE000EF00)
#define VTOR  (*(volatile unsigned int *)0xE000ED08)
