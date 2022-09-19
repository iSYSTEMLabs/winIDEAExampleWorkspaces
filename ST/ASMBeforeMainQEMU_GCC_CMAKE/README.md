Debugging instructions
-------------
1. Open workspace file ASMBeforeMainQEMU.xjrf in winIDEA: `File | Workspace | Open Workspace...`
2. Download application: `Debug | Download`
3. Debug, for example, set breakpoint and run, see `Debug` menu in winIDEA.

Build instructions
---------------------------

### Requirements
- GCC 10.2.1 or newer (GNU Arm Embedded Toolchain 10-2020-q4-major) [Download](https://developer.arm.com/downloads/-/gnu-rm)
- Ninja: 1.10.0 or newer [Download](https://github.com/ninja-build/ninja/releases/tag/v1.10.1)

### Build with winIDEA and GCC
1. Adjust compiler toolset path in winIDEA to point to your local GCC toolchain: `Project | Settings... | tab General`
2. Adjust compiler path in the Compiler, Assembler and Linker tabs
3. Adjust path to arm-none-eabi-objcopy in the Customize tab
4. Recompile application: `Project | Make`

### Build with CMake
1. Open shell (cmd, power shell, bash, ...), then change directory to `ASMBasicQEMU/Debug`
2. Run CMake: `<path to cmake.exe>/cmake.exe -G Ninja -DGENEXE=<path to ninja.exe>/ninja.exe -DTOOLPATH=<path to compiler>/bin ..`
3. Run Ninja: `<path to ninja.exe>/ninja.exe`
