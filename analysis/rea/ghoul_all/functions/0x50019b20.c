// rea decompile_all
// name: FUN_50019b20
// address: 0x50019b20
// body: available
// range: 0x50019b20-0x5001ad03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall
FUN_50019b20(void *this,int param_1,undefined4 param_2,undefined4 param_3,float *param_4,
            float *param_5,float *param_6,int param_7,undefined4 param_8,uint param_9)

{
  float *pfVar1;
  float fVar2;
  char cVar3;
  undefined1 uVar4;
  short sVar5;
  short sVar6;
  undefined3 extraout_var;
  int *piVar7;
  int *piVar8;
  undefined2 extraout_var_00;
  int *piVar9;
  uint uVar10;
  short *psVar11;
  char *pcVar12;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 extraout_var_04;
  undefined2 extraout_var_05;
  undefined2 extraout_var_06;
  undefined2 extraout_var_07;
  undefined2 extraout_var_08;
  undefined2 uVar14;
  int iVar13;
  short *unaff_EBX;
  short *psVar15;
  int unaff_EDI;
  float fVar16;
  int iVar17;
  undefined2 uVar18;
  longlong lVar19;
  float *pfVar20;
  float local_110;
  float fStack_10c;
  short *psStack_108;
  int local_104;
  float afStack_100 [4];
  float fStack_f0;
  int iStack_ec;
  int local_e8;
  float local_e4;
  float fStack_e0;
  float fStack_dc;
  float afStack_d8 [5];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  int iStack_b0;
  undefined1 auStack_ac [4];
  float local_a8;
  float local_a4;
  float local_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 local_38;
  float afStack_30 [3];
  float afStack_24 [3];
  float afStack_18 [5];
  
  psVar15 = (short *)0x0;
  local_e4 = 0.0;
  local_110 = (float)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  local_38 = 0;
  local_a8 = *param_4;
  local_a4 = param_4[1];
  local_a0 = param_4[2];
  if ((param_9 & 0x200 | 0x100) == 0) {
    return param_7;
  }
  local_e8 = param_7;
  if (((param_9 & 0x200) != 0) && (DAT_5018bf80 == 0)) {
    return 0;
  }
  (**(code **)(*(int *)this + 0x17c))();
  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
    (*DAT_5015ca24)(s__d_hits__5012fdf0);
  }
  if ((param_9 & 0x100000) == 0) {
    local_104 = 0;
    if (0 < DAT_5018bf80) {
      pfVar20 = (float *)&DAT_5018bf98;
      do {
        if ((int *)pfVar20[-2] == piRam0000000c) {
          if (*(short *)(pfVar20 + -1) == 0) goto LAB_5001a149;
          fVar16 = *pfVar20;
          afStack_100[1] = _DAT_5018c284 + _DAT_5018bf84 * fVar16;
          afStack_100[2] = _DAT_5018bf88 * fVar16 + _DAT_5018c288;
          afStack_100[3] = DAT_5018bf8c * fVar16 + _DAT_5018c28c;
          if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
            (*DAT_5015ca24)();
          }
          fVar16 = 0.0;
          fStack_f0 = 9999999.0;
          fStack_10c = 9999999.0;
          if (0 < *(int *)((int)this + 0x60)) {
            afStack_100[0] = 0.0;
            do {
              if (*(short *)(pfVar20 + -1) ==
                  *(short *)((int)afStack_100[0] + 2 + *(int *)((int)this + 100))) {
                if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                  (*DAT_5015ca24)(s_considering__s_for_frontHole_5012fda4);
                }
                psVar11 = (short *)(*(int *)((int)this + 100) + (int)afStack_100[0]);
                if (psVar11[2] == 0) {
                  if (((psVar15 == (short *)0x0) || (*pfVar20 < fStack_10c)) &&
                     (fStack_10c = *pfVar20, psVar15 = psVar11, local_110 = fVar16,
                     *(float *)(DAT_5015cc9c + 0x18) != 0.0)) {
                    (*DAT_5015ca24)(s_Setting_frontHole_to__s_5012fd88);
                  }
                }
                else {
                  (**(code **)(*(int *)pfVar20[-2] + 200))();
                  afStack_d8[4] = fStack_4c;
                  fStack_c4 = fStack_48;
                  fStack_c0 = fStack_44;
                  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                    (*DAT_5015ca24)();
                  }
                  fVar2 = (afStack_100[1] - afStack_d8[4]) * (afStack_100[1] - afStack_d8[4]) +
                          (afStack_100[2] - fStack_c4) * (afStack_100[2] - fStack_c4) +
                          (afStack_100[3] - fStack_c0) * (afStack_100[3] - fStack_c0);
                  if ((psVar15 == (short *)0x0) || (fVar2 < fStack_f0)) {
                    fStack_10c = *pfVar20;
                    psVar15 = (short *)(*(int *)((int)this + 100) + (int)afStack_100[0]);
                    local_110 = fVar16;
                    fStack_f0 = fVar2;
                    if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                      (*DAT_5015ca24)(s_Setting_frontHole_to__s_5012fd88);
                    }
                  }
                }
              }
              fVar16 = (float)((int)fVar16 + 1);
              afStack_100[0] = (float)((int)afStack_100[0] + 0x30);
            } while ((int)fVar16 < *(int *)((int)this + 0x60));
          }
          if (psVar15 == (short *)0x0) goto LAB_5001a149;
          afStack_100[1] = fStack_10c * *param_4;
          afStack_100[2] = fStack_10c * param_4[1];
          iVar17 = 0;
          afStack_100[3] = fStack_10c * param_4[2];
          do {
            pfVar20 = param_5 + iVar17;
            iVar17 = iVar17 + 1;
            afStack_100[iVar17] = *pfVar20 + afStack_100[iVar17];
          } while (iVar17 < 3);
          iVar17 = 0;
          pfVar20 = (float *)(param_1 + 4);
          do {
            if (afStack_100[iVar17 + 1] < pfVar20[0x46] + *pfVar20) {
              afStack_100[iVar17 + 1] = pfVar20[0x46] + *pfVar20;
            }
            if (*pfVar20 + pfVar20[0x49] < afStack_100[iVar17 + 1]) {
              afStack_100[iVar17 + 1] = *pfVar20 + pfVar20[0x49];
            }
            iVar17 = iVar17 + 1;
            pfVar20 = pfVar20 + 1;
          } while (iVar17 < 3);
          if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
            (*DAT_5015ca24)(s_spraying_blood_from__2_2f__2_2f___5012fcd0,(double)afStack_100[1],
                            (double)afStack_100[2],(double)afStack_100[3],
                            (double)*(float *)(param_1 + 4),(double)*(float *)(param_1 + 8),
                            (double)*(float *)(param_1 + 0xc));
          }
          FUN_50083c80(&local_e4,param_4,200,1,param_1);
          unaff_EBX = psVar15;
          break;
        }
        if (((psVar15 == (short *)0x0) &&
            (iVar17 = FUN_500a4290((void *)0x0,(int)pfVar20[-2]), iVar17 != 0)) &&
           (*(short *)(iVar17 + 0x18) != 0)) {
          afStack_100[1] = fStack_10c * *param_4;
          afStack_100[2] = fStack_10c * param_4[1];
          iVar13 = 0;
          afStack_100[3] = fStack_10c * param_4[2];
          do {
            pfVar1 = param_5 + iVar13;
            iVar13 = iVar13 + 1;
            afStack_100[iVar13] = *pfVar1 + afStack_100[iVar13];
          } while (iVar13 < 3);
          iStack_ec = (**(code **)(*(int *)this + 0xe4))
                                (param_1,iVar17,afStack_100 + 1,auStack_ac,iStack_ec);
          if (iStack_ec < 1) {
            return 0;
          }
        }
