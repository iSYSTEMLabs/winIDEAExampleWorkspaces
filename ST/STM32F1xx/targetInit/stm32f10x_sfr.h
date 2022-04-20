#include <stdint.h>

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
      uint64_t reservedSpace0:4;
      uint64_t REV_IN:2;
      uint64_t REV_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INIT;

};

#define CRC_0 (*(volatile struct CRC_0_tag *) 0x40023000)

struct GPIOF_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOF_0 (*(volatile struct GPIOF_0_tag *) 0x48001400)

struct GPIOD_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOD_0 (*(volatile struct GPIOD_0_tag *) 0x48000c00)

struct GPIOC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOC_0 (*(volatile struct GPIOC_0_tag *) 0x48000800)

struct GPIOB_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOB_0 (*(volatile struct GPIOB_0_tag *) 0x48000400)

struct GPIOE_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOE_0 (*(volatile struct GPIOE_0_tag *) 0x48001000)

struct GPIOA_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOA_0 (*(volatile struct GPIOA_0_tag *) 0x48000000)

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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
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
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
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
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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
      uint64_t TSEL10:1;
      uint64_t TSEL11:1;
      uint64_t TSEL12:1;
      uint64_t reservedSpace0:6;
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
      uint64_t reservedSpace1:15;
      uint64_t DMAUDR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define DAC_0 (*(volatile struct DAC_0_tag *) 0x40007400)

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
      uint64_t reservedSpace0:4;
      uint64_t EWUP:1;
      uint64_t BRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define PWR_0 (*(volatile struct PWR_0_tag *) 0x40007000)

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
      uint64_t SWRST:1;
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
      uint64_t SADD0:1;
      uint64_t SADD1:7;
      uint64_t SADD8:2;
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
      uint64_t OA1_0:1;
      uint64_t OA1_1:7;
      uint64_t OA1_8:2;
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
      uint64_t SWRST:1;
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
      uint64_t SADD0:1;
      uint64_t SADD1:7;
      uint64_t SADD8:2;
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
      uint64_t OA1_0:1;
      uint64_t OA1_1:7;
      uint64_t OA1_8:2;
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
      uint64_t WDGTB:2;
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
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
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
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
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
      uint64_t reservedSpace0:6;
      uint64_t PRI_00:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_01:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_02:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_03:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_40:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_41:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_42:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_43:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_80:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_81:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_82:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_83:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_120:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_121:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_122:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_123:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_160:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_161:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_162:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_163:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_200:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_201:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_202:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_203:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_240:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_241:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_242:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_243:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_280:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_281:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_282:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_283:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

};

#define NVIC_0 (*(volatile struct NVIC_0_tag *) 0xe000e100)

struct DMA_0_tag
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

};

#define DMA_0 (*(volatile struct DMA_0_tag *) 0x40020000)

struct RCC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSION:1;
      uint64_t HSIRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t HSITRIM:5;
      uint64_t HSICAL:8;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:2;
      uint64_t SWS:2;
      uint64_t HPRE:4;
      uint64_t PPRE:3;
      uint64_t reservedSpace0:3;
      uint64_t ADCPRE:2;
      uint64_t PLLSRC:1;
      uint64_t PLLXTPRE:1;
      uint64_t PLLMUL:4;
      uint64_t reservedSpace1:2;
      uint64_t MCO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t HSI14RDYF:1;
      uint64_t reservedSpace0:1;
      uint64_t CSSF:1;
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t HSI14RDYE:1;
      uint64_t reservedSpace1:2;
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t HSI14RDYC:1;
      uint64_t reservedSpace2:1;
      uint64_t CSSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace0:8;
      uint64_t ADCRST:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM1RST:1;
      uint64_t SPI1RST:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1RST:1;
      uint64_t reservedSpace3:1;
      uint64_t TIM15RST:1;
      uint64_t TIM16RST:1;
      uint64_t TIM17RST:1;
      uint64_t reservedSpace4:3;
      uint64_t DBGMCURST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t TIM3RST:1;
      uint64_t reservedSpace0:2;
      uint64_t TIM6RST:1;
      uint64_t reservedSpace1:3;
      uint64_t TIM14RST:1;
      uint64_t reservedSpace2:2;
      uint64_t WWDGRST:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2RST:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2RST:1;
      uint64_t reservedSpace5:3;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t reservedSpace6:5;
      uint64_t PWRRST:1;
      uint64_t DACRST:1;
      uint64_t CECRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SRAMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t FLITFEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace3:10;
      uint64_t IOPAEN:1;
      uint64_t IOPBEN:1;
      uint64_t IOPCEN:1;
      uint64_t IOPDEN:1;
      uint64_t reservedSpace4:1;
      uint64_t IOPFEN:1;
      uint64_t reservedSpace5:1;
      uint64_t TSCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace0:8;
      uint64_t ADCEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace3:1;
      uint64_t TIM15EN:1;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace4:3;
      uint64_t DBGMCUEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t TIM3EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TIM6EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TIM14EN:1;
      uint64_t reservedSpace2:2;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2EN:1;
      uint64_t reservedSpace5:3;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t reservedSpace6:5;
      uint64_t PWREN:1;
      uint64_t DACEN:1;
      uint64_t CECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t LSEDRV:2;
      uint64_t reservedSpace0:3;
      uint64_t RTCSEL:2;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t BDRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:22;
      uint64_t RMVF:1;
      uint64_t OBLRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t IOPARST:1;
      uint64_t IOPBRST:1;
      uint64_t IOPCRST:1;
      uint64_t IOPDRST:1;
      uint64_t reservedSpace1:1;
      uint64_t IOPFRST:1;
      uint64_t reservedSpace2:1;
      uint64_t TSCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART1SW:2;
      uint64_t reservedSpace0:2;
      uint64_t I2C1SW:1;
      uint64_t reservedSpace1:1;
      uint64_t CECSW:1;
      uint64_t reservedSpace2:1;
      uint64_t ADCSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI14ON:1;
      uint64_t HSI14RDY:1;
      uint64_t HSI14DIS:1;
      uint64_t HSI14TRIM:5;
      uint64_t HSI14CAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

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
      uint64_t ADC_DMA_RMP:1;
      uint64_t USART1_TX_DMA_RMP:1;
      uint64_t USART1_RX_DMA_RMP:1;
      uint64_t TIM16_DMA_RMP:1;
      uint64_t TIM17_DMA_RMP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_PB6_FM:1;
      uint64_t I2C_PB7_FM:1;
      uint64_t I2C_PB8_FM:1;
      uint64_t I2C_PB9_FM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res0[4];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCUP_LOCK:1;
      uint64_t SRAM_PARITY_LOCK:1;
      uint64_t PVD_LOCK:1;
      uint64_t reservedSpace0:5;
      uint64_t SRAM_PEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define SYSCFG_0 (*(volatile struct SYSCFG_0_tag *) 0x40010000)

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
      uint64_t reservedSpace1:26;
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
      uint64_t reservedSpace0:30;
      uint64_t JITOFF_D2:1;
      uint64_t JITOFF_D4:1;
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

  uint8_t res3[708];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t VREFEN:1;
      uint64_t TSEN:1;
      uint64_t VBATEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

};

#define ADC_0 (*(volatile struct ADC_0_tag *) 0x40012400)

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
      uint64_t M:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT:5;
      uint64_t DEAT:5;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
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
      uint64_t DATAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD:2;
      uint64_t RTOEN:1;
      uint64_t ADD0:4;
      uint64_t ADD4:4;
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
      uint64_t M:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT:5;
      uint64_t DEAT:5;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
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
      uint64_t DATAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD:2;
      uint64_t RTOEN:1;
      uint64_t ADD0:4;
      uint64_t ADD4:4;
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

struct COMP_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1EN:1;
      uint64_t COMP1_INP_DAC:1;
      uint64_t COMP1MODE:2;
      uint64_t COMP1INSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t COMP1OUTSEL:3;
      uint64_t COMP1POL:1;
      uint64_t COMP1HYST:2;
      uint64_t COMP1OUT:1;
      uint64_t COMP1LOCK:1;
      uint64_t COMP2EN:1;
      uint64_t reservedSpace1:1;
      uint64_t COMP2MODE:2;
      uint64_t COMP2INSEL:3;
      uint64_t WNDWEN:1;
      uint64_t COMP2OUTSEL:3;
      uint64_t COMP2POL:1;
      uint64_t COMP2HYST:2;
      uint64_t COMP2OUT:1;
      uint64_t COMP2LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define COMP_0 (*(volatile struct COMP_0_tag *) 0x4001001c)

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
      uint64_t reservedSpace0:3;
      uint64_t TSEDGE:1;
      uint64_t REFCKON:1;
      uint64_t BYPSHAD:1;
      uint64_t FMT:1;
      uint64_t reservedSpace1:1;
      uint64_t ALRAE:1;
      uint64_t reservedSpace2:2;
      uint64_t TSE:1;
      uint64_t ALRAIE:1;
      uint64_t reservedSpace3:2;
      uint64_t TSIE:1;
      uint64_t ADD1H:1;
      uint64_t SUB1H:1;
      uint64_t BKP_bitfield:1;
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
      uint64_t reservedSpace0:2;
      uint64_t SHPF:1;
      uint64_t INITS:1;
      uint64_t RSF:1;
      uint64_t INITF:1;
      uint64_t INIT:1;
      uint64_t ALRAF:1;
      uint64_t reservedSpace1:2;
      uint64_t TSF:1;
      uint64_t TSOVF:1;
      uint64_t TAMP1F:1;
      uint64_t TAMP2F:1;
      uint64_t reservedSpace2:1;
      uint64_t RECALPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV_S:15;
      uint64_t reservedSpace0:1;
      uint64_t PREDIV_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRER;

  uint8_t res0[8];

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

  uint8_t res1[4];

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
      uint64_t TAMP_PRCH:2;
      uint64_t TAMP_PUDIS:1;
      uint64_t reservedSpace1:2;
      uint64_t PC13VALUE:1;
      uint64_t PC13MODE:1;
      uint64_t PC14VALUE:1;
      uint64_t PC14MODE:1;
      uint64_t PC15VALUE:1;
      uint64_t PC15MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAFCR;

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

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP4R;

};

#define RTC_0 (*(volatile struct RTC_0_tag *) 0x40002800)

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

};

#define TSC_0 (*(volatile struct TSC_0_tag *) 0x40024000)

struct CEC_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CECEN:1;
      uint64_t TXSOM:1;
      uint64_t TXEOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OAR:4;
      uint64_t LSTN:1;
      uint64_t SFT:3;
      uint64_t RXTOL:1;
      uint64_t BRESTP:1;
      uint64_t BREGEN:1;
      uint64_t LBPEGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBR:1;
      uint64_t RXEND:1;
      uint64_t RXOVR:1;
      uint64_t BRE:1;
      uint64_t SBPE:1;
      uint64_t LBPE:1;
      uint64_t RXACKE:1;
      uint64_t ARBLST:1;
      uint64_t TXBR:1;
      uint64_t TXEND:1;
      uint64_t TXUDR:1;
      uint64_t TXERR:1;
      uint64_t TXACKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBRIE:1;
      uint64_t RXENDIE:1;
      uint64_t RXOVRIE:1;
      uint64_t BREIE:1;
      uint64_t SBPEIE:1;
      uint64_t LBPEIE:1;
      uint64_t RXACKIE:1;
      uint64_t ARBLSTIE:1;
      uint64_t TXBRIE:1;
      uint64_t TXENDIE:1;
      uint64_t TXUDRIE:1;
      uint64_t TXERRIE:1;
      uint64_t TXACKIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CEC_0 (*(volatile struct CEC_0_tag *) 0x40007800)

