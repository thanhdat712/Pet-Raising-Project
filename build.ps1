$ErrorActionPreference = "Stop"

# ==========================================
# Pet Raising Project - Build Script
# ==========================================

$BuildDir = "build"

$QtPath = "C:\Qt\6.11.2\mingw_64"
$MinGWPath = "C:\Qt\Tools\mingw1310_64"

$CMake = "cmake"
$Compiler = "$MinGWPath\bin\g++.exe"
$MakeProgram = "$MinGWPath\bin\mingw32-make.exe"

Write-Host ""
Write-Host "=========================================" -ForegroundColor Cyan
Write-Host "       PET RAISING PROJECT BUILD         " -ForegroundColor Cyan
Write-Host "=========================================" -ForegroundColor Cyan
Write-Host ""

# ==========================================
# Check required files
# ==========================================

if (-not (Test-Path $QtPath)) {
    Write-Host "Khong tim thay Qt:" -ForegroundColor Red
    Write-Host $QtPath
    exit 1
}

if (-not (Test-Path $Compiler)) {
    Write-Host "Khong tim thay MinGW:" -ForegroundColor Red
    Write-Host $Compiler
    exit 1
}

if (-not (Test-Path $MakeProgram)) {
    Write-Host "Khong tim thay mingw32-make:" -ForegroundColor Red
    Write-Host $MakeProgram
    exit 1
}

if (-not (Get-Command cmake -ErrorAction SilentlyContinue)) {
    Write-Host "Khong tim thay CMake!" -ForegroundColor Red
    exit 1
}

# ==========================================
# Add Qt + MinGW to PATH
# ==========================================

$env:PATH = "$MinGWPath\bin;$QtPath\bin;$env:PATH"

Write-Host "[INFO] Qt:" -ForegroundColor Gray
Write-Host "       $QtPath"

Write-Host "[INFO] MinGW:" -ForegroundColor Gray
Write-Host "       $MinGWPath"

Write-Host ""

# ==========================================
# Remove old build directory
# ==========================================

if (Test-Path $BuildDir) {
    Write-Host "[1/3] Xoa build cu..." -ForegroundColor Yellow

    Remove-Item -Recurse -Force $BuildDir
}

# ==========================================
# CMake Configure
# ==========================================

Write-Host "[2/3] CMake configure..." -ForegroundColor Yellow

& $CMake `
    -S . `
    -B $BuildDir `
    -G "MinGW Makefiles" `
    -DCMAKE_CXX_COMPILER="$Compiler" `
    -DCMAKE_MAKE_PROGRAM="$MakeProgram" `
    -DCMAKE_PREFIX_PATH="$QtPath"

if ($LASTEXITCODE -ne 0) {
    Write-Host ""
    Write-Host "CMake configure THAT BAI!" -ForegroundColor Red
    exit 1
}

# ==========================================
# Build
# ==========================================

Write-Host ""
Write-Host "[3/3] Building project..." -ForegroundColor Yellow

& $CMake `
    --build $BuildDir `
    --parallel

if ($LASTEXITCODE -ne 0) {
    Write-Host ""
    Write-Host "BUILD THAT BAI!" -ForegroundColor Red
    exit 1
}

# ==========================================
# Check executable
# ==========================================

$ExePath = Join-Path $BuildDir "PetRaising.exe"

Write-Host ""

if (Test-Path $ExePath) {
    Write-Host "=========================================" -ForegroundColor Green
    Write-Host "           BUILD THANH CONG!             " -ForegroundColor Green
    Write-Host "=========================================" -ForegroundColor Green
    Write-Host ""
    Write-Host "Executable:" -ForegroundColor Cyan
    Write-Host $ExePath -ForegroundColor Green
    Write-Host ""
}
else {
    Write-Host "Build bao cao thanh cong nhung khong tim thay:" -ForegroundColor Yellow
    Write-Host $ExePath
}