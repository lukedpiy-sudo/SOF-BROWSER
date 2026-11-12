// rea decompile_all
// name: FUN_500f53a0
// address: 0x500f53a0
// body: available
// range: 0x500f53a0-0x500f5c13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f53a0(int *param_1,byte *param_2)

{
  int *piVar1;
  byte bVar2;
  short sVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  float *pfVar9;
  byte *pbVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint *puVar14;
  bool bVar15;
  longlong lVar16;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  uint local_13c;
  uint local_138;
  short asStack_134 [11];
  char cStack_11d;
  undefined4 local_11c;
  undefined2 uStack_116;
  undefined2 uStack_114;
  short local_112;
  short sStack_110;
  short local_10e;
  undefined4 local_104;
  int iStack_100;
  int aiStack_fc [31];
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  float fStack_40;
  undefined1 local_38;
  char cStack_37;
  
  DAT_5015d228 = param_1;
  puVar4 = (uint *)param_1[0x1d];
  if (_DAT_5015d1c8 != 0.0) {
    *puVar4 = (uint)(puVar4[0xb7] != 0) * 2 + 5;
    if (DAT_5015ccdc <= _DAT_5015d1c8 + 10.0) {
      return;
    }
    if ((param_2[1] & 1) == 0) {
      return;
    }
    DAT_5015d1d0 = 1;
    return;
  }
  if ((char)param_1[0xe0] != '\0') {
    *(undefined1 *)(param_1 + 0xe0) = 0;
    param_1[0x68] = param_1[0x68] & 0xffffffef;
    param_1[0xbb] = 0;
    DAT_5015c894 = 0x19;
    FUN_500f2a30((int)param_1,(int)param_1,(int)param_1);
    param_1[0xbe] = 2;
    *(undefined4 *)(param_1[0x1d] + 0x308) = 0;
    iVar5 = (**(code **)(*DAT_5015c4d8 + 4))();
    if (iVar5 != 0) {
      FUN_500ef7b0(param_1);
      FUN_500f38a0((int)param_1);
      if (*(int *)(param_1[0x1d] + 0x2dc) == 0) {
        FUN_50083bb0((int)param_1,0xf);
        *(undefined1 *)(param_1[0x1d] + 0x10) = 0x20;
        *(undefined1 *)(param_1[0x1d] + 0x11) = 0xe;
      }
      param_1[0xc] = param_1[0xc] | 0x4000;
      *(float *)(param_1[0x1d] + 0x560) = DAT_5015ccdc;
      return;
    }
    (*DAT_5015cb78)(s_respawn_5014cda4);
    return;
  }
  DAT_5018b3bc = param_1;
  if (*(int *)(param_1[0x1d] + 0x538) == 0) {
    bVar2 = *param_2;
    if ((bVar2 < 0x22) || ((float)param_1[0x95] == 0.0)) {
      *param_2 = bVar2;
      uVar6 = 1;
    }
    else {
      uVar6 = bVar2 / 10;
      *param_2 = (char)((ulonglong)(uint)bVar2 % 10) + 10;
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      puVar11 = &local_138;
      for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar11 = 0;
        puVar11 = puVar11 + 1;
      }
      if (param_1[0x67] == 1) {
        *puVar4 = 1;
      }
      else if (param_1[0x67] == 0xc) {
        *puVar4 = 2;
      }
      else if (param_1[8] == 0xff) {
        if (param_1[0xbe] == 0) {
          *puVar4 = -(uint)(1 < (byte)puVar4[0x1a]) & 6;
        }
        else {
          *puVar4 = 3;
        }
      }
      else {
        *puVar4 = 4;
      }
      lVar16 = __ftol();
      *(short *)((int)puVar4 + 0x12) = (short)lVar16;
      puVar11 = puVar4;
      puVar14 = &local_138;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      iVar5 = 0;
      do {
        lVar16 = __ftol();
        asStack_134[iVar5] = (short)lVar16;
        lVar16 = __ftol();
        asStack_134[iVar5 + 3] = (short)lVar16;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      iVar5 = 7;
      bVar15 = true;
      puVar11 = puVar4 + 0xcb;
      puVar14 = &local_138;
      do {
        if (iVar5 == 0) break;
        iVar5 = iVar5 + -1;
        bVar15 = *puVar11 == *puVar14;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      } while (bVar15);
      if (!bVar15) {
        local_104 = 1;
      }
      pbVar10 = param_2;
      puVar13 = &local_11c;
      for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *(undefined4 *)pbVar10;
        pbVar10 = pbVar10 + 4;
        puVar13 = puVar13 + 1;
      }
      *(undefined4 *)(param_1[0x1d] + 0x550) = 0;
      if (((local_11c._1_1_ & 0x20) != 0) && ((*(byte *)(param_1[0x1d] + 0x10) & 0x40) == 0)) {
        local_112 = local_112 * 2;
        sStack_110 = sStack_110 * 2;
        local_10e = local_10e * 2;
        *(undefined4 *)(param_1[0x1d] + 0x550) = 1;
      }
      (**(code **)(*DAT_5015c4d8 + 0xac))(param_1);
      __ftol();
      lVar16 = __ftol();
      uStack_116 = (undefined2)lVar16;
      lVar16 = __ftol();
      uStack_114 = (undefined2)lVar16;
      puStack_4c = &LAB_500f51a0;
      uStack_48 = DAT_5015cac8;
      puStack_44 = &LAB_500f5370;
      if (DAT_5015ccdc < (float)puVar4[0x17f]) {
        fStack_40 = (float)puVar4[0x17f] - DAT_5015ccdc;
      }
      (*DAT_5015cb34)(&local_13c);
      puVar11 = &local_13c;
      puVar14 = puVar4;
      for (iVar5 = 7; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      iVar5 = 0;
      puVar11 = &local_13c;
      puVar14 = puVar4 + 0xcb;
      for (iVar12 = 7; iVar12 != 0; iVar12 = iVar12 + -1) {
        *puVar14 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar14 = puVar14 + 1;
      }
      pfVar9 = (float *)(param_1 + 0x93);
      do {
        iVar12 = iVar5 * 2;
        sVar3 = asStack_134[iVar5 + 1];
        iVar5 = iVar5 + 1;
        pfVar9[-0x92] = (float)(int)*(short *)((int)&local_138 + iVar12) * 0.125;
        *pfVar9 = (float)(int)sVar3 * 0.125;
        pfVar9 = pfVar9 + 1;
      } while (iVar5 < 3);
      param_1[0x47] = iStack_70;
      param_1[0x48] = iStack_6c;
      param_1[0x49] = iStack_68;
      param_1[0x4a] = iStack_64;
      param_1[0x4b] = iStack_60;
      param_1[0x4c] = iStack_5c;
      puVar4[0xc3] = (uint)((float)(int)(short)param_1[1] * 0.005493164);
      puVar4[0xc4] = (uint)((float)(int)*(short *)((int)param_1 + 6) * 0.005493164);
      puVar4[0xc5] = (uint)((float)(int)(short)param_1[2] * 0.005493164);
      if ((((param_1[0xcc] != 0) && (iStack_58 == 0)) && (9 < local_112)) && (iStack_50 == 0)) {
        uVar7 = (*DAT_5015c9f4)(s_player_jump_wav_50154650,0x3f19999a,0x3f800000,0,0);
        (*DAT_5015ca48)(param_1,2,uVar7);
      }
      iVar5 = iStack_58;
      param_1[0xc2] = (int)cStack_11d;
      lVar16 = __ftol();
      param_1[0xc1] = (int)lVar16;
      param_1[0xe3] = iStack_50;
      param_1[0xe2] = iStack_54;
      param_1[0xcc] = iVar5;
      if (iVar5 != 0) {
        param_1[0xcd] = *(int *)(iVar5 + 0x7c);
      }
      if (param_1[0xbe] == 0) {
        puVar4[0x13f] = uStack_80;
        puVar4[0x140] = uStack_7c;
        puVar4[0x141] = uStack_78;
        puVar4[7] = uStack_80;
        puVar4[8] = uStack_7c;
        puVar4[9] = uStack_78;
      }
      else {
        puVar4[9] = 0x42200000;
        puVar4[7] = 0xc1700000;
        puVar4[8] = puVar4[299];
      }
      (*DAT_5015cb28)(param_1);
      param_1[0x46] = param_1[0x46] & 0xffffffbf;
      if ((param_1[0x67] != 1) && (param_1[0x67] != 0xc)) {
        FUN_500c3a90();
      }
      iVar5 = 0;
      if (0 < iStack_100) {
        do {
          iVar12 = aiStack_fc[iVar5];
          iVar8 = 0;
          if (0 < iVar5) {
            do {
              if (aiStack_fc[iVar8] == iVar12) break;
              iVar8 = iVar8 + 1;
            } while (iVar8 < iVar5);
          }
          if ((iVar8 == iVar5) && (*(code **)(iVar12 + 0x2c0) != (code *)0x0)) {
            (**(code **)(iVar12 + 0x2c0))(iVar12,param_1,0,0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < iStack_100);
      }
      *(undefined1 *)param_1 = 10;
    }
    *param_2 = bVar2;
  }
  else {
    puVar4[0xc3] = (uint)((float)(int)*(short *)(param_2 + 4) * 0.005493164);
    puVar4[0xc4] = (uint)((float)(int)*(short *)(param_2 + 6) * 0.005493164);
    puVar4[0xc5] = (uint)((float)(int)*(short *)(param_2 + 8) * 0.005493164);
  }
  puVar4[0x120] = puVar4[0x11f];
  bVar2 = param_2[1];
  puVar4[0x11f] = (uint)bVar2;
  puVar4[0x121] = puVar4[0x121] | ~puVar4[0x120] & (uint)bVar2;
  if (*(float *)(param_2 + 0x10) != 0.0) {
    *(undefined4 *)(param_1[0x1d] + 0x48c) = *(undefined4 *)(param_2 + 0x10);
  }
  if (*(float *)(param_2 + 0x14) != 0.0) {
    *(undefined4 *)(param_1[0x1d] + 0x490) = *(undefined4 *)(param_2 + 0x14);
  }
  if (puVar4[0x122] == 0) {
    if (((puVar4[0x120] ^ puVar4[0x11f]) & puVar4[0x11f] & 1) == 0) {
      *(undefined4 *)(param_1[0x1d] + 0x48c) = 0;
    }
    else {
      puVar4[0x122] = 1;
    }
  }
  param_1[0xee] = (uint)param_2[2];
  FUN_500f60d0((int)param_1);
  FUN_500f5e50((int)param_1);
  if (puVar4[200] == 0) goto LAB_500f5baf;
  if ((puVar4[0x121] & 1) == 0) {
    if ((puVar4[0x121] & 2) != 0) {
      if (puVar4[0x14e] == 0) goto LAB_500f5ba0;
      FUN_50088550((int)param_1);
    }
  }
  else if (puVar4[0x14e] == 0) {
LAB_500f5ba0:
    FUN_500885e0((int)param_1);
  }
  else {
    piVar1 = param_1 + 1;
    local_144 = 0xc1a00000;
    local_140 = 0xc1a00000;
    local_13c = 0xc1c00000;
    local_150 = 0x41a00000;
    local_14c = 0x41a00000;
    local_148 = 0x42200000;
    (*DAT_5015cac0)(piVar1,&local_144,&local_150,piVar1,param_1,3,&local_38);
    if (cStack_37 != '\0') {
      uVar6 = puVar4[0x14e];
      *piVar1 = *(int *)(uVar6 + 4);
      param_1[2] = *(int *)(uVar6 + 8);
      param_1[3] = *(int *)(uVar6 + 0xc);
    }
    puVar4[0x14e] = 0;
    *(byte *)(puVar4 + 4) = (byte)puVar4[4] & 0x7f;
  }
  puVar4[0x121] = 0;
LAB_500f5baf:
  iVar5 = 1;
  lVar16 = __ftol();
  if (0 < (int)lVar16) {
    iVar12 = 0x464;
    do {
      if ((*(int *)(iVar12 + 0x78 + DAT_5015cca0) != 0) &&
         (*(int **)(*(int *)(iVar12 + DAT_5015cca0 + 0x74) + 0x538) == param_1)) {
        FUN_50088190(iVar12 + DAT_5015cca0);
      }
      iVar5 = iVar5 + 1;
      iVar12 = iVar12 + 0x464;
      lVar16 = __ftol();
    } while (iVar5 <= (int)lVar16);
  }
  return;
}

