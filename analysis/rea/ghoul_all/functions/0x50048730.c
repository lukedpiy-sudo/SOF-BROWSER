// rea decompile_all
// name: FUN_50048730
// address: 0x50048730
// body: available
// range: 0x50048730-0x500487b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __fastcall FUN_50048730(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*(int *)(param_1 + 8) - *(int *)(param_1 + 4)) / 0x88;
  }
  if (0 < iVar1) {
    iVar2 = 0;
    do {
      FUN_50046e80(*(int *)(param_1 + 4) + iVar2);
      iVar2 = iVar2 + 0x88;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  if (*(int *)(param_1 + 0x186a18) == 0) {
    iVar2 = 0;
    iVar1 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x186a1c) - *(int *)(param_1 + 0x186a18);
    iVar1 = iVar2 * 0x78787879;
    iVar2 = iVar2 / 0x88;
  }
  if (0 < iVar2) {
    iVar3 = 0;
    do {
      iVar1 = FUN_50046e80(*(int *)(param_1 + 0x186a18) + iVar3);
      iVar3 = iVar3 + 0x88;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar1;
}