LAB_5001a149:
        local_104 = local_104 + 1;
        pfVar20 = pfVar20 + 9;
        unaff_EBX = psVar15;
      } while (local_104 < DAT_5018bf80);
    }
    local_104 = DAT_5018bf80 + -1;
    if (-1 < local_104) {
      pfVar20 = (float *)(&DAT_5018bf90 + local_104 * 9);
      do {
        psVar15 = unaff_EBX;
        if ((*(short *)(pfVar20 + 1) != 0) && ((int *)*pfVar20 == piRam0000000c)) {
          fVar16 = pfVar20[2];
          local_e4 = _DAT_5018c284 + _DAT_5018bf84 * fVar16;
          fStack_e0 = _DAT_5018c288 + _DAT_5018bf88 * fVar16;
          fStack_dc = _DAT_5018c28c + DAT_5018bf8c * fVar16;
          if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
            (*DAT_5015ca24)();
          }
          fStack_f0 = 9999999.0;
          fStack_10c = 9999999.0;
          afStack_100[0] = 0.0;
          if (0 < *(int *)((int)this + 0x60)) {
            iVar17 = 0;
            do {
              if (*(short *)(pfVar20 + 1) == *(short *)(*(int *)((int)this + 100) + 2 + iVar17)) {
                if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                  (*DAT_5015ca24)(s_considering__s_for_backHole_5012fd18);
                }
                iVar13 = *(int *)((int)this + 100);
                if (*(short *)(iVar13 + 4 + iVar17) == 0) {
                  if ((psStack_108 == (short *)0x0) || (pfVar20[2] < fStack_10c)) {
LAB_5001a451:
                    psStack_108 = (short *)(iVar13 + iVar17);
                    fStack_10c = pfVar20[2];
                    if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                      (*DAT_5015ca24)(s_Setting_backHole_to__s_5012fc8c);
                    }
                  }
                }
                else {
                  (**(code **)(*(int *)*pfVar20 + 200))();
                  afStack_d8[4] = fStack_4c;
                  fStack_c4 = fStack_48;
                  fStack_c0 = fStack_44;
                  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                    (*DAT_5015ca24)();
                  }
                  fVar16 = (local_e4 - afStack_d8[4]) * (local_e4 - afStack_d8[4]) +
                           (fStack_e0 - fStack_c4) * (fStack_e0 - fStack_c4) +
                           (fStack_dc - fStack_c0) * (fStack_dc - fStack_c0);
                  if ((psStack_108 == (short *)0x0) || (fVar16 < fStack_f0)) {
                    iVar13 = *(int *)((int)this + 100);
                    fStack_f0 = fVar16;
                    goto LAB_5001a451;
                  }
                }
              }
              afStack_100[0] = (float)((int)afStack_100[0] + 1);
              iVar17 = iVar17 + 0x30;
            } while ((int)afStack_100[0] < *(int *)((int)this + 0x60));
            if (psStack_108 != (short *)0x0) {
              local_e4 = fStack_10c * *param_4 + *param_5;
              fStack_e0 = fStack_10c * param_4[1] + param_5[1];
              fStack_dc = fStack_10c * param_4[2] + param_5[2];
              break;
            }
          }
        }
        pfVar20 = pfVar20 + -9;
        local_104 = local_104 + -1;
      } while (-1 < local_104);
    }
  }
  else {
    FUN_500fdd70((float *)(param_1 + 0x10),&fStack_94,&fStack_88,afStack_d8);
    fStack_bc = *(float *)(param_1 + 4) - *param_6;
    fStack_b8 = *(float *)(param_1 + 8) - param_6[1];
    fStack_b4 = *(float *)(param_1 + 0xc) - param_6[2];
    FUN_500fe050(&fStack_bc);
    fVar16 = fStack_94 * fStack_bc + fStack_90 * fStack_b8 + fStack_8c * fStack_b4;
    if (fVar16 <= 0.707) {
      if (-0.707 <= fVar16) {
        if (fStack_88 * fStack_bc + fStack_84 * fStack_b8 + fStack_80 * fStack_b4 <= 0.0) {
          afStack_d8[0] = 1.4013e-45;
          afStack_d8[1] = 5.60519e-45;
          afStack_d8[2] = 8.40779e-45;
          afStack_d8[3] = 1.12104e-44;
          local_e8 = 4;
        }
        else {
          afStack_d8[0] = 2.8026e-45;
          afStack_d8[1] = 7.00649e-45;
          afStack_d8[2] = 9.80909e-45;
          afStack_d8[3] = 1.26117e-44;
          local_e8 = 4;
        }
      }
      else {
        afStack_d8[0] = 0.0;
        afStack_d8[1] = 2.8026e-45;
        afStack_d8[2] = 1.4013e-45;
        afStack_d8[3] = 4.2039e-45;
        local_e8 = 4;
      }
    }
    else {
      afStack_d8[0] = 1.12104e-44;
      afStack_d8[1] = 1.26117e-44;
      afStack_d8[2] = 8.40779e-45;
      afStack_d8[3] = 9.80909e-45;
      local_e8 = 4;
    }
  }
  iVar17 = 0;
  if (0 < local_e8) {
    do {
      local_110 = afStack_d8[iVar17];
      if ((-1 < (int)local_110) && ((int)local_110 < *(int *)((int)this + 0x60))) {
        lVar19 = __ftol();
        iStack_ec = (int)lVar19;
      }
      iVar17 = iVar17 + 1;
    } while (iVar17 < local_e8);
  }
  FUN_500fdd70((float *)(param_1 + 0x10),afStack_24,afStack_18,afStack_30);
  local_a0 = *param_5 - *(float *)(param_1 + 4);
  fStack_9c = param_5[1] - *(float *)(param_1 + 8);
  fStack_98 = param_5[2] - *(float *)(param_1 + 0xc);
  FUN_500fe050(&local_a0);
  FUN_50011db0(this,param_1,4,10.0,0);
  if (((psVar15 != (short *)0x0) && (psVar15[1] != 0)) &&
     (cVar3 = (**(code **)(*piRam0000000c + 0x24))(), cVar3 != '\0')) {
    iVar17 = *(int *)(psVar15 + 0x12);
    *(int *)(psVar15 + 0x12) = iVar17 + iStack_ec;
    cVar3 = FUN_5001bd20(iVar17 + iStack_ec);
    iVar17 = CONCAT31(extraout_var,cVar3);
    if ((*psVar15 != 0) && (DAT_50159104 == '\0')) {
      (**(code **)(**(int **)(param_1 + 0x164) + 0x20))(*psVar15);
    }
    if ((((param_7 < *(int *)(param_1 + 0x2ec)) || (psVar15[3] == 0)) ||
        ((*(float *)(DAT_5015cc9c + 0x18) == 0.0 && ((param_9 & 0x20000) == 0)))) ||
       (DAT_501590ec != '\0')) {
      if (*(int *)(psVar15 + 0x14) < iVar17) {
        FUN_5001c580(this,param_1,*(int *)(psVar15 + 0x10));
        if ((*psVar15 != 0) && (DAT_50159104 == '\0')) {
          uVar10 = FUN_50107636();
          piVar7 = piRam0000000c;
          iVar13 = (int)uVar10 % 3;
          if (*(int *)(unaff_EBX + 0x14) != 0) {
            piVar9 = (int *)(**(code **)(*piRam0000000c + 0x88))();
            sVar5 = (**(code **)(*piVar9 + 0x40))();
            if ((sVar5 != 0) && (sVar5 = (**(code **)(*piVar7 + 0x30))(), sVar5 != 0)) {
              iVar13 = 0;
              psVar15 = (short *)((int)this + *(int *)(unaff_EBX + 0x14) * 8 + 0x40);
              do {
                if (sVar5 == *psVar15) goto LAB_5001abb4;
                iVar13 = iVar13 + 1;
                psVar15 = psVar15 + 1;
              } while (iVar13 < 4);
              goto LAB_5001aa5e;
            }
          }
LAB_5001abb4:
          piVar7 = piRam0000000c;
          if ((iVar13 < 4) &&
             (sVar5 = *(short *)((int)this + (iVar13 + 0x20 + iVar17 * 4) * 2), sVar5 != 0)) {
            fStack_f0 = (float)CONCAT22(fStack_f0._2_2_,*unaff_EBX);
            piVar9 = (int *)(**(code **)(*piRam0000000c + 0x88))();
            sVar6 = (**(code **)(*piVar9 + 0x40))();
            if ((sVar6 != 0) && (sVar5 != 0)) {
              (**(code **)(*piVar7 + 0x2c))();
            }
          }
        }
LAB_5001aa5e:
        if ((unaff_EBX[2] != 0) &&
           (FUN_50084500(param_1,unaff_EBX[2]),
           unaff_EBX == (short *)(*(int *)((int)this + 100) + 0x270))) {
          if (DAT_50159104 != '\0') goto LAB_5001aad5;
          FUN_500a3e10((void *)0x0,unaff_EBX[2]);
          (**(code **)(*(int *)this + 0xd4))
                    (param_1,CONCAT22(extraout_var_01,unaff_EBX[2]),s_Enemy_bolt_5012fc80,
                     s_g_guts_5012fc44,s_to_gbolt_gut_f_5012fc4c,0,0);
        }
        if (DAT_50159104 == '\0') {
          *(int *)(unaff_EBX + 0x14) = iVar17;
        }
      }
    }
    else {
      FUN_50011db0(this,param_1,5,1.0,0);
      (**(code **)(*(int *)this + 200))();
      piVar7 = FUN_5001d0d0(this,param_1,(int)local_110,param_4,&iStack_b0,'\x01');
      sVar5 = psVar15[5];
      if ((sVar5 != 0) && (iStack_b0 != 0)) {
        if (*(int *)(psVar15 + 8) == 0) {
          (**(code **)(*(int *)this + 0xd4))
                    (param_1,sVar5,s_Enemy_bolt_5012fc80,s_g_cap1_5012fc6c,s_to_gbolt_5012fc74,
                     iStack_b0,0);
        }
        else {
          iVar17 = *(int *)(psVar15 + 8) + 0x48e;
          if (psVar15[10] == 0) {
            (**(code **)(*(int *)this + 0xd4))
                      (param_1,sVar5,s_Enemy_bolt_5012fc80,iVar17,s_to_gbolt_5012fc74);
          }
          else {
            (**(code **)(*(int *)this + 0xd8))
                      (param_1,sVar5,s_Enemy_bolt_5012fc80,iVar17,psVar15[10]);
          }
        }
      }
      if (psVar15[4] != 0) {
        (**(code **)(*(int *)piVar7[0x59] + 0x20))(psVar15[4]);
        piVar9 = (int *)piVar7[0x59];
        piVar8 = (int *)(**(code **)(*piVar9 + 0x88))();
        sVar5 = (**(code **)(*piVar8 + 0x40))();
        if (sVar5 != 0) {
          piVar8 = (int *)(**(code **)(*piVar9 + 0x88))();
          sVar5 = (**(code **)(*piVar8 + 0x50))();
          if (sVar5 != 0) {
            (**(code **)(*piVar9 + 0x2c))();
          }
        }
      }
      FUN_5001c340(this,param_1,*(int *)(unaff_EBX + 0x10),(int)piVar7);
      FUN_5001c730(this,param_1,*(int *)(unaff_EBX + 0xc),*(int *)(unaff_EBX + 0xc),(int)piVar7);
      uVar14 = extraout_var_02;
      if (unaff_EBX[1] != 0) {
        (**(code **)(*piRam0000000c + 0x20))(CONCAT22(extraout_var_00,unaff_EBX[1]));
        uVar14 = extraout_var_03;
      }
      if (*unaff_EBX != 0) {
        (**(code **)(*piRam0000000c + 0x20))(*unaff_EBX);
        uVar14 = extraout_var_04;
      }
      if ((psStack_108 != (short *)0x0) && (*psStack_108 != 0)) {
        (**(code **)(*piRam0000000c + 0x20))(*psStack_108);
        uVar14 = extraout_var_05;
      }
      uVar18 = (undefined2)((uint)unaff_EBX >> 0x10);
      if (unaff_EBX[3] != 0) {
        (**(code **)(*piRam0000000c + 0x20))(CONCAT22(uVar18,unaff_EBX[3]));
        piVar7 = piRam0000000c;
        unaff_EBX = (short *)CONCAT22(uVar18,*(undefined2 *)(unaff_EDI + 6));
        piVar9 = (int *)(**(code **)(*piRam0000000c + 0x88))();
        sVar5 = (**(code **)(*piVar9 + 0x40))();
        uVar14 = extraout_var_06;
        if (sVar5 != 0) {
          piVar9 = (int *)(**(code **)(*piVar7 + 0x88))();
          sVar5 = (**(code **)(*piVar9 + 0x50))();
          uVar14 = extraout_var_07;
          if (sVar5 != 0) {
            (**(code **)(*piVar7 + 0x2c))();
            uVar14 = extraout_var_08;
          }
        }
      }
      sVar5 = unaff_EBX[6];
      if (sVar5 != 0) {
        if (*(int *)(unaff_EBX + 8) == 0) {
          pcVar12 = s_g_cap1_5012fc6c;
LAB_5001a8d2:
          (**(code **)(*(int *)this + 0xd4))
                    (param_1,sVar5,s_Enemy_bolt_5012fc80,pcVar12,0x5012fc74,0);
        }
        else {
          pcVar12 = (char *)(*(int *)(unaff_EBX + 8) + 0x48e);
          if (unaff_EBX[10] == 0) goto LAB_5001a8d2;
          (**(code **)(*(int *)this + 0xd8))
                    (param_1,sVar5,s_Enemy_bolt_5012fc80,pcVar12,CONCAT22(uVar14,unaff_EBX[10]));
        }
        if (*(int *)(param_1 + 0x2ec) < 1) {
          FUN_50084640(param_1,unaff_EBX[6],100);
        }
        else {
          FUN_50084500(param_1,unaff_EBX[6]);
        }
      }
      if (*(int *)((int)this + 0x44) == -1) {
        if (unaff_EBX[6] == 0) {
          if (unaff_EBX[2] != 0) {
            (**(code **)(**(int **)(param_1 + 0x164) + 100))();
            *(int *)((int)this + 0x44) = ((int)unaff_EBX - *(int *)((int)this + 100)) / 0x30;
          }
        }
        else {
          (**(code **)(**(int **)(param_1 + 0x164) + 100))();
          *(int *)((int)this + 0x44) = ((int)unaff_EBX - *(int *)((int)this + 100)) / 0x30;
        }
      }
    }
  }
