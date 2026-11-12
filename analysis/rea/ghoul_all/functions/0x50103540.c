// rea decompile_all
// name: FUN_50103540
// address: 0x50103540
// body: available
// range: 0x50103540-0x50103a55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50103540(int *param_1,float param_2,float *param_3,int param_4)

{
  float *pfVar1;
  float fVar2;
  bool bVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  int iStack_bc;
  undefined1 auStack_b8 [4];
  undefined1 local_b4 [64];
  undefined4 local_74;
  float local_70 [3];
  int local_64;
  int local_60;
  float local_5c [5];
  int local_48;
  float local_40;
  float local_38 [14];
  
  local_74 = 0;
  if (DAT_5015d8d5 != '\0') {
    FUN_500c3880(param_1);
    return;
  }
  if ((param_4 != 0) && ((*(byte *)(param_4 + 0x20) & 4) != 0)) {
    FUN_500c3880(param_1);
    return;
  }
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  if ((param_2 != (float)param_1[0x58]) && (param_1[0xf] != 0)) {
    param_1[0xf] = 0;
    iVar4 = FUN_500f7430((int)param_2);
    if (iVar4 != 0) {
      param_2 = (float)FUN_500f7430((int)param_2);
    }
    if (param_2 != 0.0) {
      if ((*(int *)((int)param_2 + 0x158) != 3) || (bVar3 = true, param_2 == DAT_5015cca0)) {
        bVar3 = false;
      }
      if (*(int *)((int)param_2 + 0x30c) != 0) {
        param_1[0xa5] = 0x437e0000;
        FUN_5008bb10(param_2,param_1,(float)param_1[0x58],(float *)(param_1 + 0x8a),
                     (float *)(param_1 + 1),(float *)(param_1 + 1),0x1e,0,0x1000100,2,0,0);
        if ((*(int *)((int)param_2 + 0x450) != 0) || (*(int *)((int)param_2 + 0x74) != 0)) {
          if (param_1[0xa5] != 0x437d0000) {
            param_1[0xa2] = 0;
            FUN_500c3880(param_1);
            return;
          }
          param_1[0xa5] = 0;
          return;
        }
      }
      if ((bVar3) ||
         ((*(int *)((int)param_2 + 0x30c) != 0 && (*(int *)((int)param_2 + 0x450) == 0)))) {
        if (param_3 == (float *)0x0) {
          local_d8 = (float)param_1[0x93] * -1.0;
          local_d4 = (float)param_1[0x94] * -1.0;
          local_d0 = (float)param_1[0x95] * -1.0;
          FUN_500fe050(&local_d8);
          param_1[1] = (int)(local_d8 * 40.0 + (float)param_1[1]);
          param_1[2] = (int)(local_d4 * 40.0 + (float)param_1[2]);
          param_1[3] = (int)(local_d0 * 40.0 + (float)param_1[3]);
        }
        else {
          pfVar1 = (float *)(param_1 + 1);
          FUN_500844b0(pfVar1,param_3);
          *pfVar1 = *param_3 * 20.0 + *pfVar1;
          param_1[2] = (int)(param_3[1] * 20.0 + (float)param_1[2]);
          param_1[3] = (int)(param_3[2] * 20.0 + (float)param_1[3]);
        }
        param_1[0x93] = 0;
        param_1[0x94] = 0;
        param_1[0x95] = 0;
        (**(code **)(*(int *)param_1[0x59] + 8))(local_b4);
        FUN_500ecef0(auStack_b8,0,-1.5707964);
        FUN_500ecd70((int)auStack_b8);
        (*(code *)**(undefined4 **)param_1[0x59])(auStack_b8);
        param_1[0xa2] = 0x3f800000;
        param_1[0x58] = 0;
        iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
        if (iVar4 != 0) {
          param_1[0xae] = (int)FUN_500c3880;
          iVar4 = (**(code **)(*DAT_5015c4d8 + 0x68))();
          if (iVar4 == 0) {
            fVar2 = 30.0;
          }
          else {
            fVar2 = 10.0;
          }
          param_1[0xad] = (int)(DAT_5015ccdc + fVar2);
        }
        param_1[0x6e] = param_1[0x6e] | 0x10000;
        FUN_500aa670((char *)param_1);
        param_1[0xa5] = 0;
        return;
      }
    }
    if (param_3 != (float *)0x0) {
      pfVar1 = (float *)(param_1 + 1);
      FUN_500844b0(pfVar1,param_3);
      local_70[2] = *pfVar1;
      pfVar5 = param_3;
      pfVar6 = local_5c;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      local_40 = param_2;
      local_cc = *param_3 * -1.0;
      local_60 = param_1[3];
      local_48 = param_4;
      local_64 = param_1[2];
      local_c8 = param_3[1] * -1.0;
      local_c4 = param_3[2] * -1.0;
      FUN_500fe050(&local_cc);
      FUN_500c3570(&local_cc,&local_c0);
      pfVar5 = local_70;
      pfVar6 = local_38;
      for (iVar4 = 0xe; iVar4 != 0; iVar4 = iVar4 + -1) {
        *pfVar6 = *pfVar5;
        pfVar5 = pfVar5 + 1;
        pfVar6 = pfVar6 + 1;
      }
      param_1[5] = 0;
      param_1[4] = 0;
      param_1[6] = 0;
      if (((*(int *)((int)param_2 + 0x74) == 0) && (*(int *)((int)param_2 + 0x450) == 0)) &&
         (iVar4 = (**(code **)(*DAT_5015c4d8 + 4))(), iVar4 == 0)) {
        FUN_500840d0((int)local_38,&local_cc,6,0,0);
      }
      param_1[0x93] = 0;
      param_1[0x94] = 0;
      param_1[0x95] = 0;
      *pfVar1 = *param_3 * 5.0 + *pfVar1;
      param_1[2] = (int)(param_3[1] * 5.0 + (float)param_1[2]);
      param_1[3] = (int)(param_3[2] * 5.0 + (float)param_1[3]);
      param_1[0xa2] = 0;
      iVar4 = (**(code **)(*DAT_5015c4d8 + 4))();
      if (iVar4 != 0) {
        param_1[0xae] = (int)FUN_500c3880;
        iVar4 = (**(code **)(*DAT_5015c4d8 + 0x68))();
        if (iVar4 == 0) {
          fVar2 = 30.0;
        }
        else {
          fVar2 = 10.0;
        }
        param_1[0xad] = (int)(DAT_5015ccdc + fVar2);
      }
      param_1[0x6e] = param_1[0x6e] | 0x10000;
      FUN_500aa670((char *)param_1);
      if ((int *)param_1[0x59] != (int *)0x0) {
        param_1[5] = iStack_bc;
        param_1[4] = (int)local_c0;
        (**(code **)(*(int *)param_1[0x59] + 8))(local_b4);
        FUN_500ecef0(auStack_b8,2,-1.5707964);
        FUN_500ecd70((int)auStack_b8);
        (*(code *)**(undefined4 **)param_1[0x59])(auStack_b8);
      }
      param_1[0x58] = 0;
      param_1[0xa5] = 0;
    }
  }
  return;
}

