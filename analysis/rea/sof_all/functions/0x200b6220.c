// rea decompile_all
// name: FUN_200b6220
// address: 0x200b6220
// body: available
// range: 0x200b6220-0x200b8200 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b6220(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  int *piVar2;
  float fVar3;
  byte bVar4;
  int *in_ECX;
  uint uVar5;
  int *piVar6;
  float *pfVar7;
  char cVar8;
  int iVar9;
  int iVar10;
  uint *puVar11;
  float *pfVar12;
  char cVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  byte bVar17;
  float *pfVar18;
  float *local_118;
  float *local_114;
  int local_110;
  float *local_10c;
  float *local_108;
  float *local_104;
  float *local_100;
  float *local_fc;
  int *local_f8;
  int local_f4;
  float *local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  uint local_e0;
  int local_dc;
  int local_d8;
  uint local_d4;
  void *local_d0;
  float local_cc [3];
  uint local_c0 [3];
  float local_b4;
  float local_b0;
  float local_ac;
  uint local_a8 [3];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  undefined1 local_84;
  undefined1 local_83;
  float afStack_80 [3];
  int aiStack_74 [3];
  float afStack_68 [6];
  int aiStack_50 [3];
  float local_44 [4];
  int local_34;
  undefined4 local_10;
  undefined4 local_8;
  undefined4 local_4;
  
  local_4 = 0;
  local_10 = 0;
  local_8 = 0;
  local_44[3] = (float)param_1;
  local_34 = param_2;
  FUN_200b9e60(in_ECX[10],1,afStack_80 + 0x12);
  if (in_ECX[9] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (in_ECX[10] - in_ECX[9]) / 0x38;
  }
  iVar16 = in_ECX[5];
  uVar15 = param_1 + param_2;
  local_114 = (float *)(iVar9 + -1);
  if (iVar16 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = in_ECX[6] - iVar16 >> 2;
  }
  if (uVar5 < uVar15) {
    if (iVar16 == 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = in_ECX[6] - iVar16 >> 2;
    }
    FUN_200a8890(in_ECX[6],uVar15 - iVar9,&local_114);
  }
  else {
    uVar5 = FUN_2008c740();
    if (uVar15 < uVar5) {
      FUN_2009e4c0(in_ECX[5] + uVar15 * 4,in_ECX[6]);
    }
  }
  if (in_ECX[9] == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = (in_ECX[10] - in_ECX[9]) / 0x38;
  }
  local_f4 = 0;
  iVar9 = in_ECX[9] + -0x38 + iVar9 * 0x38;
  *(int *)(iVar9 + 0x24) = in_ECX[2];
  local_84 = 1;
  local_83 = 0;
  local_dc = iVar9;
  if (0 < *in_ECX) {
    local_114 = (float *)(param_3 * 0xc);
    local_f0 = (float *)param_4;
    do {
      iVar16 = param_2;
      pfVar7 = local_f0;
      if (0 < param_2) {
        do {
          FUN_20067780(pfVar7);
          iVar16 = iVar16 + -1;
          pfVar7 = (float *)((int)pfVar7 + 0xc);
        } while (iVar16 != 0);
      }
      local_f0 = (float *)((int)local_f0 + (int)local_114);
      local_f4 = local_f4 + 1;
    } while (local_f4 < *in_ECX);
  }
  local_ec = local_90 - local_9c;
  local_cc[1] = local_98;
  local_cc[0] = local_9c;
  local_cc[2] = local_94;
  local_e8 = local_8c - local_98;
  local_e4 = local_88 - local_94;
  if (local_ec < 0.05) {
    local_ec = 0.05;
  }
  if (local_e8 < 0.05) {
    local_e8 = 0.05;
  }
  if (local_e4 < 0.05) {
    local_e4 = 0.05;
  }
  FUN_200c3870(0x3d4ccccd);
  iVar16 = 0;
  local_118 = (float *)0x1;
  do {
    if (local_ec <= (float)(int)local_118) break;
    local_118 = (float *)((int)local_118 * 2);
    iVar16 = iVar16 + 1;
  } while ((int)local_118 < 0x10000);
  if (0xf < iVar16) {
    iVar16 = 0xf;
  }
  *(byte *)(iVar9 + 0x20) = (byte)iVar16;
  local_118 = (float *)0x1;
  iVar10 = 0;
  do {
    if (local_e8 <= (float)(int)local_118) break;
    local_118 = (float *)((int)local_118 * 2);
    iVar10 = iVar10 + 1;
  } while ((int)local_118 < 0x10000);
  if (0xf < iVar10) {
    iVar10 = 0xf;
  }
  *(char *)(iVar9 + 0x21) = (char)iVar10;
  local_118 = (float *)0x1;
  iVar10 = 0;
  do {
    if (local_e4 <= (float)(int)local_118) break;
    local_118 = (float *)((int)local_118 * 2);
    iVar10 = iVar10 + 1;
  } while ((int)local_118 < 0x10000);
  if (0xf < iVar10) {
    iVar10 = 0xf;
  }
  *(char *)(iVar9 + 0x22) = (char)iVar10;
  pfVar18 = (float *)0x0;
  local_ec = ((float)(1 << ((byte)iVar16 & 0x1f)) - 1.01) / (local_ec * 0.05);
  local_e8 = ((float)(1 << (*(byte *)(iVar9 + 0x21) & 0x1f)) - 1.01) / (local_e8 * 0.05);
  local_114 = (float *)(1 << (*(byte *)(iVar9 + 0x22) & 0x1f));
  local_e4 = ((float)(int)local_114 - 1.01) / (local_e4 * 0.05);
  *(float *)(iVar9 + 8) = 1.0 / local_ec;
  *(float *)(iVar9 + 0xc) = 1.0 / local_e8;
  *(float *)(iVar9 + 0x10) = 1.0 / local_e4;
  *(float *)(iVar9 + 0x14) = local_cc[0];
  *(float *)(iVar9 + 0x18) = local_cc[1];
  *(float *)(iVar9 + 0x1c) = local_cc[2];
  local_f8 = operator_new(param_2 * 0xc);
  local_f0 = operator_new(param_2 * 0xc);
  local_d0 = operator_new(*in_ECX * param_2 * 0xc);
  local_d8 = 1;
  local_f4 = 0;
  pfVar7 = pfVar18;
  if (0 < *in_ECX) {
    do {
      if (1 << ((byte)local_d8 & 0x1f) <= local_f4 + -1) {
        local_d8 = local_d8 + 1;
      }
      iVar9 = 0;
      if (0 < param_2) {
        local_114 = (float *)(local_f4 * param_3);
        iVar16 = local_f4 * param_2;
        do {
          iVar14 = 0;
          iVar10 = (int)local_114 + iVar9;
          local_b4 = (*(float *)(param_4 + iVar10 * 0xc) - *(float *)(local_dc + 0x14)) * local_ec;
          local_b0 = (*(float *)(param_4 + 4 + iVar10 * 0xc) - *(float *)(local_dc + 0x18)) *
                     local_e8;
          local_104 = (float *)((int)local_d0 + (iVar16 + iVar9) * 0xc);
          local_10c = (float *)(local_f8 + iVar9 * 3);
          local_ac = (*(float *)(param_4 + 8 + iVar10 * 0xc) - *(float *)(local_dc + 0x1c)) *
                     local_e4;
          do {
            fVar1 = (float)__ftol();
            if ((int)fVar1 < 0) {
              fVar1 = 0.0;
            }
            iVar10 = 1 << (*(byte *)(local_dc + 0x20 + iVar14) & 0x1f);
            if (iVar10 <= (int)fVar1) {
              fVar1 = (float)(iVar10 - 1);
            }
            *local_10c = fVar1;
            *local_104 = fVar1;
            if (iVar9 != 0) {
              fVar1 = (float)((int)fVar1 - local_f8[iVar9 * 3 + iVar14 + -3]);
              if (iVar9 == 1) {
                afStack_80[iVar14 + 6] = fVar1;
              }
              else {
                if ((int)afStack_80[iVar14 + 6] < (int)fVar1) {
                  afStack_80[iVar14 + 6] = fVar1;
                }
                if ((int)local_cc[iVar14] <= (int)fVar1) goto LAB_200b673f;
              }
              local_cc[iVar14] = fVar1;
            }
LAB_200b673f:
            iVar14 = iVar14 + 1;
            local_10c = local_10c + 1;
            local_104 = local_104 + 1;
          } while (iVar14 < 3);
          iVar9 = iVar9 + 1;
        } while (iVar9 < param_2);
      }
      if (param_2 < 2) {
        pfVar18 = pfVar7;
        if (0 < param_2) {
          local_108 = (float *)param_2;
          piVar6 = local_f8;
          do {
            local_110 = 0;
            do {
              bVar4 = *(byte *)(local_dc + 0x20 + local_110);
              iVar9 = *piVar6;
              if (bVar4 != 0) {
                local_10c = (float *)((int)pfVar7 + (uint)bVar4);
                if (in_ECX[3] <
                    ((int)((int)local_10c + ((int)local_10c >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                  FUN_2008e9e0(s_Compression_overflowed_20157c18);
                }
                iVar16 = (int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3;
                uVar15 = (uint)pfVar7 & 0x80000007;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                }
                puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
                local_114 = (float *)0x1;
                *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
                puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                *puVar11 = *puVar11 | iVar9 << ((byte)uVar15 & 0x1f);
                pfVar7 = local_10c;
              }
              local_110 = local_110 + 1;
              piVar6 = piVar6 + 1;
            } while (local_110 < 3);
            local_108 = (float *)((int)local_108 + -1);
          } while (local_108 != (float *)0x0);
          local_108 = (float *)0x0;
          pfVar18 = pfVar7;
        }
      }
      else {
        iVar9 = 0;
        do {
          iVar16 = *(int *)((int)afStack_80 + iVar9 + 0x18);
          iVar10 = -*(int *)((int)local_cc + iVar9);
          if (-iVar16 != *(int *)((int)local_cc + iVar9) && iVar16 <= iVar10) {
            iVar16 = iVar10;
          }
          if (iVar16 < 0) {
            iVar16 = -iVar16;
          }
          uVar15 = 0;
          do {
            if (iVar16 < 1 << ((byte)uVar15 & 0x1f)) break;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < 0xf);
          *(uint *)((int)local_c0 + iVar9) = uVar15 & 0xff;
          iVar9 = iVar9 + 4;
        } while (iVar9 < 0xc);
        local_100 = (float *)0x0;
        iVar9 = 0;
        do {
          iVar16 = *(int *)((int)local_cc + iVar9);
          iVar10 = *(int *)((int)afStack_80 + iVar9 + 0x18) - iVar16;
          if (iVar10 < 0) {
            iVar10 = -iVar10;
          }
          uVar15 = 0;
          do {
            if (iVar10 < 1 << ((byte)uVar15 & 0x1f)) break;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < 0xf);
          *(uint *)((int)afStack_80 + iVar9 + 0x24) = uVar15 & 0xff;
          if (iVar16 < 0) {
            iVar16 = -iVar16;
          }
          uVar15 = 0;
          do {
            if (iVar16 < 1 << ((byte)uVar15 & 0x1f)) break;
            uVar15 = uVar15 + 1;
          } while ((int)uVar15 < 0xf);
          if (local_100 < (float *)(uVar15 & 0xff)) {
            local_100 = (float *)(uVar15 & 0xff);
          }
          iVar9 = iVar9 + 4;
        } while (iVar9 < 0xc);
        local_10c = (float *)0xffff;
        local_fc = (float *)0x0;
        local_104 = (float *)0x0;
        if (0 < local_f4) {
          local_110 = 0;
          do {
            iVar9 = 0;
            if (0 < param_2) {
              do {
                piVar6 = local_f8 + iVar9 * 3;
                piVar2 = (int *)((int)local_d0 + (local_110 + iVar9) * 0xc);
                iVar16 = 0;
                do {
                  iVar10 = *piVar6 - *piVar2;
                  if (iVar9 == 0) {
                    *(int *)((int)afStack_80 + iVar16 + 0xc) = iVar10;
LAB_200b698d:
                    *(int *)((int)afStack_80 + iVar16) = iVar10;
                  }
                  else {
                    if (*(int *)((int)afStack_80 + iVar16 + 0xc) < iVar10) {
                      *(int *)((int)afStack_80 + iVar16 + 0xc) = iVar10;
                    }
                    if (iVar10 < *(int *)((int)afStack_80 + iVar16)) goto LAB_200b698d;
                  }
                  iVar16 = iVar16 + 4;
                  piVar2 = piVar2 + 1;
                  piVar6 = piVar6 + 1;
                } while (iVar16 < 0xc);
                iVar9 = iVar9 + 1;
              } while (iVar9 < param_2);
            }
            pfVar18 = (float *)0x0;
            iVar9 = 0;
            do {
              iVar16 = *(int *)((int)afStack_80 + iVar9 + 0xc) - *(int *)((int)afStack_80 + iVar9);
              if (iVar16 < 0) {
                iVar16 = -iVar16;
              }
              uVar15 = 0;
              do {
                if (iVar16 < 1 << ((byte)uVar15 & 0x1f)) break;
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < 0xf);
              iVar9 = iVar9 + 4;
              pfVar18 = (float *)((int)pfVar18 + (uVar15 & 0xff));
            } while (iVar9 < 0xc);
            if ((int)pfVar18 < (int)local_10c) {
              iVar9 = 0;
              local_fc = local_104;
              local_e0 = 0;
              do {
                iVar16 = *(int *)((int)afStack_80 + iVar9);
                iVar10 = *(int *)((int)afStack_80 + iVar9 + 0xc) - iVar16;
                if (iVar10 < 0) {
                  iVar10 = -iVar10;
                }
                uVar15 = 0;
                do {
                  if (iVar10 < 1 << ((byte)uVar15 & 0x1f)) break;
                  uVar15 = uVar15 + 1;
                } while ((int)uVar15 < 0xf);
                *(int *)((int)afStack_80 + iVar9 + 0x30) = iVar16;
                *(uint *)((int)local_a8 + iVar9) = uVar15 & 0xff;
                if (iVar16 < 0) {
                  iVar16 = -iVar16;
                }
                uVar15 = 0;
                do {
                  if (iVar16 < 1 << ((byte)uVar15 & 0x1f)) break;
                  uVar15 = uVar15 + 1;
                } while ((int)uVar15 < 0xf);
                if (local_e0 < (uVar15 & 0xff)) {
                  local_e0 = uVar15 & 0xff;
                }
                iVar9 = iVar9 + 4;
                local_10c = pfVar18;
              } while (iVar9 < 0xc);
            }
            local_110 = local_110 + param_2;
            local_104 = (float *)((int)local_104 + 1);
          } while ((int)local_104 < local_f4);
        }
        if ((param_2 == 8) && (local_10c != (float *)0xffff)) {
          piVar2 = (int *)((int)local_fc * 0x60 + (int)local_d0);
          local_108 = (float *)0x8;
          piVar6 = local_f8;
          pfVar18 = local_f0;
          do {
            iVar9 = 3;
            pfVar12 = pfVar18;
            do {
              iVar16 = *piVar6;
              piVar6 = piVar6 + 1;
              iVar10 = *piVar2;
              piVar2 = piVar2 + 1;
              *pfVar12 = (float)(iVar16 - iVar10);
              pfVar12 = pfVar12 + 8;
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
            pfVar18 = pfVar18 + 1;
            local_108 = (float *)((int)local_108 + -1);
          } while (local_108 != (float *)0x0);
          local_108 = afStack_80 + 0xf;
          local_d4 = 0;
          local_118 = local_f0 + 1;
          local_104 = local_f0;
          local_114 = (float *)0x3;
          do {
            local_110 = 1;
            do {
              if (local_110 < 8) {
                pfVar18 = local_104 + local_110;
                pfVar12 = local_104;
                iVar9 = local_110;
                do {
                  fVar1 = *pfVar12;
                  fVar3 = *pfVar18;
                  *pfVar18 = (float)((int)fVar3 - (int)fVar1);
                  *pfVar12 = (float)((int)*pfVar12 + ((int)fVar3 - (int)fVar1) / 2);
                  iVar9 = iVar9 + local_110 * 2;
                  pfVar18 = pfVar18 + local_110 * 2;
                  pfVar12 = pfVar12 + local_110 * 2;
                } while (iVar9 < 8);
              }
              local_110 = local_110 * 2;
            } while (local_110 < 8);
            fVar1 = *local_104;
            if ((int)fVar1 < 0) {
              fVar1 = (float)-(int)fVar1;
            }
            uVar15 = 0;
            do {
              if ((int)fVar1 < 1 << ((byte)uVar15 & 0x1f)) break;
              uVar15 = uVar15 + 1;
            } while ((int)uVar15 < 0xf);
            if (local_d4 < (uVar15 & 0xff)) {
              local_d4 = uVar15 & 0xff;
            }
            fVar1 = 0.0;
            local_110 = 7;
            *local_108 = 0.0;
            pfVar18 = local_118;
            do {
              fVar3 = *pfVar18;
              if ((int)fVar3 < 0) {
                fVar3 = (float)-(int)fVar3;
              }
              uVar15 = 0;
              do {
                if ((int)fVar3 < 1 << ((byte)uVar15 & 0x1f)) break;
                uVar15 = uVar15 + 1;
              } while ((int)uVar15 < 0xf);
              if ((uint)fVar1 < (uVar15 & 0xff)) {
                fVar1 = (float)(uVar15 & 0xff);
              }
              pfVar18 = pfVar18 + 1;
              local_110 = local_110 + -1;
            } while (local_110 != 0);
            *local_108 = fVar1;
            local_108 = local_108 + 1;
            local_104 = local_104 + 8;
            local_118 = local_118 + 8;
            local_114 = (float *)((int)local_114 + -1);
            local_110 = 0;
          } while (local_114 != (float *)0x0);
        }
        iVar9 = 0;
        local_114 = (float *)(local_dc + 0x20);
        if ((local_10c != (float *)0xffff) &&
           ((int)(local_e0 * 3 + 0x13 +
                 local_d8 + (local_a8[2] + local_a8[1] + local_a8[0]) * param_2) <
            (int)(((uint)(local_c0[0] != 0) +
                   (local_c0[1] != 0) + local_c0[2] + (uint)(local_c0[2] != 0) + local_c0[1] +
                  local_c0[0]) * (param_2 + -1) + (uint)*(byte *)(local_dc + 0x22) +
                  (uint)*(byte *)(local_dc + 0x21) + 0xc + (uint)*(byte *)local_114))) {
          iVar9 = 2;
        }
        pfVar18 = (float *)((int)pfVar7 + 2);
        uVar15 = (int)pfVar18 >> 0x1f;
        if (in_ECX[3] < ((int)((int)pfVar18 + (uVar15 & 7)) >> 3) + in_ECX[2]) {
          FUN_2008e9e0(s_Compression_overflowed_20157c18);
        }
        piVar6 = local_f8;
        iVar16 = (int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3;
        uVar5 = (uint)pfVar7 & 0x80000007;
        if ((int)uVar5 < 0) {
          uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
        }
        puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
        *puVar11 = *puVar11 & ~(3 << ((byte)uVar5 & 0x1f));
        puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
        *puVar11 = *puVar11 | (iVar9 >> 1) << ((byte)uVar5 & 0x1f);
        if (iVar9 == 0) {
          local_110 = 0;
          do {
            bVar4 = *(byte *)((int)local_114 + local_110);
            iVar9 = piVar6[local_110];
            if (bVar4 != 0) {
              local_10c = (float *)((int)pfVar18 + (uint)bVar4);
              if (in_ECX[3] <
                  ((int)((int)local_10c + ((int)local_10c >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              iVar16 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
              uVar15 = (uint)pfVar18 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
              *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
              *puVar11 = *puVar11 | iVar9 << ((byte)uVar15 & 0x1f);
              pfVar18 = local_10c;
            }
            uVar15 = local_c0[local_110];
            local_108 = pfVar18 + 1;
            if (in_ECX[3] < ((int)((int)local_108 + ((int)local_108 >> 0x1f & 7U)) >> 3) + in_ECX[2]
               ) {
              FUN_2008e9e0(s_Compression_overflowed_20157c18);
            }
            iVar9 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
            uVar5 = (uint)pfVar18 & 0x80000007;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
            }
            puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
            *puVar11 = *puVar11 & ~(0xf << ((byte)uVar5 & 0x1f));
            puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
            *puVar11 = *puVar11 | uVar15 << ((byte)uVar5 & 0x1f);
            local_110 = local_110 + 1;
            pfVar18 = local_108;
          } while (local_110 < 3);
          if (1 < param_2) {
            local_114 = (float *)(param_2 + -1);
            local_118 = (float *)0x3;
            do {
              local_110 = 0;
              do {
                uVar15 = local_c0[local_110];
                if (uVar15 != 0) {
                  iVar16 = local_f8[(int)local_118 + local_110];
                  iVar10 = local_f8[(int)local_118 + local_110 + -3];
                  iVar9 = uVar15 + 1;
                  if (iVar9 != 0) {
                    local_10c = (float *)(iVar9 + (int)pfVar18);
                    if (in_ECX[3] <
                        ((int)((int)local_10c + ((int)local_10c >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                      FUN_2008e9e0(s_Compression_overflowed_20157c18);
                    }
                    iVar14 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                    uVar5 = (uint)pfVar18 & 0x80000007;
                    if ((int)uVar5 < 0) {
                      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                    }
                    puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar14);
                    local_108 = (float *)0x1;
                    *puVar11 = *puVar11 &
                               ~((1 << ((byte)iVar9 & 0x1f)) + -1 << ((byte)uVar5 & 0x1f));
                    puVar11 = (uint *)(in_ECX[0xd] + iVar14 + in_ECX[2]);
                    *puVar11 = *puVar11 |
                               (iVar16 - iVar10) + (1 << ((byte)uVar15 & 0x1f)) <<
                               ((byte)uVar5 & 0x1f);
                    pfVar18 = local_10c;
                  }
                }
                local_110 = local_110 + 1;
              } while (local_110 < 3);
              local_118 = (float *)((int)local_118 + 3);
              local_114 = (float *)((int)local_114 + -1);
            } while (local_114 != (float *)0x0);
            local_114 = (float *)0x0;
          }
        }
        else if (iVar9 == 1) {
          pfVar7 = (float *)((int)pfVar7 + 6);
          if (in_ECX[3] < ((int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
            FUN_2008e9e0(s_Compression_overflowed_20157c18);
          }
          iVar9 = (int)((int)pfVar18 + (uVar15 & 7)) >> 3;
          uVar15 = (uint)pfVar18 & 0x80000007;
          if ((int)uVar15 < 0) {
            uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
          }
          puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
          local_10c = (float *)0x0;
          *puVar11 = *puVar11 & ~(0xf << ((byte)uVar15 & 0x1f));
          puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
          *puVar11 = *puVar11 | (int)local_100 << ((byte)uVar15 & 0x1f);
          local_108 = local_114;
          local_114 = (float *)((int)local_f8 - (int)(afStack_80 + 9));
          pfVar18 = pfVar7;
          do {
            bVar4 = *(byte *)local_108;
            local_fc = (float *)((int)(afStack_80 + 9) + (int)local_10c);
            iVar9 = *(int *)((int)local_114 + (int)local_fc);
            if (bVar4 != 0) {
              local_104 = (float *)((int)pfVar18 + (uint)bVar4);
              if (in_ECX[3] <
                  ((int)((int)local_104 + ((int)local_104 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              iVar16 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
              uVar15 = (uint)pfVar18 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
              *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
              puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
              *puVar11 = *puVar11 | iVar9 << ((byte)uVar15 & 0x1f);
              pfVar18 = local_104;
            }
            fVar1 = *local_fc;
            pfVar7 = pfVar18 + 1;
            uVar15 = (int)pfVar7 >> 0x1f;
            if (in_ECX[3] < ((int)((int)pfVar7 + (uVar15 & 7)) >> 3) + in_ECX[2]) {
              FUN_2008e9e0(s_Compression_overflowed_20157c18);
            }
            iVar9 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
            uVar5 = (uint)pfVar18 & 0x80000007;
            if ((int)uVar5 < 0) {
              uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
            }
            puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
            *puVar11 = *puVar11 & ~(0xf << ((byte)uVar5 & 0x1f));
            puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
            pfVar18 = (float *)((int)pfVar18 + 5);
            *puVar11 = *puVar11 | (int)fVar1 << ((byte)uVar5 & 0x1f);
            iVar9 = *(int *)((int)local_cc + (int)local_10c);
            uVar5 = (int)pfVar18 >> 0x1f;
            iVar16 = ((int)((int)pfVar18 + (uVar5 & 7)) >> 3) + in_ECX[2];
            if (iVar9 < 0) {
              if (in_ECX[3] < iVar16) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              pfVar12 = local_100;
              iVar16 = (int)((int)pfVar7 + (uVar15 & 7)) >> 3;
              uVar15 = (uint)pfVar7 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
              uVar15 = 1 << ((byte)uVar15 & 0x1f);
              iVar9 = -iVar9;
              *puVar11 = *puVar11 & ~uVar15;
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
              *puVar11 = *puVar11 | uVar15;
              if (local_100 != (float *)0x0) {
                local_118 = (float *)((int)local_100 + (int)pfVar18);
                if (in_ECX[3] <
                    ((int)((int)local_118 + ((int)local_118 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                  FUN_2008e9e0(s_Compression_overflowed_20157c18);
                }
                iVar16 = (int)((int)pfVar18 + (uVar5 & 7)) >> 3;
                uVar15 = (uint)pfVar18 & 0x80000007;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                }
                bVar17 = (byte)uVar15;
                puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
                bVar4 = (byte)pfVar12;
LAB_200b72ff:
                local_104 = (float *)0x1;
                *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << (bVar17 & 0x1f));
                puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                *puVar11 = *puVar11 | iVar9 << (bVar17 & 0x1f);
                pfVar18 = local_118;
              }
            }
            else {
              if (in_ECX[3] < iVar16) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              pfVar12 = local_100;
              iVar16 = (int)((int)pfVar7 + (uVar15 & 7)) >> 3;
              uVar15 = (uint)pfVar7 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
              *puVar11 = *puVar11 & ~(1 << ((byte)uVar15 & 0x1f));
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
              *puVar11 = *puVar11 | 0 << ((byte)uVar15 & 0x1f);
              if (local_100 != (float *)0x0) {
                local_118 = (float *)((int)local_100 + (int)pfVar18);
                if (in_ECX[3] <
                    ((int)((int)local_118 + ((int)local_118 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                  FUN_2008e9e0(s_Compression_overflowed_20157c18);
                }
                iVar16 = (int)((int)pfVar18 + (uVar5 & 7)) >> 3;
                uVar15 = (uint)pfVar18 & 0x80000007;
                if ((int)uVar15 < 0) {
                  uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                }
                bVar17 = (byte)uVar15;
                puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
                bVar4 = (byte)pfVar12;
                goto LAB_200b72ff;
              }
            }
            local_10c = local_10c + 1;
            local_108 = (float *)((int)local_108 + 1);
          } while ((int)local_10c < 0xc);
          if (1 < param_2) {
            local_108 = (float *)(param_2 + -1);
            local_114 = (float *)(local_f8 + 3);
            do {
              local_118 = (float *)0x0;
              do {
                fVar1 = *local_114;
                iVar9 = *(int *)((int)local_cc + (int)local_118);
                fVar3 = local_114[-3];
                iVar16 = *(int *)((int)afStack_80 + (int)local_118 + 0x24);
                if (iVar16 != 0) {
                  local_104 = (float *)((int)pfVar18 + iVar16);
                  if (in_ECX[3] <
                      ((int)((int)local_104 + ((int)local_104 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar10 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                  uVar15 = (uint)pfVar18 & 0x80000007;
                  if ((int)uVar15 < 0) {
                    uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                  }
                  puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar10);
                  local_10c = (float *)0x1;
                  *puVar11 = *puVar11 &
                             ~((1 << ((byte)iVar16 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
                  puVar11 = (uint *)(in_ECX[0xd] + iVar10 + in_ECX[2]);
                  *puVar11 = *puVar11 | ((int)fVar1 - iVar9) - (int)fVar3 << ((byte)uVar15 & 0x1f);
                  pfVar18 = local_104;
                }
                local_118 = (float *)((int)local_118 + 4);
                local_114 = local_114 + 1;
              } while ((int)local_118 < 0xc);
              local_108 = (float *)((int)local_108 + -1);
            } while (local_108 != (float *)0x0);
            local_108 = (float *)0x0;
          }
        }
        else {
          bVar4 = (byte)local_d8;
          if (iVar9 == 2) {
            pfVar7 = pfVar18;
            if (local_d8 != 0) {
              pfVar7 = (float *)((int)pfVar18 + local_d8);
              if (in_ECX[3] < ((int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              iVar9 = (int)((int)pfVar18 + (uVar15 & 7)) >> 3;
              uVar15 = (uint)pfVar18 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
              local_114 = (float *)0x1;
              *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
              puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
              *puVar11 = *puVar11 | (int)local_fc << ((byte)uVar15 & 0x1f);
            }
            pfVar18 = pfVar7 + 1;
            if (in_ECX[3] < ((int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
              FUN_2008e9e0(s_Compression_overflowed_20157c18);
            }
            iVar9 = (int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3;
            uVar15 = (uint)pfVar7 & 0x80000007;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
            }
            puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
            local_10c = (float *)0x0;
            *puVar11 = *puVar11 & ~(0xf << ((byte)uVar15 & 0x1f));
            puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
            iVar9 = (int)pfVar7 + 5;
            *puVar11 = *puVar11 | local_e0 << ((byte)uVar15 & 0x1f);
            local_110 = local_e0 + (int)pfVar18;
            local_100 = pfVar7 + 2;
            do {
              iVar16 = *(int *)((int)local_a8 + (int)local_10c);
              if (in_ECX[3] <
                  ((int)((int)local_100 + ((int)local_100 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              uVar15 = local_e0;
              iVar10 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
              uVar5 = (uint)pfVar18 & 0x80000007;
              if ((int)uVar5 < 0) {
                uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
              }
              local_114 = (float *)(in_ECX[0xd] + iVar10 + in_ECX[2]);
              *local_114 = (float)((uint)*local_114 & ~(0xf << ((byte)uVar5 & 0x1f)));
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar10);
              *puVar11 = *puVar11 | iVar16 << ((byte)uVar5 & 0x1f);
              local_100 = local_100 + 1;
              pfVar18 = pfVar18 + 1;
              local_110 = local_110 + 4;
              iVar9 = iVar9 + 4;
              if (local_e0 != 0) {
                local_108 = *(float **)((int)(afStack_80 + 0xc) + (int)local_10c);
                bVar4 = (byte)local_e0;
                if ((int)local_108 < 0) {
                  local_108 = (float *)-(int)local_108;
                  if (in_ECX[3] < ((int)(local_110 + (local_110 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar16 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                  local_114 = (float *)((uint)pfVar18 & 0x80000007);
                  if ((int)local_114 < 0) {
                    local_114 = (float *)(((int)local_114 - 1U | 0xfffffff8) + 1);
                  }
                  puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                  uVar5 = (int)pfVar18 + uVar15;
                  *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)local_114 & 0x1f));
                  puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                  *puVar11 = *puVar11 | (int)local_108 << ((byte)local_114 & 0x1f);
                  local_100 = (float *)((int)local_100 + uVar15);
                  local_110 = local_110 + uVar15;
                  if (in_ECX[3] <
                      ((int)(iVar9 + uVar15 + ((int)(iVar9 + uVar15) >> 0x1f & 7U)) >> 3) +
                      in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar16 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
                  uVar5 = uVar5 & 0x80000007;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                  }
                  puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
                  uVar5 = 1 << ((byte)uVar5 & 0x1f);
                  *puVar11 = *puVar11 & ~uVar5;
                  puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
                }
                else {
                  if (in_ECX[3] < ((int)(local_110 + (local_110 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar16 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                  local_114 = (float *)((uint)pfVar18 & 0x80000007);
                  if ((int)local_114 < 0) {
                    local_114 = (float *)(((int)local_114 - 1U | 0xfffffff8) + 1);
                  }
                  uVar5 = (int)pfVar18 + uVar15;
                  puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                  *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)local_114 & 0x1f));
                  puVar11 = (uint *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                  *puVar11 = *puVar11 | (int)local_108 << ((byte)local_114 & 0x1f);
                  local_100 = (float *)((int)local_100 + uVar15);
                  local_110 = local_110 + uVar15;
                  if (in_ECX[3] <
                      ((int)(iVar9 + uVar15 + ((int)(iVar9 + uVar15) >> 0x1f & 7U)) >> 3) +
                      in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar16 = (int)(uVar5 + ((int)uVar5 >> 0x1f & 7U)) >> 3;
                  uVar5 = uVar5 & 0x80000007;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                  }
                  local_114 = (float *)(in_ECX[0xd] + iVar16 + in_ECX[2]);
                  *local_114 = (float)((uint)*local_114 & ~(1 << ((byte)uVar5 & 0x1f)));
                  puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar16);
                  uVar5 = 0 << ((byte)uVar5 & 0x1f);
                }
                *puVar11 = *puVar11 | uVar5;
                pfVar18 = (float *)((int)pfVar18 + uVar15 + 1);
                local_100 = (float *)((int)local_100 + 1);
                local_110 = local_110 + 1;
                iVar9 = iVar9 + uVar15 + 1;
              }
              local_10c = local_10c + 1;
            } while ((int)local_10c < 0xc);
            if (0 < param_2) {
              local_10c = (float *)param_2;
              local_114 = (float *)((int)local_d0 + (int)local_fc * param_2 * 0xc);
              piVar6 = local_f8;
              do {
                local_108 = (float *)0x0;
                do {
                  iVar9 = *piVar6;
                  iVar16 = *(int *)((int)(afStack_80 + 0xc) + (int)local_108);
                  fVar1 = *local_114;
                  iVar10 = *(int *)((int)local_a8 + (int)local_108);
                  if (iVar10 != 0) {
                    local_fc = (float *)((int)pfVar18 + iVar10);
                    if (in_ECX[3] <
                        ((int)((int)local_fc + ((int)local_fc >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                      FUN_2008e9e0(s_Compression_overflowed_20157c18);
                    }
                    iVar14 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                    uVar15 = (uint)pfVar18 & 0x80000007;
                    if ((int)uVar15 < 0) {
                      uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                    }
                    puVar11 = (uint *)(in_ECX[0xd] + iVar14 + in_ECX[2]);
                    local_104 = (float *)0x1;
                    *puVar11 = *puVar11 &
                               ~((1 << ((byte)iVar10 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
                    puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar14);
                    *puVar11 = *puVar11 | (iVar9 - iVar16) - (int)fVar1 << ((byte)uVar15 & 0x1f);
                    pfVar18 = local_fc;
                  }
                  local_108 = local_108 + 1;
                  local_114 = local_114 + 1;
                  piVar6 = piVar6 + 1;
                } while ((int)local_108 < 0xc);
                local_10c = (float *)((int)local_10c + -1);
              } while (local_10c != (float *)0x0);
              local_10c = (float *)0x0;
            }
          }
          else if (iVar9 == 3) {
            pfVar7 = pfVar18;
            if (local_d8 != 0) {
              pfVar7 = (float *)((int)pfVar18 + local_d8);
              if (in_ECX[3] < ((int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              iVar9 = (int)((int)pfVar18 + (uVar15 & 7)) >> 3;
              uVar15 = (uint)pfVar18 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
              local_114 = (float *)0x1;
              *puVar11 = *puVar11 & ~((1 << (bVar4 & 0x1f)) + -1 << ((byte)uVar15 & 0x1f));
              puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
              *puVar11 = *puVar11 | (int)local_fc << ((byte)uVar15 & 0x1f);
            }
            pfVar18 = pfVar7 + 1;
            if (in_ECX[3] < ((int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
              FUN_2008e9e0(s_Compression_overflowed_20157c18);
            }
            iVar9 = (int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3;
            uVar15 = (uint)pfVar7 & 0x80000007;
            if ((int)uVar15 < 0) {
              uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
            }
            local_110 = 0;
            puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
            *puVar11 = *puVar11 & ~(0xf << ((byte)uVar15 & 0x1f));
            puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
            *puVar11 = *puVar11 | local_d4 << ((byte)uVar15 & 0x1f);
            local_10c = local_f0;
            do {
              pfVar7 = local_10c;
              if ((int)*local_10c < 0) {
                local_114 = (float *)((int)pfVar18 + 1);
                if (in_ECX[3] <
                    ((int)((int)local_114 + ((int)local_114 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                  FUN_2008e9e0(s_Compression_overflowed_20157c18);
                }
                uVar15 = local_d4;
                pfVar12 = local_114;
                iVar9 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                uVar5 = (uint)pfVar18 & 0x80000007;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                }
                puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
                uVar5 = 1 << ((byte)uVar5 & 0x1f);
                *puVar11 = *puVar11 & ~uVar5;
                puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
                *puVar11 = *puVar11 | uVar5;
                fVar1 = (float)-(int)*pfVar7;
                if (local_d4 != 0) {
                  local_118 = (float *)(local_d4 + (int)local_114);
                  if (in_ECX[3] <
                      ((int)((int)local_118 + ((int)local_118 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar9 = (int)((int)pfVar12 + ((int)pfVar12 >> 0x1f & 7U)) >> 3;
                  uVar5 = (uint)pfVar12 & 0x80000007;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                  }
                  puVar11 = (uint *)(in_ECX[2] + in_ECX[0xd] + iVar9);
                  bVar4 = (byte)uVar5;
                  *puVar11 = *puVar11 & ~((1 << ((byte)uVar15 & 0x1f)) + -1 << (bVar4 & 0x1f));
                  puVar11 = (uint *)(in_ECX[0xd] + iVar9 + in_ECX[2]);
LAB_200b7c5f:
                  local_114 = (float *)0x1;
                  *puVar11 = *puVar11 | (int)fVar1 << (bVar4 & 0x1f);
                  pfVar12 = local_118;
                }
              }
              else {
                pfVar12 = (float *)((int)pfVar18 + 1);
                if (in_ECX[3] < ((int)((int)pfVar12 + ((int)pfVar12 >> 0x1f & 7U)) >> 3) + in_ECX[2]
                   ) {
                  FUN_2008e9e0(s_Compression_overflowed_20157c18);
                }
                uVar15 = local_d4;
                iVar9 = (int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3;
                uVar5 = (uint)pfVar18 & 0x80000007;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                }
                puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
                *puVar11 = *puVar11 & ~(1 << ((byte)uVar5 & 0x1f));
                puVar11 = (uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]);
                *puVar11 = *puVar11 | 0 << ((byte)uVar5 & 0x1f);
                fVar1 = *pfVar7;
                if (local_d4 != 0) {
                  local_118 = (float *)(local_d4 + (int)pfVar12);
                  if (in_ECX[3] <
                      ((int)((int)local_118 + ((int)local_118 >> 0x1f & 7U)) >> 3) + in_ECX[2]) {
                    FUN_2008e9e0(s_Compression_overflowed_20157c18);
                  }
                  iVar9 = (int)((int)pfVar12 + ((int)pfVar12 >> 0x1f & 7U)) >> 3;
                  uVar5 = (uint)pfVar12 & 0x80000007;
                  if ((int)uVar5 < 0) {
                    uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                  }
                  puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
                  bVar4 = (byte)uVar5;
                  *puVar11 = *puVar11 & ~((1 << ((byte)uVar15 & 0x1f)) + -1 << (bVar4 & 0x1f));
                  puVar11 = (uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]);
                  goto LAB_200b7c5f;
                }
              }
              pfVar18 = pfVar12 + 1;
              fVar1 = afStack_80[local_110 + 0xf];
              if (in_ECX[3] < ((int)((int)pfVar18 + ((int)pfVar18 >> 0x1f & 7U)) >> 3) + in_ECX[2])
              {
                FUN_2008e9e0(s_Compression_overflowed_20157c18);
              }
              iVar9 = (int)((int)pfVar12 + ((int)pfVar12 >> 0x1f & 7U)) >> 3;
              uVar15 = (uint)pfVar12 & 0x80000007;
              if ((int)uVar15 < 0) {
                uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
              }
              puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
              *puVar11 = *puVar11 & ~(0xf << ((byte)uVar15 & 0x1f));
              puVar11 = (uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]);
              *puVar11 = *puVar11 | (int)fVar1 << ((byte)uVar15 & 0x1f);
              if ((fVar1 != 0.0) && (1 < param_2)) {
                local_fc = local_10c + 1;
                local_114 = (float *)(param_2 + -1);
                pfVar7 = pfVar18;
                do {
                  pfVar18 = (float *)((int)pfVar7 + 1);
                  uVar15 = (int)pfVar18 >> 0x1f;
                  if ((int)*local_fc < 0) {
                    if (in_ECX[3] < ((int)((int)pfVar18 + (uVar15 & 7)) >> 3) + in_ECX[2]) {
                      FUN_2008e9e0(s_Compression_overflowed_20157c18);
                    }
                    iVar9 = (int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3;
                    uVar5 = (uint)pfVar7 & 0x80000007;
                    if ((int)uVar5 < 0) {
                      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                    }
                    puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
                    uVar5 = 1 << ((byte)uVar5 & 0x1f);
                    *puVar11 = *puVar11 & ~uVar5;
                    *(uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]) =
                         *(uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]) | uVar5;
                    fVar3 = (float)-(int)*local_fc;
                    if (fVar1 != 0.0) {
                      local_108 = (float *)((int)fVar1 + (int)pfVar18);
                      if (in_ECX[3] <
                          ((int)((int)local_108 + ((int)local_108 >> 0x1f & 7U)) >> 3) + in_ECX[2])
                      {
                        FUN_2008e9e0(s_Compression_overflowed_20157c18);
                      }
                      iVar9 = (int)((int)pfVar18 + (uVar15 & 7)) >> 3;
                      uVar15 = (uint)pfVar18 & 0x80000007;
                      if ((int)uVar15 < 0) {
                        uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                      }
                      puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
                      bVar4 = (byte)uVar15;
                      *puVar11 = *puVar11 & ~((1 << (SUB41(fVar1,0) & 0x1f)) + -1 << (bVar4 & 0x1f))
                      ;
                      puVar11 = (uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]);
LAB_200b7ee5:
                      *puVar11 = *puVar11 | (int)fVar3 << (bVar4 & 0x1f);
                      pfVar18 = local_108;
                    }
                  }
                  else {
                    if (in_ECX[3] < ((int)((int)pfVar18 + (uVar15 & 7)) >> 3) + in_ECX[2]) {
                      FUN_2008e9e0(s_Compression_overflowed_20157c18);
                    }
                    iVar9 = (int)((int)pfVar7 + ((int)pfVar7 >> 0x1f & 7U)) >> 3;
                    uVar5 = (uint)pfVar7 & 0x80000007;
                    if ((int)uVar5 < 0) {
                      uVar5 = (uVar5 - 1 | 0xfffffff8) + 1;
                    }
                    puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
                    *puVar11 = *puVar11 & ~(1 << ((byte)uVar5 & 0x1f));
                    puVar11 = (uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]);
                    *puVar11 = *puVar11 | 0 << ((byte)uVar5 & 0x1f);
                    fVar3 = *local_fc;
                    if (fVar1 != 0.0) {
                      local_108 = (float *)((int)fVar1 + (int)pfVar18);
                      if (in_ECX[3] <
                          ((int)((int)local_108 + ((int)local_108 >> 0x1f & 7U)) >> 3) + in_ECX[2])
                      {
                        FUN_2008e9e0(s_Compression_overflowed_20157c18);
                      }
                      iVar9 = (int)((int)pfVar18 + (uVar15 & 7)) >> 3;
                      uVar15 = (uint)pfVar18 & 0x80000007;
                      if ((int)uVar15 < 0) {
                        uVar15 = (uVar15 - 1 | 0xfffffff8) + 1;
                      }
                      puVar11 = (uint *)(in_ECX[0xd] + in_ECX[2] + iVar9);
                      bVar4 = (byte)uVar15;
                      *puVar11 = *puVar11 & ~((1 << (SUB41(fVar1,0) & 0x1f)) + -1 << (bVar4 & 0x1f))
                      ;
                      puVar11 = (uint *)(iVar9 + in_ECX[0xd] + in_ECX[2]);
                      goto LAB_200b7ee5;
                    }
                  }
                  local_fc = local_fc + 1;
                  local_114 = (float *)((int)local_114 + -1);
                  pfVar7 = pfVar18;
                } while (local_114 != (float *)0x0);
              }
              local_110 = local_110 + 1;
              local_10c = local_10c + param_2;
            } while (local_110 < 3);
          }
        }
      }
      local_f4 = local_f4 + 1;
      pfVar7 = pfVar18;
    } while (local_f4 < *in_ECX);
  }
  FUN_200f9f75(local_f8);
  FUN_200f9f75(local_d0);
  FUN_200f9f75(local_f0);
  iVar9 = ((int)((int)pfVar18 + 7 + ((int)pfVar18 + 7 >> 0x1f & 7U)) >> 3) + 4;
  if (in_ECX[3] < in_ECX[2] + iVar9) {
    FUN_2008e9e0(s_Compression_overflowed_20157c18);
  }
  iVar9 = in_ECX[2] + iVar9;
  local_f4 = 0;
  in_ECX[2] = iVar9;
  *(int *)(local_dc + 0x2c) = iVar9;
  DAT_20404c58 = DAT_20404c58 + *in_ECX * param_2 * 6;
  DAT_20404c5c = DAT_20404c5c + (*(int *)(local_dc + 0x2c) - *(int *)(local_dc + 0x24));
  if (0 < in_ECX[1]) {
    iVar9 = 0;
    do {
      iVar16 = 0;
      if (param_2 < 5) {
        do {
          if (iVar16 == 0) {
            iVar10 = 0;
          }
          else {
            iVar10 = param_2 + -1;
          }
          iVar10 = iVar10 + iVar9;
          cVar13 = '\0';
          local_114 = (float *)0x0;
          pfVar7 = (float *)&DAT_20404c94;
          cVar8 = '\0';
          do {
            pfVar18 = (float *)(*(float *)(param_5 + 4 + iVar10 * 0xc) * *pfVar7 +
                               *(float *)(param_5 + 8 + iVar10 * 0xc) * pfVar7[1] +
                               *(float *)(param_5 + iVar10 * 0xc) * pfVar7[-1]);
            if ((float)local_114 < (float)pfVar18) {
              local_114 = pfVar18;
              cVar13 = cVar8;
            }
            pfVar7 = pfVar7 + 3;
            cVar8 = cVar8 + '\x01';
          } while ((int)pfVar7 < 0x20405894);
          if (in_ECX[3] < in_ECX[2] + 1) {
            FUN_2008e9e0(s_Compression_overflowed_20157c18);
          }
          iVar10 = in_ECX[2];
          in_ECX[2] = iVar10 + 1;
          *(char *)(in_ECX[0xd] + iVar10) = cVar13;
        } while ((1 < param_2) && (iVar16 = iVar16 + 1, iVar16 < 2));
      }
      else {
        do {
          if (iVar16 == 2) {
            iVar10 = param_2 + -1;
          }
          else if (iVar16 == 1) {
            iVar10 = param_2 / 2;
          }
          else {
            iVar10 = 0;
          }
          iVar10 = iVar10 + iVar9;
          cVar13 = '\0';
          local_118 = (float *)0x0;
          cVar8 = '\0';
          pfVar7 = (float *)&DAT_20404c94;
          do {
            fVar1 = *(float *)(param_5 + 4 + iVar10 * 0xc) * *pfVar7 +
                    *(float *)(param_5 + 8 + iVar10 * 0xc) * pfVar7[1] +
                    *(float *)(param_5 + iVar10 * 0xc) * pfVar7[-1];
            if ((float)local_118 < fVar1) {
              local_118 = (float *)fVar1;
              cVar13 = cVar8;
            }
            pfVar7 = pfVar7 + 3;
            cVar8 = cVar8 + '\x01';
          } while ((int)pfVar7 < 0x20405894);
          if (in_ECX[3] < in_ECX[2] + 1) {
            FUN_2008e9e0(s_Compression_overflowed_20157c18);
          }
          iVar10 = in_ECX[2];
          iVar16 = iVar16 + 1;
          in_ECX[2] = iVar10 + 1;
          *(char *)(in_ECX[0xd] + iVar10) = cVar13;
        } while (iVar16 < 3);
      }
      local_f4 = local_f4 + 1;
      iVar9 = iVar9 + param_3;
    } while (local_f4 < in_ECX[1]);
  }
  if (in_ECX[3] < in_ECX[2] + 4) {
    FUN_2008e9e0(s_Compression_overflowed_20157c18);
  }
  in_ECX[2] = in_ECX[2] + 4;
  DAT_20404c80 = DAT_20404c80 + in_ECX[1] * param_2;
  DAT_20404c84 = DAT_20404c84 + (in_ECX[2] - *(int *)(local_dc + 0x2c));
  *(int *)(local_dc + 0x28) = *(int *)(local_dc + 0x24) + in_ECX[0xd];
  *(int *)(local_dc + 0x30) = *(int *)(local_dc + 0x2c) + in_ECX[0xd];
  return;
}

