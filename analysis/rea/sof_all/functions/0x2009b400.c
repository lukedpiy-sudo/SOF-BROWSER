// rea decompile_all
// name: FUN_2009b400
// address: 0x2009b400
// body: available
// range: 0x2009b400-0x2009b9da inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009b400(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  float *pfVar1;
  undefined4 *puVar2;
  char cVar3;
  undefined1 *puVar4;
  char *in_ECX;
  uint uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 local_101;
  int local_100;
  char *local_fc;
  uint local_f8;
  undefined1 local_f4 [4];
  char *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4 [4];
  undefined1 local_e0;
  undefined1 local_cb;
  undefined4 local_5c;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010ce42;
  local_c = ExceptionList;
  if (*in_ECX != '\0') {
    puVar4 = *(undefined1 **)(param_6 + 4);
    if (puVar4 == (undefined1 *)0x0) {
      puVar4 = &DAT_201116cc;
    }
    ExceptionList = &local_c;
    iVar7 = FUN_20023c90(0,*(undefined4 *)(in_ECX + 0x10),puVar4,*(undefined4 *)(param_6 + 8));
    if (iVar7 != 0) {
      FUN_2008e9e0(s_Material_layout_change_in_sequen_201572a8);
    }
    if (param_3 <= *(int *)(in_ECX + 4)) {
      FUN_2008ea00(s_Possible_duplicate_material_20157288,0);
      ExceptionList = local_c;
      return;
    }
    goto LAB_2009b5c2;
  }
  ExceptionList = &local_c;
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(param_5 + 0xb4);
  FUN_2000a3a0(param_6,0,0xffffffff);
  in_ECX[0x18] = *(char *)(param_5 + 0xb0);
  local_e0 = local_101;
  FUN_2000a5b0(0);
  local_4 = 0;
  FUN_2009df30(&local_101);
  local_cb = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_2009df10();
  local_10 = 0;
  local_5c = 0;
  local_e4[0] = 0;
  iVar7 = *(int *)(in_ECX + 0x24);
  local_4 = 2;
  if (iVar7 == 0) {
LAB_2009b4df:
    iVar7 = 0;
LAB_2009b4f9:
    FUN_2009d7c0(*(undefined4 *)(in_ECX + 0x28),2 - iVar7,local_e4);
  }
  else {
    uVar5 = (*(int *)(in_ECX + 0x28) - iVar7) / 0xd8;
    if (uVar5 < 2) {
      if (iVar7 == 0) goto LAB_2009b4df;
      iVar7 = (*(int *)(in_ECX + 0x28) - iVar7) / 0xd8;
      goto LAB_2009b4f9;
    }
    if (2 < uVar5) {
      FUN_2009df80(iVar7 + 0x1b0,*(int *)(in_ECX + 0x28));
    }
  }
  local_4 = 4;
  FUN_20092110();
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_20092110();
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  in_ECX[4] = -1;
  in_ECX[5] = -1;
  in_ECX[6] = -1;
  in_ECX[7] = -1;
