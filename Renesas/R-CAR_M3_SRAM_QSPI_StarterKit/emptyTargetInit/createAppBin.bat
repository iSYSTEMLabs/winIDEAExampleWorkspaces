@ECHO OFF
SET OBJCOPY=%1
SET OUTPUT_FILE=%2

CALL %OBJCOPY% -O binary %OUTPUT_FILE% Binaries\cr7_app.bin

python modifyAppHeader.py

CALL makeResetVectorBin.bat %OBJCOPY% %OUTPUT_FILE%