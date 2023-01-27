*** !! Disclaimer !! ***

Please read the following User Disclaimer carefully before
using provided winIDEA Workspace !

This winIDEA workspace is provided 'as is' without warranty
of any kind and you use everything at your own risk. Neither
iSYSTEM AG nor their sales representatives can be held liable
of any inconvenience or problem caused by its contents.

Sample winIDEA workspace comes as supplement to iSYSTEM tools.
It can be used as a starting point (winIDEA settings can be
used for comparison or reuse) when creating your own workspace
with your executable (download) file.

iSYSTEM AG accepts no responsibility for correctness of build
manager assembler/compiler/linker settings nor for proper
operation of the executable (download) file for the selected
target microcontroller.

iSYSTEM AG reserves the right to make changes in the sample
workspace or winIDEA without further notice to improve
reliability, function or design.

Copyright (C) iSYSTEM AG 2021

**************************************************

How to (re-)build sample:

Note: we recommend CMake/Ninja combo to build.

Reguirements:
CMake version 3.25.0 or newer
Ninja

1. In workspace directory find file <architecture>.cmake
   (e.g. for riscv32 sample, find riscv32.cmake)
2. Replace CMAKE_FIND_ROOT_PATH and tools paths with path pointing to your
   toolchain's folder containing toolchain executables.
3. Edit CMAKE_<EXECUTABLE> (e.g. CMAKE_C_COMPILER) toolchain executables to
   match names of your toolchain executables.
4. Edit CMAKE_<EXECUTABLE> (e.g. CMAKE_C_FLAGS) toolchain executables'
   patrameters to your needs. Note: winIDEA needs debug info.
5. In build.bat, edit cmake paths to point to your cmake installation.

Note: It is recommend to delete Debug folder before (re-)building.

**************************************************
