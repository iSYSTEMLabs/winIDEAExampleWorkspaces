#include <stdint.h>

struct PERI_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
      uint64_t PA_SEL_DIV:6;
      uint64_t PA_SEL_TYPE:2;
      uint64_t reservedSpace0:14;
      uint64_t DISABLE:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_CMD;

  uint8_t res0[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL_DIV:6;
      uint64_t SEL_TYPE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PCLK_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT8_DIV:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_8_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:7;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT16_DIV:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_16_5_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EN:1;
      uint64_t reservedSpace0:2;
      uint64_t FRAC5_DIV:5;
      uint64_t INT24_DIV:24;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DIV_24_5_CTL_62;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TR_SEL:7;
      uint64_t reservedSpace0:1;
      uint64_t TR_GROUP:4;
      uint64_t reservedSpace1:4;
      uint64_t TR_COUNT:8;
      uint64_t reservedSpace2:6;
      uint64_t TR_OUT:1;
      uint64_t TR_ACT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTL;

};

#define PERI (*(volatile struct PERI_tag *) 0x40010000)

struct PERI_TR_GROUP_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_127;

};

#define PERI_TR_GROUP_0 (*(volatile struct PERI_TR_GROUP_0_tag *) 0x40012000)

struct PERI_TR_GROUP_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_127;

};

#define PERI_TR_GROUP_1 (*(volatile struct PERI_TR_GROUP_1_tag *) 0x40012200)

struct PERI_TR_GROUP_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_127;

};

#define PERI_TR_GROUP_2 (*(volatile struct PERI_TR_GROUP_2_tag *) 0x40012400)

struct PERI_TR_GROUP_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_31;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_32;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_33;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_34;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_35;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_36;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_37;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_38;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_39;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_40;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_41;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_42;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_43;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_44;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_45;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_46;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_47;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_48;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_49;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_50;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_51;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_52;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_53;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_54;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_55;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_56;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_57;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_58;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_59;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_60;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_61;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_62;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_63;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_64;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_65;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_66;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_67;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_68;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_69;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_70;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_71;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_72;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_73;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_74;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_75;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_76;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_77;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_78;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_79;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_80;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_81;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_82;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_83;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_84;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_85;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_86;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_87;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_88;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_89;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_90;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_91;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_92;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_93;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_94;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_95;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_96;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_97;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_98;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_99;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_100;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_101;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_102;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_103;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_104;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_105;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_106;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_107;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_108;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_109;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_110;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_111;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_112;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_113;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_114;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_115;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_116;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_117;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_118;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_119;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_120;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_121;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_122;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_123;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_124;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_125;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_126;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEL:7;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_OUT_CTL_127;

};

#define PERI_TR_GROUP_3 (*(volatile struct PERI_TR_GROUP_3_tag *) 0x40012600)

struct HSIOM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CLOCK_SEL:1;
      uint64_t reservedSpace0:30;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUMP_CTL;

  uint8_t res0[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SWITCH_AA_SL:1;
      uint64_t SWITCH_AA_SR:1;
      uint64_t SWITCH_AA_S0:1;
      uint64_t reservedSpace0:1;
      uint64_t SWITCH_BB_SL:1;
      uint64_t SWITCH_BB_SR:1;
      uint64_t SWITCH_BB_S0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AMUX_SPLIT_CTL_7;

};

#define HSIOM (*(volatile struct HSIOM_tag *) 0x40022000)

struct HSIOM_PRT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0_SEL:4;
      uint64_t IO1_SEL:4;
      uint64_t IO2_SEL:4;
      uint64_t IO3_SEL:4;
      uint64_t IO4_SEL:4;
      uint64_t IO5_SEL:4;
      uint64_t IO6_SEL:4;
      uint64_t IO7_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL;

};

#define HSIOM_PRT_0 (*(volatile struct HSIOM_PRT_0_tag *) 0x40020000)

struct HSIOM_PRT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0_SEL:4;
      uint64_t IO1_SEL:4;
      uint64_t IO2_SEL:4;
      uint64_t IO3_SEL:4;
      uint64_t IO4_SEL:4;
      uint64_t IO5_SEL:4;
      uint64_t IO6_SEL:4;
      uint64_t IO7_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL;

};

#define HSIOM_PRT_1 (*(volatile struct HSIOM_PRT_1_tag *) 0x40020100)

struct HSIOM_PRT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t IO0_SEL:4;
      uint64_t IO1_SEL:4;
      uint64_t IO2_SEL:4;
      uint64_t IO3_SEL:4;
      uint64_t IO4_SEL:4;
      uint64_t IO5_SEL:4;
      uint64_t IO6_SEL:4;
      uint64_t IO7_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PORT_SEL;

};

#define HSIOM_PRT_2 (*(volatile struct HSIOM_PRT_2_tag *) 0x40020200)

struct SRSSLT_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER_MODE:4;
      uint64_t DEBUG_SESSION:1;
      uint64_t LPM_READY:1;
      uint64_t reservedSpace0:10;
      uint64_t OVER_TEMP_EN:1;
      uint64_t OVER_TEMP_THRESH:1;
      uint64_t SPARE:2;
      uint64_t reservedSpace1:3;
      uint64_t EXT_VCCD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_CONTROL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_HOLDOFF:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_KEY_DELAY;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DDFT0_SEL:4;
      uint64_t DDFT1_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_DDFT_SELECT;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:2;
      uint64_t SWD_CONNECTED:1;
      uint64_t reservedSpace1:25;
      uint64_t BLOCK_ALT_XRES:1;
      uint64_t reservedSpace2:1;
      uint64_t TEST_KEY_DFT_EN:1;
      uint64_t TEST_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TST_MODE;

  uint8_t res2[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HFCLK_SEL:2;
      uint64_t HFCLK_DIV:2;
      uint64_t PUMP_SEL:2;
      uint64_t SYSCLK_DIV:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_ILO_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DFT_SEL0:4;
      uint64_t DFT_DIV0:2;
      uint64_t DFT_EDGE0:1;
      uint64_t reservedSpace0:1;
      uint64_t DFT_SEL1:4;
      uint64_t DFT_DIV1:2;
      uint64_t DFT_EDGE1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_DFT_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t KEY:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_DISABLE_KEY;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t MATCH:16;
      uint64_t IGNORE_BITS:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WDT_MATCH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_MATCH:1;
      uint64_t TEMP_HIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSS_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:1;
      uint64_t TEMP_HIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSS_INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WDT_MATCH:1;
      uint64_t TEMP_HIGH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SRSS_INTR_MASK;

  uint8_t res3[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESET_WDT:1;
      uint64_t reservedSpace0:2;
      uint64_t RESET_PROT_FAULT:1;
      uint64_t RESET_SOFT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RES_CAUSE;

  uint8_t res4[3752];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_VTRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_ITRIM:6;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_BG_TRIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FREQ:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_SELECT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OFFSET:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FSOFFSET:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DPSLP_REF_TRIM:4;
      uint64_t SPARE_TRIM:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PWR_PWRSYS_TRIM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STEPSIZE:5;
      uint64_t TCTRIM:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CLK_IMO_TRIM3;

};

#define SRSSLT (*(volatile struct SRSSLT_tag *) 0x40030000)

struct GPIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PORT_INT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

  uint8_t res0[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GPIOV1P2_DET;

};

#define GPIO (*(volatile struct GPIO_tag *) 0x40041000)

struct GPIO_PRT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
      uint64_t FLT_DATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM0:3;
      uint64_t DM1:3;
      uint64_t DM2:3;
      uint64_t DM3:3;
      uint64_t DM4:3;
      uint64_t DM5:3;
      uint64_t DM6:3;
      uint64_t DM7:3;
      uint64_t PORT_VTRIP_SEL:1;
      uint64_t PORT_SLOW:1;
      uint64_t reservedSpace0:1;
      uint64_t PORT_HYST_TRIM:1;
      uint64_t PORT_SLEW_CTL:2;
      uint64_t PORT_IB_MODE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0_SEL:2;
      uint64_t EDGE1_SEL:2;
      uint64_t EDGE2_SEL:2;
      uint64_t EDGE3_SEL:2;
      uint64_t EDGE4_SEL:2;
      uint64_t EDGE5_SEL:2;
      uint64_t EDGE6_SEL:2;
      uint64_t EDGE7_SEL:2;
      uint64_t FLT_EDGE_SEL:2;
      uint64_t FLT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
      uint64_t FLT_DATA:1;
      uint64_t reservedSpace0:7;
      uint64_t PS_DATA0:1;
      uint64_t PS_DATA1:1;
      uint64_t PS_DATA2:1;
      uint64_t PS_DATA3:1;
      uint64_t PS_DATA4:1;
      uint64_t PS_DATA5:1;
      uint64_t PS_DATA6:1;
      uint64_t PS_DATA7:1;
      uint64_t PS_FLT_DATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIR_VREG01_EN:1;
      uint64_t PAIR_IBUF01_SEL:1;
      uint64_t PAIR_VTRIP01_SEL:1;
      uint64_t PAIR_VREF01_SEL:2;
      uint64_t PAIR_VOH01_SEL:3;
      uint64_t PAIR_VREG23_EN:1;
      uint64_t PAIR_IBUF23_SEL:1;
      uint64_t PAIR_VTRIP23_SEL:1;
      uint64_t PAIR_VREF23_SEL:2;
      uint64_t PAIR_VOH23_SEL:3;
      uint64_t PAIR_VREG45_EN:1;
      uint64_t PAIR_IBUF45_SEL:1;
      uint64_t PAIR_VTRIP45_SEL:1;
      uint64_t PAIR_VREF45_SEL:2;
      uint64_t PAIR_VOH45_SEL:3;
      uint64_t PAIR_VREG67_EN:1;
      uint64_t PAIR_IBUF67_SEL:1;
      uint64_t PAIR_VTRIP67_SEL:1;
      uint64_t PAIR_VREF67_SEL:2;
      uint64_t PAIR_VOH67_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS0:1;
      uint64_t INP_DIS1:1;
      uint64_t INP_DIS2:1;
      uint64_t INP_DIS3:1;
      uint64_t INP_DIS4:1;
      uint64_t INP_DIS5:1;
      uint64_t INP_DIS6:1;
      uint64_t INP_DIS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_INV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS0:2;
      uint64_t DS1:2;
      uint64_t DS2:2;
      uint64_t DS3:2;
      uint64_t DS4:2;
      uint64_t DS5:2;
      uint64_t DS6:2;
      uint64_t DS7:2;
      uint64_t PORT_V1P2_VTRIP_SEL:1;
      uint64_t PORT_V1P2_IB_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM0:2;
      uint64_t TRIM1:2;
      uint64_t TRIM2:2;
      uint64_t TRIM3:2;
      uint64_t TRIM4:2;
      uint64_t TRIM5:2;
      uint64_t TRIM6:2;
      uint64_t TRIM7:2;
      uint64_t FILT0_EN:1;
      uint64_t FILT1_EN:1;
      uint64_t FILT2_EN:1;
      uint64_t FILT3_EN:1;
      uint64_t FILT4_EN:1;
      uint64_t FILT5_EN:1;
      uint64_t FILT6_EN:1;
      uint64_t FILT7_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILT_CONFIG;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_SEL:5;
      uint64_t reservedSpace0:3;
      uint64_t VREFGEN_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREFGEN;

};

