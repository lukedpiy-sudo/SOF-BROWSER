// rea decompile_all
// name: FUN_500b50d0
// address: 0x500b50d0
// body: available
// range: 0x500b50d0-0x500b5105 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b50d0(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = 0;
  if (0 < param_1) {
    do {
      iVar1 = iVar1 + *(int *)(param_4 + iVar2 * 8);
      iVar2 = iVar2 + 1;
    } while (iVar2 < param_1);
  }
  iVar2 = param_4 + param_1 * 8;
  *(int *)(param_2 + 0x24) = iVar2;
  *(int *)(iVar2 + 4) = param_3 + iVar1 * 0xc;
  return;
}

