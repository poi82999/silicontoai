@echo off

if defined VIVADO_SETTINGS64 (
    if exist "%VIVADO_SETTINGS64%" (
        call "%VIVADO_SETTINGS64%"
        goto :verify_tools
    )

    echo [Vivado Setup] VIVADO_SETTINGS64 is set but the file does not exist:
    echo [Vivado Setup]   %VIVADO_SETTINGS64%
    exit /b 1
)

where xvlog >nul 2>&1
if %ERRORLEVEL% EQU 0 (
    exit /b 0
)

for %%F in (
    "C:\AMDDesignTools\2025.2\Vivado\settings64.bat"
    "C:\AMDDesignTools\2025.1\Vivado\settings64.bat"
    "C:\AMD\Vivado\2025.2\settings64.bat"
    "C:\AMD\Vivado\2025.1\settings64.bat"
    "C:\Xilinx\Vivado\2025.2\settings64.bat"
    "C:\Xilinx\Vivado\2025.1\settings64.bat"
) do (
    if exist "%%~F" (
        call "%%~F"
        goto :verify_tools
    )
)

echo [Vivado Setup] Vivado tools are not on PATH and settings64.bat could not be found.
echo [Vivado Setup] Set VIVADO_SETTINGS64 to your install path, for example:
echo [Vivado Setup]   set VIVADO_SETTINGS64=C:\AMDDesignTools\2025.2\Vivado\settings64.bat
exit /b 1

:verify_tools
where xvlog >nul 2>&1
if %ERRORLEVEL% EQU 0 exit /b 0

echo [Vivado Setup] Vivado settings were sourced, but xvlog is still not on PATH.
exit /b 1