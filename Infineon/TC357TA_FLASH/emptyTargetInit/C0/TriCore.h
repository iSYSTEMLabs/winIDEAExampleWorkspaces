#ifndef __TriCore_h__
#define __TriCore_h__

#define PC1 *(unsigned volatile int*) 0xF883FE08
#define PC2 *(unsigned volatile int*) 0xF885FE08

#define CPU1_SYSCON *(unsigned volatile int*) 0xF883FE14
#define CPU2_SYSCON *(unsigned volatile int*) 0xF885FE14

void enableSecondaryCores();

#endif



