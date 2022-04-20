#ifndef ETPU_EXAMPLE_H
#define ETPU_EXAMPLE_H

#include "etpu_util.h"
#include "etpuc_set1.h"

#define PRODUCTION_TEST_CH0   0

#define mem(addr)   (*(unsigned char volatile *)(addr))
#define memw(addr)  (*(unsigned short volatile *)(addr))
#define AC5_SC      *((unsigned volatile long*) 0xFFFB08A0)

uint32_t fs_etpu_code_start =     0xFFCD0000;
uint32_t fs_etpu_data_ram_start = 0xFFCC8000;
uint32_t fs_etpu_data_ram_end =   0xFFCC97FC;
uint32_t fs_etpu_data_ram_ext =   0xFFCCC000;


struct etpu_config_t my_etpu_config = {
	FS_ETPU_MISC_ENABLE,	  // MCR register
	FS_ETPU_MISC,			      // MISC value from eTPU compiler link file

	//Configure eTPU engine A
	FS_ETPU_FILTER_CLOCK_DIV8 +
	FS_ETPU_CHAN_FILTER_3SAMPLE +
	FS_ETPU_ENTRY_TABLE,

	//Configure eTPU engine A timebases
	FS_ETPU_TCR2CTL_DIV8 +
	( 7 << 16) +            // TCR2 prescaler of 8 (7+1)
	FS_ETPU_TCR1CTL_DIV2 +
	49,                     // TCR1 prescaler of 50 (49+1)
	0,

	//Configure eTPU engine b
	FS_ETPU_FILTER_CLOCK_DIV8 +
  FS_ETPU_CHAN_FILTER_3SAMPLE +
	FS_ETPU_ENTRY_TABLE,

	//Configure eTPU engine B timebases
	FS_ETPU_TCR2CTL_DIV8 +
	( 7 << 16) +          // TCR2 prescaler of 8 (7+1)
	FS_ETPU_TCR1CTL_DIV2 +
	49,	                  // TCR1 prescaler of 50 (49+1)
	0
};


void initETPU(void);
int m0_init(unsigned char channel,unsigned char priority);
void m0_set(unsigned char channel,unsigned char level);
void productionTestETPU(void);

  
#endif //ETPU_EXAMPLE_H