#define GPIO_PRT_0 (*(volatile struct GPIO_PRT_0_tag *) 0x40040000)

struct GPIO_PRT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
      uint64_t FLT_DATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM0:3;
      uint64_t DM1:3;
      uint64_t DM2:3;
      uint64_t DM3:3;
      uint64_t DM4:3;
      uint64_t DM5:3;
      uint64_t DM6:3;
      uint64_t DM7:3;
      uint64_t PORT_VTRIP_SEL:1;
      uint64_t PORT_SLOW:1;
      uint64_t reservedSpace0:1;
      uint64_t PORT_HYST_TRIM:1;
      uint64_t PORT_SLEW_CTL:2;
      uint64_t PORT_IB_MODE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0_SEL:2;
      uint64_t EDGE1_SEL:2;
      uint64_t EDGE2_SEL:2;
      uint64_t EDGE3_SEL:2;
      uint64_t EDGE4_SEL:2;
      uint64_t EDGE5_SEL:2;
      uint64_t EDGE6_SEL:2;
      uint64_t EDGE7_SEL:2;
      uint64_t FLT_EDGE_SEL:2;
      uint64_t FLT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
      uint64_t FLT_DATA:1;
      uint64_t reservedSpace0:7;
      uint64_t PS_DATA0:1;
      uint64_t PS_DATA1:1;
      uint64_t PS_DATA2:1;
      uint64_t PS_DATA3:1;
      uint64_t PS_DATA4:1;
      uint64_t PS_DATA5:1;
      uint64_t PS_DATA6:1;
      uint64_t PS_DATA7:1;
      uint64_t PS_FLT_DATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIR_VREG01_EN:1;
      uint64_t PAIR_IBUF01_SEL:1;
      uint64_t PAIR_VTRIP01_SEL:1;
      uint64_t PAIR_VREF01_SEL:2;
      uint64_t PAIR_VOH01_SEL:3;
      uint64_t PAIR_VREG23_EN:1;
      uint64_t PAIR_IBUF23_SEL:1;
      uint64_t PAIR_VTRIP23_SEL:1;
      uint64_t PAIR_VREF23_SEL:2;
      uint64_t PAIR_VOH23_SEL:3;
      uint64_t PAIR_VREG45_EN:1;
      uint64_t PAIR_IBUF45_SEL:1;
      uint64_t PAIR_VTRIP45_SEL:1;
      uint64_t PAIR_VREF45_SEL:2;
      uint64_t PAIR_VOH45_SEL:3;
      uint64_t PAIR_VREG67_EN:1;
      uint64_t PAIR_IBUF67_SEL:1;
      uint64_t PAIR_VTRIP67_SEL:1;
      uint64_t PAIR_VREF67_SEL:2;
      uint64_t PAIR_VOH67_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS0:1;
      uint64_t INP_DIS1:1;
      uint64_t INP_DIS2:1;
      uint64_t INP_DIS3:1;
      uint64_t INP_DIS4:1;
      uint64_t INP_DIS5:1;
      uint64_t INP_DIS6:1;
      uint64_t INP_DIS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_INV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS0:2;
      uint64_t DS1:2;
      uint64_t DS2:2;
      uint64_t DS3:2;
      uint64_t DS4:2;
      uint64_t DS5:2;
      uint64_t DS6:2;
      uint64_t DS7:2;
      uint64_t PORT_V1P2_VTRIP_SEL:1;
      uint64_t PORT_V1P2_IB_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM0:2;
      uint64_t TRIM1:2;
      uint64_t TRIM2:2;
      uint64_t TRIM3:2;
      uint64_t TRIM4:2;
      uint64_t TRIM5:2;
      uint64_t TRIM6:2;
      uint64_t TRIM7:2;
      uint64_t FILT0_EN:1;
      uint64_t FILT1_EN:1;
      uint64_t FILT2_EN:1;
      uint64_t FILT3_EN:1;
      uint64_t FILT4_EN:1;
      uint64_t FILT5_EN:1;
      uint64_t FILT6_EN:1;
      uint64_t FILT7_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILT_CONFIG;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_SEL:5;
      uint64_t reservedSpace0:3;
      uint64_t VREFGEN_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREFGEN;

};

#define GPIO_PRT_1 (*(volatile struct GPIO_PRT_1_tag *) 0x40040100)

struct GPIO_PRT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
      uint64_t FLT_DATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DM0:3;
      uint64_t DM1:3;
      uint64_t DM2:3;
      uint64_t DM3:3;
      uint64_t DM4:3;
      uint64_t DM5:3;
      uint64_t DM6:3;
      uint64_t DM7:3;
      uint64_t PORT_VTRIP_SEL:1;
      uint64_t PORT_SLOW:1;
      uint64_t reservedSpace0:1;
      uint64_t PORT_HYST_TRIM:1;
      uint64_t PORT_SLEW_CTL:2;
      uint64_t PORT_IB_MODE_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EDGE0_SEL:2;
      uint64_t EDGE1_SEL:2;
      uint64_t EDGE2_SEL:2;
      uint64_t EDGE3_SEL:2;
      uint64_t EDGE4_SEL:2;
      uint64_t EDGE5_SEL:2;
      uint64_t EDGE6_SEL:2;
      uint64_t EDGE7_SEL:2;
      uint64_t FLT_EDGE_SEL:2;
      uint64_t FLT_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CFG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA0:1;
      uint64_t DATA1:1;
      uint64_t DATA2:1;
      uint64_t DATA3:1;
      uint64_t DATA4:1;
      uint64_t DATA5:1;
      uint64_t DATA6:1;
      uint64_t DATA7:1;
      uint64_t FLT_DATA:1;
      uint64_t reservedSpace0:7;
      uint64_t PS_DATA0:1;
      uint64_t PS_DATA1:1;
      uint64_t PS_DATA2:1;
      uint64_t PS_DATA3:1;
      uint64_t PS_DATA4:1;
      uint64_t PS_DATA5:1;
      uint64_t PS_DATA6:1;
      uint64_t PS_DATA7:1;
      uint64_t PS_FLT_DATA:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PAIR_VREG01_EN:1;
      uint64_t PAIR_IBUF01_SEL:1;
      uint64_t PAIR_VTRIP01_SEL:1;
      uint64_t PAIR_VREF01_SEL:2;
      uint64_t PAIR_VOH01_SEL:3;
      uint64_t PAIR_VREG23_EN:1;
      uint64_t PAIR_IBUF23_SEL:1;
      uint64_t PAIR_VTRIP23_SEL:1;
      uint64_t PAIR_VREF23_SEL:2;
      uint64_t PAIR_VOH23_SEL:3;
      uint64_t PAIR_VREG45_EN:1;
      uint64_t PAIR_IBUF45_SEL:1;
      uint64_t PAIR_VTRIP45_SEL:1;
      uint64_t PAIR_VREF45_SEL:2;
      uint64_t PAIR_VOH45_SEL:3;
      uint64_t PAIR_VREG67_EN:1;
      uint64_t PAIR_IBUF67_SEL:1;
      uint64_t PAIR_VTRIP67_SEL:1;
      uint64_t PAIR_VREF67_SEL:2;
      uint64_t PAIR_VOH67_SEL:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SIO;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t INP_DIS0:1;
      uint64_t INP_DIS1:1;
      uint64_t INP_DIS2:1;
      uint64_t INP_DIS3:1;
      uint64_t INP_DIS4:1;
      uint64_t INP_DIS5:1;
      uint64_t INP_DIS6:1;
      uint64_t INP_DIS7:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PC2;

  uint8_t res0[36];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_CLR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DR_INV;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DS0:2;
      uint64_t DS1:2;
      uint64_t DS2:2;
      uint64_t DS3:2;
      uint64_t DS4:2;
      uint64_t DS5:2;
      uint64_t DS6:2;
      uint64_t DS7:2;
      uint64_t PORT_V1P2_VTRIP_SEL:1;
      uint64_t PORT_V1P2_IB_MODE_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIM0:2;
      uint64_t TRIM1:2;
      uint64_t TRIM2:2;
      uint64_t TRIM3:2;
      uint64_t TRIM4:2;
      uint64_t TRIM5:2;
      uint64_t TRIM6:2;
      uint64_t TRIM7:2;
      uint64_t FILT0_EN:1;
      uint64_t FILT1_EN:1;
      uint64_t FILT2_EN:1;
      uint64_t FILT3_EN:1;
      uint64_t FILT4_EN:1;
      uint64_t FILT5_EN:1;
      uint64_t FILT6_EN:1;
      uint64_t FILT7_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FILT_CONFIG;

  uint8_t res1[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t REF_SEL:5;
      uint64_t reservedSpace0:3;
      uint64_t VREFGEN_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) VREFGEN;

};

