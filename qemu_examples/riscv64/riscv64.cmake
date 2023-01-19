set(CMAKE_SYSTEM_NAME       Generic)
set(CMAKE_SYSTEM_PROCESSOR  riscv64)
set(CMAKE_CROSSCOMPILING    1)

set(CMAKE_FIND_ROOT_PATH    C:/MyX/SysGCC/bin)
set(tools                   C:/MyX/SysGCC/bin)

set(CMAKE_C_COMPILER	${tools}/riscv64-unknown-elf-gcc.exe)
set(CMAKE_ASM_COMPILER	${tools}/riscv64-unknown-elf-gcc.exe)
set(CMAKE_EXE_LINKER	${tools}/riscv64-unknown-elf-ld.exe )

set(CMAKE_C_FLAGS       "-O0 -g -Wall -Wno-main -Wstack-usage=200 -ffreestanding -Wno-unused -march=rv64imac -mcmodel=medany -fno-builtin-printf -DUSE_PLIC -DUSE_M_TIM -mabi=lp64")
set(CMAKE_ASM_FLAGS         "-g -Wall -Wno-main -Wstack-usage=200 -ffreestanding -Wno-unused -march=rv64imac -mcmodel=medany -fno-builtin-printf -DUSE_PLIC -DUSE_M_TIM -mabi=lp64")
set(CMAKE_EXE_LINKER_FLAGS  "-Wl,-Map=sample.map,-m,elf64lriscv -T ${CMAKE_CURRENT_LIST_DIR}/link.ld -nostartfiles -O0 -A rv64imac -mabi=lp64")

set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)