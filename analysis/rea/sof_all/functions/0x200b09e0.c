// rea decompile_all
// name: FUN_200b09e0
// address: 0x200b09e0
// body: available
// range: 0x200b09e0-0x200b2224 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200b09e0(int *param_1,int param_2)

{
  short *psVar1;
  ushort *puVar2;
  float *pfVar3;
  short *psVar4;
  int *piVar5;
  float fVar6;
  short sVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  char cVar15;
  int iVar16;
  int *in_ECX;
  int iVar17;
  int iVar18;
  uint uVar19;
  float unaff_EBX;
  ushort *puVar20;
  float unaff_EBP;
  int *piVar21;
  uint uVar22;
  int unaff_retaddr;
  undefined4 uVar23;
  ushort uVar24;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  float fStack_64;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int iStack_30;
  int *local_2c;
  int iStack_28;
  int iStack_24;
  int *piStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_8;
  int *piStack_4;
  
  DAT_20403ec8 = DAT_20403ec8 + 1;
  local_2c = in_ECX;
  (*(code *)DAT_20403c04[0x1e])(0x2300,0x2200,0x46040000);
  piVar21 = piStack_4;
  *in_ECX = *in_ECX + 1;
  FUN_200b8210(piStack_4,&iStack_44,&iStack_4c,&iStack_28,&local_2c);
  FUN_200b8210(piVar21 + 4,&iStack_40,&iStack_48,&iStack_18,&piStack_20);
  iStack_50 = 0;
  iStack_1c = *(int *)(*piVar21 * 4 + in_ECX[0x3b]);
  iVar17 = piVar21[4] * 4;
  iStack_30 = *(int *)(iVar17 + in_ECX[0x3b]);
  iStack_10 = *(int *)(*(int *)(piVar21[3] + 0x14) + *piVar21 * 4) * 2;
  fVar8 = (float)piVar21[0xb];
  iStack_34 = piVar21[1] * 2;
  iStack_24 = *(int *)(*(int *)(piVar21[3] + 0x14) + iVar17) * 2;
  iStack_14 = piVar21[5] * 2;
  fVar9 = (float)piVar21[10];
  fVar10 = (float)piVar21[9];
  if (0 < in_ECX[2]) {
    do {
      uStack_74._0_2_ = (ushort)(byte)uStack_74;
      iVar17 = iStack_50 * 0xc;
      iStack_3c = *(int *)(in_ECX[0x2c] + 8 + iVar17);
      fStack_64 = 0.0;
      if (0 < iStack_3c) {
        do {
          psVar1 = (short *)(in_ECX[0x30] +
                            (*(int *)(in_ECX[0x2c] + 4 + iVar17) + (int)fStack_64) * 6);
          iVar18 = (int)*psVar1;
          if (*(int *)(((int *)param_1[0x2e])[2] + iVar18 * 4) != *(int *)param_1[0x2e]) {
            *(undefined1 *)(*(int *)(*(int *)(param_2 + 4) + iVar18 * 4) + 5) = 1;
            cVar15 = FUN_200c28e0(piVar21);
            if (cVar15 != '\0') {
              if (uStack_74._1_1_ == '\0') {
                FUN_2009cf60(*(undefined4 *)(in_ECX[0x2c] + iVar17),param_1,piVar21);
                if ((*(int *)(unaff_retaddr + 4) == 0) ||
                   (*(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2 == 0)) {
                  *(undefined1 *)((int)param_1 + 7) = 0;
                }
                uVar24 = (ushort)uStack_74;
                uStack_74._0_3_ = (uint3)(ushort)uStack_74;
                if ((float)param_1[0x10] < 0.01) goto LAB_200b21ac;
                if ((float)param_1[0x10] < 0.99) {
                  uStack_74._0_3_ = CONCAT12(1,uVar24);
                }
                psVar4 = uStack_74;
                if (*(char *)((int)param_1 + 5) == '\0') {
                  (*(code *)DAT_20403c04[0xb])(0xb44);
                }
                else {
                  (*(code *)DAT_20403c04[10])();
                }
                uStack_74 = (short *)CONCAT13(1,(uint3)uStack_74);
                if (*(char *)((int)param_1 + 7) == '\0') {
                  if (((char)param_1[2] == '\0') &&
                     (((*(int *)(unaff_retaddr + 4) == 0 ||
                       (*(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2 == 0)) &&
                      (in_ECX[10] < 1)))) {
                    param_1[9] = param_1[6];
                    param_1[10] = param_1[7];
                    param_1[0xb] = param_1[8];
                    fVar6 = (float)param_1[0xf];
                    param_1[9] = (int)(fVar6 + (float)param_1[9]);
                    param_1[10] = (int)(fVar6 + (float)param_1[10]);
                    param_1[0xb] = (int)(fVar6 + (float)param_1[0xb]);
                    if (*(char *)((int)param_1 + 0xb) != '\0') {
                      param_1[9] = (int)((float)param_1[0xc] * (float)param_1[9]);
                      param_1[10] = (int)((float)param_1[0xd] * (float)param_1[10]);
                      param_1[0xb] = (int)((float)param_1[0xe] * (float)param_1[0xb]);
                    }
                    (*(code *)DAT_20403c04[5])(param_1[9],param_1[10],param_1[0xb],param_1[0x10]);
                  }
                  if (*(char *)((int)param_1 + 6) == '\0') {
                    (*(code *)DAT_20403c04[10])(0xde1);
                  }
                  else {
                    FUN_2009cfb0(param_1,0);
                  }
                  if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) ||
                     (*param_1 != 0)) {
                    (*(code *)DAT_20403c04[0xb])(0xbe2);
                    (*(code *)DAT_20403c04[8])(0);
                    if (*param_1 == 1) {
                      (*(code *)DAT_20403c04[3])(1,1);
                    }
                    else {
                      (*(code *)DAT_20403c04[3])(0x302,0x303);
                    }
                    (*(code *)DAT_20403c04[0xb])(0x8037);
                    (*(code *)DAT_20403c04[0x18])(DAT_20157958,DAT_2015795c);
                    (*(code *)DAT_20403c04[0xb])(0xbc0);
                    (*(code *)*DAT_20403c04)(0x204,0);
                  }
                }
                else {
                  uStack_74 = (short *)((uint)psVar4 & 0xffffff);
                }
                uStack_74._0_2_ = CONCAT11(1,(byte)uStack_74);
              }
              uVar24 = psVar1[2];
              fStack_88 = (float)(uint)uVar24;
              puVar2 = (ushort *)(in_ECX[0x31] + psVar1[1] * 2);
              if (uStack_74._3_1_ == '\0') {
                while (uStack_70 = puVar2, uVar24 != 0) {
                  uVar24 = *puVar2;
                  uStack_78 = (uint)uVar24;
                  uStack_70 = puVar2 + 1;
                  iVar18 = (int)fStack_88 + -1;
                  if ((short)uVar24 < 0) {
                    uStack_78 = -uStack_78;
                  }
                  else if (uVar24 == 0) {
                    uStack_78 = (uint)*uStack_70;
                    uStack_70 = puVar2 + 2;
                    iVar18 = (int)fStack_88 + -2;
                  }
                  fStack_88 = (float)(iVar18 - uStack_78);
                  if (0 < (short)uStack_78) {
                    uStack_78 = uStack_78 & 0xffff;
                    do {
                      uVar24 = *uStack_70;
                      uStack_70 = uStack_70 + 1;
                      piVar21 = (int *)(in_ECX[0x43] + (short)uVar24 * 0x4c);
                      if (*in_ECX != *(int *)(in_ECX[0x43] + (short)uVar24 * 0x4c)) {
                        *piVar21 = *in_ECX;
                        if (-1 < piVar21[1]) {
                          iVar16 = piVar21[1] * iStack_4c;
                          iVar18 = iStack_44 + iVar16 * 0xc;
                          piVar21[2] = *(int *)(iStack_44 + iVar16 * 0xc);
                          piVar21[3] = *(int *)(iVar18 + 4);
                          piVar21[4] = *(int *)(iVar18 + 8);
                          fVar11 = *(float *)(iStack_40 + piVar21[1] * iStack_48 * 0xc);
                          iVar18 = iStack_40 + piVar21[1] * iStack_48 * 0xc;
                          unaff_EBP = *(float *)(iVar18 + 4);
                          unaff_EBX = *(float *)(iVar18 + 8);
                          piVar21[2] = (int)((float)piVar21[2] - fVar11);
                          piVar21[3] = (int)((float)piVar21[3] - unaff_EBP);
                          piVar21[4] = (int)((float)piVar21[4] - unaff_EBX);
                          fVar6 = (float)piStack_4[8];
                          piVar21[2] = (int)(fVar6 * (float)piVar21[2]);
                          piVar21[3] = (int)(fVar6 * (float)piVar21[3]);
                          piVar21[4] = (int)(fVar6 * (float)piVar21[4]);
                          piVar21[2] = (int)(fVar11 + (float)piVar21[2]);
                          piVar21[3] = (int)(unaff_EBP + (float)piVar21[3]);
                          piVar21[4] = (int)(unaff_EBX + (float)piVar21[4]);
                        }
                        if (-1 < piVar21[5]) {
                          piVar5 = (int *)(iStack_28 + piVar21[5] * (int)local_2c * 0xc);
                          piVar21[6] = *piVar5;
                          piVar21[7] = piVar5[1];
                          piVar21[8] = piVar5[2];
                          pfVar3 = (float *)(iStack_18 + piVar21[5] * (int)piStack_20 * 0xc);
                          fVar11 = *pfVar3;
                          unaff_EBP = pfVar3[1];
                          unaff_EBX = pfVar3[2];
                          piVar21[6] = (int)((float)piVar21[6] - fVar11);
                          piVar21[7] = (int)((float)piVar21[7] - unaff_EBP);
                          piVar21[8] = (int)((float)piVar21[8] - unaff_EBX);
                          fVar6 = (float)piStack_4[8];
                          piVar21[6] = (int)(fVar6 * (float)piVar21[6]);
                          piVar21[7] = (int)(fVar6 * (float)piVar21[7]);
                          piVar21[8] = (int)(fVar6 * (float)piVar21[8]);
                          piVar21[6] = (int)(fVar11 + (float)piVar21[6]);
                          piVar21[7] = (int)(unaff_EBP + (float)piVar21[7]);
                          piVar21[8] = (int)(unaff_EBX + (float)piVar21[8]);
                        }
                        if (-1 < piVar21[9]) {
                          psVar1 = (short *)(iStack_1c + (piVar21[9] * iStack_10 + iStack_34) * 2);
                          piVar21[10] = (int)(float)(int)*psVar1;
                          piVar21[0xb] = (int)(float)(int)psVar1[1];
                          psVar1 = (short *)(iStack_30 + (piVar21[9] * iStack_24 + iStack_14) * 2);
                          fVar11 = (float)(int)*psVar1;
                          unaff_EBP = (float)(int)psVar1[1];
                          piVar21[10] = (int)((float)piVar21[10] - fVar11);
                          piVar21[0xb] = (int)((float)piVar21[0xb] - unaff_EBP);
                          piVar21[0xc] = (int)((float)piVar21[0xc] - unaff_EBX);
                          fVar6 = (float)piStack_4[8];
                          piVar21[10] = (int)(fVar6 * (float)piVar21[10]);
                          piVar21[0xb] = (int)(fVar6 * (float)piVar21[0xb]);
                          piVar21[0xc] = (int)(fVar6 * (float)piVar21[0xc]);
                          piVar21[10] = (int)(fVar11 + (float)piVar21[10]);
                          piVar21[0xb] = (int)(unaff_EBP + (float)piVar21[0xb]);
                          piVar21[0xc] = (int)(unaff_EBX + (float)piVar21[0xc]);
                          piVar21[10] = (int)((float)in_ECX[0x26] * (float)piVar21[10]);
                          piVar21[0xb] = (int)((float)in_ECX[0x27] * (float)piVar21[0xb]);
                          piVar21[0xc] = (int)((float)in_ECX[0x28] * (float)piVar21[0xc]);
                        }
                        if ((*(int *)(unaff_retaddr + 4) == 0) ||
                           (*(int *)(unaff_retaddr + 8) - *(int *)(unaff_retaddr + 4) >> 2 == 0)) {
                          param_1[9] = param_1[6];
                          param_1[10] = param_1[7];
                          param_1[0xb] = param_1[8];
                        }
                        else {
                          if (*(char *)((int)param_1 + 7) != '\0') {
                            fStack_84 = fVar10 - (float)piVar21[2];
                            fStack_80 = fVar9 - (float)piVar21[3];
                            fStack_7c = fVar8 - (float)piVar21[4];
                            fVar6 = SQRT(fStack_84 * fStack_84 +
                                         fStack_80 * fStack_80 + fStack_7c * fStack_7c);
                            if (fVar6 <= 1e-10) {
                              fStack_84 = 0.0;
                              fStack_80 = 0.0;
                              fStack_7c = 0.0;
                            }
                            else {
                              FUN_200c3870(fVar6);
                            }
                            fVar13 = (float)piVar21[7];
                            fVar14 = (float)piVar21[8];
                            fVar6 = (float)piVar21[8];
                            fVar11 = (float)piVar21[7];
                            fVar12 = (float)piVar21[6];
                            param_1[0x14] = 0;
                            param_1[0x15] = 0;
                            param_1[0x16] = 0;
                            fVar6 = fStack_84 * fVar12 + fStack_80 * fVar11 + fStack_7c * fVar6;
                            fVar13 = fVar13 * fVar6;
                            fVar14 = fVar14 * fVar6;
                            unaff_EBP = fVar13 - (fStack_80 - fVar13);
                            unaff_EBX = fVar14 - (fStack_7c - fVar14);
                          }
                          param_1[9] = 0;
                          param_1[10] = 0;
                          param_1[0xb] = 0;
                          for (uVar22 = 0;
                              (iVar18 = *(int *)(unaff_retaddr + 4), iVar18 != 0 &&
                              (uVar22 < (uint)(*(int *)(unaff_retaddr + 8) - iVar18 >> 2)));
                              uVar22 = uVar22 + 1) {
                            (**(code **)(**(int **)(iVar18 + uVar22 * 4) + 0x14))
                                      (piVar21 + 2,piVar21 + 6,&stack0xffffff68,param_1);
                          }
                          if (*(char *)((int)param_1 + 7) != '\0') {
                            piVar21[0x10] = param_1[0x14];
                            piVar21[0x11] = param_1[0x15];
                            piVar21[0x12] = param_1[0x16];
                          }
                          param_1[9] = (int)((float)param_1[6] + (float)param_1[9]);
                          param_1[10] = (int)((float)param_1[7] + (float)param_1[10]);
                          param_1[0xb] = (int)((float)param_1[8] + (float)param_1[0xb]);
                        }
                        fVar6 = (float)param_1[0xf];
                        param_1[9] = (int)(fVar6 + (float)param_1[9]);
                        param_1[10] = (int)(fVar6 + (float)param_1[10]);
                        param_1[0xb] = (int)(fVar6 + (float)param_1[0xb]);
                        piVar21[0xd] = param_1[9];
                        piVar21[0xe] = param_1[10];
                        piVar21[0xf] = param_1[0xb];
                        if (*(char *)((int)param_1 + 0xb) != '\0') {
                          piVar21[0xd] = (int)((float)param_1[0xc] * (float)piVar21[0xd]);
                          piVar21[0xe] = (int)((float)param_1[0xd] * (float)piVar21[0xe]);
                          piVar21[0xf] = (int)((float)param_1[0xe] * (float)piVar21[0xf]);
                        }
                      }
                      uStack_78 = uStack_78 - 1;
                    } while (uStack_78 != 0);
                  }
                  puVar2 = uStack_70;
                  piVar21 = piStack_4;
                  uVar24 = fStack_88._0_2_;
                }
              }
              else {
                cVar15 = FUN_20090e40(piVar21);
                uStack_70 = puVar2;
                if (cVar15 != '\0') {
                  if (*(char *)((int)param_1 + 6) != '\0') {
                    FUN_2009cff0(param_1,iVar18);
                  }
                  (*(code *)DAT_20403c04[0x33])();
                  while (uVar24 != 0) {
                    uVar24 = *puVar2;
                    uStack_70 = puVar2 + 1;
                    if ((short)uVar24 < 0) {
                      uVar24 = -uVar24;
                      (*(code *)DAT_20403c04[1])(6);
                      DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)uVar24;
                      if (DAT_20403d68 != '\0') {
                        uVar23 = 6;
                        goto LAB_200b0eaf;
                      }
                    }
                    else if (uVar24 == 0) {
                      uVar24 = *uStack_70;
                      uStack_70 = puVar2 + 2;
                      (*(code *)DAT_20403c04[1])(4);
                      DAT_20404c6c = DAT_20404c6c + (int)(short)uVar24 / 3;
                      if (DAT_20403d68 != '\0') {
                        uVar23 = 4;
LAB_200b0eaf:
                        FUN_20093e30(uVar23);
                      }
                    }
                    else {
                      (*(code *)DAT_20403c04[1])(5);
                      DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)uVar24;
                      if (DAT_20403d68 != '\0') {
                        uVar23 = 5;
                        goto LAB_200b0eaf;
                      }
                    }
                    if (uStack_70._3_1_ == '\0') {
                      if (0 < (short)uVar24) {
                        fStack_7c = (float)(uint)uVar24;
                        do {
                          sVar7 = *uStack_74;
                          uStack_74 = uStack_74 + 1;
                          piVar21 = (int *)(in_ECX[0x43] + sVar7 * 0x4c);
                          if (*in_ECX != *(int *)(in_ECX[0x43] + sVar7 * 0x4c)) {
                            *piVar21 = *in_ECX;
                            if (-1 < piVar21[1]) {
                              iVar16 = piVar21[1] * iStack_50;
                              iVar18 = iStack_48 + iVar16 * 0xc;
                              piVar21[2] = *(int *)(iStack_48 + iVar16 * 0xc);
                              piVar21[3] = *(int *)(iVar18 + 4);
                              piVar21[4] = *(int *)(iVar18 + 8);
                              fVar11 = *(float *)(iStack_44 + piVar21[1] * iStack_4c * 0xc);
                              iVar18 = iStack_44 + piVar21[1] * iStack_4c * 0xc;
                              fVar12 = *(float *)(iVar18 + 4);
                              unaff_EBP = *(float *)(iVar18 + 8);
                              piVar21[2] = (int)((float)piVar21[2] - fVar11);
                              piVar21[3] = (int)((float)piVar21[3] - fVar12);
                              piVar21[4] = (int)((float)piVar21[4] - unaff_EBP);
                              fVar6 = *(float *)(iStack_8 + 0x20);
                              piVar21[2] = (int)(fVar6 * (float)piVar21[2]);
                              piVar21[3] = (int)(fVar6 * (float)piVar21[3]);
                              piVar21[4] = (int)(fVar6 * (float)piVar21[4]);
                              piVar21[2] = (int)(fVar11 + (float)piVar21[2]);
                              piVar21[3] = (int)(fVar12 + (float)piVar21[3]);
                              piVar21[4] = (int)(unaff_EBP + (float)piVar21[4]);
                            }
                            if (-1 < piVar21[5]) {
                              piVar5 = local_2c + piVar21[5] * iStack_30 * 3;
                              piVar21[6] = *piVar5;
                              piVar21[7] = piVar5[1];
                              piVar21[8] = piVar5[2];
                              pfVar3 = (float *)(iStack_1c + piVar21[5] * iStack_24 * 0xc);
                              fVar11 = *pfVar3;
                              fVar12 = pfVar3[1];
                              unaff_EBP = pfVar3[2];
                              piVar21[6] = (int)((float)piVar21[6] - fVar11);
                              piVar21[7] = (int)((float)piVar21[7] - fVar12);
                              piVar21[8] = (int)((float)piVar21[8] - unaff_EBP);
                              fVar6 = *(float *)(iStack_8 + 0x20);
                              piVar21[6] = (int)(fVar6 * (float)piVar21[6]);
                              piVar21[7] = (int)(fVar6 * (float)piVar21[7]);
                              piVar21[8] = (int)(fVar6 * (float)piVar21[8]);
                              piVar21[6] = (int)(fVar11 + (float)piVar21[6]);
                              piVar21[7] = (int)(fVar12 + (float)piVar21[7]);
                              piVar21[8] = (int)(unaff_EBP + (float)piVar21[8]);
                            }
                            if (-1 < piVar21[9]) {
                              psVar4 = (short *)((int)piStack_20 +
                                                (int)(piVar21[9] * iStack_14 + (int)piStack_38) * 2)
                              ;
                              piVar21[10] = (int)(float)(int)*psVar4;
                              piVar21[0xb] = (int)(float)(int)psVar4[1];
                              psVar4 = (short *)(iStack_34 +
                                                (piVar21[9] * iStack_28 + iStack_18) * 2);
                              fVar11 = (float)(int)*psVar4;
                              unaff_EBX = (float)(int)psVar4[1];
                              piVar21[10] = (int)((float)piVar21[10] - fVar11);
                              piVar21[0xb] = (int)((float)piVar21[0xb] - (float)(int)unaff_EBX);
                              piVar21[0xc] = (int)((float)piVar21[0xc] - unaff_EBP);
                              fVar6 = *(float *)(iStack_8 + 0x20);
                              piVar21[10] = (int)(fVar6 * (float)piVar21[10]);
                              piVar21[0xb] = (int)(fVar6 * (float)piVar21[0xb]);
                              piVar21[0xc] = (int)(fVar6 * (float)piVar21[0xc]);
                              piVar21[10] = (int)(fVar11 + (float)piVar21[10]);
                              piVar21[0xb] = (int)((float)(int)unaff_EBX + (float)piVar21[0xb]);
                              piVar21[0xc] = (int)(unaff_EBP + (float)piVar21[0xc]);
                              piVar21[10] = (int)((float)in_ECX[0x26] * (float)piVar21[10]);
                              piVar21[0xb] = (int)((float)in_ECX[0x27] * (float)piVar21[0xb]);
                              piVar21[0xc] = (int)((float)in_ECX[0x28] * (float)piVar21[0xc]);
                            }
                            if ((piStack_4[1] == 0) ||
                               (unaff_EBX = (float)(piStack_4[2] - piStack_4[1] >> 2),
                               unaff_EBX == 0.0)) {
                              param_1[9] = param_1[6];
                              param_1[10] = param_1[7];
                              param_1[0xb] = param_1[8];
                            }
                            else {
                              if (*(char *)((int)param_1 + 7) != '\0') {
                                fStack_88 = fStack_64 - (float)piVar21[2];
                                fStack_84 = fVar10 - (float)piVar21[3];
                                fStack_80 = fVar9 - (float)piVar21[4];
                                unaff_EBX = SQRT(fStack_88 * fStack_88 +
                                                 fStack_84 * fStack_84 + fStack_80 * fStack_80);
                                if (unaff_EBX <= 1e-10) {
                                  fStack_88 = 0.0;
                                  fStack_84 = 0.0;
                                  fStack_80 = 0.0;
                                }
                                else {
                                  FUN_200c3870(unaff_EBX);
                                }
                                fVar13 = (float)piVar21[6];
                                fVar14 = (float)piVar21[8];
                                fVar6 = (float)piVar21[8];
                                fVar11 = (float)piVar21[7];
                                fVar12 = (float)piVar21[6];
                                param_1[0x14] = 0;
                                param_1[0x15] = 0;
                                param_1[0x16] = 0;
                                fVar6 = fStack_88 * fVar12 + fStack_84 * fVar11 + fStack_80 * fVar6;
                                fVar14 = fVar14 * fVar6;
                                fStack_88 = fStack_88 - fVar13 * fVar6;
                                unaff_EBP = fVar14 - (fStack_80 - fVar14);
                              }
                              param_1[9] = 0;
                              param_1[10] = 0;
                              param_1[0xb] = 0;
                              for (uVar22 = 0;
                                  (iVar18 = piStack_4[1], iVar18 != 0 &&
                                  (uVar22 < (uint)(piStack_4[2] - iVar18 >> 2)));
                                  uVar22 = uVar22 + 1) {
                                (**(code **)(**(int **)(iVar18 + uVar22 * 4) + 0x14))
                                          (piVar21 + 2,piVar21 + 6,&stack0xffffff64,param_1);
                              }
                              if (*(char *)((int)param_1 + 7) != '\0') {
                                piVar21[0x10] = param_1[0x14];
                                piVar21[0x11] = param_1[0x15];
                                piVar21[0x12] = param_1[0x16];
                              }
                              param_1[9] = (int)((float)param_1[6] + (float)param_1[9]);
                              param_1[10] = (int)((float)param_1[7] + (float)param_1[10]);
                              param_1[0xb] = (int)((float)param_1[8] + (float)param_1[0xb]);
                            }
                            fVar6 = (float)param_1[0xf];
                            param_1[9] = (int)(fVar6 + (float)param_1[9]);
                            param_1[10] = (int)(fVar6 + (float)param_1[10]);
                            param_1[0xb] = (int)(fVar6 + (float)param_1[0xb]);
                            piVar21[0xd] = param_1[9];
                            piVar21[0xe] = param_1[10];
                            piVar21[0xf] = param_1[0xb];
                            if (*(char *)((int)param_1 + 0xb) != '\0') {
                              piVar21[0xd] = (int)((float)param_1[0xc] * (float)piVar21[0xd]);
                              piVar21[0xe] = (int)((float)param_1[0xd] * (float)piVar21[0xe]);
                              piVar21[0xf] = (int)((float)param_1[0xe] * (float)piVar21[0xf]);
                            }
                          }
                          if (*(char *)((int)param_1 + 6) != '\0') {
                            if (*(char *)((int)param_1 + 10) == '\0') {
                              (*(code *)DAT_20403c04[0x25])(piVar21 + 10);
                            }
                            else {
                              (*(code *)DAT_20403c04[0x24])(piVar21 + 6);
                            }
                          }
                          uStack_78._2_1_ = (char)((uint)psVar1 >> 0x10);
                          if (uStack_78._2_1_ == '\0') {
                            (*(code *)DAT_20403c04[0x23])(piVar21 + 0xd);
                          }
                          else {
                            (*(code *)DAT_20403c04[5])
                                      (piVar21[0xd],piVar21[0xe],piVar21[0xf],param_1[0x10]);
                          }
                          (*(code *)DAT_20403c04[0x26])(piVar21 + 2);
                          if (DAT_20403d68 != '\0') {
                            FUN_20093e90(piVar21 + 2);
                          }
                          fStack_7c = (float)((int)fStack_7c - 1);
                        } while (fStack_7c != 0.0);
                      }
                    }
                    else if (0 < (short)uVar24) {
                      fStack_7c = (float)(uint)uVar24;
                      do {
                        sVar7 = *uStack_74;
                        uStack_74 = uStack_74 + 1;
                        piVar21 = (int *)(in_ECX[0x43] + sVar7 * 0x4c);
                        if (*in_ECX != *(int *)(in_ECX[0x43] + sVar7 * 0x4c)) {
                          *piVar21 = *in_ECX;
                          if (-1 < piVar21[1]) {
                            iVar16 = piVar21[1] * iStack_50;
                            iVar18 = iStack_48 + iVar16 * 0xc;
                            piVar21[2] = *(int *)(iStack_48 + iVar16 * 0xc);
                            piVar21[3] = *(int *)(iVar18 + 4);
                            piVar21[4] = *(int *)(iVar18 + 8);
                            iVar18 = iStack_44 + piVar21[1] * iStack_4c * 0xc;
                            fVar11 = *(float *)(iStack_44 + piVar21[1] * iStack_4c * 0xc);
                            fVar12 = *(float *)(iVar18 + 4);
                            unaff_EBP = *(float *)(iVar18 + 8);
                            piVar21[2] = (int)((float)piVar21[2] - fVar11);
                            piVar21[3] = (int)((float)piVar21[3] - fVar12);
                            piVar21[4] = (int)((float)piVar21[4] - unaff_EBP);
                            fVar6 = *(float *)(iStack_8 + 0x20);
                            piVar21[2] = (int)(fVar6 * (float)piVar21[2]);
                            piVar21[3] = (int)(fVar6 * (float)piVar21[3]);
                            piVar21[4] = (int)(fVar6 * (float)piVar21[4]);
                            piVar21[2] = (int)(fVar11 + (float)piVar21[2]);
                            piVar21[3] = (int)(fVar12 + (float)piVar21[3]);
                            piVar21[4] = (int)(unaff_EBP + (float)piVar21[4]);
                          }
                        }
                        if (*(char *)((int)param_1 + 6) != '\0') {
                          (*(code *)DAT_20403c04[0x25])(piVar21 + 10);
                        }
                        (*(code *)DAT_20403c04[0x26])(piVar21 + 2);
                        if (DAT_20403d68 != '\0') {
                          FUN_20093e90(piVar21 + 2);
                        }
                        fStack_7c = (float)((int)fStack_7c - 1);
                      } while (fStack_7c != 0.0);
                    }
                    (*(code *)DAT_20403c04[0xc])();
                    puVar2 = uStack_70;
                    uVar24 = fStack_88._0_2_;
                  }
                  FUN_20090fc0();
                  piVar21 = piStack_4;
                  uStack_70 = puVar2;
                }
              }
            }
          }
          fStack_64 = (float)((int)fStack_64 + 1);
        } while ((int)fStack_64 < iStack_3c);
        if (uStack_74._1_1_ != '\0') {
          if (uStack_74._3_1_ == '\0') {
            if (*(char *)((int)param_1 + 6) == '\0') {
              (*(code *)DAT_20403c04[10])(0xde1);
            }
            else {
              FUN_2009cfb0(param_1,0);
            }
            if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) || (*param_1 != 0)) {
              (*(code *)DAT_20403c04[0xb])(0xbe2);
              (*(code *)DAT_20403c04[8])(0);
              if (*param_1 == 1) {
                (*(code *)DAT_20403c04[3])(1,1);
              }
              else {
                (*(code *)DAT_20403c04[3])(0x302,0x303);
              }
              (*(code *)DAT_20403c04[0xb])(0x8037);
              (*(code *)DAT_20403c04[0x18])(DAT_20157958,DAT_2015795c);
              (*(code *)DAT_20403c04[0xb])(0xbc0);
              (*(code *)*DAT_20403c04)(0x204,0);
            }
            fStack_64 = 0.0;
            do {
              psVar1 = (short *)(in_ECX[0x30] +
                                (*(int *)(in_ECX[0x2c] + 4 + iVar17) + (int)fStack_64) * 6);
              sVar7 = *psVar1;
              if ((*(int *)(((int *)param_1[0x2e])[2] + sVar7 * 4) != *(int *)param_1[0x2e]) &&
                 (cVar15 = FUN_20090e40(piVar21), piVar21 = piStack_4, cVar15 != '\0')) {
                if (*(char *)((int)param_1 + 6) != '\0') {
                  FUN_2009cff0(param_1,(int)sVar7);
                }
                (*(code *)DAT_20403c04[0x33])();
                sVar7 = psVar1[2];
                puVar2 = (ushort *)(piStack_38[0x31] + psVar1[1] * 2);
                while (sVar7 != 0) {
                  uVar24 = *puVar2;
                  puVar20 = puVar2 + 1;
                  if ((short)uVar24 < 0) {
                    uVar24 = -uVar24;
                    (*(code *)DAT_20403c04[1])(6);
                    DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)uVar24;
                    if (DAT_20403d68 != '\0') {
                      uVar23 = 6;
                      goto LAB_200b1d45;
                    }
                  }
                  else if (uVar24 == 0) {
                    uVar24 = *puVar20;
                    puVar20 = puVar2 + 2;
                    (*(code *)DAT_20403c04[1])(4);
                    DAT_20404c6c = DAT_20404c6c + (int)(short)uVar24 / 3;
                    if (DAT_20403d68 != '\0') {
                      uVar23 = 4;
LAB_200b1d45:
                      FUN_20093e30(uVar23);
                    }
                  }
                  else {
                    (*(code *)DAT_20403c04[1])(5);
                    DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)uVar24;
                    if (DAT_20403d68 != '\0') {
                      uVar23 = 5;
                      goto LAB_200b1d45;
                    }
                  }
                  iVar18 = iStack_3c;
                  if (0 < (short)uVar24) {
                    fStack_7c = (float)(uint)uVar24;
                    do {
                      uVar24 = *puVar20;
                      puVar20 = puVar20 + 1;
                      iVar16 = *(int *)(iVar18 + 0x10c) + (short)uVar24 * 0x4c;
                      if (*(char *)((int)param_1 + 6) != '\0') {
                        if (*(char *)((int)param_1 + 10) == '\0') {
                          (*(code *)DAT_20403c04[0x25])(iVar16 + 0x28);
                        }
                        else {
                          (*(code *)DAT_20403c04[0x24])(iVar16 + 0x18);
                        }
                      }
                      (*(code *)DAT_20403c04[5])
                                (*(undefined4 *)(iVar16 + 0x34),*(undefined4 *)(iVar16 + 0x38),
                                 *(undefined4 *)(iVar16 + 0x3c),param_1[0x10]);
                      (*(code *)DAT_20403c04[0x26])(iVar16 + 8);
                      if (DAT_20403d68 != '\0') {
                        FUN_20093e90(iVar16 + 8);
                      }
                      fStack_7c = (float)((int)fStack_7c - 1);
                    } while (fStack_7c != 0.0);
                  }
                  (*(code *)DAT_20403c04[0xc])();
                  puVar2 = puVar20;
                }
                FUN_20090fc0();
                in_ECX = piStack_38;
                piVar21 = piStack_4;
              }
              fStack_64 = (float)((int)fStack_64 + 1);
            } while ((int)fStack_64 < iStack_3c);
            if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) || (*param_1 != 0)) {
              (*(code *)DAT_20403c04[10])(0x8037);
              (*(code *)DAT_20403c04[10])(0xbe2);
              (*(code *)DAT_20403c04[8])(1);
              (*(code *)DAT_20403c04[10])(0xbc0);
            }
            if (*(char *)((int)param_1 + 6) == '\0') {
              (*(code *)DAT_20403c04[0xb])(0xde1);
            }
            else {
              FUN_2009d0f0(param_1);
            }
            if (*(char *)((int)param_1 + 7) != '\0') {
              if ((char)param_1[0x19] == '\0') {
                (*(code *)DAT_20403c04[10])(0xde1);
              }
              else {
                FUN_2009cfb0(param_1,1);
              }
              (*(code *)DAT_20403c04[3])(1,1);
              (*(code *)DAT_20403c04[0xb])(0xbe2);
              (*(code *)DAT_20403c04[0xb])(0x8037);
              (*(code *)DAT_20403c04[0x18])(DAT_20157958,DAT_2015795c);
              (*(code *)DAT_20403c04[8])(0);
              fStack_80 = 0.0;
              do {
                psVar1 = (short *)(in_ECX[0x30] +
                                  (*(int *)(in_ECX[0x2c] + 4 + (int)uStack_70) + (int)fStack_80) * 6
                                  );
                sVar7 = *psVar1;
                if ((*(int *)(((int *)param_1[0x2e])[2] + sVar7 * 4) != *(int *)param_1[0x2e]) &&
                   (cVar15 = FUN_20090e40(piVar21), piVar21 = piStack_20, cVar15 != '\0')) {
                  if ((char)param_1[0x19] != '\0') {
                    FUN_2009cff0(param_1,(int)sVar7);
                  }
                  (*(code *)DAT_20403c04[0x33])();
                  uVar24 = psVar1[2];
                  puVar2 = (ushort *)(in_ECX[0x31] + psVar1[1] * 2);
                  uVar22 = (uint)uVar24;
                  while (uVar24 != 0) {
                    uVar24 = *puVar2;
                    puVar20 = puVar2 + 1;
                    uVar19 = uVar22 - 1;
                    if ((short)uVar24 < 0) {
                      uVar24 = -uVar24;
                      (*(code *)DAT_20403c04[1])(6);
                      DAT_20404c88 = DAT_20404c88 + -2 + (int)(short)uVar24;
                    }
                    else if (uVar24 == 0) {
                      uVar24 = *puVar20;
                      puVar20 = puVar2 + 2;
                      uVar19 = uVar22 - 2;
                      (*(code *)DAT_20403c04[1])(4);
                      DAT_20404c88 = DAT_20404c88 + (int)(short)uVar24 / 3;
                    }
                    else {
                      (*(code *)DAT_20403c04[1])(5);
                      DAT_20404c88 = DAT_20404c88 + -2 + (int)(short)uVar24;
                    }
                    if (0 < (short)uVar24) {
                      uVar22 = (uint)uVar24;
                      do {
                        uVar24 = *puVar20;
                        puVar20 = puVar20 + 1;
                        iVar17 = in_ECX[0x43] + (short)uVar24 * 0x4c;
                        if ((char)((uint)unaff_EBP >> 0x10) == '\0') {
                          (*(code *)DAT_20403c04[0x23])(iVar17 + 0x40);
                        }
                        else {
                          (*(code *)DAT_20403c04[5])
                                    (*(undefined4 *)(iVar17 + 0x40),*(undefined4 *)(iVar17 + 0x44),
                                     *(undefined4 *)(iVar17 + 0x48),param_1[0x10]);
                        }
                        if ((char)param_1[0x19] != '\0') {
                          if (*(char *)((int)param_1 + 10) == '\0') {
                            (*(code *)DAT_20403c04[0x25])(iVar17 + 0x28);
                          }
                          else {
                            (*(code *)DAT_20403c04[0x24])(iVar17 + 0x18);
                          }
                        }
                        (*(code *)DAT_20403c04[0x26])(iVar17 + 8);
                        uVar22 = uVar22 - 1;
                      } while (uVar22 != 0);
                    }
                    (*(code *)DAT_20403c04[0xc])();
                    puVar2 = puVar20;
                    uVar22 = uVar19;
                    uVar24 = (ushort)uVar19;
                  }
                  FUN_20090fc0();
                  piVar21 = piStack_20;
                }
                fStack_80 = (float)((int)fStack_80 + 1);
              } while ((int)fStack_80 < (int)fVar8);
              if ((char)param_1[0x19] == '\0') {
                (*(code *)DAT_20403c04[0xb])(0xde1);
              }
              else {
                FUN_2009d0f0(param_1);
              }
              (*(code *)DAT_20403c04[10])(0xbe2);
              (*(code *)DAT_20403c04[3])(0x302,0x303);
              (*(code *)DAT_20403c04[10])(0x8037);
              (*(code *)DAT_20403c04[8])(1);
            }
          }
          else {
            if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) || (*param_1 != 0)) {
              (*(code *)DAT_20403c04[10])(0x8037);
              (*(code *)DAT_20403c04[10])(0xbe2);
              (*(code *)DAT_20403c04[8])(1);
              (*(code *)DAT_20403c04[10])(0xbc0);
            }
            if (*(char *)((int)param_1 + 6) == '\0') {
              (*(code *)DAT_20403c04[0xb])(0xde1);
            }
            else {
              FUN_2009d0f0(param_1);
            }
          }
        }
      }
LAB_200b21ac:
      iStack_50 = iStack_50 + 1;
    } while (iStack_50 < in_ECX[2]);
  }
  (*(code *)DAT_20403c04[5])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
  (*(code *)DAT_20403c04[10])(0xbe2);
  (*(code *)DAT_20403c04[0xb])(0xde1);
  (*(code *)DAT_20403c04[3])(0x302,0x303);
  (*(code *)DAT_20403c04[0xb])(0xb44);
  return;
}

