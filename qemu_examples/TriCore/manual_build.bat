@echo off
del build
@C:\ISYSTEM_APPS\cmake\bin\cmake -S . -B ./build -GNinja
@C:\ISYSTEM_APPS\cmake\bin\cmake --build ./build
cmd /k