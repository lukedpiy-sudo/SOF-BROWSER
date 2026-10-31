@echo off
REM ============================================================
REM  build_refsoft.cmd - build the Q2 software renderer:
REM     dist\Release\ref_soft.dll   exports GetRefAPI
REM
REM  The software renderer is a separate module from ref_gl and
REM  is what a client falls back to when OpenGL is unavailable.
REM  Its win32 layer lives in win32\rw_*.c and its x86 inner
REM  loops are MASM (ref_soft\*.asm).
REM
REM  usage: build_refsoft.cmd
REM ============================================================
setlocal

set VCVARSALL=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat
if not exist "%VCVARSALL%" (
  echo [refsoft] FATAL: vcvarsall.bat not found
  exit /b 1
)

call "%VCVARSALL%" x86 >nul
if errorlevel 1 (
  echo [refsoft] FATAL: vcvarsall x86 failed
  exit /b 1
)

set SRC=C:\Users\User\q2src\extract\Quake-2-master
if not exist "%SRC%\ref_soft\r_main.c" (
  echo [refsoft] FATAL: Q2 source not found at %SRC%
  exit /b 1
)

set ROOT=%~dp0
set BIN=%ROOT%build\Release\refsoft
if not exist "%BIN%" mkdir "%BIN%"

set ML=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Tools\MSVC\14.44.35207\bin\Hostx64\x86\ml.exe
if not exist "%ML%" (
  echo [refsoft] FATAL: ml.exe not found
  exit /b 1
)

set DEFS=/DWIN32 /D_CRT_SECURE_NO_WARNINGS /D_CRT_NONSTDC_NO_DEPRECATE /Dstrcasecmp=_stricmp /Dstrncasecmp=_strnicmp
set OPT=/O2 /DNDEBUG

echo [refsoft] assembling MASM ...
for %%F in ("%SRC%\ref_soft\*.asm") do (
  "%ML%" /nologo /c /coff /I"%SRC%\ref_soft" /Fo"%BIN%\%%~nF.obj" "%%F"
  if errorlevel 1 ( echo [refsoft] FATAL: asm %%~nxF & exit /b 1 )
)

echo [refsoft] compiling ref_soft ...
for %%F in ("%SRC%\ref_soft\*.c") do (
  cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"%BIN%\\" "%%F"
  if errorlevel 1 ( echo [refsoft] FATAL: %%~nxF & exit /b 1 )
)

echo [refsoft] compiling win32 layer ...
for %%F in (rw_ddraw rw_dib rw_imp vid_dll) do (
  cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"%BIN%\\" "%SRC%\win32\%%F.c"
  if errorlevel 1 ( echo [refsoft] FATAL: win32\%%F.c & exit /b 1 )
)

cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"%BIN%\\" "%SRC%\game\q_shared.c"
if errorlevel 1 ( echo [refsoft] FATAL: q_shared.c & exit /b 1 )

echo [refsoft] linking ref_soft.dll ...
link /NOLOGO /DLL /MACHINE:X86 /OUT:"%ROOT%dist\Release\ref_soft.dll" ^
     "%BIN%\*.obj" gdi32.lib user32.lib winmm.lib ^
     /DEF:"%SRC%\ref_soft\ref_soft.def"
if errorlevel 1 ( echo [refsoft] FATAL: link failed & exit /b 1 )

echo [refsoft] OK : dist\Release\ref_soft.dll
endlocal
