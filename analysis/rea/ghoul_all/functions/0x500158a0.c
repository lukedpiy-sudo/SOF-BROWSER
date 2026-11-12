// rea decompile_all
// name: FUN_500158a0
// address: 0x500158a0
// body: available
// range: 0x500158a0-0x50016855 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __thiscall
FUN_500158a0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4,float *param_5,
            float *param_6,undefined4 param_7,float param_8,undefined4 param_9,uint param_10)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  undefined3 extraout_var;
  int *piVar7;
  undefined2 uVar14;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  int *piVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  int iVar13;
  short *psVar15;
  int iVar16;
  char *pcVar17;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 extraout_var_09;
  undefined2 extraout_var_10;
  short *unaff_EBX;
  short *psVar18;
  short *unaff_ESI;
  short *psVar19;
  undefined8 uVar20;
  float *pfVar21;
  float local_d8;
  short *psStack_d4;
  short *psStack_d0;
  int local_cc;
  float afStack_c8 [4];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float afStack_9c [2];
  undefined1 auStack_94 [4];
  float local_90;
  float local_8c;
  float local_88;
  float fStack_84;
  float fStack_80;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_38;
  float afStack_30 [3];
  float afStack_24 [3];
  float afStack_18 [5];
  
  psVar18 = (short *)0x0;
  local_cc = 0;
  local_d8 = (float)FUN_500a5820(&DAT_5015c79c,*(int **)(param_2 + 0x164));
  local_38 = 0;
  local_90 = *param_5;
  local_8c = param_5[1];
  local_88 = param_5[2];
  if (param_1[0x1d] == 1) {
LAB_50015903:
    param_1[0x1d] = 0;
    param_8 = 1.40116e-41;
  }
  else if (param_1[0x1d] == 2) {
    param_10 = param_10 | 0x20000;
    goto LAB_50015903;
  }
  if ((param_10 & 0x200 | 0x100) == 0) {
    return param_8;
  }
  if (((param_10 & 0x200) != 0) && (DAT_5018bf80 == 0)) {
    return 0.0;
  }
  iVar13 = param_2;
  local_a4 = param_8;
  (**(code **)(*param_1 + 0x178))();
  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
    (*DAT_5015ca24)(s__d_hits__5012fdf0);
  }
  afStack_c8[0] = 0.0;
  if (0 < DAT_5018bf80) {
    pfVar21 = (float *)&DAT_5018bf98;
    do {
      if ((int *)pfVar21[-2] == piRam0000000c) {
        if (*(short *)(pfVar21 + -1) == 0) goto LAB_50015d3f;
        fVar2 = *pfVar21;
        afStack_c8[1] = _DAT_5018bf84 * fVar2 + _DAT_5018c284;
        afStack_c8[2] = fVar2 * _DAT_5018bf88 + _DAT_5018c288;
        afStack_c8[3] = fVar2 * DAT_5018bf8c + _DAT_5018c28c;
        if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
          (*DAT_5015ca24)();
        }
        psVar19 = (short *)0x0;
        fStack_b8 = 9999999.0;
        local_d8 = 9999999.0;
        if (0 < param_1[0x18]) {
          local_cc = 0;
          do {
            if (*(short *)(pfVar21 + -1) == *(short *)(local_cc + 2 + param_1[0x19])) {
              if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                (*DAT_5015ca24)(s_considering__s_for_frontHole_5012fda4);
              }
              psVar15 = (short *)(param_1[0x19] + local_cc);
              if (psVar15[2] == 0) {
                if (((psVar18 == (short *)0x0) || (*pfVar21 < local_d8)) &&
                   (local_d8 = *pfVar21, psVar18 = psVar15, psStack_d4 = psVar19,
                   *(float *)(DAT_5015cc9c + 0x18) != 0.0)) {
                  (*DAT_5015ca24)(s_Setting_frontHole_to__s_5012fd88);
                }
              }
              else {
                (**(code **)(*(int *)pfVar21[-2] + 200))();
                local_a4 = fStack_4c;
                fStack_a0 = fStack_48;
                afStack_9c[0] = fStack_44;
                if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                  (*DAT_5015ca24)();
                }
                fVar2 = (afStack_c8[2] - fStack_a0) * (afStack_c8[2] - fStack_a0) +
                        (afStack_c8[3] - afStack_9c[0]) * (afStack_c8[3] - afStack_9c[0]) +
                        (afStack_c8[1] - local_a4) * (afStack_c8[1] - local_a4);
                if ((psVar18 == (short *)0x0) || (fVar2 < fStack_b8)) {
                  local_d8 = *pfVar21;
                  psVar18 = (short *)(param_1[0x19] + local_cc);
                  psStack_d4 = psVar19;
                  fStack_b8 = fVar2;
                  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                    (*DAT_5015ca24)(s_Setting_frontHole_to__s_5012fd88);
                  }
                }
              }
            }
            psVar19 = (short *)((int)psVar19 + 1);
            local_cc = local_cc + 0x30;
          } while ((int)psVar19 < param_1[0x18]);
        }
        if (psVar18 == (short *)0x0) goto LAB_50015d3f;
        afStack_c8[1] = local_d8 * *param_5;
        afStack_c8[2] = local_d8 * param_5[1];
        iVar6 = 0;
        afStack_c8[3] = local_d8 * param_5[2];
        do {
          pfVar21 = param_6 + iVar6;
          iVar6 = iVar6 + 1;
          afStack_c8[iVar6] = *pfVar21 + afStack_c8[iVar6];
        } while (iVar6 < 3);
        iVar6 = 0;
        pfVar21 = (float *)(param_2 + 4);
        do {
          if (afStack_c8[iVar6 + 1] < pfVar21[0x46] + *pfVar21) {
            afStack_c8[iVar6 + 1] = pfVar21[0x46] + *pfVar21;
          }
          if (*pfVar21 + pfVar21[0x49] < afStack_c8[iVar6 + 1]) {
            afStack_c8[iVar6 + 1] = *pfVar21 + pfVar21[0x49];
          }
          iVar6 = iVar6 + 1;
          pfVar21 = pfVar21 + 1;
        } while (iVar6 < 3);
        if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
          (*DAT_5015ca24)(s_spraying_blood_from__2_2f__2_2f___5012fcd0,(double)afStack_c8[1],
                          (double)afStack_c8[2],(double)afStack_c8[3],
                          (double)*(float *)(param_2 + 4),(double)*(float *)(param_2 + 8),
                          (double)*(float *)(param_2 + 0xc));
        }
        FUN_50083c80(&fStack_b4,param_5,200,1,param_2);
        unaff_EBX = psVar18;
        break;
      }
      if (((psVar18 == (short *)0x0) &&
          (iVar6 = FUN_500a4290((void *)0x0,(int)pfVar21[-2]), iVar6 != 0)) &&
         (*(short *)(iVar6 + 0x18) != 0)) {
        afStack_c8[1] = local_d8 * *param_5;
        afStack_c8[2] = local_d8 * param_5[1];
        iVar16 = 0;
        afStack_c8[3] = local_d8 * param_5[2];
        do {
          pfVar1 = param_6 + iVar16;
          iVar16 = iVar16 + 1;
          afStack_c8[iVar16] = *pfVar1 + afStack_c8[iVar16];
        } while (iVar16 < 3);
        fStack_a8 = (float)(**(code **)(*param_1 + 0xe4))
                                     (param_2,iVar6,afStack_c8 + 1,auStack_94,fStack_a8);
        if ((int)fStack_a8 < 1) {
          return 0.0;
        }
      }
