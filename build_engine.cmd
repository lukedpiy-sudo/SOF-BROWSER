@echo off
REM ============================================================
REM  build_engine.cmd - build stock Q2 3.21 as two modules:
REM     dist\Release\ref_gl.dll   renderer, exports GetRefAPI
REM     dist\Release\quake2.exe   client + server + qcommon + win32
REM
REM  Source lists follow ref_gl.dsp / quake2.dsp:
REM    ref_gl  : ref_gl\*.c + win32\{glw_imp,q_shwin,qgl_win}.c
REM              + game\q_shared.c
REM    quake2  : qcommon\*.c + client\*.c + server\*.c + win32\*.c
REM              + game\{q_shared,m_flash}.c
REM
REM  Notes:
REM    * server\sv_null.c stubs out the whole server -> must NOT be built
REM      together with the real server.
REM    * win32\vid_dll.c defines cl_hwnd and hosts ref_gl -> must be built.
REM    * client\x86.c is NASM assembly, not C -> excluded.
REM    * game\q_shared.c supplies Com_sprintf / Q_strcasecmp, which the
REM      engine links too (the game DLL compiles its own copy).
REM
REM  usage: build_engine.cmd [debug]
REM ============================================================
setlocal

set VCVARSALL=C:\Program Files (x86)\Microsoft Visual Studio\2022\BuildTools\VC\Auxiliary\Build\vcvarsall.bat
if not exist "%VCVARSALL%" (
  echo [engine] FATAL: vcvarsall.bat not found
  exit /b 1
)

call "%VCVARSALL%" x86 >nul
if errorlevel 1 (
  echo [engine] FATAL: vcvarsall x86 failed
  exit /b 1
)

set SRC=C:\Users\User\q2src\extract\Quake-2-master
if not exist "%SRC%\qcommon\cmodel.c" (
  echo [engine] FATAL: Q2 source not found at %SRC%
  exit /b 1
)

cd /d "%~dp0"

set CONF=Release
if /i "%~1"=="debug" set CONF=Debug

if not exist "build\%CONF%" mkdir "build\%CONF%"
if not exist "build\%CONF%\refgl" mkdir "build\%CONF%\refgl"
if not exist "dist\%CONF%" mkdir "dist\%CONF%"

if /i "%CONF%"=="Release" ( set OPT=/O2 /DNDEBUG ) else ( set OPT=/Od /Zi )

REM Q2 uses POSIX spellings; map them onto the Win32 CRT.
set DEFS=/DWIN32 /D_CRT_SECURE_NO_WARNINGS /D_CRT_NONSTDC_NO_DEPRECATE /Dstrcasecmp=_stricmp /Dstrncasecmp=_strnicmp

echo [engine] config=%CONF%

REM ---------------------------------------------------------------
REM 1. ref_gl.dll
REM ---------------------------------------------------------------
echo [engine] compiling ref_gl ...
for %%F in ("%SRC%\ref_gl\*.c") do (
  cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\refgl\\" "%%F"
  if errorlevel 1 ( echo [engine] FATAL: ref_gl %%~nxF & exit /b 1 )
)
for %%F in (glw_imp q_shwin qgl_win) do (
  cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\refgl\\" "%SRC%\win32\%%F.c"
  if errorlevel 1 ( echo [engine] FATAL: win32\%%F.c & exit /b 1 )
)
cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\refgl\\" "%SRC%\game\q_shared.c"
if errorlevel 1 ( echo [engine] FATAL: ref_gl q_shared.c & exit /b 1 )

link /NOLOGO /DLL /MACHINE:X86 /OUT:"dist\%CONF%\ref_gl.dll" ^
     build\%CONF%\refgl\*.obj opengl32.lib gdi32.lib user32.lib winmm.lib ^
     /DEF:"%SRC%\ref_gl\ref_gl.def"
if errorlevel 1 ( echo [engine] FATAL: ref_gl link failed & exit /b 1 )
echo [engine]   OK ref_gl.dll

REM ---------------------------------------------------------------
REM 2. quake2.exe
REM ---------------------------------------------------------------
echo [engine] compiling qcommon ...
for %%F in ("%SRC%\qcommon\*.c") do (
  cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\\" "%%F"
  if errorlevel 1 ( echo [engine] FATAL: qcommon %%~nxF & exit /b 1 )
)

echo [engine] compiling client ...
for %%F in ("%SRC%\client\*.c") do (
  echo %%~nxF | findstr /i "x86.c" >nul && echo [engine]   skipping %%~nxF ^& exit /b 0 || (
    cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\\" "%%F"
    if errorlevel 1 ( echo [engine] FATAL: client %%~nxF & exit /b 1 )
  )
)

echo [engine] compiling server ...
for %%F in ("%SRC%\server\*.c") do (
  echo %%~nxF | findstr /i "sv_null.c" >nul && echo [engine]   skipping %%~nxF || (
    cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\\" "%%F"
    if errorlevel 1 ( echo [engine] FATAL: server %%~nxF & exit /b 1 )
  )
)

REM vid_dll.c is required (defines cl_hwnd, hosts ref_gl) - build the rest of
REM win32 too. rw_*.c belong to ref_soft (the software renderer) and are not
REM part of the GL build, so they are skipped.
echo [engine] compiling win32 ...
for %%F in ("%SRC%\win32\*.c") do (
  echo %%~nxF | findstr /i "qgl_win.c glw_imp.c rw_ddraw.c rw_dib.c rw_imp.c" >nul && echo [engine]   skipping %%~nxF || (
    cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\\" "%%F"
    if errorlevel 1 ( echo [engine] FATAL: win32 %%~nxF & exit /b 1 )
  )
)

for %%F in (q_shared m_flash) do (
  cl /nologo /c %OPT% /W3 /WX- %DEFS% /Fo"build\%CONF%\\" "%SRC%\game\%%F.c"
  if errorlevel 1 ( echo [engine] FATAL: game\%%F.c & exit /b 1 )
)

echo [engine] linking quake2.exe ...
link /NOLOGO /SUBSYSTEM:WINDOWS /MACHINE:X86 /OUT:"dist\%CONF%\quake2.exe" ^
     build\%CONF%\*.obj opengl32.lib gdi32.lib user32.lib ws2_32.lib winmm.lib advapi32.lib
if errorlevel 1 ( echo [engine] FATAL: quake2 link failed & exit /b 1 )

echo [engine] OK : dist\%CONF%\quake2.exe
endlocal
