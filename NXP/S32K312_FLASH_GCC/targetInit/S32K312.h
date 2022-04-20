#include <stdint.h>
 
#ifndef __S32K312_h__
#define __S32K312_h__

#define CM7_0_START_ADDRESS 0x00401000
#define CM7_1_START_ADDRESS 0x00600400

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

/*Core boot registers*/
#define PRTN0_CORE1_PCONF (*(unsigned long volatile*)0x402DC160)
#define PRTN0_CORE1_ADDR  (*(unsigned long volatile*)0x402DC16C)
#define PRTN0_CORE1_PUPD  (*(unsigned long volatile*)0x402DC164)

/*Control registers*/
#define CTRL_KEY         (*(unsigned long volatile*)0x402DC000)

/*FXOSC registers*/
#define FXOSC_CTRL       (*(unsigned long volatile*)0x402D4000)
#define FXOSC_STAT       (*(unsigned long volatile*)0x402D4004)

/*MC_MU registers*/
#define PRTN0_STAT           (*(unsigned long volatile*)0x402DC108)
#define PRTN0_COFB1_CLKEN    (*(unsigned long volatile*)0x402DC134)
#define PRTN0_COFB1_STAT     (*(unsigned long volatile*)0x402DC114)

/*MUX registers*/
#define PCFS_SDUR             (*(unsigned long volatile*)0x402D8000)
#define PCFS_DIVC8            (*(unsigned long volatile*)0x402D8058)
#define PCFS_DIVE8            (*(unsigned long volatile*)0x402D805C)
#define PCFS_DIVS8            (*(unsigned long volatile*)0x402D8060)

#define MUX_0_CSC             (*(unsigned long volatile*)0x402D8300)
#define MUX_0_CSS             (*(unsigned long volatile*)0x402D8304)
#define MUX_0_DC_0            (*(unsigned long volatile*)0x402D8308)
#define MUX_0_DC_1            (*(unsigned long volatile*)0x402D830C)
#define MUX_0_DC_2            (*(unsigned long volatile*)0x402D8310)
#define MUX_0_DC_3            (*(unsigned long volatile*)0x402D8314)
#define MUX_0_DC_4            (*(unsigned long volatile*)0x402D8318)
#define MUX_0_DC_5            (*(unsigned long volatile*)0x402D831C)
#define MUX_0_DC_6            (*(unsigned long volatile*)0x402D8320)
#define MUX_0_DIV_TRIG_CTRL   (*(unsigned long volatile*)0x402D8334)
#define MUX_0_DIV_TRIG        (*(unsigned long volatile*)0x402D8338)

#define MUX_6_CSC             (*(unsigned long volatile*)0x402D8480)
#define MUX_6_CSS             (*(unsigned long volatile*)0x402D8484)
#define MUX_6_DC_0            (*(unsigned long volatile*)0x402D8488)
#define MUX_6_DIV_UPD_STAT    (*(unsigned long volatile*)0x402D84BC)

#define MUX_10_CSC        (*(unsigned long volatile*)0x402D8580)
#define MUX_10_CSS        (*(unsigned long volatile*)0x402D8584)

#define MUX_11_CSC        (*(unsigned long volatile*)0x402D85C0)
#define MUX_11_CSS        (*(unsigned long volatile*)0x402D85C4)
#define MUX_11_DC_0       (*(unsigned long volatile*)0x402D85C8)


/* Virt wrapper registers*/
#define REG_A159_144      (*(unsigned long volatile*)0x402A8024)

/*PLL registers*/
#define PLLCR             (*(unsigned long volatile*)0x402E0000)
#define PLLSR             (*(unsigned long volatile*)0x402E0004)
#define PLLDV             (*(unsigned long volatile*)0x402E0008)
#define PLLFM             (*(unsigned long volatile*)0x402E000C)
#define PLLFD             (*(unsigned long volatile*)0x402E0010)
#define PLLCAL2           (*(unsigned long volatile*)0x402E0018)
#define PLLODIV_0         (*(unsigned long volatile*)0x402E0080)
#define PLLODIV_1         (*(unsigned long volatile*)0x402E0084)

