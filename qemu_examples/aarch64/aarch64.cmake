set(CMAKE_SYSTEM_NAME       Generic)
set(CMAKE_SYSTEM_PROCESSOR  aarch64)
set(CMAKE_CROSSCOMPILING    1)

set(CMAKE_FIND_ROOT_PATH C:/MyX/aarch64-none-elf/bin)
set(tools                C:/MyX/aarch64-none-elf/bin)

set(CMAKE_C_COMPILER	${tools}/aarch64-none-elf-gcc.exe)
set(CMAKE_ASM_COMPILER	${tools}/aarch64-none-elf-gcc.exe)
set(CMAKE_LINKER	    ${tools}/aarch64-none-elf-ld.bfd.exe)

set(CMAKE_C_FLAGS   "-O0 -fno-dwarf2-cfi-asm -march=armv8-a -mcpu=cortex-a57 -fno-builtin-print -Wall -g")
set(CMAKE_EXE_LINKER_FLAGS  "-Wl,-Map=aarch64.map,--script=${CMAKE_CURRENT_LIST_DIR}/aarch64.ld,-n -nostartfiles -lstdc++ -lg -lm -lc -lrdimon")

set(CMAKE_FIND_ROOT_PATH_MODE_INCLUDE ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_LIBRARY ONLY)
set(CMAKE_FIND_ROOT_PATH_MODE_PROGRAM NEVER)
