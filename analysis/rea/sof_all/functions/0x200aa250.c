// rea decompile_all
// name: FUN_200aa250
// address: 0x200aa250
// body: available
// range: 0x200aa250-0x200aac4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200aa250(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 undefined4 param_6,int param_7,int param_8,int param_9)

{
  float fVar1;
  float fVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined1 *puVar8;
  void *pvVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  char *in_ECX;
  int iVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  undefined1 local_449;
  int local_448;
  char local_441;
  uint local_440;
  int local_43c;
  char *local_438;
  uint local_434;
  char *local_430;
  undefined4 *local_42c;
  void *local_428;
  void *local_424;
  undefined4 local_420;
  undefined4 local_41c;
  undefined4 local_418;
  undefined1 local_414 [32];
  undefined1 local_3f4 [1000];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010d7ce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pcVar3 = (char *)FUN_20068dc0(param_1);
  local_430 = pcVar3;
  uVar4 = FUN_20068dc0(param_1);
  local_434 = uVar4;
  local_448 = FUN_20068dc0(param_1);
  local_43c = FUN_20068dc0(param_1);
  local_440 = FUN_20068dc0(param_1);
  if (*in_ECX != '\0') {
    if (*(int *)(in_ECX + 0x5c) == 0) {
      pcVar5 = (char *)0x0;
    }
    else {
      pcVar5 = (char *)(*(int *)(in_ECX + 0x60) - *(int *)(in_ECX + 0x5c) >> 4);
    }
    if (pcVar3 != pcVar5) {
      puVar6 = *(undefined1 **)(param_8 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_201116cc;
      }
      FUN_200fabac(local_3f4,s_Mesh__s_does_not_match_up_for_nu_20157b0c,puVar6);
      FUN_2008ea00(local_3f4,0);
    }
  }
  if (0 < (int)pcVar3) {
    iVar18 = 0;
    local_438 = pcVar3;
    do {
      iVar7 = FUN_2009c080(param_1,param_3,param_4,param_5,param_6,param_7);
      if (*in_ECX == '\0') {
        FUN_2008ce10(*(undefined4 *)(in_ECX + 0x60),1,iVar7);
      }
      else if (param_5 == 0) {
        puVar6 = *(undefined1 **)(iVar7 + 4);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_201116cc;
        }
        iVar14 = FUN_20023c90(0,*(undefined4 *)(*(int *)(in_ECX + 0x5c) + iVar18 + 8),puVar6,
                              *(undefined4 *)(iVar7 + 8));
        if (iVar14 != 0) {
          puVar6 = *(undefined1 **)(iVar7 + 4);
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_201116cc;
          }
          puVar8 = *(undefined1 **)(param_8 + 4);
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_201116cc;
          }
          FUN_200fabac(local_3f4,s_Mesh__s_does_not_match_up_for_ma_20157ae0,puVar8,puVar6);
          FUN_2008ea00(local_3f4,0);
        }
      }
      iVar18 = iVar18 + 0x10;
      local_438 = local_438 + -1;
    } while (local_438 != (char *)0x0);
    local_438 = (char *)0x0;
    uVar4 = local_434;
  }
  uVar20 = uVar4 * 0x5c;
  local_438 = operator_new(uVar20);
  local_4 = 0;
  if (local_438 == (void *)0x0) {
    local_428 = (void *)0x0;
  }
  else {
    if (-1 < (int)(uVar4 - 1)) {
      iVar18 = (int)local_438 + 0x20;
      do {
        FUN_20011520(iVar18,0xc,3,&LAB_200aac50);
        iVar18 = iVar18 + 0x5c;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    local_428 = local_438;
  }
  local_4 = 0xffffffff;
  uVar4 = local_448 * 0xc;
  local_424 = operator_new(uVar4);
  iVar18 = local_43c;
  local_42c = (undefined4 *)0x0;
  if (local_43c != 0) {
    local_42c = operator_new(local_43c * 0xc);
  }
  local_438 = (void *)0x0;
  if (local_440 != 0) {
    local_438 = operator_new(local_440 * 0xc);
  }
  FUN_20069200(param_1,local_428,uVar20);
  FUN_20069200(param_1,local_424,uVar4);
  if (iVar18 != 0) {
    FUN_20069200(param_1,local_42c,iVar18 * 0xc);
  }
  if (local_440 != 0) {
    FUN_20069200(param_1,local_438,local_440 * 0xc);
  }
  local_441 = '\x01';
  if (*in_ECX == '\0') {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 5;
    }
    if (uVar20 < local_434) {
      local_43c = *(int *)(in_ECX + 0x40);
      puVar6 = local_414;
      iVar7 = FUN_200b93a0(puVar6);
      FUN_200b9510(local_43c,local_434 - iVar7,puVar6);
    }
    else {
      uVar20 = FUN_200b93a0();
      if (local_434 < uVar20) {
        FUN_200b97b0(local_434 * 0x20 + *(int *)(in_ECX + 0x3c),*(undefined4 *)(in_ECX + 0x40));
      }
    }
    *(int *)(in_ECX + 8) = iVar18;
    *(int *)(in_ECX + 4) = local_448;
    in_ECX[0x2c] = '\x01';
    in_ECX[0x2d] = '\0';
    in_ECX[0x2e] = '\0';
    in_ECX[0x2f] = '\0';
    pvVar9 = operator_new(uVar4);
    *(void **)(in_ECX + 0x30) = pvVar9;
    pvVar9 = operator_new(*(int *)(in_ECX + 0x2c) * iVar18 * 8);
    *(void **)(in_ECX + 0x34) = pvVar9;
    uVar4 = *(uint *)(in_ECX + 4);
    iVar18 = *(int *)(in_ECX + 0x10);
    local_449 = 1;
    if (iVar18 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(int *)(in_ECX + 0x14) - iVar18;
    }
    if (uVar20 < uVar4) {
      if (iVar18 == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)(in_ECX + 0x14) - iVar18;
      }
      FUN_2009dd40(*(undefined4 *)(in_ECX + 0x14),uVar4 - iVar18,&local_449);
    }
    else if ((iVar18 != 0) && (iVar7 = *(int *)(in_ECX + 0x14), uVar4 < (uint)(iVar7 - iVar18))) {
      uVar10 = FUN_2009f410(iVar7,iVar7,iVar18 + uVar4);
      FUN_2008c730(uVar10,*(undefined4 *)(in_ECX + 0x14));
      *(undefined4 *)(in_ECX + 0x14) = uVar10;
    }
    iVar18 = *(int *)(in_ECX + 0x20);
    uVar4 = *(uint *)(in_ECX + 8);
    local_449 = 1;
    if (iVar18 == 0) {
      uVar20 = 0;
    }
    else {
      uVar20 = *(int *)(in_ECX + 0x24) - iVar18;
    }
    if (uVar20 < uVar4) {
      if (iVar18 == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)(in_ECX + 0x24) - iVar18;
      }
      FUN_2009dd40(*(undefined4 *)(in_ECX + 0x24),uVar4 - iVar18,&local_449);
    }
    else if ((iVar18 != 0) && (iVar7 = *(int *)(in_ECX + 0x24), uVar4 < (uint)(iVar7 - iVar18))) {
      uVar10 = FUN_2009f410(iVar7,iVar7,iVar18 + uVar4);
      FUN_2008c730(uVar10,*(undefined4 *)(in_ECX + 0x24));
      *(undefined4 *)(in_ECX + 0x24) = uVar10;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = *(int *)(in_ECX + 0x40) - *(int *)(in_ECX + 0x3c) >> 5;
    }
    if (local_434 != uVar4) {
      puVar6 = *(undefined1 **)(param_8 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_201116cc;
      }
      FUN_200fabac(local_3f4,s_Mesh__s_does_not_match_up_for___o_20157ab4,puVar6);
      FUN_2008e9e0(local_3f4);
    }
    if (local_448 != *(int *)(in_ECX + 4)) {
      puVar6 = *(undefined1 **)(param_8 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_201116cc;
      }
      FUN_200fabac(local_3f4,s_Mesh__s_does_not_match_up_for___o_20157a88,puVar6);
      FUN_2008e9e0(local_3f4);
    }
    if (iVar18 != *(int *)(in_ECX + 8)) {
      puVar6 = *(undefined1 **)(param_8 + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_201116cc;
      }
      FUN_200fabac(local_3f4,s_Mesh__s_does_not_match_up_for___o_20157a54,puVar6);
      FUN_2008ea00(local_3f4,0);
      local_441 = '\0';
    }
  }
  uVar20 = 0;
  local_420 = 0;
  local_41c = 0;
  local_418 = 0;
  uVar4 = param_4 + 1;
  if (*(int *)(in_ECX + 0x4c) != 0) {
    uVar20 = (*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c)) / 0xc;
  }
  if (uVar20 < uVar4) {
    local_43c = *(int *)(in_ECX + 0x50);
    puVar17 = &local_420;
    iVar18 = FUN_200b93c0(puVar17);
    FUN_200b9a20(local_43c,uVar4 - iVar18,puVar17);
  }
  else {
    uVar20 = FUN_200b93c0();
    if (uVar4 < uVar20) {
      FUN_200b9d50(*(int *)(in_ECX + 0x4c) + uVar4 * 0xc,*(undefined4 *)(in_ECX + 0x50));
    }
  }
  iVar18 = param_4 * 0xc;
  piVar19 = (int *)(iVar18 + *(int *)(in_ECX + 0x4c));
  if (*(int *)(iVar18 + *(int *)(in_ECX + 0x4c)) == 0) {
    iVar7 = *(int *)(in_ECX + 4);
    iVar14 = *(int *)(in_ECX + 8);
    *piVar19 = param_9;
    pvVar9 = operator_new(iVar7 * param_9 * 0xc);
    piVar19[1] = (int)pvVar9;
    pvVar9 = operator_new(*piVar19 * iVar14 * 8);
    piVar19[2] = (int)pvVar9;
  }
  if ((*in_ECX == '\0') && (0 < (int)local_434)) {
    local_448 = 0;
    local_440 = local_434;
    piVar19 = (int *)((int)local_428 + 0x10);
    do {
      iVar14 = *(int *)(in_ECX + 0x3c) + local_448;
      *(int *)(iVar14 + 0x18) = piVar19[-1];
      iVar7 = 0;
      *(char *)(iVar14 + 0x1c) = (char)(*piVar19 % (int)local_430);
      piVar16 = piVar19 + 0xd;
      do {
        *(int *)(iVar14 + iVar7 * 4) = piVar16[-0xc];
        *(int *)(iVar14 + 0xc + iVar7 * 4) = *piVar16;
        iVar7 = iVar7 + 1;
        piVar16 = piVar16 + 1;
      } while (iVar7 < 3);
      local_448 = local_448 + 0x20;
      piVar19 = piVar19 + 0x17;
      local_440 = local_440 - 1;
    } while (local_440 != 0);
  }
  local_448 = 0;
  if (0 < *(int *)(in_ECX + 4)) {
    iVar14 = 0;
    local_43c = param_9 * 0xc;
    iVar7 = param_5 * 0xc;
    puVar17 = (undefined4 *)((int)local_424 + 8);
    do {
      local_418 = *puVar17;
      uVar10 = puVar17[-1];
      *(undefined4 *)(iVar7 + *(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c))) = puVar17[-2];
      *(undefined4 *)(*(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c)) + 4 + iVar7) = uVar10;
      *(undefined4 *)(*(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c)) + 8 + iVar7) = local_418;
      if (*in_ECX == '\0') {
        *(undefined4 *)(*(int *)(in_ECX + 0x30) + iVar14) =
             *(undefined4 *)(iVar7 + *(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c)));
        *(undefined4 *)(*(int *)(in_ECX + 0x30) + 4 + iVar14) =
             *(undefined4 *)(*(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c)) + 4 + iVar7);
        *(undefined4 *)(*(int *)(in_ECX + 0x30) + 8 + iVar14) =
             *(undefined4 *)(*(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c)) + 8 + iVar7);
      }
      else {
        local_430 = (char *)(*(int *)(in_ECX + 0x10) + local_448);
        if (*local_430 != '\0') {
          pfVar12 = (float *)(*(int *)(in_ECX + 0x30) + iVar14);
          pfVar11 = (float *)(*(int *)(iVar18 + 4 + *(int *)(in_ECX + 0x4c)) + iVar7);
          if (0.010000001 <
              (*pfVar12 - *pfVar11) * (*pfVar12 - *pfVar11) +
              (pfVar12[1] - pfVar11[1]) * (pfVar12[1] - pfVar11[1]) +
              (pfVar12[2] - pfVar11[2]) * (pfVar12[2] - pfVar11[2])) {
            *local_430 = '\0';
          }
        }
      }
      iVar7 = iVar7 + local_43c;
      local_448 = local_448 + 1;
      iVar14 = iVar14 + 0xc;
      puVar17 = puVar17 + 3;
    } while (local_448 < *(int *)(in_ECX + 4));
  }
  iVar7 = 0;
  if (0 < *(int *)(in_ECX + 8)) {
    local_43c = param_9 * 8;
    param_5 = param_5 << 3;
    puVar17 = local_42c;
    do {
      fVar1 = (float)puVar17[1];
      *(undefined4 *)(param_5 + *(int *)(iVar18 + 8 + *(int *)(in_ECX + 0x4c))) = *puVar17;
      *(float *)(*(int *)(iVar18 + 8 + *(int *)(in_ECX + 0x4c)) + 4 + param_5) = 1.0 - fVar1;
      if (*in_ECX == '\0') {
        *(undefined4 *)(*(int *)(in_ECX + 0x34) + iVar7 * 8) =
             *(undefined4 *)(param_5 + *(int *)(iVar18 + 8 + *(int *)(in_ECX + 0x4c)));
        *(undefined4 *)(*(int *)(in_ECX + 0x34) + 4 + iVar7 * 8) =
             *(undefined4 *)(*(int *)(iVar18 + 8 + *(int *)(in_ECX + 0x4c)) + 4 + param_5);
      }
      else if (local_441 == '\0') {
        *(undefined4 *)(param_5 + *(int *)(iVar18 + 8 + *(int *)(in_ECX + 0x4c))) =
             *(undefined4 *)(*(int *)(in_ECX + 0x34) + iVar7 * 8);
        *(undefined4 *)(*(int *)(iVar18 + 8 + *(int *)(in_ECX + 0x4c)) + 4 + param_5) =
             *(undefined4 *)(*(int *)(in_ECX + 0x34) + 4 + iVar7 * 8);
      }
      else if (((param_4 == 0) &&
               (local_430 = (char *)(*(int *)(in_ECX + 0x20) + iVar7), *local_430 != '\0')) &&
              (pfVar11 = (float *)(*(int *)(in_ECX + 0x34) + iVar7 * 8),
              pfVar12 = (float *)(*(int *)(*(int *)(in_ECX + 0x4c) + 8) + param_5),
              fVar1 = *pfVar11 - *pfVar12, fVar2 = pfVar11[1] - pfVar12[1],
              3.8146973e-06 < fVar1 * fVar1 + fVar2 * fVar2)) {
        *local_430 = '\0';
      }
      iVar7 = iVar7 + 1;
      puVar17 = puVar17 + 3;
      param_5 = param_5 + local_43c;
    } while (iVar7 < *(int *)(in_ECX + 8));
  }
  if ((*in_ECX == '\0') && (local_440 = 0, 0 < param_4)) {
    iVar18 = 0;
    do {
      piVar19 = (int *)(*(int *)(in_ECX + 0x4c) + iVar18);
      if (*(int *)(*(int *)(in_ECX + 0x4c) + iVar18) == 0) {
        iVar7 = *(int *)(in_ECX + 8);
        iVar14 = *(int *)(in_ECX + 4);
        iVar13 = *(int *)(*(int *)(param_7 + 0x14) + local_440 * 4);
        *piVar19 = iVar13;
        pvVar9 = operator_new(iVar13 * iVar14 * 0xc);
        piVar19[1] = (int)pvVar9;
        pvVar9 = operator_new(*piVar19 * iVar7 * 8);
        piVar19[2] = (int)pvVar9;
        local_448 = 0;
        if (0 < *(int *)(*(int *)(in_ECX + 0x4c) + iVar18)) {
          do {
            iVar7 = 0;
            if (0 < *(int *)(in_ECX + 4)) {
              iVar14 = 0;
              do {
                puVar15 = (undefined4 *)(*(int *)(in_ECX + 0x30) + iVar14);
                iVar14 = iVar14 + 0xc;
                iVar13 = *(int *)(*(int *)(in_ECX + 0x4c) + iVar18) * iVar7;
                iVar7 = iVar7 + 1;
                puVar17 = (undefined4 *)
                          (*(int *)(*(int *)(in_ECX + 0x4c) + iVar18 + 4) +
                          (iVar13 + local_448) * 0xc);
                *puVar17 = *puVar15;
                puVar17[1] = puVar15[1];
                puVar17[2] = puVar15[2];
              } while (iVar7 < *(int *)(in_ECX + 4));
            }
            iVar7 = 0;
            if (0 < *(int *)(in_ECX + 8)) {
              do {
                *(undefined4 *)
                 (*(int *)(*(int *)(in_ECX + 0x4c) + iVar18 + 8) +
                 (*(int *)(*(int *)(in_ECX + 0x4c) + iVar18) * iVar7 + local_448) * 8) =
                     *(undefined4 *)(*(int *)(in_ECX + 0x34) + iVar7 * 8);
                iVar13 = *(int *)(*(int *)(in_ECX + 0x4c) + iVar18) * iVar7;
                iVar14 = iVar7 * 8;
                iVar7 = iVar7 + 1;
                *(undefined4 *)
                 (((int *)(*(int *)(in_ECX + 0x4c) + iVar18))[2] + 4 + (iVar13 + local_448) * 8) =
                     *(undefined4 *)(*(int *)(in_ECX + 0x34) + 4 + iVar14);
              } while (iVar7 < *(int *)(in_ECX + 8));
            }
            local_448 = local_448 + 1;
          } while (local_448 < *(int *)(*(int *)(in_ECX + 0x4c) + iVar18));
        }
      }
      local_440 = local_440 + 1;
      iVar18 = iVar18 + 0xc;
    } while ((int)local_440 < param_4);
  }
  *in_ECX = '\x01';
  FUN_200f9f75(local_428);
  FUN_200f9f75(local_424);
  if (local_42c != (undefined4 *)0x0) {
    FUN_200f9f75(local_42c);
  }
  if (local_438 != (void *)0x0) {
    FUN_200f9f75(local_438);
  }
  ExceptionList = local_c;
  return;
}