/*MC_ME registers*/
#define CTL_KEY             (*(unsigned long volatile*)0x402DC000)
#define PRTN1_PUPD          (*(unsigned long volatile*)0x402DC304)
#define PRTN1_COFB1_CLKEN   (*(unsigned long volatile*)0x402DC334)
#define PRTN1_COFB1_STAT    (*(unsigned long volatile*)0x402DC314)
#define PRTN1_PCONF         (*(unsigned long volatile*)0x402DC300)
#define PRTN1_COFB0_CLKEN   (*(unsigned long volatile*)0x402DC330)
#define PRTN1_COFB2_CLKEN   (*(unsigned long volatile*)0x402DC338)
#define PRTN2_COFB1_CLKEN   (*(unsigned long volatile*)0x402DC534)
#define PRTN2_COFB0_CLKEN   (*(unsigned long volatile*)0x402DC530)

#define  MC_ME_PRTN1_COFB0_CLKEN_ALL_ON       0xB1E0FFF8  //Partition 1 Set 0 - enable all clocks
#define  MC_ME_PRTN1_COFB1_CLKEN_ALL_ON       0x812AA407  //Partition 1 Set 1 - enable all clocks
#define  MC_ME_PRTN1_COFB2_CLKEN_ALL_ON       0xBBF3FE7E  //Partition 1 Set 2 - enable all clocks
#define  MC_ME_PRTN1_COFB3_CLKEN_ALL_ON       0x00000141  //Partition 1 Set 3 - enable all clocks

#define MC_ME_PRTN1_COFB0_CLKEN_REG_ADR    (*(unsigned long volatile*)0x402DC330)
#define MC_ME_PRTN1_COFB2_CLKEN_REG_ADR    (*(unsigned long volatile*)0x402DC338)
#define MC_ME_PRTN1_COFB3_CLKEN_REG_ADR    (*(unsigned long volatile*)0x402DC33C)


/*GPIO registers*/
#define SIUL_MSCR150        (*(unsigned long volatile*)0x40290498)
#define SIUL_GPDO_1481_151  (*(unsigned long volatile*)0x40291394)

/*PIT 0 registers*/
#define PIT_0_MCR           (*(unsigned long volatile*)0x400B0000)
#define PIT_0_RTI_LDVAL     (*(unsigned long volatile*)0x400B00F0)
#define PIT_0_RTI_CVAL      (*(unsigned long volatile*)0x400B00F4)
#define PIT_0_RTI_TCTRL     (*(unsigned long volatile*)0x400B00F8)
#define PIT_0_RTI_TFLG      (*(unsigned long volatile*)0x400B00FC)
#define PIT_0_LDVAL0        (*(unsigned long volatile*)0x400B0100)
#define PIT_0_CVAL0         (*(unsigned long volatile*)0x400B0104)
#define PIT_0_TCTRL0        (*(unsigned long volatile*)0x400B0108)
#define PIT_0_TFLG0         (*(unsigned long volatile*)0x400B010C)
#define PIT_0_LDVAL1        (*(unsigned long volatile*)0x400B0110)
#define PIT_0_CVAL1         (*(unsigned long volatile*)0x400B0114)
#define PIT_0_TCTRL1        (*(unsigned long volatile*)0x400B0118)
#define PIT_0_TFLG1         (*(unsigned long volatile*)0x400B011C)

