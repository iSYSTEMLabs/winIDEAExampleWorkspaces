#include <stdint.h>

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

struct CRC_tag
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

#define CRC (*(volatile struct CRC_tag *) 0xfe000000)

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

