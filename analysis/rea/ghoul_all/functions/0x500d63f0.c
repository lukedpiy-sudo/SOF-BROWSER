// rea decompile_all
// name: FUN_500d63f0
// address: 0x500d63f0
// body: available
// range: 0x500d63f0-0x500d6955 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d63f0(int param_1)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  float *pfVar6;
  int iVar7;
  float fVar8;
  uint uVar9;
  float10 fVar10;
  float fStack_68;
  float fStack_64;
  undefined8 uStack_60;
  float afStack_58 [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float afStack_30 [12];
  
  piVar2 = *(int **)(param_1 + 0x450);
  iVar3 = (**(code **)(*piVar2 + 0x238))();
  iVar4 = FUN_500d5b90(param_1,(int)piVar2,iVar3);
  iVar7 = 0;
  if (iVar4 != 0) {
    if (iVar4 == 2) {
      return;
    }
    iVar4 = *(int *)(iVar3 + 0x15c);
    *(int *)(iVar3 + 0x15c) = iVar4 + 1;
    if (iVar4 == 0) {
      iVar4 = piVar2[0xa7];
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar4);
      if (iVar4 != 0) {
        fStack_68 = 1e+06;
        fStack_64 = 0.0;
        if (0 < iVar4) {
          do {
            if (((-1 < iVar7) && (iVar7 <= piVar2[0xa7])) && (piVar2[0xa5] != 0)) {
              iVar4 = 0;
              for (fVar8 = (float)piVar2[0xa4]; fVar8 != 0.0; fVar8 = *(float *)((int)fVar8 + 0x28))
              {
                if ((((*(float *)((int)fVar8 + 0x10) != 0.0) ||
                     (*(float *)((int)fVar8 + 0x14) != 0.0)) ||
                    ((*(float *)((int)fVar8 + 0x18) != 0.0 ||
                     ((*(float *)((int)fVar8 + 0x1c) != 0.0 ||
                      (*(float *)((int)fVar8 + 0x20) != 0.0)))))) ||
                   (*(float *)((int)fVar8 + 0x24) != 0.0)) {
                  if (iVar4 == iVar7) goto LAB_500d663c;
                  iVar4 = iVar4 + 1;
                }
              }
            }
            fVar8 = 0.0;
LAB_500d663c:
            iVar4 = *(int *)(iVar3 + 0x1a0);
            fStack_3c = *(float *)(iVar4 + 4) - *(float *)((int)fVar8 + 4);
            fStack_38 = *(float *)(iVar4 + 8) - *(float *)((int)fVar8 + 8);
            fStack_34 = *(float *)(iVar4 + 0xc) - *(float *)((int)fVar8 + 0xc);
            fVar10 = FUN_500fe130(afStack_58 + 7);
            if (fVar10 < (float10)fStack_68) {
              fStack_68 = (float)fVar10;
              fStack_64 = fVar8;
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < (int)(float)uStack_60);
          if (fStack_64 != 0.0) {
            afStack_58[1] = *(float *)((int)fStack_64 + 0x10);
            afStack_58[2] = *(float *)((int)fStack_64 + 0x14);
            afStack_58[3] = *(float *)((int)fStack_64 + 0x18);
            uStack_44 = *(undefined4 *)((int)fStack_64 + 0x20);
            uStack_48 = *(undefined4 *)((int)fStack_64 + 0x1c);
            fStack_40 = *(float *)((int)fStack_64 + 0x24);
            if ((afStack_58[3] <= *(float *)(*(int *)(iVar3 + 0x1a0) + 0xc)) &&
               (fVar8 = *(float *)(*(int *)(iVar3 + 0x1a0) + 0xc),
               fVar8 < fStack_40 != (fVar8 == fStack_40))) {
              uVar5 = (*DAT_5015cb24)(0,1);
              iVar4 = *(int *)(iVar3 + 0x1a0);
              if ((((afStack_58[uVar5 + 1] < *(float *)(iVar4 + 4 + uVar5 * 4)) &&
                   (*(float *)(iVar4 + 4 + uVar5 * 4) < afStack_58[uVar5 + 4])) ||
                  ((uVar5 = uVar5 ^ 1, afStack_58[uVar5 + 1] < *(float *)(iVar4 + 4 + uVar5 * 4) &&
                   (*(float *)(iVar4 + 4 + uVar5 * 4) < afStack_58[uVar5 + 4])))) &&
                 (uVar5 != 0xffffffff)) {
                fVar8 = ABS(afStack_58[uVar5 + 1] - *(float *)(iVar4 + 4 + uVar5 * 4));
                fVar1 = ABS(afStack_58[uVar5 + 4] - *(float *)(iVar4 + 4 + uVar5 * 4));
                if (fVar1 <= fVar8) {
                  fVar8 = fVar1;
                }
                *(float *)(iVar3 + 0x1a8) = fVar8;
                if (800.0 <= fVar8) {
                  fVar8 = 800.0;
                }
                *(float *)(iVar3 + 0x1a8) = fVar8;
                if (100.0 < fVar8) {
                  uVar9 = uVar5 ^ 1;
                  uStack_60._4_4_ = (undefined4)((ulonglong)(double)fVar1 >> 0x20);
                  uStack_60 = CONCAT44(uStack_60._4_4_,*(undefined4 *)(iVar4 + 4));
                  uStack_60 = *(undefined8 *)(iVar4 + 4);
                  afStack_58[0] = *(float *)(iVar4 + 0xc);
                  if (afStack_58[uVar9 + 1] <= *(float *)(iVar4 + 4 + uVar9 * 4)) {
                    *(float *)((int)&uStack_60 + uVar9 * 4) = afStack_58[uVar9 + 4];
                    if (uVar5 == 1) {
                      *(undefined4 *)(iVar3 + 0x1ac) = 1;
                    }
                    else {
                      *(undefined4 *)(iVar3 + 0x1ac) = 0;
                    }
                  }
                  else {
                    *(float *)((int)&uStack_60 + uVar9 * 4) = afStack_58[uVar9 + 1];
                    if (uVar5 == 1) {
                      *(undefined4 *)(iVar3 + 0x1ac) = 3;
                    }
                    else {
                      *(undefined4 *)(iVar3 + 0x1ac) = 2;
                    }
                  }
                  iVar4 = (*DAT_5015cb24)(0,10);
                  if (4 < iVar4) {
                    *(float *)(iVar3 + 0x1a8) = -*(float *)(iVar3 + 0x1a8);
                  }
                  afStack_30[0] = 1.0;
                  fVar8 = *(float *)(iVar3 + 0x1a8);
                  afStack_30[1] = 0.0;
                  afStack_30[2] = 0.0;
                  afStack_30[3] = 0.0;
                  afStack_30[4] = -1.0;
                  afStack_30[5] = 0.0;
                  afStack_30[6] = -1.0;
                  afStack_30[7] = 0.0;
                  afStack_30[8] = 0.0;
                  afStack_30[9] = 0.0;
                  afStack_30[10] = 1.0;
                  afStack_30[0xb] = 0.0;
                  iVar4 = 0;
                  pfVar6 = afStack_30 + *(int *)(iVar3 + 0x1ac) * 3;
                  do {
                    fVar1 = *pfVar6;
                    iVar4 = iVar4 + 1;
                    pfVar6 = pfVar6 + 1;
                    (&fStack_64)[iVar4] = (&fStack_64)[iVar4] - fVar1 * fVar8;
                  } while (iVar4 < 3);
                  piVar2 = *(int **)(param_1 + 0x450);
                  iVar3 = (**(code **)(*piVar2 + 0x238))();
                  pfVar6 = (float *)(iVar3 + 0xf0);
                  *pfVar6 = (float)uStack_60;
                  *(undefined4 *)(iVar3 + 0xf4) = uStack_60._4_4_;
                  *(float *)(iVar3 + 0xf8) = afStack_58[0];
                  *(uint *)(iVar3 + 0x194) = *(uint *)(iVar3 + 0x194) | 0x400;
                  FUN_500d4070(param_1,pfVar6,pfVar6);
                  piVar2 = (int *)piVar2[99];
                  if (piVar2 != (int *)0x0) {
                    (**(code **)(*piVar2 + 0x90))(&LAB_500d43b0);
                  }
                  goto LAB_500d6566;
                }
              }
            }
          }
        }
      }
    }
    else {
      if (iVar4 == 1) {
        afStack_58[3] = (float)*(undefined4 *)(param_1 + 0xc);
        afStack_58[1] = (float)*(undefined4 *)(param_1 + 4);
        afStack_58[2] = (float)*(undefined4 *)(param_1 + 8);
        afStack_30[0] = 0.0;
        afStack_30[1] = 1.0;
        afStack_30[2] = 0.0;
        afStack_30[3] = 1.0;
        afStack_30[4] = 0.0;
        afStack_30[5] = 0.0;
        afStack_30[6] = 0.0;
        afStack_30[7] = -1.0;
        afStack_30[8] = 0.0;
        afStack_30[9] = -1.0;
        afStack_30[10] = 0.0;
        afStack_30[0xb] = 0.0;
        iVar4 = 0;
        pfVar6 = afStack_30 + *(int *)(iVar3 + 0x1ac) * 3;
        do {
          fVar8 = *pfVar6;
          iVar4 = iVar4 + 1;
          pfVar6 = pfVar6 + 1;
          afStack_58[iVar4] = fVar8 * 1000.0 + afStack_58[iVar4];
        } while (iVar4 < 3);
        piVar2 = *(int **)(param_1 + 0x450);
        (**(code **)(*piVar2 + 0x238))();
        iVar3 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
        *(float *)(iVar3 + 0xc0) = afStack_58[1];
        *(float *)(iVar3 + 0xc4) = afStack_58[2];
        *(float *)(iVar3 + 200) = afStack_58[3];
        *(undefined4 *)(iVar3 + 300) = *(undefined4 *)(param_1 + 0x14);
        piVar2 = (int *)piVar2[99];
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x90))(&LAB_500d5a60);
        }
LAB_500d6566:
        *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
        return;
      }
      if (iVar4 == 2) {
        FUN_500d4950(param_1,*(float *)(iVar3 + 0x1a8) + *(float *)(iVar3 + 0x1a8));
        return;
      }
    }
  }
  *(undefined4 *)(iVar3 + 0x158) = 0xffffffff;
  return;
}

