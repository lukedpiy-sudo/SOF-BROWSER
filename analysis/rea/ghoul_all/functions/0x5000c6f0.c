// rea decompile_all
// name: FUN_5000c6f0
// address: 0x5000c6f0
// body: available
// range: 0x5000c6f0-0x5000cf06 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5000c6f0(float *param_1,int *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  undefined4 uVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float fStack_78;
  float fStack_74;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float fStack_1c;
  float afStack_18 [3];
  float afStack_c [3];
  
  uVar7 = 0;
  iVar4 = FUN_500f7190(param_4);
  if (iVar4 == 0) {
    local_54 = *(float *)(param_4 + 4) - *(float *)(param_3 + 4);
    fVar5 = *(float *)(param_4 + 4);
    fVar6 = *(float *)(param_4 + 8);
    local_58 = *(float *)(param_4 + 0xc);
    local_50 = *(float *)(param_4 + 8) - *(float *)(param_3 + 8);
    local_4c = *(float *)(param_4 + 0xc) - *(float *)(param_3 + 0xc);
  }
  else {
    local_54 = *(float *)(iVar4 + 4) - *(float *)(param_3 + 4);
    local_50 = *(float *)(iVar4 + 8) - *(float *)(param_3 + 8);
    local_4c = *(float *)(iVar4 + 0xc) - *(float *)(param_3 + 0xc);
    fVar5 = *(float *)(iVar4 + 4);
    fVar6 = *(float *)(iVar4 + 8);
    local_58 = *(float *)(iVar4 + 0xc);
  }
  if ((*(byte *)(*(int *)(param_4 + 0x74) + 0x10) & 1) != 0) {
    local_4c = local_4c - 20.0;
    local_58 = local_58 - 20.0;
  }
  fVar8 = (float10)FUN_500fe050(&local_54);
  fVar1 = (float)fVar8;
  FUN_500fdd70((float *)(param_3 + 0x10),&local_24,(float *)0x0,(float *)0x0);
  iVar4 = (**(code **)(*param_2 + 0x220))();
  fVar3 = DAT_5015d90c;
  fVar2 = *(float *)(iVar4 + 0x10);
  fVar8 = (float10)(**(code **)(*param_2 + 0x16c))();
  fVar2 = (float)(((float10)DAT_5015ccdc - fVar8) - (float10)fVar3 * (float10)fVar2);
  if (64.0 <= fVar1) {
    iVar4 = (**(code **)(*param_2 + 0x220))();
    if (*(float *)(iVar4 + 4) <= fVar1) {
      iVar4 = (**(code **)(*param_2 + 0x220))();
      fStack_74 = *(float *)(iVar4 + 4) / fVar1;
      fStack_74 = fStack_74 * fStack_74;
    }
    else {
      fStack_74 = 1.0;
    }
    fStack_78 = 1.0;
    if ((*(byte *)(*(int *)(param_4 + 0x74) + 0x10) & 4) == 0) {
      fStack_78 = 0.6;
      uVar7 = 2;
    }
    fStack_30 = *(float *)(param_4 + 0x24c);
    fStack_2c = *(float *)(param_4 + 0x250);
    fStack_28 = *(float *)(param_4 + 0x254);
    fVar8 = (float10)FUN_500fe050(&fStack_30);
    fVar9 = (float10)1.0 -
            ABS((float10)local_24 * (float10)fStack_30 +
                (float10)fStack_20 * (float10)fStack_2c + (float10)fStack_1c * (float10)fStack_28);
    if (((float10)0.1 < fVar8 * (float10)0.0044444446 * fVar9) &&
       (uVar7 = 3, fStack_30 * local_50 + fStack_28 * local_4c + fStack_2c * -local_54 <= 0.0)) {
      uVar7 = 4;
    }
    iVar4 = (**(code **)(*param_2 + 0x220))();
    fStack_78 = (local_24 * local_54 + fStack_1c * local_4c + fStack_20 * local_50) *
                *(float *)(iVar4 + 0xc) * DAT_5015d904 * fStack_74 *
                (float)(((float10)1.0 - fVar9 * fVar8 * (float10)0.0044444446 * (float10)0.6) *
                       (float10)fStack_78);
  }
  else {
    fStack_78 = 1.0;
  }
  iVar4 = (**(code **)(*param_2 + 0x220))();
  if (fVar2 < *(float *)(iVar4 + 0x14) * DAT_5015d90c) {
    iVar4 = (**(code **)(*param_2 + 0x220))();
    fVar2 = fVar2 / (*(float *)(iVar4 + 0x14) * DAT_5015d90c);
    if (fVar2 < 0.0) {
      fVar2 = 0.0;
    }
    if (1.0 < fVar2) {
      fVar2 = 1.0;
    }
    fStack_78 = fVar2 * fStack_78;
  }
  if ((64.0 <= fVar1) && (fVar1 < 128.0)) {
    fVar1 = (fVar1 - 64.0) * 0.015625;
    fStack_78 = (1.0 - fVar1) + fStack_78 * fVar1;
  }
  FUN_500c3570(&local_54,afStack_18);
  FUN_500fdd70(afStack_18,afStack_c,&fStack_48,&fStack_3c);
  fVar8 = (float10)(*DAT_5015cb20)(0,0x3f800000);
  if (fVar8 <= (float10)fStack_78) {
    *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) & 0xffffefff;
    fVar8 = (float10)(*DAT_5015cb20)(0xc1800000,0x41800000);
    fStack_6c = (float)(fVar8 + (float10)fVar5);
    fVar8 = (float10)(*DAT_5015cb20)(0xc1800000,0x41800000);
    fStack_68 = (float)(fVar8 + (float10)fVar6);
    fVar8 = (float10)(*DAT_5015cb20)(0xc1c00000,0x42200000);
    fVar8 = fVar8 + (float10)local_58;
  }
  else {
    switch(uVar7) {
    case 0:
      iVar4 = (*DAT_5015cb24)(0,1);
      fVar8 = (float10)(*DAT_5015cb20)(0x41800000,0x42000000);
      fVar8 = fVar8 * (float10)(int)((-(uint)(iVar4 != 0) & 0xfffffffe) + 1);
      fVar9 = (float10)fStack_48;
      fVar10 = (float10)fStack_44;
      fVar11 = (float10)fStack_40;
      fVar12 = (float10)(*DAT_5015cb20)(0xc1000000,0x41000000);
      fVar13 = (float10)(*DAT_5015cb20)(0xc1000000,0x41000000);
      *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) | 0x1000;
      fStack_6c = (float)((float10)fStack_48 * fVar13 +
                         (float10)(float)((float10)fStack_3c * fVar12 +
                                         (float10)(float)(fVar9 * fVar8 + (float10)fVar5)));
      fStack_68 = (float)((float10)fStack_44 * fVar13 +
                         (float10)(float)((float10)fStack_38 * fVar12 +
                                         (float10)(float)(fVar10 * fVar8 + (float10)fVar6)));
      fVar8 = fVar13 * (float10)fStack_40 +
              (float10)(float)((float10)fStack_34 * fVar12 +
                              (float10)(float)(fVar11 * fVar8 + (float10)local_58));
      break;
    case 1:
      fVar8 = (float10)(*DAT_5015cb20)(0x41800000,0x42000000);
      fVar9 = (float10)(*DAT_5015cb20)(0xc1000000,0x41000000);
      *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) | 0x1000;
      fStack_6c = (float)((float10)fStack_48 * fVar9 +
                         (float10)(float)((float10)fStack_3c * fVar8 + (float10)fVar5));
      fStack_68 = (float)((float10)fStack_44 * fVar9 +
                         (float10)(float)((float10)fStack_38 * fVar8 + (float10)fVar6));
      fVar8 = fVar9 * (float10)fStack_40 +
              (float10)(float)((float10)fStack_34 * fVar8 + (float10)local_58);
      break;
    case 2:
      fVar8 = (float10)(*DAT_5015cb20)(0x41800000,0x42000000);
      fVar8 = -fVar8;
      fVar9 = (float10)(*DAT_5015cb20)(0xc1000000,0x41000000);
      *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) | 0x1000;
      fStack_6c = (float)((float10)fStack_48 * fVar9 +
                         (float10)(float)((float10)fStack_3c * fVar8 + (float10)fVar5));
      fStack_68 = (float)((float10)fStack_44 * fVar9 +
                         (float10)(float)((float10)fStack_38 * fVar8 + (float10)fVar6));
      fVar8 = fVar9 * (float10)fStack_40 +
              (float10)(float)((float10)fStack_34 * fVar8 + (float10)local_58);
      break;
    case 3:
      fVar8 = (float10)(*DAT_5015cb20)(0x41800000,0x42000000);
      fVar8 = -fVar8;
      fVar9 = (float10)(*DAT_5015cb20)(0xc1000000,0x41000000);
      *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) | 0x1000;
      fStack_6c = (float)((float10)fStack_3c * fVar9 +
                         (float10)(float)((float10)fStack_48 * fVar8 + (float10)fVar5));
      fStack_68 = (float)((float10)fStack_38 * fVar9 +
                         (float10)(float)((float10)fStack_44 * fVar8 + (float10)fVar6));
      fVar8 = fVar9 * (float10)fStack_34 +
              (float10)(float)((float10)fStack_40 * fVar8 + (float10)local_58);
      break;
    case 4:
      fVar8 = (float10)(*DAT_5015cb20)(0x41800000,0x42000000);
      fVar9 = (float10)(*DAT_5015cb20)(0xc1000000,0x41000000);
      *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) | 0x1000;
      fStack_6c = (float)((float10)fStack_3c * fVar9 +
                         (float10)(float)((float10)fStack_48 * fVar8 + (float10)fVar5));
      fStack_68 = (float)((float10)fStack_38 * fVar9 +
                         (float10)(float)((float10)fStack_44 * fVar8 + (float10)fVar6));
      fVar8 = fVar9 * (float10)fStack_34 +
              (float10)(float)((float10)fStack_40 * fVar8 + (float10)local_58);
      break;
    default:
      fVar8 = (float10)fStack_64;
      *(uint *)(param_3 + 0x1a0) = *(uint *)(param_3 + 0x1a0) | 0x1000;
    }
  }
  local_54 = fStack_6c - *(float *)(param_3 + 4);
  local_50 = fStack_68 - *(float *)(param_3 + 8);
  local_4c = (float)(fVar8 - (float10)*(float *)(param_3 + 0xc));
  FUN_500c3570(&local_54,param_1);
  iVar4 = (**(code **)(*param_2 + 0x18c))();
  if ((iVar4 == 0) || (iVar4 = (**(code **)(*param_2 + 0x18c))(), *(int *)(iVar4 + 4) == 0)) {
    fVar8 = (float10)1.0;
  }
  else {
    iVar4 = (**(code **)(*param_2 + 0x18c))();
    fVar8 = (float10)(**(code **)(*param_2 + 0x100))
                               (param_3,*(undefined4 *)(*(int *)(iVar4 + 4) + 0x4c));
  }
  for (fVar5 = param_1[1] - *(float *)(param_3 + 0x14); 180.0 < fVar5;
      fVar5 = (fVar5 - 360.0) - *(float *)(param_3 + 0x14)) {
    fVar5 = param_1[1];
    param_1[1] = fVar5 - 360.0;
  }
  for (fVar5 = param_1[1] - *(float *)(param_3 + 0x14); fVar5 < -180.0;
      fVar5 = (fVar5 + 360.0) - *(float *)(param_3 + 0x14)) {
    fVar5 = param_1[1];
    param_1[1] = fVar5 + 360.0;
  }
  if (fVar8 < (float10)param_1[1] - (float10)*(float *)(param_3 + 0x14)) {
    param_1[1] = (float)(fVar8 + (float10)*(float *)(param_3 + 0x14));
  }
  if ((float10)param_1[1] - (float10)*(float *)(param_3 + 0x14) < -fVar8) {
    param_1[1] = (float)((float10)*(float *)(param_3 + 0x14) - fVar8);
  }
  return;
}

