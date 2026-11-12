// rea decompile_all
// name: FUN_50065880
// address: 0x50065880
// body: available
// range: 0x50065880-0x500658b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_50065880(int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*DAT_5015c4d8 + 0x4c))();
  if ((iVar1 != 0) &&
     ((iVar1 = *(int *)(param_1 + 0x148), iVar1 == 4 || ((6 < iVar1 && (iVar1 < 9)))))) {
    return *(uint *)(param_1 + 0xc) | 2;
  }
  return *(uint *)(param_1 + 0xc);
}

