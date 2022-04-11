@echo off
set MATLAB=D:\Program Files\MATLAB\R2021b

call  "\\MICROSO-9PK86AJ\D$\Program Files\MATLAB\R2021b\bin\win64\checkMATLABRootForDriveMap.exe" "\\MICROSO-9PK86AJ\D$\Program Files\MATLAB\R2021b"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
"%MATLAB%\bin\win64\gmake" -f rtwshared.mk MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  OPTS="-DNRT -DIS_SIM_TARGET"