struct Flash_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:3;
      uint64_t reservedSpace0:1;
      uint64_t PRFTBE:1;
      uint64_t PRFTBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR;

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
      uint64_t reservedSpace0:1;
      uint64_t PGERR:1;
      uint64_t reservedSpace1:1;
      uint64_t WRPRT:1;
      uint64_t EOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t PER:1;
      uint64_t MER:1;
      uint64_t reservedSpace0:1;
      uint64_t OPTPG:1;
      uint64_t OPTER:1;
      uint64_t STRT:1;
      uint64_t LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t OPTWRE:1;
      uint64_t ERRIE:1;
      uint64_t reservedSpace2:1;
      uint64_t EOPIE:1;
      uint64_t FORCE_OPTLOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTERR:1;
      uint64_t LEVEL1_PROT:1;
      uint64_t LEVEL2_PROT:1;
      uint64_t reservedSpace0:5;
      uint64_t WDG_SW:1;
      uint64_t nRST_STOP:1;
      uint64_t nRST_STDBY:1;
      uint64_t reservedSpace1:1;
      uint64_t BOOT1:1;
      uint64_t VDDA_MONITOR:1;
      uint64_t reservedSpace2:2;
      uint64_t Data0:8;
      uint64_t Data1:8;
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

struct DBGMCU_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ID:12;
      uint64_t DIV_ID:4;
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
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
      uint64_t DBG_TIMER3_STOP:1;
      uint64_t reservedSpace0:2;
      uint64_t DBG_TIMER6_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t DBG_TIMER14_STOP:1;
      uint64_t reservedSpace2:1;
      uint64_t DBG_RTC_STOP:1;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_IWDG_STOP:1;
      uint64_t reservedSpace3:8;
      uint64_t I2C1_SMBUS_TIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBLFZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DBG_TIMER1_STOP:1;
      uint64_t reservedSpace1:4;
      uint64_t DBG_TIMER15_STO:1;
      uint64_t DBG_TIMER16_STO:1;
      uint64_t DBG_TIMER17_STO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBHFZ;

};

#define DBGMCU_0 (*(volatile struct DBGMCU_0_tag *) 0x40015800)

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
      uint64_t reservedSpace0:4;
      uint64_t REV_IN:2;
      uint64_t REV_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INIT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INIT;

};

#define CRC_1 (*(volatile struct CRC_1_tag *) 0x40023000)

struct GPIOF_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOF_1 (*(volatile struct GPIOF_1_tag *) 0x48001400)

struct GPIOD_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOD_1 (*(volatile struct GPIOD_1_tag *) 0x48000c00)

struct GPIOC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOC_1 (*(volatile struct GPIOC_1_tag *) 0x48000800)

struct GPIOB_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOB_1 (*(volatile struct GPIOB_1_tag *) 0x48000400)

struct GPIOE_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOE_1 (*(volatile struct GPIOE_1_tag *) 0x48001000)

struct GPIOA_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODER0:2;
      uint64_t MODER1:2;
      uint64_t MODER2:2;
      uint64_t MODER3:2;
      uint64_t MODER4:2;
      uint64_t MODER5:2;
      uint64_t MODER6:2;
      uint64_t MODER7:2;
      uint64_t MODER8:2;
      uint64_t MODER9:2;
      uint64_t MODER10:2;
      uint64_t MODER11:2;
      uint64_t MODER12:2;
      uint64_t MODER13:2;
      uint64_t MODER14:2;
      uint64_t MODER15:2;
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
      uint64_t OSPEEDR0:2;
      uint64_t OSPEEDR1:2;
      uint64_t OSPEEDR2:2;
      uint64_t OSPEEDR3:2;
      uint64_t OSPEEDR4:2;
      uint64_t OSPEEDR5:2;
      uint64_t OSPEEDR6:2;
      uint64_t OSPEEDR7:2;
      uint64_t OSPEEDR8:2;
      uint64_t OSPEEDR9:2;
      uint64_t OSPEEDR10:2;
      uint64_t OSPEEDR11:2;
      uint64_t OSPEEDR12:2;
      uint64_t OSPEEDR13:2;
      uint64_t OSPEEDR14:2;
      uint64_t OSPEEDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OSPEEDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PUPDR0:2;
      uint64_t PUPDR1:2;
      uint64_t PUPDR2:2;
      uint64_t PUPDR3:2;
      uint64_t PUPDR4:2;
      uint64_t PUPDR5:2;
      uint64_t PUPDR6:2;
      uint64_t PUPDR7:2;
      uint64_t PUPDR8:2;
      uint64_t PUPDR9:2;
      uint64_t PUPDR10:2;
      uint64_t PUPDR11:2;
      uint64_t PUPDR12:2;
      uint64_t PUPDR13:2;
      uint64_t PUPDR14:2;
      uint64_t PUPDR15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUPDR;

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
  } __attribute__((aligned(4))) IDR;

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
      uint64_t AFRL0:4;
      uint64_t AFRL1:4;
      uint64_t AFRL2:4;
      uint64_t AFRL3:4;
      uint64_t AFRL4:4;
      uint64_t AFRL5:4;
      uint64_t AFRL6:4;
      uint64_t AFRL7:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AFRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFRH8:4;
      uint64_t AFRH9:4;
      uint64_t AFRH10:4;
      uint64_t AFRH11:4;
      uint64_t AFRH12:4;
      uint64_t AFRH13:4;
      uint64_t AFRH14:4;
      uint64_t AFRH15:4;
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

#define GPIOA_1 (*(volatile struct GPIOA_1_tag *) 0x48000000)

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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
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
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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
      uint64_t NSSP:1;
      uint64_t FRF:1;
      uint64_t ERRIE:1;
      uint64_t RXNEIE:1;
      uint64_t TXEIE:1;
      uint64_t DS:4;
      uint64_t FRXTH:1;
      uint64_t LDMA_RX:1;
      uint64_t LDMA_TX:1;
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
      uint64_t FRLVL:2;
      uint64_t FTLVL:2;
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
      uint64_t TSEL10:1;
      uint64_t TSEL11:1;
      uint64_t TSEL12:1;
      uint64_t reservedSpace0:6;
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
      uint64_t reservedSpace1:15;
      uint64_t DMAUDR2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define DAC_1 (*(volatile struct DAC_1_tag *) 0x40007400)

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
      uint64_t reservedSpace0:4;
      uint64_t EWUP:1;
      uint64_t BRE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define PWR_1 (*(volatile struct PWR_1_tag *) 0x40007000)

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
      uint64_t SWRST:1;
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
      uint64_t SADD0:1;
      uint64_t SADD1:7;
      uint64_t SADD8:2;
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
      uint64_t OA1_0:1;
      uint64_t OA1_1:7;
      uint64_t OA1_8:2;
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
      uint64_t SWRST:1;
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
      uint64_t SADD0:1;
      uint64_t SADD1:7;
      uint64_t SADD8:2;
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
      uint64_t OA1_0:1;
      uint64_t OA1_1:7;
      uint64_t OA1_8:2;
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
      uint64_t WDGTB:2;
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
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
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
      uint64_t MR18:1;
      uint64_t MR19:1;
      uint64_t MR20:1;
      uint64_t MR21:1;
      uint64_t MR22:1;
      uint64_t MR23:1;
      uint64_t MR24:1;
      uint64_t MR25:1;
      uint64_t MR26:1;
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
      uint64_t reservedSpace0:6;
      uint64_t PRI_00:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_01:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_02:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_03:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_40:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_41:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_42:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_43:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_80:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_81:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_82:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_83:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_120:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_121:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_122:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_123:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_160:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_161:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_162:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_163:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_200:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_201:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_202:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_203:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_240:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_241:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_242:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_243:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:6;
      uint64_t PRI_280:2;
      uint64_t reservedSpace1:6;
      uint64_t PRI_281:2;
      uint64_t reservedSpace2:6;
      uint64_t PRI_282:2;
      uint64_t reservedSpace3:6;
      uint64_t PRI_283:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IPR7;

};

#define NVIC_1 (*(volatile struct NVIC_1_tag *) 0xe000e100)

struct DMA_1_tag
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

};

#define DMA_1 (*(volatile struct DMA_1_tag *) 0x40020000)

struct RCC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSION:1;
      uint64_t HSIRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t HSITRIM:5;
      uint64_t HSICAL:8;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SW:2;
      uint64_t SWS:2;
      uint64_t HPRE:4;
      uint64_t PPRE:3;
      uint64_t reservedSpace0:3;
      uint64_t ADCPRE:2;
      uint64_t PLLSRC:1;
      uint64_t PLLXTPRE:1;
      uint64_t PLLMUL:4;
      uint64_t reservedSpace1:2;
      uint64_t MCO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t HSI14RDYF:1;
      uint64_t reservedSpace0:1;
      uint64_t CSSF:1;
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t HSI14RDYE:1;
      uint64_t reservedSpace1:2;
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t HSI14RDYC:1;
      uint64_t reservedSpace2:1;
      uint64_t CSSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGRST:1;
      uint64_t reservedSpace0:8;
      uint64_t ADCRST:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM1RST:1;
      uint64_t SPI1RST:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1RST:1;
      uint64_t reservedSpace3:1;
      uint64_t TIM15RST:1;
      uint64_t TIM16RST:1;
      uint64_t TIM17RST:1;
      uint64_t reservedSpace4:3;
      uint64_t DBGMCURST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t TIM3RST:1;
      uint64_t reservedSpace0:2;
      uint64_t TIM6RST:1;
      uint64_t reservedSpace1:3;
      uint64_t TIM14RST:1;
      uint64_t reservedSpace2:2;
      uint64_t WWDGRST:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2RST:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2RST:1;
      uint64_t reservedSpace5:3;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t reservedSpace6:5;
      uint64_t PWRRST:1;
      uint64_t DACRST:1;
      uint64_t CECRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMAEN:1;
      uint64_t reservedSpace0:1;
      uint64_t SRAMEN:1;
      uint64_t reservedSpace1:1;
      uint64_t FLITFEN:1;
      uint64_t reservedSpace2:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace3:10;
      uint64_t IOPAEN:1;
      uint64_t IOPBEN:1;
      uint64_t IOPCEN:1;
      uint64_t IOPDEN:1;
      uint64_t reservedSpace4:1;
      uint64_t IOPFEN:1;
      uint64_t reservedSpace5:1;
      uint64_t TSCEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCFGEN:1;
      uint64_t reservedSpace0:8;
      uint64_t ADCEN:1;
      uint64_t reservedSpace1:1;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART1EN:1;
      uint64_t reservedSpace3:1;
      uint64_t TIM15EN:1;
      uint64_t TIM16EN:1;
      uint64_t TIM17EN:1;
      uint64_t reservedSpace4:3;
      uint64_t DBGMCUEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t TIM3EN:1;
      uint64_t reservedSpace0:2;
      uint64_t TIM6EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TIM14EN:1;
      uint64_t reservedSpace2:2;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace3:2;
      uint64_t SPI2EN:1;
      uint64_t reservedSpace4:2;
      uint64_t USART2EN:1;
      uint64_t reservedSpace5:3;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t reservedSpace6:5;
      uint64_t PWREN:1;
      uint64_t DACEN:1;
      uint64_t CECEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t LSEDRV:2;
      uint64_t reservedSpace0:3;
      uint64_t RTCSEL:2;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t BDRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:22;
      uint64_t RMVF:1;
      uint64_t OBLRSTF:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:17;
      uint64_t IOPARST:1;
      uint64_t IOPBRST:1;
      uint64_t IOPCRST:1;
      uint64_t IOPDRST:1;
      uint64_t reservedSpace1:1;
      uint64_t IOPFRST:1;
      uint64_t reservedSpace2:1;
      uint64_t TSCRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBRSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USART1SW:2;
      uint64_t reservedSpace0:2;
      uint64_t I2C1SW:1;
      uint64_t reservedSpace1:1;
      uint64_t CECSW:1;
      uint64_t reservedSpace2:1;
      uint64_t ADCSW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSI14ON:1;
      uint64_t HSI14RDY:1;
      uint64_t HSI14DIS:1;
      uint64_t HSI14TRIM:5;
      uint64_t HSI14CAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

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
      uint64_t ADC_DMA_RMP:1;
      uint64_t USART1_TX_DMA_RMP:1;
      uint64_t USART1_RX_DMA_RMP:1;
      uint64_t TIM16_DMA_RMP:1;
      uint64_t TIM17_DMA_RMP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_PB6_FM:1;
      uint64_t I2C_PB7_FM:1;
      uint64_t I2C_PB8_FM:1;
      uint64_t I2C_PB9_FM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR1;

  uint8_t res0[4];

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LOCUP_LOCK:1;
      uint64_t SRAM_PARITY_LOCK:1;
      uint64_t PVD_LOCK:1;
      uint64_t reservedSpace0:5;
      uint64_t SRAM_PEF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR2;

};

