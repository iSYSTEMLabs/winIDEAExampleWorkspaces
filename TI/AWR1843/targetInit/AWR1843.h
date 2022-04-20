#ifndef __AWR1843__
#define __AWR1843__
  
#define MSS_RCM_BASE    ((unsigned int) 0xFFFFFF00)
#define RTI_BASE        ((unsigned int) 0xFFFFFC00)
#define MSS_VIM_BASE    ((unsigned int) 0xFFFFFD00)
#define MSS_GIO         ((unsigned int) 0xFFF7BC00)

// MSS_RCM
#define SOFTRST2        (*(unsigned volatile int *) (MSS_RCM_BASE + 0x8))
#define CLKDIVCTL0      (*(unsigned volatile int *) (MSS_RCM_BASE + 0x18))  // Clock divider control register
#define CLKSRCSEL1      (*(unsigned volatile int *) (MSS_RCM_BASE + 0x44))  // Clock source select
#define MSS_RCM_KEY     (*(unsigned volatile int *) (MSS_RCM_BASE + 0xAC))

#define MEMINITSTART    (*(unsigned volatile int *) (MSS_RCM_BASE + 0x5C))
#define ESMGATE0        (*(unsigned volatile int *) (MSS_RCM_BASE + 0x90))
#define ESMGATE1        (*(unsigned volatile int *) (MSS_RCM_BASE + 0x94))
#define ESMGATE2        (*(unsigned volatile int *) (MSS_RCM_BASE + 0x98))
#define ESMGATE3        (*(unsigned volatile int *) (MSS_RCM_BASE + 0x9C))
#define ESMGATE4        (*(unsigned volatile int *) (MSS_RCM_BASE + 0xA0))

// RTI
#define RTIGCTRL        (*(unsigned volatile int *) (RTI_BASE))        // RTI global control register
#define RTIFRC0         (*(unsigned volatile int *) (RTI_BASE + 0x10)) 
#define RTICPUC0        (*(unsigned volatile int *) (RTI_BASE + 0x18)) // Prescaler counter compare value
#define RTICOMP0        (*(unsigned volatile int *) (RTI_BASE + 0x50)) // Counter compare register
#define RTIUDCP0        (*(unsigned volatile int *) (RTI_BASE + 0x54)) // Compare update register
#define RTISETINTENA    (*(unsigned volatile int *) (RTI_BASE + 0x80)) // RTI interrupt set enable register
#define RTICLEARINTENA  (*(unsigned volatile int *) (RTI_BASE + 0x84)) // RTI interrupt set enable register
#define RTIINTFLAG      (*(unsigned volatile int *) (RTI_BASE + 0x88)) // RTI interrupt flag register


// VIM
#define INTREQ0         (*(unsigned volatile int *) (MSS_VIM_BASE + 0x20)) // Pending interrupt read location register
#define REQENASET0      (*(unsigned volatile int *) (MSS_VIM_BASE + 0x30)) // Interrupt enable set register
#define ECCCTL          (*(unsigned volatile int *) (MSS_VIM_BASE + 0xF0))

#define REQENASET0UP    (*(unsigned volatile int *) (0xFFFFFE30))

#define CHANCTRL0       ((unsigned int) 0xFFFFFE80)

// GPIO MUX 
#define PADAK_CFG_REG   (*(unsigned volatile int *) (0xFFFFEA28))

#define PADAU_CFG_REG   (*(unsigned volatile int *) (0xFFFFEA50))

#define PADAV_CFG_REG   (*(unsigned volatile int *) (0xFFFFEA54))

#define PADAW_CFG_REG   (*(unsigned volatile int *) (0xFFFFEA58))

///////////
#define GPIO2           (*(unsigned volatile int *) 0xFFFFEA64)


// GPIO
#define GIOGCR          (*(unsigned volatile int *) (MSS_GIO))

#define GIODIRA         (*(unsigned volatile int *) (MSS_GIO + 0x34))
#define GIODOUTA        (*(unsigned volatile int *) (MSS_GIO + 0x3C))

#define GIODIRB         (*(unsigned volatile int *) (MSS_GIO + 0x54))
#define GIODOUTB        (*(unsigned volatile int *) (MSS_GIO + 0x5C))

#define GIODIRC         (*(unsigned volatile int *) (MSS_GIO + 0x74))
#define GIODOUTC        (*(unsigned volatile int *) (MSS_GIO + 0x7C))

#define GIODIRE   (*(unsigned volatile int *) (MSS_GIO + 0xB4))
#define GIODOUTE  (*(unsigned volatile int *) (MSS_GIO + 0xBC))

#endif //__AWR1843__
