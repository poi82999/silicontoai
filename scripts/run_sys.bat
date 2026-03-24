@echo off
call C:\AMDDesignTools\2025.2\Vivado\settings64.bat

set SCRIPT_DIR=%~dp0
for %%I in ("%SCRIPT_DIR%..") do set ROOT_DIR=%%~fI
set SIM_DIR=%ROOT_DIR%\sim\system
set OUT_DIR=%SIM_DIR%\latest
set WORK_DIR=%SIM_DIR%\work
set COV_DIR=%SIM_DIR%\coverage
if not exist %SIM_DIR% mkdir %SIM_DIR%
if not exist %OUT_DIR% mkdir %OUT_DIR%
if not exist %WORK_DIR% mkdir %WORK_DIR%
if not exist %COV_DIR% mkdir %COV_DIR%
set COV_NAME=tb_system_top_snapshot
set COV_REPORT_DIR=%COV_DIR%\report_%COV_NAME%
set COV_LOG=%OUT_DIR%\coverage.log
set COV_TXT_REPORT=%COV_REPORT_DIR%\functionalCoverageReport\xcrg_func_cov_report.txt
set ASSERT_COV_SUMMARY=%OUT_DIR%\assertion_cov_summary.txt
set WDB_FILE=%OUT_DIR%\tb_system_top.wdb
set COV_DIR_ARG=%COV_DIR:\=/%
set COV_REPORT_DIR_ARG=%COV_REPORT_DIR:\=/%
set WDB_FILE_ARG=%WDB_FILE:\=/%
if exist %OUT_DIR%\compile.log del /q %OUT_DIR%\compile.log
if exist %OUT_DIR%\elaborate.log del /q %OUT_DIR%\elaborate.log
if exist %OUT_DIR%\sim.log del /q %OUT_DIR%\sim.log
if exist %COV_LOG% del /q %COV_LOG%
if exist %ASSERT_COV_SUMMARY% del /q %ASSERT_COV_SUMMARY%
if exist %WDB_FILE% del /q %WDB_FILE%
if exist %COV_REPORT_DIR% rd /s /q %COV_REPORT_DIR%
if exist %COV_DIR%\xsim.covdb\%COV_NAME% rd /s /q %COV_DIR%\xsim.covdb\%COV_NAME%
if exist %COV_DIR%\xsim.codecov\%COV_NAME% rd /s /q %COV_DIR%\xsim.codecov\%COV_NAME%
if exist %WORK_DIR%\xsim.dir rd /s /q %WORK_DIR%\xsim.dir

echo ============================================================
echo  [1/3] Compiling RTL + Testbench (xvlog)...
echo ============================================================
pushd %WORK_DIR%
call xvlog --nolog -sv ^
  %ROOT_DIR%\rtl\dp_sram_bank.sv ^
  %ROOT_DIR%\rtl\mac_pe.sv ^
  %ROOT_DIR%\rtl\systolic_data_setup.sv ^
  %ROOT_DIR%\rtl\systolic_array_16x16.sv ^
  %ROOT_DIR%\rtl\psum_accumulator_buffer.sv ^
  %ROOT_DIR%\rtl\dma_controller.sv ^
  %ROOT_DIR%\rtl\npu_core_top.sv ^
  %ROOT_DIR%\rtl\npu_system_top.sv ^
  %ROOT_DIR%\tb\assertions\npu_assertions.sv ^
  %ROOT_DIR%\tb\assertions\npu_assert_coverage.sv ^
  %ROOT_DIR%\tb\assertions\system_assert_bind.sv ^
  %ROOT_DIR%\tb\tb_system_top.sv > %OUT_DIR%\compile.log 2>&1
popd

if %ERRORLEVEL% NEQ 0 (
    echo [ERROR] Compilation failed. Check %OUT_DIR%\compile.log
    exit /b 1
)
echo [OK] Compilation successful.

echo ============================================================
echo  [2/3] Elaborating (xelab)...
echo ============================================================
pushd %WORK_DIR%
call xelab --nolog -debug typical --cov_db_dir %COV_DIR_ARG% --cov_db_name %COV_NAME% -top tb_system_top -snapshot tb_system_top_snapshot > %OUT_DIR%\elaborate.log 2>&1
popd

if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Elaboration failed. Check %OUT_DIR%\elaborate.log
    exit /b 1
)
echo [OK] Elaboration successful.

echo ============================================================
echo  [3/3] Running Simulation (xsim)...
echo ============================================================
pushd %WORK_DIR%
call xsim --nolog tb_system_top_snapshot -R --wdb %WDB_FILE_ARG% --cov_db_dir %COV_DIR_ARG% --cov_db_name %COV_NAME% > %OUT_DIR%\sim.log 2>&1
popd
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Simulation failed. Check %OUT_DIR%\sim.log
  exit /b 1
)

pushd %COV_DIR%
call xcrg -nolog -cov_db_dir %COV_DIR_ARG% -cov_db_name %COV_NAME% -report_dir %COV_REPORT_DIR_ARG% -report_format text > %COV_LOG% 2>&1
popd
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Coverage report generation failed. Check %COV_LOG%
  exit /b 1
)

echo %COV_REPORT_DIR% > %SIM_DIR%\latest_cov_report.txt
findstr /R /C:"Coverage Score" /C:"cp_[A-Za-z0-9_]*" /C:"p_[A-Za-z0-9_]*" %COV_TXT_REPORT% > %ASSERT_COV_SUMMARY%

echo.
echo ============================================================
echo  Result:
echo ============================================================
findstr /C:"PERFECT MATCH" /C:"ZERO-DEFECT" /C:"FAIL" /C:"ERROR" %OUT_DIR%\sim.log
findstr /C:"PERFECT MATCH" %OUT_DIR%\sim.log >nul
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Expected success marker not found in %OUT_DIR%\sim.log
  exit /b 1
)
findstr /C:" [FAIL]" /C:"[ERROR]" %OUT_DIR%\sim.log >nul
if %ERRORLEVEL% EQU 0 (
  echo [ERROR] Failure markers found in %OUT_DIR%\sim.log
  exit /b 1
)
echo.
echo Done. Full log: %OUT_DIR%\sim.log
echo Coverage report: %COV_REPORT_DIR%
echo Assertion coverage summary: %ASSERT_COV_SUMMARY%
exit /b 0