#define GPIO_PRT_2 (*(volatile struct GPIO_PRT_2_tag *) 0x40040200)

struct HVSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PWR_GOOD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HVREG_STATUS;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RDIV_EN_0:1;
      uint64_t RDIV_EN_1:1;
      uint64_t RDIV_ACT_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t RDIV_SCALE_0:1;
      uint64_t RDIV_SCALE_1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RDIV_CTL;

  uint8_t res1[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIN_MODE:3;
      uint64_t reservedSpace0:1;
      uint64_t SL_ROUND:1;
      uint64_t reservedSpace1:3;
      uint64_t USE_ALT_INTERFACE:1;
      uint64_t reservedSpace2:22;
      uint64_t LIN_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_TIMER:12;
      uint64_t reservedSpace0:4;
      uint64_t FAULT_TIMER:12;
      uint64_t reservedSpace1:2;
      uint64_t WAKEUP_TIMER_EN:1;
      uint64_t FAULT_TIMER_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LIN_RXD:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_STATUS;

  uint8_t res2[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t FAULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t FAULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t FAULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
      uint64_t FAULT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) LIN_INTR_MASKED;

};

#define HVSS (*(volatile struct HVSS_tag *) 0x40060000)

struct CPUSS_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t VECT_IN_RAM:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CONFIG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCALL_COMMAND:16;
      uint64_t reservedSpace0:11;
      uint64_t DIS_RESET_VECT_REL:1;
      uint64_t PRIVILEGED:1;
      uint64_t ROM_ACCESS_EN:1;
      uint64_t HMASTER_0:1;
      uint64_t SYSCALL_REQ:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSREQ;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYSCALL_ARG:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SYSARG;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PROTECTION_MODE:4;
      uint64_t reservedSpace0:26;
      uint64_t FLASH_LOCK:1;
      uint64_t PROTECTION_LOCK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PROTECTION;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BROM_PROT_LIMIT:8;
      uint64_t reservedSpace0:8;
      uint64_t SROM_PROT_LIMIT:10;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_ROM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_PROT_LIMIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_RAM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH_PROT_LIMIT:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_FLASH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t RAM_WOUND:3;
      uint64_t reservedSpace1:1;
      uint64_t FLASH_WOUND:3;
      uint64_t reservedSpace2:1;
      uint64_t RAM1_WOUND:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) WOUNDING;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSI:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_SEL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSI_INT_PULSE:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INT_MODE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DSI_NMI_PULSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NMI_MODE;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH_WS:2;
      uint64_t reservedSpace0:2;
      uint64_t PREF_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t FLASH_INVALIDATE:1;
      uint64_t reservedSpace2:7;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FLASH_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ROM_WS:1;
      uint64_t reservedSpace0:15;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ROM_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DMAC_CTL;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RAM_PROT_LIMIT:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PRIV_RAM1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RAM1_CTL;

  uint8_t res2[8];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CPU_HALT_TSTOP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MTB_CTL;

  uint8_t res3[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t ARB:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SL_CTL_23;

};

#define CPUSS (*(volatile struct CPUSS_tag *) 0x40100000)

struct DMAC_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:31;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL;

  uint8_t res0[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t CH_ADDR:5;
      uint64_t reservedSpace0:3;
      uint64_t STATE:3;
      uint64_t reservedSpace1:1;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ACTIVE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS_SRC_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS_DST_ADDR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS_CH_ACT;

  uint8_t res1[96];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_3;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_4;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_5;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_6;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_7;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_8;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_9;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_10;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_11;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_12;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_13;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_14;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_15;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_16;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_17;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_18;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_19;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_20;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_21;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_22;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_23;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_24;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_25;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_26;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_27;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_28;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_29;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_30;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:28;
      uint64_t PRIO:2;
      uint64_t PING_PONG:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CH_CTL_31;

  uint8_t res2[1776];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define DMAC (*(volatile struct DMAC_tag *) 0x40101000)

struct DMAC_DESCR_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_0 (*(volatile struct DMAC_DESCR_0_tag *) 0x40101800)

struct DMAC_DESCR_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_1 (*(volatile struct DMAC_DESCR_1_tag *) 0x40101820)

struct DMAC_DESCR_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_2 (*(volatile struct DMAC_DESCR_2_tag *) 0x40101840)

struct DMAC_DESCR_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_3 (*(volatile struct DMAC_DESCR_3_tag *) 0x40101860)

struct DMAC_DESCR_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_4 (*(volatile struct DMAC_DESCR_4_tag *) 0x40101880)

struct DMAC_DESCR_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_5 (*(volatile struct DMAC_DESCR_5_tag *) 0x401018a0)

struct DMAC_DESCR_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_6 (*(volatile struct DMAC_DESCR_6_tag *) 0x401018c0)

struct DMAC_DESCR_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PING_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_SRC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_DST;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:16;
      uint64_t DATA_SIZE:2;
      uint64_t reservedSpace0:2;
      uint64_t DST_TRANSFER_SIZE:1;
      uint64_t DST_ADDR_INCR:1;
      uint64_t SRC_TRANSFER_SIZE:1;
      uint64_t SRC_ADDR_INCR:1;
      uint64_t WAIT_FOR_DEACT:2;
      uint64_t INV_DESCR:1;
      uint64_t SET_CAUSE:1;
      uint64_t PREEMPTABLE:1;
      uint64_t FLIPPING:1;
      uint64_t OPCODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_DATA_NR:16;
      uint64_t RESPONSE:3;
      uint64_t reservedSpace0:12;
      uint64_t VALID:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PONG_STATUS;

};

#define DMAC_DESCR_7 (*(volatile struct DMAC_DESCR_7_tag *) 0x401018e0)

struct SPCIF_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t FLASH:14;
      uint64_t SFLASH:6;
      uint64_t NUM_FLASH:2;
      uint64_t FLASH_ROW:2;
      uint64_t NVL:7;
      uint64_t DE_CPD_LP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GEOMETRY;

  uint8_t res0[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) NVL_WR_DATA;

  uint8_t res1[2000];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TIMER:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define SPCIF (*(volatile struct SPCIF_tag *) 0x40110000)

struct TCPWM_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER_ENABLED:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER_CAPTURE:8;
      uint64_t COUNTER_RELOAD:8;
      uint64_t COUNTER_STOP:8;
      uint64_t COUNTER_START:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER_INT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

};

#define TCPWM (*(volatile struct TCPWM_tag *) 0x40200000)

struct TCPWM_CNT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_CNT_0 (*(volatile struct TCPWM_CNT_0_tag *) 0x40200100)

struct TCPWM_CNT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_CNT_1 (*(volatile struct TCPWM_CNT_1_tag *) 0x40200140)

struct TCPWM_CNT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_CNT_2 (*(volatile struct TCPWM_CNT_2_tag *) 0x40200180)

struct TCPWM_CNT_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_CNT_3 (*(volatile struct TCPWM_CNT_3_tag *) 0x402001c0)