/*PIT 1 registers*/
#define PIT_1_MCR           (*(unsigned long volatile*)0x400B4000)
#define PIT_1_RTI_LDVAL     (*(unsigned long volatile*)0x400B40F0)
#define PIT_1_RTI_CVAL      (*(unsigned long volatile*)0x400B40F4)
#define PIT_1_RTI_TCTRL     (*(unsigned long volatile*)0x400B40F8)
#define PIT_1_RTI_TFLG      (*(unsigned long volatile*)0x400B40FC)
#define PIT_1_LDVAL0        (*(unsigned long volatile*)0x400B4100)
#define PIT_1_CVAL0         (*(unsigned long volatile*)0x400B4104)
#define PIT_1_TCTRL0        (*(unsigned long volatile*)0x400B4108)
#define PIT_1_TFLG0         (*(unsigned long volatile*)0x400B410C)
#define PIT_1_LDVAL1        (*(unsigned long volatile*)0x400B4110)
#define PIT_1_CVAL1         (*(unsigned long volatile*)0x400B4114)
#define PIT_1_TCTRL1        (*(unsigned long volatile*)0x400B4118)
#define PIT_1_TFLG1         (*(unsigned long volatile*)0x400B411C)


/*PIT 2 registers*/
#define PIT_2_MCR           (*(unsigned long volatile*)0x402FC000)
#define PIT_2_RTI_LDVAL     (*(unsigned long volatile*)0x402FC0F0)
#define PIT_2_RTI_CVAL      (*(unsigned long volatile*)0x402FC0F4)
#define PIT_2_RTI_TCTRL     (*(unsigned long volatile*)0x402FC0F8)
#define PIT_2_RTI_TFLG      (*(unsigned long volatile*)0x402FC0FC)
#define PIT_2_LDVAL0        (*(unsigned long volatile*)0x402FC100)
#define PIT_2_CVAL0         (*(unsigned long volatile*)0x402FC104)
#define PIT_2_TCTRL0        (*(unsigned long volatile*)0x402FC108)
#define PIT_2_TFLG0         (*(unsigned long volatile*)0x402FC10C)
#define PIT_2_LDVAL1        (*(unsigned long volatile*)0x402FC110)
#define PIT_2_CVAL1         (*(unsigned long volatile*)0x402FC114)
#define PIT_2_TCTRL1        (*(unsigned long volatile*)0x402FC118)
#define PIT_2_TFLG1         (*(unsigned long volatile*)0x402FC11C)

/*NVIC registers*/
#define ICTR                (*(unsigned long volatile*)0xE000E004)
#define NVIC_ISER0          (*(unsigned long volatile*)0xE000E100)
#define NVIC_ISER1          (*(unsigned long volatile*)0xE000E104)
#define NVIC_ISER2          (*(unsigned long volatile*)0xE000E108)
#define NVIC_ISER3          (*(unsigned long volatile*)0xE000E10C)
#define NVIC_ISER4          (*(unsigned long volatile*)0xE000E110)
#define NVIC_ISER5          (*(unsigned long volatile*)0xE000E114)
#define NVIC_ISER6          (*(unsigned long volatile*)0xE000E118)
#define NVIC_ISER7          (*(unsigned long volatile*)0xE000E11C)
#define NVIC_ISER8          (*(unsigned long volatile*)0xE000E120)
#define NVIC_ISER9          (*(unsigned long volatile*)0xE000E124)
#define NVIC_ISER10         (*(unsigned long volatile*)0xE000E128)
#define NVIC_ISER11         (*(unsigned long volatile*)0xE000E12C)
#define NVIC_ISER12         (*(unsigned long volatile*)0xE000E130)
#define NVIC_ISER13         (*(unsigned long volatile*)0xE000E134)
#define NVIC_ISER14         (*(unsigned long volatile*)0xE000E138)
#define NVIC_ISER15         (*(unsigned long volatile*)0xE000E13C)

#define NVIC_ICER0          (*(unsigned long volatile*)0xE000E180)
#define NVIC_ICER1          (*(unsigned long volatile*)0xE000E184)
#define NVIC_ICER2          (*(unsigned long volatile*)0xE000E188)
#define NVIC_ICER3          (*(unsigned long volatile*)0xE000E18C)
#define NVIC_ICER4          (*(unsigned long volatile*)0xE000E190)
#define NVIC_ICER5          (*(unsigned long volatile*)0xE000E194)
#define NVIC_ICER6          (*(unsigned long volatile*)0xE000E198)
#define NVIC_ICER7          (*(unsigned long volatile*)0xE000E19C)

