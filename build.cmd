@echo off
REM ============================================================
REM  build.cmd - build the game module DLL from source
REM  usage: build.cmd [debug]
REM ============================================================
setlocal

set VCVARSALL=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat
if not exist "%VCVARSALL%" (
  echo [build] FATAL: vcvarsall.bat not found at "%VCVARSALL%"
  exit /b 1
)

REM x86 toolset: the Q2 3.21 game module is a 32-bit DLL (gamex86.dll)
call "%VCVARSALL%" x86 >nul
if errorlevel 1 (
  echo [build] FATAL: vcvarsall x86 failed - is the x86 compiler installed?
  exit /b 1
)

cd /d "%~dp0"

set CONF=Release
if /i "%~1"=="debug" set CONF=Debug

if not exist build mkdir build
if not exist "build\%CONF%" mkdir "build\%CONF%"
if not exist "build\%CONF%\game" mkdir "build\%CONF%\game"

if /i "%CONF%"=="Release" (
  set OPT=/O2 /DNDEBUG
) else (
  set OPT=/Od /Zi
)

echo [build] config=%CONF%
echo [build] compiling game module ...

cl /nologo /c %OPT% /W3 /WX- /MACHINE:X86 /DWIN32 /D_CRT_SECURE_NO_WARNINGS /D_CRT_NONSTDC_NO_DEPRECATE ^
   /I game /Fo:"build\%CONF%\game\\" game\*.c
if errorlevel 1 (
  echo [build] FATAL: compile failed
  exit /b 1
)

echo [build] linking gamex86.dll ...
REM NOTE: the .obj wildcard must NOT be quoted, or link won't expand it
link /NOLOGO /DLL /MACHINE:X86 /OUT:"build\%CONF%\gamex86.dll" ^
     build\%CONF%\game\*.obj /DEF:game\game.def
if errorlevel 1 (
  echo [build] FATAL: link failed
  exit /b 1
)

REM NOTE: no ">" in this message - the shell would treat it as redirection
REM       and clobber the DLL we just linked.
echo [build] OK : build\%CONF%\gamex86.dll

REM Publish to the run tree (dist\Release) so the game actually runs the
REM freshly built module instead of a stale copy.
if not exist "dist\%CONF%" mkdir "dist\%CONF%"
copy /y "build\%CONF%\gamex86.dll" "dist\%CONF%\gamex86.dll" >nul
if errorlevel 1 (
  echo [build] FATAL: could not publish gamex86.dll to dist\%CONF%
  exit /b 1
)
echo [build] published : dist\%CONF%\gamex86.dll
endlocal
