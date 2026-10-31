@echo off
REM rea.cmd - drive the Ghidra-backed REA decompiler on SoF.exe
REM   usage: rea.cmd decompile <address>
REM          rea.cmd search <query>
REM          rea.cmd xrefs <address>
setlocal
set REA=C:\Users\User\node_modules\rea-agents\scripts\rea.mjs
set NODE=C:\Program Files\nodejs\node.exe
set SOFEXE=C:\Users\User\q2work\sof2\sof_target\SoF.exe
if "%~1"=="decompile" goto decomp
if "%~1"=="search" goto search
if "%~1"=="xrefs" goto xrefs
"%NODE%" "%REA%" %1 %2 %3 %4 %5 %6 %7 %8 %9 --format md
goto :eof
:decomp
"%NODE%" "%REA%" decompile "%SOFEXE%" %2 --provider ghidra --format md %3 %4 %5 %6 %7 %8 %9
goto :eof
:search
"%NODE%" "%REA%" search "%SOFEXE%" %2 --provider ghidra --format md %3 %4 %5 %6 %7 %8 %9
goto :eof
:xrefs
"%NODE%" "%REA%" xrefs "%SOFEXE%" %2 --provider ghidra --format md %3 %4 %5 %6 %7 %8 %9
