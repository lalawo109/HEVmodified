@echo off
set MATLAB=D:\Program Files\MATLAB\R2021b

call  "\\MICROSO-9PK86AJ\D$\Program Files\MATLAB\R2021b\bin\win64\checkMATLABRootForDriveMap.exe" "\\MICROSO-9PK86AJ\D$\Program Files\MATLAB\R2021b"  > mlEnv.txt
for /f %%a in (mlEnv.txt) do set "%%a"\n
"%MATLAB%\bin\win64\gmake" -f DrivetrainHevMm.mk MATLAB_ROOT=%MATLAB_ROOT% ALT_MATLAB_ROOT=%ALT_MATLAB_ROOT% MATLAB_BIN=%MATLAB_BIN% ALT_MATLAB_BIN=%ALT_MATLAB_BIN%  GENERATE_ERT_S_FUNCTION=0 GENERATE_ASAP2=0 EXTMODE_STATIC_ALLOC=0 EXTMODE_STATIC_ALLOC_SIZE=1000000 EXTMODE_TRANSPORT=0 TMW_EXTMODE_TESTING=0 OPTS="-DIS_SIM_TARGET -DMATLAB_MEX_FILE -DTID01EQ=0"
