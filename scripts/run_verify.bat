@echo off
setlocal

echo [VERIFY] system
call run_sys.bat
if %ERRORLEVEL% NEQ 0 exit /b 1

echo [VERIFY] uvm
call run_uvm.bat
if %ERRORLEVEL% NEQ 0 exit /b 1

echo [PASS] verification (vivado)