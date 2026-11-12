// rea decompile_all
// name: FUN_50054280
// address: 0x50054280
// body: available
// range: 0x50054280-0x50054395 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_50054280(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  
  if (*(int *)(param_2 + 0x1a0) < 0) {
    return false;
  }
  iVar1 = *(int *)(param_2 + 0x460);
  if ((iVar1 < 1) || (0x27 < iVar1)) {
    iVar3 = -1;
  }
  else {
    iVar3 = *(int *)(*(int *)(&DAT_5015c7bc + iVar1 * 4) + 0x44);
  }
  if ((iVar1 == 0x25) || (iVar1 == 0x26)) {
    return *(int *)(param_1 + 0x2ec) < 100;
  }
  if (((iVar3 != 0) && (iVar3 != 1)) &&
     ((*(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210) < 3 ||
      ((iVar3 != 2 && (iVar3 != 3)))))) {
    if (iVar1 != 0x24) {
      return false;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x74) + 0x324);
    if (iVar1 == 1) {
      bVar2 = FUN_5006a960(param_2);
      if ((bVar2) && (bVar2 = FUN_5006a980(0x5015c7b8), !bVar2)) {
        return true;
      }
      bVar2 = FUN_5006a9a0(param_2);
      return (bool)(-bVar2 & 2);
    }
    if (iVar1 == 2) {
      bVar2 = FUN_5006a9a0(param_2);
      if ((bVar2) && (bVar2 = FUN_5006a9c0(0x5015c7b8), !bVar2)) {
        return true;
      }
      bVar2 = FUN_5006a960(param_2);
      return (bool)(-bVar2 & 2);
    }
  }
  return true;
}

