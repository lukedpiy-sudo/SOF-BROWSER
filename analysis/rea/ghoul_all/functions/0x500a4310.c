// rea decompile_all
// name: FUN_500a4310
// address: 0x500a4310
// body: available
// range: 0x500a4310-0x500a4438 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_500a4310(void *this,int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114ebb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)((int)this + 4) = (undefined1)param_1;
  *(undefined1 *)((int)this + 5) = (undefined1)param_1;
  *(undefined1 *)((int)this + 0x10) = 0;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)((int)this + 0xc) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  **(undefined4 **)((int)this + 0xc) = 0;
  *(undefined4 *)(*(int *)((int)this + 0xc) + 8) = 0;
  uVar1 = *(undefined4 *)((int)this + 0xc);
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)((int)this + 8) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0x14) = 0;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x18) = (undefined1)param_1;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  *(void **)((int)this + 0x1c) = pvVar2;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined ***)this = &PTR_LAB_50129854;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined1 *)((int)this + 0x28) = *(undefined1 *)(param_1 + 0x28);
  *(undefined1 *)((int)this + 0x29) = *(undefined1 *)(param_1 + 0x29);
  _strncpy((char *)((int)this + 0x42a),(char *)(param_1 + 0x42a),100);
  _strncpy((char *)((int)this + 0x48e),(char *)(param_1 + 0x48e),100);
  _strncpy((char *)((int)this + 0x4f2),(char *)(param_1 + 0x4f2),100);
  _strncpy((char *)((int)this + 0x556),(char *)(param_1 + 0x556),100);
  puVar4 = (undefined4 *)(param_1 + 0x2a);
  puVar5 = (undefined4 *)((int)this + 0x2a);
  for (iVar3 = 0x100; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
  }
  ExceptionList = local_c;
  return this;
}

