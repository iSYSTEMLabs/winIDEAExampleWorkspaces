
#define PFSSG0MEV0 (*(unsigned volatile int*)0xFFFEEC00)
#define BOOTCTRL (*(unsigned volatile int*)0xFFC58000)
#define BOOTCTRL_CPU2_EN 2

//void CPU_Init();   
//void targetInit();
//void targetEnableInterrupts();
//void targetDebug();
//void targetShutdown();

void InitClocks();
void InitOSTM();
void enableSecondCore();
__interrupt void INTTAUB0I0(void);