#define SYSCFG_1 (*(volatile struct SYSCFG_1_tag *) 0x40010000)

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
      uint64_t reservedSpace1:26;
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
      uint64_t reservedSpace0:30;
      uint64_t JITOFF_D2:1;
      uint64_t JITOFF_D4:1;
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

  uint8_t res3[708];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t VREFEN:1;
      uint64_t TSEN:1;
      uint64_t VBATEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

};

#define ADC_1 (*(volatile struct ADC_1_tag *) 0x40012400)

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
      uint64_t M:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT:5;
      uint64_t DEAT:5;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
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
      uint64_t DATAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD:2;
      uint64_t RTOEN:1;
      uint64_t ADD0:4;
      uint64_t ADD4:4;
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
      uint64_t M:1;
      uint64_t MME:1;
      uint64_t CMIE:1;
      uint64_t OVER8:1;
      uint64_t DEDT:5;
      uint64_t DEAT:5;
      uint64_t RTOIE:1;
      uint64_t EOBIE:1;
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
      uint64_t DATAINV:1;
      uint64_t MSBFIRST:1;
      uint64_t ABREN:1;
      uint64_t ABRMOD:2;
      uint64_t RTOEN:1;
      uint64_t ADD0:4;
      uint64_t ADD4:4;
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

struct COMP_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COMP1EN:1;
      uint64_t COMP1_INP_DAC:1;
      uint64_t COMP1MODE:2;
      uint64_t COMP1INSEL:3;
      uint64_t reservedSpace0:1;
      uint64_t COMP1OUTSEL:3;
      uint64_t COMP1POL:1;
      uint64_t COMP1HYST:2;
      uint64_t COMP1OUT:1;
      uint64_t COMP1LOCK:1;
      uint64_t COMP2EN:1;
      uint64_t reservedSpace1:1;
      uint64_t COMP2MODE:2;
      uint64_t COMP2INSEL:3;
      uint64_t WNDWEN:1;
      uint64_t COMP2OUTSEL:3;
      uint64_t COMP2POL:1;
      uint64_t COMP2HYST:2;
      uint64_t COMP2OUT:1;
      uint64_t COMP2LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define COMP_1 (*(volatile struct COMP_1_tag *) 0x4001001c)

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
      uint64_t reservedSpace0:3;
      uint64_t TSEDGE:1;
      uint64_t REFCKON:1;
      uint64_t BYPSHAD:1;
      uint64_t FMT:1;
      uint64_t reservedSpace1:1;
      uint64_t ALRAE:1;
      uint64_t reservedSpace2:2;
      uint64_t TSE:1;
      uint64_t ALRAIE:1;
      uint64_t reservedSpace3:2;
      uint64_t TSIE:1;
      uint64_t ADD1H:1;
      uint64_t SUB1H:1;
      uint64_t BKP_bitfield:1;
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
      uint64_t reservedSpace0:2;
      uint64_t SHPF:1;
      uint64_t INITS:1;
      uint64_t RSF:1;
      uint64_t INITF:1;
      uint64_t INIT:1;
      uint64_t ALRAF:1;
      uint64_t reservedSpace1:2;
      uint64_t TSF:1;
      uint64_t TSOVF:1;
      uint64_t TAMP1F:1;
      uint64_t TAMP2F:1;
      uint64_t reservedSpace2:1;
      uint64_t RECALPF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PREDIV_S:15;
      uint64_t reservedSpace0:1;
      uint64_t PREDIV_A:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRER;

  uint8_t res0[8];

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

  uint8_t res1[4];

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
      uint64_t TAMP_PRCH:2;
      uint64_t TAMP_PUDIS:1;
      uint64_t reservedSpace1:2;
      uint64_t PC13VALUE:1;
      uint64_t PC13MODE:1;
      uint64_t PC14VALUE:1;
      uint64_t PC14MODE:1;
      uint64_t PC15VALUE:1;
      uint64_t PC15MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAFCR;

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

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP3R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BKP_bitfield:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BKP4R;

};

#define RTC_1 (*(volatile struct RTC_1_tag *) 0x40002800)

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

};

#define TSC_1 (*(volatile struct TSC_1_tag *) 0x40024000)

struct CEC_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CECEN:1;
      uint64_t TXSOM:1;
      uint64_t TXEOM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OAR:4;
      uint64_t LSTN:1;
      uint64_t SFT:3;
      uint64_t RXTOL:1;
      uint64_t BRESTP:1;
      uint64_t BREGEN:1;
      uint64_t LBPEGEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXD:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RXDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBR:1;
      uint64_t RXEND:1;
      uint64_t RXOVR:1;
      uint64_t BRE:1;
      uint64_t SBPE:1;
      uint64_t LBPE:1;
      uint64_t RXACKE:1;
      uint64_t ARBLST:1;
      uint64_t TXBR:1;
      uint64_t TXEND:1;
      uint64_t TXUDR:1;
      uint64_t TXERR:1;
      uint64_t TXACKE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ISR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RXBRIE:1;
      uint64_t RXENDIE:1;
      uint64_t RXOVRIE:1;
      uint64_t BREIE:1;
      uint64_t SBPEIE:1;
      uint64_t LBPEIE:1;
      uint64_t RXACKIE:1;
      uint64_t ARBLSTIE:1;
      uint64_t TXBRIE:1;
      uint64_t TXENDIE:1;
      uint64_t TXUDRIE:1;
      uint64_t TXERRIE:1;
      uint64_t TXACKIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IER;

};

#define CEC_1 (*(volatile struct CEC_1_tag *) 0x40007800)

struct Flash_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:3;
      uint64_t reservedSpace0:1;
      uint64_t PRFTBE:1;
      uint64_t PRFTBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FKEYR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR;

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
      uint64_t reservedSpace0:1;
      uint64_t PGERR:1;
      uint64_t reservedSpace1:1;
      uint64_t WRPRT:1;
      uint64_t EOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t PER:1;
      uint64_t MER:1;
      uint64_t reservedSpace0:1;
      uint64_t OPTPG:1;
      uint64_t OPTER:1;
      uint64_t STRT:1;
      uint64_t LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t OPTWRE:1;
      uint64_t ERRIE:1;
      uint64_t reservedSpace2:1;
      uint64_t EOPIE:1;
      uint64_t FORCE_OPTLOAD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTERR:1;
      uint64_t LEVEL1_PROT:1;
      uint64_t LEVEL2_PROT:1;
      uint64_t reservedSpace0:5;
      uint64_t WDG_SW:1;
      uint64_t nRST_STOP:1;
      uint64_t nRST_STDBY:1;
      uint64_t reservedSpace1:1;
      uint64_t BOOT1:1;
      uint64_t VDDA_MONITOR:1;
      uint64_t reservedSpace2:2;
      uint64_t Data0:8;
      uint64_t Data1:8;
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

struct DBGMCU_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEV_ID:12;
      uint64_t DIV_ID:4;
      uint64_t REV_ID:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) IDCODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
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
      uint64_t DBG_TIMER3_STOP:1;
      uint64_t reservedSpace0:2;
      uint64_t DBG_TIMER6_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t DBG_TIMER14_STOP:1;
      uint64_t reservedSpace2:1;
      uint64_t DBG_RTC_STOP:1;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_IWDG_STOP:1;
      uint64_t reservedSpace3:8;
      uint64_t I2C1_SMBUS_TIMEOUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBLFZ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:11;
      uint64_t DBG_TIMER1_STOP:1;
      uint64_t reservedSpace1:4;
      uint64_t DBG_TIMER15_STO:1;
      uint64_t DBG_TIMER16_STO:1;
      uint64_t DBG_TIMER17_STO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APBHFZ;

};

#define DBGMCU_1 (*(volatile struct DBGMCU_1_tag *) 0x40015800)

struct System_Control_Space_System_Control_Block_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VARIANT:4;
      uint64_t PARTNO:12;
      uint64_t reservedSpace0:4;
      uint64_t REVISION:4;
      uint64_t IMPLEMENTER:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:8;
      uint64_t reservedSpace0:3;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:10;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace1:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace2:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:7;
      uint64_t TBLOFF:22;
      uint64_t TBLBASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTOR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:5;
      uint64_t PRIGROUP:3;
      uint64_t reservedSpace1:4;
      uint64_t ENDIANESS:1;
      uint64_t VECTKEYVECTKEYSTAT:16;
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
      uint64_t SEVONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NONEBASETHRDENA:1;
      uint64_t USERSETMPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGN_TRP:1;
      uint64_t DIV_0_TRP:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_4:8;
      uint64_t PRI_5:8;
      uint64_t PRI_6:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHPR1;

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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMFAULTACT:1;
      uint64_t BUSFAULTACT:1;
      uint64_t reservedSpace0:1;
      uint64_t USGFAULTACT:1;
      uint64_t reservedSpace1:3;
      uint64_t SVCALLACT:1;
      uint64_t MONITORACT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSVACT:1;
      uint64_t SYSTICKACT:1;
      uint64_t USGFAULTPENDED:1;
      uint64_t MEMFAULTPENDED:1;
      uint64_t BUSFAULTPENDED:1;
      uint64_t SVCALLPENDED:1;
      uint64_t MEMFAULTENA:1;
      uint64_t BUSFAULTENA:1;
      uint64_t USGFAULTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SHCRS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IACCVIOL:1;
      uint64_t DACCVIOL:1;
      uint64_t reservedSpace0:1;
      uint64_t MUNSTKERR:1;
      uint64_t MSTKERR:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARVALID:1;
      uint64_t IBUSERR:1;
      uint64_t PRECISERR:1;
      uint64_t IMPRECISERR:1;
      uint64_t UNSTKERR:1;
      uint64_t STKERR:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARVALID:1;
      uint64_t UNDEFINSTR:1;
      uint64_t INVSTATE:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIVBYZERO:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECTTBL:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DEBUGEVT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HALTED:1;
      uint64_t BKPT:1;
      uint64_t DWTTRAP:1;
      uint64_t VCATCH:1;
      uint64_t EXTERNAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DFSR;

  uint32_t MMFAR;
  uint32_t BFAR;
  uint32_t AFSR;
  uint32_t PFR0;
  uint32_t PFR1;
  uint32_t DFR0;
  uint32_t AFR0;
  uint32_t MMFR0;
  uint32_t MMFR1;
  uint32_t MMFR2;
  uint32_t MMFR3;
  uint32_t ISAR0;
  uint32_t ISAR1;
  uint32_t ISAR2;
  uint32_t ISAR3;
  uint32_t ISAR4;
  uint8_t res0[20];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CP0:2;
      uint64_t CP1:2;
      uint64_t CP2:2;
      uint64_t CP3:2;
      uint64_t CP4:2;
      uint64_t CP5:2;
      uint64_t CP6:2;
      uint64_t CP7:2;
      uint64_t reservedSpace0:4;
      uint64_t CP10:2;
      uint64_t CP11:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPACR;

};

#define System_Control_Space_System_Control_Block (*(volatile struct System_Control_Space_System_Control_Block_tag *) 0xe000ed00)

struct System_Control_Space_System_Control_and_ID_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTLINESNUM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACTLR;

  uint8_t res0[3828];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STIR;

  uint8_t res1[204];

  uint32_t PID4;
  uint32_t PID5;
  uint32_t PID6;
  uint32_t PID7;
  uint32_t PID0;
  uint32_t PID1;
  uint32_t PID2;
  uint32_t PID3;
  uint32_t CID0;
  uint32_t CID1;
  uint32_t CID2;
  uint32_t CID3;
};

