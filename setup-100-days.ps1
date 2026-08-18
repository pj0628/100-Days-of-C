<#
.SYNOPSIS
    Automates environment checks, compilation, testing, Git commits, and GitHub push
    for the 100 Days of C Programming Challenge (Day 01 - Day 96).
#>

Set-StrictMode -Version Latest
$ErrorActionPreference = "Continue"

$RepoUrl = "https://github.com/pj0628/100-Days-of-C.git"
$TotalDays = 96
$ExpectedPrograms = 146

Write-Host "=== 100 Days of C Programming: Setup & Verification ===" -ForegroundColor Cyan

# 1. Check required dependencies
Write-Host "`n[1/6] Checking required tools..." -ForegroundColor Yellow

$missing = @()
if (-not (Get-Command git -ErrorAction SilentlyContinue)) {
    $missing += "Git for Windows (https://git-scm.com/download/win)"
} else {
    Write-Host "  OK: $(git --version)" -ForegroundColor Green
}

if (-not (Get-Command gcc -ErrorAction SilentlyContinue)) {
    $missing += "GCC / MinGW-w64 via MSYS2 (https://www.msys2.org/)"
} else {
    $gccVer = (gcc --version | Select-Object -First 1)
    Write-Host "  OK: $gccVer" -ForegroundColor Green
}

if (Get-Command code -ErrorAction SilentlyContinue) {
    $exts = code --list-extensions 2>$null
    if ($exts -match "ms-vscode\.cpptools") {
        Write-Host "  OK: VS Code C/C++ extension (ms-vscode.cpptools) installed" -ForegroundColor Green
    } else {
        Write-Host "  INFO: VS Code C/C++ extension not detected. Install with: code --install-extension ms-vscode.cpptools" -ForegroundColor DarkYellow
    }
}

if ($missing.Count -gt 0) {
    Write-Host "`nERROR: Missing required dependencies:" -ForegroundColor Red
    $missing | ForEach-Object { Write-Host "  - $_" -ForegroundColor Red }
    exit 1
}

# 2. Verify project folder structure & 146 C files (never silently overwrite)
Write-Host "`n[2/6] Verifying 96 folders and 146 C source files..." -ForegroundColor Yellow

$requiredDocs = @("README.md", "progress.md", ".gitignore")
foreach ($doc in $requiredDocs) {
    if (-not (Test-Path $doc)) {
        Write-Host "ERROR: Required file '$doc' is missing in $(Get-Location)." -ForegroundColor Red
        exit 1
    }
}

$sourceFiles = @()
for ($d = 1; $d -le $TotalDays; $d++) {
    $dayFolder = ("Day-{0:D2}" -f $d)
    if (-not (Test-Path $dayFolder -PathType Container)) {
        Write-Host "ERROR: Missing folder '$dayFolder'. Ensure the project archive is extracted here." -ForegroundColor Red
        exit 1
    }
    $qList = if ($d -le 50) { @("Q1.c", "Q2.c") } else { @("Q1.c") }
    foreach ($q in $qList) {
        $qPath = Join-Path $dayFolder $q
        if (-not (Test-Path $qPath -PathType Leaf)) {
            Write-Host "ERROR: Missing source file '$qPath'." -ForegroundColor Red
            exit 1
        }
        $sourceFiles += [PSCustomObject]@{ Day = $d; Folder = $dayFolder; File = $q; Path = $qPath }
    }
}

if ($sourceFiles.Count -ne $ExpectedPrograms) {
    Write-Host "ERROR: Expected $ExpectedPrograms C files, found $($sourceFiles.Count)." -ForegroundColor Red
    exit 1
}
Write-Host "  OK: Found all 96 folders and $ExpectedPrograms C programs." -ForegroundColor Green

# 3. Compile all 146 C programs
Write-Host "`n[3/6] Compiling all $ExpectedPrograms C programs with GCC..." -ForegroundColor Yellow
$tempBinDir = Join-Path $env:TEMP "100days_c_test_bins"
New-Item -ItemType Directory -Path $tempBinDir -Force | Out-Null

$compileFailures = @()
foreach ($item in $sourceFiles) {
    $exeName = ("d{0:D2}_{1}.exe" -f $item.Day, [System.IO.Path]::GetFileNameWithoutExtension($item.File))
    $exePath = Join-Path $tempBinDir $exeName
    $errOut = & gcc -std=c11 -D__USE_MINGW_ANSI_STDIO=1 -Wall -Wextra $item.Path -o $exePath -lm 2>&1
    if ($LASTEXITCODE -ne 0) {
        $compileFailures += "$($item.Path): $errOut"
    }
}

if ($compileFailures.Count -gt 0) {
    Write-Host "ERROR: Compilation failed for $($compileFailures.Count) file(s):" -ForegroundColor Red
    $compileFailures | ForEach-Object { Write-Host "  $_" -ForegroundColor Red }
    exit 1
}
Write-Host "  OK: All $ExpectedPrograms programs compiled successfully." -ForegroundColor Green

