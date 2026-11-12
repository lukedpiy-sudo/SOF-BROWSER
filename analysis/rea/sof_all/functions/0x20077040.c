// rea decompile_all
// name: FUN_20077040
// address: 0x20077040
// body: available
// range: 0x20077040-0x20077310 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20077040(uint param_1)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  int in_ECX;
  undefined1 *puVar9;
  undefined1 local_21;
  undefined1 *local_20;
  uint local_1c;
  void *local_18;
  uint local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_2010be5a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined1 *)(in_ECX + 0xb0) = (undefined1)param_1;
  *(undefined4 *)(in_ECX + 0xb4) = 0;
  *(undefined4 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xbc) = 0;
  local_4 = 0;
  *(undefined1 *)(in_ECX + 0xc0) = (undefined1)param_1;
  *(undefined1 *)(in_ECX + 0xc1) = (undefined1)param_1;
  *(undefined1 *)(in_ECX + 0xcc) = 0;
  FUN_20084960();
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0xd4) = (undefined1)param_1;
  *(undefined1 *)(in_ECX + 0xd5) = (undefined1)param_1;
  *(undefined1 *)(in_ECX + 0xe0) = 0;
  FUN_20084e00();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_200a0cc0();
  FUN_200a0cc0();
  *(undefined4 *)(in_ECX + 0x88) = 1;
  *(undefined4 *)(in_ECX + 0x8c) = 0x3f800000;
  *(undefined2 *)(in_ECX + 0x90) = 0;
  puVar7 = *(undefined1 **)(in_ECX + 0xb4);
  *(undefined1 *)(in_ECX + 0x92) = 1;
  *(undefined4 *)(in_ECX + 0x94) = 4;
  iVar4 = *(int *)(in_ECX + 0xb8);
  param_1 = param_1 & 0xffff;
  local_21 = 1;
  if ((uint)(*(int *)(in_ECX + 0xbc) - iVar4) < param_1) {
    iVar1 = *(int *)(in_ECX + 0xb4);
    if ((iVar1 == 0) || (local_14 = iVar4 - iVar1, (uint)(iVar4 - iVar1) <= param_1)) {
      local_14 = param_1;
    }
    if (iVar1 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = iVar4 - iVar1;
    }
    local_14 = iVar4 + local_14;
    uVar5 = local_14;
    if ((int)local_14 < 0) {
      uVar5 = 0;
    }
    pvVar6 = operator_new(uVar5);
    local_18 = pvVar6;
    for (local_20 = *(undefined1 **)(in_ECX + 0xb4); uVar2 = param_1, pvVar3 = pvVar6,
        uVar5 = local_1c, local_20 != puVar7; local_20 = local_20 + 1) {
      FUN_200a0430(pvVar6,local_20);
      pvVar6 = (void *)((int)pvVar6 + 1);
    }
    while (local_20 = pvVar3, local_1c = uVar2, local_1c != 0) {
      FUN_200a0430(local_20,&local_21);
      pvVar3 = (void *)((int)local_20 + 1);
      uVar5 = local_1c - 1;
      uVar2 = local_1c - 1;
    }
    local_1c = uVar5;
    FUN_200823d0(puVar7,*(undefined4 *)(in_ECX + 0xb8),(int)pvVar6 + param_1);
    FUN_2008c730(*(undefined4 *)(in_ECX + 0xb4),*(undefined4 *)(in_ECX + 0xb8));
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb4));
    iVar4 = *(int *)(in_ECX + 0xb4);
    *(uint *)(in_ECX + 0xbc) = (int)local_18 + local_14;
    if (iVar4 == 0) {
      *(void **)(in_ECX + 0xb4) = local_18;
      *(uint *)(in_ECX + 0xb8) = (int)local_18 + param_1;
    }
    else {
      *(void **)(in_ECX + 0xb4) = local_18;
      *(uint *)(in_ECX + 0xb8) = (int)local_18 + param_1 + (*(int *)(in_ECX + 0xb8) - iVar4);
    }
  }
  else {
    if ((uint)(iVar4 - (int)puVar7) < param_1) {
      FUN_200823d0(puVar7,iVar4,puVar7 + param_1);
      FUN_20082400(*(int *)(in_ECX + 0xb8),puVar7 + (param_1 - *(int *)(in_ECX + 0xb8)),&local_21);
      puVar9 = *(undefined1 **)(in_ECX + 0xb8);
      for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
        *puVar7 = local_21;
      }
    }
    else {
      if (param_1 == 0) goto LAB_200772b3;
      FUN_200823d0(iVar4 - param_1,iVar4,iVar4);
      puVar9 = *(undefined1 **)(in_ECX + 0xb8);
      for (puVar8 = puVar9 + -param_1; puVar7 != puVar8; puVar8 = puVar8 + -1) {
        puVar9 = puVar9 + -1;
        *puVar9 = puVar8[-1];
      }
      puVar9 = puVar7 + param_1;
      for (; puVar7 != puVar9; puVar7 = puVar7 + 1) {
        *puVar7 = local_21;
      }
    }
    *(int *)(in_ECX + 0xb8) = *(int *)(in_ECX + 0xb8) + param_1;
  }
LAB_200772b3:
  *(undefined1 *)(in_ECX + 0xa6) = 0xff;
  *(undefined1 *)(in_ECX + 0xa7) = 0xff;
  *(undefined1 *)(in_ECX + 0xa8) = 0xff;
  *(undefined1 *)(in_ECX + 0xa9) = 0xff;
  *(undefined2 *)(in_ECX + 0xaa) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined1 *)(in_ECX + 0xa4) = 1;
  *(undefined4 *)(in_ECX + 0xac) = 0;
  *(undefined1 *)(in_ECX + 0xa5) = 0;
  ExceptionList = local_c;
  return;
}