#define System_Control_Space_System_Control_and_ID (*(volatile struct System_Control_Space_System_Control_and_ID_tag *) 0xe000e004)

struct System_Control_Space_NVIC_tag
{
  uint32_t INT_0_31_SET_EN;
  uint32_t INT_32_63_SET_EN;
  uint32_t INT_64_95_SET_EN;
  uint32_t INT_96_127_SET_EN;
  uint32_t INT_128_159_SET_EN;
  uint32_t INT_160_191_SET_EN;
  uint32_t INT_192_223_SET_EN;
  uint16_t INT_224_239_SET_EN;
  uint8_t res0[98];

  uint32_t INT_0_31_CLR_EN;
  uint32_t INT_32_63_CLR_EN;
  uint32_t INT_64_95_CLR_EN;
  uint32_t INT_96_127_CLR_EN;
  uint32_t INT_128_159_CLR_EN;
  uint32_t INT_160_191_CLR_EN;
  uint32_t INT_192_223_CLR_EN;
  uint16_t INT_224_239_CLR_EN;
  uint8_t res1[98];

  uint32_t INT_0_31_SET_PEND;
  uint32_t INT_32_63_SET_PEND;
  uint32_t INT_64_95_SET_PEND;
  uint32_t INT_96_127_SET_PEND;
  uint32_t INT_128_159_SET_PEND;
  uint32_t INT_160_191_SET_PEND;
  uint32_t INT_192_223_SET_PEND;
  uint16_t INT_224_239_SET_PEND;
  uint8_t res2[98];

  uint32_t INT_0_31_CLR_PEND;
  uint32_t INT_32_63_CLR_PEND;
  uint32_t INT_64_95_CLR_PEND;
  uint32_t INT_96_127_CLR_PEND;
  uint32_t INT_128_159_CLR_PEND;
  uint32_t INT_160_191_CLR_PEND;
  uint32_t INT_192_223_CLR_PEND;
  uint16_t INT_224_239_CLR_PEND;
  uint8_t res3[98];

  uint32_t INT_0_31_ACT;
  uint32_t INT_32_63_ACT;
  uint32_t INT_64_95_ACT;
  uint32_t INT_96_127_ACT;
  uint32_t INT_128_159_ACT;
  uint32_t INT_160_191_ACT;
  uint32_t INT_192_223_ACT;
  uint16_t INT_224_239_ACT;
  uint8_t res4[226];

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
  } __attribute__((aligned(4))) INT_0_3_PRI;

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
  } __attribute__((aligned(4))) INT_4_7_PRI;

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
  } __attribute__((aligned(4))) INT_8_11_PRI;

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
  } __attribute__((aligned(4))) INT_12_15_PRI;

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
  } __attribute__((aligned(4))) INT_16_19_PRI;

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
  } __attribute__((aligned(4))) INT_20_23_PRI;

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
  } __attribute__((aligned(4))) INT_24_27_PRI;

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
  } __attribute__((aligned(4))) INT_28_31_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_32:8;
      uint64_t PRI_33:8;
      uint64_t PRI_34:8;
      uint64_t PRI_35:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_32_35_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_36:8;
      uint64_t PRI_37:8;
      uint64_t PRI_38:8;
      uint64_t PRI_39:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_36_39_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_40:8;
      uint64_t PRI_41:8;
      uint64_t PRI_42:8;
      uint64_t PRI_43:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_40_43_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_44:8;
      uint64_t PRI_45:8;
      uint64_t PRI_46:8;
      uint64_t PRI_47:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_44_47_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_48:8;
      uint64_t PRI_49:8;
      uint64_t PRI_50:8;
      uint64_t PRI_51:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_48_51_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_52:8;
      uint64_t PRI_53:8;
      uint64_t PRI_54:8;
      uint64_t PRI_55:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_52_55_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_56:8;
      uint64_t PRI_57:8;
      uint64_t PRI_58:8;
      uint64_t PRI_59:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_56_59_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_60:8;
      uint64_t PRI_61:8;
      uint64_t PRI_62:8;
      uint64_t PRI_63:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_60_63_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_64:8;
      uint64_t PRI_65:8;
      uint64_t PRI_66:8;
      uint64_t PRI_67:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_64_67_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_68:8;
      uint64_t PRI_69:8;
      uint64_t PRI_70:8;
      uint64_t PRI_71:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_68_71_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_72:8;
      uint64_t PRI_73:8;
      uint64_t PRI_74:8;
      uint64_t PRI_75:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_72_75_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_76:8;
      uint64_t PRI_77:8;
      uint64_t PRI_78:8;
      uint64_t PRI_79:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_76_79_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_80:8;
      uint64_t PRI_81:8;
      uint64_t PRI_82:8;
      uint64_t PRI_83:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_80_83_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_84:8;
      uint64_t PRI_85:8;
      uint64_t PRI_86:8;
      uint64_t PRI_87:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_84_87_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_88:8;
      uint64_t PRI_89:8;
      uint64_t PRI_90:8;
      uint64_t PRI_91:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_88_91_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_92:8;
      uint64_t PRI_93:8;
      uint64_t PRI_94:8;
      uint64_t PRI_95:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_92_95_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_96:8;
      uint64_t PRI_97:8;
      uint64_t PRI_98:8;
      uint64_t PRI_99:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_96_99_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_100:8;
      uint64_t PRI_101:8;
      uint64_t PRI_102:8;
      uint64_t PRI_103:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_100_103_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_104:8;
      uint64_t PRI_105:8;
      uint64_t PRI_106:8;
      uint64_t PRI_107:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_104_107_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_108:8;
      uint64_t PRI_109:8;
      uint64_t PRI_110:8;
      uint64_t PRI_111:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_108_111_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_112:8;
      uint64_t PRI_113:8;
      uint64_t PRI_114:8;
      uint64_t PRI_115:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_112_115_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_116:8;
      uint64_t PRI_117:8;
      uint64_t PRI_118:8;
      uint64_t PRI_119:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_116_119_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_120:8;
      uint64_t PRI_121:8;
      uint64_t PRI_122:8;
      uint64_t PRI_123:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_120_123_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_124:8;
      uint64_t PRI_125:8;
      uint64_t PRI_126:8;
      uint64_t PRI_127:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_124_127_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_128:8;
      uint64_t PRI_129:8;
      uint64_t PRI_130:8;
      uint64_t PRI_131:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_128_131_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_132:8;
      uint64_t PRI_133:8;
      uint64_t PRI_134:8;
      uint64_t PRI_135:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_132_135_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_136:8;
      uint64_t PRI_137:8;
      uint64_t PRI_138:8;
      uint64_t PRI_139:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_136_139_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_140:8;
      uint64_t PRI_141:8;
      uint64_t PRI_142:8;
      uint64_t PRI_143:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_140_143_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_144:8;
      uint64_t PRI_145:8;
      uint64_t PRI_146:8;
      uint64_t PRI_147:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_144_147_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_148:8;
      uint64_t PRI_149:8;
      uint64_t PRI_150:8;
      uint64_t PRI_151:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_148_151_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_152:8;
      uint64_t PRI_153:8;
      uint64_t PRI_154:8;
      uint64_t PRI_155:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_152_155_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_156:8;
      uint64_t PRI_157:8;
      uint64_t PRI_158:8;
      uint64_t PRI_159:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_156_159_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_160:8;
      uint64_t PRI_161:8;
      uint64_t PRI_162:8;
      uint64_t PRI_163:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_160_163_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_164:8;
      uint64_t PRI_165:8;
      uint64_t PRI_166:8;
      uint64_t PRI_167:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_164_167_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_168:8;
      uint64_t PRI_169:8;
      uint64_t PRI_170:8;
      uint64_t PRI_171:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_168_171_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_172:8;
      uint64_t PRI_173:8;
      uint64_t PRI_174:8;
      uint64_t PRI_175:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_172_175_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_176:8;
      uint64_t PRI_177:8;
      uint64_t PRI_178:8;
      uint64_t PRI_179:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_176_179_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_180:8;
      uint64_t PRI_181:8;
      uint64_t PRI_182:8;
      uint64_t PRI_183:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_180_183_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_184:8;
      uint64_t PRI_185:8;
      uint64_t PRI_186:8;
      uint64_t PRI_187:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_184_187_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_188:8;
      uint64_t PRI_189:8;
      uint64_t PRI_190:8;
      uint64_t PRI_191:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_188_191_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_192:8;
      uint64_t PRI_193:8;
      uint64_t PRI_194:8;
      uint64_t PRI_195:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_192_195_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_196:8;
      uint64_t PRI_197:8;
      uint64_t PRI_198:8;
      uint64_t PRI_199:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_196_199_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_200:8;
      uint64_t PRI_201:8;
      uint64_t PRI_202:8;
      uint64_t PRI_203:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_200_203_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_204:8;
      uint64_t PRI_205:8;
      uint64_t PRI_206:8;
      uint64_t PRI_207:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_204_207_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_208:8;
      uint64_t PRI_209:8;
      uint64_t PRI_210:8;
      uint64_t PRI_211:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_208_211_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_212:8;
      uint64_t PRI_213:8;
      uint64_t PRI_214:8;
      uint64_t PRI_215:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_212_215_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_216:8;
      uint64_t PRI_217:8;
      uint64_t PRI_218:8;
      uint64_t PRI_219:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_216_219_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_220:8;
      uint64_t PRI_221:8;
      uint64_t PRI_222:8;
      uint64_t PRI_223:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_220_223_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_224:8;
      uint64_t PRI_225:8;
      uint64_t PRI_226:8;
      uint64_t PRI_227:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_224_227_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_228:8;
      uint64_t PRI_229:8;
      uint64_t PRI_230:8;
      uint64_t PRI_231:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_228_231_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_232:8;
      uint64_t PRI_233:8;
      uint64_t PRI_234:8;
      uint64_t PRI_235:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_232_235_PRI;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRI_236:8;
      uint64_t PRI_237:8;
      uint64_t PRI_238:8;
      uint64_t PRI_239:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_236_239_PRI;

};

#define System_Control_Space_NVIC (*(volatile struct System_Control_Space_NVIC_tag *) 0xe000e100)

struct System_Control_Space_SysTick_tag
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
  } __attribute__((aligned(4))) SYST_CSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_RVR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYST_CVR;

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
  } __attribute__((aligned(4))) SYST_CALIB;

};

#define System_Control_Space_SysTick (*(volatile struct System_Control_Space_SysTick_tag *) 0xe000e010)