struct TCPWM_CNT_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t AUTO_RELOAD_CC:1;
      uint64_t AUTO_RELOAD_PERIOD:1;
      uint64_t PWM_SYNC_KILL:1;
      uint64_t PWM_STOP_ON_KILL:1;
      uint64_t reservedSpace0:4;
      uint64_t GENERIC:8;
      uint64_t UP_DOWN_MODE:2;
      uint64_t ONE_SHOT:1;
      uint64_t reservedSpace1:1;
      uint64_t QUADRATURE_MODE:2;
      uint64_t reservedSpace2:2;
      uint64_t MODE:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DOWN:1;
      uint64_t reservedSpace0:7;
      uint64_t GENERIC:8;
      uint64_t reservedSpace1:15;
      uint64_t RUNNING:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t COUNTER:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COUNTER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CC_BUFF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PERIOD:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PERIOD_BUFF;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_SEL:4;
      uint64_t COUNT_SEL:4;
      uint64_t RELOAD_SEL:4;
      uint64_t STOP_SEL:4;
      uint64_t START_SEL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CAPTURE_EDGE:2;
      uint64_t COUNT_EDGE:2;
      uint64_t RELOAD_EDGE:2;
      uint64_t STOP_EDGE:2;
      uint64_t START_EDGE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CC_MATCH_MODE:2;
      uint64_t OVERFLOW_MODE:2;
      uint64_t UNDERFLOW_MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTRL2;

  uint8_t res1[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TC:1;
      uint64_t CC_MATCH:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define TCPWM_CNT_4 (*(volatile struct TCPWM_CNT_4_tag *) 0x40200200)

struct SCB_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVS:4;
      uint64_t reservedSpace0:4;
      uint64_t EC_AM_MODE:1;
      uint64_t EC_OP_MODE:1;
      uint64_t EZ_MODE:1;
      uint64_t BYTE_MODE:1;
      uint64_t CMD_RESP_MODE:1;
      uint64_t reservedSpace1:3;
      uint64_t ADDR_ACCEPT:1;
      uint64_t BLOCK:1;
      uint64_t reservedSpace2:6;
      uint64_t MODE:2;
      uint64_t reservedSpace3:5;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t EC_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BASE_RD_ADDR:9;
      uint64_t reservedSpace0:7;
      uint64_t BASE_WR_ADDR:9;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RESP_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CURR_RD_ADDR:9;
      uint64_t reservedSpace0:7;
      uint64_t CURR_WR_ADDR:9;
      uint64_t reservedSpace1:5;
      uint64_t CMD_RESP_EC_BUS_BUSY:1;
      uint64_t CMD_RESP_EC_BUSY:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD_RESP_STATUS;

  uint8_t res0[16];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CONTINUOUS:1;
      uint64_t SELECT_PRECEDE:1;
      uint64_t CPHA:1;
      uint64_t CPOL:1;
      uint64_t LATE_MISO_SAMPLE:1;
      uint64_t SCLK_CONTINUOUS:1;
      uint64_t reservedSpace0:2;
      uint64_t SSEL_POLARITY0:1;
      uint64_t SSEL_POLARITY1:1;
      uint64_t SSEL_POLARITY2:1;
      uint64_t SSEL_POLARITY3:1;
      uint64_t reservedSpace1:4;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace2:7;
      uint64_t MODE:2;
      uint64_t SLAVE_SELECT:2;
      uint64_t reservedSpace3:3;
      uint64_t MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUS_BUSY:1;
      uint64_t SPI_EC_BUSY:1;
      uint64_t reservedSpace0:6;
      uint64_t CURR_EZ_ADDR:8;
      uint64_t BASE_EZ_ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SPI_STATUS;

  uint8_t res1[24];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:7;
      uint64_t MODE:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:3;
      uint64_t reservedSpace0:1;
      uint64_t PARITY:1;
      uint64_t PARITY_ENABLED:1;
      uint64_t reservedSpace1:2;
      uint64_t RETRY_ON_NACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:3;
      uint64_t reservedSpace0:1;
      uint64_t PARITY:1;
      uint64_t PARITY_ENABLED:1;
      uint64_t POLARITY:1;
      uint64_t reservedSpace1:1;
      uint64_t DROP_ON_PARITY_ERROR:1;
      uint64_t DROP_ON_FRAME_ERROR:1;
      uint64_t MP_MODE:1;
      uint64_t reservedSpace2:1;
      uint64_t LIN_MODE:1;
      uint64_t SKIP_START:1;
      uint64_t reservedSpace3:2;
      uint64_t BREAK_WIDTH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BR_COUNTER:12;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_RX_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:8;
      uint64_t reservedSpace0:8;
      uint64_t RTS_POLARITY:1;
      uint64_t reservedSpace1:7;
      uint64_t CTS_POLARITY:1;
      uint64_t CTS_ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) UART_FLOW_CTRL;

  uint8_t res2[12];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t HIGH_PHASE_OVS:4;
      uint64_t LOW_PHASE_OVS:4;
      uint64_t M_READY_DATA_ACK:1;
      uint64_t M_NOT_READY_DATA_NACK:1;
      uint64_t reservedSpace0:1;
      uint64_t S_GENERAL_IGNORE:1;
      uint64_t S_READY_ADDR_ACK:1;
      uint64_t S_READY_DATA_ACK:1;
      uint64_t S_NOT_READY_ADDR_NACK:1;
      uint64_t S_NOT_READY_DATA_NACK:1;
      uint64_t LOOPBACK:1;
      uint64_t reservedSpace1:13;
      uint64_t SLAVE_MODE:1;
      uint64_t MASTER_MODE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUS_BUSY:1;
      uint64_t I2C_EC_BUSY:1;
      uint64_t reservedSpace0:2;
      uint64_t S_READ:1;
      uint64_t M_READ:1;
      uint64_t reservedSpace1:2;
      uint64_t CURR_EZ_ADDR:8;
      uint64_t BASE_EZ_ADDR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_STATUS;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M_START:1;
      uint64_t M_START_ON_IDLE:1;
      uint64_t M_ACK:1;
      uint64_t M_NACK:1;
      uint64_t M_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_M_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t S_ACK:1;
      uint64_t S_NACK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_S_CMD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SDA_IN_FILT_TRIM:2;
      uint64_t reservedSpace0:2;
      uint64_t SDA_IN_FILT_SEL:1;
      uint64_t reservedSpace1:3;
      uint64_t SCL_IN_FILT_TRIM:2;
      uint64_t reservedSpace2:2;
      uint64_t SCL_IN_FILT_SEL:1;
      uint64_t reservedSpace3:3;
      uint64_t SDA_OUT_FILT0_TRIM:2;
      uint64_t SDA_OUT_FILT1_TRIM:2;
      uint64_t SDA_OUT_FILT2_TRIM:2;
      uint64_t reservedSpace4:6;
      uint64_t SDA_OUT_FILT_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) I2C_CFG;

  uint8_t res3[396];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_WIDTH:4;
      uint64_t reservedSpace0:4;
      uint64_t MSB_FIRST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:8;
      uint64_t reservedSpace0:8;
      uint64_t CLEAR:1;
      uint64_t FREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USED:9;
      uint64_t reservedSpace0:6;
      uint64_t SR_VALID:1;
      uint64_t RD_PTR:8;
      uint64_t WR_PTR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_STATUS;

  uint8_t res4[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_FIFO_WR;

  uint8_t res5[188];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_WIDTH:4;
      uint64_t reservedSpace0:4;
      uint64_t MSB_FIRST:1;
      uint64_t MEDIAN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER_LEVEL:8;
      uint64_t reservedSpace0:8;
      uint64_t CLEAR:1;
      uint64_t FREEZE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_CTRL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t USED:9;
      uint64_t reservedSpace0:6;
      uint64_t SR_VALID:1;
      uint64_t RD_PTR:8;
      uint64_t WR_PTR:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_STATUS;

  uint8_t res6[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ADDR:8;
      uint64_t reservedSpace0:8;
      uint64_t MASK:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_MATCH;

  uint8_t res7[44];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_RD;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RX_FIFO_RD_SILENT;

  uint8_t res8[2744];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t M:1;
      uint64_t S:1;
      uint64_t TX:1;
      uint64_t RX:1;
      uint64_t I2C_EC:1;
      uint64_t SPI_EC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

  uint8_t res9[124];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
      uint64_t EZ_READ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC;

  uint8_t res10[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
      uint64_t EZ_READ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
      uint64_t EZ_READ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_I2C_EC_MASKED;

  uint8_t res11[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
      uint64_t EZ_READ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC;

  uint8_t res12[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
      uint64_t EZ_READ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKE_UP:1;
      uint64_t EZ_STOP:1;
      uint64_t EZ_WRITE_STOP:1;
      uint64_t EZ_READ_STOP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SPI_EC_MASKED;

  uint8_t res13[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t reservedSpace0:1;
      uint64_t I2C_STOP:1;
      uint64_t reservedSpace1:3;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_DONE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_M_MASKED;

  uint8_t res14[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t I2C_ARB_LOST:1;
      uint64_t I2C_NACK:1;
      uint64_t I2C_ACK:1;
      uint64_t I2C_WRITE_STOP:1;
      uint64_t I2C_STOP:1;
      uint64_t I2C_START:1;
      uint64_t I2C_ADDR_MATCH:1;
      uint64_t I2C_GENERAL:1;
      uint64_t I2C_BUS_ERROR:1;
      uint64_t SPI_EZ_WRITE_STOP:1;
      uint64_t SPI_EZ_STOP:1;
      uint64_t SPI_BUS_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_S_MASKED;

  uint8_t res15[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t NOT_FULL:1;
      uint64_t reservedSpace0:2;
      uint64_t EMPTY:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t UART_NACK:1;
      uint64_t UART_DONE:1;
      uint64_t UART_ARB_LOST:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_TX_MASKED;

  uint8_t res16[48];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TRIGGER:1;
      uint64_t reservedSpace0:1;
      uint64_t NOT_EMPTY:1;
      uint64_t FULL:1;
      uint64_t reservedSpace1:1;
      uint64_t OVERFLOW:1;
      uint64_t UNDERFLOW:1;
      uint64_t BLOCKED:1;
      uint64_t FRAME_ERROR:1;
      uint64_t PARITY_ERROR:1;
      uint64_t BAUD_DETECT:1;
      uint64_t BREAK_DETECT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_RX_MASKED;

};

#define SCB (*(volatile struct SCB_tag *) 0x40240000)

struct LIN0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_IDX:5;
      uint64_t reservedSpace0:11;
      uint64_t TX_SYNC_ERROR:1;
      uint64_t TX_SYNC_STOP_ERROR:1;
      uint64_t TX_PARITY_ERROR:1;
      uint64_t TX_PID_STOP_ERROR:1;
      uint64_t reservedSpace1:1;
      uint64_t TX_DATA_STOP_ERROR:1;
      uint64_t TX_CHECKSUM_ERROR:1;
      uint64_t TX_CHECKSUM_STOP_ERROR:1;
      uint64_t reservedSpace2:7;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ERROR_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CH_IDX:5;
      uint64_t reservedSpace0:11;
      uint64_t MODE:1;
      uint64_t reservedSpace1:14;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TEST_CTL;

};

#define LIN0 (*(volatile struct LIN0_tag *) 0x402d0000)

struct LIN0_CH_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:2;
      uint64_t reservedSpace0:2;
      uint64_t AUTO_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t BREAK_DELIMITER_LENGTH:2;
      uint64_t reservedSpace2:6;
      uint64_t BREAK_WAKEUP_LENGTH:5;
      uint64_t reservedSpace3:3;
      uint64_t MODE:1;
      uint64_t reservedSpace4:2;
      uint64_t BIT_ERROR_IGNORE:1;
      uint64_t PARITY:1;
      uint64_t PARITY_EN:1;
      uint64_t FILTER_EN:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:3;
      uint64_t reservedSpace0:5;
      uint64_t CHECKSUM_ENHANCED:1;
      uint64_t reservedSpace1:7;
      uint64_t FRAME_TIMEOUT:8;
      uint64_t FRAME_TIMEOUT_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_IDX:4;
      uint64_t HEADER_RESPONSE:1;
      uint64_t RX_DATA0_FRAME_ERROR:1;
      uint64_t reservedSpace0:2;
      uint64_t TX_BUSY:1;
      uint64_t RX_BUSY:1;
      uint64_t reservedSpace1:2;
      uint64_t TX_DONE:1;
      uint64_t RX_DONE:1;
      uint64_t reservedSpace2:2;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER:1;
      uint64_t TX_RESPONSE:1;
      uint64_t TX_WAKEUP:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER:1;
      uint64_t RX_RESPONSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res1[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_COUNTER:8;
      uint64_t reservedSpace0:8;
      uint64_t TX_IN:1;
      uint64_t RX_IN:1;
      uint64_t reservedSpace1:6;
      uint64_t TX_OUT:1;
      uint64_t reservedSpace2:1;
      uint64_t EN_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_RX_STATUS;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:8;
      uint64_t CHECKSUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID_CHECKSUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
      uint64_t DATA4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA1;

  uint8_t res3[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define LIN0_CH_0 (*(volatile struct LIN0_CH_0_tag *) 0x402d8000)

struct LIN0_CH_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t STOP_BITS:2;
      uint64_t reservedSpace0:2;
      uint64_t AUTO_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t BREAK_DELIMITER_LENGTH:2;
      uint64_t reservedSpace2:6;
      uint64_t BREAK_WAKEUP_LENGTH:5;
      uint64_t reservedSpace3:3;
      uint64_t MODE:1;
      uint64_t reservedSpace4:2;
      uint64_t BIT_ERROR_IGNORE:1;
      uint64_t PARITY:1;
      uint64_t PARITY_EN:1;
      uint64_t FILTER_EN:1;
      uint64_t ENABLED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_NR:3;
      uint64_t reservedSpace0:5;
      uint64_t CHECKSUM_ENHANCED:1;
      uint64_t reservedSpace1:7;
      uint64_t FRAME_TIMEOUT:8;
      uint64_t FRAME_TIMEOUT_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CTL1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_IDX:4;
      uint64_t HEADER_RESPONSE:1;
      uint64_t RX_DATA0_FRAME_ERROR:1;
      uint64_t reservedSpace0:2;
      uint64_t TX_BUSY:1;
      uint64_t RX_BUSY:1;
      uint64_t reservedSpace1:2;
      uint64_t TX_DONE:1;
      uint64_t RX_DONE:1;
      uint64_t reservedSpace2:2;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER:1;
      uint64_t TX_RESPONSE:1;
      uint64_t TX_WAKEUP:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER:1;
      uint64_t RX_RESPONSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CMD;

  uint8_t res1[76];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SYNC_COUNTER:8;
      uint64_t reservedSpace0:8;
      uint64_t TX_IN:1;
      uint64_t RX_IN:1;
      uint64_t reservedSpace1:6;
      uint64_t TX_OUT:1;
      uint64_t reservedSpace2:1;
      uint64_t EN_OUT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TX_RX_STATUS;

  uint8_t res2[28];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PID:8;
      uint64_t CHECKSUM:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PID_CHECKSUM;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA1:8;
      uint64_t DATA2:8;
      uint64_t DATA3:8;
      uint64_t DATA4:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA5:8;
      uint64_t DATA6:8;
      uint64_t DATA7:8;
      uint64_t DATA8:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DATA1;

  uint8_t res3[52];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TX_HEADER_DONE:1;
      uint64_t TX_RESPONSE_DONE:1;
      uint64_t TX_WAKEUP_DONE:1;
      uint64_t reservedSpace0:5;
      uint64_t RX_HEADER_DONE:1;
      uint64_t RX_RESPONSE_DONE:1;
      uint64_t RX_BREAK_WAKEUP_DONE:1;
      uint64_t RX_HEADER_SYNC_DONE:1;
      uint64_t reservedSpace1:1;
      uint64_t RX_NOISE_DETECT:1;
      uint64_t TIMEOUT:1;
      uint64_t reservedSpace2:1;
      uint64_t TX_HEADER_BIT_ERROR:1;
      uint64_t TX_RESPONSE_BIT_ERROR:1;
      uint64_t reservedSpace3:6;
      uint64_t RX_HEADER_FRAME_ERROR:1;
      uint64_t RX_HEADER_SYNC_ERROR:1;
      uint64_t RX_HEADER_PARITY_ERROR:1;
      uint64_t RX_RESPONSE_FRAME_ERROR:1;
      uint64_t RX_RESPONSE_CHECKSUM_ERROR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

};

#define LIN0_CH_1 (*(volatile struct LIN0_CH_1_tag *) 0x402d8100)

struct PACSS_DCHAN_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC_EN:1;
      uint64_t PP_EN:1;
      uint64_t AGC_GAIN_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t FIR_NUM_TAPS:6;
      uint64_t reservedSpace1:2;
      uint64_t FIR_EN:2;
      uint64_t reservedSpace2:16;
      uint64_t SEC_EN:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCHAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACHAN_SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t POS_PIN_SEL:7;
      uint64_t reservedSpace1:1;
      uint64_t NEG_PIN_SEL:5;
      uint64_t BYPASS_AAF:1;
      uint64_t OTHER_ACHAN_SEL:1;
      uint64_t reservedSpace2:1;
      uint64_t CH_SEL_DLY:8;
      uint64_t AAF_SHORT_R_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC_MODE:1;
      uint64_t CONV_MODE:1;
      uint64_t OCOR_EN:1;
      uint64_t GCOR_EN:1;
      uint64_t DR:7;
      uint64_t reservedSpace0:1;
      uint64_t SHIFTL:4;
      uint64_t DR2:5;
      uint64_t reservedSpace1:3;
      uint64_t DEC_SHIFTR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEC_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVG_MODE:3;
      uint64_t MOV_SUM:1;
      uint64_t SHIFTR:4;
      uint64_t CLAMP_VALUE:5;
      uint64_t reservedSpace0:3;
      uint64_t RANGE_DET_EN:2;
      uint64_t SAT_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t RANGE_COND:2;
      uint64_t reservedSpace2:2;
      uint64_t RANGE_CNT_VAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
      uint64_t GVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGA_GAIN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAP1:7;
      uint64_t FCAP1OFFSET:1;
      uint64_t FCAP1_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t FCAP2:4;
      uint64_t FCAP2_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t FCAP3:4;
      uint64_t FCAP3_EN:1;
      uint64_t reservedSpace2:3;
      uint64_t RESCAP:3;
      uint64_t RESCAP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACCAP:6;
      uint64_t DACCAP_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
      uint64_t IPCAP1_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t IPCAP2:3;
      uint64_t IPCAP2_EN:1;
      uint64_t IPCAP3:3;
      uint64_t IPCAP3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t SUMCAPIN_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SUMCAP1:3;
      uint64_t SUMCAP1_EN:1;
      uint64_t SUMCAP2:3;
      uint64_t SUMCAP2_EN:1;
      uint64_t SUMCAP3:3;
      uint64_t SUMCAP3_EN:1;
      uint64_t SUMCAPFB:4;
      uint64_t SUMCAPFB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_THRESH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_THRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_INTR:1;
      uint64_t OVERFLOW_INTR:1;
      uint64_t FWT_COLLISION_INTR:1;
      uint64_t HWT_COLLISION_INTR:1;
      uint64_t OVERLOAD_INTR:1;
      uint64_t SATURATE_INTR:1;
      uint64_t ACC_THRESH_INTR:1;
      uint64_t RANGE_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_SET:1;
      uint64_t OVERFLOW_SET:1;
      uint64_t FWT_COLLISION_SET:1;
      uint64_t HWT_COLLISION_SET:1;
      uint64_t OVERLOAD_SET:1;
      uint64_t SATURATE_SET:1;
      uint64_t ACC_THRESH_SET:1;
      uint64_t RANGE_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASK:1;
      uint64_t OVERFLOW_MASK:1;
      uint64_t FWT_COLLISION_MASK:1;
      uint64_t HWT_COLLISION_MASK:1;
      uint64_t OVERLOAD_MASK:1;
      uint64_t SATURATE_MASK:1;
      uint64_t ACC_THRESH_MASK:1;
      uint64_t RANGE_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASKED:1;
      uint64_t OVERFLOW_MASKED:1;
      uint64_t FWT_COLLISION_MASKED:1;
      uint64_t HWT_COLLSION_MASKED:1;
      uint64_t OVERLOAD_MASKED:1;
      uint64_t SATURATE_MASKED:1;
      uint64_t ACC_THRESH_MASKED:1;
      uint64_t RANGE_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERLOAD_CAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

};

#define PACSS_DCHAN_0 (*(volatile struct PACSS_DCHAN_0_tag *) 0x40300000)

struct PACSS_DCHAN_0_FCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP;

};

#define PACSS_DCHAN_0_FCFG (*(volatile struct PACSS_DCHAN_0_FCFG_tag *) 0x40300100)

struct PACSS_DCHAN_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC_EN:1;
      uint64_t PP_EN:1;
      uint64_t AGC_GAIN_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t FIR_NUM_TAPS:6;
      uint64_t reservedSpace1:2;
      uint64_t FIR_EN:2;
      uint64_t reservedSpace2:16;
      uint64_t SEC_EN:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCHAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACHAN_SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t POS_PIN_SEL:7;
      uint64_t reservedSpace1:1;
      uint64_t NEG_PIN_SEL:5;
      uint64_t BYPASS_AAF:1;
      uint64_t OTHER_ACHAN_SEL:1;
      uint64_t reservedSpace2:1;
      uint64_t CH_SEL_DLY:8;
      uint64_t AAF_SHORT_R_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC_MODE:1;
      uint64_t CONV_MODE:1;
      uint64_t OCOR_EN:1;
      uint64_t GCOR_EN:1;
      uint64_t DR:7;
      uint64_t reservedSpace0:1;
      uint64_t SHIFTL:4;
      uint64_t DR2:5;
      uint64_t reservedSpace1:3;
      uint64_t DEC_SHIFTR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEC_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVG_MODE:3;
      uint64_t MOV_SUM:1;
      uint64_t SHIFTR:4;
      uint64_t CLAMP_VALUE:5;
      uint64_t reservedSpace0:3;
      uint64_t RANGE_DET_EN:2;
      uint64_t SAT_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t RANGE_COND:2;
      uint64_t reservedSpace2:2;
      uint64_t RANGE_CNT_VAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
      uint64_t GVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGA_GAIN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAP1:7;
      uint64_t FCAP1OFFSET:1;
      uint64_t FCAP1_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t FCAP2:4;
      uint64_t FCAP2_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t FCAP3:4;
      uint64_t FCAP3_EN:1;
      uint64_t reservedSpace2:3;
      uint64_t RESCAP:3;
      uint64_t RESCAP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACCAP:6;
      uint64_t DACCAP_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
      uint64_t IPCAP1_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t IPCAP2:3;
      uint64_t IPCAP2_EN:1;
      uint64_t IPCAP3:3;
      uint64_t IPCAP3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t SUMCAPIN_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SUMCAP1:3;
      uint64_t SUMCAP1_EN:1;
      uint64_t SUMCAP2:3;
      uint64_t SUMCAP2_EN:1;
      uint64_t SUMCAP3:3;
      uint64_t SUMCAP3_EN:1;
      uint64_t SUMCAPFB:4;
      uint64_t SUMCAPFB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_THRESH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_THRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_INTR:1;
      uint64_t OVERFLOW_INTR:1;
      uint64_t FWT_COLLISION_INTR:1;
      uint64_t HWT_COLLISION_INTR:1;
      uint64_t OVERLOAD_INTR:1;
      uint64_t SATURATE_INTR:1;
      uint64_t ACC_THRESH_INTR:1;
      uint64_t RANGE_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_SET:1;
      uint64_t OVERFLOW_SET:1;
      uint64_t FWT_COLLISION_SET:1;
      uint64_t HWT_COLLISION_SET:1;
      uint64_t OVERLOAD_SET:1;
      uint64_t SATURATE_SET:1;
      uint64_t ACC_THRESH_SET:1;
      uint64_t RANGE_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASK:1;
      uint64_t OVERFLOW_MASK:1;
      uint64_t FWT_COLLISION_MASK:1;
      uint64_t HWT_COLLISION_MASK:1;
      uint64_t OVERLOAD_MASK:1;
      uint64_t SATURATE_MASK:1;
      uint64_t ACC_THRESH_MASK:1;
      uint64_t RANGE_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASKED:1;
      uint64_t OVERFLOW_MASKED:1;
      uint64_t FWT_COLLISION_MASKED:1;
      uint64_t HWT_COLLSION_MASKED:1;
      uint64_t OVERLOAD_MASKED:1;
      uint64_t SATURATE_MASKED:1;
      uint64_t ACC_THRESH_MASKED:1;
      uint64_t RANGE_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERLOAD_CAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

};

#define PACSS_DCHAN_1 (*(volatile struct PACSS_DCHAN_1_tag *) 0x40310000)

struct PACSS_DCHAN_1_FCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP;

};

#define PACSS_DCHAN_1_FCFG (*(volatile struct PACSS_DCHAN_1_FCFG_tag *) 0x40310100)

struct PACSS_DCHAN_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC_EN:1;
      uint64_t PP_EN:1;
      uint64_t AGC_GAIN_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t FIR_NUM_TAPS:6;
      uint64_t reservedSpace1:2;
      uint64_t FIR_EN:2;
      uint64_t reservedSpace2:16;
      uint64_t SEC_EN:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCHAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACHAN_SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t POS_PIN_SEL:7;
      uint64_t reservedSpace1:1;
      uint64_t NEG_PIN_SEL:5;
      uint64_t BYPASS_AAF:1;
      uint64_t OTHER_ACHAN_SEL:1;
      uint64_t reservedSpace2:1;
      uint64_t CH_SEL_DLY:8;
      uint64_t AAF_SHORT_R_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC_MODE:1;
      uint64_t CONV_MODE:1;
      uint64_t OCOR_EN:1;
      uint64_t GCOR_EN:1;
      uint64_t DR:7;
      uint64_t reservedSpace0:1;
      uint64_t SHIFTL:4;
      uint64_t DR2:5;
      uint64_t reservedSpace1:3;
      uint64_t DEC_SHIFTR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEC_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVG_MODE:3;
      uint64_t MOV_SUM:1;
      uint64_t SHIFTR:4;
      uint64_t CLAMP_VALUE:5;
      uint64_t reservedSpace0:3;
      uint64_t RANGE_DET_EN:2;
      uint64_t SAT_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t RANGE_COND:2;
      uint64_t reservedSpace2:2;
      uint64_t RANGE_CNT_VAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
      uint64_t GVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGA_GAIN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAP1:7;
      uint64_t FCAP1OFFSET:1;
      uint64_t FCAP1_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t FCAP2:4;
      uint64_t FCAP2_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t FCAP3:4;
      uint64_t FCAP3_EN:1;
      uint64_t reservedSpace2:3;
      uint64_t RESCAP:3;
      uint64_t RESCAP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACCAP:6;
      uint64_t DACCAP_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
      uint64_t IPCAP1_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t IPCAP2:3;
      uint64_t IPCAP2_EN:1;
      uint64_t IPCAP3:3;
      uint64_t IPCAP3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t SUMCAPIN_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SUMCAP1:3;
      uint64_t SUMCAP1_EN:1;
      uint64_t SUMCAP2:3;
      uint64_t SUMCAP2_EN:1;
      uint64_t SUMCAP3:3;
      uint64_t SUMCAP3_EN:1;
      uint64_t SUMCAPFB:4;
      uint64_t SUMCAPFB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_THRESH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_THRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_INTR:1;
      uint64_t OVERFLOW_INTR:1;
      uint64_t FWT_COLLISION_INTR:1;
      uint64_t HWT_COLLISION_INTR:1;
      uint64_t OVERLOAD_INTR:1;
      uint64_t SATURATE_INTR:1;
      uint64_t ACC_THRESH_INTR:1;
      uint64_t RANGE_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_SET:1;
      uint64_t OVERFLOW_SET:1;
      uint64_t FWT_COLLISION_SET:1;
      uint64_t HWT_COLLISION_SET:1;
      uint64_t OVERLOAD_SET:1;
      uint64_t SATURATE_SET:1;
      uint64_t ACC_THRESH_SET:1;
      uint64_t RANGE_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASK:1;
      uint64_t OVERFLOW_MASK:1;
      uint64_t FWT_COLLISION_MASK:1;
      uint64_t HWT_COLLISION_MASK:1;
      uint64_t OVERLOAD_MASK:1;
      uint64_t SATURATE_MASK:1;
      uint64_t ACC_THRESH_MASK:1;
      uint64_t RANGE_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASKED:1;
      uint64_t OVERFLOW_MASKED:1;
      uint64_t FWT_COLLISION_MASKED:1;
      uint64_t HWT_COLLSION_MASKED:1;
      uint64_t OVERLOAD_MASKED:1;
      uint64_t SATURATE_MASKED:1;
      uint64_t ACC_THRESH_MASKED:1;
      uint64_t RANGE_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERLOAD_CAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

};

#define PACSS_DCHAN_2 (*(volatile struct PACSS_DCHAN_2_tag *) 0x40320000)

struct PACSS_DCHAN_2_FCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP;

};

#define PACSS_DCHAN_2_FCFG (*(volatile struct PACSS_DCHAN_2_FCFG_tag *) 0x40320100)

struct PACSS_DCHAN_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t DEC_EN:1;
      uint64_t PP_EN:1;
      uint64_t AGC_GAIN_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t FIR_NUM_TAPS:6;
      uint64_t reservedSpace1:2;
      uint64_t FIR_EN:2;
      uint64_t reservedSpace2:16;
      uint64_t SEC_EN:1;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DCHAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACHAN_SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t POS_PIN_SEL:7;
      uint64_t reservedSpace1:1;
      uint64_t NEG_PIN_SEL:5;
      uint64_t BYPASS_AAF:1;
      uint64_t OTHER_ACHAN_SEL:1;
      uint64_t reservedSpace2:1;
      uint64_t CH_SEL_DLY:8;
      uint64_t AAF_SHORT_R_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SMP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SINC_MODE:1;
      uint64_t CONV_MODE:1;
      uint64_t OCOR_EN:1;
      uint64_t GCOR_EN:1;
      uint64_t DR:7;
      uint64_t reservedSpace0:1;
      uint64_t SHIFTL:4;
      uint64_t DR2:5;
      uint64_t reservedSpace1:3;
      uint64_t DEC_SHIFTR:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DEC_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t AVG_MODE:3;
      uint64_t MOV_SUM:1;
      uint64_t SHIFTR:4;
      uint64_t CLAMP_VALUE:5;
      uint64_t reservedSpace0:3;
      uint64_t RANGE_DET_EN:2;
      uint64_t SAT_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t RANGE_COND:2;
      uint64_t reservedSpace2:2;
      uint64_t RANGE_CNT_VAL:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
      uint64_t GVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_LOW:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_LOW;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RANGE_HIGH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RANGE_HIGH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GAIN:3;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGA_GAIN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FCAP1:7;
      uint64_t FCAP1OFFSET:1;
      uint64_t FCAP1_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t FCAP2:4;
      uint64_t FCAP2_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t FCAP3:4;
      uint64_t FCAP3_EN:1;
      uint64_t reservedSpace2:3;
      uint64_t RESCAP:3;
      uint64_t RESCAP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DACCAP:6;
      uint64_t DACCAP_EN:1;
      uint64_t reservedSpace0:1;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
      uint64_t IPCAP1_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t IPCAP2:3;
      uint64_t IPCAP2_EN:1;
      uint64_t IPCAP3:3;
      uint64_t IPCAP3_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t SUMCAPIN_EN:1;
      uint64_t reservedSpace0:2;
      uint64_t SUMCAP1:3;
      uint64_t SUMCAP1_EN:1;
      uint64_t SUMCAP2:3;
      uint64_t SUMCAP2_EN:1;
      uint64_t SUMCAP3:3;
      uint64_t SUMCAP3_EN:1;
      uint64_t SUMCAPFB:4;
      uint64_t SUMCAPFB_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CAP_CFG2;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_THRESH:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_THRESH;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD0:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD1:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) RESERVED_1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t ACC_RESULT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACC_RESULT;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_INTR:1;
      uint64_t OVERFLOW_INTR:1;
      uint64_t FWT_COLLISION_INTR:1;
      uint64_t HWT_COLLISION_INTR:1;
      uint64_t OVERLOAD_INTR:1;
      uint64_t SATURATE_INTR:1;
      uint64_t ACC_THRESH_INTR:1;
      uint64_t RANGE_INTR:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_SET:1;
      uint64_t OVERFLOW_SET:1;
      uint64_t FWT_COLLISION_SET:1;
      uint64_t HWT_COLLISION_SET:1;
      uint64_t OVERLOAD_SET:1;
      uint64_t SATURATE_SET:1;
      uint64_t ACC_THRESH_SET:1;
      uint64_t RANGE_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASK:1;
      uint64_t OVERFLOW_MASK:1;
      uint64_t FWT_COLLISION_MASK:1;
      uint64_t HWT_COLLISION_MASK:1;
      uint64_t OVERLOAD_MASK:1;
      uint64_t SATURATE_MASK:1;
      uint64_t ACC_THRESH_MASK:1;
      uint64_t RANGE_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DATA_VAL_MASKED:1;
      uint64_t OVERFLOW_MASKED:1;
      uint64_t FWT_COLLISION_MASKED:1;
      uint64_t HWT_COLLSION_MASKED:1;
      uint64_t OVERLOAD_MASKED:1;
      uint64_t SATURATE_MASKED:1;
      uint64_t ACC_THRESH_MASKED:1;
      uint64_t RANGE_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_MASKED;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OVERLOAD_CAUSE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

};

