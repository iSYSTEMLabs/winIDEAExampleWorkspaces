/* *********************************************************************
 * (c) Copyright NXP 2020
 *  All Rights Reserved
 * *********************************************************************
 *!\file    boot_header.h
 *!\brief   This file contains boot header structure declaration
 *
 * TYPE: Header File
 * *********************************************************************
 * PURPOSE:  This file contains boot header structure declaration
 * *********************************************************************/
 
/*	From: 	4.3 Structure definition of Boot Header (Image Vector Table)
	At: 	S32K344_BAF_DDTS_1.0.pdf
	
	05/26/2020	rev 1.0		Added the K3 Structure.
	
*/

#include "typedefs.h"

#ifndef BOOT_HEADER_H
#define BOOT_HEADER_H

#ifdef __cplusplus
extern "C" {
#endif

typedef const struct image_vector_table
{
	uint32_t 		Header; 					/*Header of IVT Structure */
	uint32_t 		BootConfig; 				/*Boot Configuration Word */
	const uint32_t 	Reserved3; 					/* Reserved */
	const uint32_t*	CM7_0_StartAddress; 		/*Start Address of Application on CM7_0 Core */
	const uint32_t 	Reserved4; 					/* Reserved */
	const uint32_t*	CM7_1_StartAddress; 		/*Start Address of Application on CM7_1 Core */
	const uint64_t 	Reserved5; 					/* Reserved */
	const uint32_t*	XRDCConfig_StartAddress; 	/*Start address of XRDC Configuration Data */
	const uint32_t*	LCConfig; 					/*Address of LC configuration Word */
	const uint32_t	Reserved1; 					/* Reserved */
	const uint32_t*	HseFwHeader_StartAddress; 	/* Start address of HSE FW Pink Header Image*/
	uint8_t 		Reserved[192]; 				/* Reserved for future use */
	uint8_t 		GMAC[16]; 					/*GMAC of the IVT. */
}boot_header_t;

#ifdef __cplusplus
}
#endif

#endif
