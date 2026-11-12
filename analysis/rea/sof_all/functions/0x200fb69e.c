// rea decompile_all
// name: FUN_200fb69e
// address: 0x200fb69e
// body: available
// range: 0x200fb69e-0x200fb736 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200fb72f to EXTERNAL:0xa0 KERNEL32.DLL::ExitProcess (external=true, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200fb69e(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  undefined4 *puVar1;
  UINT uExitCode;
  
  if (DAT_204083dc == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_204083d8 = 1;
  DAT_204083d4 = (undefined1)param_3;
  if (param_2 == 0) {
    if ((DAT_20409bb0 != (undefined4 *)0x0) &&
       (puVar1 = (undefined4 *)(DAT_20409bac - 4), DAT_20409bb0 <= puVar1)) {
      do {
        if ((code *)*puVar1 != (code *)0x0) {
          (*(code *)*puVar1)();
        }
        puVar1 = puVar1 + -1;
      } while (DAT_20409bb0 <= puVar1);
    }
    FUN_200fb737(&DAT_2011c29c,&DAT_2011c2a8);
  }
  FUN_200fb737(&DAT_2011c2ac,&DAT_2011c2b4);
  if (param_3 != 0) {
    return;
  }
  DAT_204083dc = 1;
                    /* WARNING: Subroutine does not return */
  ExitProcess(param_1);
}

