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
#define GIOGCR0           *(unsigned volatile int*) 0xFFF7BC00
#define GIODIRA           *(unsigned volatile int*) 0xFFF7BC34
#define GIOPDRA           *(unsigned volatile int*) 0xFFF7BC48  
#define GIODSET           *(unsigned volatile int*) 0xFFF7BC40
#define GIODCLR           *(unsigned volatile int*) 0xFFF7BC44

#define FRDCNTL           *(unsigned volatile int*) 0xFFF87000
#define FBFALLBACK        *(unsigned volatile int*) 0xFFF87040
#define FSM_WR_ENA        *(unsigned volatile int*) 0xFFF87288
#define EEPROM_CONFIG     *(unsigned volatile int*) 0xFFF872B8

#define PLLCTL1           *(unsigned volatile int*) 0xFFFFFF70
#define PLLCTL2           *(unsigned volatile int*) 0xFFFFFF74
#define CSDISCLR          *(unsigned volatile int*) 0xFFFFFF38
#define CSVSTAT           *(unsigned volatile int*) 0xFFFFFF54
#define GHVSRC            *(unsigned volatile int*) 0xFFFFFF48
                                                                  
#define PSPWRDWNCLR0      *(unsigned volatile int*) 0xFFFFE0A0
#define PSPWRDWNCLR1      *(unsigned volatile int*) 0xFFFFE0A4
#define PSPWRDWNCLR2      *(unsigned volatile int*) 0xFFFFE0A8
#define PSPWRDWNCLR3      *(unsigned volatile int*) 0xFFFFE0AC
                                                               
#define CLKCNTL           *(unsigned volatile int*) 0xFFFFFFD0
#define RCLKSRC           *(unsigned volatile int*) 0xFFFFFF50
#define VCLKASRC          *(unsigned volatile int*) 0xFFFFFF4C
#define CLKTEST           *(unsigned volatile int*) 0xFFFFFF8C
#define ECPCLKFUN         *(unsigned volatile int*) 0xFFFFFF00
#define CLKCNTL           *(unsigned volatile int*) 0xFFFFFFD0

//rt SRamPerformances: readInBps=136022, writeInBps=130282
