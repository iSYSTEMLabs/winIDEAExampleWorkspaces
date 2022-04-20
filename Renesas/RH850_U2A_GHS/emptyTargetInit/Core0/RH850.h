#ifndef __v850_u2a_h__
#define __v850_u2a_h__


void TimerInterruptHandler();
// 
#define MSR_OSTM   (*(unsigned volatile int *) 0xFF981180)  // Module standby register for OSTM
#define MSRKCPROT  (*(unsigned volatile int *) 0xFF981710)

// PBG20 #2 MSRKCPROT

// OS timer
#define OSTM0_base 0xFFBF0000
#define OSTM0CMP   (*(unsigned volatile int *) (OSTM0_base))         // Timer compare register
#define OSTM0TS    (*(unsigned volatile int *) (OSTM0_base + 0x14))  // Timer start trigger
#define OSTM0CTL   (*(unsigned volatile int *) (OSTM0_base + 0x20))  // Control register
#define OSTM0CNT   (*(unsigned volatile int *) (OSTM0_base + 0x4))   // Count register
#define OSTM0TT    (*(unsigned volatile int *) (OSTM0_base + 0x18))  // Count stop trigger

#define PBGPROT0_7 (*(unsigned volatile int *) 0xFFC7A338)
#define PBGPROT1_7 (*(unsigned volatile int *) 0xFFC7A33C)
#define PBGKCPROT  (*(unsigned volatile int *) 0xFFC7B018)


// Clock 

// PBG20 #2
#define PBG20_base FFDE0B00
#define PBG20PROT0_2 (*(unsigned volatile int *) 0xFFDE0B10)
#define PBG20PROT1_2 (*(unsigned volatile int *) 0xFFDE0B14)

#define PBG20KCPROT  (*(unsigned volatile int *) 0xFFDE1018)

#define CLKKCPROT1 (*(unsigned volatile int *) 0xFF980700)                               // Clock controller protection
#define CLKKCKEY   0xA5A5A501

#define PLLS       (*(unsigned volatile int *) 0xFF980004)  // PLL status register
#define CLKD_PLLC  (*(unsigned volatile int *) 0xFF980120)  // PLLO divider register
#define CLKD_PLLS  (*(unsigned volatile int *) 0xFF980128)  // PLL status 
#define CKSC_CPUC  (*(unsigned volatile int *) 0xFF980100)  // Clock source select
#define CKSC_CPUS  (*(unsigned volatile int *) 0xFF980108)  // Clock source status
#define CKSC_CPUS_CPUCLKSACT 0

#define PLLE       (*(unsigned volatile int *) 0xFF980000)  // PLL enable register

#define MOSCE      (*(unsigned volatile int *) 0xFF988000)  // Main oscilator enable
#define MOSCS      (*(unsigned volatile int *) 0xFF988004)  // Main oscilator status
#define MOSCSTPM   (*(unsigned volatile int *) 0xFF98800C)  // Main oscilator stop mask
#define MOSCSTPM_MOSCSTPMMSK 0
#define HSOSCSTPM  (*(unsigned volatile int *) 0xFF988104)  // HS oscilator stop mask
#define HSOSCSTPM_HSOSCSTPMSK 0

// GPIO 
#define PORT_base  (0xFFD90000)
#define P11        (*(unsigned volatile int *) (PORT_base + 0x40 * 11))       // Port register
#define PM11       (*(unsigned volatile int *) (PORT_base +0x10 + 0x40 * 11)) // Port mode register
  

// Interrupts
// EIC32 to EIC767: <INTC2_base> + 0000H + 02H × n (n = 32 to 767)
#define EIC199         (*(unsigned volatile short *) 0xFFF8018E)    //  OSTM0 interrupt register
#define INTC2GPROT_199 (*(unsigned volatile int *) 0xFFC6441C)
#define INTC2GKCPROT   (*(unsigned volatile int *) 0xFFC64018) 

#define INTC2GMPID0    (*(unsigned volatile int *) 0xFFC64040)

#define PBG00_BASE 0xFFC6B080
#define PBGERRSLV00_BASE 0xFFC6B000
#define PBGKCPROT0 (*(unsigned volatile int *) (PBGERRSLV00_BASE + 0x18))
#define PBGPROT0_0 (*(unsigned volatile int *) (0xFFC6B080))
#define PBGPROT0_1 (*(unsigned volatile int *) (0xFFC6B084))

//LPM
#define DMON_DMONTEST (*(unsigned volatile int *) (0xFF982900))
#define DMON_DMONTEST_RESDMON 0
#define STBCKCPROT (*(unsigned volatile int *) (0xFF981700))
#define STBCKCPROT_ENABLE 0xA5A5A501
#define STBC0PSC (*(unsigned volatile int *) (0xFF988C00))
#define STBC0PSC_STBC0DISTRG 1
#define STBC0STPT (*(unsigned volatile int *) (0xFF988C04))
#define STBC0STPT_STBC0STPTRG 0
#define CLMAKCPROT (*(unsigned volatile int *) (0xFF982700))
#define CLMATEST (*(unsigned volatile int *) (0xFF982700))

//RTC
#define RTCA0CTL0 (*(unsigned volatile char *) (0xFF997000))
#define RTCA0CTL0_SLSB 4
#define RTCA0CTL0_CEST 6
#define RTCA0CTL0_CE 7
#define RTCA0CTL1 (*(unsigned volatile char *) (0xFF997004))
#define RTCA0CTL1_EN1HZ 5
#define RTCA0CTL1_EN1S 3
#define RTCA0CTL1_CT 0
#define RTCA0CTL2 (*(unsigned volatile char *) (0xFF997008))
#define RTCA0CTL2_WSST 4
#define RTCA0SCMP (*(unsigned volatile int *) (0xFF99703C))
#define CKSC_ARTCAC (*(unsigned volatile int *) (0xFF988220))
#define CKSC_ARTCAC_ARTCASCSID 0
#define CKSC_ARTCAS (*(unsigned volatile int *) (0xFF988228))
#define WUF0_A2 (*(unsigned volatile int *) (0xFF98E020))
#define WUFMSK0_A2 (*(unsigned volatile int *) (0xFF98E024))
#define WUFMSK0_A2_RTC 11
#define WUFMSK1_A2 (*(unsigned volatile int *) (0xFF98E144))
#define WUFMSK1_A2_RTC 11
#define PBG20PROT0_10 (*(unsigned volatile int *) (0xFFDE0B50))
#define PBG20PROT0_10_SEC 7
#define PBG20PROT0_10_UM 4
#define PBG20PROT0_10_WG 1
#define PBG20PROT0_10_RG 0
#define PBG20PROT1_10 (*(unsigned volatile int *) (0xFFDE0B54))
#define PBG20KCPROT10 (*(unsigned volatile int *) (0xFFDE1018))
#define PBG20KCPROT10_ENABLE 0xA5A5A501
#define MSR_RTCA (*(unsigned volatile int *) (0xFF988E10))
#define MSR_RTCA_MS 0
#define MSR_RTCA_STPMSK 31
#define INTC2GPROT_654 (*(unsigned volatile int *) (0xFFC64B38))
#define EIC654 (*(unsigned volatile short *) (0xFFF8051C))


#endif