LAB_50015d3f:
      afStack_c8[0] = (float)((int)afStack_c8[0] + 1);
      pfVar21 = pfVar21 + 9;
      unaff_EBX = psVar18;
    } while ((int)afStack_c8[0] < DAT_5018bf80);
  }
  afStack_c8[0] = (float)(DAT_5018bf80 + -1);
  if (-1 < (int)afStack_c8[0]) {
    pfVar21 = (float *)(&DAT_5018bf90 + (int)afStack_c8[0] * 9);
    do {
      psVar18 = unaff_EBX;
      if ((*(short *)(pfVar21 + 1) != 0) && ((int *)*pfVar21 == piRam0000000c)) {
        fVar2 = pfVar21[2];
        fStack_b4 = _DAT_5018c284 + _DAT_5018bf84 * fVar2;
        fStack_b0 = _DAT_5018c288 + fVar2 * _DAT_5018bf88;
        fStack_ac = _DAT_5018c28c + fVar2 * DAT_5018bf8c;
        if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
          (*DAT_5015ca24)();
        }
        fStack_b8 = 9999999.0;
        local_d8 = 9999999.0;
        local_cc = 0;
        if (0 < param_1[0x18]) {
          iVar6 = 0;
          do {
            if (*(short *)(pfVar21 + 1) == *(short *)(iVar6 + 2 + param_1[0x19])) {
              if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                (*DAT_5015ca24)(s_considering__s_for_backHole_5012fd18);
              }
              iVar16 = param_1[0x19];
              if (*(short *)(iVar6 + 4 + iVar16) == 0) {
                if ((psStack_d0 == (short *)0x0) || (pfVar21[2] < local_d8)) {
LAB_50016042:
                  psStack_d0 = (short *)(iVar6 + iVar16);
                  local_d8 = pfVar21[2];
                  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                    (*DAT_5015ca24)(s_Setting_backHole_to__s_5012fc8c);
                  }
                }
              }
              else {
                (**(code **)(*(int *)*pfVar21 + 200))();
                local_a4 = fStack_4c;
                fStack_a0 = fStack_48;
                afStack_9c[0] = fStack_44;
                if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                  (*DAT_5015ca24)();
                }
                fVar2 = (fStack_b0 - fStack_a0) * (fStack_b0 - fStack_a0) +
                        (fStack_ac - afStack_9c[0]) * (fStack_ac - afStack_9c[0]) +
                        (fStack_b4 - local_a4) * (fStack_b4 - local_a4);
                if ((psStack_d0 == (short *)0x0) || (fVar2 < fStack_b8)) {
                  iVar16 = param_1[0x19];
                  fStack_b8 = fVar2;
                  goto LAB_50016042;
                }
              }
            }
            local_cc = local_cc + 1;
            iVar6 = iVar6 + 0x30;
          } while (local_cc < param_1[0x18]);
          if (psStack_d0 != (short *)0x0) {
            fStack_b4 = local_d8 * *param_5 + *param_6;
            fStack_b0 = local_d8 * param_5[1] + param_6[1];
            fStack_ac = local_d8 * param_5[2] + param_6[2];
            break;
          }
        }
      }
      pfVar21 = pfVar21 + -9;
      afStack_c8[0] = (float)((int)afStack_c8[0] + -1);
    } while (-1 < (int)afStack_c8[0]);
  }
  FUN_500fdd70((float *)(param_2 + 0x10),afStack_24,afStack_18,afStack_30);
  local_88 = *param_6 - *(float *)(param_2 + 4);
  fStack_84 = param_6[1] - *(float *)(param_2 + 8);
  fStack_80 = param_6[2] - *(float *)(param_2 + 0xc);
  FUN_500fe050(&local_88);
  FUN_50011db0(param_1,param_2,4,10.0,0);
  if (((psVar18 != (short *)0x0) && (psVar18[1] != 0)) &&
     (cVar3 = (**(code **)(*piRam0000000c + 0x24))(), cVar3 != '\0')) {
    iVar6 = *(int *)(psVar18 + 0x12);
    *(int *)(psVar18 + 0x12) = iVar6 + (int)fStack_a8;
    cVar3 = FUN_5001bd20(iVar6 + (int)fStack_a8);
    afStack_c8[0] = (float)CONCAT31(extraout_var,cVar3);
    if ((*psVar18 != 0) && (DAT_50159104 == '\0')) {
      (**(code **)(**(int **)(param_2 + 0x164) + 0x20))(*psVar18);
    }
    if (((((int)param_8 < *(int *)(param_2 + 0x2ec)) || (psVar18[3] == 0)) ||
        ((*(float *)(DAT_5015cc9c + 0x18) == 0.0 && ((param_10 & 0x20000) == 0)))) ||
       (DAT_501590ec != '\0')) {
      if (*(int *)(psVar18 + 0x14) < (int)afStack_c8[0]) {
        FUN_5001c580(param_1,param_2,*(int *)(psVar18 + 0x10));
        if ((*psVar18 != 0) && (DAT_50159104 == '\0')) {
          uVar12 = FUN_50107636();
          piVar7 = piRam0000000c;
          iVar13 = (int)uVar12 % 3;
          if (*(int *)(unaff_EBX + 0x14) != 0) {
            piVar11 = (int *)(**(code **)(*piRam0000000c + 0x88))();
            sVar4 = (**(code **)(*piVar11 + 0x40))();
            if ((sVar4 != 0) && (sVar4 = (**(code **)(*piVar7 + 0x30))(), sVar4 != 0)) {
              iVar13 = 0;
              piVar7 = param_1 + *(int *)(unaff_EBX + 0x14) * 2 + 0x10;
              do {
                if (sVar4 == (short)*piVar7) goto LAB_5001675d;
                iVar13 = iVar13 + 1;
                piVar7 = (int *)((int)piVar7 + 2);
              } while (iVar13 < 4);
              goto LAB_50016607;
            }
          }
LAB_5001675d:
          piVar7 = piRam0000000c;
          if ((iVar13 < 4) &&
             (sVar4 = *(short *)((int)param_1 + (iVar13 + 0x20 + (int)afStack_c8[0] * 4) * 2),
             sVar4 != 0)) {
            fStack_b8 = (float)CONCAT22(fStack_b8._2_2_,*unaff_EBX);
            piVar11 = (int *)(**(code **)(*piRam0000000c + 0x88))();
            sVar5 = (**(code **)(*piVar11 + 0x40))();
            if ((sVar5 != 0) && (sVar4 != 0)) {
              (**(code **)(*piVar7 + 0x2c))();
            }
          }
        }
LAB_50016607:
        if ((unaff_EBX[2] != 0) &&
           (FUN_50084500(param_2,unaff_EBX[2]), unaff_EBX == (short *)(param_1[0x19] + 0x270))) {
          if (DAT_50159104 != '\0') goto LAB_5001667e;
          FUN_500a3e10((void *)0x0,unaff_EBX[2]);
          (**(code **)(*param_1 + 0xd4))
                    (param_2,CONCAT22(extraout_var_03,unaff_EBX[2]),s_Enemy_bolt_5012fc80,
                     s_g_guts_5012fc44,s_to_gbolt_gut_f_5012fc4c,0,0);
        }
        if (DAT_50159104 == '\0') {
          *(float *)(unaff_EBX + 0x14) = afStack_c8[0];
        }
      }
    }
    else {
      FUN_50011db0(param_1,param_2,5,1.0,0);
      iVar6 = param_2;
      (**(code **)(*param_1 + 200))();
      piVar7 = FUN_5001d0d0(param_1,param_2,(int)local_d8,param_5,afStack_9c,'\x01');
      uVar14 = (undefined2)((uint)piVar7 >> 0x10);
      if ((psVar18[5] != 0) && (afStack_9c[0] != 0.0)) {
        if (*(int *)(psVar18 + 8) == 0) {
          (**(code **)(*param_1 + 0xd4))();
          uVar14 = extraout_var_02;
        }
        else if (psVar18[10] == 0) {
          (**(code **)(*param_1 + 0xd4))();
          uVar14 = extraout_var_01;
        }
        else {
          (**(code **)(*param_1 + 0xd8))();
          uVar14 = extraout_var_00;
        }
      }
      uVar9 = CONCAT22(uVar14,psVar18[4]);
      if (psVar18[4] != 0) {
        uVar20 = CONCAT44(iVar6,1);
        (**(code **)(*(int *)piVar7[0x59] + 0x20))();
        piVar11 = (int *)piVar7[0x59];
        psStack_d4 = (short *)CONCAT22(psStack_d4._2_2_,*(undefined2 *)(iVar13 + 8));
        piVar8 = (int *)(**(code **)(*piVar11 + 0x88))();
        uVar9 = (**(code **)(*piVar8 + 0x40))(&DAT_5012fc68,uVar9,uVar20);
        iVar6 = (int)((ulonglong)uVar20 >> 0x20);
        if ((short)uVar9 != 0) {
          piVar8 = (int *)(**(code **)(*piVar11 + 0x88))();
          uVar10 = (**(code **)(*piVar8 + 0x50))(uVar9,s_c_blood_5012fc60,0);
          if ((short)uVar10 != 0) {
            (**(code **)(*piVar11 + 0x2c))(uVar9,uVar10,local_cc);
          }
        }
      }
      FUN_5001c340(param_1,param_2,*(int *)(unaff_ESI + 0x10),(int)piVar7);
      FUN_5001c730(param_1,param_2,*(int *)(unaff_ESI + 0xc),*(int *)(unaff_ESI + 0xc),(int)piVar7);
      uVar14 = extraout_var_04;
      if (unaff_ESI[1] != 0) {
        (**(code **)(**(int **)(unaff_EBX + 6) + 0x20))();
        uVar14 = extraout_var_05;
      }
      if (*unaff_ESI != 0) {
        (**(code **)(**(int **)(unaff_EBX + 6) + 0x20))();
        uVar14 = extraout_var_06;
      }
      if ((psStack_d4 != (short *)0x0) && (*psStack_d4 != 0)) {
        (**(code **)(**(int **)(unaff_EBX + 6) + 0x20))();
        uVar14 = extraout_var_07;
      }
      uVar20 = CONCAT44(iVar6,1);
      uVar9 = CONCAT22(uVar14,unaff_ESI[3]);
      (**(code **)(**(int **)(unaff_EBX + 6) + 0x20))();
      piVar7 = *(int **)(unaff_EBX + 6);
      unaff_EBX = (short *)CONCAT22((short)((uint)unaff_EBX >> 0x10),unaff_ESI[3]);
      piVar11 = (int *)(**(code **)(*piVar7 + 0x88))();
      sVar4 = (**(code **)(*piVar11 + 0x40))(&DAT_5012fc68,uVar9,uVar20);
      uVar14 = extraout_var_08;
      if (sVar4 != 0) {
        piVar11 = (int *)(**(code **)(*piVar7 + 0x88))();
        sVar4 = (**(code **)(*piVar11 + 0x50))();
        uVar14 = extraout_var_09;
        if (sVar4 != 0) {
          (**(code **)(*piVar7 + 0x2c))();
          uVar14 = extraout_var_10;
        }
      }
      sVar4 = unaff_EBX[6];
      if (sVar4 != 0) {
        if (*(int *)(unaff_EBX + 8) == 0) {
          pcVar17 = s_g_cap1_5012fc6c;
LAB_5001647b:
          (**(code **)(*param_1 + 0xd4))(param_2,sVar4,s_Enemy_bolt_5012fc80,pcVar17,0x5012fc74,0);
        }
        else {
          pcVar17 = (char *)(*(int *)(unaff_EBX + 8) + 0x48e);
          if (unaff_EBX[10] == 0) goto LAB_5001647b;
          (**(code **)(*param_1 + 0xd8))
                    (param_2,sVar4,s_Enemy_bolt_5012fc80,pcVar17,CONCAT22(uVar14,unaff_EBX[10]));
        }
        if (*(int *)(param_2 + 0x2ec) < 1) {
          FUN_50084640(param_2,unaff_EBX[6],100);
        }
        else {
          FUN_50084500(param_2,unaff_EBX[6]);
        }
      }
      if (param_1[0x11] == -1) {
        if (unaff_EBX[6] == 0) {
          if (unaff_EBX[2] != 0) {
            (**(code **)(**(int **)(param_2 + 0x164) + 100))();
            param_1[0x11] = ((int)unaff_EBX - param_1[0x19]) / 0x30;
          }
        }
        else {
          (**(code **)(**(int **)(param_2 + 0x164) + 100))();
          param_1[0x11] = ((int)unaff_EBX - param_1[0x19]) / 0x30;
        }
      }
    }
  }
