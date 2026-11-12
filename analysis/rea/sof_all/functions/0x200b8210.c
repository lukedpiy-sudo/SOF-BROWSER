// rea decompile_all
// name: FUN_200b8210
// address: 0x200b8210
// body: available
// range: 0x200b8210-0x200b8ac9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b8210(int param_1,int *param_2,float *param_3,int *param_4,int *param_5)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  byte bVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float *pfVar17;
  int *in_ECX;
  uint uVar18;
  float *pfVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  byte *pbVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  float *local_48;
  float local_30 [3];
  uint auStack_24 [9];
  
  iVar23 = param_1;
  piVar1 = (int *)(in_ECX[9] + *(int *)(in_ECX[5] + *(int *)(param_1 + 8) * 4) * 0x38);
  pfVar17 = (float *)FUN_200b9060(piVar1 + 0xd,(in_ECX[1] + *in_ECX) * piVar1[1] * 0xc,&param_1);
  iVar23 = *(int *)(iVar23 + 8);
  iVar22 = *piVar1;
  uVar27 = 0;
  *param_2 = (int)(pfVar17 + (iVar23 - iVar22) * 3);
  *param_4 = (int)(pfVar17 + (iVar23 - iVar22) * 3 + piVar1[1] * *in_ECX * 3);
  *param_3 = (float)piVar1[1];
  *param_5 = piVar1[1];
  if ((char)param_1 == '\0') {
    param_2 = (int *)0x0;
    local_48 = pfVar17;
    if (piVar1[1] < 2) {
      if (0 < *in_ECX) {
        do {
          param_4 = (int *)0x0;
          if (0 < piVar1[1]) {
            do {
              pbVar26 = (byte *)(piVar1 + 8);
              param_3 = local_30;
              do {
                bVar10 = *pbVar26;
                iVar23 = ((int)uVar27 >> 0x1f & 7U) + uVar27;
                uVar18 = uVar27 & 0x80000007;
                if ((int)uVar18 < 0) {
                  uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
                }
                uVar27 = uVar27 + bVar10;
                pbVar26 = pbVar26 + 1;
                *param_3 = (float)(*(uint *)((iVar23 >> 3) + piVar1[10]) >> ((byte)uVar18 & 0x1f) &
                                  (1 << (bVar10 & 0x1f)) - 1U);
                param_3 = param_3 + 1;
              } while ((int)(pbVar26 + (-0x20 - (int)piVar1)) < 3);
              pfVar17 = local_48 + 3;
              local_30[0] = local_30[0] * (float)piVar1[2] + (float)piVar1[5];
              local_30[1] = local_30[1] * (float)piVar1[3] + (float)piVar1[6];
              local_30[2] = local_30[2] * (float)piVar1[4] + (float)piVar1[7];
              *local_48 = local_30[0];
              local_48[1] = local_30[1];
              local_48[2] = local_30[2];
              param_4 = (int *)((int)param_4 + 1);
              local_48 = pfVar17;
            } while ((int)param_4 < piVar1[1]);
          }
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < *in_ECX);
      }
    }
    else {
      param_3 = (float *)0x1;
      if (0 < *in_ECX) {
        do {
          if (1 << ((byte)param_3 & 0x1f) <= (int)param_2 + -1) {
            param_3 = (float *)((int)param_3 + 1);
          }
          iVar23 = piVar1[10];
          iVar22 = uVar27 + ((int)uVar27 >> 0x1f & 7U);
          uVar18 = uVar27 & 0x80000007;
          if ((int)uVar18 < 0) {
            uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
          }
          uVar27 = uVar27 + 2;
          if ((*(uint *)((iVar22 >> 3) + iVar23) >> ((byte)uVar18 & 0x1f) & 3) == 0) {
            pbVar26 = (byte *)(piVar1 + 8);
            param_4 = (int *)0;
            do {
              uVar18 = uVar27 & 0x80000007;
              if ((int)uVar18 < 0) {
                uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
              }
              uVar28 = uVar27 + *pbVar26;
              *(uint *)((int)auStack_24 + (int)param_4 + 0xc) =
                   *(uint *)(((int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3) + iVar23) >>
                   ((byte)uVar18 & 0x1f) & (1 << (*pbVar26 & 0x1f)) - 1U;
              uVar18 = uVar28 & 0x80000007;
              if ((int)uVar18 < 0) {
                uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
              }
              uVar27 = uVar28 + 4;
              pbVar26 = pbVar26 + 1;
              *(uint *)((int)auStack_24 + (int)param_4 + 0x18) =
                   *(uint *)(((int)(uVar28 + ((int)uVar28 >> 0x1f & 7U)) >> 3) + iVar23) >>
                   ((byte)uVar18 & 0x1f) & 0xf;
              param_4 = (int *)((int)param_4 + 4);
            } while ((int)(pbVar26 + (-0x20 - (int)piVar1)) < 3);
            iVar23 = 0;
            while( true ) {
              iVar22 = 0;
              do {
                iVar25 = iVar22 + 4;
                *(float *)((int)local_30 + iVar22) = (float)*(int *)((int)auStack_24 + iVar22 + 0xc)
                ;
                iVar22 = iVar25;
              } while (iVar25 < 0xc);
              pfVar19 = local_48 + 3;
              iVar23 = iVar23 + 1;
              local_30[0] = local_30[0] * (float)piVar1[2] + (float)piVar1[5];
              local_30[1] = local_30[1] * (float)piVar1[3] + (float)piVar1[6];
              local_30[2] = local_30[2] * (float)piVar1[4] + (float)piVar1[7];
              *local_48 = local_30[0];
              local_48[1] = local_30[1];
              local_48[2] = local_30[2];
              local_48 = pfVar19;
              if (iVar23 == piVar1[1]) break;
              iVar22 = 0;
              do {
                iVar25 = *(int *)((int)auStack_24 + iVar22 + 0x18);
                if (iVar25 != 0) {
                  iVar24 = uVar27 + ((int)uVar27 >> 0x1f & 7U);
                  uVar18 = uVar27 & 0x80000007;
                  if ((int)uVar18 < 0) {
                    uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
                  }
                  uVar27 = uVar27 + 1 + iVar25;
                  *(uint *)((int)auStack_24 + iVar22 + 0xc) =
                       *(int *)((int)auStack_24 + iVar22 + 0xc) +
                       ((*(uint *)((iVar24 >> 3) + piVar1[10]) >> ((byte)uVar18 & 0x1f) &
                        (1 << ((byte)iVar25 + 1 & 0x1f)) - 1U) - (1 << ((byte)iVar25 & 0x1f)));
                }
                iVar22 = iVar22 + 4;
              } while (iVar22 < 0xc);
            }
          }
          else {
            uVar18 = uVar27 & 0x80000007;
            if ((int)uVar18 < 0) {
              uVar18 = (uVar18 - 1 | 0xfffffff8) + 1;
            }
            uVar28 = *(uint *)(((int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3) + iVar23);
            uVar27 = uVar27 + (int)param_3;
            uVar20 = uVar27 & 0x80000007;
            if ((int)uVar20 < 0) {
              uVar20 = (uVar20 - 1 | 0xfffffff8) + 1;
            }
            param_4 = (int *)0x0;
            uVar20 = *(uint *)(((int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3) + iVar23) >>
                     ((byte)uVar20 & 0x1f) & 0xf;
            uVar27 = uVar27 + 4;
            do {
              iVar22 = uVar27 + ((int)uVar27 >> 0x1f & 7U);
              uVar21 = uVar27 & 0x80000007;
              if ((int)uVar21 < 0) {
                uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
              }
              uVar27 = uVar27 + 4;
              *(uint *)((int)auStack_24 + (int)param_4 + 0x18) =
                   *(uint *)((iVar22 >> 3) + iVar23) >> ((byte)uVar21 & 0x1f) & 0xf;
              if (uVar20 == 0) {
                *(undefined4 *)((int)auStack_24 + (int)param_4) = 0;
              }
              else {
                uVar21 = uVar27 & 0x80000007;
                if ((int)uVar21 < 0) {
                  uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
                }
                uVar29 = uVar27 + uVar20;
                *(uint *)((int)auStack_24 + (int)param_4) =
                     *(uint *)(((int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3) + iVar23) >>
                     ((byte)uVar21 & 0x1f) & (1 << (sbyte)uVar20) - 1U;
                uVar21 = uVar29 & 0x80000007;
                if ((int)uVar21 < 0) {
                  uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
                }
                uVar27 = uVar29 + 1;
                if ((*(uint *)(((int)(uVar29 + ((int)uVar29 >> 0x1f & 7U)) >> 3) + iVar23) >>
                     ((byte)uVar21 & 0x1f) & 1) != 0) {
                  *(int *)((int)auStack_24 + (int)param_4) =
                       -*(int *)((int)auStack_24 + (int)param_4);
                }
              }
              param_4 = (int *)((int)param_4 + 4);
            } while ((int)param_4 < 0xc);
            param_4 = (int *)0x0;
            if (0 < piVar1[1]) {
              do {
                iVar23 = 0;
                do {
                  iVar22 = *(int *)((int)auStack_24 + iVar23 + 0x18);
                  if (iVar22 == 0) {
                    uVar20 = 0;
                  }
                  else {
                    uVar20 = uVar27 & 0x80000007;
                    if ((int)uVar20 < 0) {
                      uVar20 = (uVar20 - 1 | 0xfffffff8) + 1;
                    }
                    uVar20 = *(uint *)(((int)(uVar27 + ((int)uVar27 >> 0x1f & 7U)) >> 3) +
                                      piVar1[10]) >> ((byte)uVar20 & 0x1f) &
                             (1 << ((byte)iVar22 & 0x1f)) - 1U;
                    uVar27 = uVar27 + iVar22;
                  }
                  iVar22 = iVar23 + 4;
                  *(float *)((int)local_30 + iVar23) =
                       (float)(int)(*(int *)((int)auStack_24 + iVar23) + uVar20);
                  iVar23 = iVar22;
                } while (iVar22 < 0xc);
                iVar23 = piVar1[1] *
                         (uVar28 >> ((byte)uVar18 & 0x1f) & (1 << ((byte)param_3 & 0x1f)) - 1U) +
                         (int)param_4;
                local_30[0] = local_30[0] * (float)piVar1[2] + pfVar17[iVar23 * 3];
                local_30[1] = local_30[1] * (float)piVar1[3] + pfVar17[iVar23 * 3 + 1];
                local_30[2] = local_30[2] * (float)piVar1[4] + pfVar17[iVar23 * 3 + 2];
                pfVar19 = local_48 + 3;
                *local_48 = local_30[0];
                param_4 = (int *)((int)param_4 + 1);
                local_48[1] = local_30[1];
                local_48[2] = local_30[2];
                local_48 = pfVar19;
              } while ((int)param_4 < piVar1[1]);
            }
          }
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < *in_ECX);
      }
    }
    iVar23 = piVar1[1];
    iVar25 = 0;
    iVar22 = 0;
    if (iVar23 < 3) {
      param_2 = (int *)0x0;
      if (0 < in_ECX[1]) {
        do {
          iVar25 = 0;
          pfVar17 = local_48;
          if (0 < iVar23) {
            do {
              uVar27 = (uint)*(byte *)(piVar1[0xc] + iVar22);
              iVar22 = iVar22 + 1;
              local_48 = pfVar17 + 3;
              iVar25 = iVar25 + 1;
              *pfVar17 = (float)(&DAT_20404c90)[uVar27 * 3];
              pfVar17[1] = (float)(&DAT_20404c94)[uVar27 * 3];
              pfVar17[2] = (float)(&DAT_20404c98)[uVar27 * 3];
              iVar23 = piVar1[1];
              pfVar17 = local_48;
            } while (iVar25 < iVar23);
          }
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < in_ECX[1]);
        return;
      }
    }
    else if (iVar23 < 5) {
      fVar13 = 1.0 / (float)(iVar23 + -1);
      if (0 < in_ECX[1]) {
        do {
          uVar27 = (uint)*(byte *)(piVar1[0xc] + iVar22);
          fVar2 = (float)(&DAT_20404c90)[uVar27 * 3];
          fVar3 = (float)(&DAT_20404c94)[uVar27 * 3];
          fVar4 = (float)(&DAT_20404c98)[uVar27 * 3];
          uVar27 = (uint)*(byte *)(piVar1[0xc] + iVar22 + 1);
          iVar22 = iVar22 + 2;
          fVar5 = (float)(&DAT_20404c90)[uVar27 * 3] - fVar2;
          iVar24 = 0;
          fVar6 = (float)(&DAT_20404c94)[uVar27 * 3] - fVar3;
          fVar7 = (float)(&DAT_20404c98)[uVar27 * 3] - fVar4;
          pfVar17 = local_48;
          if (0 < iVar23) {
            do {
              local_48 = pfVar17 + 3;
              iVar24 = iVar24 + 1;
              *pfVar17 = fVar2;
              pfVar17[1] = fVar3;
              pfVar17[2] = fVar4;
              iVar23 = piVar1[1];
              fVar2 = fVar5 * fVar13 + fVar2;
              fVar3 = fVar6 * fVar13 + fVar3;
              fVar4 = fVar4 + fVar7 * fVar13;
              pfVar17 = local_48;
            } while (iVar24 < iVar23);
          }
          iVar25 = iVar25 + 1;
        } while (iVar25 < in_ECX[1]);
        return;
      }
    }
    else {
      fVar13 = 1.0 / (float)(iVar23 / 2);
      param_2 = (int *)0x0;
      fVar2 = 1.0 / (float)((iVar23 - iVar23 / 2) + -1);
      if (0 < in_ECX[1]) {
        do {
          iVar25 = piVar1[0xc];
          iVar24 = 0;
          uVar27 = (uint)*(byte *)(iVar25 + iVar22);
          fVar3 = (float)(&DAT_20404c90)[uVar27 * 3];
          fVar4 = (float)(&DAT_20404c94)[uVar27 * 3];
          fVar5 = (float)(&DAT_20404c98)[uVar27 * 3];
          uVar27 = (uint)*(byte *)(iVar25 + iVar22 + 1);
          fVar6 = (float)(&DAT_20404c90)[uVar27 * 3];
          fVar7 = (float)(&DAT_20404c94)[uVar27 * 3];
          fVar11 = (float)(&DAT_20404c98)[uVar27 * 3];
          uVar27 = (uint)*(byte *)(iVar25 + iVar22 + 2);
          iVar22 = iVar22 + 3;
          fVar8 = (float)(&DAT_20404c90)[uVar27 * 3];
          fVar9 = (float)(&DAT_20404c94)[uVar27 * 3];
          fVar12 = (float)(&DAT_20404c98)[uVar27 * 3];
          fVar14 = fVar6 - fVar3;
          fVar15 = fVar7 - fVar4;
          fVar16 = fVar11 - fVar5;
          pfVar17 = local_48;
          if (-1 < iVar23 / 2) {
            do {
              local_48 = pfVar17 + 3;
              iVar24 = iVar24 + 1;
              *pfVar17 = fVar3;
              pfVar17[1] = fVar4;
              pfVar17[2] = fVar5;
              fVar3 = fVar14 * fVar13 + fVar3;
              fVar4 = fVar15 * fVar13 + fVar4;
              fVar5 = fVar5 + fVar16 * fVar13;
              pfVar17 = local_48;
            } while (iVar24 <= piVar1[1] / 2);
          }
          iVar23 = piVar1[1];
          pfVar17 = local_48;
          if (iVar24 < iVar23) {
            do {
              local_48 = pfVar17 + 3;
              iVar24 = iVar24 + 1;
              *pfVar17 = fVar3;
              pfVar17[1] = fVar4;
              pfVar17[2] = fVar5;
              iVar23 = piVar1[1];
              fVar3 = (fVar8 - fVar6) * fVar2 + fVar3;
              fVar4 = (fVar9 - fVar7) * fVar2 + fVar4;
              fVar5 = fVar5 + (fVar12 - fVar11) * fVar2;
              pfVar17 = local_48;
            } while (iVar24 < iVar23);
          }
          param_2 = (int *)((int)param_2 + 1);
        } while ((int)param_2 < in_ECX[1]);
      }
    }
  }
  return;
}

