@echo off
REM rea_gamex.cmd - drive the Ghidra-backed REA decompiler on gamex86.dll
REM   usage: rea_gamex.cmd decompile <address>
REM          rea_gamex.cmd search <query>
REM          rea_gamex.cmd xrefs <address>
setlocal
set REA=C:\Users\User\node_modules\rea-agents\scripts\rea.mjs
set NODE=C:\Program Files\nodejs\node.exe
set GMX=C:\Users\User\q2work\sof2\sof_target\gamex86.dll
if "%~1"=="decompile" goto decomp
if "%~1"=="search" goto search
if "%~1"=="xrefs" goto xrefs
"%NODE%" "%REA%" %1 %2 %3 %4 %5 %6 %7 %8 %9
goto :eof
:decomp
"%NODE%" "%REA%" decompile "%GMX%" %2 --provider ghidra --format md %3 %4 %5 %6 %7 %8 %9
goto :eof
:search
"%NODE%" "%REA%" search "%GMX%" %2 --provider ghidra --format md %3 %4 %5 %6 %7 %8 %9
goto :eof
:xrefs
"%NODE%" "%REA%" xrefs "%GMX%" %2 --provider ghidra --format md %3 %4 %5 %6 %7 %8 %9
goto :eof