#define PACSS_DCHAN_3 (*(volatile struct PACSS_DCHAN_3_tag *) 0x40330000)

struct PACSS_DCHAN_3_FCFG_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t COEF:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) COEF;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CVAL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CVAL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t TAP:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TAP;

};

#define PACSS_DCHAN_3_FCFG (*(volatile struct PACSS_DCHAN_3_FCFG_tag *) 0x40330100)

struct PACSS_ACHAN_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_EN:1;
      uint64_t PGA_EN:1;
      uint64_t BUF_EN:1;
      uint64_t REG_EN:1;
      uint64_t REF_EN:1;
      uint64_t INMUX_EN:1;
      uint64_t DMUX_EN:1;
      uint64_t CLKGEN_EN:1;
      uint64_t VCCA_RES_EN:1;
      uint64_t VDDA_RES_EN:1;
      uint64_t VCM_BUF_EN:1;
      uint64_t VREF_BUF_EN:1;
      uint64_t reservedSpace0:19;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACHAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIM_TR_SEL:2;
      uint64_t SYNC_PRIM_TR:1;
      uint64_t PRIM_TR_EN:1;
      uint64_t PEND_SEC_TR_SEL:2;
      uint64_t SYNC_SEC_TR:1;
      uint64_t PEND_SEC_TR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP_CNT:4;
      uint64_t reservedSpace0:4;
      uint64_t AAF_SHORT_R_CNT:8;
      uint64_t DEC_BLANK_CNT:8;
      uint64_t CH_CHOP_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t CIRCUIT_CHOP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHOP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_PWR_LEVELS:2;
      uint64_t reservedSpace0:6;
      uint64_t PGA_CHOP_EN:1;
      uint64_t PGA_IDAC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGA_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER1:3;
      uint64_t reservedSpace0:1;
      uint64_t POWER2_3:3;
      uint64_t reservedSpace1:1;
      uint64_t POWER_COMP:2;
      uint64_t reservedSpace2:2;
      uint64_t POWER_SUM:3;
      uint64_t reservedSpace3:1;
      uint64_t OPAMP1_BW:4;
      uint64_t reservedSpace4:4;
      uint64_t MOD_FCHOP:3;
      uint64_t MOD_CHOP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QLEV:2;
      uint64_t NONOV:2;
      uint64_t reservedSpace0:4;
      uint64_t ODET_TH:5;
      uint64_t OD_EN:1;
      uint64_t DPMODE:2;
      uint64_t DP_FCHOP:3;
      uint64_t DP_CHOP_EN:1;
      uint64_t RESET1_EN:1;
      uint64_t RESET2_EN:1;
      uint64_t RESET3_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t MX_DOUT:2;
      uint64_t reservedSpace2:3;
      uint64_t SIGN:1;
      uint64_t AAF_CHOP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPATH_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF_PWR_LEVELS:2;
      uint64_t reservedSpace0:2;
      uint64_t BUF_CHOP_EN:1;
      uint64_t BUF_IDAC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF_CTL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VPOS_PWR_MODE:3;
      uint64_t VPOS_BYPASS_EN:1;
      uint64_t VNEG_PWR_MODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CLOCK_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUMP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREF_PWR:2;
      uint64_t VCM_PWR:2;
      uint64_t VCM_SEL:2;
      uint64_t VREF_QTZ_SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t VREFH_SEL:3;
      uint64_t reservedSpace1:1;
      uint64_t VREFL_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REF_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_PRIM:1;
      uint64_t reservedSpace0:7;
      uint64_t PEND_SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) START;

};

