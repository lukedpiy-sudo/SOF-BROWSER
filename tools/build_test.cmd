@echo off
REM ============================================================
REM  build_test.cmd - compile and run the game-module unit tests
REM  usage: build_test.cmd
REM ============================================================
setlocal

set VCVARSALL=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat
if not exist "%VCVARSALL%" (
  echo [test] FATAL: vcvarsall.bat not found
  exit /b 1
)

call "%VCVARSALL%" x86 >nul
if errorlevel 1 (
  echo [test] FATAL: vcvarsall x86 failed
  exit /b 1
)

cd /d "%~dp0.."

if not exist build mkdir build
if not exist "build\test" mkdir "build\test"

echo [test] compiling g_sof_combat.c ...
cl /nologo /c /O2 /W3 /WX- /DWIN32 /D_CRT_SECURE_NO_WARNINGS ^
   /I game /Fo:"build\test\\" game\g_sof_combat.c
if errorlevel 1 (
  echo [test] FATAL: g_sof_combat.c compile failed
  exit /b 1
)

echo [test] compiling g_sof_weapon.c ...
cl /nologo /c /O2 /W3 /WX- /DWIN32 /D_CRT_SECURE_NO_WARNINGS ^
   /I game /Fo:"build\test\\" game\g_sof_weapon.c
if errorlevel 1 (
  echo [test] FATAL: g_sof_weapon.c compile failed
  exit /b 1
)

echo [test] compiling g_sof.c ...
cl /nologo /c /O2 /W3 /WX- /DWIN32 /D_CRT_SECURE_NO_WARNINGS ^
   /I game /Fo:"build\test\\" game\g_sof.c
if errorlevel 1 (
  echo [test] FATAL: g_sof.c compile failed
  exit /b 1
)

echo [test] compiling tools\test_combat.c ...
cl /nologo /c /O2 /W3 /WX- /DWIN32 /D_CRT_SECURE_NO_WARNINGS ^
   /I game /Fo:"build\test\\" tools\test_combat.c
if errorlevel 1 (
  echo [test] FATAL: test_combat.c compile failed
  exit /b 1
)

echo [test] linking test_combat.exe ...
link /NOLOGO /OUT:"build\test\test_combat.exe" build\test\g_sof_combat.obj build\test\g_sof_weapon.obj build\test\g_sof.obj build\test\test_combat.obj
if errorlevel 1 (
  echo [test] FATAL: link failed
  exit /b 1
)

echo [test] running ...
"build\test\test_combat.exe"
set RC=%ERRORLEVEL%
echo [test] exit code %RC%
endlocal & exit /b %RC%