// rea decompile_all
// name: FUN_50085010
// address: 0x50085010
// body: available
// range: 0x50085010-0x50085094 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50085010(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  longlong lVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0x5c);
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xffff7ffe;
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x38))(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  }
  FUN_50083bb0(param_1,0x16);
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffff7ff | 0x8000;
  lVar3 = __ftol();
  *(undefined4 *)(param_1 + 0x5c) = (int)lVar3;
  lVar3 = __ftol();
  *(short *)(param_1 + 0x60) = (short)lVar3;
  return;
}

