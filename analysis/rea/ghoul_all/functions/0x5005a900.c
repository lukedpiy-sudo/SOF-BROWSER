// rea decompile_all
// name: FUN_5005a900
// address: 0x5005a900
// body: available
// range: 0x5005a900-0x5005a96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __thiscall FUN_5005a900(void *this,undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  *(undefined1 *)this = *param_1;
  if (*(int *)(param_1 + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 9;
  }
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  puVar3 = operator_new(iVar2 << 9);
  *(undefined4 **)((int)this + 4) = puVar3;
  puVar1 = *(undefined4 **)(param_1 + 8);
  for (puVar4 = *(undefined4 **)(param_1 + 4); puVar4 != puVar1; puVar4 = puVar4 + 0x80) {
    if (puVar3 != (undefined4 *)0x0) {
      puVar5 = puVar4;
      puVar6 = puVar3;
      for (iVar2 = 0x80; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar6 = puVar6 + 1;
      }
    }
    puVar3 = puVar3 + 0x80;
  }
  *(undefined4 **)((int)this + 8) = puVar3;
  *(undefined4 **)((int)this + 0xc) = puVar3;
  return this;
}

