#include <stdint.h>

uint32_t _sbss;
uint32_t _ebss;
uint32_t _etext;
uint32_t _sdata;
uint32_t _edata;

extern void main(void);
void __attribute__((section(".init"))) _reset(void) {

    /* Copy init values from text to data */
    uint32_t *init_values_ptr = &_etext;
    uint32_t *data_ptr = &_sdata;

    if (init_values_ptr != data_ptr) {
        for (; data_ptr < &_edata;) {
            *data_ptr++ = *init_values_ptr++;
        }
    }

    /* Clear the zero segment */
    for (uint32_t *bss_ptr = &_sbss; bss_ptr < &_ebss;) {
        *bss_ptr++ = 0;
    }

    /* Branch to main function */
    main();

    /* Infinite loop */
    while (1);
}