// rea decompile_all
// name: FUN_50054860
// address: 0x50054860
// body: available
// range: 0x50054860-0x5005493b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_50054860(int param_1)

{
  int iVar1;
  float afStack_10 [4];
  
  if (*(int *)(param_1 + 0x45c) == 0) {
    return false;
  }
  if (DAT_5015ccdc < *(float *)(*(int *)(param_1 + 0x45c) + 0x3f8)) {
    return true;
  }
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x54))(2);
  if (iVar1 == 0) {
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x54))(6);
    if (iVar1 == 0) {
      return true;
    }
  }
  FUN_500c3570((float *)&stack0xffffffd8,afStack_10);
  *(float *)(*(int *)(param_1 + 0x74) + 0x4fc) = afStack_10[0];
  iVar1 = FUN_50054790(param_1,2);
  if (iVar1 == 3) {
    iVar1 = FUN_50054790(param_1,6);
  }
  return iVar1 == 1;
}

