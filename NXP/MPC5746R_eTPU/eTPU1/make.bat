:: Compile sources and build .elf file
X:\CC5X\ByteCraf\1.0.0.6\ETPU_C.EXE etpuc_set1.c -q -m +l +e +x -o +dELF
:: Following files are used by the main core to setup eTPU
copy etpuc_set1.h ..\Core1
copy etpu_pwm_auto.h ..\Core1
copy m_0_auto.h ..\Core1
