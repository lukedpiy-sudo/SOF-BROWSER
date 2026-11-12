// rea decompile_all
// name: FUN_200ae4b0
// address: 0x200ae4b0
// body: available
// range: 0x200ae4b0-0x200affa0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200ae4b0(int *param_1,int param_2,int param_3)

{
  ushort *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  short sVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  int iVar23;
  int iVar24;
  int *piVar25;
  short *psVar26;
  char cVar27;
  int iVar28;
  int iVar29;
  int iVar30;
  byte *pbVar31;
  short sVar32;
  int *in_ECX;
  int iVar33;
  int iVar34;
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  uint uVar35;
  short *psVar36;
  ushort *puVar37;
  int *piVar38;
  undefined2 uVar42;
  int *piVar39;
  short *psVar40;
  uint uVar41;
  float unaff_EDI;
  int *unaff_retaddr;
  ushort uVar43;
  undefined4 uVar44;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int iStack_60;
  int iStack_10;
  int iStack_8;
  int *piStack_4;
  
  if (in_ECX[0x42] != 0) {
    if (DAT_20404c8d != '\0') {
      FUN_200b30c0(param_1,param_2,param_3);
      return;
    }
    if (((DAT_20404c8c != '\0') && (*(int *)(param_3 + 4) != 0)) &&
       (*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2 != 0)) {
      FUN_200b2260(param_1,param_2,param_3);
      return;
    }
    FUN_200b09e0(param_1,param_2,param_3);
    return;
  }
  if (((DAT_20404c8c == '\0') || (*(int *)(param_3 + 4) == 0)) ||
     (local_88 = (float)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2), local_88 == 0.0)) {
    if (DAT_20404c8d == '\0') {
      DAT_20403ec8 = DAT_20403ec8 + 1;
      (*(code *)DAT_20403c04[0x1e])(0x2300,0x2200,0x46040000);
      *in_ECX = *in_ECX + 1;
      iVar28 = *piStack_4 * 4;
      iVar9 = *(int *)(in_ECX[0x37] + iVar28);
      iVar33 = piStack_4[4] * 4;
      iVar10 = *(int *)(in_ECX[0x37] + iVar33);
      iVar11 = *(int *)(in_ECX[0x3b] + iVar28);
      iVar12 = *(int *)(in_ECX[0x3b] + iVar33);
      iVar13 = *(int *)(in_ECX[0x3f] + iVar28);
      iVar14 = *(int *)(in_ECX[0x3f] + iVar33);
      iVar28 = *(int *)(*(int *)(piStack_4[3] + 0x14) + iVar28);
      iVar33 = *(int *)(*(int *)(piStack_4[3] + 0x14) + iVar33);
      iVar23 = iVar28 * 3;
      iVar24 = iVar33 * 3;
      iVar15 = piStack_4[1];
      fVar16 = (float)piStack_4[5];
      piVar25 = (int *)(iVar15 * 3);
      fVar17 = (float)piStack_4[9];
      fVar18 = (float)piStack_4[0xb];
      fVar19 = (float)piStack_4[10];
      iStack_10 = 0;
      piVar38 = piStack_4;
      if (0 < in_ECX[2]) {
        do {
          iVar29 = iStack_10 * 0xc;
          uStack_70._0_3_ = (uint3)(ushort)uStack_70;
          iVar20 = *(int *)(in_ECX[0x2c] + 8 + iVar29);
          iStack_60 = 0;
          if (0 < iVar20) {
            do {
              psVar26 = uStack_70;
              psVar40 = (short *)(in_ECX[0x30] +
                                 (*(int *)(in_ECX[0x2c] + 4 + iVar29) + iStack_60) * 6);
              iVar34 = (int)*psVar40;
              piVar39 = *(int **)param_1[0x2e];
              if (*(int **)(((int *)param_1[0x2e])[2] + iVar34 * 4) != piVar39) {
                *(undefined1 *)(*(int *)(*(int *)(param_2 + 4) + iVar34 * 4) + 5) = 1;
                cVar27 = FUN_200c28e0(piVar38);
                if (cVar27 != '\0') {
                  uVar42 = extraout_var;
                  if (uStack_70._2_1_ == '\0') {
                    FUN_2009cf60(*(undefined4 *)(in_ECX[0x2c] + iVar29),param_1,piVar38);
                    if ((unaff_retaddr[1] == 0) || (unaff_retaddr[2] - unaff_retaddr[1] >> 2 == 0))
                    {
                      *(undefined1 *)((int)param_1 + 7) = 0;
                    }
                    if ((float)param_1[0x10] < 0.01) goto LAB_200aff22;
                    if (*(char *)((int)param_1 + 5) == '\0') {
                      (*(code *)DAT_20403c04[0xb])(0xb44);
                      uVar42 = extraout_var_01;
                    }
                    else {
                      (*(code *)DAT_20403c04[10])();
                      uVar42 = extraout_var_00;
                    }
                    uStack_70 = (short *)CONCAT13(1,(uint3)uStack_70);
                    if (*(char *)((int)param_1 + 7) == '\0') {
                      if (((char)param_1[2] == '\0') &&
                         (((unaff_retaddr[1] == 0 || (unaff_retaddr[2] - unaff_retaddr[1] >> 2 == 0)
                           ) && (in_ECX[10] < 1)))) {
                        param_1[9] = param_1[6];
                        param_1[10] = param_1[7];
                        param_1[0xb] = param_1[8];
                        fVar2 = (float)param_1[0xf];
                        param_1[9] = (int)(fVar2 + (float)param_1[9]);
                        param_1[10] = (int)(fVar2 + (float)param_1[10]);
                        param_1[0xb] = (int)(fVar2 + (float)param_1[0xb]);
                        if (*(char *)((int)param_1 + 0xb) != '\0') {
                          param_1[9] = (int)((float)param_1[0xc] * (float)param_1[9]);
                          param_1[10] = (int)((float)param_1[0xd] * (float)param_1[10]);
                          param_1[0xb] = (int)((float)param_1[0xe] * (float)param_1[0xb]);
                        }
                        (*(code *)DAT_20403c04[5])
                                  (param_1[9],param_1[10],param_1[0xb],param_1[0x10]);
                      }
                      if (*(char *)((int)param_1 + 6) == '\0') {
                        (*(code *)DAT_20403c04[10])(0xde1);
                        uVar42 = extraout_var_03;
                      }
                      else {
                        FUN_2009cfb0(param_1,0);
                        uVar42 = extraout_var_02;
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
                        uVar42 = extraout_var_04;
                      }
                    }
                    else {
                      uStack_70 = (short *)((uint)psVar26 & 0xffffff);
                    }
                    uStack_70._0_3_ = CONCAT12(1,(ushort)uStack_70);
                    piVar39 = unaff_retaddr;
                  }
                  sVar7 = psVar40[2];
                  fStack_84 = (float)CONCAT22(uVar42,sVar7);
                  puVar1 = (ushort *)(in_ECX[0x31] + psVar40[1] * 2);
                  if (uStack_70._3_1_ == '\0') {
                    while (uStack_6c = puVar1, sVar7 != 0) {
                      uVar43 = *puVar1;
                      uStack_74 = (uint)uVar43;
                      uStack_6c = puVar1 + 1;
                      iVar34 = (int)fStack_84 + -1;
                      if ((short)uVar43 < 0) {
                        uStack_74 = -uStack_74;
                      }
                      else if (uVar43 == 0) {
                        uStack_74 = (uint)*uStack_6c;
                        uStack_6c = puVar1 + 2;
                        iVar34 = (int)fStack_84 + -2;
                      }
                      fStack_84 = (float)(iVar34 - uStack_74);
                      if (0 < (short)uStack_74) {
                        uStack_74 = uStack_74 & 0xffff;
                        do {
                          uVar43 = *uStack_6c;
                          uStack_6c = uStack_6c + 1;
                          piVar38 = (int *)(in_ECX[0x43] + (short)uVar43 * 0x4c);
                          if (*in_ECX != *(int *)(in_ECX[0x43] + (short)uVar43 * 0x4c)) {
                            *piVar38 = *in_ECX;
                            if (-1 < piVar38[1]) {
                              piVar39 = (int *)(piVar38[1] * iVar23 + (int)piVar25);
                              iVar34 = iVar9 + (int)piVar39 * 2;
                              piVar38[2] = (int)(float)(int)*(short *)(iVar9 + (int)piVar39 * 2);
                              piVar38[3] = (int)(float)(int)*(short *)(iVar34 + 2);
                              piVar38[4] = (int)(float)(int)*(short *)(iVar34 + 4);
                              iVar30 = piVar38[1] * iVar24 + (int)fVar16 * 3;
                              iVar34 = iVar10 + iVar30 * 2;
                              fVar6 = (float)(int)*(short *)(iVar10 + iVar30 * 2);
                              unaff_EDI = (float)(int)*(short *)(iVar34 + 2);
                              local_88 = (float)(int)*(short *)(iVar34 + 4);
                              piVar38[2] = (int)((float)piVar38[2] - fVar6);
                              piVar38[3] = (int)((float)piVar38[3] - unaff_EDI);
                              piVar38[4] = (int)((float)piVar38[4] - local_88);
                              fVar2 = (float)piStack_4[8];
                              piVar38[2] = (int)(fVar2 * (float)piVar38[2]);
                              piVar38[3] = (int)(fVar2 * (float)piVar38[3]);
                              piVar38[4] = (int)(fVar2 * (float)piVar38[4]);
                              piVar38[2] = (int)(fVar6 + (float)piVar38[2]);
                              piVar38[3] = (int)(unaff_EDI + (float)piVar38[3]);
                              piVar38[4] = (int)(local_88 + (float)piVar38[4]);
                              piVar38[2] = (int)((float)in_ECX[0x20] * (float)piVar38[2]);
                              piVar38[3] = (int)((float)in_ECX[0x21] * (float)piVar38[3]);
                              piVar38[4] = (int)((float)in_ECX[0x22] * (float)piVar38[4]);
                              piVar38[2] = (int)((float)in_ECX[0x23] + (float)piVar38[2]);
                              piVar38[3] = (int)((float)in_ECX[0x24] + (float)piVar38[3]);
                              piVar38[4] = (int)((float)in_ECX[0x25] + (float)piVar38[4]);
                            }
                            if (-1 < piVar38[5]) {
                              uVar41 = (uint)*(byte *)(piVar38[5] * iVar28 + iVar15 + iVar13);
                              piVar38[6] = (&DAT_20404c90)[uVar41 * 3];
                              piVar38[7] = (&DAT_20404c94)[uVar41 * 3];
                              piVar38[8] = (&DAT_20404c98)[uVar41 * 3];
                              pbVar31 = (byte *)(piVar38[5] * iVar33 + (int)fVar16 + iVar14);
                              uVar41 = (uint)*pbVar31;
                              piVar38[6] = (int)((float)piVar38[6] -
                                                (float)(&DAT_20404c90)[uVar41 * 3]);
                              piVar38[7] = (int)((float)piVar38[7] -
                                                (float)(&DAT_20404c94)[uVar41 * 3]);
                              piVar38[8] = (int)((float)piVar38[8] -
                                                (float)(&DAT_20404c98)[uVar41 * 3]);
                              fVar2 = (float)piStack_4[8];
                              piVar38[6] = (int)(fVar2 * (float)piVar38[6]);
                              piVar38[7] = (int)(fVar2 * (float)piVar38[7]);
                              piVar38[8] = (int)(fVar2 * (float)piVar38[8]);
                              uVar41 = (uint)*pbVar31;
                              piVar38[6] = (int)((float)(&DAT_20404c90)[uVar41 * 3] +
                                                (float)piVar38[6]);
                              piVar38[7] = (int)((float)(&DAT_20404c94)[uVar41 * 3] +
                                                (float)piVar38[7]);
                              piVar38[8] = (int)((float)(&DAT_20404c98)[uVar41 * 3] +
                                                (float)piVar38[8]);
                            }
                            if (-1 < piVar38[9]) {
                              psVar40 = (short *)(iVar11 + (piVar38[9] * iVar28 * 2 + iVar15 * 2) *
                                                           2);
                              piVar38[10] = (int)(float)(int)*psVar40;
                              piVar38[0xb] = (int)(float)(int)psVar40[1];
                              psVar40 = (short *)(iVar12 + (piVar38[9] * iVar33 * 2 +
                                                           (int)fVar16 * 2) * 2);
                              fVar6 = (float)(int)*psVar40;
                              unaff_EDI = (float)(int)psVar40[1];
                              piVar38[10] = (int)((float)piVar38[10] - fVar6);
                              piVar38[0xb] = (int)((float)piVar38[0xb] - unaff_EDI);
                              piVar38[0xc] = (int)((float)piVar38[0xc] - local_88);
                              fVar2 = (float)piStack_4[8];
                              piVar38[10] = (int)(fVar2 * (float)piVar38[10]);
                              piVar38[0xb] = (int)(fVar2 * (float)piVar38[0xb]);
                              piVar38[0xc] = (int)(fVar2 * (float)piVar38[0xc]);
                              piVar38[10] = (int)(fVar6 + (float)piVar38[10]);
                              piVar38[0xb] = (int)(unaff_EDI + (float)piVar38[0xb]);
                              piVar38[0xc] = (int)(local_88 + (float)piVar38[0xc]);
                              piVar38[10] = (int)((float)in_ECX[0x26] * (float)piVar38[10]);
                              piVar38[0xb] = (int)((float)in_ECX[0x27] * (float)piVar38[0xb]);
                              piVar38[0xc] = (int)((float)in_ECX[0x28] * (float)piVar38[0xc]);
                            }
                            if ((unaff_retaddr[1] == 0) ||
                               (unaff_retaddr[2] - unaff_retaddr[1] >> 2 == 0)) {
                              param_1[9] = param_1[6];
                              param_1[10] = param_1[7];
                              param_1[0xb] = param_1[8];
                            }
                            else {
                              if (*(char *)((int)param_1 + 7) != '\0') {
                                fStack_80 = fVar17 - (float)piVar38[2];
                                fStack_7c = fVar19 - (float)piVar38[3];
                                fStack_78 = fVar18 - (float)piVar38[4];
                                fVar2 = SQRT(fStack_7c * fStack_7c +
                                             fStack_78 * fStack_78 + fStack_80 * fStack_80);
                                if (fVar2 <= 1e-10) {
                                  fStack_80 = 0.0;
                                  fStack_7c = 0.0;
                                  fStack_78 = 0.0;
                                }
                                else {
                                  FUN_200c3870(fVar2);
                                }
                                fVar4 = (float)piVar38[7];
                                fVar5 = (float)piVar38[8];
                                fVar2 = (float)piVar38[8];
                                fVar6 = (float)piVar38[7];
                                fVar3 = (float)piVar38[6];
                                param_1[0x14] = 0;
                                param_1[0x15] = 0;
                                param_1[0x16] = 0;
                                fVar2 = fStack_80 * fVar3 + fStack_7c * fVar6 + fStack_78 * fVar2;
                                fVar4 = fVar2 * fVar4;
                                fVar2 = fVar2 * fVar5;
                                unaff_EDI = fVar4 - (fStack_7c - fVar4);
                                local_88 = fVar2 - (fStack_78 - fVar2);
                              }
                              param_1[9] = 0;
                              param_1[10] = 0;
                              param_1[0xb] = 0;
                              for (uVar41 = 0;
                                  (iVar34 = unaff_retaddr[1], iVar34 != 0 &&
                                  (uVar41 < (uint)(unaff_retaddr[2] - iVar34 >> 2)));
                                  uVar41 = uVar41 + 1) {
                                (**(code **)(**(int **)(iVar34 + uVar41 * 4) + 0x14))
                                          (piVar38 + 2,piVar38 + 6,&stack0xffffff70,param_1);
                              }
                              if (*(char *)((int)param_1 + 7) != '\0') {
                                piVar38[0x10] = param_1[0x14];
                                piVar38[0x11] = param_1[0x15];
                                piVar38[0x12] = param_1[0x16];
                              }
                              param_1[9] = (int)((float)param_1[6] + (float)param_1[9]);
                              param_1[10] = (int)((float)param_1[7] + (float)param_1[10]);
                              param_1[0xb] = (int)((float)param_1[8] + (float)param_1[0xb]);
                            }
                            fVar2 = (float)param_1[0xf];
                            param_1[9] = (int)(fVar2 + (float)param_1[9]);
                            param_1[10] = (int)(fVar2 + (float)param_1[10]);
                            param_1[0xb] = (int)(fVar2 + (float)param_1[0xb]);
                            piVar38[0xd] = param_1[9];
                            piVar38[0xe] = param_1[10];
                            piVar38[0xf] = param_1[0xb];
                            if (*(char *)((int)param_1 + 0xb) != '\0') {
                              piVar38[0xd] = (int)((float)param_1[0xc] * (float)piVar38[0xd]);
                              piVar38[0xe] = (int)((float)param_1[0xd] * (float)piVar38[0xe]);
                              piVar38[0xf] = (int)((float)param_1[0xe] * (float)piVar38[0xf]);
                            }
                          }
                          uStack_74 = uStack_74 - 1;
                        } while (uStack_74 != 0);
                      }
                      puVar1 = uStack_6c;
                      piVar38 = piStack_4;
                      sVar7 = fStack_84._0_2_;
                    }
                  }
                  else {
                    cVar27 = FUN_20090e40(piVar38);
                    uStack_6c = puVar1;
                    if (cVar27 != '\0') {
                      if (*(char *)((int)param_1 + 6) != '\0') {
                        FUN_2009cff0(param_1,iVar34);
                      }
                      (*(code *)DAT_20403c04[0x33])();
                      while (sVar7 != 0) {
                        uVar43 = *puVar1;
                        uVar42 = (undefined2)((uint)piVar39 >> 0x10);
                        piVar39 = (int *)CONCAT22(uVar42,uVar43);
                        uStack_6c = puVar1 + 1;
                        iVar34 = (int)fStack_84 + -1;
                        if ((short)uVar43 < 0) {
                          piVar39 = (int *)-(int)piVar39;
                          uVar44 = 6;
LAB_200aea46:
                          (*(code *)DAT_20403c04[1])(uVar44);
                          DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)piVar39;
                        }
                        else {
                          if (uVar43 != 0) {
                            uVar44 = 5;
                            goto LAB_200aea46;
                          }
                          uVar43 = *uStack_6c;
                          piVar39 = (int *)CONCAT22(uVar42,uVar43);
                          uStack_6c = puVar1 + 2;
                          iVar34 = (int)fStack_84 + -2;
                          (*(code *)DAT_20403c04[1])(4);
                          DAT_20404c6c = DAT_20404c6c + (int)(short)uVar43 / 3;
                        }
                        local_88 = (float)(iVar34 - (int)piVar39);
                        if (uStack_6c._3_1_ == '\0') {
                          (*(code *)DAT_20403c04[5])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                          if (0 < (short)piVar39) {
                            fStack_78 = (float)((uint)piVar39 & 0xffff);
                            do {
                              sVar7 = *uStack_70;
                              uStack_70 = uStack_70 + 1;
                              piVar39 = (int *)(in_ECX[0x43] + sVar7 * 0x4c);
                              if (*in_ECX != *(int *)(in_ECX[0x43] + sVar7 * 0x4c)) {
                                *piVar39 = *in_ECX;
                                if (-1 < piVar39[1]) {
                                  iVar30 = piVar39[1] * iVar20 + iVar23;
                                  iVar34 = iVar29 + iVar30 * 2;
                                  piVar39[2] = (int)(float)(int)*(short *)(iVar29 + iVar30 * 2);
                                  piVar39[3] = (int)(float)(int)*(short *)(iVar34 + 2);
                                  piVar39[4] = (int)(float)(int)*(short *)(iVar34 + 4);
                                  iVar30 = piVar39[1] * (int)piVar25 + iVar10;
                                  iVar34 = iVar24 + iVar30 * 2;
                                  fVar6 = (float)(int)*(short *)(iVar24 + iVar30 * 2);
                                  fVar3 = (float)(int)*(short *)(iVar34 + 2);
                                  unaff_EDI = (float)(int)*(short *)(iVar34 + 4);
                                  piVar39[2] = (int)((float)piVar39[2] - fVar6);
                                  piVar39[3] = (int)((float)piVar39[3] - fVar3);
                                  piVar39[4] = (int)((float)piVar39[4] - unaff_EDI);
                                  fVar2 = *(float *)(iStack_8 + 0x20);
                                  piVar39[2] = (int)(fVar2 * (float)piVar39[2]);
                                  piVar39[3] = (int)(fVar2 * (float)piVar39[3]);
                                  piVar39[4] = (int)(fVar2 * (float)piVar39[4]);
                                  piVar39[2] = (int)(fVar6 + (float)piVar39[2]);
                                  piVar39[3] = (int)(fVar3 + (float)piVar39[3]);
                                  piVar39[4] = (int)(unaff_EDI + (float)piVar39[4]);
                                  piVar39[2] = (int)((float)in_ECX[0x20] * (float)piVar39[2]);
                                  piVar39[3] = (int)((float)in_ECX[0x21] * (float)piVar39[3]);
                                  piVar39[4] = (int)((float)in_ECX[0x22] * (float)piVar39[4]);
                                  piVar39[2] = (int)((float)in_ECX[0x23] + (float)piVar39[2]);
                                  piVar39[3] = (int)((float)in_ECX[0x24] + (float)piVar39[3]);
                                  piVar39[4] = (int)((float)in_ECX[0x25] + (float)piVar39[4]);
                                }
                                if (-1 < piVar39[5]) {
                                  uVar41 = (uint)*(byte *)(piVar39[5] * iVar33 + iStack_60 + iVar11)
                                  ;
                                  piVar39[6] = (&DAT_20404c90)[uVar41 * 3];
                                  piVar39[7] = (&DAT_20404c94)[uVar41 * 3];
                                  piVar39[8] = (&DAT_20404c98)[uVar41 * 3];
                                  pbVar31 = (byte *)(piVar39[5] * iVar15 + iVar28 + iVar13);
                                  uVar41 = (uint)*pbVar31;
                                  piVar39[6] = (int)((float)piVar39[6] -
                                                    (float)(&DAT_20404c90)[uVar41 * 3]);
                                  piVar39[7] = (int)((float)piVar39[7] -
                                                    (float)(&DAT_20404c94)[uVar41 * 3]);
                                  piVar39[8] = (int)((float)piVar39[8] -
                                                    (float)(&DAT_20404c98)[uVar41 * 3]);
                                  fVar2 = *(float *)(iStack_8 + 0x20);
                                  piVar39[6] = (int)(fVar2 * (float)piVar39[6]);
                                  piVar39[7] = (int)(fVar2 * (float)piVar39[7]);
                                  piVar39[8] = (int)(fVar2 * (float)piVar39[8]);
                                  uVar41 = (uint)*pbVar31;
                                  piVar39[6] = (int)((float)(&DAT_20404c90)[uVar41 * 3] +
                                                    (float)piVar39[6]);
                                  piVar39[7] = (int)((float)(&DAT_20404c94)[uVar41 * 3] +
                                                    (float)piVar39[7]);
                                  piVar39[8] = (int)((float)(&DAT_20404c98)[uVar41 * 3] +
                                                    (float)piVar39[8]);
                                }
                                if (-1 < piVar39[9]) {
                                  psVar40 = (short *)(iVar12 + (piVar39[9] * iVar33 * 2 +
                                                               iStack_60 * 2) * 2);
                                  piVar39[10] = (int)(float)(int)*psVar40;
                                  piVar39[0xb] = (int)(float)(int)psVar40[1];
                                  psVar40 = (short *)((int)fVar16 * 3 +
                                                     (piVar39[9] * iVar15 * 2 + iVar28 * 2) * 2);
                                  fVar6 = (float)(int)*psVar40;
                                  fVar3 = (float)(int)psVar40[1];
                                  piVar39[10] = (int)((float)piVar39[10] - fVar6);
                                  piVar39[0xb] = (int)((float)piVar39[0xb] - fVar3);
                                  piVar39[0xc] = (int)((float)piVar39[0xc] - unaff_EDI);
                                  fVar2 = *(float *)(iStack_8 + 0x20);
                                  piVar39[10] = (int)(fVar2 * (float)piVar39[10]);
                                  piVar39[0xb] = (int)(fVar2 * (float)piVar39[0xb]);
                                  piVar39[0xc] = (int)(fVar2 * (float)piVar39[0xc]);
                                  piVar39[10] = (int)(fVar6 + (float)piVar39[10]);
                                  piVar39[0xb] = (int)(fVar3 + (float)piVar39[0xb]);
                                  piVar39[0xc] = (int)(unaff_EDI + (float)piVar39[0xc]);
                                  piVar39[10] = (int)((float)in_ECX[0x26] * (float)piVar39[10]);
                                  piVar39[0xb] = (int)((float)in_ECX[0x27] * (float)piVar39[0xb]);
                                  piVar39[0xc] = (int)((float)in_ECX[0x28] * (float)piVar39[0xc]);
                                }
                                if ((piStack_4[1] == 0) || (piStack_4[2] - piStack_4[1] >> 2 == 0))
                                {
                                  param_1[9] = param_1[6];
                                  param_1[10] = param_1[7];
                                  param_1[0xb] = param_1[8];
                                }
                                else {
                                  if (*(char *)((int)param_1 + 7) != '\0') {
                                    fStack_84 = fVar16 - (float)piVar39[2];
                                    fVar2 = fVar17 - (float)piVar39[3];
                                    fVar6 = fVar19 - (float)piVar39[4];
                                    fVar3 = SQRT(fVar2 * fVar2 +
                                                 fVar6 * fVar6 + fStack_84 * fStack_84);
                                    if (fVar3 <= 1e-10) {
                                      FUN_2007ebc0(0);
                                    }
                                    else {
                                      FUN_200c3870(fVar3);
                                    }
                                    fVar21 = (float)piVar39[6];
                                    fVar22 = (float)piVar39[8];
                                    fVar3 = (float)piVar39[8];
                                    fVar4 = (float)piVar39[7];
                                    fVar5 = (float)piVar39[6];
                                    param_1[0x14] = 0;
                                    param_1[0x15] = 0;
                                    param_1[0x16] = 0;
                                    fVar2 = fStack_84 * fVar5 + fVar2 * fVar4 + fVar6 * fVar3;
                                    fVar22 = fVar2 * fVar22;
                                    fStack_84 = fStack_84 - fVar21 * fVar2;
                                    unaff_EDI = fVar22 - (fVar6 - fVar22);
                                  }
                                  param_1[9] = 0;
                                  param_1[10] = 0;
                                  param_1[0xb] = 0;
                                  for (uVar41 = 0;
                                      (iVar34 = piStack_4[1], iVar34 != 0 &&
                                      (uVar41 < (uint)(piStack_4[2] - iVar34 >> 2)));
                                      uVar41 = uVar41 + 1) {
                                    (**(code **)(**(int **)(iVar34 + uVar41 * 4) + 0x14))
                                              (piVar39 + 2,piVar39 + 6,&stack0xffffff6c,param_1);
                                  }
                                  if (*(char *)((int)param_1 + 7) != '\0') {
                                    piVar39[0x10] = param_1[0x14];
                                    piVar39[0x11] = param_1[0x15];
                                    piVar39[0x12] = param_1[0x16];
                                  }
                                  param_1[9] = (int)((float)param_1[6] + (float)param_1[9]);
                                  param_1[10] = (int)((float)param_1[7] + (float)param_1[10]);
                                  param_1[0xb] = (int)((float)param_1[8] + (float)param_1[0xb]);
                                }
                                fVar2 = (float)param_1[0xf];
                                param_1[9] = (int)(fVar2 + (float)param_1[9]);
                                param_1[10] = (int)(fVar2 + (float)param_1[10]);
                                param_1[0xb] = (int)(fVar2 + (float)param_1[0xb]);
                                piVar39[0xd] = param_1[9];
                                piVar39[0xe] = param_1[10];
                                piVar39[0xf] = param_1[0xb];
                                if (*(char *)((int)param_1 + 0xb) != '\0') {
                                  piVar39[0xd] = (int)((float)param_1[0xc] * (float)piVar39[0xd]);
                                  piVar39[0xe] = (int)((float)param_1[0xd] * (float)piVar39[0xe]);
                                  piVar39[0xf] = (int)((float)param_1[0xe] * (float)piVar39[0xf]);
                                }
                              }
                              if (*(char *)((int)param_1 + 6) != '\0') {
                                if (*(char *)((int)param_1 + 10) == '\0') {
                                  (*(code *)DAT_20403c04[0x1d])(piVar39[10],piVar39[0xb]);
                                }
                                else {
                                  (*(code *)DAT_20403c04[0x16])(piVar39[6],piVar39[7],piVar39[8]);
                                }
                              }
                              (*(code *)DAT_20403c04[5])
                                        (piVar39[0xd],piVar39[0xe],piVar39[0xf],param_1[0x10]);
                              (*(code *)DAT_20403c04[0x22])(piVar39[2],piVar39[3],piVar39[4]);
                              fStack_78 = (float)((int)fStack_78 - 1);
                            } while (fStack_78 != 0.0);
                          }
                        }
                        else if (0 < (short)piVar39) {
                          fStack_78 = (float)((uint)piVar39 & 0xffff);
                          do {
                            sVar7 = *uStack_70;
                            uStack_70 = uStack_70 + 1;
                            piVar39 = (int *)(in_ECX[0x43] + sVar7 * 0x4c);
                            if (*in_ECX != *(int *)(in_ECX[0x43] + sVar7 * 0x4c)) {
                              *piVar39 = *in_ECX;
                              if (-1 < piVar39[1]) {
                                iVar30 = piVar39[1] * iVar20 + iVar23;
                                iVar34 = iVar29 + iVar30 * 2;
                                piVar39[2] = (int)(float)(int)*(short *)(iVar29 + iVar30 * 2);
                                piVar39[3] = (int)(float)(int)*(short *)(iVar34 + 2);
                                piVar39[4] = (int)(float)(int)*(short *)(iVar34 + 4);
                                iVar30 = piVar39[1] * (int)piVar25 + iVar10;
                                iVar34 = iVar24 + iVar30 * 2;
                                fVar6 = (float)(int)*(short *)(iVar24 + iVar30 * 2);
                                fVar3 = (float)(int)*(short *)(iVar34 + 2);
                                unaff_EDI = (float)(int)*(short *)(iVar34 + 4);
                                piVar39[2] = (int)((float)piVar39[2] - fVar6);
                                piVar39[3] = (int)((float)piVar39[3] - fVar3);
                                piVar39[4] = (int)((float)piVar39[4] - unaff_EDI);
                                fVar2 = *(float *)(iStack_8 + 0x20);
                                piVar39[2] = (int)(fVar2 * (float)piVar39[2]);
                                piVar39[3] = (int)(fVar2 * (float)piVar39[3]);
                                piVar39[4] = (int)(fVar2 * (float)piVar39[4]);
                                piVar39[2] = (int)(fVar6 + (float)piVar39[2]);
                                piVar39[3] = (int)(fVar3 + (float)piVar39[3]);
                                piVar39[4] = (int)(unaff_EDI + (float)piVar39[4]);
                                piVar39[2] = (int)((float)in_ECX[0x20] * (float)piVar39[2]);
                                piVar39[3] = (int)((float)in_ECX[0x21] * (float)piVar39[3]);
                                piVar39[4] = (int)((float)in_ECX[0x22] * (float)piVar39[4]);
                                piVar39[2] = (int)((float)in_ECX[0x23] + (float)piVar39[2]);
                                piVar39[3] = (int)((float)in_ECX[0x24] + (float)piVar39[3]);
                                piVar39[4] = (int)((float)in_ECX[0x25] + (float)piVar39[4]);
                              }
                            }
                            if (*(char *)((int)param_1 + 6) != '\0') {
                              (*(code *)DAT_20403c04[0x1d])(piVar39[10],piVar39[0xb]);
                            }
                            (*(code *)DAT_20403c04[0x22])(piVar39[2],piVar39[3],piVar39[4]);
                            fStack_78 = (float)((int)fStack_78 - 1);
                          } while (fStack_78 != 0.0);
                        }
                        (*(code *)DAT_20403c04[0xc])();
                        puVar1 = uStack_6c;
                        sVar7 = fStack_84._0_2_;
                      }
                      FUN_20090fc0();
                      piVar38 = piStack_4;
                      uStack_6c = puVar1;
                    }
                  }
                }
              }
              iStack_60 = iStack_60 + 1;
            } while (iStack_60 < iVar20);
            if (uStack_70._2_1_ != '\0') {
              if (uStack_70._3_1_ == '\0') {
                if (*(char *)((int)param_1 + 6) == '\0') {
                  (*(code *)DAT_20403c04[10])(0xde1);
                }
                else {
                  FUN_2009cfb0(param_1,0);
                }
                if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) || (*param_1 != 0)
                   ) {
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
                (*(code *)DAT_20403c04[5])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                iStack_60 = 0;
                do {
                  psVar40 = (short *)(in_ECX[0x30] +
                                     (*(int *)(in_ECX[0x2c] + 4 + iVar29) + iStack_60) * 6);
                  iVar34 = (int)*psVar40;
                  if ((*(int *)(((int *)param_1[0x2e])[2] + iVar34 * 4) != *(int *)param_1[0x2e]) &&
                     (cVar27 = FUN_20090e40(piVar38), piVar38 = piStack_4, cVar27 != '\0')) {
                    if (*(char *)((int)param_1 + 6) != '\0') {
                      FUN_2009cff0(param_1,iVar34);
                    }
                    (*(code *)DAT_20403c04[0x33])();
                    psVar26 = (short *)(in_ECX[0x31] + psVar40[1] * 2);
                    sVar7 = psVar40[2];
                    while (sVar7 != 0) {
                      sVar8 = *psVar26;
                      uVar42 = (undefined2)((uint)psVar40 >> 0x10);
                      psVar40 = (short *)CONCAT22(uVar42,sVar8);
                      psVar36 = psVar26 + 1;
                      sVar32 = sVar7 + -1;
                      if (sVar8 < 0) {
                        psVar40 = (short *)-(int)psVar40;
                        (*(code *)DAT_20403c04[1])(6);
                        DAT_20404c6c = DAT_20404c6c + -2 + (int)(short)psVar40;
                      }
                      else if (sVar8 == 0) {
                        sVar8 = *psVar36;
                        psVar40 = (short *)CONCAT22(uVar42,sVar8);
                        psVar36 = psVar26 + 2;
                        sVar32 = sVar7 + -2;
                        (*(code *)DAT_20403c04[1])(4);
                        DAT_20404c6c = DAT_20404c6c + (int)sVar8 / 3;
                      }
                      else {
                        (*(code *)DAT_20403c04[1])(5);
                        DAT_20404c6c = DAT_20404c6c + -2 + (int)sVar8;
                      }
                      local_88 = (float)((int)local_88 - (int)psVar40);
                      if (0 < (short)psVar40) {
                        fStack_78 = (float)((uint)psVar40 & 0xffff);
                        do {
                          sVar7 = *psVar36;
                          psVar36 = psVar36 + 1;
                          psVar40 = (short *)(in_ECX[0x43] + sVar7 * 0x4c);
                          if (*(char *)((int)param_1 + 6) != '\0') {
                            if (*(char *)((int)param_1 + 10) == '\0') {
                              (*(code *)DAT_20403c04[0x1d])
                                        (*(undefined4 *)(psVar40 + 0x14),
                                         *(undefined4 *)(psVar40 + 0x16));
                            }
                            else {
                              (*(code *)DAT_20403c04[0x16])
                                        (*(undefined4 *)(psVar40 + 0xc),
                                         *(undefined4 *)(psVar40 + 0xe),
                                         *(undefined4 *)(psVar40 + 0x10));
                            }
                          }
                          (*(code *)DAT_20403c04[5])
                                    (*(undefined4 *)(psVar40 + 0x1a),*(undefined4 *)(psVar40 + 0x1c)
                                     ,*(undefined4 *)(psVar40 + 0x1e),param_1[0x10]);
                          (*(code *)DAT_20403c04[0x22])
                                    (*(undefined4 *)(psVar40 + 4),*(undefined4 *)(psVar40 + 6),
                                     *(undefined4 *)(psVar40 + 8));
                          fStack_78 = (float)((int)fStack_78 - 1);
                        } while (fStack_78 != 0.0);
                      }
                      (*(code *)DAT_20403c04[0xc])();
                      psVar26 = psVar36;
                      sVar7 = sVar32;
                    }
                    FUN_20090fc0();
                  }
                  iStack_60 = iStack_60 + 1;
                } while (iStack_60 < iVar20);
                if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) || (*param_1 != 0)
                   ) {
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
                  (*(code *)DAT_20403c04[5])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
                  unaff_EDI = 0.0;
                  do {
                    psVar40 = (short *)(in_ECX[0x30] +
                                       (*(int *)(in_ECX[0x2c] + 4 + (int)uStack_6c) + (int)unaff_EDI
                                       ) * 6);
                    sVar7 = *psVar40;
                    if ((*(int *)(((int *)param_1[0x2e])[2] + sVar7 * 4) != *(int *)param_1[0x2e])
                       && (cVar27 = FUN_20090e40(piVar38), piVar38 = piVar25, cVar27 != '\0')) {
                      if ((char)param_1[0x19] != '\0') {
                        FUN_2009cff0(param_1,(int)sVar7);
                      }
                      (*(code *)DAT_20403c04[0x33])();
                      uVar43 = psVar40[2];
                      puVar1 = (ushort *)(in_ECX[0x31] + psVar40[1] * 2);
                      uVar41 = (uint)uVar43;
                      while (uVar43 != 0) {
                        uVar43 = *puVar1;
                        puVar37 = puVar1 + 1;
                        uVar35 = uVar41 - 1;
                        if ((short)uVar43 < 0) {
                          uVar43 = -uVar43;
                          (*(code *)DAT_20403c04[1])(6);
                          DAT_20404c88 = DAT_20404c88 + -2 + (int)(short)uVar43;
                        }
                        else if (uVar43 == 0) {
                          uVar43 = *puVar37;
                          puVar37 = puVar1 + 2;
                          uVar35 = uVar41 - 2;
                          (*(code *)DAT_20403c04[1])(4);
                          DAT_20404c88 = DAT_20404c88 + (int)(short)uVar43 / 3;
                        }
                        else {
                          (*(code *)DAT_20403c04[1])(5);
                          DAT_20404c88 = DAT_20404c88 + -2 + (int)(short)uVar43;
                        }
                        if (0 < (short)uVar43) {
                          uVar41 = (uint)uVar43;
                          do {
                            iVar30 = (int)(short)*puVar37;
                            iVar29 = in_ECX[0x43];
                            puVar37 = puVar37 + 1;
                            iVar20 = iVar29 + iVar30 * 0x4c;
                            (*(code *)DAT_20403c04[5])
                                      (*(undefined4 *)(iVar29 + 0x40 + iVar30 * 0x4c),
                                       *(undefined4 *)(iVar20 + 0x44),
                                       *(undefined4 *)(iVar29 + 0x48 + iVar30 * 0x4c),param_1[0x10])
                            ;
                            if ((char)param_1[0x19] != '\0') {
                              if (*(char *)((int)param_1 + 10) == '\0') {
                                (*(code *)DAT_20403c04[0x1d])
                                          (*(undefined4 *)(iVar20 + 0x28),
                                           *(undefined4 *)(iVar20 + 0x2c));
                              }
                              else {
                                (*(code *)DAT_20403c04[0x16])
                                          (*(undefined4 *)(iVar20 + 0x18),
                                           *(undefined4 *)(iVar20 + 0x1c),
                                           *(undefined4 *)(iVar20 + 0x20));
                              }
                            }
                            (*(code *)DAT_20403c04[0x22])
                                      (*(undefined4 *)(iVar20 + 8),*(undefined4 *)(iVar20 + 0xc),
                                       *(undefined4 *)(iVar20 + 0x10));
                            uVar41 = uVar41 - 1;
                          } while (uVar41 != 0);
                        }
                        (*(code *)DAT_20403c04[0xc])();
                        puVar1 = puVar37;
                        uVar41 = uVar35;
                        uVar43 = (ushort)uVar35;
                      }
                      FUN_20090fc0();
                    }
                    unaff_EDI = (float)((int)unaff_EDI + 1);
                  } while ((int)unaff_EDI < iVar34);
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
                if ((((char)param_1[1] != '\0') || ((float)param_1[0x10] < 0.99)) || (*param_1 != 0)
                   ) {
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
LAB_200aff22:
          iStack_10 = iStack_10 + 1;
        } while (iStack_10 < in_ECX[2]);
      }
      (*(code *)DAT_20403c04[5])(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
      (*(code *)DAT_20403c04[10])(0xbe2);
      (*(code *)DAT_20403c04[0xb])(0xde1);
      (*(code *)DAT_20403c04[3])(0x302,0x303);
      (*(code *)DAT_20403c04[0xb])(0xb44);
    }
  }
  else if (DAT_20404c8d == '\0') {
    FUN_200affb0(param_1,param_2,param_3);
    return;
  }
  return;
}