#define PACSS_ACHAN_0 (*(volatile struct PACSS_ACHAN_0_tag *) 0x40340000)

struct PACSS_ACHAN_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t MOD_EN:1;
      uint64_t PGA_EN:1;
      uint64_t BUF_EN:1;
      uint64_t REG_EN:1;
      uint64_t REF_EN:1;
      uint64_t INMUX_EN:1;
      uint64_t DMUX_EN:1;
      uint64_t CLKGEN_EN:1;
      uint64_t VCCA_RES_EN:1;
      uint64_t VDDA_RES_EN:1;
      uint64_t VCM_BUF_EN:1;
      uint64_t VREF_BUF_EN:1;
      uint64_t reservedSpace0:19;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) ACHAN_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PRIM_TR_SEL:2;
      uint64_t SYNC_PRIM_TR:1;
      uint64_t PRIM_TR_EN:1;
      uint64_t PEND_SEC_TR_SEL:2;
      uint64_t SYNC_SEC_TR:1;
      uint64_t PEND_SEC_TR_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TR_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SMP_CNT:4;
      uint64_t reservedSpace0:4;
      uint64_t AAF_SHORT_R_CNT:8;
      uint64_t DEC_BLANK_CNT:8;
      uint64_t CH_CHOP_EN:1;
      uint64_t reservedSpace1:3;
      uint64_t CIRCUIT_CHOP:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) CHOP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_PWR_LEVELS:2;
      uint64_t reservedSpace0:6;
      uint64_t PGA_CHOP_EN:1;
      uint64_t PGA_IDAC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PGA_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t POWER1:3;
      uint64_t reservedSpace0:1;
      uint64_t POWER2_3:3;
      uint64_t reservedSpace1:1;
      uint64_t POWER_COMP:2;
      uint64_t reservedSpace2:2;
      uint64_t POWER_SUM:3;
      uint64_t reservedSpace3:1;
      uint64_t OPAMP1_BW:4;
      uint64_t reservedSpace4:4;
      uint64_t MOD_FCHOP:3;
      uint64_t MOD_CHOP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MOD_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t QLEV:2;
      uint64_t NONOV:2;
      uint64_t reservedSpace0:4;
      uint64_t ODET_TH:5;
      uint64_t OD_EN:1;
      uint64_t DPMODE:2;
      uint64_t DP_FCHOP:3;
      uint64_t DP_CHOP_EN:1;
      uint64_t RESET1_EN:1;
      uint64_t RESET2_EN:1;
      uint64_t RESET3_EN:1;
      uint64_t reservedSpace1:1;
      uint64_t MX_DOUT:2;
      uint64_t reservedSpace2:3;
      uint64_t SIGN:1;
      uint64_t AAF_CHOP_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) DPATH_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t BUF_PWR_LEVELS:2;
      uint64_t reservedSpace0:2;
      uint64_t BUF_CHOP_EN:1;
      uint64_t BUF_IDAC_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) BUF_CTL;

  uint8_t res0[4];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VPOS_PWR_MODE:3;
      uint64_t VPOS_BYPASS_EN:1;
      uint64_t VNEG_PWR_MODE:2;
      uint64_t reservedSpace0:2;
      uint64_t CLOCK_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PUMP_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t VREF_PWR:2;
      uint64_t VCM_PWR:2;
      uint64_t VCM_SEL:2;
      uint64_t VREF_QTZ_SEL:1;
      uint64_t reservedSpace0:1;
      uint64_t VREFH_SEL:3;
      uint64_t reservedSpace1:1;
      uint64_t VREFL_SEL:2;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) REF_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_PRIM:1;
      uint64_t reservedSpace0:7;
      uint64_t PEND_SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) START;

};

