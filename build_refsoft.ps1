# build_refsoft.ps1 - build the Q2 software renderer (ref_soft.dll)
#
# The software renderer is a separate module from ref_gl and is what a client
# falls back to when OpenGL is unavailable. Its win32 layer is win32\rw_*.c
# and its x86 inner loops are MASM (ref_soft\*.asm).

$ErrorActionPreference = 'Stop'

# Capture the full MSVC environment (INCLUDE / LIB / PATH) from vcvarsall.
$vcvarsall = 'C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat'
if (-not (Test-Path -LiteralPath $vcvarsall)) { throw "vcvarsall.bat not found" }
$dump = & cmd /c "`"$vcvarsall`" x86 >nul 2>&1 && set" 2>$null
if (-not $dump) { throw 'vcvarsall x86 failed' }
foreach ($line in $dump) {
    $i = $line.IndexOf('=')
    if ($i -gt 0) {
        $k = $line.Substring(0, $i)
        $v = $line.Substring($i + 1)
        Set-Item -Path "Env:$k" -Value $v -ErrorAction SilentlyContinue
    }
}

$src = 'C:\Users\User\q2src\extract\Quake-2-master'
if (-not (Test-Path -LiteralPath "$src\ref_soft\r_main.c")) { throw "Q2 source not found at $src" }

$root = $PSScriptRoot
if (-not $root) { $root = Get-Location }
$bin  = Join-Path $root 'build\Release\refsoft'
$dist = Join-Path $root 'dist\Release'
# Start clean: stale objects here once leaked into the engine's link (which
# globs build\Release\*.obj) and caused duplicate-symbol errors.
if (Test-Path -LiteralPath $bin) { Remove-Item -LiteralPath $bin -Recurse -Force }
New-Item -ItemType Directory -Force -Path $bin, $dist | Out-Null

$ml = 'C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x86\ml.exe'
if (-not (Test-Path -LiteralPath $ml)) { throw "ml.exe not found" }

# Locate cl.exe / link.exe from the same VC toolset.
$cl = $ml -replace 'ml\.exe$','cl.exe'
if (-not (Test-Path -LiteralPath $cl)) { $cl = 'cl' }
$link = $ml -replace 'ml\.exe$','link.exe'
if (-not (Test-Path -LiteralPath $link)) { $link = 'link' }

$opt  = '/O2','/DNDEBUG'
$defs = '/DWIN32','/D_CRT_SECURE_NO_WARNINGS','/D_CRT_NONSTDC_NO_DEPRECATE','/Dstrcasecmp=_stricmp','/Dstrncasecmp=_strnicmp'

Write-Host '[refsoft] assembling MASM ...'
foreach ($f in Get-ChildItem -Path "$src\ref_soft\*.asm") {
    $o = Join-Path $bin ($f.BaseName + '.obj')
    & $ml /nologo /c /coff "/I$src\ref_soft" "/Fo$o" $f.FullName
    if ($LASTEXITCODE -ne 0) { throw "asm failed: $($f.Name)" }
}

Write-Host '[refsoft] compiling ref_soft ...'
foreach ($f in Get-ChildItem -Path "$src\ref_soft\*.c") {
    & $cl /nologo /c @opt /W3 /WX- @defs "/Fo$bin\" $f.FullName
    if ($LASTEXITCODE -ne 0) { throw "compile failed: $($f.Name)" }
}

Write-Host '[refsoft] compiling win32 layer ...'
# vid_dll.c is the ENGINE's video host (it owns cl/cls/vidref_val and calls
# REF_LoadRef). The original Q2 3.21 ref_soft link omits it too - the renderer
# module talks to the engine only through the refimport_t struct.
foreach ($n in 'rw_ddraw','rw_dib','rw_imp') {
    & $cl /nologo /c @opt /W3 /WX- @defs "/Fo$bin\" "$src\win32\$n.c"
    if ($LASTEXITCODE -ne 0) { throw "compile failed: $n.c" }
}

# Self-contained platform helpers (Sys_Milliseconds, Sys_Mkdir, Hunk_*).
& $cl /nologo /c @opt /W3 /WX- @defs "/Fo$bin\" (Join-Path $root 'refsoft_shim\rw_sysshim.c')
if ($LASTEXITCODE -ne 0) { throw 'compile failed: rw_sysshim.c' }

& $cl /nologo /c @opt /W3 /WX- @defs "/Fo$bin\" "$src\game\q_shared.c"
if ($LASTEXITCODE -ne 0) { throw 'compile failed: q_shared.c' }

Write-Host '[refsoft] linking ...'
# The module is fully self-contained: it imports nothing from quake2.exe, so
# no engine import library is needed (and the engine stays export-free).
& $link /NOLOGO /DLL /MACHINE:X86 "/OUT:$dist\ref_soft.dll" (Get-ChildItem -Path $bin -Filter *.obj | ForEach-Object { $_.FullName }) gdi32.lib user32.lib winmm.lib "/DEF:$src\ref_soft\ref_soft.def"
if ($LASTEXITCODE -ne 0) { throw 'link failed' }

Write-Host '[refsoft] OK'
