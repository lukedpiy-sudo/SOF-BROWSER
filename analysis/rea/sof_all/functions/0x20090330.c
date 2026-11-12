// rea decompile_all
// name: FUN_20090330
// address: 0x20090330
// body: available
// range: 0x20090330-0x20090b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20090330(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  byte *pbVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *in_ECX;
  uint uVar8;
  undefined4 *puVar9;
  float *pfVar10;
  char *pcVar11;
  undefined4 *puVar12;
  bool local_99;
  undefined1 local_98 [16];
  byte *pbStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  int iStack_78;
  uint *puStack_74;
  int *piStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_53;
  undefined4 local_50 [16];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_2010c7d7;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_20069380(param_1,in_ECX + 2);
  FUN_20069380(param_1,in_ECX + 6);
  FUN_200c26b0(param_1);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x10));
  FUN_20069340(param_1,*(undefined1 *)((int)in_ECX + 0x41));
  FUN_20069340(param_1,*(undefined1 *)((int)in_ECX + 0x42));
  FUN_20067510(param_1);
  FUN_2000a5b0(0);
  uVar8 = 0xffffffff;
  pcVar11 = s_FORCED_CAMERA_20157228;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  FUN_2000a600(s_FORCED_CAMERA_20157228,~uVar8 - 1);
  local_4 = 0;
  iVar5 = FUN_20023c40(local_98);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  local_98[0] = iVar5 == 0;
  FUN_2000a5b0(0);
  uVar8 = 0xffffffff;
  pcVar11 = s_B_DOOR_LEFT_2015721c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  FUN_2000a600(s_B_DOOR_LEFT_2015721c,~uVar8 - 1);
  local_4 = 1;
  iVar6 = FUN_20023c40(local_98);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  local_99 = iVar6 == 0 || iVar5 == 0;
  local_98[0] = iVar6 == 0;
  FUN_2000a5b0(0);
  uVar8 = 0xffffffff;
  pcVar11 = s_B_DOOR_RIGHT_2015720c;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  FUN_2000a600(s_B_DOOR_RIGHT_2015720c,~uVar8 - 1);
  local_4 = 2;
  iVar5 = FUN_20023c40(local_98);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (iVar5 == 0) {
    local_99 = true;
  }
  local_98[0] = iVar5 == 0;
  FUN_2000a5b0(0);
  uVar8 = 0xffffffff;
  pcVar11 = &DAT_20157204;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  FUN_2000a600(&DAT_20157204,~uVar8 - 1);
  local_4 = 3;
  iVar5 = FUN_20023c40(local_98);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (iVar5 == 0) {
    local_99 = true;
  }
  local_98[0] = iVar5 == 0;
  FUN_2000a5b0(0);
  uVar8 = 0xffffffff;
  pcVar11 = &DAT_201571fc;
  do {
    if (uVar8 == 0) break;
    uVar8 = uVar8 - 1;
    cVar4 = *pcVar11;
    pcVar11 = pcVar11 + 1;
  } while (cVar4 != '\0');
  FUN_2000a600(&DAT_201571fc,~uVar8 - 1);
  local_4 = 4;
  iVar5 = FUN_20023c40(local_98);
  local_4 = 0xffffffff;
  FUN_2000a5b0(1);
  if (iVar5 == 0) {
    local_99 = true;
LAB_200905e8:
    if ((((*(char *)(in_ECX + 0x1d) == '\0') && (in_ECX[0x30] != 0)) &&
        (1 < (int)(in_ECX[0x31] - in_ECX[0x30]) / 0x44)) && (!local_99)) {
      local_10 = 0;
      iVar5 = 0x11;
      puVar9 = in_ECX + 0x1e;
      if (*(char *)(in_ECX + 0x1d) == '\0') {
        puVar9 = (undefined4 *)in_ECX[0x30];
      }
      uVar1 = in_ECX[0x31];
      uVar2 = in_ECX[0x30];
      puVar12 = local_50;
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar12 = *puVar9;
        puVar9 = puVar9 + 1;
        puVar12 = puVar12 + 1;
      }
      FUN_20092fe0(uVar2,uVar1);
      *(undefined1 *)((int)in_ECX + 0x75) = 0;
      if (*(char *)((int)in_ECX + 0x75) == '\0') {
        *(undefined1 *)(in_ECX + 0x1d) = 1;
        *(undefined1 *)((int)in_ECX + 0x75) = 1;
        puVar9 = local_50;
        puVar12 = in_ECX + 0x1e;
        for (iVar5 = 0x11; iVar5 != 0; iVar5 = iVar5 + -1) {
          *puVar12 = *puVar9;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + 1;
        }
LAB_20090a38:
        cVar4 = FUN_200a10a0(local_50);
        if (cVar4 == '\0') goto LAB_20090a50;
        cVar4 = '\x01';
      }
      else {
        if (*(char *)(in_ECX + 0x1d) != '\0') goto LAB_20090a38;
LAB_20090a50:
        cVar4 = '\0';
      }
      *(char *)(in_ECX + 0x1d) = cVar4;
      if (cVar4 == '\0') {
        FUN_20093030(0,in_ECX + 0x1e);
        FUN_200935c0(in_ECX[0x31],local_50);
      }
    }
  }
  else {
    if ((local_99) ||
       ((*(char *)(in_ECX + 0x10) == '\0' && (cVar4 = (**(code **)*in_ECX)(), cVar4 == '\0'))))
    goto LAB_200905e8;
    if (*(char *)(in_ECX + 0x1d) == '\0') {
      if ((in_ECX[0x30] != 0) && (1 < (int)(in_ECX[0x31] - in_ECX[0x30]) / 0x44)) {
        if (*(char *)(in_ECX + 0x1d) == '\0') {
          if (in_ECX[0x30] == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = (int)(in_ECX[0x31] - in_ECX[0x30]) / 0x44;
          }
        }
        else {
          iVar5 = 0;
        }
        in_ECX[0x1a] = iVar5;
        FUN_200692e0(param_1,iVar5);
        puStack_74 = operator_new(in_ECX[0x1a] << 3);
        in_ECX[0x1b] = puStack_74;
        *(undefined1 *)(in_ECX + 0x1c) = 1;
        if (*(char *)(in_ECX + 0x1d) == '\0') {
          iVar5 = in_ECX[0x30];
        }
        else {
          iVar5 = 0;
        }
        iVar6 = 0;
        uStack_54 = 1;
        uStack_53 = 0;
        if (0 < (int)in_ECX[0x1a]) {
          pfVar10 = (float *)(iVar5 + 0x34);
          do {
            fStack_84 = pfVar10[-1];
            fStack_80 = *pfVar10;
            fStack_7c = pfVar10[1];
            FUN_20067780(&fStack_84);
            iVar6 = iVar6 + 1;
            pfVar10 = pfVar10 + 0x11;
          } while (iVar6 < (int)in_ECX[0x1a]);
        }
        pfVar10 = (float *)(in_ECX + 0x11);
        *pfVar10 = fStack_60;
        in_ECX[0x12] = uStack_5c;
        in_ECX[0x13] = uStack_58;
        *pfVar10 = *pfVar10 - fStack_6c;
        in_ECX[0x12] = (float)in_ECX[0x12] - fStack_68;
        in_ECX[0x13] = (float)in_ECX[0x13] - fStack_64;
        if (*pfVar10 < 1.0) {
          *pfVar10 = 1.0;
        }
        if ((float)in_ECX[0x12] < 1.0) {
          in_ECX[0x12] = 0x3f800000;
        }
        if ((float)in_ECX[0x13] < 1.0) {
          in_ECX[0x13] = 0x3f800000;
        }
        *pfVar10 = 1023.0 / *pfVar10;
        in_ECX[0x12] = 1023.0 / (float)in_ECX[0x12];
        in_ECX[0x13] = 4095.0 / (float)in_ECX[0x13];
        in_ECX[0x14] = 1.0 / *pfVar10;
        in_ECX[0x15] = 1.0 / (float)in_ECX[0x12];
        in_ECX[0x16] = 1.0 / (float)in_ECX[0x13];
        in_ECX[0x17] = fStack_6c;
        in_ECX[0x18] = fStack_68;
        in_ECX[0x19] = fStack_64;
        FUN_200692b0(param_1,pfVar10);
        FUN_200692b0(param_1,in_ECX + 0x14);
        FUN_200692b0(param_1,in_ECX + 0x17);
        if (*(char *)(in_ECX + 0x1d) == '\0') {
          iVar5 = in_ECX[0x30];
        }
        else {
          iVar5 = 0;
        }
        iStack_78 = 0;
        if (0 < (int)in_ECX[0x1a]) {
          do {
            FUN_20090020(iVar5,&piStack_70);
            *puStack_74 = (uint)piStack_70;
            puStack_74 = puStack_74 + 1;
            fStack_84 = (*(float *)(iVar5 + 0x30) - (float)in_ECX[0x17]) * *pfVar10;
            fStack_80 = (*(float *)(iVar5 + 0x34) - (float)in_ECX[0x18]) * (float)in_ECX[0x12];
            fStack_7c = (*(float *)(iVar5 + 0x38) - (float)in_ECX[0x19]) * (float)in_ECX[0x13];
            uVar8 = __ftol();
            if ((int)uVar8 < 0) {
              uVar8 = 0;
            }
            else if (0x3ff < (int)uVar8) {
              uVar8 = 0x3ff;
            }
            pbStack_88 = (byte *)__ftol();
            if ((int)pbStack_88 < 0) {
              pbStack_88 = (byte *)0x0;
            }
            else if (0x3ff < (int)pbStack_88) {
              pbStack_88 = (byte *)0x3ff;
            }
            iVar6 = __ftol();
            if (iVar6 < 0) {
              iVar6 = 0;
            }
            else if (0xfff < iVar6) {
              iVar6 = 0xfff;
            }
            iVar5 = iVar5 + 0x44;
            *puStack_74 = (iVar6 << 10 | (uint)pbStack_88) << 10 | uVar8;
            puStack_74 = puStack_74 + 1;
            iStack_78 = iStack_78 + 1;
          } while (iStack_78 < (int)in_ECX[0x1a]);
        }
        pbVar3 = (byte *)*param_1;
        iVar5 = in_ECX[0x1a];
        iStack_78 = in_ECX[0x1b];
        pbStack_88 = pbVar3 + 0x14;
        iVar6 = FUN_200facde(pbStack_88,4,1,*(undefined4 *)(pbVar3 + 4));
        *pbVar3 = *pbVar3 | iVar6 != 1;
        iVar6 = *(int *)(pbVar3 + 0xc);
        piStack_70 = *(int **)(iVar6 + 4);
        piVar7 = operator_new(0x10);
        *piVar7 = iVar6;
        if (piStack_70 == (int *)0x0) {
          piStack_70 = piVar7;
        }
        piVar7[1] = (int)piStack_70;
        *(int **)(iVar6 + 4) = piVar7;
        *(int **)piVar7[1] = piVar7;
        if (piVar7 + 2 != (int *)0x0) {
          piVar7[3] = iVar5 * 8;
          piVar7[2] = iStack_78;
        }
        *(int *)(pbVar3 + 0x10) = *(int *)(pbVar3 + 0x10) + 1;
        *(int *)pbStack_88 = *(int *)pbStack_88 + iVar5 * 8;
        goto LAB_20090af4;
      }
      goto LAB_200905e8;
    }
  }
  FUN_200692e0(param_1,0);
  FUN_20069340(param_1,*(undefined1 *)(in_ECX + 0x1d));
  if (*(char *)(in_ECX + 0x1d) == '\0') {
    if (in_ECX[0x30] == 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = (int)(in_ECX[0x31] - in_ECX[0x30]) / 0x44;
    }
    FUN_200692e0(param_1,iVar5);
    FUN_20069280(param_1,in_ECX[0x30],iVar5 * 0x44);
  }
  else {
    FUN_20069280(param_1,in_ECX + 0x1e,0x44);
  }
LAB_20090af4:
  *(undefined1 *)((int)in_ECX + 5) = 0;
  ExceptionList = local_c;
  return;
}

