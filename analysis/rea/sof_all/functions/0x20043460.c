// rea decompile_all
// name: FUN_20043460
// address: 0x20043460
// body: available
// range: 0x20043460-0x200434c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200434bf to 0x20041da0 FUN_20041da0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20043460(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = FUN_200434d0(param_1);
  if (iVar1 != 0) {
    iVar1 = 0;
    piVar2 = (int *)(in_ECX + 0xdb50);
    do {
      if (*piVar2 == 0) {
        iVar1 = in_ECX + iVar1 * 0x34c;
        *(undefined4 *)(iVar1 + 0xdb50) = 1;
        if (iVar1 == -0xd808) {
          return;
        }
        FUN_20041da0();
        return;
      }
      iVar1 = iVar1 + 1;
      piVar2 = piVar2 + 0xd3;
    } while (iVar1 < 0x100);
  }
  return;
}

