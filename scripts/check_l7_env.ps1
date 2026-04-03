$ErrorActionPreference = "Stop"
Set-StrictMode -Version Latest

$scriptDir = Split-Path -Parent $MyInvocation.MyCommand.Path
$repoRoot = Split-Path -Parent $scriptDir

function Write-Check {
    param(
        [string]$Status,
        [string]$Label,
        [string]$Detail
    )

    Write-Host ("[{0}] {1}: {2}" -f $Status, $Label, $Detail)
}

function Get-CommandPathSafe {
    param([string]$Name)

    $command = Get-Command $Name -ErrorAction SilentlyContinue | Select-Object -First 1
    if ($null -eq $command) {
        return $null
    }

    return $command.Source
}

function Test-WslCommand {
    param([string]$Command)

    $wslPath = Get-CommandPathSafe "wsl"
    if ($null -eq $wslPath) {
        return $false
    }

    $output = & $wslPath bash -lc $Command 2>$null
    return $LASTEXITCODE -eq 0
}

function Find-VivadoSettings {
    if ($env:VIVADO_SETTINGS64) {
        if (Test-Path $env:VIVADO_SETTINGS64) {
            return $env:VIVADO_SETTINGS64
        }
        return $null
    }

    $candidates = @(
        "C:\AMDDesignTools\2025.2\Vivado\settings64.bat",
        "C:\AMDDesignTools\2025.1\Vivado\settings64.bat",
        "C:\AMD\Vivado\2025.2\settings64.bat",
        "C:\AMD\Vivado\2025.1\settings64.bat",
        "C:\Xilinx\Vivado\2025.2\settings64.bat",
        "C:\Xilinx\Vivado\2025.1\settings64.bat"
    )

    foreach ($candidate in $candidates) {
        if (Test-Path $candidate) {
            return $candidate
        }
    }

    return $null
}

function Get-RepoFilesByExtension {
    param([string]$Extension)

    $excludedPrefixes = @(
        (Join-Path $repoRoot "sim"),
        (Join-Path $repoRoot "build"),
        (Join-Path $repoRoot "build_system"),
        (Join-Path $repoRoot ".git"),
        (Join-Path $repoRoot ".venv"),
        (Join-Path $repoRoot ".venv312"),
        (Join-Path $repoRoot ".pytest_cache")
    )

    return @(
        Get-ChildItem -Path $repoRoot -Recurse -File -Filter "*$Extension" -ErrorAction SilentlyContinue |
            Where-Object {
                $fullName = $_.FullName
                -not ($excludedPrefixes | Where-Object { $fullName.StartsWith($_, [System.StringComparison]::OrdinalIgnoreCase) })
            }
    )
}

$vivadoSettings = Find-VivadoSettings
$xvlogPath = Get-CommandPathSafe "xvlog"
$xelabPath = Get-CommandPathSafe "xelab"
$xsimPath = Get-CommandPathSafe "xsim"
$wslPath = Get-CommandPathSafe "wsl"
$bashPath = Get-CommandPathSafe "bash"

$hasWslMake = Test-WslCommand "command -v make >/dev/null 2>&1"
$hasWslGpp = Test-WslCommand "command -v g++ >/dev/null 2>&1"
$hasWslVerilator = Test-WslCommand "command -v verilator >/dev/null 2>&1"

$xdcFiles = @(Get-RepoFilesByExtension ".xdc")
$tclFiles = @(Get-RepoFilesByExtension ".tcl")
$python312 = Test-Path (Join-Path $repoRoot ".venv312\Scripts\python.exe")

$vivadoReady = ($null -ne $vivadoSettings) -or (($null -ne $xvlogPath) -and ($null -ne $xelabPath) -and ($null -ne $xsimPath))
$wslBuildReady = ($null -ne $wslPath) -and ($null -ne $bashPath) -and $hasWslMake -and $hasWslGpp -and $hasWslVerilator

Write-Host "L7 Environment Check"
Write-Host ("Repo root: {0}" -f $repoRoot)
Write-Host ""

if ($null -ne $vivadoSettings) {
    Write-Check "OK" "Vivado settings" $vivadoSettings
} elseif ($null -ne $xvlogPath) {
    Write-Check "OK" "Vivado tools on PATH" ("xvlog={0}" -f $xvlogPath)
} else {
    Write-Check "MISS" "Vivado" "settings64.bat not found and xvlog/xelab/xsim are not on PATH"
}

if ($null -ne $wslPath) {
    Write-Check "OK" "WSL" $wslPath
} else {
    Write-Check "MISS" "WSL" "wsl.exe not found"
}

if ($null -ne $bashPath) {
    Write-Check "OK" "bash" $bashPath
} else {
    Write-Check "MISS" "bash" "bash.exe not found"
}

Write-Check ($(if ($hasWslMake) { "OK" } else { "MISS" })) "WSL make" ($(if ($hasWslMake) { "available" } else { "missing" }))
Write-Check ($(if ($hasWslGpp) { "OK" } else { "MISS" })) "WSL g++" ($(if ($hasWslGpp) { "available" } else { "missing" }))
Write-Check ($(if ($hasWslVerilator) { "OK" } else { "MISS" })) "WSL verilator" ($(if ($hasWslVerilator) { "available" } else { "missing" }))

Write-Check ($(if ($python312) { "OK" } else { "WARN" })) "Python 3.12 venv" ($(if ($python312) { ".venv312 detected" } else { ".venv312 not found" }))
Write-Check ($(if ($xdcFiles.Count -gt 0) { "OK" } else { "WARN" })) "XDC files" ($(if ($xdcFiles.Count -gt 0) { ($xdcFiles | ForEach-Object { $_.FullName.Replace($repoRoot + '\\', '') }) -join ", " } else { "none in repo yet" }))
Write-Check ($(if ($tclFiles.Count -gt 0) { "OK" } else { "WARN" })) "Tcl build scripts" ($(if ($tclFiles.Count -gt 0) { ($tclFiles | ForEach-Object { $_.FullName.Replace($repoRoot + '\\', '') }) -join ", " } else { "none in repo yet" }))

Write-Host ""
Write-Host ("Vivado simulation ready: {0}" -f $vivadoReady)
Write-Host ("WSL build ready: {0}" -f $wslBuildReady)
Write-Host ("Implementation assets ready: {0}" -f (($xdcFiles.Count -gt 0) -and ($tclFiles.Count -gt 0)))

if (-not $vivadoReady -or -not $wslBuildReady) {
    exit 1
}

exit 0