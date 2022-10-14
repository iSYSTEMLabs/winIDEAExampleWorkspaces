#include "stm32h747xx.h"

#define CORE_CM7

#define PWR_SUPPLY_CONFIG_MASK (PWR_CR3_SMPSLEVEL|PWR_CR3_SMPSEXTHP|PWR_CR3_SMPSEN|PWR_CR3_LDOEN|PWR_CR3_BYPASS)
#define PWR_D3_DOMAIN_STOP (0x00000000U)
#define PWR_D3_DOMAIN_RUN  (0x00000800U)
#define PWR_D3CR_VOS1 (PWR_D3CR_VOS_0 | PWR_D3CR_VOS_1)

#define RCC_CLOCKTYPE_SYSCLK           (0x00000001U)
#define RCC_CLOCKTYPE_HCLK             (0x00000002U)
#define RCC_CLOCKTYPE_D1PCLK1          (0x00000004U)
#define RCC_CLOCKTYPE_PCLK1            (0x00000008U)
#define RCC_CLOCKTYPE_PCLK2            (0x00000010U)
#define RCC_CLOCKTYPE_D3PCLK1          (0x00000020U)

#define VTOR        (*(unsigned volatile long*) 0xE000ED08)

extern void startCores();
extern void InterruptRoutine();
extern volatile long unsigned int _scb_vtor;


void initPWR()
{
  __IO uint32_t tmpreg = 0x00;
  
  // voltage scaling to allow for maximum frequncy - Vcore boost sequence
  // config supply to be LDO
  MODIFY_REG (PWR->CR3,(PWR_CR3_BYPASS|PWR_CR3_LDOEN|PWR_CR3_SMPSEN),PWR_CR3_SMPSEN);
  
  // set voltage scaling to VOS1
  CLEAR_BIT(SYSCFG->PWRCR, SYSCFG_PWRCR_ODEN);
  tmpreg = READ_BIT(SYSCFG->PWRCR, SYSCFG_PWRCR_ODEN);
  tmpreg=0x00;
  tmpreg=PWR_D3CR_VOS1;
  MODIFY_REG(PWR->D3CR, PWR_D3CR_VOS,PWR_D3CR_VOS1);
  while(READ_BIT(PWR->D3CR, PWR_D3CR_VOS)!=PWR_D3CR_VOS1){}
  
  return;
}

