// rea decompile_all
// name: FUN_5005c1d0
// address: 0x5005c1d0
// body: available
// range: 0x5005c1d0-0x5005c3a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5005c1d0(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114125;
  local_c = ExceptionList;
  local_4 = 0;
  if (param_1 != (undefined4 *)0x0) {
    ExceptionList = &local_c;
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
    if (param_2[2] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(param_2[3] - param_2[2]) >> 9;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 << 9);
    param_1[2] = puVar2;
    uVar3 = FUN_5005b000((undefined4 *)param_2[2],(undefined4 *)param_2[3],puVar2);
    param_1[3] = uVar3;
    param_1[4] = uVar3;
    local_4._0_1_ = 1;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
    if (param_2[6] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(param_2[7] - param_2[6]) >> 9;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 << 9);
    param_1[6] = puVar2;
    uVar3 = FUN_5005b000((undefined4 *)param_2[6],(undefined4 *)param_2[7],puVar2);
    param_1[7] = uVar3;
    param_1[8] = uVar3;
    local_4._0_1_ = 2;
    *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
    if (param_2[10] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(param_2[0xb] - param_2[10]) >> 9;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 << 9);
    param_1[10] = puVar2;
    uVar3 = FUN_5005b000((undefined4 *)param_2[10],(undefined4 *)param_2[0xb],puVar2);
    param_1[0xb] = uVar3;
    param_1[0xc] = uVar3;
    local_4._0_1_ = 3;
    *(undefined1 *)(param_1 + 0xd) = *(undefined1 *)(param_2 + 0xd);
    if (param_2[0xe] == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (int)(param_2[0xf] - param_2[0xe]) >> 9;
    }
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 << 9);
    param_1[0xe] = puVar2;
    uVar3 = FUN_5005b000((undefined4 *)param_2[0xe],(undefined4 *)param_2[0xf],puVar2);
    param_1[0xf] = uVar3;
    param_1[0x10] = uVar3;
    local_4._0_1_ = 4;
    *(undefined1 *)(param_1 + 0x11) = *(undefined1 *)(param_2 + 0x11);
    iVar1 = FUN_5005a8e0((int)(param_2 + 0x11));
    if (iVar1 < 0) {
      iVar1 = 0;
    }
    puVar2 = operator_new(iVar1 << 9);
    param_1[0x12] = puVar2;
    uVar3 = FUN_5005b000((undefined4 *)param_2[0x12],(undefined4 *)param_2[0x13],puVar2);
    param_1[0x13] = uVar3;
    param_1[0x14] = uVar3;
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_5005a900(param_1 + 0x15,(undefined1 *)(param_2 + 0x15));
    param_1[0x19] = param_2[0x19];
  }
  ExceptionList = local_c;
  return;
}