# 4. Run sample test suite
Write-Host "`n[4/6] Running automated sample test cases..." -ForegroundColor Yellow

function Test-CProgram {
    param([int]$Day, [string]$Name, [string]$InputText, [string]$Expected)
    $exePath = Join-Path $tempBinDir ("d{0:D2}_{1}.exe" -f $Day, $Name)
    $actual = ($InputText | & $exePath).Trim()
    if ($LASTEXITCODE -ne 0 -or $actual -ne $Expected) {
        throw "Test failed for Day-$('{0:D2}' -f $Day)/$Name.c -> Expected: '$Expected', Got: '$actual'"
    }
}

try {
    Test-CProgram -Day 1  -Name "Q1" -InputText "3 4"          -Expected "Sum = 7"
    Test-CProgram -Day 1  -Name "Q2" -InputText "10 2"         -Expected "Sum=12, Diff=8, Product=20, Quotient=5"
    Test-CProgram -Day 13 -Name "Q1" -InputText "10 3 %"       -Expected "1"
    Test-CProgram -Day 33 -Name "Q1" -InputText "5 1 3 5 7 9 7" -Expected "Found at index 3"
    Test-CProgram -Day 51 -Name "Q1" -InputText "6 5 7 7 8 8 10 8" -Expected "3,4"
    Test-CProgram -Day 62 -Name "Q1" -InputText "7 2 3 -8 7 -1 2 3" -Expected "11"
    Test-CProgram -Day 96 -Name "Q1" -InputText "Raj 11 12 5 2020" -Expected "Name: Raj | ID: 11 | Joining Date: 12/05/2020"
    Write-Host "  OK: Sample tests passed." -ForegroundColor Green
} catch {
    Write-Host "ERROR: $_" -ForegroundColor Red
    exit 1
} finally {
    Remove-Item -Path $tempBinDir -Recurse -Force -ErrorAction SilentlyContinue
}

# 5. Configure Git safely & create chronological commits
Write-Host "`n[5/6] Configuring Git and creating Day 01 - Day 96 commits..." -ForegroundColor Yellow

if (-not (Test-Path ".git")) {
    git init | Out-Null
    git branch -M main | Out-Null
}

$gitName = git config user.name
$gitEmail = git config user.email
if ([string]::IsNullOrWhiteSpace($gitName)) {
    $gitName = Read-Host "Enter your Git user.name"
    git config user.name "$gitName"
}
if ([string]::IsNullOrWhiteSpace($gitEmail)) {
    $gitEmail = Read-Host "Enter your Git user.email"
    git config user.email "$gitEmail"
}

$existingRemote = git remote get-url origin 2>$null
if ([string]::IsNullOrWhiteSpace($existingRemote)) {
    git remote add origin $RepoUrl
} elseif ($existingRemote -ne $RepoUrl) {
    Write-Host "  INFO: Existing origin is '$existingRemote' (expected '$RepoUrl'). Keeping existing remote." -ForegroundColor DarkYellow
}

$existingCommits = git log --oneline 2>$null
if ([string]::IsNullOrWhiteSpace($existingCommits)) {
    git add .gitignore README.md progress.md setup-100-days.ps1
    git commit -m "Initialize 100 Days of C Programming project structure and documentation" | Out-Null

    for ($d = 1; $d -le $TotalDays; $d++) {
        $dayFolder = ("Day-{0:D2}" -f $d)
        $qCount = if ($d -le 50) { 2 } else { 1 }
        $qWord = if ($qCount -eq 1) { "Question" } else { "Questions" }
        $msg = ("Day {0:D2}: Completed {1} C Programming {2}" -f $d, $qCount, $qWord)

        git add $dayFolder
        git commit -m $msg | Out-Null
    }
    Write-Host "  OK: Created 97 commits (initial setup + Day 01 through Day 96)." -ForegroundColor Green
} else {
    Write-Host "  INFO: Git repository already has commits. Skipping automatic commit generation to preserve history." -ForegroundColor DarkYellow
}

# 6. Push to GitHub after explicit confirmation
Write-Host "`n[6/6] Ready to push to $RepoUrl" -ForegroundColor Yellow
$confirm = Read-Host "Do you want to push to GitHub now? (y/N)"
if ($confirm -match "^[yY]$") {
    git push -u origin main
    if ($LASTEXITCODE -eq 0) {
        Write-Host "`nSUCCESS: Project pushed to $RepoUrl" -ForegroundColor Green
    } else {
        Write-Host "`nERROR: Git push failed. Check authentication or remote repository state." -ForegroundColor Red
        exit 1
    }
} else {
    Write-Host "Push skipped. Run 'git push -u origin main' whenever you are ready." -ForegroundColor Cyan
}
