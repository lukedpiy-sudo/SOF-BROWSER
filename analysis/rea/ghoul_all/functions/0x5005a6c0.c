// rea decompile_all
// name: FUN_5005a6c0
// address: 0x5005a6c0
// body: available
// range: 0x5005a6c0-0x5005a8d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __thiscall FUN_5005a6c0(void *this,undefined1 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114084;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)this = *param_1;
  if (*(int *)(param_1 + 4) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 8) - *(int *)(param_1 + 4) >> 9;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 << 9);
  *(undefined4 **)((int)this + 4) = puVar2;
  puVar3 = *(undefined4 **)(param_1 + 8);
  for (puVar5 = *(undefined4 **)(param_1 + 4); puVar5 != puVar3; puVar5 = puVar5 + 0x80) {
    if (puVar2 != (undefined4 *)0x0) {
      puVar6 = puVar5;
      puVar7 = puVar2;
      for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    puVar2 = puVar2 + 0x80;
  }
  *(undefined4 **)((int)this + 8) = puVar2;
  *(undefined4 **)((int)this + 0xc) = puVar2;
  local_4 = 0;
  *(undefined1 *)((int)this + 0x10) = param_1[0x10];
  if (*(int *)(param_1 + 0x14) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x14) >> 9;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 << 9);
  *(undefined4 **)((int)this + 0x14) = puVar2;
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  for (puVar5 = *(undefined4 **)(param_1 + 0x14); puVar5 != puVar3; puVar5 = puVar5 + 0x80) {
    FUN_5005c1b0(puVar2,puVar5);
    puVar2 = puVar2 + 0x80;
  }
  *(undefined4 **)((int)this + 0x18) = puVar2;
  *(undefined4 **)((int)this + 0x1c) = puVar2;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined1 *)((int)this + 0x20) = param_1[0x20];
  if (*(int *)(param_1 + 0x24) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x24) >> 9;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar2 = operator_new(iVar1 << 9);
  *(undefined4 **)((int)this + 0x24) = puVar2;
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  for (puVar5 = *(undefined4 **)(param_1 + 0x24); puVar5 != puVar3; puVar5 = puVar5 + 0x80) {
    FUN_5005c1b0(puVar2,puVar5);
    puVar2 = puVar2 + 0x80;
  }
  *(undefined4 **)((int)this + 0x28) = puVar2;
  *(undefined4 **)((int)this + 0x2c) = puVar2;
  local_4._1_3_ = (undefined3)((uint)local_4 >> 8);
  local_4._0_1_ = 2;
  *(undefined1 *)((int)this + 0x30) = param_1[0x30];
  if (*(int *)(param_1 + 0x34) == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x38) - *(int *)(param_1 + 0x34) >> 9;
  }
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar3 = operator_new(iVar1 << 9);
  *(undefined4 **)((int)this + 0x34) = puVar3;
  uVar4 = FUN_5005b000(*(undefined4 **)(param_1 + 0x34),*(undefined4 **)(param_1 + 0x38),puVar3);
  *(undefined4 *)((int)this + 0x38) = uVar4;
  *(undefined4 *)((int)this + 0x3c) = uVar4;
  local_4._0_1_ = 3;
  *(undefined1 *)((int)this + 0x40) = param_1[0x40];
  iVar1 = FUN_5005a8e0((int)(param_1 + 0x40));
  if (iVar1 < 0) {
    iVar1 = 0;
  }
  puVar3 = operator_new(iVar1 << 9);
  *(undefined4 **)((int)this + 0x44) = puVar3;
  uVar4 = FUN_5005b000(*(undefined4 **)(param_1 + 0x44),*(undefined4 **)(param_1 + 0x48),puVar3);
  *(undefined4 *)((int)this + 0x48) = uVar4;
  *(undefined4 *)((int)this + 0x4c) = uVar4;
  local_4 = CONCAT31(local_4._1_3_,4);
  FUN_5005a900((void *)((int)this + 0x50),param_1 + 0x50);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  ExceptionList = local_c;
  return this;
}

