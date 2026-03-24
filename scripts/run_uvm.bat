@echo off
call C:\AMDDesignTools\2025.2\Vivado\settings64.bat

set SCRIPT_DIR=%~dp0
for %%I in ("%SCRIPT_DIR%..") do set ROOT_DIR=%%~fI
set SIM_DIR=%ROOT_DIR%\sim\uvm
set RUNS_DIR=%SIM_DIR%\runs
if not exist %SIM_DIR% mkdir %SIM_DIR%
if not exist %RUNS_DIR% mkdir %RUNS_DIR%
set TESTNAME=npu_test
if not "%~1"=="" set TESTNAME=%~1
set SNAPSHOT=sim_snapshot_%RANDOM%_%RANDOM%
set RUN_DIR=%RUNS_DIR%\%SNAPSHOT%
set WORK_DIR=%RUN_DIR%\work
if not exist %RUN_DIR% mkdir %RUN_DIR%
if not exist %WORK_DIR% mkdir %WORK_DIR%
set COMPILE_LOG=%RUN_DIR%\compile.log
set ELAB_LOG=%RUN_DIR%\elaborate.log
set SIM_LOG=%RUN_DIR%\sim.log
set COV_DIR=%SIM_DIR%\coverage
if not exist %COV_DIR% mkdir %COV_DIR%
set COV_REPORT_DIR=%COV_DIR%\report_%SNAPSHOT%
set COV_LOG=%RUN_DIR%\coverage.log
set COV_TXT_REPORT=%COV_REPORT_DIR%\functionalCoverageReport\xcrg_func_cov_report.txt
set ASSERT_COV_SUMMARY=%RUN_DIR%\assertion_cov_summary.txt
set WDB_FILE=%RUN_DIR%\waves.wdb
set COV_DIR_ARG=%COV_DIR:\=/%
set COV_REPORT_DIR_ARG=%COV_REPORT_DIR:\=/%
set WDB_FILE_ARG=%WDB_FILE:\=/%
if exist %ASSERT_COV_SUMMARY% del /q %ASSERT_COV_SUMMARY%
if exist %WDB_FILE% del /q %WDB_FILE%
if exist %COV_REPORT_DIR% rd /s /q %COV_REPORT_DIR%
if exist %COV_DIR%\xsim.covdb\%SNAPSHOT% rd /s /q %COV_DIR%\xsim.covdb\%SNAPSHOT%
if exist %COV_DIR%\xsim.codecov\%SNAPSHOT% rd /s /q %COV_DIR%\xsim.codecov\%SNAPSHOT%
if exist %WORK_DIR%\xsim.dir rd /s /q %WORK_DIR%\xsim.dir

echo %RUN_DIR% > %SIM_DIR%\latest_run.txt
echo %SIM_LOG% > %SIM_DIR%\latest_sim_log.txt

echo ============================================================
echo  [1/3] Compiling RTL + UVM Testbench (xvlog)...
echo ============================================================
pushd %WORK_DIR%
call xvlog --nolog -sv -L uvm ^
  %ROOT_DIR%\rtl\mac_pe.sv ^
  %ROOT_DIR%\rtl\systolic_data_setup.sv ^
  %ROOT_DIR%\rtl\systolic_array_16x16.sv ^
  %ROOT_DIR%\rtl\psum_accumulator_buffer.sv ^
  %ROOT_DIR%\rtl\npu_core_top.sv ^
  %ROOT_DIR%\tb\npu_if.sv ^
  %ROOT_DIR%\tb\npu_uvm_pkg.sv ^
  %ROOT_DIR%\tb\assertions\npu_assertions.sv ^
  %ROOT_DIR%\tb\assertions\npu_assert_coverage.sv ^
  %ROOT_DIR%\tb\assertions\core_assert_bind.sv ^
  %ROOT_DIR%\tb\tb_top.sv > %COMPILE_LOG% 2>&1
popd

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Compilation failed. Check %COMPILE_LOG%
    exit /b 1
)
echo [OK] Compilation successful.

echo ============================================================
echo  [2/3] Elaborating UVM testbench (xelab)...
echo ============================================================
pushd %WORK_DIR%
call xelab --nolog tb_top -L uvm -timescale 1ns/1ps -debug typical --cov_db_dir %COV_DIR_ARG% --cov_db_name %SNAPSHOT% -s %SNAPSHOT% > %ELAB_LOG% 2>&1
popd

if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Elaboration failed. Check %ELAB_LOG%
    exit /b 1
)
echo [OK] Elaboration successful.

echo ============================================================
echo  [3/3] Running UVM Simulation (xsim)...
echo ============================================================
pushd %WORK_DIR%
call xsim --nolog %SNAPSHOT% -R --wdb %WDB_FILE_ARG% -testplusarg "UVM_TESTNAME=%TESTNAME%" --cov_db_dir %COV_DIR_ARG% --cov_db_name %SNAPSHOT% > %SIM_LOG% 2>&1
popd
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Simulation failed. Check %SIM_LOG%
  exit /b 1
)

pushd %COV_DIR%
call xcrg -nolog -cov_db_dir %COV_DIR_ARG% -cov_db_name %SNAPSHOT% -report_dir %COV_REPORT_DIR_ARG% -report_format text > %COV_LOG% 2>&1
popd
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Coverage report generation failed. Check %COV_LOG%
  exit /b 1
)

echo %COV_REPORT_DIR% > %SIM_DIR%\latest_cov_report.txt
echo %ASSERT_COV_SUMMARY% > %SIM_DIR%\latest_assert_cov_summary.txt
findstr /R /C:"Coverage Score" /C:"cp_[A-Za-z0-9_]*" /C:"p_[A-Za-z0-9_]*" %COV_TXT_REPORT% > %ASSERT_COV_SUMMARY%

if not "%UVM_MAX_RUNS%"=="" set KEEP_RUNS=%UVM_MAX_RUNS%
if "%KEEP_RUNS%"=="" set KEEP_RUNS=8
powershell -NoProfile -Command "if (Test-Path '%RUNS_DIR%') { $keep=[int]'%KEEP_RUNS%'; Get-ChildItem '%RUNS_DIR%' -Directory | Sort-Object LastWriteTime -Descending | Select-Object -Skip $keep | ForEach-Object { Remove-Item -Recurse -Force $_.FullName; $db=Join-Path '%COV_DIR%\\xsim.covdb' $_.Name; if (Test-Path $db) { Remove-Item -Recurse -Force $db }; $rp=Join-Path '%COV_DIR%' ('report_' + $_.Name); if (Test-Path $rp) { Remove-Item -Recurse -Force $rp } } }" >nul 2>&1

echo.
echo ============================================================
echo  Result:
echo ============================================================
findstr /C:"UVM_ERROR" /C:"UVM_FATAL" /C:"SCB_PASS" /C:"SCB_FAIL" %SIM_LOG%
findstr /C:"[SCB_FAIL]" /C:"UVM_ERROR C:" /C:"UVM_FATAL C:" /C:"UVM_FATAL @" %SIM_LOG% >nul
if %ERRORLEVEL% EQU 0 (
  echo [ERROR] Failure markers found in %SIM_LOG%
  exit /b 1
)
findstr /C:"SCB_PASS" %SIM_LOG% >nul
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] No scoreboard pass markers found in %SIM_LOG%
  exit /b 1
)
echo.
echo Done. Full log: %SIM_LOG%
echo Coverage report: %COV_REPORT_DIR%
echo Assertion coverage summary: %ASSERT_COV_SUMMARY%
exit /b 0