LAB_5001667e:
  if (psStack_d0 == (short *)0x0) {
    return fStack_a8;
  }
  if (*psStack_d0 == 0) {
    return fStack_a8;
  }
  if (psStack_d0[1] == 0) {
    return fStack_a8;
  }
  if (psStack_d0 == unaff_EBX) {
    return fStack_a8;
  }
  cVar3 = (**(code **)(*piRam0000000c + 0x24))();
  if (cVar3 == '\0') {
    return fStack_a8;
  }
  uVar12 = FUN_50107636();
  iVar6 = (int)uVar12 % 3;
  iVar13 = FUN_5001bd50(3);
  *(int *)(psStack_d0 + 0x12) = iVar13;
  piVar7 = piRam0000000c;
  if (2 < *(int *)(psStack_d0 + 0x14)) goto LAB_5001682c;
  if (*(int *)(psStack_d0 + 0x14) == 0) {
LAB_500167d4:
    piVar7 = piRam0000000c;
    if (iVar6 < 4) {
      sVar4 = *(short *)((int)param_1 + iVar6 * 2 + 0x58);
      piVar11 = (int *)(**(code **)(*piRam0000000c + 0x88))();
      sVar5 = (**(code **)(*piVar11 + 0x40))();
      if ((sVar5 != 0) && (sVar4 != 0)) {
        (**(code **)(*piVar7 + 0x2c))();
      }
    }
  }
  else {
    piVar11 = (int *)(**(code **)(*piRam0000000c + 0x88))();
    sVar4 = (**(code **)(*piVar11 + 0x40))();
    if ((sVar4 == 0) || (sVar4 = (**(code **)(*piVar7 + 0x30))(), sVar4 == 0)) goto LAB_500167d4;
    iVar6 = 0;
    piVar7 = param_1 + *(int *)(psStack_d0 + 0x14) * 2 + 0x10;
    do {
      if (sVar4 == (short)*piVar7) goto LAB_500167d4;
      iVar6 = iVar6 + 1;
      piVar7 = (int *)((int)piVar7 + 2);
    } while (iVar6 < 4);
  }
  psStack_d0[0x14] = 3;
  psStack_d0[0x15] = 0;
LAB_5001682c:
  if (DAT_50159104 == '\0') {
    (**(code **)(**(int **)(param_2 + 0x164) + 0x20))(*psStack_d0);
  }
  return fStack_a8;
}

