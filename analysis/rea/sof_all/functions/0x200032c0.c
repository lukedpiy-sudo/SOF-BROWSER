// rea decompile_all
// name: FUN_200032c0
// address: 0x200032c0
// body: available
// range: 0x200032c0-0x200037d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200032c0(int param_1)

{
  int iVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  ushort uVar9;
  int iVar10;
  uint uVar11;
  float *pfVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  char cVar16;
  int local_78;
  float local_60 [4];
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c [4];
  uint local_2c;
  undefined4 local_28;
  float local_24;
  int local_20;
  undefined4 local_18;
  int local_10;
  uint local_c;
  undefined *local_8;
  undefined1 local_4;
  
  iVar10 = FUN_200f9e9e(&DAT_201e9c8c);
  FUN_20055930();
  uVar8 = __ftol();
  uVar7 = (DAT_201e8fc4 * 2) / 1000;
  pfVar12 = local_60;
  for (iVar15 = 0x18; iVar15 != 0; iVar15 = iVar15 + -1) {
    *pfVar12 = 0.0;
    pfVar12 = pfVar12 + 1;
  }
  local_78 = 0;
  local_4 = 0xff;
  if (0 < *(int *)(param_1 + 0xfc)) {
    do {
      local_18 = 0x3f800000;
      uVar11 = *(int *)(param_1 + 0x100) + local_78 & 0x3ff;
      iVar5 = *(int *)(&DAT_201ca530 + uVar11 * 0x74);
      iVar15 = uVar11 * 0x74;
      piVar2 = (int *)(&DAT_201ca530 + iVar15);
      uVar11 = *(uint *)(&DAT_201ca560 + iVar15);
      local_c = *(uint *)(&DAT_201ca564 + iVar15);
      iVar1 = iVar5 * 0x18c;
      if ((uVar11 & 0x1078) == 0) {
        local_2c = *(uint *)(&DAT_201ca558 + iVar15);
      }
      else {
        local_2c = uVar7;
        if ((uVar11 & 0x20) == 0) {
          if ((uVar11 & 0x40) == 0) {
            local_2c = uVar7 & 1;
            if ((uVar11 & 0x10) != 0) {
              local_2c = local_2c + 2;
            }
            if ((char)((uVar11 & 0x1078) >> 8) != '\0') {
              local_2c = (int)local_2c >> 1;
            }
          }
          else {
            local_2c = DAT_201e8fc4 / 100;
          }
        }
      }
      local_24 = 1.0 - DAT_201e8fd0;
      local_28 = *(undefined4 *)(&DAT_2015f008 + iVar1);
      cVar16 = (char)local_c;
      if ((local_c & 0x40) == 0) {
        iVar14 = 0;
        pfVar12 = (float *)(&DAT_2015efe4 + iVar1);
        do {
          iVar14 = iVar14 + 1;
          local_3c[iVar14] = (pfVar12[-0x1d] - *pfVar12) * DAT_201e8fd0 + *pfVar12;
          pfVar12 = pfVar12 + 1;
        } while (iVar14 < 3);
      }
      else {
        local_3c[1] = *(float *)(&DAT_2015ef70 + iVar1);
        local_3c[2] = *(float *)(&DAT_2015ef74 + iVar1);
        local_3c[3] = *(float *)(&DAT_2015ef78 + iVar1);
      }
      uVar13 = local_c & 0x400000;
      if (uVar13 == 0) {
        iVar14 = *(int *)(&DAT_201ca55c + iVar15);
        if (*(int *)(&DAT_201ca550 + iVar15) == 0xff) {
          local_20 = 0;
          local_10 = *(int *)(&DAT_2022206c + iVar14 * 0x15c);
          local_60[0] = *(float *)(&DAT_20222070 + iVar14 * 0x15c);
          if ((local_10 == 0) || (local_60[0] == 0.0)) {
            local_10 = DAT_20224bec;
            local_60[0] = DAT_20224bf0;
          }
        }
        else {
          local_10 = 0;
          if (*(int *)(&DAT_201ca554 + iVar15) == 0xff) {
            local_60[0] = *(float *)(&DAT_20220d8c + *(int *)(&DAT_201ca550 + iVar15) * 4);
          }
          else {
            local_60[0] = *(float *)(&DAT_20220d8c + *(int *)(&DAT_201ca554 + iVar15) * 4);
          }
          uVar6 = *(uint *)(&DAT_201ca568 + iVar15);
          local_20 = iVar14;
          if (uVar6 != 0x1f) {
            local_44 = (float)(uVar6 & 0xff);
            local_40 = (float)((int)uVar6 >> 8 & 0xff);
            local_50 = -local_44;
            local_4c = -local_40;
            local_48 = -(float)(byte)(&DAT_201ca56a)[iVar15];
            local_3c[0] = (float)(int)((byte)(&DAT_201ca56b)[iVar15] - 0x80);
          }
        }
      }
      if ((uVar11 & 0x2000) == 0) {
        iVar14 = 0;
        pfVar12 = (float *)(&DAT_2015ef7c + iVar1);
        do {
          fVar3 = pfVar12[0x1d];
          fVar4 = *pfVar12;
          if (fVar4 - fVar3 <= 180.0) {
            if (fVar4 - fVar3 < -180.0) {
              fVar4 = fVar4 + 360.0;
            }
          }
          else {
            fVar4 = fVar4 - 360.0;
          }
          iVar14 = iVar14 + 1;
          pfVar12 = pfVar12 + 1;
          local_60[iVar14] = (fVar4 - fVar3) * DAT_201e8fd0 + fVar3;
        } while (iVar14 < 3);
        if (*(int *)(&DAT_201ca554 + iVar15) != 0) {
          local_60[1] = -local_60[1];
          uVar9 = __ftol();
          local_60[2] = (float)uVar9 * 0.005493164;
          local_60[3] = -local_60[3];
        }
      }
      else {
        local_60[1] = *(float *)(&DAT_2015eff0 + iVar1);
        fVar3 = *(float *)(&DAT_2015ef7c + iVar1);
        if (fVar3 - local_60[1] <= 180.0) {
          if (fVar3 - local_60[1] < -180.0) {
            fVar3 = fVar3 + 360.0;
          }
        }
        else {
          fVar3 = fVar3 - 360.0;
        }
        local_60[1] = (fVar3 - local_60[1]) * DAT_201e8fd0 + local_60[1];
        local_60[3] = *(float *)(&DAT_2015eff8 + iVar1);
        fVar3 = *(float *)(&DAT_2015ef84 + iVar1);
        if (fVar3 - local_60[3] <= 180.0) {
          if (fVar3 - local_60[3] < -180.0) {
            fVar3 = fVar3 + 360.0;
          }
        }
        else {
          fVar3 = fVar3 - 360.0;
        }
        local_60[3] = (fVar3 - local_60[3]) * DAT_201e8fd0 + local_60[3];
        local_60[2] = (float)uVar8 * 0.005493164;
      }
      *(float *)(&DAT_2015f058 + iVar1) = local_3c[1];
      *(float *)(&DAT_2015f05c + iVar1) = local_3c[2];
      *(float *)(&DAT_2015f060 + iVar1) = local_3c[3];
      if (-1 < cVar16) {
        iVar14 = FUN_2001f2d0(piVar2);
        if (iVar14 != 0) {
          FUN_200308e0(local_60,&DAT_2015eef8 + iVar5 * 99);
        }
        if (*(int *)(&DAT_201ca560 + iVar15) != 0) {
          FUN_20030900(piVar2,local_60,&DAT_2015eef8 + iVar5 * 99,*(int *)(&DAT_201ca560 + iVar15));
        }
        iVar5 = *piVar2;
        if ((0 < iVar5) && (iVar5 <= iVar10)) {
          iVar14 = iVar5 * 0x15c;
          *(float *)(&DAT_20221f00 + iVar14) = local_3c[1];
          *(float *)(&DAT_20221f04 + iVar14) = local_3c[2];
          *(float *)(&DAT_20221f08 + iVar14) = local_3c[3];
        }
        if (iVar5 == DAT_201e94c4 + 1) {
          local_c = local_c | 2;
          if (uVar13 == 0) goto LAB_200037b2;
          local_3c[1] = (float)DAT_201e8ff0;
          local_3c[2] = (float)DAT_201e8ff4;
          local_3c[3] = (float)DAT_201e8ff8;
        }
        if ((*(int *)(&DAT_201ca550 + iVar15) != 0) || (uVar13 != 0)) {
          local_8 = &DAT_2015f078 + iVar1;
          FUN_20016690(local_60,iVar5);
        }
      }
LAB_200037b2:
      local_78 = local_78 + 1;
    } while (local_78 < *(int *)(param_1 + 0xfc));
  }
  return;
}

