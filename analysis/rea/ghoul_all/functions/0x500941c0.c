// rea decompile_all
// name: FUN_500941c0
// address: 0x500941c0
// body: available
// range: 0x500941c0-0x50094269 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500941c0(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 0x1c8) == 0) || ((*(byte *)(param_1 + 0x1b8) & 1) != 0)) {
    *(undefined4 *)(param_1 + 0x2ec) = 0;
    *(undefined4 *)(param_1 + 0x30c) = 1;
  }
  if (*(char **)(param_1 + 0x1c4) != (char *)0x0) {
    for (uVar1 = FUN_500c26a0(0,0x1c8,*(char **)(param_1 + 0x1c4),(void *)0x0); uVar1 != 0;
        uVar1 = FUN_500c26a0(uVar1,0x1c8,*(char **)(param_1 + 0x1c4),(void *)0x0)) {
      iVar2 = __strcmpi(*(char **)(uVar1 + 0x1b4),s_func_areaportal_5014268c);
      if (iVar2 == 0) {
        uVar3 = *(uint *)(uVar1 + 0x318) ^ 1;
        *(uint *)(uVar1 + 0x318) = uVar3;
        (*DAT_5015cad8)(*(undefined4 *)(uVar1 + 0x3bc),uVar3);
      }
    }
  }
  return;
}

