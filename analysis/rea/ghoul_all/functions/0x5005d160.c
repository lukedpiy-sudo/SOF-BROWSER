// rea decompile_all
// name: FUN_5005d160
// address: 0x5005d160
// body: available
// range: 0x5005d160-0x5005d39f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_5005d160(void *this,int param_1,uint param_2,char param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_501141f8;
  local_c = ExceptionList;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = 0;
  local_34 = 0;
  local_14 = 0;
  local_10 = (undefined4 *)0x0;
  local_18 = 0;
  local_4 = 0;
  if (*(int *)((int)this + 0x18) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  if (*(uint *)((int)this + 0x24) <= uVar2) {
    ExceptionList = &local_c;
    (*DAT_5015cb54)(s_bot_wp_info_501431a4,0);
    (*DAT_5015cab0)(0,0xc18,*(undefined4 *)((int)this + 0x24));
    FUN_5005c910((int)&local_40);
    ExceptionList = local_c;
    return 0;
  }
  if (param_3 == '\0') {
    if (*(char *)((int)this + 0x28) == '\0') {
      return 0;
    }
    if ((*(int *)((int)this + 0x2c) == 1) && (*(float *)(DAT_5015c978 + 0x18) == 0.0)) {
      return 0;
    }
  }
  if (*(int *)((int)this + 0x18) == 0) {
    local_34 = 0;
  }
  else {
    local_34 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  local_40 = *(undefined4 *)(param_1 + 4);
  local_3c = *(undefined4 *)(param_1 + 8);
  local_38 = *(undefined4 *)(param_1 + 0xc);
  uVar2 = param_2;
  if ((param_2 == 0) && (uVar2 = local_30, *(int *)(param_1 + 0x74) != 0)) {
    uVar2 = *(byte *)(*(int *)(param_1 + 0x74) + 0x10) & 1;
  }
  local_30 = uVar2;
  if (*(int *)((int)this + 0x34) != 0) {
    local_20 = *(int *)((int)this + 0x34);
  }
  if (*(int *)((int)this + 0x18) == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  ExceptionList = &local_c;
  *(int *)((int)this + 0x34) = iVar3;
  if (((int)param_4 < 1) || (iVar3 <= (int)param_4)) {
    FUN_50063510((void *)((int)this + 0x14),*(undefined4 **)((int)this + 0x1c),1,&local_40);
    iVar3 = *(int *)((int)this + 0x18) + *(int *)((int)this + 0x34) * 0x34;
    puVar1 = local_10;
    while (puVar1 != (undefined4 *)0x0) {
      local_10 = (undefined4 *)*puVar1;
      FUN_50106b60((undefined *)puVar1);
      puVar1 = local_10;
    }
  }
  else {
    iVar3 = FUN_5005fd30(this,param_4,&local_40);
    puVar1 = local_10;
    while (puVar1 != (undefined4 *)0x0) {
      local_10 = (undefined4 *)*puVar1;
      FUN_50106b60((undefined *)puVar1);
      puVar1 = local_10;
    }
  }
  ExceptionList = local_c;
  return iVar3;
}