#define NVIC_ISPR0          (*(unsigned long volatile*)0xE000E200)
#define NVIC_ISPR1          (*(unsigned long volatile*)0xE000E204)
#define NVIC_ISPR2          (*(unsigned long volatile*)0xE000E208)
#define NVIC_ISPR3          (*(unsigned long volatile*)0xE000E20C)
#define NVIC_ISPR4          (*(unsigned long volatile*)0xE000E210)
#define NVIC_ISPR5          (*(unsigned long volatile*)0xE000E214)
#define NVIC_ISPR6          (*(unsigned long volatile*)0xE000E218)
#define NVIC_ISPR7          (*(unsigned long volatile*)0xE000E21C)

#define NVIC_ICPR0          (*(unsigned long volatile*)0xE000E280)
#define NVIC_ICPR1          (*(unsigned long volatile*)0xE000E284)
#define NVIC_ICPR2          (*(unsigned long volatile*)0xE000E288)
#define NVIC_ICPR3          (*(unsigned long volatile*)0xE000E28C)
#define NVIC_ICPR4          (*(unsigned long volatile*)0xE000E290)
#define NVIC_ICPR5          (*(unsigned long volatile*)0xE000E294)
#define NVIC_ICPR6          (*(unsigned long volatile*)0xE000E298)
#define NVIC_ICPR7          (*(unsigned long volatile*)0xE000E29C)

#define NVIC_IABR0          (*(unsigned long volatile*)0xE000E300)
#define NVIC_IABR1          (*(unsigned long volatile*)0xE000E304)
#define NVIC_IABR2          (*(unsigned long volatile*)0xE000E308)
#define NVIC_IABR3          (*(unsigned long volatile*)0xE000E30C)
#define NVIC_IABR4          (*(unsigned long volatile*)0xE000E310)
#define NVIC_IABR5          (*(unsigned long volatile*)0xE000E314)
#define NVIC_IABR6          (*(unsigned long volatile*)0xE000E318)
#define NVIC_IABR7          (*(unsigned long volatile*)0xE000E31C)

#define NVIC_IPR24           (*(unsigned long volatile*)0xE000E490)

#define GPIO_PIN_MASK_150   (1 << 5)
#define INIT_GPIO_PIN_MASK_150   0x00210020

/*S32K312_sfr*/
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

struct System_Control_Space_Floating_point_tag
{
  union
  {
    uint32_t R;
    struct
    {
      uint64_t LSPACT:1;
      uint64_t USER:1;
      uint64_t reservedSpace0:1;
      uint64_t THREAD:1;
      uint64_t HFRDY:1;
      uint64_t MMRDY:1;
      uint64_t BFRDY:1;
      uint64_t reservedSpace1:1;
      uint64_t MONRDY:1;
      uint64_t reservedSpace2:21;
      uint64_t LSPEN:1;
      uint64_t ASPEN:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPCCR;

  uint32_t FPCAR;
  union
  {
    uint32_t R;
    struct
    {
      uint64_t reservedSpace0:22;
      uint64_t RMode:2;
      uint64_t FZ:1;
      uint64_t DN:1;
      uint64_t AHP:1;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) FPDSCR;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t A_SIMD:4;
      uint64_t Single_precision:4;
      uint64_t Double_precision:4;
      uint64_t FP_0:4;
      uint64_t Divide:4;
      uint64_t Square_root:4;
      uint64_t Short_vectors:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR0;

  union
  {
    uint32_t R;
    struct
    {
      uint64_t FtZ:4;
      uint64_t D_NaN:4;
      uint64_t reservedSpace0:16;
      uint64_t FP_0:4;
      uint64_t FP_1:4;
    } __attribute__((packed)) B;
  } __attribute__((aligned(4))) MVFR1;

};


void initClock(void);
void initGPIO(void);
void initPIT(void);
void GPIOPinToggle(void);
void targetEnableInterrupts(void);
void targetDisableInterrupts(void);
void TimerInterruptHandler(void);

#endif    