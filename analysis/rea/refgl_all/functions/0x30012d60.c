// rea decompile_all
// name: FUN_30012d60
// address: 0x30012d60
// body: available
// range: 0x30012d60-0x300138e6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_30012d60(int param_1,float *param_2)

{
  float fVar1;
  int *piVar2;
  float *pfVar3;
  float fVar4;
  float *pfVar5;
  byte bVar6;
  char *pcVar7;
  int iVar8;
  ushort *puVar9;
  undefined4 *puVar10;
  float unaff_EBX;
  int iVar11;
  float unaff_ESI;
  int iVar12;
  int iVar13;
  int iVar14;
  float10 fVar15;
  float10 extraout_ST0;
  ulonglong uVar16;
  longlong lVar17;
  undefined1 *puVar18;
  float local_b8;
  int *piStack_b4;
  float local_b0;
  float local_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float local_8c;
  float local_88;
  float local_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  float fStack_68;
  int iStack_64;
  float fStack_60;
  uint auStack_5c [21];
  int iStack_8;
  
  local_74 = 0;
  DAT_300a3738 = 0;
  if (param_1 != 0) {
    iVar11 = 0;
    DAT_3008feb8 = 0;
    if (0.0 <= *(float *)(DAT_3008fcdc + 0x18)) {
      _DAT_300a1658 = *(float *)(DAT_3008fcdc + 0x18);
      DAT_300a3738 = 0x10;
    }
    if (0.0 <= *(float *)(DAT_3008fdc0 + 0x18)) {
      _DAT_300a1640 = *(float *)(DAT_3008fdc0 + 0x18);
      DAT_300a3738 = DAT_300a3738 | 0x20;
    }
    if (0 < *(int *)(DAT_3008fc6c + 0xcc)) {
      iVar14 = 0;
      iVar13 = DAT_3008fc6c;
      do {
        iVar8 = *(int *)(iVar13 + 0xd0) + iVar14;
        if ((*(byte *)(iVar8 + 0x1c) & 1) != 0) {
          pfVar5 = (float *)(iVar8 + 0x7c);
          iVar12 = 10;
          do {
            if ((DAT_300a3738 & 0x10) == 0) {
              fVar1 = pfVar5[10] * *(float *)(iVar8 + 0x20);
            }
            else {
              fVar1 = _DAT_300a1658 * pfVar5[10];
            }
            *pfVar5 = fVar1 + *pfVar5;
            fVar15 = (float10)fcos((float10)*pfVar5);
            fVar1 = _DAT_300a1640;
            if ((DAT_300a3738 & 0x20) == 0) {
              fVar1 = *(float *)(iVar8 + 8);
            }
            pfVar5[-10] = (float)(fVar15 * (float10)fVar1);
            fVar1 = pfVar5[-10] * pfVar5[-10];
            if (pfVar5[-10] < 0.0) {
              fVar1 = -fVar1;
            }
            pfVar5[-10] = fVar1;
            pfVar5 = pfVar5 + 1;
            iVar12 = iVar12 + -1;
            iVar13 = DAT_3008fc6c;
          } while (iVar12 != 0);
        }
        iVar11 = iVar11 + 1;
        iVar14 = iVar14 + 0xf0;
      } while (iVar11 < *(int *)(iVar13 + 0xcc));
    }
  }
  DAT_3008fffc = '\0';
  if (DAT_300a3734 != 0) {
    local_8c = DAT_3008fd04 - *param_2;
    local_88 = DAT_3008fd08 - param_2[1];
    local_84 = DAT_3008fd0c - param_2[2];
    if (0.0 <= *(float *)(DAT_3008ff48 + 0x18)) {
      local_ac = 3.57331e-43;
      local_b8 = 0.0;
      local_b0 = 0.0;
      FUN_30020ede(*(char **)(DAT_3008ff48 + 4),(byte *)s__d__d__d_3002f980);
      DAT_300a1652 = local_b0._0_1_;
      DAT_300a3738 = DAT_300a3738 | 1;
      DAT_300a1650 = local_ac._0_1_;
      DAT_300a1651 = local_b8._0_1_;
      DAT_300a1653 = 0xff;
    }
    if (0.0 <= *(float *)(DAT_3008fcb4 + 0x18)) {
      _DAT_300a163c = *(float *)(DAT_3008fcb4 + 0x18) * 255.0;
      DAT_300a3738 = DAT_300a3738 | 2;
    }
    if (0.0 <= *(float *)(DAT_3008fc94 + 0x18)) {
      _DAT_300a1644 = *(undefined4 *)(DAT_3008fc94 + 0x18);
      DAT_300a3738 = DAT_300a3738 | 4;
    }
    if (0.0 <= *(float *)(DAT_3008fee0 + 0x18)) {
      _DAT_300a1648 = *(undefined4 *)(DAT_3008fee0 + 0x18);
      DAT_300a3738 = DAT_300a3738 | 8;
    }
    auStack_5c[2] = 0x4e6e6b28;
    iVar11 = *(int *)(DAT_3008fb94 + 0x2c);
    if ((iVar11 != 0) && (*(float *)(iVar11 + 0x24) != 0.0)) {
      DAT_3008fffc = '\x01';
      local_74 = iVar11;
    }
    FUN_30006170('\0');
    DAT_300a46e0 = DAT_300a46e0 | 1;
    if ((DAT_300a4588 & 1) != 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    DAT_300a4610 = 0x302;
    DAT_300a43fc = 0x303;
    if ((DAT_300a4388 == 0x302) && (DAT_300a45d8 == 0x303)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    FUN_300062a0(0x2100);
    (*DAT_300a44ec)(0xde1);
    (*DAT_300a446c)(0x1d01);
    if ((*(float *)(DAT_3008fce0 + 0x18) != 0.0) || (*(float *)(DAT_3008fd8c + 0x18) != 0.0)) {
      (*DAT_300a4614)(*(undefined4 *)(DAT_3008fce0 + 0x18),*(undefined4 *)(DAT_3008fd8c + 0x18));
      DAT_300a46e0 = DAT_300a46e0 | 0x100;
      if ((DAT_300a4588 & 0x100) != 0) {
        *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
      }
    }
    (*DAT_300a43c8)(0);
    if (*(float *)(DAT_3008fcc4 + 0x18) != 0.0) {
      (*DAT_300a463c)(3,0x1406,0x10,*(undefined4 *)(DAT_3008fc6c + 0xe4));
      (*DAT_300a4658)(0x8074);
      if (*(int *)(DAT_3008fb98 + 0x18) != 0x40400000) {
        (*DAT_300a42b4)(4,0x1401,0,*(undefined4 *)(DAT_3008fc6c + 0xe8));
        (*DAT_300a4658)(0x8076);
      }
    }
    FUN_3001b650();
    iStack_6c = 0;
    bVar6 = (byte)DAT_300a3738;
    if (0 < DAT_300a3734) {
      piStack_b4 = &DAT_300a2730;
      do {
        fVar1 = *(float *)(*piStack_b4 + 0x38);
        if (fVar1 != 0.0) {
          if ((bVar6 & 4) == 0) {
            _DAT_300a1644 = *(undefined4 *)((int)fVar1 + 0xc);
          }
          if ((bVar6 & 8) == 0) {
            _DAT_300a1648 = *(undefined4 *)((int)fVar1 + 0x10);
          }
          if ((bVar6 & 2) == 0) {
            _DAT_300a163c = *(float *)((int)fVar1 + 4) * 255.0;
          }
          if ((bVar6 & 1) == 0) {
            DAT_300a1650 = *(undefined1 *)((int)fVar1 + 0x18);
            DAT_300a1651 = *(undefined1 *)((int)fVar1 + 0x19);
            DAT_300a1652 = *(undefined1 *)((int)fVar1 + 0x1a);
          }
          local_b8 = 0.0;
          if (0 < *(short *)(*piStack_b4 + 0x40)) {
            do {
              DAT_3008feb8 = DAT_3008feb8 + 1;
              piVar2 = *(int **)(*(int *)(*piStack_b4 + 0x3c) + (int)local_b8 * 4);
              iVar11 = *piVar2;
              iStack_70 = iVar11;
              if (*(int *)(DAT_3008fb98 + 0x18) == 0x40400000) {
                (*DAT_300a46f8)((float)((uint)piVar2 & 0xff) * 0.003921569,
                                (float)((int)piVar2 >> 8 & 0xff) * 0.003921569,
                                (float)((int)piVar2 >> 0x10 & 0xff) * 0.003921569,0x3f4ccccd);
              }
              iStack_64 = 0;
              if (0 < iVar11) {
                puVar9 = (ushort *)(piVar2 + 1);
                iVar13 = DAT_3008fc6c;
                do {
                  auStack_5c[iStack_64] = (uint)*puVar9;
                  puVar18 = (undefined1 *)(*(int *)(iVar13 + 0xe8) + (uint)*puVar9 * 4);
                  pfVar5 = (float *)((uint)*puVar9 * 0x10 + *(int *)(iVar13 + 0xe4));
                  if ((pfVar5[3] != DAT_3008fd90) && (*(int *)(DAT_3008fb98 + 0x18) != 0x40400000))
                  {
                    fStack_68 = (pfVar5[1] - fStack_94) * (pfVar5[1] - fStack_94) +
                                (pfVar5[2] - fStack_90) * (pfVar5[2] - fStack_90) +
                                (*pfVar5 - fStack_98) * (*pfVar5 - fStack_98);
                    fVar15 = (float10)fStack_68;
                    if ((*(float *)(DAT_3008fb94 + 0x2c) != fVar1) &&
                       (0 < *(int *)((int)fVar1 + 0x4c))) {
                      pcVar7 = (char *)((int)fVar1 + 0x44);
                      puVar10 = (undefined4 *)((int)fVar1 + 0x2c);
                      do {
                        if (*pcVar7 == '\0') {
                          pfVar3 = (float *)*puVar10;
                          unaff_ESI = (DAT_3008fd08 * pfVar3[1] +
                                      DAT_3008fd0c * pfVar3[2] + DAT_3008fd04 * *pfVar3) - pfVar3[3]
                          ;
                          unaff_EBX = pfVar3[3] -
                                      (pfVar3[1] * pfVar5[1] +
                                      pfVar3[2] * pfVar5[2] + *pfVar5 * *pfVar3);
                          if ((((unaff_ESI < 0.0) && (0.0 < unaff_EBX)) ||
                              ((0.0 < unaff_ESI && (unaff_EBX < 0.0)))) ||
                             (unaff_ESI = (fStack_68 * unaff_EBX * unaff_EBX) /
                                          (unaff_ESI * unaff_ESI + unaff_EBX * unaff_EBX),
                             unaff_ESI == -1.0)) {
                            *pcVar7 = '\x01';
                          }
                          else if ((float10)unaff_ESI < fVar15) {
                            fVar15 = (float10)unaff_ESI;
                          }
                        }
                        puVar10 = puVar10 + 1;
                        pcVar7 = pcVar7 + 1;
                      } while ((int)(pcVar7 + (-0x44 - (int)fVar1)) < *(int *)((int)fVar1 + 0x4c));
                    }
                    if ((*(byte *)((int)fVar1 + 0x1c) & 1) != 0) {
                      uVar16 = __ftol();
                      fVar15 = extraout_ST0 +
                               (float10)*(float *)((int)fVar1 + 0x54 +
                                                  (int)((longlong)
                                                        ((ulonglong)(uint)((int)uVar16 >> 0x1f) <<
                                                         0x20 | uVar16 & 0xffffffff) % 10) * 4);
                    }
                    if (((fVar15 < (float10)fStack_60) && (*(float *)((int)fVar1 + 0x24) != 0.0)) &&
                       ((fStack_80 != *(float *)(DAT_3008fb94 + 0x2c) ||
                        (*(float *)(DAT_3008fb94 + 0x2c) == 0.0)))) {
                      fStack_60 = (float)fVar15;
                      DAT_3008fffc = '\x01';
                      fStack_80 = fVar1;
                    }
                    *puVar18 = DAT_300a1650;
                    puVar18[1] = DAT_300a1651;
                    puVar18[2] = DAT_300a1652;
                    lVar17 = __ftol();
                    puVar18[3] = (char)lVar17;
                    iVar13 = DAT_3008fc6c;
                  }
                  iStack_64 = iStack_64 + 1;
                  puVar9 = puVar9 + 1;
                  iVar11 = iStack_70;
                } while (iStack_64 < iStack_70);
              }
              if (*(float *)(DAT_3008fcc4 + 0x18) == 0.0) {
                if (*(float *)(DAT_3008fb98 + 0x18) == 3.0) {
                  (*DAT_300a4710)();
                  iVar13 = 0;
                  if (0 < iVar11) {
                    do {
                      (*DAT_300a4520)(auStack_5c[iVar13 + -1] * 0x10 + *(int *)(DAT_3008fc6c + 0xe4)
                                     );
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < iVar11);
                  }
                }
                else {
                  (*DAT_300a4710)(6);
                  iVar13 = 0;
                  if (0 < iVar11) {
                    do {
                      (*DAT_300a4280)(*(int *)(DAT_3008fc6c + 0xe8) + auStack_5c[iVar13 + -1] * 4);
                      (*DAT_300a4520)((&iStack_64)[iVar13] * 0x10 + *(int *)(DAT_3008fc6c + 0xe4));
                      iVar13 = iVar13 + 1;
                    } while (iVar13 < iVar11);
                  }
                }
                (*DAT_300a45f4)();
              }
              else {
                (*DAT_300a46c8)(6,iVar11,0x1405,auStack_5c);
              }
              local_b8 = (float)((int)local_b8 + 1);
            } while ((int)local_b8 < (int)*(short *)(*piStack_b4 + 0x40));
            bVar6 = (byte)DAT_300a3738;
          }
        }
        iStack_6c = iStack_6c + 1;
        piStack_b4 = piStack_b4 + 1;
      } while (iStack_6c < DAT_300a3734);
    }
    if (*(float *)(DAT_3008fcc4 + 0x18) != 0.0) {
      (*DAT_300a474c)(0x8074);
      if (*(int *)(DAT_3008fb98 + 0x18) != 0x40400000) {
        (*DAT_300a474c)(0x8076);
      }
      bVar6 = (byte)DAT_300a3738;
    }
    if ((DAT_3008fffc != '\0') && (iStack_8 != 0)) {
      if ((bVar6 & 1) == 0) {
        puVar18 = (undefined1 *)((int)fStack_80 + 0x18);
      }
      else {
        puVar18 = &DAT_300a1650;
      }
      (*DAT_300a4280)(puVar18);
      fStack_80 = DAT_3008fd7c * 2000.0 + DAT_3008fd04;
      fStack_7c = DAT_3008fd80 * 2000.0 + DAT_3008fd08;
      fStack_78 = DAT_3008fd84 * 2000.0 + DAT_3008fd0c;
      fStack_9c = _DAT_3008ff30 * 2500.0;
      fStack_98 = _DAT_3008ff34 * 2500.0;
      fStack_94 = _DAT_3008ff38 * 2500.0;
      fStack_90 = _DAT_3008fd94 * 2500.0;
      local_8c = DAT_3008fd98 * 2500.0;
      local_88 = _DAT_3008fd9c * 2500.0;
      FUN_3001b650();
      (*DAT_300a4710)(6);
      local_b8 = fStack_a0 + local_84;
      piStack_b4 = (int *)(fStack_9c + fStack_80);
      local_b0 = fStack_98 + fStack_7c;
      local_ac = local_b8 + fStack_94;
      fStack_a8 = (float)piStack_b4 + fStack_90;
      fStack_a4 = local_b0 + local_8c;
      (*DAT_300a4520)(&local_ac);
      local_b0 = unaff_EBX - fStack_98;
      local_ac = local_b8 - fStack_94;
      fStack_a8 = (float)piStack_b4 - fStack_90;
      (*DAT_300a4520)(&local_b0);
      fVar1 = local_8c - fStack_a8;
      fVar4 = local_88 - fStack_a4;
      local_b8 = local_84 - fStack_a0;
      piStack_b4 = (int *)(fVar1 - fStack_9c);
      local_b0 = fVar4 - fStack_98;
      local_ac = local_b8 - fStack_94;
      (*DAT_300a4520)(&piStack_b4);
      local_b8 = unaff_ESI + fStack_a0;
      piStack_b4 = (int *)(fVar1 + fStack_9c);
      local_b0 = fVar4 + fStack_98;
      (*DAT_300a4520)(&local_b8);
      (*DAT_300a45f4)();
    }
    if (((*(float *)(DAT_3008fce0 + 0x18) != 0.0) || (*(float *)(DAT_3008fd8c + 0x18) != 0.0)) &&
       (DAT_300a46e0 = DAT_300a46e0 & 0xfffffeff, (DAT_300a4588 & 0x100) == 0)) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    (*DAT_300a43c8)(1);
    (*DAT_300a45fc)(0xde1);
    DAT_300a3734 = 0;
  }
  return;
}

