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
#include "S32K396.h"

/******************************************************************************
 * Boot header
 ******************************************************************************/
typedef const struct
{
  const unsigned int  Header;                   /* Header of boot header structure */
  const unsigned int  BootConfig;               /* Boot Configuration Word */
  const unsigned int  Reserved1;                /* Reserved */
  const unsigned int* CM7_0_StartAddress;       /* Start address of application on CM7_0 core */
  const unsigned int  Reserved2;                /* Reserved */
  const unsigned int* CM7_1_StartAddress;       /* Start address of application on CM7_1 core */
  const unsigned int  Reserved3;                /* Reserved */
  const unsigned int* CM7_2_StartAddress;       /* Start address of application on CM7_2 core */
  const unsigned int  Reserved4;                /* Reserved */
  const unsigned int* LCConfig;                 /* Address of LC configuration */
  const unsigned char Reserved[216];            /* Reserved for future use */
} boot_header_t;

/******************************************************************************
 * LC Configuration
 ******************************************************************************/
typedef unsigned int lc_config_t;

/******************************************************************************
 * LC Configuration
 ******************************************************************************/
const lc_config_t lc_config = 0xffffffff;


const boot_header_t __attribute__((section (".boot_header"))) boot_header = {
  .Header = 0x5AA55AA5,
  .BootConfig = 0x00000005,
  .CM7_0_StartAddress = (const unsigned int*)CM7_0_START_ADDRESS,
  .CM7_1_StartAddress = (const unsigned int*)CM7_1_START_ADDRESS,
  .CM7_2_StartAddress = (const unsigned int*)CM7_2_START_ADDRESS,
  .LCConfig                 = (const unsigned int*)&lc_config,
};