#define PACSS_ACHAN_1 (*(volatile struct PACSS_ACHAN_1_tag *) 0x40350000)

struct PACSS_MMIO_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t RSVD0:2;
      uint64_t AGC_EN:1;
      uint64_t SEQ_EN:1;
      uint64_t TMPS_EN:1;
      uint64_t reservedSpace0:3;
      uint64_t HVDIVG_MUX_SEL:2;
      uint64_t reservedSpace1:21;
      uint64_t ENABLE:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PACSS_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCH_DR_EN:1;
      uint64_t RSVD1:1;
      uint64_t RSVD2:1;
      uint64_t reservedSpace0:1;
      uint64_t DR:7;
      uint64_t reservedSpace1:1;
      uint64_t DR2:5;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) SEQ_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LO_THRESH:8;
      uint64_t HI_THRESH:8;
      uint64_t INIT_LVL:4;
      uint64_t MIN_LVL:4;
      uint64_t MAX_LVL:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AGC0_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FAST_DR:5;
      uint64_t reservedSpace0:2;
      uint64_t AAF_BLANK_MODE:1;
      uint64_t AAF_BLANK_CNT:8;
      uint64_t DEC_BLANK_CNT:8;
      uint64_t SCALER_BLANK_CNT:8;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AGC1_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t IREF_SEL:1;
      uint64_t reservedSpace0:3;
      uint64_t IREF_UNIT:4;
      uint64_t LOAD_MODE:2;
      uint64_t reservedSpace1:2;
      uint64_t BIPOLAR_UNIT:4;
      uint64_t reservedSpace2:4;
      uint64_t AMUXA_SEL:1;
      uint64_t AMUXB_SEL:1;
      uint64_t VTEMP_SUP_SEL:1;
      uint64_t VTEMP_SEL:1;
      uint64_t VTEMP_RET_SEL:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) TMPS_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t START_PRIM:1;
      uint64_t reservedSpace0:7;
      uint64_t PEND_SEC:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) START;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t DCH0_INT:1;
      uint64_t DCH1_INT:1;
      uint64_t DCH2_INT:1;
      uint64_t DCH3_INT:1;
      uint64_t PILO_INT:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) INTR_CAUSE;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SEQ_BUSY:2;
      uint64_t reservedSpace0:2;
      uint64_t AGC_CURR_CH:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) STATUS;

  uint8_t res0[736];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t LEAKC_DIS:1;
      uint64_t CTAT_SEL:1;
      uint64_t reservedSpace0:2;
      uint64_t CTAT_SW:1;
      uint64_t reservedSpace1:11;
      uint64_t ADFT_SEL:2;
      uint64_t reservedSpace2:13;
      uint64_t IMO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPOSC_CTL;

  uint8_t res1[252];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:16;
      uint64_t DFT_SEL:2;
      uint64_t reservedSpace1:2;
      uint64_t DFT_IVREFP_ENB:1;
      uint64_t DFT_IVREFC_ENB:1;
      uint64_t DFT_IVCP_ENB:1;
      uint64_t DFT_IVCC_ENB:1;
      uint64_t DFT_EN:1;
      uint64_t reservedSpace2:5;
      uint64_t WAKEUP_TIMER_EN:1;
      uint64_t ILO_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PILO_CTL;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_COUNT:32;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PILO_TIMER;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PILO_INTR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_SET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PILO_INTR_SET;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_MASK:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PILO_INTR_MASK;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t WAKEUP_MASKED:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) PILO_INTR_MASKED;

  uint8_t res2[232];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t CHOP_DIS:1;
      uint64_t CHOP_CLK_SEL:1;
      uint64_t CHOP_POS:1;
      uint64_t reservedSpace0:1;
      uint64_t NL_COREC_DIS:1;
      uint64_t SEL_PHC:1;
      uint64_t reservedSpace1:10;
      uint64_t ADFT_MODE:3;
      uint64_t reservedSpace2:12;
      uint64_t VBG_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) HPBGR_CTL;

  uint8_t res3[256];

  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:30;
      uint64_t LP_MODE:1;
      uint64_t AREF_EN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) AREF1_CTL;

};

