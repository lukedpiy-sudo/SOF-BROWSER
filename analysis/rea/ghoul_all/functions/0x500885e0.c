// rea decompile_all
// name: FUN_500885e0
// address: 0x500885e0
// body: available
// range: 0x500885e0-0x5008865f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x5008865b to 0x50088190 FUN_50088190 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500885e0(int param_1)

{
  int *piVar1;
  int iVar2;
  longlong lVar3;
  
  iVar2 = 1;
  lVar3 = __ftol();
  if (0 < (int)lVar3) {
    piVar1 = (int *)(DAT_5015cca0 + 0x4d8);
    do {
      if ((piVar1[1] != 0) && (*(int *)(*piVar1 + 800) == 0)) {
        *(int **)(*(int *)(param_1 + 0x74) + 0x538) = piVar1 + -0x1d;
        *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x53c) = 1;
        FUN_50088190(param_1);
        return;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 0x119;
    } while (iVar2 <= (int)lVar3);
  }
  (*DAT_5015cab0)(param_1,0x36);
  return;
}