void initRCC()
{
  __IO uint32_t tmpreg = 0x00;
  
  // turn on HSI 8MHz and wait for it to stabilize
  MODIFY_REG(RCC->CR,RCC_CR_HSIDIV,RCC_CR_HSIDIV_8);
  SET_BIT(RCC->CR,RCC_CR_HSION);
  while(!(RCC->CR & RCC_CR_HSIRDY)){}
  
  // enable peripheral clock
  SET_BIT(RCC->APB4ENR,RCC_APB4ENR_SYSCFGEN);
  tmpreg=READ_BIT(RCC->APB4ENR,RCC_APB4ENR_SYSCFGEN);
  tmpreg=0x00;
  
  // prepare voltage overdrive to support max Freq with SMPS
  initPWR();
  
  /// configure PLL1 
  // select HSI as PLL1 input
  CLEAR_BIT(RCC->PLLCKSELR,RCC_PLLCKSELR_PLLSRC);
  SET_BIT(RCC->PLLCKSELR,RCC_PLLCKSELR_PLLSRC_HSI);
  
  // set prescaler to 4 // ref1_ck = 8 /4 = 2 MHz
  MODIFY_REG(RCC->PLLCKSELR,RCC_PLLCKSELR_DIVM1,RCC_PLLCKSELR_DIVM1_2);
  
  // enable dividers DIVQ-CPU2 and peripherals 200MHz, DIVP - CPU1 400MHz
  SET_BIT(RCC->PLLCFGR,RCC_PLLCFGR_DIVP1EN);
  SET_BIT(RCC->PLLCFGR,RCC_PLLCFGR_DIVQ1EN);
  SET_BIT(RCC->PLLCFGR,RCC_PLLCFGR_DIVR1EN);

  // set input frequency range: The PLL1 input (ref1_ck) clock range frequency is between 2 and 4 MHz
  MODIFY_REG(RCC->PLLCFGR,RCC_PLLCFGR_PLL1RGE,RCC_PLLCFGR_PLL1RGE_1);
  // set VCO range and disable fractional latch
  CLEAR_BIT(RCC->PLLCFGR,RCC_PLLCFGR_PLL1VCOSEL);
  CLEAR_BIT(RCC->PLLCFGR,RCC_PLLCFGR_PLL1FRACEN);
  
  // configure PLL1 divider DIVQ, DIVP and DIVN
    // DIVN = 30
  tmpreg=(400<<RCC_PLL1DIVR_N1_Pos)&RCC_PLL1DIVR_N1;
  MODIFY_REG(RCC->PLL1DIVR,RCC_PLL1DIVR_N1,tmpreg);
    // DIVP = 2
  tmpreg=(1<<RCC_PLL1DIVR_P1_Pos)&RCC_PLL1DIVR_P1;
  MODIFY_REG(RCC->PLL1DIVR,RCC_PLL1DIVR_P1,tmpreg);
    // DIVR = 8
  tmpreg=(7<<RCC_PLL1DIVR_R1_Pos)&RCC_PLL1DIVR_R1;
  MODIFY_REG(RCC->PLL1DIVR,RCC_PLL1DIVR_R1,tmpreg);
    // DIVQ = 4
  tmpreg=(3<<RCC_PLL1DIVR_Q1_Pos)&RCC_PLL1DIVR_Q1;
  MODIFY_REG(RCC->PLL1DIVR,RCC_PLL1DIVR_Q1,tmpreg);
  
  
  // turn on PLL1, wait to stabilize
  SET_BIT(RCC->CR,RCC_CR_PLL1ON);
  while(!READ_BIT(RCC->CR,RCC_CR_PLL1RDY));
  
  // beacuse of maximum frequency with VOS1, 2 wait states are needed 
  // for flash read operations
  CLEAR_BIT(FLASH->ACR,FLASH_ACR_LATENCY);
  SET_BIT(FLASH->ACR,FLASH_ACR_LATENCY_2WS);
  CLEAR_BIT(FLASH->ACR,FLASH_ACR_WRHIGHFREQ);
  SET_BIT(FLASH->ACR,FLASH_ACR_WRHIGHFREQ_1);
  
  // configuring clk source and bus freq dividers
  // D1 clk (derived from sys_ck) not divided, 400MHz
  MODIFY_REG(RCC->D1CFGR,RCC_D1CFGR_D1CPRE,RCC_D1CFGR_D1CPRE_DIV1);
  // D1: AXI and AHB3, D2 and D3 clk (from sys_ck) divided by 2, 200MHz
  MODIFY_REG(RCC->D1CFGR,RCC_D1CFGR_HPRE,RCC_D1CFGR_HPRE_DIV2);
  // APB3 clk (from D2 and D3) divided by 2, 100MHz
  MODIFY_REG(RCC->D1CFGR,RCC_D1CFGR_D1PPRE,RCC_D1CFGR_D1PPRE_DIV2);
  // APB1 (from D2 and D3) clk divided by 2, 100MHz
  MODIFY_REG(RCC->D2CFGR,RCC_D2CFGR_D2PPRE1,RCC_D2CFGR_D2PPRE1_DIV2);
  // APB2 (from D2 and D3) clk divided by 2, 100MHz
  MODIFY_REG(RCC->D2CFGR,RCC_D2CFGR_D2PPRE2,RCC_D2CFGR_D2PPRE2_DIV2);
  // APB3 (from D2 and D3) clk divided by 2, 100MHz
  MODIFY_REG(RCC->D3CFGR,RCC_D3CFGR_D3PPRE,RCC_D3CFGR_D3PPRE_DIV2);
  
  // select PLL1 as sys_clk, wait for the change to take
  MODIFY_REG(RCC->CFGR,RCC_CFGR_SW,RCC_CFGR_SW_PLL1);
  while(READ_BIT(RCC->CFGR,RCC_CFGR_SWS)!= RCC_CFGR_SWS_PLL1);
}


void targetEnableInterrupts(void)
{
  SYST_CSR = 0x7;
}


void initSysTick()
{
  // Rest config
  SYST_CSR = 0x0;
  
  SYST_RVR = 401500;
  SYST_CVR = 0x0;
  
  // Select clksrc
  SYST_CSR = 0x4;
}

void TimerInterruptHandler()
{
  InterruptRoutine();
}

void initVector(void)
{ 
  // use a symbol, not absolute address if possible
  VTOR = (volatile unsigned long int)&_scb_vtor;
}

void targetInit(void)
{
  #ifndef EMPTY_TARGET_INIT

  for(int i= 0; i<1000; i++);

  uint8_t tmp=0;
  initRCC();
  initVector();
  initSysTick();
  targetEnableInterrupts();

  #endif /* EMPTY_TARGET_INIT */
}


void disableWatchdog()
{
}
