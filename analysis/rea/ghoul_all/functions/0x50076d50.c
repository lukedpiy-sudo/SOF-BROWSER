// rea decompile_all
// name: FUN_50076d50
// address: 0x50076d50
// body: available
// range: 0x50076d50-0x50076da7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50076d50(void *this,int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = param_1;
  iVar4 = *(int *)(param_1 + 0x114);
  iVar5 = *(int *)(param_1 + 0x104);
  uVar1 = *(undefined1 *)(iVar5 + iVar4);
  *(int *)(param_1 + 0x114) = iVar4 + 1;
  uVar2 = *(undefined1 *)(iVar4 + 1 + iVar5);
  *(int *)(iVar6 + 0x114) = iVar4 + 2;
  uVar3 = *(undefined1 *)(iVar4 + 2 + iVar5);
  *(int *)(iVar6 + 0x114) = iVar4 + 3;
  param_1 = CONCAT13(*(undefined1 *)(iVar4 + 3 + iVar5),CONCAT12(uVar3,CONCAT11(uVar2,uVar1)));
  *(int *)(iVar6 + 0x114) = iVar4 + 4;
  *(int *)((int)this + 0x4c) = param_1;
  return;
}

