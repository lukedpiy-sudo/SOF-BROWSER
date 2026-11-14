// rea decompile_all
// name: FUN_3002359f
// address: 0x3002359f
// body: available
// range: 0x3002359f-0x30023637 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x30023630 to EXTERNAL:0x6 KERNEL32.DLL::ExitProcess (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3002359f(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_300aa528 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_300aa524 = 1;
  DAT_300aa520 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_300abb10 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_300abb0c - 4), DAT_300abb10 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_300abb10 <= puVar1);
    }
    FUN_30023638((undefined4 *)&DAT_3002e0b8,(undefined4 *)&DAT_3002e0c0);
  }
  FUN_30023638((undefined4 *)&DAT_3002e0c4,(undefined4 *)&DAT_3002e0cc);
  if (param_3 != 0) {
    return;
  }
  DAT_300aa528 = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

