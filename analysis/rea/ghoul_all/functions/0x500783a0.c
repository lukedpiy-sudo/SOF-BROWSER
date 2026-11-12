// rea decompile_all
// name: FUN_500783a0
// address: 0x500783a0
// body: available
// range: 0x500783a0-0x50078451 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500783a0(void *this,int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = param_1;
  iVar2 = *(int *)(param_1 + 0x114);
  iVar3 = *(int *)(param_1 + 0x104);
  uVar1 = *(undefined1 *)(iVar3 + iVar2);
  *(int *)(param_1 + 0x114) = iVar2 + 1;
  param_1._0_2_ = CONCAT11(*(undefined1 *)(iVar2 + 1 + iVar3),uVar1);
  *(int *)(iVar4 + 0x114) = iVar2 + 2;
  uVar1 = *(undefined1 *)(iVar2 + 2 + iVar3);
  *(int *)(iVar4 + 0x114) = iVar2 + 3;
  param_1._0_3_ = CONCAT12(uVar1,(undefined2)param_1);
  param_1 = CONCAT13(*(undefined1 *)(iVar2 + 3 + iVar3),(undefined3)param_1);
  *(int *)(iVar4 + 0x114) = iVar2 + 4;
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(iVar4 + 0x188 + param_1 * 4);
  iVar2 = *(int *)(iVar4 + 0x114);
  iVar3 = *(int *)(iVar4 + 0x104);
  iVar5 = iVar2 + 1;
  uVar1 = *(undefined1 *)(iVar3 + -1 + iVar5);
  *(int *)(iVar4 + 0x114) = iVar5;
  param_1._0_2_ = CONCAT11(*(undefined1 *)(iVar5 + iVar3),uVar1);
  *(int *)(iVar4 + 0x114) = iVar2 + 2;
  uVar1 = *(undefined1 *)(iVar2 + 2 + iVar3);
  *(int *)(iVar4 + 0x114) = iVar2 + 3;
  param_1._0_3_ = CONCAT12(uVar1,(undefined2)param_1);
  param_1 = CONCAT13(*(undefined1 *)(iVar2 + 3 + iVar3),(undefined3)param_1);
  *(int *)(iVar4 + 0x114) = iVar2 + 4;
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(iVar4 + 0x318 + param_1 * 4);
  return;
}

