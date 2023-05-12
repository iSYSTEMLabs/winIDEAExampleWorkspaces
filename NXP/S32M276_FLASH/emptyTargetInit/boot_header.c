/* ****************************************************************************
 * (c) Copyright NXP 2020
 *  All Rights Reserved
 * ****************************************************************************
 *!\file    boot_header.c
 *!\brief   This file contains boot header structure definition
 *
 * TYPE: Source File
 * ****************************************************************************
 * PURPOSE:  This file contains boot header structure definition
 * ***************************************************************************/
#include "S32M276.h"


/******************************************************************************
 * Boot header
 ******************************************************************************/
typedef const struct
{
  const unsigned int  Header;                   /* Header of boot header structure */
  const unsigned int  BootConfig;               /* Boot Configuration Word */
  const unsigned int  Reserved3;                /* Reserved */
  const unsigned int* CM7_0_StartAddress;       /* Start address of application on CM7_0 core */
  const unsigned int  Reserved4;                /* Reserved */
  const unsigned int* CM7_1_StartAddress;       /* Start address of application on CM7_1 core */
  const unsigned int  Reserved5;                /* Reserved */
  const unsigned int* CM7_2_StartAddress;       /* Start address of application on CM7_2 core */
  const unsigned int* XRDCConfig_StartAddress;  /* Address of XRDC configuration data */
  const unsigned int* LCConfig;                 /* Address of LC configuration */
  const unsigned int  Reserved1;                /* Reserved */
  const unsigned int* HseFwHeader_StartAddress; /* Start address of HSE-FW image */
  const unsigned char   Reserved[192];            /* Reserved for future use */
  const unsigned char   CMAC[16];                 /* CMAC */
} boot_header_t;

/******************************************************************************
 * XRDC Configuration
 ******************************************************************************/
typedef struct
{
  unsigned int  Header;
  unsigned int  MDAConfig_ProcessorCore0;
  unsigned int  MDAConfig_eDMA_AHB;
  unsigned int  MDAConfig_TestPort_AHB;
  unsigned int  MDAConfig_ProcessorCore1;
  unsigned int  MDAConfig_ENET_AHB;
  unsigned int  Reserved0[10];
  unsigned int  PDAC[14][2];
  unsigned int  Reserved2[20];
  unsigned char   CMAC[16];
} xrdc_config_t;

/******************************************************************************
 * LC Configuration
 ******************************************************************************/
typedef unsigned int lc_config_t;

/******************************************************************************
 * LC Configuration
 ******************************************************************************/
const lc_config_t lc_config = 0xffffffff;

/******************************************************************************
 * XRDC Configuration
 ******************************************************************************/
const xrdc_config_t xrdc_config =
{
  .Header = 0xffffffff
};

const boot_header_t __attribute__((section (".boot_header"))) boot_header = {
  .Header = 0x5AA55AA5,
  .BootConfig = 1,
  .CM7_0_StartAddress = (const unsigned int*)CM7_0_START_ADDRESS,
  .XRDCConfig_StartAddress  = (const unsigned int*)&xrdc_config,
  .LCConfig                 = (const unsigned int*)&lc_config,
  .HseFwHeader_StartAddress = (const unsigned int*)0U,
};
