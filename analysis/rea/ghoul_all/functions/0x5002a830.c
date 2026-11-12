// rea decompile_all
// name: FUN_5002a830
// address: 0x5002a830
// body: available
// range: 0x5002a830-0x5002b8bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall
FUN_5002a830(void *this,float *param_1,undefined4 param_2,float *param_3,float *param_4,int param_5,
            int *param_6,int param_7,undefined4 param_8,void *param_9,int param_10,float *param_11,
            float param_12,float param_13,float param_14)

{
  float *pfVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  undefined4 uVar8;
  int unaff_ESI;
  int iVar9;
  int unaff_EDI;
  float *pfVar10;
  float10 fVar11;
  longlong lVar12;
  float in_stack_0000006c;
  float in_stack_00000070;
  float in_stack_00000074;
  float in_stack_00000080;
  float in_stack_00000084;
  float in_stack_00000088;
  int *in_stack_00000098;
  int in_stack_0000009c;
  int in_stack_000000a0;
  int *in_stack_000000a4;
  int *in_stack_000000a8;
  undefined1 *in_stack_000000ac;
  int in_stack_000000b0;
  float in_stack_fffffe7c;
  float in_stack_fffffe84;
  undefined1 *puVar13;
  float fVar14;
  undefined1 auStack_170 [52];
  undefined4 uStack_13c;
  undefined4 uStack_134;
  undefined4 uStack_128;
  undefined1 auStack_120 [4];
  int *piStack_11c;
  int iStack_118;
  int *piStack_114;
  int *piStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  char *pcStack_100;
  char *pcStack_fc;
  undefined *puVar15;
  void *this_00;
  int *piStack_c4;
  float fStack_c0;
  float local_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  undefined1 auStack_a4 [64];
  float afStack_64 [2];
  float afStack_5c [19];
  undefined4 uStack_10;
  
  if ((DAT_5018bf80 == 0) && (param_7 == -1)) {
    return 0;
  }
  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
    (*DAT_5015ca24)();
  }
  pfVar1 = param_11;
  if ((char)param_8 == '\0') {
    local_b8 = (float)(DAT_5018bf80 + -1);
    if (-1 < (int)local_b8) {
      pfVar10 = (float *)(&DAT_5018bf98 + (int)local_b8 * 9);
      do {
        if (pfVar10[-2] == *(float *)((int)param_9 + 0xc)) {
          if ((*(short *)(pfVar10 + -1) != 0) &&
             (param_10 = 0, *param_6 == *(int *)((int)this + 0x60))) {
            fVar14 = *pfVar10;
            *pfVar1 = _DAT_5018bf84 * fVar14;
            pfVar1[1] = _DAT_5018bf88 * fVar14;
            pfVar1[2] = DAT_5018bf8c * fVar14;
            *pfVar1 = _DAT_5018c284 + *pfVar1;
            pfVar1[1] = _DAT_5018c288 + pfVar1[1];
            pfVar1[2] = _DAT_5018c28c + pfVar1[2];
            if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
              (*DAT_5015ca24)();
            }
            iVar9 = 0;
            fStack_b4 = 9999999.0;
            fStack_c0 = 9999999.0;
            if (0 < *(int *)((int)this + 0x60)) {
              piStack_c4 = (int *)0x0;
              do {
                if (*(short *)(pfVar10 + -1) ==
                    *(short *)((int)piStack_c4 + 2 + *(int *)((int)this + 100))) {
                  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                    (*DAT_5015ca24)();
                  }
                  if (*(short *)((int)piStack_c4 + 4 + *(int *)((int)this + 100)) == 0) {
                    if ((*param_6 == *(int *)((int)this + 0x60)) || (*pfVar10 < fStack_c0)) {
                      fStack_c0 = *pfVar10;
                      *param_6 = iVar9;
LAB_5002aad7:
                      if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                        (*DAT_5015ca24)();
                      }
                    }
                  }
                  else {
                    (**(code **)(*(int *)pfVar10[-2] + 200))();
                    in_stack_00000080 = in_stack_0000006c;
                    in_stack_00000084 = in_stack_00000070;
                    in_stack_00000088 = in_stack_00000074;
                    if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                      (*DAT_5015ca24)();
                    }
                    fVar14 = (*pfVar1 - in_stack_00000080) * (*pfVar1 - in_stack_00000080) +
                             (pfVar1[1] - in_stack_00000084) * (pfVar1[1] - in_stack_00000084) +
                             (pfVar1[2] - in_stack_00000088) * (pfVar1[2] - in_stack_00000088);
                    if ((*param_6 == *(int *)((int)this + 0x60)) || (fVar14 < fStack_b4)) {
                      fStack_c0 = *pfVar10;
                      *param_6 = iVar9;
                      fStack_b4 = fVar14;
                      goto LAB_5002aad7;
                    }
                  }
                }
                iVar9 = iVar9 + 1;
                piStack_c4 = (int *)((int)piStack_c4 + 0x30);
              } while (iVar9 < *(int *)((int)this + 0x60));
            }
            if (*param_6 != *(int *)((int)this + 0x60)) {
              *pfVar1 = fStack_c0 * *param_4;
              pfVar1[1] = fStack_c0 * param_4[1];
              pfVar1[2] = fStack_c0 * param_4[2];
              *pfVar1 = *param_3 + *pfVar1;
              pfVar1[1] = param_3[1] + pfVar1[1];
              fStack_a8 = local_b8;
              pfVar1[2] = param_3[2] + pfVar1[2];
            }
          }
        }
        else {
          param_10 = FUN_500a4290(param_9,(int)pfVar10[-2]);
        }
        pfVar10 = pfVar10 + -9;
        local_b8 = (float)((int)local_b8 + -1);
      } while (-1 < (int)local_b8);
    }
  }
  else {
    fStack_a8 = (float)(DAT_5018bf80 + -1);
  }
  bVar3 = true;
  if ((param_10 != 0) && (*(short *)(param_10 + 0x18) != 0)) {
    bVar3 = false;
    param_12 = fStack_c0 * *param_4;
    param_13 = fStack_c0 * param_4[1];
    iVar9 = 0;
    param_14 = fStack_c0 * param_4[2];
    do {
      iVar6 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      (&param_11)[iVar9] = (float *)(*(float *)(param_5 + iVar6) + (float)(&param_11)[iVar9]);
    } while (iVar9 < 3);
    piVar7 = (int *)*in_stack_00000098;
    iVar9 = (**(code **)(*(int *)this + 0x1d0))();
    if (iVar9 != 0) {
      return 99999;
    }
    bVar2 = false;
    fVar11 = (float10)(**(code **)(*piVar7 + 0x94))();
    fStack_b0 = (float)fVar11;
    local_b8 = (float)(int)param_1[0xbb] / (float)(int)param_1[0xbc];
    if ((int *)param_1[0x114] != (int *)0x0) {
      iVar9 = (**(code **)(*(int *)param_1[0x114] + 0x220))();
      fStack_ac = (float)(~*(uint *)(iVar9 + 0x1c) & 1);
      if ((float)(int)fStack_ac == 0.0) {
        bVar2 = true;
      }
    }
    if ((0.5 < fStack_b0) && (0.5 < local_b8)) {
      bVar2 = true;
    }
    iVar9 = FUN_50012350(param_10);
    if (((uint)param_1[0x68] & 0x40000) == 0) {
      if (((iVar9 != 0) && (bVar2)) && (iVar9 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar9 == 0)) {
        lVar12 = __ftol();
        return (int)lVar12;
      }
      piVar5 = in_stack_00000098;
      iVar9 = (**(code **)(*piVar7 + 0xe4))();
      *piVar5 = iVar9;
    }
    iVar9 = in_stack_0000009c;
    if (in_stack_0000009c != 0) {
      piVar5 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
      sVar4 = (**(code **)(*piVar5 + 0x1c))();
      iVar6 = FUN_500a4250(param_9,sVar4);
      if (iVar9 != iVar6) {
        piVar7[0x70] = 1;
      }
    }
    iVar9 = in_stack_000000a0;
    if (in_stack_000000a0 != 0) {
      piVar5 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
      sVar4 = (**(code **)(*piVar5 + 0x1c))();
      iVar6 = FUN_500a4250(param_9,sVar4);
      if (iVar9 != iVar6) {
        piVar7[0x6f] = 1;
      }
    }
  }
  local_b8 = 0.0;
  if (0 < DAT_5018bf80) {
    piStack_c4 = &DAT_5018bf90;
    do {
      if (((int)fStack_a8 <= (int)local_b8) || (0 < *in_stack_000000a4)) break;
      if ((*piStack_c4 == *(int *)((int)param_9 + 0xc)) && ((short)piStack_c4[1] != 0)) {
        bVar3 = true;
        fVar14 = (float)piStack_c4[2];
        param_12 = _DAT_5018c284 + _DAT_5018bf84 * fVar14;
        param_13 = _DAT_5018bf88 * fVar14 + _DAT_5018c288;
        param_14 = DAT_5018bf8c * fVar14 + _DAT_5018c28c;
        if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
          (*DAT_5015ca24)();
        }
        iVar9 = 0;
        fStack_b4 = 9999999.0;
        fStack_c0 = 9999999.0;
        if (0 < *(int *)((int)this + 0x60)) {
          fStack_b0 = 0.0;
          do {
            if ((short)piStack_c4[1] == *(short *)((int)fStack_b0 + 2 + *(int *)((int)this + 100)))
            {
              if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                (*DAT_5015ca24)();
              }
              if (*(short *)((int)fStack_b0 + 4 + *(int *)((int)this + 100)) == 0) {
                if ((*in_stack_000000a8 == *(int *)((int)this + 0x60)) ||
                   ((float)piStack_c4[2] < fStack_c0)) {
                  fStack_c0 = (float)piStack_c4[2];
                  *in_stack_000000a8 = iVar9;
                  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                    (*DAT_5015ca24)();
                  }
                }
              }
              else {
                (**(code **)(*(int *)*piStack_c4 + 200))();
                in_stack_00000080 = in_stack_0000006c;
                in_stack_00000084 = in_stack_00000070;
                in_stack_00000088 = in_stack_00000074;
                if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                  (*DAT_5015ca24)();
                }
                fStack_ac = (param_12 - in_stack_00000080) * (param_12 - in_stack_00000080) +
                            (param_13 - in_stack_00000084) * (param_13 - in_stack_00000084) +
                            (param_14 - in_stack_00000088) * (param_14 - in_stack_00000088);
                if ((((char)param_8 == '\0') ||
                    (iVar6 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar6 == 0)) ||
                   ((iVar6 = *in_stack_000000a8, iVar6 != 0 && ((iVar6 != 1 && (iVar6 != 2)))))) {
                  if ((*in_stack_000000a8 == *(int *)((int)this + 0x60)) || (fStack_ac < fStack_b4))
                  {
                    fStack_c0 = (float)piStack_c4[2];
                    *in_stack_000000a8 = iVar9;
                    fStack_b4 = fStack_ac;
                    if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                      (*DAT_5015ca24)();
                    }
                  }
                }
                else {
                  fVar14 = fStack_ac * 1.3;
                  if ((iVar6 == *(int *)((int)this + 0x60)) || (fVar14 < fStack_b4)) {
                    fStack_c0 = (float)piStack_c4[2];
                    *in_stack_000000a8 = iVar9;
                    fStack_b4 = fVar14;
                    if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
                      (*DAT_5015ca24)();
                    }
                  }
                }
              }
            }
            iVar9 = iVar9 + 1;
            fStack_b0 = (float)((int)fStack_b0 + 0x30);
          } while (iVar9 < *(int *)((int)this + 0x60));
        }
        if (*in_stack_000000a8 != *(int *)((int)this + 0x60)) {
          fVar14 = fStack_c0 * 0.0;
          param_12 = fVar14 * *param_4;
          param_13 = fVar14 * param_4[1];
          iVar9 = 0;
          param_14 = fVar14 * param_4[2];
          do {
            iVar6 = iVar9 * 4;
            iVar9 = iVar9 + 1;
            (&param_11)[iVar9] = (float *)(*(float *)(param_5 + iVar6) + (float)(&param_11)[iVar9]);
          } while (iVar9 < 3);
          iVar9 = 0;
          pfVar1 = param_1;
          do {
            pfVar10 = pfVar1 + 1;
            if ((&param_12)[iVar9] < pfVar1[0x47] + *pfVar10) {
              (&param_12)[iVar9] = pfVar1[0x47] + *pfVar10;
            }
            if (*pfVar10 + pfVar1[0x4a] < (&param_12)[iVar9]) {
              (&param_12)[iVar9] = *pfVar10 + pfVar1[0x4a];
            }
            iVar9 = iVar9 + 1;
            pfVar1 = pfVar10;
          } while (iVar9 < 3);
          *in_stack_000000ac = 1;
          *(int *)(in_stack_000000b0 + *in_stack_000000a4 * 4) = *in_stack_000000a8;
          *in_stack_000000a4 = *in_stack_000000a4 + 1;
        }
      }
      local_b8 = (float)((int)local_b8 + 1);
      piStack_c4 = piStack_c4 + 9;
    } while ((int)local_b8 < DAT_5018bf80);
  }
  if (!bVar3) {
    return 0;
  }
  if (param_1[0x1d] != 0.0) {
    if ((*in_stack_000000a4 == 1) && (*in_stack_000000a8 == 1)) {
      piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
      sVar4 = (**(code **)(*piVar7 + 0x1c))();
      if (*(short *)(*in_stack_000000a8 * 0x30 + 2 + *(int *)((int)this + 100)) == sVar4) {
        piVar7 = (int *)param_1[0x59];
        afStack_5c[1] = 0.0;
        uStack_10 = 0;
        piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
        sVar4 = (**(code **)(*piVar5 + 0x1c))();
        if (sVar4 != 0) {
          (**(code **)(*piVar7 + 0x20))();
        }
        piVar7 = (int *)param_1[0x59];
        piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
        sVar4 = (**(code **)(*piVar5 + 0x1c))();
        if (sVar4 != 0) {
          (**(code **)(*piVar7 + 0x20))();
        }
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
        sVar4 = (**(code **)(*piVar7 + 0x1c))();
        if (sVar4 != 0) {
          *(short *)(*(int *)(unaff_ESI + 100) + 0x32) = sVar4;
        }
        FUN_500c3da0(param_1 + 1,param_1 + 4,afStack_5c);
        FUN_500ec880(auStack_a4,afStack_5c);
        fStack_b0 = *param_3;
        fStack_ac = param_3[1];
        fStack_a8 = param_3[2];
        FUN_500ed3e0(auStack_a4,(float *)&DAT_5018c284,&fStack_b0);
        FUN_500ed490(auStack_a4,(undefined4 *)&DAT_5018bf84,param_4);
        FUN_500feb10(&DAT_5018bf84,
                     SQRT(_DAT_5018bf84 * _DAT_5018bf84 +
                          DAT_5018bf8c * DAT_5018bf8c + _DAT_5018bf88 * _DAT_5018bf88));
        puVar15 = &DAT_5018c284;
        pcStack_fc = (char *)0x5002b3cf;
        DAT_5018bf80 = (**(code **)(*(int *)param_1[0x59] + 0xac))();
        pcStack_fc = (char *)in_stack_000000b0;
        pcStack_100 = in_stack_000000ac;
        piStack_104 = in_stack_000000a8;
        piStack_108 = in_stack_000000a4;
        piStack_10c = (int *)in_stack_000000a0;
        piStack_110 = (int *)in_stack_0000009c;
        piStack_114 = in_stack_00000098;
        uStack_128 = 0x5002b416;
        FUN_5002b8c0(auStack_120,(undefined4 *)&stack0x0000008c);
        uStack_134 = 0x5002b427;
        FUN_5002b8c0(&stack0xfffffed4,&stack0x00000080);
        puVar13 = &stack0x0000003c;
        fVar14 = 8.771393e+09;
        FUN_500ecd40(auStack_170,(int)puVar13);
        FUN_5002b8c0(&stack0xfffffe84,&param_12);
        uVar8 = FUN_5002a830((void *)0x14,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                             param_8,param_9,param_10,param_11,in_stack_fffffe84,fVar14,
                             (float)puVar13);
        piVar7 = (int *)param_1[0x59];
        pcStack_fc = (char *)0x5002b484;
        piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
        pcStack_fc = s__HOODHEAD_50133a5c;
        pcStack_100 = (char *)0x5002b490;
        piVar5 = (int *)(**(code **)(*piVar5 + 0x1c))();
        if ((short)piVar5 != 0) {
          pcStack_100 = (char *)0x1;
          piStack_108 = (int *)0x5002b49f;
          piStack_104 = piVar5;
          (**(code **)(*piVar7 + 0x20))();
        }
        piVar7 = (int *)param_1[0x59];
        pcStack_100 = (char *)0x5002b4af;
        piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
        pcStack_100 = s__BALDHEAD_50133a50;
        piStack_104 = (int *)0x5002b4bb;
        piVar5 = (int *)(**(code **)(*piVar5 + 0x1c))();
        if ((short)piVar5 != 0) {
          piStack_104 = (int *)0x0;
          piStack_10c = (int *)0x5002b4ca;
          piStack_108 = piVar5;
          (**(code **)(*piVar7 + 0x20))();
        }
        piStack_104 = (int *)0x5002b4d8;
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
        piStack_104 = (int *)s__hoodhead_50133a38;
        piStack_108 = (int *)0x5002b4e4;
        sVar4 = (**(code **)(*piVar7 + 0x1c))();
        if (sVar4 != 0) {
          *(short *)(*(int *)(puVar15 + 100) + 0x32) = sVar4;
        }
        return uVar8;
      }
    }
    if (param_1[0x1d] != 0.0) {
      if ((*in_stack_000000a4 == 1) && ((*in_stack_000000a8 == 1 || (*in_stack_000000a8 == 0)))) {
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
        sVar4 = (**(code **)(*piVar7 + 0x1c))();
        if (*(short *)(*in_stack_000000a8 * 0x30 + 2 + *(int *)((int)this + 100)) == sVar4) {
          piVar7 = (int *)param_1[0x59];
          afStack_5c[1] = 0.0;
          uStack_10 = 0;
          piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
          sVar4 = (**(code **)(*piVar5 + 0x1c))();
          if (sVar4 != 0) {
            (**(code **)(*piVar7 + 0x20))();
          }
          piVar7 = (int *)param_1[0x59];
          piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
          sVar4 = (**(code **)(*piVar5 + 0x1c))();
          if (sVar4 != 0) {
            (**(code **)(*piVar7 + 0x20))();
          }
          piVar7 = (int *)param_1[0x59];
          piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
          sVar4 = (**(code **)(*piVar5 + 0x1c))();
          if (sVar4 != 0) {
            (**(code **)(*piVar7 + 0x20))();
          }
          piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
          sVar4 = (**(code **)(*piVar7 + 0x1c))();
          if (sVar4 != 0) {
            *(short *)(*(int *)(unaff_EDI + 100) + 0x32) = sVar4;
          }
          piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
          sVar4 = (**(code **)(*piVar7 + 0x1c))();
          if (sVar4 != 0) {
            *(short *)(s_spraying_sparks_from__2_2f__2_2f_50133a80._16_4_ + 2) = sVar4;
          }
          pcStack_fc = (char *)0x5002b661;
          FUN_500c3da0(param_1 + 1,param_1 + 4,afStack_64);
          FUN_500ec880(&fStack_ac,afStack_64);
          local_b8 = *param_3;
          fStack_b4 = param_3[1];
          fStack_b0 = param_3[2];
          FUN_500ed3e0(&fStack_ac,(float *)&DAT_5018c284,&local_b8);
          FUN_500ed490(&fStack_ac,(undefined4 *)&DAT_5018bf84,param_4);
          FUN_500feb10(&DAT_5018bf84,
                       SQRT(_DAT_5018bf84 * _DAT_5018bf84 +
                            DAT_5018bf8c * DAT_5018bf8c + _DAT_5018bf88 * _DAT_5018bf88));
          this_00 = (void *)0x14;
          pcStack_fc = &DAT_5018c284;
          pcStack_100 = (char *)DAT_5015ccdc;
          piStack_104 = (int *)0x5002b70e;
          DAT_5018bf80 = (**(code **)(*(int *)param_1[0x59] + 0xac))();
          piStack_104 = (int *)in_stack_000000b0;
          piStack_108 = (int *)in_stack_000000ac;
          piStack_10c = in_stack_000000a8;
          piStack_110 = in_stack_000000a4;
          piStack_114 = (int *)in_stack_000000a0;
          iStack_118 = in_stack_0000009c;
          piStack_11c = in_stack_00000098;
          FUN_5002b8c0(&uStack_128,(undefined4 *)&stack0x0000008c);
          uStack_13c = 0x5002b766;
          FUN_5002b8c0(&uStack_134,&stack0x00000080);
          puVar13 = &stack0x0000003c;
          fVar14 = 8.772243e+09;
          FUN_500ecd40(&stack0xfffffe88,(int)puVar13);
          FUN_5002b8c0(&stack0xfffffe7c,&param_12);
          uVar8 = FUN_5002a830(this_00,param_1,param_2,param_3,param_4,param_5,param_6,param_7,
                               param_8,param_9,param_10,param_11,in_stack_fffffe7c,fVar14,
                               (float)puVar13);
          piVar7 = (int *)param_1[0x59];
          piStack_104 = (int *)0x5002b7c3;
          piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
          piStack_104 = (int *)s__MASKHEAD_50133a2c;
          piStack_108 = (int *)0x5002b7cf;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x1c))();
          if ((short)piVar5 != 0) {
            piStack_108 = (int *)0x1;
            piStack_110 = (int *)0x5002b7de;
            piStack_10c = piVar5;
            (**(code **)(*piVar7 + 0x20))();
          }
          piVar7 = (int *)param_1[0x59];
          piStack_108 = (int *)0x5002b7ee;
          piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
          piStack_108 = (int *)s__BALDHEAD_50133a50;
          piStack_10c = (int *)0x5002b7fa;
          piVar5 = (int *)(**(code **)(*piVar5 + 0x1c))();
          if ((short)piVar5 != 0) {
            piStack_10c = (int *)0x0;
            piStack_114 = (int *)0x5002b809;
            piStack_110 = piVar5;
            (**(code **)(*piVar7 + 0x20))();
          }
          piVar7 = (int *)param_1[0x59];
          piStack_10c = (int *)0x5002b819;
          piVar5 = (int *)(**(code **)(*piVar7 + 0x88))();
          piStack_10c = (int *)s__COMFACE_50133a20;
          piStack_110 = (int *)0x5002b825;
          iVar9 = (**(code **)(*piVar5 + 0x1c))();
          if ((short)iVar9 != 0) {
            piStack_110 = (int *)0x0;
            iStack_118 = 0x5002b834;
            piStack_114 = (int *)iVar9;
            (**(code **)(*piVar7 + 0x20))();
          }
          piStack_110 = (int *)0x5002b844;
          piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
          piStack_110 = (int *)s__MASKHEAD_50133a2c;
          piStack_114 = (int *)0x5002b850;
          sVar4 = (**(code **)(*piVar7 + 0x1c))();
          if (sVar4 != 0) {
            *(short *)(*(int *)((int)pcStack_100 + 100) + 0x32) = sVar4;
            *(short *)(*(int *)((int)pcStack_100 + 100) + 2) = sVar4;
          }
          return uVar8;
        }
      }
      if ((param_1[0x1d] != 0.0) && (*in_stack_000000a4 == 0)) {
        piVar7 = (int *)(**(code **)(*(int *)param_1[0x59] + 0x88))();
        sVar4 = (**(code **)(*piVar7 + 0x1c))();
        if (DAT_5018bf94 == sVar4) {
          return 0;
        }
      }
    }
  }
  return 0xffffffff;
}