LAB_5001aad5:
  if ((((psStack_108 == (short *)0x0) || (*psStack_108 == 0)) || (psStack_108[1] == 0)) ||
     ((psStack_108 == unaff_EBX || (cVar3 = (**(code **)(*piRam0000000c + 0x24))(), cVar3 == '\0')))
     ) goto LAB_5001aca0;
  uVar10 = FUN_50107636();
  iVar13 = (int)uVar10 % 3;
  iVar17 = FUN_5001bd50(3);
  *(int *)(psStack_108 + 0x12) = iVar17;
  piVar7 = piRam0000000c;
  if (*(int *)(psStack_108 + 0x14) < 3) {
    if (*(int *)(psStack_108 + 0x14) == 0) {
LAB_5001ac2b:
      piVar7 = piRam0000000c;
      if (iVar13 < 4) {
        sVar5 = *(short *)((int)this + iVar13 * 2 + 0x58);
        piVar9 = (int *)(**(code **)(*piRam0000000c + 0x88))();
        sVar6 = (**(code **)(*piVar9 + 0x40))();
        if ((sVar6 != 0) && (sVar5 != 0)) {
          (**(code **)(*piVar7 + 0x2c))();
        }
      }
    }
    else {
      piVar9 = (int *)(**(code **)(*piRam0000000c + 0x88))();
      sVar5 = (**(code **)(*piVar9 + 0x40))();
      if ((sVar5 == 0) || (sVar5 = (**(code **)(*piVar7 + 0x30))(), sVar5 == 0)) goto LAB_5001ac2b;
      iVar13 = 0;
      psVar15 = (short *)((int)this + *(int *)(psStack_108 + 0x14) * 8 + 0x40);
      do {
        if (sVar5 == *psVar15) goto LAB_5001ac2b;
        iVar13 = iVar13 + 1;
        psVar15 = psVar15 + 1;
      } while (iVar13 < 4);
    }
    psStack_108[0x14] = 3;
    psStack_108[0x15] = 0;
  }
  if (DAT_50159104 == '\0') {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x20))(*psStack_108);
  }
LAB_5001aca0:
  if (((*param_5 != DAT_5018bf0c) || (param_5[1] != DAT_5018bf10)) || (param_5[2] != DAT_5018bf14))
  {
    uVar4 = (*DAT_5015cb24)(0);
    FUN_50084270(param_5,&DAT_5018bf0c,uVar4,4,' ',0,0,0,0x23);
  }
  return iStack_ec;
}

