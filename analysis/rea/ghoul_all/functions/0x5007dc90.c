// rea decompile_all
// name: FUN_5007dc90
// address: 0x5007dc90
// body: available
// range: 0x5007dc90-0x5007e1eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007dc90(void *param_1)

{
  byte bVar1;
  double dVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *unaff_EBX;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  longlong lVar10;
  int local_38;
  int iStack_34;
  int *local_30;
  int *local_2c;
  char *local_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  
  local_38 = 0;
  bVar1 = *(byte *)(*(int *)((int)param_1 + 0x114) + *(int *)((int)param_1 + 0x104));
  *(int *)((int)param_1 + 0x114) = *(int *)((int)param_1 + 0x114) + 1;
  if ((bVar1 & 1) != 0) {
    if (*(int *)((int)param_1 + 0x148) == 0) {
      local_38 = 0;
    }
    else {
      local_38 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
      FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_24,
                   *(int **)(*(int *)((int)param_1 + 0x144) + 4));
    }
  }
  if (*(int *)((int)param_1 + 0x148) == 0) {
    local_30 = (int *)0x0;
  }
  else {
    local_30 = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_24,
                 *(int **)(*(int *)((int)param_1 + 0x144) + 4));
  }
  if (*(int *)((int)param_1 + 0x148) == 0) {
    local_2c = (int *)0x0;
  }
  else {
    local_2c = *(int **)(*(int *)(*(int *)((int)param_1 + 0x144) + 4) + 8);
    FUN_500499f0((void *)((int)param_1 + 0x140),(int *)&local_24,
                 *(int **)(*(int *)((int)param_1 + 0x144) + 4));
  }
  iVar3 = (**(code **)(*local_2c + 0x10))();
  if (iVar3 != 0) {
    pcVar4 = (char *)(**(code **)(*local_30 + 0x14))();
    pcVar4 = (char *)FUN_500768f0(pcVar4);
    local_24 = pcVar4;
    if (pcVar4 != (char *)0x0) {
      iVar5 = _strncmp(pcVar4,&DAT_50145ce4,4);
      if (iVar5 == 0) {
        if (*(int *)(pcVar4 + 4) == 1) {
          if (*(float *)(pcVar4 + 8) < 0.0 == (*(float *)(pcVar4 + 8) == 0.0)) {
            fStack_20 = *(float *)(iVar3 + 4);
            fStack_1c = *(float *)(iVar3 + 8);
            fStack_18 = *(float *)(iVar3 + 0xc);
            fStack_14 = *(float *)(iVar3 + 0x10);
            fStack_10 = *(float *)(iVar3 + 0x14);
            fStack_c = *(float *)(iVar3 + 0x18);
            if (local_38 != 0) {
              FUN_50081520(param_1,iVar3,local_38,3);
            }
            pfVar7 = (float *)(pcVar4 + 0xc);
            iStack_34 = 0;
            lVar10 = __ftol();
            if (0 < (int)lVar10) {
              pfVar8 = (float *)(pcVar4 + 0x20);
              do {
                puVar6 = operator_new(0x2c);
                if (puVar6 == (undefined4 *)0x0) {
                  puVar6 = (undefined4 *)0x0;
                }
                else {
                  dVar2 = (double)DAT_5015ccdc;
                  *puVar6 = &PTR_LAB_5012972c;
                  fVar9 = FUN_5010777b(((double)iStack_34 * 0.1 + dVar2 + 0.05) * 10.0);
                  puVar6[2] = 4;
                  *puVar6 = &PTR_FUN_50129694;
                  puVar6[4] = iVar3;
                  puVar6[3] = 10;
                  puVar6[1] = (float)(fVar9 * (float10)0.1);
                  puVar6[5] = *pfVar7;
                  puVar6[6] = pfVar8[-4];
                  puVar6[7] = pfVar8[-3];
                  puVar6[8] = pfVar8[-2];
                  puVar6[9] = pfVar8[-1];
                  puVar6[10] = *pfVar8;
                }
                FUN_50081380(param_1,(int)puVar6);
                if ((*(byte *)((int)param_1 + 0x124) & 0x10) != 0) {
                  FUN_50081800(param_1,(byte *)s_________________________________5014585c);
                  FUN_50081800(param_1,(byte *)s_Script___s_50145850);
                  FUN_50081800(param_1,(byte *)s_DEBUG_at__d_50145840);
                  (**(code **)(*local_2c + 4))();
                  FUN_50081800(param_1,(byte *)s_MoveRotating_Entity__d_50145c64);
                  FUN_50081800(param_1,(byte *)s_Origin___7_3f___7_3f___7_3f__50145c38);
                  FUN_50081800(param_1,(byte *)s_Rotation___7_3f___7_3f___7_3f__50145c0c);
                  FUN_50081800(param_1,(byte *)s__________50145bfc);
                  FUN_50081800(param_1,(byte *)s_Origin_Start___7_3f___7_3f___7_3_50145bd0);
                  FUN_50081800(param_1,(byte *)s_Rotation_Start___7_3f___7_3f___7_50145ba4);
                  FUN_50081800(param_1,(byte *)s__________50145bfc);
                  fStack_20 = fStack_20 + *pfVar7;
                  fStack_1c = fStack_1c + pfVar8[-4];
                  fStack_18 = fStack_18 + pfVar8[-3];
                  fStack_14 = fStack_14 + pfVar8[-2];
                  fStack_10 = fStack_10 + pfVar8[-1];
                  fStack_c = fStack_c + *pfVar8;
                  FUN_50081800(param_1,(byte *)s_Origin_Stop___7_3f___7_3f___7_3f_50145b78);
                  FUN_50081800(param_1,(byte *)s_Rotation_Stop___7_3f___7_3f___7__50145b4c);
                  FUN_50081800(param_1,(byte *)s_________________________________5014585c);
                }
                iStack_34 = iStack_34 + 1;
                pfVar7 = pfVar7 + 6;
                pfVar8 = pfVar8 + 6;
                lVar10 = __ftol();
              } while (iStack_34 < (int)lVar10);
            }
            if (local_38 != 0) {
              puVar6 = operator_new(0x2c);
              if (puVar6 == (undefined4 *)0x0) {
                puVar6 = (undefined4 *)0x0;
              }
              else {
                dVar2 = (double)DAT_5015ccdc;
                *puVar6 = &PTR_LAB_5012972c;
                fVar9 = FUN_5010777b(((double)iStack_34 * 0.1 + dVar2 + 0.05) * 10.0);
                puVar6[2] = 4;
                *puVar6 = &PTR_FUN_50129694;
                puVar6[4] = iVar3;
                puVar6[3] = 10;
                puVar6[1] = (float)(fVar9 * (float10)0.1);
                puVar6[5] = DAT_501451c0;
                puVar6[6] = DAT_501451c4;
                puVar6[7] = DAT_501451c8;
                puVar6[8] = DAT_501451c0;
                puVar6[9] = DAT_501451c4;
                puVar6[10] = DAT_501451c8;
              }
              FUN_50081380(param_1,(int)puVar6);
            }
          }
          else {
            FUN_500adb20((byte *)s__________________________________501455d4);
            (**(code **)(*local_30 + 0x14))();
            FUN_500adb20((byte *)s_Bad_count__f_in__ROF_file___s__50145c80);
            FUN_500adb20((byte *)s__________________________________501455d4);
          }
        }
        else {
          FUN_500adb20((byte *)s__________________________________501455d4);
          (**(code **)(*local_30 + 0x14))();
          FUN_500adb20((byte *)s_Bad_version___d__in__ROF_file____50145ca0);
          FUN_500adb20((byte *)s__________________________________501455d4);
        }
      }
      else {
        FUN_500adb20((byte *)s__________________________________501455d4);
        (**(code **)(*local_30 + 0x14))();
        FUN_500adb20((byte *)s_Bad_header_in__ROF_file___s__50145cc4);
        FUN_500adb20((byte *)s__________________________________501455d4);
      }
    }
  }
  if (local_30 != (int *)0x0) {
    (**(code **)*local_30)(1);
  }
  (**(code **)*local_2c)(1);
  if (unaff_EBX != (undefined4 *)0x0) {
    (**(code **)*unaff_EBX)(1);
  }
  return;
}

