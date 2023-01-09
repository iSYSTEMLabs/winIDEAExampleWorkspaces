#ifndef __S32K344_H__
#define __S32K344_H__

#define CM7_0_START_ADDRESS 0x00400100
#define CM7_2_START_ADDRESS 0x00417900


#define TCD0_CITER_ELINKNO      (*(unsigned short volatile*)0x40210036)
#define TCD0_BITER_ELINKNO      (*(unsigned short volatile*)0x4021003E)
#define TCD0_NBYTES_MLOFFNO     (*(unsigned long volatile*)0x40210028)
#define TCD0_SADDR              (*(unsigned long volatile*)0x40210020)
#define TCD0_SOFF               (*(unsigned short volatile*)0x40210024)
#define TCD0_ATTR               (*(unsigned short volatile*)0x40210026)
#define TCD0_SLAST_SDA          (*(unsigned long volatile*)0x4021002C)
#define TCD0_DADDR              (*(unsigned long volatile*)0x40210030)
#define TCD0_DOFF               (*(unsigned short volatile*)0x40210034)
#define TCD0_DLAST_SGA          (*(unsigned long volatile*)0x40210038)
#define TCD0_CSR                (*(unsigned short volatile*)0x4021003C)

#define ITM_BASE_ADDRESS (0xE0000000UL)
#define memW32(address) (*(unsigned long*)(address))
#define memW16(address) (*(unsigned short*)(address))
#define memW8(address) (*(unsigned char*)(address))

/* Core boot registers */
#define PRTN0_CORE1_PCONF (*(unsigned long volatile*)0x402DC160)
#define PRTN0_CORE1_ADDR  (*(unsigned long volatile*)0x402DC16C)
#define PRTN0_CORE1_PUPD  (*(unsigned long volatile*)0x402DC164)

/* MC_ME registers */
#define  MC_ME_PRTN1_COFB0_CLKEN_ALL_ON       0xB1E0FFF8  //Partition 1 Set 0 - enable all clocks
#define  MC_ME_PRTN1_COFB1_CLKEN_ALL_ON       0x812AA407  //Partition 1 Set 1 - enable all clocks
#define  MC_ME_PRTN1_COFB2_CLKEN_ALL_ON       0xBBF3FE7E  //Partition 1 Set 2 - enable all clocks
#define  MC_ME_PRTN1_COFB3_CLKEN_ALL_ON       0x00000141  //Partition 1 Set 3 - enable all clocks


/* Control registers */
#define CTRL_KEY         (*(unsigned long volatile*)0x402DC000)

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
#define MC_ME_PRTN1_COFB1_CLKEN_REG_ADR    (*(unsigned long volatile*)0x402DC334)
#define MC_ME_PRTN1_COFB2_CLKEN_REG_ADR    (*(unsigned long volatile*)0x402DC338)
#define MC_ME_PRTN1_COFB3_CLKEN_REG_ADR    (*(unsigned long volatile*)0x402DC33C)


/*GPIO registers*/
#define SIUL_MSCR150        (*(unsigned long volatile*)0x40290498)
#define SIUL_GPDO_1481_151  (*(unsigned long volatile*)0x40291394)

/*PIT 1 registers*/
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

#define NVIC_ISPR3          (*(unsigned long volatile*)0xE000E21C)


#define GPIO_PIN_MASK_150   (1 << 5)
#define INIT_GPIO_PIN_MASK_150   0x00210020


#endif    