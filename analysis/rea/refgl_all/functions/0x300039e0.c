// rea decompile_all
// name: FUN_300039e0
// address: 0x300039e0
// body: available
// range: 0x300039e0-0x30003b7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x30003a28) */

void __fastcall FUN_300039e0(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 local_38 [2];
  undefined1 local_30 [4];
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20 [4];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b540;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x10) != 0) {
    return;
  }
  local_30[0] = *(undefined1 *)(param_1 + 0x18);
  local_2c = (undefined4 *)0x0;
  uVar1 = *(uint *)(param_1 + 0x20);
  local_28 = 0;
  local_24 = 0;
  if (local_30 == (undefined1 *)(param_1 + 0x18)) {
    ExceptionList = &local_c;
    FUN_30005230(local_30,uVar1,0xffffffff);
    FUN_30005230(local_30,0,0);
  }
  else {
    if (uVar1 != 0) {
      puVar2 = *(undefined4 **)(param_1 + 0x1c);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_3002c310;
      }
      if ((int)(uint)*(byte *)((int)puVar2 + -1) < -1) {
        ExceptionList = &local_c;
        FUN_300033d0(local_30,'\x01');
        local_2c = *(undefined4 **)(param_1 + 0x1c);
        if (local_2c == (undefined4 *)0x0) {
          local_2c = &DAT_3002c310;
        }
        local_28 = *(undefined4 *)(param_1 + 0x20);
        local_24 = *(undefined4 *)(param_1 + 0x24);
        *(char *)((int)local_2c + -1) = *(char *)((int)local_2c + -1) + '\x01';
        goto LAB_30003adc;
      }
    }
    ExceptionList = &local_c;
    uVar3 = FUN_30003420(local_30,uVar1,'\x01');
    if ((char)uVar3 != '\0') {
      puVar2 = *(undefined4 **)(param_1 + 0x1c);
      if (puVar2 == (undefined4 *)0x0) {
        puVar2 = &DAT_3002c310;
      }
      puVar7 = local_2c;
      for (uVar5 = uVar1 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *puVar7 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar5 = uVar1 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar2;
        puVar2 = (undefined4 *)((int)puVar2 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_30005310(local_30,uVar1);
    }
  }
LAB_30003adc:
  local_4 = 0;
  FUN_30004990(local_20,local_30);
  local_10 = 0;
  local_4._0_1_ = 1;
  piVar4 = (int *)FUN_30004ea0(&DAT_30034dd0,local_38,local_20);
  iVar6 = *piVar4;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_300033d0(local_20,'\x01');
  iVar6 = *(int *)(iVar6 + 0x1c);
  local_4 = 0xffffffff;
  if (iVar6 == 0) {
    if (local_2c != (undefined4 *)0x0) {
      if (*(char *)((int)local_2c + -1) == '\0') {
        FUN_3001f8bc((char *)((int)local_2c + -1));
      }
      else {
        *(char *)((int)local_2c + -1) = *(char *)((int)local_2c + -1) + -1;
      }
    }
    local_2c = (undefined4 *)0x0;
    local_28 = 0;
    local_24 = 0;
    iVar6 = 0;
  }
  else {
    FUN_300033d0(local_30,'\x01');
  }
  FUN_300039e0(iVar6);
  ExceptionList = local_c;
  return;
}