struct M3_Peripherals_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DISMCYCINT:1;
      uint64_t DISDEFWBUF:1;
      uint64_t DISFOLD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Auxiliary_Control_Register;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t INTEN:1;
      uint64_t CLK_SRC:1;
      uint64_t reservedSpace0:13;
      uint64_t COUNT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Control_and_Status;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RELOAD:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Reload_Value;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURRENT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SysTick_Current_Value;

  uint8_t res1[228];

  uint32_t Interrupt_0_to_31_Set_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Enable;

  uint8_t res2[120];

  uint32_t Interrupt_0_to_31_Clear_Enable;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Enable;

  uint8_t res3[120];

  uint32_t Interrupt_0_to_31_Set_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Set_Pending;

  uint8_t res4[120];

  uint32_t Interrupt_0_to_31_Clear_Pending;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_54_Clear_Pending;

  uint8_t res5[120];

  uint32_t Interrupt_0_to_31_Active_Bit;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INT:23;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_63_Active_Bit;

  uint8_t res6[248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_0_to_3_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_4_to_7_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_8_to_11_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_12_to_15_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_16_to_19_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_20_to_23_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_24_to_27_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_28_to_31_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_32_to_35_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_36_to_39_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_40_to_43_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_44_to_47_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
      uint64_t reservedSpace2:5;
      uint64_t INTC:3;
      uint64_t reservedSpace3:5;
      uint64_t INTD:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_48_to_51_Priority;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t INTA:3;
      uint64_t reservedSpace1:5;
      uint64_t INTB:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Interrupt_52_to_53_Priority;

  uint8_t res7[2248];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REV:4;
      uint64_t PARTNO:12;
      uint64_t CON:4;
      uint64_t VAR:4;
      uint64_t IMP:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CPUID;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTACTIVE:8;
      uint64_t reservedSpace0:3;
      uint64_t RETTOBASE:1;
      uint64_t VECTPENDING:7;
      uint64_t reservedSpace1:3;
      uint64_t ISRPENDING:1;
      uint64_t ISRPREEMPT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSTCLR:1;
      uint64_t PENDSTSET:1;
      uint64_t PENDSVCLR:1;
      uint64_t PENDSVSET:1;
      uint64_t reservedSpace3:2;
      uint64_t NMIPENDSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:9;
      uint64_t OFFSET:20;
      uint64_t BASE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VTABLE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECTRESET:1;
      uint64_t VECTCLRACTIVE:1;
      uint64_t SYSRESETREQ:1;
      uint64_t reservedSpace0:5;
      uint64_t PRIGROUP:3;
      uint64_t reservedSpace1:4;
      uint64_t ENDIANESS:1;
      uint64_t VECTKEYVECTKEYSTAT:16;
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
      uint64_t SEVONPEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASETHR:1;
      uint64_t MAINPEND:1;
      uint64_t reservedSpace0:1;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
      uint64_t reservedSpace1:3;
      uint64_t BFHFNMIGN:1;
      uint64_t STKALIGN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t MEM:3;
      uint64_t reservedSpace1:5;
      uint64_t BUS:3;
      uint64_t reservedSpace2:5;
      uint64_t USAGE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:29;
      uint64_t SVC:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t DEBUG:3;
      uint64_t reservedSpace1:13;
      uint64_t PENDSV:3;
      uint64_t reservedSpace2:5;
      uint64_t TICK:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSPRI3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMFAULTACT:1;
      uint64_t BUSFAULTACT:1;
      uint64_t reservedSpace0:1;
      uint64_t USGFAULTACT:1;
      uint64_t reservedSpace1:3;
      uint64_t SVCALLACT:1;
      uint64_t MONITORACT:1;
      uint64_t reservedSpace2:1;
      uint64_t PENDSVACT:1;
      uint64_t SYSTICKACT:1;
      uint64_t USGFAULTPENDED:1;
      uint64_t MEMFAULTPENDED:1;
      uint64_t BUSFAULTPENDED:1;
      uint64_t SVCALLPENDED:1;
      uint64_t MEMFAULTENA:1;
      uint64_t BUSFAULTENA:1;
      uint64_t USGFAULTENA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSHNDCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IERR:1;
      uint64_t DERR:1;
      uint64_t reservedSpace0:1;
      uint64_t MUSTKE:1;
      uint64_t MSTKE:1;
      uint64_t reservedSpace1:2;
      uint64_t MMARV:1;
      uint64_t IBUS:1;
      uint64_t PRECISE:1;
      uint64_t IMPRE:1;
      uint64_t BUSTKE:1;
      uint64_t BSTKE:1;
      uint64_t reservedSpace2:2;
      uint64_t BFARV:1;
      uint64_t UNDEF:1;
      uint64_t INVSTAT:1;
      uint64_t INVPC:1;
      uint64_t NOCP:1;
      uint64_t reservedSpace3:4;
      uint64_t UNALIGNED:1;
      uint64_t DIV0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FAULTSTAT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t VECT:1;
      uint64_t reservedSpace1:28;
      uint64_t FORCED:1;
      uint64_t DBG_bitfield:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HFAULTSTAT;

  uint8_t res8[4];

  uint32_t Mem_Manage_Address;
  uint32_t Bus_Fault_Address;
  uint8_t res9[84];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEPARATE:1;
      uint64_t reservedSpace0:7;
      uint64_t DREGION:8;
      uint64_t IREGION:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUTYPE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t HFNMIENA:1;
      uint64_t PRIVDEFEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t NUMBER:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUNUMBER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUATTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUATTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUATTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REGION:3;
      uint64_t reservedSpace0:1;
      uint64_t VALID:27;
      uint64_t ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUBASE3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENABLE:1;
      uint64_t SIZE:5;
      uint64_t reservedSpace0:2;
      uint64_t SRD:8;
      uint64_t B:1;
      uint64_t C:1;
      uint64_t S:1;
      uint64_t TEX:3;
      uint64_t reservedSpace1:2;
      uint64_t AP:3;
      uint64_t reservedSpace2:1;
      uint64_t XN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MPUATTR3;

  uint8_t res10[324];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INTID:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) Software_Trigger_Interrupt_Register;

};

#define M3_Peripherals (*(volatile struct M3_Peripherals_tag *) 0xe000e008)

struct FSMC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t reservedSpace1:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace2:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t WRAPMOD:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace1:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t WRAPMOD:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace1:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MBKEN:1;
      uint64_t MUXEN:1;
      uint64_t MTYP:2;
      uint64_t MWID:2;
      uint64_t FACCEN:1;
      uint64_t reservedSpace0:1;
      uint64_t BURSTEN:1;
      uint64_t WAITPOL:1;
      uint64_t WRAPMOD:1;
      uint64_t WAITCFG:1;
      uint64_t WREN:1;
      uint64_t WAITEN:1;
      uint64_t EXTMOD:1;
      uint64_t ASYNCWAIT:1;
      uint64_t reservedSpace1:3;
      uint64_t CBURSTRW:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t BUSTURN:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BTR4;

  uint8_t res0[64];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t PTYP:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t ILS:1;
      uint64_t IFS:1;
      uint64_t IREN:1;
      uint64_t ILEN:1;
      uint64_t IFEN:1;
      uint64_t FEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSETx:8;
      uint64_t ATTWAITx:8;
      uint64_t ATTHOLDx:8;
      uint64_t ATTHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR2;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t PTYP:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t ILS:1;
      uint64_t IFS:1;
      uint64_t IREN:1;
      uint64_t ILEN:1;
      uint64_t IFEN:1;
      uint64_t FEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSETx:8;
      uint64_t ATTWAITx:8;
      uint64_t ATTHOLDx:8;
      uint64_t ATTHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT3;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ECCx:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ECCR3;

  uint8_t res4[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t PWAITEN:1;
      uint64_t PBKEN:1;
      uint64_t PTYP:1;
      uint64_t PWID:2;
      uint64_t ECCEN:1;
      uint64_t reservedSpace1:2;
      uint64_t TCLR:4;
      uint64_t TAR:4;
      uint64_t ECCPS:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IRS:1;
      uint64_t ILS:1;
      uint64_t IFS:1;
      uint64_t IREN:1;
      uint64_t ILEN:1;
      uint64_t IFEN:1;
      uint64_t FEMPT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MEMSETx:8;
      uint64_t MEMWAITx:8;
      uint64_t MEMHOLDx:8;
      uint64_t MEMHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PMEM4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ATTSETx:8;
      uint64_t ATTWAITx:8;
      uint64_t ATTHOLDx:8;
      uint64_t ATTHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PATT4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IOSETx:8;
      uint64_t IOWAITx:8;
      uint64_t IOHOLDx:8;
      uint64_t IOHIZx:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PIO4;

  uint8_t res5[80];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR1;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR2;

  uint8_t res7[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR3;

  uint8_t res8[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDSET:4;
      uint64_t ADDHLD:4;
      uint64_t DATAST:8;
      uint64_t reservedSpace0:4;
      uint64_t CLKDIV:4;
      uint64_t DATLAT:4;
      uint64_t ACCMOD:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BWTR4;

};

#define FSMC (*(volatile struct FSMC_tag *) 0xa0000000)

struct PWR_2_tag
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
      uint64_t reservedSpace0:5;
      uint64_t EWUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define PWR_2 (*(volatile struct PWR_2_tag *) 0x40007000)

struct RCC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t HSION:1;
      uint64_t HSIRDY:1;
      uint64_t reservedSpace0:1;
      uint64_t HSITRIM:5;
      uint64_t HSICAL:8;
      uint64_t HSEON:1;
      uint64_t HSERDY:1;
      uint64_t HSEBYP:1;
      uint64_t CSSON:1;
      uint64_t reservedSpace1:4;
      uint64_t PLLON:1;
      uint64_t PLLRDY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

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
      uint64_t ADCPRE:2;
      uint64_t PLLSRC:1;
      uint64_t PLLXTPRE:1;
      uint64_t PLLMUL:4;
      uint64_t OTGFSPRE:1;
      uint64_t reservedSpace0:1;
      uint64_t MCO:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CFGR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSIRDYF:1;
      uint64_t LSERDYF:1;
      uint64_t HSIRDYF:1;
      uint64_t HSERDYF:1;
      uint64_t PLLRDYF:1;
      uint64_t reservedSpace0:2;
      uint64_t CSSF:1;
      uint64_t LSIRDYIE:1;
      uint64_t LSERDYIE:1;
      uint64_t HSIRDYIE:1;
      uint64_t HSERDYIE:1;
      uint64_t PLLRDYIE:1;
      uint64_t reservedSpace1:3;
      uint64_t LSIRDYC:1;
      uint64_t LSERDYC:1;
      uint64_t HSIRDYC:1;
      uint64_t HSERDYC:1;
      uint64_t PLLRDYC:1;
      uint64_t reservedSpace2:2;
      uint64_t CSSC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CIR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFIORST:1;
      uint64_t reservedSpace0:1;
      uint64_t IOPARST:1;
      uint64_t IOPBRST:1;
      uint64_t IOPCRST:1;
      uint64_t IOPDRST:1;
      uint64_t IOPERST:1;
      uint64_t IOPFRST:1;
      uint64_t IOPGRST:1;
      uint64_t ADC1RST:1;
      uint64_t ADC2RST:1;
      uint64_t TIM1RST:1;
      uint64_t SPI1RST:1;
      uint64_t TIM8RST:1;
      uint64_t USART1RST:1;
      uint64_t ADC3RST:1;
      uint64_t reservedSpace1:3;
      uint64_t TIM9RST:1;
      uint64_t TIM10RST:1;
      uint64_t TIM11RST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2RST:1;
      uint64_t TIM3RST:1;
      uint64_t TIM4RST:1;
      uint64_t TIM5RST:1;
      uint64_t TIM6RST:1;
      uint64_t TIM7RST:1;
      uint64_t TIM12RST:1;
      uint64_t TIM13RST:1;
      uint64_t TIM14RST:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGRST:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2RST:1;
      uint64_t SPI3RST:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2RST:1;
      uint64_t USART3RST:1;
      uint64_t UART4RST:1;
      uint64_t UART5RST:1;
      uint64_t I2C1RST:1;
      uint64_t I2C2RST:1;
      uint64_t USBRST:1;
      uint64_t reservedSpace3:1;
      uint64_t CANRST:1;
      uint64_t reservedSpace4:1;
      uint64_t BKPRST:1;
      uint64_t PWRRST:1;
      uint64_t DACRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1RSTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DMA1EN:1;
      uint64_t DMA2EN:1;
      uint64_t SRAMEN:1;
      uint64_t reservedSpace0:1;
      uint64_t FLITFEN:1;
      uint64_t reservedSpace1:1;
      uint64_t CRCEN:1;
      uint64_t reservedSpace2:1;
      uint64_t FSMCEN:1;
      uint64_t reservedSpace3:1;
      uint64_t SDIOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AHBENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AFIOEN:1;
      uint64_t reservedSpace0:1;
      uint64_t IOPAEN:1;
      uint64_t IOPBEN:1;
      uint64_t IOPCEN:1;
      uint64_t IOPDEN:1;
      uint64_t IOPEEN:1;
      uint64_t IOPFEN:1;
      uint64_t IOPGEN:1;
      uint64_t ADC1EN:1;
      uint64_t ADC2EN:1;
      uint64_t TIM1EN:1;
      uint64_t SPI1EN:1;
      uint64_t TIM8EN:1;
      uint64_t USART1EN:1;
      uint64_t ADC3EN:1;
      uint64_t reservedSpace1:3;
      uint64_t TIM9EN:1;
      uint64_t TIM10EN:1;
      uint64_t TIM11EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB2ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIM2EN:1;
      uint64_t TIM3EN:1;
      uint64_t TIM4EN:1;
      uint64_t TIM5EN:1;
      uint64_t TIM6EN:1;
      uint64_t TIM7EN:1;
      uint64_t TIM12EN:1;
      uint64_t TIM13EN:1;
      uint64_t TIM14EN:1;
      uint64_t reservedSpace0:2;
      uint64_t WWDGEN:1;
      uint64_t reservedSpace1:2;
      uint64_t SPI2EN:1;
      uint64_t SPI3EN:1;
      uint64_t reservedSpace2:1;
      uint64_t USART2EN:1;
      uint64_t USART3EN:1;
      uint64_t UART4EN:1;
      uint64_t UART5EN:1;
      uint64_t I2C1EN:1;
      uint64_t I2C2EN:1;
      uint64_t USBEN:1;
      uint64_t reservedSpace3:1;
      uint64_t CANEN:1;
      uint64_t reservedSpace4:1;
      uint64_t BKPEN:1;
      uint64_t PWREN:1;
      uint64_t DACEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) APB1ENR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSEON:1;
      uint64_t LSERDY:1;
      uint64_t LSEBYP:1;
      uint64_t reservedSpace0:5;
      uint64_t RTCSEL:2;
      uint64_t reservedSpace1:5;
      uint64_t RTCEN:1;
      uint64_t BDRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BDCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSION:1;
      uint64_t LSIRDY:1;
      uint64_t reservedSpace0:22;
      uint64_t RMVF:1;
      uint64_t reservedSpace1:1;
      uint64_t PINRSTF:1;
      uint64_t PORRSTF:1;
      uint64_t SFTRSTF:1;
      uint64_t IWDGRSTF:1;
      uint64_t WWDGRSTF:1;
      uint64_t LPWRRSTF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

};

