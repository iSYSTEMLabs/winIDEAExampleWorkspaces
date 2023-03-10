
//sys tick
#define SYST_CSR (*(volatile unsigned int*)0xE000E010)
#define TICKINT 1
#define SYST_RVR (*(volatile unsigned int*)0xE000E014) 
#define SYST_CVR (*(volatile unsigned int*)0xE000E018)  


//GPIO toggle registers
#define GPIOA_PWREN (*(volatile unsigned int*)0x400A0800)
#define GPIOA_ENABLE_DISABLE 0
#define GPIOA_PWREN_KEY 24
#define DOESET31_0 (*(volatile unsigned int*)0x400A12D0)
#define DOESET31_0_DIO12 12
#define GPIOA_DOUTTGL30_0 (*(volatile unsigned int*)0x400A12B0)
#define GPIOA_DOUTTGL30_0_DIO12 12
#define PINCM12 (*(volatile unsigned int*)0x40428034)
#define PINCM12_PF 0
#define PINCM_CONNECTED 7
#define DIO12 0
