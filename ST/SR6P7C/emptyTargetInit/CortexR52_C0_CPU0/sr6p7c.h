#define GIC0				(*(unsigned long volatile*) 0x704BC000)

#define RUN_PC3				(*(unsigned long volatile*) 0x710E808C)
#define RUN_PC3_RUN0		4

#define GICD_BASE 0x6D800000 

/*Due to missing GIC register descriptions in the datasheet, peripheral ID registers were used to determine 
  the base addresses of GIC*/
#define GICD_PIDR2 (*(unsigned long volatile*) (GICD_BASE + 0xFFE8))  

/*GIC distributor registers*/
#define GICD_CTRL (*(unsigned long volatile*) GICD_BASE) 
#define GICD_TYPER (*(unsigned long volatile*) (GICD_BASE + 0x04) 
#define GICD_IIDR (*(unsigned long volatile*) (GICD_BASE + 0x8) 
#define GICD_STATUSR (*(unsigned long volatile*) (GICD_BASE + 0x10) 
#define GICD_SETSPI_NSR (*(unsigned long volatile*) (GICD_BASE + 0x40) 
#define GICD_CLRSPI_NSR (*(unsigned long volatile*) (GICD_BASE + 0x48) 
#define GICD_SETSPI_SR (*(unsigned long volatile*) (GICD_BASE + 0x50) 
#define GICD_CLRSPI_SR (*(unsigned long volatile*) (GICD_BASE + 0x58) 

/*Interrupt Group Register for interrupts 255-287*/
#define GICD_IGROUP7 (*(unsigned long volatile*) (GICD_BASE + 0xA0)) 
#define GICD_IGROUP0 (*(unsigned long volatile*) (GICD_BASE + 0x84)) 

/*Interrupt set enable register for interrupts 255-287*/
#define GICD_ISENABLER7 (*(unsigned long volatile*) (GICD_BASE + 0x100 + 0x1C)) 
#define GICD_ISENABLER0 (*(unsigned long volatile*) (GICD_BASE + 0x104)) 

/*Interrupt clear enable register for interrupts 255-287*/
#define GICD_ICENABLER7 (*(unsigned long volatile*) (GICD_BASE + 0x180 + 0x1C))

/*Interrupt set pending register for interrupts 255-287*/
#define GICD_ISPENDR7 (*(unsigned long volatile*) (GICD_BASE + 0x200 + 0x1C)) 

/*Interrupt clear pending register for interrupts 255-287*/
#define GICD_ICPENDR7 (*(unsigned long volatile*) (GICD_BASE + 0x280 + 0x1C)) 

/*Interrupt set active register for interrupts 255-287*/
#define GICD_ISACTIVER7 (*(unsigned long volatile*) (GICD_BASE + 0x300 + 0x1C)) 

/*Interrupt clear active register for interrupts 255-287*/
#define GICD_ICACTIVER7 (*(unsigned long volatile*) (GICD_BASE + 0x380 + 0x1C)) 

/*Interrupt priority register for interrupts 283-287*/
#define GICD_IPRIORITYR70 (*(unsigned long volatile*) (GICD_BASE + 0x0400 + 0x100))
#define GICD_IPRIORITYR0 (*(unsigned long volatile*) (GICD_BASE + 0x0400))

/*Interrupt target core register for interrupts 283-287*/
#define GICD_ITARGETSR70 (*(unsigned long volatile*) (GICD_BASE + 0x0800 + 0x100))


#define GICD_CPENDSGIR0 (*(unsigned long volatile*) (GICD_BASE + 0x0F10))
#define GICD_CPENDSGIR1 (*(unsigned long volatile*) (GICD_BASE + 0x0F14))
#define GICD_CPENDSGIR2 (*(unsigned long volatile*) (GICD_BASE + 0x0F18))
#define GICD_CPENDSGIR3 (*(unsigned long volatile*) (GICD_BASE + 0x0F1C))

#define GICD_SPENDSGIR0 (*(unsigned long volatile*) (GICD_BASE + 0x0F20))
#define GICD_SPENDSGIR1 (*(unsigned long volatile*) (GICD_BASE + 0x0F24))
#define GICD_SPENDSGIR2 (*(unsigned long volatile*) (GICD_BASE + 0x0F28))
#define GICD_SPENDSGIR3 (*(unsigned long volatile*) (GICD_BASE + 0x0F2C))

/*GICD bits*/
#define INT_285 29
#define DS 6

#define GICR_RD_BASE 0x6D900000 
#define GICR_SGI_BASE 0x6D910000 

/*GIC redistributor registers*/
#define GICR_WAKER (*(unsigned long volatile*) (GICR_RD_BASE + 0x14)) 
#define GICR_PROPBASE (*(unsigned long long volatile*) (GICR_RD_BASE + 0x70)) 
#define GICR_PENDBASER (*(unsigned long long volatile*) (GICR_RD_BASE + 0x78)) 
#define GICR_ISENABLER0 (*(unsigned long long volatile*) (GICR_SGI_BASE + 0x100)) 
#define GICR_ISACTIVER0 (*(unsigned long long volatile*) (GICR_SGI_BASE + 0x300)) 