#define RCC_2 (*(volatile struct RCC_2_tag *) 0x40021000)

struct GPIOA_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOA_2 (*(volatile struct GPIOA_2_tag *) 0x40010800)

struct GPIOB_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOB_2 (*(volatile struct GPIOB_2_tag *) 0x40010c00)

struct GPIOC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOC_2 (*(volatile struct GPIOC_2_tag *) 0x40011000)

struct GPIOD_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOD_2 (*(volatile struct GPIOD_2_tag *) 0x40011400)

struct GPIOE_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOE_2 (*(volatile struct GPIOE_2_tag *) 0x40011800)

struct GPIOF_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOF_2 (*(volatile struct GPIOF_2_tag *) 0x40011c00)

struct GPIOG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE0:2;
      uint64_t CNF0:2;
      uint64_t MODE1:2;
      uint64_t CNF1:2;
      uint64_t MODE2:2;
      uint64_t CNF2:2;
      uint64_t MODE3:2;
      uint64_t CNF3:2;
      uint64_t MODE4:2;
      uint64_t CNF4:2;
      uint64_t MODE5:2;
      uint64_t CNF5:2;
      uint64_t MODE6:2;
      uint64_t CNF6:2;
      uint64_t MODE7:2;
      uint64_t CNF7:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MODE8:2;
      uint64_t CNF8:2;
      uint64_t MODE9:2;
      uint64_t CNF9:2;
      uint64_t MODE10:2;
      uint64_t CNF10:2;
      uint64_t MODE11:2;
      uint64_t CNF11:2;
      uint64_t MODE12:2;
      uint64_t CNF12:2;
      uint64_t MODE13:2;
      uint64_t CNF13:2;
      uint64_t MODE14:2;
      uint64_t CNF14:2;
      uint64_t MODE15:2;
      uint64_t CNF15:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

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
  } __attribute__((aligned(4))) IDR;

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

};

#define GPIOG (*(volatile struct GPIOG_tag *) 0x40012000)

struct AFIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PIN:4;
      uint64_t PORT:3;
      uint64_t EVOE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) EVCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SPI1_REMAP:1;
      uint64_t I2C1_REMAP:1;
      uint64_t USART1_REMAP:1;
      uint64_t USART2_REMAP:1;
      uint64_t USART3_REMAP:2;
      uint64_t TIM1_REMAP:2;
      uint64_t TIM2_REMAP:2;
      uint64_t TIM3_REMAP:2;
      uint64_t TIM4_REMAP:1;
      uint64_t CAN_REMAP:2;
      uint64_t PD01_REMAP:1;
      uint64_t TIM5CH4_IREMAP:1;
      uint64_t ADC1_ETRGINJ_REMAP:1;
      uint64_t ADC1_ETRGREG_REMAP:1;
      uint64_t ADC2_ETRGINJ_REMAP:1;
      uint64_t ADC2_ETRGREG_REMAP:1;
      uint64_t reservedSpace0:3;
      uint64_t SWJ_CFG:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAPR;

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

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:5;
      uint64_t TIM9_REMAP:1;
      uint64_t TIM10_REMAP:1;
      uint64_t TIM11_REMAP:1;
      uint64_t TIM13_REMAP:1;
      uint64_t TIM14_REMAP:1;
      uint64_t FSMC_NADV:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MAPR2;

};

#define AFIO (*(volatile struct AFIO_tag *) 0x40010000)

struct EXTI_2_tag
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
      uint64_t MR18:1;
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
      uint64_t MR18:1;
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
      uint64_t TR18:1;
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
      uint64_t TR18:1;
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
      uint64_t SWIER18:1;
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
      uint64_t PR18:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PR;

};

#define EXTI_2 (*(volatile struct EXTI_2_tag *) 0x40010400)

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

};

#define DMA1 (*(volatile struct DMA1_tag *) 0x40020000)

struct DMA2_tag
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

};

#define DMA2 (*(volatile struct DMA2_tag *) 0x40020400)

struct SDIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWRCTRL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) POWER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLKDIV:8;
      uint64_t CLKEN:1;
      uint64_t PWRSAV:1;
      uint64_t BYPASS:1;
      uint64_t WIDBUS:2;
      uint64_t NEGEDGE:1;
      uint64_t HWFC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLKCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CMDINDEX:6;
      uint64_t WAITRESP:2;
      uint64_t WAITINT:1;
      uint64_t WAITPEND:1;
      uint64_t CPSMEN:1;
      uint64_t SDIOSuspend:1;
      uint64_t ENCMDcompl:1;
      uint64_t nIEN:1;
      uint64_t CE_ATACMD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESPCMD:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPCMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS1:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESPI1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS2:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS3:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CARDSTATUS4:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESP4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATATIME:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DTIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATALENGTH:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DLEN;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DTEN:1;
      uint64_t DTDIR:1;
      uint64_t DTMODE:1;
      uint64_t DMAEN:1;
      uint64_t DBLOCKSIZE:4;
      uint64_t PWSTART:1;
      uint64_t PWSTOP:1;
      uint64_t RWMOD:1;
      uint64_t SDIOEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATACOUNT:25;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCOUNT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCFAIL:1;
      uint64_t DCRCFAIL:1;
      uint64_t CTIMEOUT:1;
      uint64_t DTIMEOUT:1;
      uint64_t TXUNDERR:1;
      uint64_t RXOVERR:1;
      uint64_t CMDREND:1;
      uint64_t CMDSENT:1;
      uint64_t DATAEND:1;
      uint64_t STBITERR:1;
      uint64_t DBCKEND:1;
      uint64_t CMDACT:1;
      uint64_t TXACT:1;
      uint64_t RXACT:1;
      uint64_t TXFIFOHE:1;
      uint64_t RXFIFOHF:1;
      uint64_t TXFIFOF:1;
      uint64_t RXFIFOF:1;
      uint64_t TXFIFOE:1;
      uint64_t RXFIFOE:1;
      uint64_t TXDAVL:1;
      uint64_t RXDAVL:1;
      uint64_t SDIOIT:1;
      uint64_t CEATAEND:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STA;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCFAILC:1;
      uint64_t DCRCFAILC:1;
      uint64_t CTIMEOUTC:1;
      uint64_t DTIMEOUTC:1;
      uint64_t TXUNDERRC:1;
      uint64_t RXOVERRC:1;
      uint64_t CMDRENDC:1;
      uint64_t CMDSENTC:1;
      uint64_t DATAENDC:1;
      uint64_t STBITERRC:1;
      uint64_t DBCKENDC:1;
      uint64_t reservedSpace0:11;
      uint64_t SDIOITC:1;
      uint64_t CEATAENDC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ICR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCRCFAILIE:1;
      uint64_t DCRCFAILIE:1;
      uint64_t CTIMEOUTIE:1;
      uint64_t DTIMEOUTIE:1;
      uint64_t TXUNDERRIE:1;
      uint64_t RXOVERRIE:1;
      uint64_t CMDRENDIE:1;
      uint64_t CMDSENTIE:1;
      uint64_t DATAENDIE:1;
      uint64_t STBITERRIE:1;
      uint64_t DBACKENDIE:1;
      uint64_t CMDACTIE:1;
      uint64_t TXACTIE:1;
      uint64_t RXACTIE:1;
      uint64_t TXFIFOHEIE:1;
      uint64_t RXFIFOHFIE:1;
      uint64_t TXFIFOFIE:1;
      uint64_t RXFIFOFIE:1;
      uint64_t TXFIFOEIE:1;
      uint64_t RXFIFOEIE:1;
      uint64_t TXDAVLIE:1;
      uint64_t RXDAVLIE:1;
      uint64_t SDIOITIE:1;
      uint64_t CEATENDIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MASK;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIF0COUNT:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFOCNT;

  uint8_t res1[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FIFOData:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FIFO;

};

#define SDIO (*(volatile struct SDIO_tag *) 0x40018000)

struct RTC_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECIE:1;
      uint64_t ALRIE:1;
      uint64_t OWIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SECF:1;
      uint64_t ALRF:1;
      uint64_t OWF:1;
      uint64_t RSF:1;
      uint64_t CNF:1;
      uint64_t RTOFF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRLH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRLH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRLL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRLL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DIVL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIVL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CNTL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CNTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRH:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ALRL:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ALRL;

};

#define RTC_2 (*(volatile struct RTC_2_tag *) 0x40002800)

struct BKP_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t D1:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D2:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D3:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D4:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D5:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D6:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D7:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D8:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D9:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D10:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAL:7;
      uint64_t CCO:1;
      uint64_t ASOE:1;
      uint64_t ASOS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RTCCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TPE:1;
      uint64_t TPAL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CTE:1;
      uint64_t CTI:1;
      uint64_t TPIE:1;
      uint64_t reservedSpace0:5;
      uint64_t TEF:1;
      uint64_t TIF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CSR;

  uint8_t res0[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR11:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR12:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR13:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D14:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D15:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D16:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D17:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D18:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D19:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D20:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D21:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D22:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D23:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D24:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D25:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D26:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D27:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D28:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D29:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D30:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D31:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D32:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D33:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D34:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D35:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D36:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D37:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D38:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D39:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D40:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D41:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t D42:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR42;

};

#define BKP (*(volatile struct BKP_tag *) 0x40006c04)

struct IWDG_2_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

};

#define IWDG_2 (*(volatile struct IWDG_2_tag *) 0x40003000)

struct TIM7_tag
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

#define TIM7 (*(volatile struct TIM7_tag *) 0x40001400)

