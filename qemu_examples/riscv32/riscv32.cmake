set(CMAKE_SYSTEM_NAME		Generic	)
set(CMAKE_SYSTEM_PROCESSOR	riscv32	)
set(CMAKE_CROSSCOMPILING	1	)

set(CMAKE_FIND_ROOT_PATH	C:/MyX/SysGCC/bin )
set(tools			        C:/MyX/SysGCC/bin )

set(CMAKE_C_COMPILER	${tools}/riscv64-unknown-elf-gcc.exe)
set(CMAKE_ASM_COMPILER	${tools}/riscv64-unknown-elf-gcc.exe)
set(CMAKE_EXE_LINKER	${tools}/riscv64-unknown-elf-ld.exe )

set(CMAKE_C_FLAGS           "-g -Wall -march=rv32imac -mabi=ilp32 -ffreestanding -mcmodel=medany -Wno-unused -fno-builtin-printf -DUSE_PLIC -DUSE_M_TIM")
set(CMAKE_ASM_FLAGS         "-g -Wall -march=rv32imac -mabi=ilp32")
set(CMAKE_EXE_LINKER_FLAGS  "-T ${CMAKE_CURRENT_LIST_DIR}/link.ld -Wl,-Map=sample.map,-m,elf32lriscv -A rv32imac -nostartfiles -mabi=ilp32")

set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)