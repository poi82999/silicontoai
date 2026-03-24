@echo off
set SCRIPT_DIR=%~dp0
for %%I in ("%SCRIPT_DIR%..") do set ROOT_DIR=%%~fI

if exist %ROOT_DIR%\sim\system rd /s /q %ROOT_DIR%\sim\system
if exist %ROOT_DIR%\sim\uvm rd /s /q %ROOT_DIR%\sim\uvm
if exist %ROOT_DIR%\sim\verify rd /s /q %ROOT_DIR%\sim\verify
if exist %ROOT_DIR%\sim\coverage rd /s /q %ROOT_DIR%\sim\coverage

if exist %ROOT_DIR%\sim\compile.log del /q %ROOT_DIR%\sim\compile.log
if exist %ROOT_DIR%\sim\elaborate.log del /q %ROOT_DIR%\sim\elaborate.log
if exist %ROOT_DIR%\sim\sim.log del /q %ROOT_DIR%\sim\sim.log
if exist %ROOT_DIR%\sim\coverage_sys.log del /q %ROOT_DIR%\sim\coverage_sys.log
if exist %ROOT_DIR%\sim\assertion_cov_sys_summary.txt del /q %ROOT_DIR%\sim\assertion_cov_sys_summary.txt
if exist %ROOT_DIR%\sim\latest_sys_cov_report.txt del /q %ROOT_DIR%\sim\latest_sys_cov_report.txt
if exist %ROOT_DIR%\sim\uvm_compile.log del /q %ROOT_DIR%\sim\uvm_compile.log
if exist %ROOT_DIR%\sim\uvm_elaborate.log del /q %ROOT_DIR%\sim\uvm_elaborate.log
if exist %ROOT_DIR%\sim\uvm_sim.log del /q %ROOT_DIR%\sim\uvm_sim.log
if exist %ROOT_DIR%\sim\uvm_latest_path.txt del /q %ROOT_DIR%\sim\uvm_latest_path.txt
if exist %ROOT_DIR%\sim\uvm_latest_cov_report.txt del /q %ROOT_DIR%\sim\uvm_latest_cov_report.txt
if exist %ROOT_DIR%\sim\uvm_latest_assert_cov_summary.txt del /q %ROOT_DIR%\sim\uvm_latest_assert_cov_summary.txt
if exist %ROOT_DIR%\sim\uvm_merge_cov.log del /q %ROOT_DIR%\sim\uvm_merge_cov.log
if exist %ROOT_DIR%\sim\uvm_merged_assertion_cov_summary.txt del /q %ROOT_DIR%\sim\uvm_merged_assertion_cov_summary.txt
if exist %ROOT_DIR%\sim\uvm_latest_merged_cov_report.txt del /q %ROOT_DIR%\sim\uvm_latest_merged_cov_report.txt
if exist %ROOT_DIR%\sim\uvm_latest_merged_assert_cov_summary.txt del /q %ROOT_DIR%\sim\uvm_latest_merged_assert_cov_summary.txt
if exist %ROOT_DIR%\sim\verify_core.log del /q %ROOT_DIR%\sim\verify_core.log
if exist %ROOT_DIR%\sim\verify_sys.log del /q %ROOT_DIR%\sim\verify_sys.log
if exist %ROOT_DIR%\sim\verify_uvm.log del /q %ROOT_DIR%\sim\verify_uvm.log
if exist %ROOT_DIR%\sim\verify_assertion_cov_index.txt del /q %ROOT_DIR%\sim\verify_assertion_cov_index.txt
if exist %ROOT_DIR%\sim\verify_assertion_cov_summary.txt del /q %ROOT_DIR%\sim\verify_assertion_cov_summary.txt
if exist %ROOT_DIR%\sim\my_sim_* del /q %ROOT_DIR%\sim\my_sim_*

if exist %SCRIPT_DIR%*.log del /q %SCRIPT_DIR%*.log
if exist %SCRIPT_DIR%*.pb del /q %SCRIPT_DIR%*.pb
if exist %SCRIPT_DIR%*.wdb del /q %SCRIPT_DIR%*.wdb
if exist %SCRIPT_DIR%xsim.jou del /q %SCRIPT_DIR%xsim.jou
if exist %SCRIPT_DIR%xsim_*.backup.jou del /q %SCRIPT_DIR%xsim_*.backup.jou
if exist %SCRIPT_DIR%xsim_*.backup.log del /q %SCRIPT_DIR%xsim_*.backup.log
if exist %SCRIPT_DIR%tr_db.log del /q %SCRIPT_DIR%tr_db.log
if exist %SCRIPT_DIR%.xcrg.log del /q %SCRIPT_DIR%.xcrg.log
if exist %SCRIPT_DIR%..simcoveragesys rd /s /q %SCRIPT_DIR%..simcoveragesys
if exist %SCRIPT_DIR%xsim.dir rd /s /q %SCRIPT_DIR%xsim.dir

echo Cleaned simulation artifacts.