LAB_2009b5c2:
  pfVar1 = (float *)(param_5 + 0x70);
  if (in_ECX[0x31] == '\0') {
    in_ECX[0x30] = '\x01';
    in_ECX[0x31] = '\x01';
    *(float *)(in_ECX + 0x34) = *pfVar1;
    *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_5 + 0x74);
    *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_5 + 0x78);
  }
  if ((((in_ECX[0x30] == '\0') || (*(float *)(in_ECX + 0x34) != *pfVar1)) ||
      (*(float *)(in_ECX + 0x38) != *(float *)(param_5 + 0x74))) ||
     (*(float *)(in_ECX + 0x3c) != *(float *)(param_5 + 0x78))) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  in_ECX[0x30] = cVar3;
  if (cVar3 == '\0') {
    FUN_20068550(param_3,in_ECX + 0x34);
    FUN_20068a80(*(undefined4 *)(in_ECX + 0x48),pfVar1);
  }
  puVar2 = (undefined4 *)(param_5 + 0x7c);
  if (in_ECX[0x51] == '\0') {
    in_ECX[0x50] = '\x01';
    in_ECX[0x51] = '\x01';
    *(undefined4 *)(in_ECX + 0x54) = *puVar2;
    *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_5 + 0x80);
    *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_5 + 0x84);
  }
  if ((in_ECX[0x50] == '\0') || (cVar3 = FUN_20068320(puVar2), cVar3 == '\0')) {
    cVar3 = '\0';
  }
  else {
    cVar3 = '\x01';
  }
  in_ECX[0x50] = cVar3;
  if (cVar3 == '\0') {
    FUN_20068550(param_3,in_ECX + 0x54);
    FUN_20068790(*(undefined4 *)(in_ECX + 0x68),1,puVar2);
  }
  if (*(float *)(param_5 + 0x94) < 0.0) {
    *(undefined4 *)(param_5 + 0x94) = 0;
  }
  FUN_200c2c00(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x94));
  if (*(float *)(param_5 + 0x98) < 0.0) {
    *(undefined4 *)(param_5 + 0x98) = 0;
  }
  FUN_200c2c00(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x98));
  if (*(float *)(param_5 + 0x9c) < 0.0) {
    *(undefined4 *)(param_5 + 0x9c) = 0;
  }
  FUN_200c2c00(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0x9c));
  if (*(float *)(param_5 + 0xa0) < 0.0) {
    *(undefined4 *)(param_5 + 0xa0) = 0;
  }
  FUN_200c2c00(param_1,param_2,param_3,param_4,*(undefined4 *)(param_5 + 0xa0));
  local_100 = 0;
  do {
    iVar7 = ((local_100 != 0) + 1) * 0x90;
    pcVar8 = (char *)(iVar7 + 0xb9 + param_5);
    local_fc = pcVar8;
    FUN_20107ed2(pcVar8);
    uVar5 = 0xffffffff;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    for (iVar6 = ~uVar5 - 2; 0 < iVar6; iVar6 = iVar6 + -1) {
      if (local_fc[iVar6] == '.') {
        if (0 < iVar6) {
          *(undefined1 *)(iVar6 + iVar7 + 0xb9 + param_5) = 0;
        }
        break;
      }
    }
    local_f4[0] = local_101;
    FUN_2000a5b0(0);
    uVar5 = 0xffffffff;
    pcVar8 = local_fc;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar3 != '\0');
    local_f8 = ~uVar5 - 1;
    cVar3 = FUN_2000a6c0(local_f8,1);
    if (cVar3 != '\0') {
      pcVar8 = local_fc;
      pcVar9 = local_f0;
      for (uVar5 = local_f8 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = local_f8 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar8;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_2000a6a0(local_f8);
    }
    iVar6 = local_100;
    local_4 = 5;
    FUN_2009a720(param_1,param_2,param_3,param_4,local_f4,iVar7 + 0xb8 + param_5);
    local_4 = 0xffffffff;
    if (local_f0 != (char *)0x0) {
      if (local_f0[-1] == '\0') {
        FUN_200f9f75(local_f0 + -1);
      }
      else {
        local_f0[-1] = local_f0[-1] + -1;
      }
    }
    local_100 = iVar6 + 1;
    local_f0 = (char *)0x0;
    local_ec = 0;
    local_e8 = 0;
  } while (local_100 < 2);
  if (*in_ECX == '\0') {
    pcVar8 = (char *)(param_5 + 0x419);
    *in_ECX = '\x01';
    in_ECX[0x19] = '\0';
    FUN_20107ed2(pcVar8);
    uVar5 = 0xffffffff;
    pcVar9 = pcVar8;
    do {
      if (uVar5 == 0) break;
      uVar5 = uVar5 - 1;
      cVar3 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar3 != '\0');
    for (iVar7 = ~uVar5 - 2; 0 < iVar7; iVar7 = iVar7 + -1) {
      if (pcVar8[iVar7] == '.') {
        if (0 < iVar7) {
          *(undefined1 *)(iVar7 + 0x419 + param_5) = 0;
        }
        break;
      }
    }
    if ((*(char *)(param_5 + 0x418) != '\0') &&
       (iVar7 = __strcmpi((char *)(param_5 + 0x149),pcVar8), iVar7 == 0)) {
      in_ECX[0x19] = '\x01';
    }
  }
  *(int *)(in_ECX + 4) = param_3;
  ExceptionList = local_c;
  return;
}

