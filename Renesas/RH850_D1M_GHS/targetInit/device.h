//============================================================================
// PROJECT: Example project
//============================================================================
//                           C O P Y R I G H T
//============================================================================
// Copyright (c) 2012 by Renesas Electronics GmbH. All rights reserved.
// Arcadiastr. 10
// D-40472 Duesseldorf
// Germany
//============================================================================
//
// Warranty disclaimer :
// Because the product(s) is licensed free of charge, there is no warranty of
// any kind whatsoever and expressly disclaimed and excluded by Renesas, either
// expressed or implied, including but not limited to those for non-
// infringement of intellectual property, merchantability and/or fitness for
// the particular purpose. Renesas shall not have any obligation to maintain,
// service or provide bug fixes for the supplied Product(s) and/or the
// Application.
//
// Each user is solely responsible for determining the appropriateness of
// using the product(s) and assumes all risks associated with its exercise
// of rights under this agreement, including, but not limited to the risks
// and costs of program errors, compliance with applicable laws, damage to
// or loss of data, programs or equipment, and unavailability or
// interruption of operations.
//
// Limitation of liability :
// In no event shall Renesas be liable to the user for any incidental,
// consequential, indirect, or punitive damage (including but not limited to
// lost profits) regardless of whether such liability is based on breach of
// contract, tort, strict liability, breach of warranties, failure of
// essential purpose or otherwise and even if advised of the possibility of
// such damages. Renesas shall not be liable for any services or products provided
// by third party vendors, developers or consultants identified or referred
// to the user by Renesas in connection with the product(s) and/or the
// application.
//
//============================================================================
//
// Device specific main header file to be included in all source files.
//
//============================================================================

#ifndef   DEVICE_H
#define   DEVICE_H

//============================================================================
// Includes
//============================================================================
#include "dr7f701432.dvf.h"
#include "icu_feret.h"
#include  <v800_ghs.h>

/*
//============================================================================
// Defines
//============================================================================
*/
#define protected_write(preg,pstatus,reg,value)   do{\
                                                  (preg)=0xa5u;\
                                                  (reg)=(value);\
                                                  (reg)=~(value);\
                                                  (reg)=(value);\
                                                  }while((pstatus)==1u)
                                                  
                                                  
void InterruptRoutine();

#endif  /* DEVICE_H */