struct I2C1_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBTYPE:1;
      uint64_t ENARP:1;
      uint64_t ENPEC:1;
      uint64_t ENGC:1;
      uint64_t NOSTRETCH:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t POS:1;
      uint64_t PEC:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:6;
      uint64_t reservedSpace0:2;
      uint64_t ITERREN:1;
      uint64_t ITEVTEN:1;
      uint64_t ITBUFEN:1;
      uint64_t DMAEN:1;
      uint64_t LAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD0:1;
      uint64_t ADD7:7;
      uint64_t ADD10:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDUAL:1;
      uint64_t ADD2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SB:1;
      uint64_t ADDR:1;
      uint64_t BTF:1;
      uint64_t ADD10:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RxNE:1;
      uint64_t TxE:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t AF:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:1;
      uint64_t SMBALERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace0:1;
      uint64_t GENCALL:1;
      uint64_t SMBDEFAULT:1;
      uint64_t SMBHOST:1;
      uint64_t DUALF:1;
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCR:12;
      uint64_t reservedSpace0:2;
      uint64_t DUTY:1;
      uint64_t F_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRISE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRISE;

};

#define I2C1_2 (*(volatile struct I2C1_2_tag *) 0x40005400)

struct I2C2_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t SMBUS:1;
      uint64_t reservedSpace0:1;
      uint64_t SMBTYPE:1;
      uint64_t ENARP:1;
      uint64_t ENPEC:1;
      uint64_t ENGC:1;
      uint64_t NOSTRETCH:1;
      uint64_t START:1;
      uint64_t STOP:1;
      uint64_t ACK:1;
      uint64_t POS:1;
      uint64_t PEC:1;
      uint64_t ALERT:1;
      uint64_t reservedSpace1:1;
      uint64_t SWRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:6;
      uint64_t reservedSpace0:2;
      uint64_t ITERREN:1;
      uint64_t ITEVTEN:1;
      uint64_t ITBUFEN:1;
      uint64_t DMAEN:1;
      uint64_t LAST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD0:1;
      uint64_t ADD7:7;
      uint64_t ADD10:2;
      uint64_t reservedSpace0:5;
      uint64_t ADDMODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ENDUAL:1;
      uint64_t ADD2:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OAR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SB:1;
      uint64_t ADDR:1;
      uint64_t BTF:1;
      uint64_t ADD10:1;
      uint64_t STOPF:1;
      uint64_t reservedSpace0:1;
      uint64_t RxNE:1;
      uint64_t TxE:1;
      uint64_t BERR:1;
      uint64_t ARLO:1;
      uint64_t AF:1;
      uint64_t OVR:1;
      uint64_t PECERR:1;
      uint64_t reservedSpace1:1;
      uint64_t TIMEOUT:1;
      uint64_t SMBALERT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MSL:1;
      uint64_t BUSY:1;
      uint64_t TRA:1;
      uint64_t reservedSpace0:1;
      uint64_t GENCALL:1;
      uint64_t SMBDEFAULT:1;
      uint64_t SMBHOST:1;
      uint64_t DUALF:1;
      uint64_t PEC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CCR:12;
      uint64_t reservedSpace0:2;
      uint64_t DUTY:1;
      uint64_t F_S:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRISE:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TRISE;

};

#define I2C2_2 (*(volatile struct I2C2_2_tag *) 0x40005800)

struct SPI1_2_tag
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
      uint64_t reservedSpace0:2;
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

#define SPI1_2 (*(volatile struct SPI1_2_tag *) 0x40013000)

struct SPI2_2_tag
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
      uint64_t reservedSpace0:2;
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

#define SPI2_2 (*(volatile struct SPI2_2_tag *) 0x40003800)

struct SPI3_tag
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
      uint64_t reservedSpace0:2;
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

#define SPI3 (*(volatile struct SPI3_tag *) 0x40003c00)

struct USART1_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NE:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

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
      uint64_t SBK:1;
      uint64_t RWU:1;
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
      uint64_t M:1;
      uint64_t UE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART1_2 (*(volatile struct USART1_2_tag *) 0x40013800)

struct USART2_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NE:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

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
      uint64_t SBK:1;
      uint64_t RWU:1;
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
      uint64_t M:1;
      uint64_t UE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART2_2 (*(volatile struct USART2_2_tag *) 0x40004400)

struct USART3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NE:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
      uint64_t CTS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

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
      uint64_t SBK:1;
      uint64_t RWU:1;
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
      uint64_t M:1;
      uint64_t UE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:1;
      uint64_t LBCL:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t CLKEN:1;
      uint64_t STOP:2;
      uint64_t LINEN:1;
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PSC:8;
      uint64_t GT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GTPR;

};

#define USART3 (*(volatile struct USART3_tag *) 0x40004800)

struct ADC1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD:1;
      uint64_t EOC:1;
      uint64_t JEOC:1;
      uint64_t JSTRT:1;
      uint64_t STRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDCH:5;
      uint64_t EOCIE:1;
      uint64_t AWDIE:1;
      uint64_t JEOCIE:1;
      uint64_t SCAN:1;
      uint64_t AWDSGL:1;
      uint64_t JAUTO:1;
      uint64_t DISCEN:1;
      uint64_t JDISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t DUALMOD:4;
      uint64_t reservedSpace0:2;
      uint64_t JAWDEN:1;
      uint64_t AWDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADON:1;
      uint64_t CONT:1;
      uint64_t CAL:1;
      uint64_t RSTCAL:1;
      uint64_t reservedSpace0:4;
      uint64_t DMA:1;
      uint64_t reservedSpace1:2;
      uint64_t ALIGN:1;
      uint64_t JEXTSEL:3;
      uint64_t JEXTTRIG:1;
      uint64_t reservedSpace2:1;
      uint64_t EXTSEL:3;
      uint64_t EXTTRIG:1;
      uint64_t JSWSTART:1;
      uint64_t SWSTART:1;
      uint64_t TSVREFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP10:3;
      uint64_t SMP11:3;
      uint64_t SMP12:3;
      uint64_t SMP13:3;
      uint64_t SMP14:3;
      uint64_t SMP15:3;
      uint64_t SMP16:3;
      uint64_t SMP17:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET4:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ13:5;
      uint64_t SQ14:5;
      uint64_t SQ15:5;
      uint64_t SQ16:5;
      uint64_t L:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ7:5;
      uint64_t SQ8:5;
      uint64_t SQ9:5;
      uint64_t SQ10:5;
      uint64_t SQ11:5;
      uint64_t SQ12:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ1:5;
      uint64_t SQ2:5;
      uint64_t SQ3:5;
      uint64_t SQ4:5;
      uint64_t SQ5:5;
      uint64_t SQ6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JSQ1:5;
      uint64_t JSQ2:5;
      uint64_t JSQ3:5;
      uint64_t JSQ4:5;
      uint64_t JL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
      uint64_t ADC2DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define ADC1 (*(volatile struct ADC1_tag *) 0x40012400)

struct ADC2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD:1;
      uint64_t EOC:1;
      uint64_t JEOC:1;
      uint64_t JSTRT:1;
      uint64_t STRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDCH:5;
      uint64_t EOCIE:1;
      uint64_t AWDIE:1;
      uint64_t JEOCIE:1;
      uint64_t SCAN:1;
      uint64_t AWDSGL:1;
      uint64_t JAUTO:1;
      uint64_t DISCEN:1;
      uint64_t JDISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t JAWDEN:1;
      uint64_t AWDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADON:1;
      uint64_t CONT:1;
      uint64_t CAL:1;
      uint64_t RSTCAL:1;
      uint64_t reservedSpace0:4;
      uint64_t DMA:1;
      uint64_t reservedSpace1:2;
      uint64_t ALIGN:1;
      uint64_t JEXTSEL:3;
      uint64_t JEXTTRIG:1;
      uint64_t reservedSpace2:1;
      uint64_t EXTSEL:3;
      uint64_t EXTTRIG:1;
      uint64_t JSWSTART:1;
      uint64_t SWSTART:1;
      uint64_t TSVREFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP10:3;
      uint64_t SMP11:3;
      uint64_t SMP12:3;
      uint64_t SMP13:3;
      uint64_t SMP14:3;
      uint64_t SMP15:3;
      uint64_t SMP16:3;
      uint64_t SMP17:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET4:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ13:5;
      uint64_t SQ14:5;
      uint64_t SQ15:5;
      uint64_t SQ16:5;
      uint64_t L:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ7:5;
      uint64_t SQ8:5;
      uint64_t SQ9:5;
      uint64_t SQ10:5;
      uint64_t SQ11:5;
      uint64_t SQ12:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ1:5;
      uint64_t SQ2:5;
      uint64_t SQ3:5;
      uint64_t SQ4:5;
      uint64_t SQ5:5;
      uint64_t SQ6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JSQ1:5;
      uint64_t JSQ2:5;
      uint64_t JSQ3:5;
      uint64_t JSQ4:5;
      uint64_t JL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define ADC2 (*(volatile struct ADC2_tag *) 0x40012800)

struct ADC3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWD:1;
      uint64_t EOC:1;
      uint64_t JEOC:1;
      uint64_t JSTRT:1;
      uint64_t STRT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AWDCH:5;
      uint64_t EOCIE:1;
      uint64_t AWDIE:1;
      uint64_t JEOCIE:1;
      uint64_t SCAN:1;
      uint64_t AWDSGL:1;
      uint64_t JAUTO:1;
      uint64_t DISCEN:1;
      uint64_t JDISCEN:1;
      uint64_t DISCNUM:3;
      uint64_t reservedSpace0:6;
      uint64_t JAWDEN:1;
      uint64_t AWDEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADON:1;
      uint64_t CONT:1;
      uint64_t CAL:1;
      uint64_t RSTCAL:1;
      uint64_t reservedSpace0:4;
      uint64_t DMA:1;
      uint64_t reservedSpace1:2;
      uint64_t ALIGN:1;
      uint64_t JEXTSEL:3;
      uint64_t JEXTTRIG:1;
      uint64_t reservedSpace2:1;
      uint64_t EXTSEL:3;
      uint64_t EXTTRIG:1;
      uint64_t JSWSTART:1;
      uint64_t SWSTART:1;
      uint64_t TSVREFE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP10:3;
      uint64_t SMP11:3;
      uint64_t SMP12:3;
      uint64_t SMP13:3;
      uint64_t SMP14:3;
      uint64_t SMP15:3;
      uint64_t SMP16:3;
      uint64_t SMP17:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP0:3;
      uint64_t SMP1:3;
      uint64_t SMP2:3;
      uint64_t SMP3:3;
      uint64_t SMP4:3;
      uint64_t SMP5:3;
      uint64_t SMP6:3;
      uint64_t SMP7:3;
      uint64_t SMP8:3;
      uint64_t SMP9:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMPR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET1:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET2:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET3:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JOFFSET4:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JOFR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ13:5;
      uint64_t SQ14:5;
      uint64_t SQ15:5;
      uint64_t SQ16:5;
      uint64_t L:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ7:5;
      uint64_t SQ8:5;
      uint64_t SQ9:5;
      uint64_t SQ10:5;
      uint64_t SQ11:5;
      uint64_t SQ12:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SQ1:5;
      uint64_t SQ2:5;
      uint64_t SQ3:5;
      uint64_t SQ4:5;
      uint64_t SQ5:5;
      uint64_t SQ6:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SQR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JSQ1:5;
      uint64_t JSQ2:5;
      uint64_t JSQ3:5;
      uint64_t JSQ4:5;
      uint64_t JL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JSQR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t JDATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) JDR4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

};

#define ADC3 (*(volatile struct ADC3_tag *) 0x40013c00)

