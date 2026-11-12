// rea decompile_all
// name: FUN_500457c0
// address: 0x500457c0
// body: available
// range: 0x500457c0-0x5004664c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500457c0(int *param_1)

{
  bool bVar1;
  float fVar2;
  short sVar3;
  short sVar4;
  undefined2 *puVar5;
  int *piVar6;
  LPCSTR lpOutputString;
  int iVar7;
  float *pfVar8;
  int *piVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  short *psVar14;
  int iVar15;
  uint uVar16;
  float10 fVar17;
  int iStack_168;
  int iStack_164;
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  int iStack_144;
  float local_140;
  float local_13c;
  float local_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float local_128;
  float local_124;
  float local_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float local_110;
  float fStack_10c;
  float local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  char local_e0;
  char cStack_df;
  float fStack_dc;
  float fStack_d0;
  char cStack_a8;
  char cStack_a7;
  float fStack_a4;
  char cStack_70;
  char cStack_6f;
  float fStack_6c;
  char cStack_38;
  char cStack_37;
  float fStack_34;
  
  FUN_50107a3c(param_1 + 1,(undefined4 *)*param_1,100,&LAB_50044c80);
  iVar7 = 0;
  if (0 < *param_1) {
    puVar5 = (undefined2 *)((int)param_1 + 0x16);
    do {
      puVar5[-1] = (short)iVar7;
      *puVar5 = 0xffff;
      puVar5[2] = 0xffff;
      puVar5[3] = 0xffff;
      puVar5[1] = 0xffff;
      iVar7 = iVar7 + 1;
      puVar5 = puVar5 + 0x32;
    } while (iVar7 < *param_1);
  }
  iVar7 = *param_1;
  if (0 < iVar7) {
    pfVar10 = (float *)(param_1 + 0x1b);
    iVar11 = 1;
    do {
      pfVar8 = pfVar10;
      iVar15 = iVar11;
      if (iVar11 < iVar7) {
        do {
          if (ABS(pfVar10[-0x18] - pfVar8[1]) <= 32.0) {
            if ((ABS(pfVar10[-0x1a] - pfVar8[-1]) < 1.0) && (ABS(pfVar10[-0x19] - *pfVar8) < 50.0))
            {
              if (pfVar10[-0x19] <= *pfVar8) {
                *(undefined2 *)((int)pfVar10 + -0x52) = *(undefined2 *)(pfVar8 + 3);
                *(undefined2 *)((int)pfVar8 + 0xe) = *(undefined2 *)(pfVar10 + -0x16);
              }
              else {
                *(undefined2 *)((int)pfVar10 + -0x56) = *(undefined2 *)(pfVar8 + 3);
                *(undefined2 *)((int)pfVar8 + 0x12) = *(undefined2 *)(pfVar10 + -0x16);
              }
            }
            if ((ABS(pfVar10[-0x19] - *pfVar8) < 1.0) && (ABS(pfVar10[-0x1a] - pfVar8[-1]) < 50.0))
            {
              if (pfVar10[-0x1a] <= pfVar8[-1]) {
                *(undefined2 *)(pfVar10 + -0x15) = *(undefined2 *)(pfVar8 + 3);
                *(undefined2 *)(pfVar8 + 5) = *(undefined2 *)(pfVar10 + -0x16);
              }
              else {
                *(undefined2 *)(pfVar10 + -0x14) = *(undefined2 *)(pfVar8 + 3);
                *(undefined2 *)(pfVar8 + 4) = *(undefined2 *)(pfVar10 + -0x16);
              }
            }
          }
          iVar15 = iVar15 + 1;
          pfVar8 = pfVar8 + 0x19;
        } while (iVar15 < *param_1);
      }
      iVar7 = *param_1;
      pfVar10 = pfVar10 + 0x19;
      bVar1 = iVar11 < iVar7;
      iVar11 = iVar11 + 1;
    } while (bVar1);
  }
  OutputDebugStringA(s_Calculating_node_partial_status_a_501427e4);
  iVar7 = 0;
  if (0 < *param_1) {
    pfVar10 = (float *)(param_1 + 2);
    do {
      local_110 = pfVar10[-1] + 48.0;
      local_108 = pfVar10[1];
      local_120 = local_108 + 64.0;
      local_140 = pfVar10[-1] + 8.0;
      local_13c = *pfVar10 + 8.0;
      local_138 = local_108 + 16.0;
      local_128 = local_110 - 8.0;
      local_124 = (*pfVar10 + 48.0) - 8.0;
      (*DAT_5015cac0)(&DAT_5018bf0c,&local_140,&local_128,&DAT_5018bf0c,0,3,&local_e0);
      if (((fStack_dc < 1.0) || (cStack_df != '\0')) || (local_e0 != '\0')) {
        *(undefined1 *)((int)pfVar10 + 0x16) = 1;
      }
      else {
        *(undefined1 *)((int)pfVar10 + 0x16) = 0;
      }
      fStack_154 = pfVar10[-1] + 24.0;
      fStack_14c = pfVar10[1];
      uVar16 = 0;
      fStack_150 = *pfVar10 + 24.0;
      fStack_148 = fStack_14c - 41.0;
      do {
        fStack_11c = (float)(int)((-(uint)(1 < (int)uVar16) & 0xfffffffe) + 1) + fStack_154;
        fStack_e4 = fStack_14c;
        fStack_114 = fStack_148;
        fStack_118 = (float)(int)((-(uint)((uVar16 & 1) != 0) & 0xfffffffe) + 1) + fStack_150;
        fStack_ec = fStack_11c;
        fStack_e8 = fStack_118;
        (*DAT_5015cac0)(&fStack_ec,&DAT_5018bf0c,&DAT_5018bf0c,&fStack_11c,0,3,&local_e0);
        if (((0.99 < fStack_dc) && (cStack_df == '\0')) && (local_e0 == '\0')) {
          *(byte *)((int)pfVar10 + 0x16) = *(byte *)((int)pfVar10 + 0x16) | 0x20;
          break;
        }
        uVar16 = uVar16 + 1;
      } while ((int)uVar16 < 4);
      fStack_160 = pfVar10[-1] + 24.0;
      fStack_15c = *pfVar10 + 24.0;
      fStack_158 = pfVar10[1] + 24.0;
      fStack_134 = -24.0;
      fStack_130 = -24.0;
      fStack_12c = 0.0;
      fStack_104 = 24.0;
      fStack_100 = 24.0;
      fStack_fc = 1.0;
      fStack_f0 = fStack_158 + 2048.0;
      fStack_f8 = fStack_160;
      fStack_f4 = fStack_15c;
      (*DAT_5015cac0)(&fStack_160,&fStack_134,&fStack_104,&fStack_f8,0,3,&local_e0);
      if ((cStack_df != '\0') || (fVar2 = fStack_d0, local_e0 != '\0')) {
        fVar2 = pfVar10[1];
      }
      iVar7 = iVar7 + 1;
      pfVar10[2] = fVar2;
      pfVar10 = pfVar10 + 0x19;
    } while (iVar7 < *param_1);
  }
  iVar7 = 0;
  if (0 < *param_1) {
    piVar9 = param_1 + 8;
    do {
      piVar13 = piVar9 + 6;
      iVar11 = 0xc;
      piVar6 = piVar9;
      do {
        *(undefined2 *)piVar6 = 0xffff;
        *piVar13 = 0x48800000;
        piVar6 = (int *)((int)piVar6 + 2);
        piVar13 = piVar13 + 1;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 0x19;
    } while (iVar7 < *param_1);
  }
  iVar7 = 0;
  if (0 < *param_1) {
    piVar9 = param_1 + 8;
    do {
      *(undefined2 *)piVar9 = 0xffff;
      iVar7 = iVar7 + 1;
      piVar9 = piVar9 + 0x19;
    } while (iVar7 < *param_1);
  }
  iVar7 = 1;
  iVar11 = 0x88;
  while( true ) {
    iVar15 = *(int *)(DAT_50159170 + 4);
    if (iVar15 == 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = (*(int *)(DAT_50159170 + 8) - iVar15) / 0x88;
    }
    if (iVar12 <= iVar7) break;
    iVar12 = FUN_50045040(param_1,(float *)(iVar15 + 0x18 + iVar11));
    *(int *)(iVar15 + 0x84 + iVar11) = iVar12;
    iVar7 = iVar7 + 1;
    iVar11 = iVar11 + 0x88;
  }
  OutputDebugStringA(s_Connecting_floors_to_nodes_501427c8);
  iStack_164 = 0;
  if (0 < *param_1) {
    iStack_168 = 0xe;
    piVar9 = param_1 + 8;
    iVar7 = DAT_50159170;
    do {
      if (iStack_164 % 100 == 0) {
        lpOutputString = FUN_500fe1e0((byte *)s_Connected__d_floors_501427b0);
        OutputDebugStringA(lpOutputString);
        iVar7 = DAT_50159170;
      }
      fStack_148 = 2.8026e-45;
      do {
        iStack_144 = 1;
        iVar11 = 0x88;
        while( true ) {
          iVar15 = *(int *)(iVar7 + 4);
          if (iVar15 == 0) {
            iVar12 = 0;
          }
          else {
            iVar12 = (*(int *)(iVar7 + 8) - iVar15) / 0x88;
          }
          if (iVar12 <= iStack_144) break;
          iVar7 = FUN_50045440(param_1,iStack_164,*(int *)(iVar15 + 0x84 + iVar11),(int)fStack_148);
          if (iVar7 != 0) {
            sVar3 = (short)*piVar9;
            iVar7 = 0;
            piVar13 = piVar9;
            if (sVar3 != -1) {
              do {
                if (sVar3 == iStack_144) break;
                sVar3 = *(short *)((int)piVar13 + 2);
                iVar7 = iVar7 + 1;
                piVar13 = (int *)((int)piVar13 + 2);
              } while (sVar3 != -1);
              if (0xb < iVar7) goto LAB_50045dd6;
            }
            *(short *)((int)piVar9 + iVar7 * 2) = (short)iStack_144;
            if (iVar7 != -1) {
              fStack_134 = (float)piVar9[-7] -
                           *(float *)(*(int *)(DAT_50159170 + 4) + 0x18 + iVar11);
              iVar15 = *(int *)(DAT_50159170 + 4) + 0x18 + iVar11;
              fStack_130 = (float)piVar9[-6] - *(float *)(iVar15 + 4);
              fStack_12c = (float)piVar9[-5] - *(float *)(iVar15 + 8);
              fVar17 = FUN_500fe130(&fStack_134);
              param_1[iVar7 + iStack_168] = (int)(float)fVar17;
            }
          }
LAB_50045dd6:
          iStack_144 = iStack_144 + 1;
          iVar11 = iVar11 + 0x88;
          iVar7 = DAT_50159170;
        }
        fStack_148 = (float)((int)fStack_148 + -1);
      } while (((short)*piVar9 == -1) && ((uint)fStack_148 < 0x80000000));
      iVar11 = 1;
      piVar13 = piVar9;
      do {
        piVar13 = (int *)((int)piVar13 + 2);
        sVar3 = *(short *)piVar13;
        if ((sVar3 != -1) && ((float)param_1[iStack_168 + iVar11] < (float)piVar9[6])) {
          iVar7 = param_1[iStack_168 + iVar11];
          param_1[iStack_168 + iVar11] = piVar9[6];
          *(short *)piVar13 = (short)*piVar9;
          *(short *)piVar9 = sVar3;
          piVar9[6] = iVar7;
          iVar7 = DAT_50159170;
        }
        iVar11 = iVar11 + 1;
      } while (iVar11 < 0xc);
      iStack_164 = iStack_164 + 1;
      piVar9 = piVar9 + 0x19;
      iStack_168 = iStack_168 + 0x19;
    } while (iStack_164 < *param_1);
  }
  OutputDebugStringA(s_Adding_floor_node_connections_fr_50142774);
  iVar7 = 0;
  iStack_164 = 0;
  while( true ) {
    iVar11 = *(int *)(DAT_50159170 + 4);
    if (iVar11 == 0) {
      iVar15 = 0;
    }
    else {
      iVar15 = (*(int *)(DAT_50159170 + 8) - iVar11) / 0x88;
    }
    if (iVar15 <= iStack_164) break;
    iVar11 = iVar11 + iVar7;
    if ((iVar11 != 0) && (iVar15 = 1, 0 < *(int *)(iVar11 + 8))) {
      do {
        iVar12 = 1;
        fStack_148 = (float)**(int **)(iVar11 + 4);
        if ((int *)fStack_148 != *(int **)(iVar11 + 4)) {
          do {
            if (iVar12 == iVar15) {
              if (((int *)((int)fStack_148 + 8) != (int *)0x0) &&
                 (iVar12 = *(int *)(DAT_50159170 + 4) + *(int *)((int)fStack_148 + 8) * 0x88,
                 iVar12 != 0)) {
                fStack_160 = *(float *)(iVar11 + 0x18);
                fStack_15c = *(float *)(iVar11 + 0x1c);
                fStack_158 = *(float *)(iVar11 + 0x20);
                fStack_154 = *(float *)(iVar12 + 0x18);
                fStack_150 = *(float *)(iVar12 + 0x1c);
                fStack_14c = *(float *)(iVar12 + 0x20);
                FUN_500450d0(param_1,&fStack_160,&fStack_154,*(int *)(iVar11 + 0x24),
                             *(int *)(iVar12 + 0x24));
                fStack_160 = fStack_160 - 16.0;
                fStack_154 = fStack_154 - 16.0;
                fStack_15c = fStack_15c - 16.0;
                fStack_150 = fStack_150 - 16.0;
                FUN_500450d0(param_1,&fStack_160,&fStack_154,*(int *)(iVar11 + 0x24),
                             *(int *)(iVar12 + 0x24));
                fStack_160 = fStack_160 + 32.0;
                fStack_154 = fStack_154 + 32.0;
                FUN_500450d0(param_1,&fStack_160,&fStack_154,*(int *)(iVar11 + 0x24),
                             *(int *)(iVar12 + 0x24));
                fStack_15c = fStack_15c + 32.0;
                fStack_150 = fStack_150 + 32.0;
                FUN_500450d0(param_1,&fStack_160,&fStack_154,*(int *)(iVar11 + 0x24),
                             *(int *)(iVar12 + 0x24));
                fStack_160 = fStack_160 - 32.0;
                fStack_154 = fStack_154 - 32.0;
                FUN_500450d0(param_1,&fStack_160,&fStack_154,*(int *)(iVar11 + 0x24),
                             *(int *)(iVar12 + 0x24));
              }
              break;
            }
            iVar12 = iVar12 + 1;
            FUN_50049a30(&fStack_148,&iStack_144);
          } while (fStack_148 != *(float *)(iVar11 + 4));
        }
        iVar15 = iVar15 + 1;
      } while (iVar15 <= *(int *)(iVar11 + 8));
    }
    iStack_164 = iStack_164 + 1;
    iVar7 = iVar7 + 0x88;
  }
  OutputDebugStringA(s_Ensuring_neighbors_have_nodes_50142754);
  do {
    OutputDebugStringA(s_Neighbor_pass_50142744);
    bVar1 = false;
    iStack_164 = 0;
    if (*param_1 < 1) break;
    piVar9 = param_1 + 6;
    do {
      sVar3 = (short)piVar9[2];
      if (sVar3 != -1) {
        if ((-1 < (short)*piVar9) &&
           (iVar7 = (int)(short)*piVar9, (short)param_1[iVar7 * 0x19 + 8] == -1)) {
          sVar4 = (short)param_1[iVar7 * 0x19 + 8];
          iVar11 = 0;
          piVar13 = param_1 + iVar7 * 0x19 + 8;
          if (sVar4 == -1) {
LAB_5004611f:
            *(short *)((int)param_1 + iVar11 * 2 + iVar7 * 100 + 0x20) = sVar3;
          }
          else {
            do {
              if (sVar4 == sVar3) break;
              sVar4 = *(short *)((int)piVar13 + 2);
              piVar13 = (int *)((int)piVar13 + 2);
              iVar11 = iVar11 + 1;
            } while (sVar4 != -1);
            if (iVar11 < 0xc) goto LAB_5004611f;
          }
          bVar1 = true;
        }
        if ((-1 < (short)piVar9[1]) &&
           (iVar7 = (int)(short)piVar9[1], (short)param_1[iVar7 * 0x19 + 8] == -1)) {
          sVar3 = (short)param_1[iVar7 * 0x19 + 8];
          piVar13 = param_1 + iVar7 * 0x19 + 8;
          iVar11 = 0;
          if (sVar3 == -1) {
LAB_50046174:
            *(short *)((int)param_1 + iVar11 * 2 + iVar7 * 100 + 0x20) = (short)piVar9[2];
          }
          else {
            do {
              if (sVar3 == (short)piVar9[2]) break;
              sVar3 = *(short *)((int)piVar13 + 2);
              piVar13 = (int *)((int)piVar13 + 2);
              iVar11 = iVar11 + 1;
            } while (sVar3 != -1);
            if (iVar11 < 0xc) goto LAB_50046174;
          }
          bVar1 = true;
        }
        if ((-1 < *(short *)((int)piVar9 + 2)) &&
           (iVar7 = (int)*(short *)((int)piVar9 + 2), (short)param_1[iVar7 * 0x19 + 8] == -1)) {
          sVar3 = (short)param_1[iVar7 * 0x19 + 8];
          piVar13 = param_1 + iVar7 * 0x19 + 8;
          iVar11 = 0;
          if (sVar3 == -1) {
LAB_500461c9:
            *(short *)((int)param_1 + iVar11 * 2 + iVar7 * 100 + 0x20) = (short)piVar9[2];
          }
          else {
            do {
              if (sVar3 == (short)piVar9[2]) break;
              sVar3 = *(short *)((int)piVar13 + 2);
              piVar13 = (int *)((int)piVar13 + 2);
              iVar11 = iVar11 + 1;
            } while (sVar3 != -1);
            if (iVar11 < 0xc) goto LAB_500461c9;
          }
          bVar1 = true;
        }
        if ((-1 < *(short *)((int)piVar9 + -2)) &&
           (iVar7 = (int)*(short *)((int)piVar9 + -2), (short)param_1[iVar7 * 0x19 + 8] == -1)) {
          sVar3 = (short)param_1[iVar7 * 0x19 + 8];
          piVar13 = param_1 + iVar7 * 0x19 + 8;
          iVar11 = 0;
          if (sVar3 == -1) {
LAB_5004621e:
            *(short *)((int)param_1 + iVar11 * 2 + iVar7 * 100 + 0x20) = (short)piVar9[2];
          }
          else {
            do {
              if (sVar3 == (short)piVar9[2]) break;
              sVar3 = *(short *)((int)piVar13 + 2);
              piVar13 = (int *)((int)piVar13 + 2);
              iVar11 = iVar11 + 1;
            } while (sVar3 != -1);
            if (iVar11 < 0xc) goto LAB_5004621e;
          }
          bVar1 = true;
        }
      }
      iStack_164 = iStack_164 + 1;
      piVar9 = piVar9 + 0x19;
    } while (iStack_164 < *param_1);
  } while (bVar1);
  iVar7 = 0;
  if (0 < *param_1) {
    psVar14 = (short *)((int)param_1 + 0x1a);
    do {
      if ((char)psVar14[2] != '\0') {
        sVar3 = psVar14[-2];
        if ((sVar3 != -1) &&
           (iVar11 = sVar3 * 100, *(char *)((int)param_1 + sVar3 * 100 + 0x1e) != '\0')) {
          local_138 = *(float *)(psVar14 + -7);
          fStack_134 = *(float *)(psVar14 + -0xb) + 8.0;
          local_140 = *(float *)(psVar14 + -0xb) + 40.0;
          fStack_130 = (*(float *)(psVar14 + -9) + 8.0) - 24.0;
          local_13c = (*(float *)(psVar14 + -9) + 40.0) - 24.0;
          fStack_12c = local_138;
          (*DAT_5015cac0)(&DAT_5018bf0c,&fStack_134,&local_140,&DAT_5018bf0c,0,3,&local_e0);
          if ((1.0 <= fStack_dc) && ((cStack_df == '\0' && (local_e0 == '\0')))) {
            *(byte *)(psVar14 + 2) = *(byte *)(psVar14 + 2) | 2;
            *(byte *)((int)param_1 + iVar11 + 0x1e) = *(byte *)((int)param_1 + iVar11 + 0x1e) | 8;
          }
        }
        sVar3 = *psVar14;
        if ((sVar3 != -1) &&
           (iVar11 = sVar3 * 100, *(char *)((int)param_1 + sVar3 * 100 + 0x1e) != '\0')) {
          fStack_114 = *(float *)(psVar14 + -7);
          fStack_104 = *(float *)(psVar14 + -0xb) + 8.0;
          fStack_11c = *(float *)(psVar14 + -0xb) + 40.0;
          fStack_100 = *(float *)(psVar14 + -9) + 8.0 + 24.0;
          fStack_118 = *(float *)(psVar14 + -9) + 40.0 + 24.0;
          fStack_fc = fStack_114;
          (*DAT_5015cac0)(&DAT_5018bf0c,&fStack_104,&fStack_11c,&DAT_5018bf0c,0,3,&cStack_70);
          if ((1.0 <= fStack_6c) && ((cStack_6f == '\0' && (cStack_70 == '\0')))) {
            *(byte *)(psVar14 + 2) = *(byte *)(psVar14 + 2) | 8;
            *(byte *)((int)param_1 + iVar11 + 0x1e) = *(byte *)((int)param_1 + iVar11 + 0x1e) | 2;
          }
        }
        sVar3 = psVar14[1];
        if ((sVar3 != -1) &&
           (iVar11 = sVar3 * 100, *(char *)((int)param_1 + sVar3 * 100 + 0x1e) != '\0')) {
          fStack_158 = *(float *)(psVar14 + -7);
          local_124 = *(float *)(psVar14 + -9) + 8.0;
          fStack_15c = *(float *)(psVar14 + -9) + 40.0;
          local_128 = (*(float *)(psVar14 + -0xb) + 8.0) - 24.0;
          fStack_160 = (*(float *)(psVar14 + -0xb) + 40.0) - 24.0;
          local_120 = fStack_158;
          (*DAT_5015cac0)(&DAT_5018bf0c,&local_128,&fStack_160,&DAT_5018bf0c,0,3,&cStack_a8);
          if ((1.0 <= fStack_a4) && ((cStack_a7 == '\0' && (cStack_a8 == '\0')))) {
            *(byte *)(psVar14 + 2) = *(byte *)(psVar14 + 2) | 0x10;
            *(byte *)((int)param_1 + iVar11 + 0x1e) = *(byte *)((int)param_1 + iVar11 + 0x1e) | 4;
          }
        }
        sVar3 = psVar14[-1];
        if ((sVar3 != -1) &&
           (iVar11 = sVar3 * 100, *(char *)((int)param_1 + sVar3 * 100 + 0x1e) != '\0')) {
          fStack_14c = *(float *)(psVar14 + -7);
          fStack_10c = *(float *)(psVar14 + -9) + 8.0;
          fStack_150 = *(float *)(psVar14 + -9) + 40.0;
          local_110 = *(float *)(psVar14 + -0xb) + 8.0 + 24.0;
          fStack_154 = *(float *)(psVar14 + -0xb) + 40.0 + 24.0;
          local_108 = fStack_14c;
          (*DAT_5015cac0)(&DAT_5018bf0c,&local_110,&fStack_154,&DAT_5018bf0c,0,3,&cStack_38);
          if ((1.0 <= fStack_34) && ((cStack_37 == '\0' && (cStack_38 == '\0')))) {
            *(byte *)(psVar14 + 2) = *(byte *)(psVar14 + 2) | 4;
            *(byte *)((int)param_1 + iVar11 + 0x1e) = *(byte *)((int)param_1 + iVar11 + 0x1e) | 0x10
            ;
          }
        }
      }
      iVar7 = iVar7 + 1;
      psVar14 = psVar14 + 0x32;
    } while (iVar7 < *param_1);
  }
  return;
}

