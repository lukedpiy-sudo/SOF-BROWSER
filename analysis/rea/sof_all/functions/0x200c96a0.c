// rea decompile_all
// name: FUN_200c96a0
// address: 0x200c96a0
// body: available
// range: 0x200c96a0-0x200c9a36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c96a0(undefined4 param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  int in_ECX;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  char *pcVar7;
  undefined4 *puVar8;
  char *pcVar9;
  int local_14 [2];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010e235;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *(undefined1 *)(in_ECX + 4) = param_2._0_1_;
  FUN_2000a5b0(0);
  *(undefined1 *)(in_ECX + 0x18) = param_2._0_1_;
  local_4 = 0;
  uVar2 = FUN_200ea4b0(0,0);
  *(undefined4 *)(in_ECX + 0x1c) = uVar2;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  local_4._0_1_ = 1;
  *(undefined1 *)(in_ECX + 0x28) = param_2._0_1_;
  FUN_2000a5b0(0);
  local_4._0_1_ = 2;
  *(undefined1 *)(in_ECX + 0x3c) = param_2._0_1_;
  FUN_2000a5b0(0);
  local_4._0_1_ = 3;
  *(undefined1 *)(in_ECX + 0x4c) = param_2._0_1_;
  FUN_2000a5b0(0);
  *(undefined4 *)(in_ECX + 0x60) = 0xffffffff;
  *(undefined4 *)(in_ECX + 100) = 0xffffffff;
  local_4._0_1_ = 4;
  *(undefined1 *)(in_ECX + 0x68) = param_2._0_1_;
  FUN_2000a5b0(0);
  *(undefined4 *)(in_ECX + 0xc4) = 0;
  *(undefined1 *)(in_ECX + 0xc0) = param_2._0_1_;
  *(undefined4 *)(in_ECX + 200) = 0;
  *(undefined4 *)(in_ECX + 0xcc) = 0;
  local_4._0_1_ = 6;
  *(undefined1 *)(in_ECX + 0xd0) = param_2._0_1_;
  *(undefined1 *)(in_ECX + 0xd1) = param_2._0_1_;
  *(undefined1 *)(in_ECX + 0xdc) = 0;
  FUN_200739b0();
  *(undefined4 *)(in_ECX + 0xe4) = 0xffffffff;
  local_4._0_1_ = 7;
  *(undefined1 *)(in_ECX + 0xe8) = param_2._0_1_;
  uVar2 = FUN_200cadf0(0,0);
  *(undefined4 *)(in_ECX + 0xec) = uVar2;
  *(undefined4 *)(in_ECX + 0xf0) = 0;
  local_4._0_1_ = 8;
  *(undefined1 *)(in_ECX + 0xfc) = param_2._0_1_;
  FUN_2000a5b0(0);
  *(undefined4 *)(in_ECX + 0x14) = param_1;
  uVar4 = 0xffffffff;
  pcVar7 = param_2;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  local_4 = CONCAT31(local_4._1_3_,9);
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = param_2;
    pcVar9 = *(char **)(in_ECX + 8);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_2000a6a0(uVar4);
  }
  uVar4 = 0xffffffff;
  pcVar7 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  param_2 = (char *)uVar4;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_2015ee44;
    puVar8 = *(undefined4 **)(in_ECX + 0x2c);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_2000a6a0(uVar4);
  }
  uVar4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  pcVar7 = &DAT_2015ee44;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  param_2 = (char *)uVar4;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    puVar6 = (undefined4 *)&DAT_2015ee44;
    puVar8 = *(undefined4 **)(in_ECX + 0x40);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar6;
      puVar6 = (undefined4 *)((int)puVar6 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
    FUN_2000a6a0(uVar4);
  }
  uVar4 = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  pcVar7 = s_small_2011d0c4;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar4 - 1;
  param_2 = (char *)uVar4;
  cVar1 = FUN_2000a6c0(uVar4,1);
  if (cVar1 != '\0') {
    pcVar7 = s_small_2011d0c4;
    pcVar9 = *(char **)(in_ECX + 0x6c);
    for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined4 *)pcVar9 = *(undefined4 *)pcVar7;
      pcVar7 = pcVar7 + 4;
      pcVar9 = pcVar9 + 4;
    }
    for (uVar5 = uVar4 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar9 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      pcVar9 = pcVar9 + 1;
    }
    FUN_2000a6a0(uVar4);
  }
  *(undefined4 *)(in_ECX + 0x60) = 0xff000000;
  param_2 = (char *)0xffffa0a0;
  *(undefined4 *)(in_ECX + 100) = 0xffffa0a0;
  *(undefined **)(in_ECX + 0x78) = &DAT_20112e5c;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0xb0) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined1 *)(in_ECX + 0x8c) = 0;
  *(undefined1 *)(in_ECX + 0x8d) = 0;
  *(undefined1 *)(in_ECX + 0x8e) = 1;
  *(undefined1 *)(in_ECX + 0x8f) = 0;
  *(undefined1 *)(in_ECX + 0x90) = 1;
  *(undefined4 *)(in_ECX + 0xb4) = 0xffffffff;
  *(undefined1 *)(in_ECX + 0xb8) = 0;
  *(undefined4 *)(in_ECX + 0xac) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0xf8) = 0xbf800000;
  param_2 = operator_new(0x58);
  local_4._0_1_ = 10;
  if (param_2 == (void *)0x0) {
    local_14[0] = 0;
  }
  else {
    local_14[0] = FUN_200c6200(in_ECX,s_default_20158314);
  }
  local_4 = CONCAT31(local_4._1_3_,9);
  FUN_2002ed20(&param_2,*(undefined4 *)(in_ECX + 0x1c),local_14);
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(local_14[0] + 0x48);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(local_14[0] + 0x4c);
  iVar3 = FUN_200cbe80();
  *(int *)(in_ECX + 0x94) = iVar3 - *(int *)(in_ECX + 0x9c);
  iVar3 = FUN_200cbe90();
  *(int *)(in_ECX + 0x98) = iVar3 - *(int *)(in_ECX + 0xa0);
  ExceptionList = pvStack_c;
  return;
}

