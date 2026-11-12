// rea decompile_all
// name: FUN_50063bf0
// address: 0x50063bf0
// body: available
// range: 0x50063bf0-0x50063c7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __thiscall FUN_50063bf0(void *this,undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  iVar2 = *(int *)((int)this + 8);
  puVar4 = param_1;
  if (param_2 != iVar2) {
    iVar5 = param_2 + 8;
    do {
      *puVar4 = *(undefined1 *)(iVar5 + -8);
      *(undefined2 *)(puVar4 + 2) = *(undefined2 *)(puVar4 + (param_2 - (int)param_1) + 2);
      *(undefined2 *)(puVar4 + 4) = *(undefined2 *)(iVar5 + -4);
      FUN_50064950(puVar4 + 8,iVar5);
      puVar4[0x18] = *(undefined1 *)(iVar5 + 0x10);
      puVar4 = puVar4 + 0x1c;
      iVar1 = iVar5 + 0x14;
      iVar5 = iVar5 + 0x1c;
    } while (iVar1 != iVar2);
  }
  puVar3 = *(undefined1 **)((int)this + 8);
  puVar6 = puVar4;
  if (puVar4 == puVar3) {
    *(undefined1 **)((int)this + 8) = puVar4;
    return param_1;
  }
  do {
    FUN_50063120((int)puVar6);
    puVar6 = puVar6 + 0x1c;
  } while (puVar6 != puVar3);
  *(undefined1 **)((int)this + 8) = puVar4;
  return param_1;
}

