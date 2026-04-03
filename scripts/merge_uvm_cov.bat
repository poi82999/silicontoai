@echo off
setlocal enabledelayedexpansion

call "%~dp0setup_vivado_env.bat"
if %ERRORLEVEL% NEQ 0 exit /b 1

set SCRIPT_DIR=%~dp0
for %%I in ("%SCRIPT_DIR%..") do set ROOT_DIR=%%~fI
set SIM_DIR=%ROOT_DIR%\sim\uvm
set COV_DIR=%SIM_DIR%\coverage
set COV_DB_DIR=%COV_DIR%\xsim.covdb
set MERGE_DIR=%COV_DIR%\merged
set MERGE_DB_NAME=uvm_assert_merged
set MERGE_REPORT_DIR=%MERGE_DIR%\report_%MERGE_DB_NAME%
set MERGE_LOG=%SIM_DIR%\merged_cov.log
set MERGE_TXT_REPORT=%MERGE_REPORT_DIR%\functionalCoverageReport\xcrg_func_cov_report.txt
set MERGE_ASSERT_SUMMARY=%SIM_DIR%\merged_assertion_cov_summary.txt
set LATEST_MERGE_REPORT=%SIM_DIR%\latest_merged_cov_report.txt
set LATEST_MERGE_SUMMARY=%SIM_DIR%\latest_merged_assert_cov_summary.txt
set COV_DIR_ARG=%COV_DIR:\=/%
set MERGE_DIR_ARG=%MERGE_DIR:\=/%
set MERGE_REPORT_DIR_ARG=%MERGE_REPORT_DIR:\=/%

if not exist %COV_DB_DIR% (
  echo [UVM Merge] Coverage DB directory not found: %COV_DB_DIR%
  exit /b 1
)

if not exist %MERGE_DIR% mkdir %MERGE_DIR%
if exist %MERGE_DIR%\xsim.covdb\%MERGE_DB_NAME% rd /s /q %MERGE_DIR%\xsim.covdb\%MERGE_DB_NAME%
if exist %MERGE_REPORT_DIR% rd /s /q %MERGE_REPORT_DIR%
if exist %MERGE_ASSERT_SUMMARY% del /q %MERGE_ASSERT_SUMMARY%

set XCRG_ARGS=-merge_dir %MERGE_DIR_ARG% -merge_db_name %MERGE_DB_NAME% -report_dir %MERGE_REPORT_DIR_ARG% -report_format text
set DB_COUNT=0

for /d %%D in (%COV_DB_DIR%\*) do (
  set /a DB_COUNT+=1
  set XCRG_ARGS=!XCRG_ARGS! -cov_db_dir %COV_DIR_ARG% -cov_db_name %%~nxD
)

if %DB_COUNT% EQU 0 (
  echo [UVM Merge] No UVM coverage DBs found under %COV_DB_DIR%
  exit /b 1
)

echo [UVM Merge] Merging %DB_COUNT% coverage DBs
pushd %MERGE_DIR%
call xcrg -nolog %XCRG_ARGS% > %MERGE_LOG% 2>&1
popd
if %ERRORLEVEL% NEQ 0 (
  echo [ERROR] Coverage merge failed. Check %MERGE_LOG%
  exit /b 1
)

echo %MERGE_REPORT_DIR% > %LATEST_MERGE_REPORT%
echo %MERGE_ASSERT_SUMMARY% > %LATEST_MERGE_SUMMARY%
findstr /R /C:"Coverage Score" /C:"cp_[A-Za-z0-9_]*" /C:"p_[A-Za-z0-9_]*" %MERGE_TXT_REPORT% > %MERGE_ASSERT_SUMMARY%

echo Merged DB count: %DB_COUNT%
echo Merged coverage report: %MERGE_REPORT_DIR%
echo Merged assertion summary: %MERGE_ASSERT_SUMMARY%
exit /b 0