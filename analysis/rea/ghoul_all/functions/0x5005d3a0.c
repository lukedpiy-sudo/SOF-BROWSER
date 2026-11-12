// rea decompile_all
// name: FUN_5005d3a0
// address: 0x5005d3a0
// body: available
// range: 0x5005d3a0-0x5005d528 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall
FUN_5005d3a0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4
            )

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114218;
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
    uVar3 = 0;
  }
  else {
    uVar3 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  if (*(uint *)((int)this + 0x24) <= uVar3) {
    ExceptionList = &local_c;
    (*DAT_5015cb54)(s_bot_wp_info_501431a4,0);
    (*DAT_5015cab0)(0,0xc18,*(undefined4 *)((int)this + 0x24));
    puVar2 = local_10;
    while (puVar2 != (undefined4 *)0x0) {
      local_10 = (undefined4 *)*puVar2;
      FUN_50106b60((undefined *)puVar2);
      puVar2 = local_10;
    }
    ExceptionList = local_c;
    return 0;
  }
  local_30 = param_3;
  local_34 = param_2;
  local_1c = 0;
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_14 = param_4;
  ExceptionList = &local_c;
  FUN_50063510((void *)((int)this + 0x14),*(undefined4 **)((int)this + 0x1c),1,&local_40);
  if (*(int *)((int)this + 0x18) == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)this + 0x1c) - *(int *)((int)this + 0x18)) / 0x34;
  }
  iVar1 = *(int *)((int)this + 0x18);
  puVar2 = local_10;
  while (puVar2 != (undefined4 *)0x0) {
    local_10 = (undefined4 *)*puVar2;
    FUN_50106b60((undefined *)puVar2);
    puVar2 = local_10;
  }
  ExceptionList = local_c;
  return iVar1 + -0x34 + iVar4 * 0x34;
}