#define PACSS_MMIO (*(volatile struct PACSS_MMIO_tag *) 0x403f0000)

struct PACSS_MMIO_GAINLVL_STRUCT_0_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_0 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_0_tag *) 0x403f0100)

struct PACSS_MMIO_GAINLVL_STRUCT_1_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_1 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_1_tag *) 0x403f0110)

struct PACSS_MMIO_GAINLVL_STRUCT_2_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_2 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_2_tag *) 0x403f0120)

struct PACSS_MMIO_GAINLVL_STRUCT_3_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_3 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_3_tag *) 0x403f0130)

struct PACSS_MMIO_GAINLVL_STRUCT_4_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_4 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_4_tag *) 0x403f0140)

struct PACSS_MMIO_GAINLVL_STRUCT_5_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_5 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_5_tag *) 0x403f0150)

struct PACSS_MMIO_GAINLVL_STRUCT_6_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_6 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_6_tag *) 0x403f0160)

struct PACSS_MMIO_GAINLVL_STRUCT_7_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_7 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_7_tag *) 0x403f0170)

struct PACSS_MMIO_GAINLVL_STRUCT_8_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_8 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_8_tag *) 0x403f0180)

struct PACSS_MMIO_GAINLVL_STRUCT_9_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t PGA_GAIN:3;
      uint64_t reservedSpace0:1;
      uint64_t SHIFT1:4;
      uint64_t reservedSpace1:8;
      uint64_t DACCAP:6;
      uint64_t reservedSpace2:2;
      uint64_t IPCAP1:7;
      uint64_t IPCAP1OFFSET:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t SUMCAPIN:5;
      uint64_t reservedSpace0:3;
      uint64_t SUMCAP1:3;
      uint64_t reservedSpace1:1;
      uint64_t SUMCAP2:3;
      uint64_t reservedSpace2:1;
      uint64_t SUMCAP3:3;
      uint64_t reservedSpace3:1;
      uint64_t SUMCAPFB:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_CFG1;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t OCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) OFST_COR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t GCOR:16;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) GAIN_COR;

};

#define PACSS_MMIO_GAINLVL_STRUCT_9 (*(volatile struct PACSS_MMIO_GAINLVL_STRUCT_9_tag *) 0x403f0190)