struct CAN_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t INRQ:1;
      uint64_t SLEEP:1;
      uint64_t TXFP:1;
      uint64_t RFLM:1;
      uint64_t NART:1;
      uint64_t AWUM:1;
      uint64_t ABOM:1;
      uint64_t TTCM:1;
      uint64_t reservedSpace0:7;
      uint64_t RESET:1;
      uint64_t DBF:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_MCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INAK:1;
      uint64_t SLAK:1;
      uint64_t ERRI:1;
      uint64_t WKUI:1;
      uint64_t SLAKI:1;
      uint64_t reservedSpace0:3;
      uint64_t TXM:1;
      uint64_t RXM:1;
      uint64_t SAMP:1;
      uint64_t RX:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_MSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RQCP0:1;
      uint64_t TXOK0:1;
      uint64_t ALST0:1;
      uint64_t TERR0:1;
      uint64_t reservedSpace0:3;
      uint64_t ABRQ0:1;
      uint64_t RQCP1:1;
      uint64_t TXOK1:1;
      uint64_t ALST1:1;
      uint64_t TERR1:1;
      uint64_t reservedSpace1:3;
      uint64_t ABRQ1:1;
      uint64_t RQCP2:1;
      uint64_t TXOK2:1;
      uint64_t ALST2:1;
      uint64_t TERR2:1;
      uint64_t reservedSpace2:3;
      uint64_t ABRQ2:1;
      uint64_t CODE:2;
      uint64_t TME0:1;
      uint64_t TME1:1;
      uint64_t TME2:1;
      uint64_t LOW0:1;
      uint64_t LOW1:1;
      uint64_t LOW2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TSR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMP0:2;
      uint64_t reservedSpace0:1;
      uint64_t FULL0:1;
      uint64_t FOVR0:1;
      uint64_t RFOM0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_RF0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FMP1:2;
      uint64_t reservedSpace0:1;
      uint64_t FULL1:1;
      uint64_t FOVR1:1;
      uint64_t RFOM1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_RF1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TMEIE:1;
      uint64_t FMPIE0:1;
      uint64_t FFIE0:1;
      uint64_t FOVIE0:1;
      uint64_t FMPIE1:1;
      uint64_t FFIE1:1;
      uint64_t FOVIE1:1;
      uint64_t reservedSpace0:1;
      uint64_t EWGIE:1;
      uint64_t EPVIE:1;
      uint64_t BOFIE:1;
      uint64_t LECIE:1;
      uint64_t reservedSpace1:3;
      uint64_t ERRIE:1;
      uint64_t WKUIE:1;
      uint64_t SLKIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_IER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EWGF:1;
      uint64_t EPVF:1;
      uint64_t BOFF:1;
      uint64_t reservedSpace0:1;
      uint64_t LEC:3;
      uint64_t reservedSpace1:9;
      uint64_t TEC:8;
      uint64_t REC:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_ESR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BRP:10;
      uint64_t reservedSpace0:6;
      uint64_t TS1:4;
      uint64_t TS2:3;
      uint64_t reservedSpace1:1;
      uint64_t SJW:2;
      uint64_t reservedSpace2:4;
      uint64_t LBKM:1;
      uint64_t SILM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_BTR;

  uint8_t res0[352];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TDT0R;

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
  } __attribute__((aligned(4))) CAN_TDL0R;

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
  } __attribute__((aligned(4))) CAN_TDH0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TDT1R;

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
  } __attribute__((aligned(4))) CAN_TDL1R;

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
  } __attribute__((aligned(4))) CAN_TDH1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TXRQ:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TI2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t TGT:1;
      uint64_t reservedSpace1:7;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_TDT2R;

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
  } __attribute__((aligned(4))) CAN_TDL2R;

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
  } __attribute__((aligned(4))) CAN_TDH2R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_RI0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t FMI:8;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_RDT0R;

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
  } __attribute__((aligned(4))) CAN_RDL0R;

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
  } __attribute__((aligned(4))) CAN_RDH0R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t RTR:1;
      uint64_t IDE:1;
      uint64_t EXID:18;
      uint64_t STID:11;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_RI1R;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DLC:4;
      uint64_t reservedSpace0:4;
      uint64_t FMI:8;
      uint64_t TIME:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_RDT1R;

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
  } __attribute__((aligned(4))) CAN_RDL1R;

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
  } __attribute__((aligned(4))) CAN_RDH1R;

  uint8_t res1[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FINIT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_FMR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FBM0:1;
      uint64_t FBM1:1;
      uint64_t FBM2:1;
      uint64_t FBM3:1;
      uint64_t FBM4:1;
      uint64_t FBM5:1;
      uint64_t FBM6:1;
      uint64_t FBM7:1;
      uint64_t FBM8:1;
      uint64_t FBM9:1;
      uint64_t FBM10:1;
      uint64_t FBM11:1;
      uint64_t FBM12:1;
      uint64_t FBM13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_FM1R;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSC0:1;
      uint64_t FSC1:1;
      uint64_t FSC2:1;
      uint64_t FSC3:1;
      uint64_t FSC4:1;
      uint64_t FSC5:1;
      uint64_t FSC6:1;
      uint64_t FSC7:1;
      uint64_t FSC8:1;
      uint64_t FSC9:1;
      uint64_t FSC10:1;
      uint64_t FSC11:1;
      uint64_t FSC12:1;
      uint64_t FSC13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_FS1R;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FFA0:1;
      uint64_t FFA1:1;
      uint64_t FFA2:1;
      uint64_t FFA3:1;
      uint64_t FFA4:1;
      uint64_t FFA5:1;
      uint64_t FFA6:1;
      uint64_t FFA7:1;
      uint64_t FFA8:1;
      uint64_t FFA9:1;
      uint64_t FFA10:1;
      uint64_t FFA11:1;
      uint64_t FFA12:1;
      uint64_t FFA13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_FFA1R;

  uint8_t res4[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FACT0:1;
      uint64_t FACT1:1;
      uint64_t FACT2:1;
      uint64_t FACT3:1;
      uint64_t FACT4:1;
      uint64_t FACT5:1;
      uint64_t FACT6:1;
      uint64_t FACT7:1;
      uint64_t FACT8:1;
      uint64_t FACT9:1;
      uint64_t FACT10:1;
      uint64_t FACT11:1;
      uint64_t FACT12:1;
      uint64_t FACT13:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAN_FA1R;

  uint8_t res5[32];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F0R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F1R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F2R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F3R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F4R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F5R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F6R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F7R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F9R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F10R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F11R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13R1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FB0:1;
      uint64_t FB1:1;
      uint64_t FB2:1;
      uint64_t FB3:1;
      uint64_t FB4:1;
      uint64_t FB5:1;
      uint64_t FB6:1;
      uint64_t FB7:1;
      uint64_t FB8:1;
      uint64_t FB9:1;
      uint64_t FB10:1;
      uint64_t FB11:1;
      uint64_t FB12:1;
      uint64_t FB13:1;
      uint64_t FB14:1;
      uint64_t FB15:1;
      uint64_t FB16:1;
      uint64_t FB17:1;
      uint64_t FB18:1;
      uint64_t FB19:1;
      uint64_t FB20:1;
      uint64_t FB21:1;
      uint64_t FB22:1;
      uint64_t FB23:1;
      uint64_t FB24:1;
      uint64_t FB25:1;
      uint64_t FB26:1;
      uint64_t FB27:1;
      uint64_t FB28:1;
      uint64_t FB29:1;
      uint64_t FB30:1;
      uint64_t FB31:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) F13R2;

};

#define CAN (*(volatile struct CAN_tag *) 0x40006400)

struct DAC_2_tag
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
      uint64_t reservedSpace0:3;
      uint64_t EN2:1;
      uint64_t BOFF2:1;
      uint64_t TEN2:1;
      uint64_t TSEL2:3;
      uint64_t WAVE2:2;
      uint64_t MAMP2:4;
      uint64_t DMAEN2:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWTRIG1:1;
      uint64_t SWTRIG2:1;
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

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12L2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8R2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace0:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:4;
      uint64_t DACC1DHR:12;
      uint64_t reservedSpace1:4;
      uint64_t DACC2DHR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR12LD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DHR:8;
      uint64_t DACC2DHR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DHR8RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC1DOR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACC2DOR:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DOR2;

};

#define DAC_2 (*(volatile struct DAC_2_tag *) 0x40007400)

struct DBG_tag
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
      uint64_t reservedSpace0:2;
      uint64_t TRACE_IOEN:1;
      uint64_t TRACE_MODE:2;
      uint64_t DBG_IWDG_STOP:1;
      uint64_t DBG_WWDG_STOP:1;
      uint64_t DBG_TIM1_STOP:1;
      uint64_t DBG_TIM2_STOP:1;
      uint64_t DBG_TIM3_STOP:1;
      uint64_t DBG_TIM4_STOP:1;
      uint64_t DBG_CAN1_STOP:1;
      uint64_t DBG_I2C1_SMBUS_TIMEOUT:1;
      uint64_t DBG_I2C2_SMBUS_TIMEOUT:1;
      uint64_t DBG_TIM8_STOP:1;
      uint64_t DBG_TIM5_STOP:1;
      uint64_t DBG_TIM6_STOP:1;
      uint64_t DBG_TIM7_STOP:1;
      uint64_t DBG_CAN2_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define DBG (*(volatile struct DBG_tag *) 0xe0042000)

struct UART4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NE:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

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
      uint64_t SBK:1;
      uint64_t RWU:1;
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
      uint64_t M:1;
      uint64_t UE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:5;
      uint64_t STOP:2;
      uint64_t LINEN:1;
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
      uint64_t reservedSpace0:2;
      uint64_t DMAR:1;
      uint64_t DMAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

};

#define UART4 (*(volatile struct UART4_tag *) 0x40004c00)

struct UART5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PE:1;
      uint64_t FE:1;
      uint64_t NE:1;
      uint64_t ORE:1;
      uint64_t IDLE:1;
      uint64_t RXNE:1;
      uint64_t TC:1;
      uint64_t TXE:1;
      uint64_t LBD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

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
      uint64_t SBK:1;
      uint64_t RWU:1;
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
      uint64_t M:1;
      uint64_t UE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADD:4;
      uint64_t reservedSpace0:1;
      uint64_t LBDL:1;
      uint64_t LBDIE:1;
      uint64_t reservedSpace1:5;
      uint64_t STOP:2;
      uint64_t LINEN:1;
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
      uint64_t reservedSpace0:3;
      uint64_t DMAT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR3;

};

#define UART5 (*(volatile struct UART5_tag *) 0x40005000)

struct CRC_2_tag
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
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

};

#define CRC_2 (*(volatile struct CRC_2_tag *) 0x40023000)

struct FLASH_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LATENCY:3;
      uint64_t HLFCYA:1;
      uint64_t PRFTBE:1;
      uint64_t PRFTBS:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) KEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTKEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OPTKEYR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BSY:1;
      uint64_t reservedSpace0:1;
      uint64_t PGERR:1;
      uint64_t reservedSpace1:1;
      uint64_t WRPRTERR:1;
      uint64_t EOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PG:1;
      uint64_t PER:1;
      uint64_t MER:1;
      uint64_t reservedSpace0:1;
      uint64_t OPTPG:1;
      uint64_t OPTER:1;
      uint64_t STRT:1;
      uint64_t LOCK:1;
      uint64_t reservedSpace1:1;
      uint64_t OPTWRE:1;
      uint64_t ERRIE:1;
      uint64_t reservedSpace2:1;
      uint64_t EOPIE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AR;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OPTERR:1;
      uint64_t RDPRT:1;
      uint64_t WDG_SW:1;
      uint64_t nRST_STOP:1;
      uint64_t nRST_STDBY:1;
      uint64_t reservedSpace0:5;
      uint64_t Data0:8;
      uint64_t Data1:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OBR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WRP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WRPR;

};

#define FLASH (*(volatile struct FLASH_tag *) 0x40022000)

struct NVIC_2_tag
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

#define NVIC_2 (*(volatile struct NVIC_2_tag *) 0xe000e004)

struct USB_tag
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t EP_TYPE:2;
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
      uint64_t reservedSpace0:3;
      uint64_t ESOFM:1;
      uint64_t SOFM:1;
      uint64_t RESETM:1;
      uint64_t SUSPM:1;
      uint64_t WKUPM:1;
      uint64_t ERRM:1;
      uint64_t PMAOVRM:1;
      uint64_t CTRM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) USB_CNTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EP_ID:4;
      uint64_t DIR:1;
      uint64_t reservedSpace0:3;
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

};

#define USB (*(volatile struct USB_tag *) 0x40005c00)

