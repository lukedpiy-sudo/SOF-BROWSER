// rea decompile_all
// name: FUN_5005fe60
// address: 0x5005fe60
// body: available
// range: 0x5005fe60-0x50060318 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5005fe60(void *param_1)

{
  float *pfVar1;
  byte *pbVar2;
  undefined2 uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  ushort uVar16;
  ushort uVar17;
  int iVar18;
  uint local_7c;
  int local_78;
  int local_74;
  ushort local_64 [2];
  float local_60;
  ushort local_5c [2];
  float local_58;
  undefined1 local_54 [4];
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined1 local_44 [4];
  float fStack_40;
  int iStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114258;
  pvStack_c = ExceptionList;
  iVar4 = *(int *)((int)param_1 + 0x40);
  local_50 = (undefined4 *)0x0;
  local_4c = (undefined4 *)0x0;
  local_48 = 0;
  local_4 = 0;
  local_64[0] = 0;
  local_60 = 0.0;
  ExceptionList = &pvStack_c;
  for (uVar9 = FUN_500c26a0(0,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0); uVar9 != 0;
      uVar9 = FUN_500c26a0(uVar9,0x1b4,s_info_player_deathmatch_50143268,(void *)0x0)) {
    bVar8 = FUN_50060c10(param_1,(float *)(uVar9 + 4),local_5c);
    if ((!bVar8) || (100.0 <= local_58)) {
      FUN_5005d160(param_1,uVar9,0,'\x01',0);
    }
  }
  for (uVar9 = FUN_500c26a0(0,0x1b4,s_info_player_team1_50143254,(void *)0x0); uVar9 != 0;
      uVar9 = FUN_500c26a0(uVar9,0x1b4,s_info_player_team1_50143254,(void *)0x0)) {
    bVar8 = FUN_50060c10(param_1,(float *)(uVar9 + 4),local_5c);
    if ((!bVar8) || (100.0 <= local_58)) {
      FUN_5005d160(param_1,uVar9,0,'\x01',0);
    }
  }
  for (uVar9 = FUN_500c26a0(0,0x1b4,s_info_player_team2_50143240,(void *)0x0); uVar9 != 0;
      uVar9 = FUN_500c26a0(uVar9,0x1b4,s_info_player_team2_50143240,(void *)0x0)) {
    bVar8 = FUN_50060c10(param_1,(float *)(uVar9 + 4),local_5c);
    if ((!bVar8) || (100.0 <= local_58)) {
      FUN_5005d160(param_1,uVar9,0,'\x01',0);
    }
  }
  if (*(int *)((int)param_1 + 0x18) == 0) {
    local_74 = 0;
  }
  else {
    local_74 = (*(int *)((int)param_1 + 0x1c) - *(int *)((int)param_1 + 0x18)) / 0x34;
  }
  FUN_50060d30(param_1);
  uVar9 = 1;
  uVar17 = 1;
  puVar13 = local_50;
  if (1 < local_74) {
    do {
      uVar16 = 1;
      uVar10 = 1;
      puVar15 = local_4c;
      do {
        local_78 = 0;
        bVar8 = false;
        if (uVar17 != uVar16) {
          iVar14 = *(int *)((int)param_1 + 0x18);
          pfVar1 = (float *)(iVar14 + uVar10 * 0x34);
          fVar5 = *(float *)(iVar14 + uVar9 * 0x34) - *pfVar1;
          iVar18 = iVar14 + uVar9 * 0x34;
          fVar7 = *(float *)(iVar14 + 4 + uVar9 * 0x34) - pfVar1[1];
          fVar6 = *(float *)(iVar18 + 8) - pfVar1[2];
          fVar5 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
          (*DAT_5015cac0)(iVar18,&DAT_5018bf0c,&DAT_5018bf0c,pfVar1,DAT_5015cca0 + 0x464,0x2010003,
                          local_44);
          if ((fStack_40 == 1.0) ||
             (((puVar15 = local_4c, puVar13 = local_50, iStack_14 != 0 &&
               (*(uint **)(iStack_14 + 0x1b4) != (uint *)0x0)) &&
              (puVar11 = FUN_50107030(*(uint **)(iStack_14 + 0x1b4),&DAT_50142f2c),
              puVar15 = local_4c, puVar13 = local_50, puVar11 != (uint *)0x0)))) {
            puVar13 = local_50;
            local_64[0] = uVar16;
            local_60 = fVar5;
            if ((local_50 == (undefined4 *)0x0) || ((int)local_4c - (int)local_50 >> 3 == 0)) {
LAB_5006015e:
              FUN_50063cb0(local_54,puVar13,1,(undefined4 *)local_64);
              bVar8 = true;
            }
            else {
              for (; puVar13 != local_4c; puVar13 = puVar13 + 2) {
                if (fVar5 < (float)puVar13[1]) goto LAB_5006015e;
                local_78 = local_78 + 1;
                if (local_78 == *(int *)((int)param_1 + 0x3c)) break;
              }
            }
            puVar15 = local_4c;
            puVar13 = local_50;
            if ((local_78 < *(int *)((int)param_1 + 0x3c)) && (!bVar8)) {
              FUN_50063cb0(local_54,local_4c,1,(undefined4 *)local_64);
              puVar15 = local_4c;
              puVar13 = local_50;
            }
          }
        }
        uVar16 = uVar16 + 1;
        uVar10 = (uint)uVar16;
      } while ((int)uVar10 < local_74);
      if (puVar13 == (undefined4 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (int)puVar15 - (int)puVar13 >> 3;
      }
      local_7c = *(uint *)((int)param_1 + 0x3c);
      if (uVar10 < local_7c) {
        if (puVar13 != (undefined4 *)0x0) {
          local_7c = (int)puVar15 - (int)puVar13 >> 3;
          goto LAB_500601fa;
        }
        local_7c = 0;
LAB_50060202:
        (*DAT_5015cab0)(0,0xc03,uVar9);
        puVar13 = local_50;
      }
      else {
LAB_500601fa:
        if (local_7c == 0) goto LAB_50060202;
      }
      iVar18 = *(int *)((int)param_1 + 0x18) + uVar9 * 0x34;
      puVar15 = *(undefined4 **)(iVar18 + 0x30);
      while (puVar15 != (undefined4 *)0x0) {
        *(undefined4 *)(iVar18 + 0x30) = *puVar15;
        FUN_50106b60((undefined *)puVar15);
        puVar13 = local_50;
        puVar15 = *(undefined4 **)(iVar18 + 0x30);
      }
      iVar18 = 0;
      if (0 < (int)local_7c) {
        do {
          if (((iVar18 < 1) ||
              (*(short *)(puVar13 + iVar18 * 2) != *(short *)(puVar13 + iVar18 * 2 + -2))) &&
             (uVar12 = FUN_50060b30(param_1,*(short *)(puVar13 + iVar18 * 2)), puVar13 = local_50,
             (char)uVar12 == '\0')) {
            if ((float)local_50[iVar18 * 2 + 1] < (float)(iVar4 * iVar4)) {
              pbVar2 = (byte *)((int)local_50 + iVar18 * 8 + 1);
              *pbVar2 = *pbVar2 | 0x80;
            }
            puVar13 = operator_new(0xc);
            if (puVar13 == (undefined4 *)0x0) {
              puVar13 = (undefined4 *)0x0;
            }
            else {
              uVar12 = local_50[iVar18 * 2 + 1];
              uVar3 = *(undefined2 *)(local_50 + iVar18 * 2);
              *puVar13 = 0;
              puVar13[2] = uVar12;
              *(undefined2 *)(puVar13 + 1) = uVar3;
            }
            iVar14 = *(int *)((int)param_1 + 0x18) + uVar9 * 0x34;
            *puVar13 = *(undefined4 *)(iVar14 + 0x30);
            *(undefined4 **)(iVar14 + 0x30) = puVar13;
            puVar13 = local_50;
          }
          iVar18 = iVar18 + 1;
        } while (iVar18 < (int)local_7c);
      }
      uVar17 = uVar17 + 1;
      uVar9 = (uint)uVar17;
      local_4c = puVar13;
    } while ((int)uVar9 < local_74);
  }
  FUN_50060320(param_1);
  FUN_50106b60((undefined *)local_50);
  ExceptionList = pvStack_c;
  return;
}

