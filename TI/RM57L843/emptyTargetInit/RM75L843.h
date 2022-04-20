#define uint32_t unsigned int


extern void TimerInterruptHandler(void)  __attribute__ ((interrupt("IRQ")));
#define RTICOMPCTRL       *(unsigned volatile int*) 0xFFFFFC0C
#define RTIFRC0           *(unsigned volatile int*) 0xFFFFFC10
#define RTITBCTRL         *(unsigned volatile int*) 0xFFFFFC04 
#define RTIGCTRL          *(unsigned volatile int*) 0xFFFFFC00 
#define RTICPUC0          *(unsigned volatile int*) 0xFFFFFC18   
#define RTICOMP0          *(unsigned volatile int*) 0xFFFFFC50    
#define RTIUDCP0          *(unsigned volatile int*) 0xFFFFFC54  
#define RTISETINTENA      *(unsigned volatile int*) 0xFFFFFC80 
#define RTICLEARINTENA    *(unsigned volatile int*) 0xFFFFFC84  
#define RTIINTCLEARENABLE *(unsigned volatile int*) 0xFFFFFCAC 
#define RTIINTFLAG        *(unsigned volatile int*) 0xFFFFFC88 
                                                                  
#define REQENASET0        *(unsigned volatile int*) 0xFFFFFE30 
                                                               
#define CLKCNTL           *(unsigned volatile int*) 0xFFFFFFD0
#define GIODIRA           *(unsigned volatile int*) 0xFFF7BC34
#define GIOPDRA           *(unsigned volatile int*) 0xFFF7BC48  
#define GIODSET           *(unsigned volatile int*) 0xFFF7BC40
#define GIODCLR           *(unsigned volatile int*) 0xFFF7BC44

#define RTI_CUC     1000
#define RTI_CFRC    165
#define SETINT0     0


#define NR          7
#define PLL         0xA400
#define OD          0
#define HCLK        2
#define SPRING      0x1FF

/*GIO bits*/
#define PENA        8
#define GIO_RESET   0
#define GIOB6       6

/*GIO Registers*/
#define GIO_BASE    0xFFF7BC00
#define GIOGCR0     *(unsigned volatile int*) (GIO_BASE)
#define GIOBDIR     *(unsigned volatile int*) (GIO_BASE + 0x54)
#define GIOBPDR     *(unsigned volatile int*) (GIO_BASE + 0x68)
#define GIOBPDR     *(unsigned volatile int*) (GIO_BASE + 0x68)
#define GIOBDCLR    *(unsigned volatile int*) (GIO_BASE + 0x64)
#define GIOBDSET    *(unsigned volatile int*) (GIO_BASE + 0x60)

/*PCR bits*/
#define PCR_GIO     0

/*PCR registers*/
#define PPROTCLR2   *(unsigned volatile int*) 0xFFF780A8


/*PLL bits*/
#define CLRCLKSR_PLL      1
#define BPOS              29
#define CLRCLKSR_OSC      0
#define CLKSR0V_OSC       0
#define CLKSR0V_PLL       1
#define PLLMUL            0
#define REFCLKDIV         16
#define PLLDIV            24
#define GHVWAKE           24
#define HVLPM             16
#define GHVSRC_SEL        0
#define HCLK_PRESCALER    3
#define CLKSRC            0

/*PLL registers*/
#define PLL_BASE_ADDR     0xFFFFFF30
#define CSDIS             *(unsigned volatile int*) (PLL_BASE_ADDR + 0x00)
#define CSDISSET          *(unsigned volatile int*) (PLL_BASE_ADDR + 0x04)
#define CSDISCLR          *(unsigned volatile int*) (PLL_BASE_ADDR + 0x08)
#define CSVSTAT           *(unsigned volatile int*) (PLL_BASE_ADDR + 0x24)
#define PLLCTL1           *(unsigned volatile int*) (PLL_BASE_ADDR + 0x40)
#define PLLCTL2           *(unsigned volatile int*) (PLL_BASE_ADDR + 0x44)
#define PLLCTL3           *(unsigned volatile int*) 0xFFFFE100
#define GPREG1            *(unsigned volatile int*) 0xFFFFFFA0
#define GLBSTAT           *(unsigned volatile int*) 0xFFFFFFEC
#define CLKSLIP           *(unsigned volatile int*) 0xFFFFE170
#define SSWPLL1           *(unsigned volatile int*) 0xFFFFFF24
#define SSWPLL2           *(unsigned volatile int*) 0xFFFFFFEC
#define SSWPLL3           *(unsigned volatile int*) 0xFFFFFF2C
#define GHVSRC            *(unsigned volatile int*) 0xFFFFFF48
#define HCLKCNTL          *(unsigned volatile int*) 0xFFFFFF48
#define SETCLKSR          *(unsigned volatile int*) 0xFFFFFF34

/*RTI bits*/
#define COMPSEL0          0
#define INT0_MASK         0x01


/*RTI registers*/
#define RTIGCTRL          *(unsigned volatile int*) 0xFFFFFC00
#define RTITBCTRL         *(unsigned volatile int*) 0xFFFFFC04
#define RTICOMPCTRL       *(unsigned volatile int*) 0xFFFFFC0C
#define RTIFRC0           *(unsigned volatile int*) 0xFFFFFC10
#define RTIUC0            *(unsigned volatile int*) 0xFFFFFC14
#define RTICPUC0          *(unsigned volatile int*) 0xFFFFFC18
#define RTICOMP0          *(unsigned volatile int*) 0xFFFFFC50
#define RTISETINTENA      *(unsigned volatile int*) 0xFFFFFC80
#define RTIINTFLAG        *(unsigned volatile int*) 0xFFFFFC88

/*VIM bits*/
#define RTI_CMP0_INT      2

/*VIM registers*/
#define FIRQPR            *(unsigned volatile int*) 0xFFFFFE10
#define REQENASET0        *(unsigned volatile int*) 0xFFFFFE30
#define REQENACLR0        *(unsigned volatile int*) 0xFFFFFE40
#define ECCCTL            *(unsigned volatile int*) 0xFFFFFEF0
#define INTREQ0           *(unsigned volatile int*) 0xFFFFFE20
#define VIM_RAM_RTI_CMP0  *(unsigned volatile int*) 0xFFF8200C

/*Flash bits*/
#define RWAIT             8
#define EWAIT             16

/*Flash registers*/
#define FRDCNTL           *(unsigned volatile int*) 0xFFF87000
#define EEPROM_CONFIG     *(unsigned volatile int*) 0xFFF872B8 