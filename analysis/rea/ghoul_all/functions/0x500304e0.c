// rea decompile_all
// name: FUN_500304e0
// address: 0x500304e0
// body: available
// range: 0x500304e0-0x50030a3c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_500304e0(void *this,int param_1,float *param_2,int param_3,undefined4 param_4,int param_5,
            undefined4 param_6,char param_7)

{
  short sVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined2 extraout_var;
  int *piVar6;
  int iVar7;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined2 extraout_var_02;
  undefined2 extraout_var_03;
  undefined2 uVar8;
  void *unaff_EBP;
  char *pcVar9;
  char *pcVar10;
  bool bVar11;
  float10 fVar12;
  int *local_10c;
  int local_108;
  void *local_104 [31];
  undefined1 auStack_88 [136];
  
  local_10c = (int *)0x0;
  local_108 = 0;
  local_104[0] = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  if (DAT_501590ec == '\0') {
    if (((*(int *)(*(int *)(param_5 + 0x20) + 8) != 6) && (DAT_5015c790 < 5)) && (DAT_501590e4 < 2))
    {
      local_10c = FUN_5001d0d0(this,param_1,param_3,param_2,&local_108,'\0');
    }
    if ((*(short *)(param_5 + 6) != 0) || (*(short *)(param_5 + 0xc) != 0)) {
      if ((local_10c != (int *)0x0) && (local_108 != 0)) {
        sVar1 = *(short *)(param_5 + 10);
        if (sVar1 != 0) {
          if (*(int *)(param_5 + 0x10) == 0) {
            (**(code **)(*(int *)this + 0xd4))
                      (param_1,sVar1,s_Enemy_bolt_5012fc80,s_g_cap1_5012fc6c,s_to_gbolt_5012fc74,
                       local_108,0,0x3f800000);
          }
          else {
            iVar7 = *(int *)(param_5 + 0x10) + 0x48e;
            if (*(short *)(param_5 + 0x14) == 0) {
              (**(code **)(*(int *)this + 0xd4))
                        (param_1,sVar1,s_Enemy_bolt_5012fc80,iVar7,s_to_gbolt_5012fc74);
            }
            else {
              (**(code **)(*(int *)this + 0xd8))
                        (param_1,sVar1,s_Enemy_bolt_5012fc80,iVar7,*(undefined2 *)(param_5 + 0x14));
            }
          }
        }
        if (*(short *)(param_5 + 8) != 0) {
          (**(code **)(*(int *)local_10c[0x59] + 0x20))(*(short *)(param_5 + 8),1);
          piVar6 = (int *)local_10c[0x59];
          piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_5012fc68);
          if ((short)uVar4 != 0) {
            piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar5 = (**(code **)(*piVar3 + 0x50))(uVar4,s_c_blood_5012fc60,0);
            if ((short)uVar5 != 0) {
              (**(code **)(*piVar6 + 0x2c))(uVar4,uVar5,local_108);
            }
          }
        }
      }
      FUN_5001c730(this,param_1,param_3,param_3,(int)local_10c);
      FUN_5001c340(this,param_1,*(int *)(param_5 + 0x20),(int)local_10c);
      pvVar2 = local_104[0];
      uVar8 = extraout_var_00;
      if (*(short *)(param_5 + 6) != 0) {
        (**(code **)(**(int **)((int)local_104[0] + 0xc) + 0x20))
                  (CONCAT22(extraout_var,*(short *)(param_5 + 6)),1);
        piVar6 = *(int **)((int)pvVar2 + 0xc);
        piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
        uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_5012fc68);
        uVar8 = extraout_var_01;
        if ((short)uVar4 != 0) {
          piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
          uVar5 = (**(code **)(*piVar3 + 0x50))(uVar4,s_c_blood_5012fc60,0);
          uVar8 = extraout_var_02;
          if ((short)uVar5 != 0) {
            (**(code **)(*piVar6 + 0x2c))(uVar4,uVar5,local_108);
            uVar8 = extraout_var_03;
          }
        }
      }
      uVar4 = CONCAT22(uVar8,*(short *)(param_5 + 0xc));
      if (*(short *)(param_5 + 0xc) != 0) {
        iVar7 = *(int *)(param_5 + 0x10);
        if (iVar7 == 0) {
          (**(code **)(*(int *)this + 0xd4))
                    (param_1,uVar4,s_Enemy_bolt_5012fc80,s_g_cap1_5012fc6c,s_to_gbolt_5012fc74,
                     local_104[0],0,0x3f800000);
        }
        else {
          if (*(short *)(param_5 + 0x14) == 0) {
            (**(code **)(*(int *)this + 0xd4))
                      (param_1,uVar4,s_Enemy_bolt_5012fc80,iVar7 + 0x48e,s_to_gbolt_5012fc74,
                       local_104[0]);
          }
          else {
            (**(code **)(*(int *)this + 0xdc))
                      (param_1,uVar4,iVar7,iVar7 + 0x48e,*(undefined2 *)(param_5 + 0x14),
                       local_104[0]);
          }
          pvVar2 = local_104[0];
          iVar7 = 0xc;
          bVar11 = true;
          pcVar9 = (char *)(*(int *)(param_5 + 0x10) + 0x48e);
          pcVar10 = s_g_half_head_5013342c;
          do {
            if (iVar7 == 0) break;
            iVar7 = iVar7 + -1;
            bVar11 = *pcVar9 == *pcVar10;
            pcVar9 = pcVar9 + 1;
            pcVar10 = pcVar10 + 1;
          } while (bVar11);
          if ((bVar11) && (iVar7 = FUN_500a4250(local_104[0],*(short *)(param_5 + 0xc)), iVar7 != 0)
             ) {
            piVar6 = *(int **)(param_1 + 0x164);
            piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_50133428);
            if (((short)uVar4 != 0) &&
               (uVar4 = (**(code **)(*piVar6 + 0x30))(uVar4,0,0), (short)uVar4 != 0)) {
              piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
              (**(code **)(*piVar6 + 0x58))(uVar4,local_104);
              iVar7 = FUN_500a4250(pvVar2,*(short *)(param_5 + 0xc));
              piVar6 = *(int **)(iVar7 + 0x1c);
              piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_50133428);
              if ((short)uVar4 != 0) {
                piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
                uVar5 = (**(code **)(*piVar3 + 0x50))(uVar4,local_104,0);
                if ((short)uVar5 != 0) {
                  (**(code **)(*piVar6 + 0x2c))(uVar4,uVar5,0);
                }
              }
            }
            piVar6 = *(int **)(param_1 + 0x164);
            piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_50133424);
            if (((short)uVar4 != 0) &&
               (uVar4 = (**(code **)(*piVar6 + 0x30))(uVar4,0,0), (short)uVar4 != 0)) {
              piVar6 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
              (**(code **)(*piVar6 + 0x58))(uVar4,auStack_88);
              iVar7 = FUN_500a4250(unaff_EBP,*(short *)(param_5 + 0xc));
              piVar6 = *(int **)(iVar7 + 0x1c);
              piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_50133424);
              if ((short)uVar4 != 0) {
                piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
                uVar5 = (**(code **)(*piVar3 + 0x50))(uVar4,auStack_88,0);
                if ((short)uVar5 != 0) {
                  (**(code **)(*piVar6 + 0x2c))(uVar4,uVar5,0);
                }
              }
            }
            iVar7 = FUN_500a4250(local_10c,*(short *)(param_5 + 0xc));
            piVar6 = *(int **)(iVar7 + 0x1c);
            piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
            uVar4 = (**(code **)(*piVar3 + 0x40))(&DAT_5012fc5c);
            if ((short)uVar4 != 0) {
              piVar3 = (int *)(**(code **)(*piVar6 + 0x88))();
              uVar5 = (**(code **)(*piVar3 + 0x50))(uVar4,s_gz_half_head_50133414,0);
              if ((short)uVar5 != 0) {
                (**(code **)(*piVar6 + 0x2c))(uVar4,uVar5,0);
              }
            }
          }
        }
      }
      if (local_10c != (int *)0x0) {
        if (((1 < DAT_501590e4) || (2 < DAT_5015c790)) && (param_7 == '\0')) {
          FUN_500c3880(local_10c);
          return;
        }
        fVar12 = (float10)(*DAT_5015cb20)(0x42c80000,0x43480000);
        local_10c[0x93] = (int)(float)(fVar12 * (float10)*param_2);
        local_10c[0x94] = (int)(float)(fVar12 * (float10)param_2[1]);
        local_10c[0x95] = (int)(float)(fVar12 * (float10)param_2[2]);
        local_10c[0xb0] = (int)&LAB_50030400;
        if (*(int *)(*(int *)(param_5 + 0x20) + 8) != 6) {
          DAT_501590e4 = DAT_501590e4 + 1;
        }
        if (param_7 != '\0') {
          local_10c[0xad] = (int)(DAT_5015ccdc + 60.0);
        }
      }
    }
  }
  return;
}

