// rea decompile_all
// name: FUN_30014b80
// address: 0x30014b80
// body: available
// range: 0x30014b80-0x30014bd3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_30014b80(int param_1)

{
  int iVar1;
  longlong lVar2;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    if (((*(uint *)(param_1 + 0x20) & 0x1000) == 0) ||
       (*(char *)(*(int *)(param_1 + 0x2c) + 0x55) == '\0')) {
      iVar1 = *(int *)(DAT_3008fed8 + 0x34);
    }
    else {
      lVar2 = __ftol();
      iVar1 = (int)lVar2;
    }
    for (iVar1 = iVar1 % *(int *)(param_1 + 0x24); iVar1 != 0; iVar1 = iVar1 + -1) {
      param_1 = *(int *)(param_1 + 0x28);
    }
  }
  return *(undefined4 *)(param_1 + 0x2c);
}

