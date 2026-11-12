// rea decompile_all
// name: FUN_5010a369
// address: 0x5010a369
// body: available
// range: 0x5010a369-0x5010a401 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5010a3fa to EXTERNAL:0xe KERNEL32.DLL::ExitProcess (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5010a369(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_5018c34c == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  DAT_5018c348 = 1;
  DAT_5018c344 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_5018d990 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_5018d98c - 4), DAT_5018d990 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_5018d990 <= puVar1);
    }
    FUN_5010a402((undefined4 *)&DAT_5012f2f8,(undefined4 *)&DAT_5012f300);
  }
  FUN_5010a402((undefined4 *)&DAT_5012f304,(undefined4 *)&DAT_5012f30c);
  if (param_3 != 0) {
    return;
  }
  DAT_5018c34c = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

