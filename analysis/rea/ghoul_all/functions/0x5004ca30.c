// rea decompile_all
// name: FUN_5004ca30
// address: 0x5004ca30
// body: available
// range: 0x5004ca30-0x5004d521 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_5004ca30(void *this,float *param_1,float *param_2,float *param_3,int *param_4,int param_5,
            int param_6,int param_7)

{
  float *pfVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  undefined3 extraout_var;
  int iVar8;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  uint uVar9;
  float fVar10;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  void *local_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int iStack_b8;
  char cStack_b4;
  char cStack_b3;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  int iStack_84;
  float afStack_7c [3];
  char cStack_70;
  char cStack_6f;
  float fStack_6c;
  int iStack_40;
  char cStack_38;
  char cStack_37;
  float fStack_34;
  int iStack_8;
  
  if (((*(float *)(DAT_5015cca4 + 0x18) != 0.0) || (*(int *)this == 0)) || (param_3[6] == 0.0)) {
    param_3[10] = 1.4013e-45;
    param_3[3] = *param_1;
    param_3[4] = param_1[1];
    param_3[5] = param_1[2];
    return;
  }
  local_108 = this;
  (**(code **)(*param_4 + 0xc4))();
  iStack_b8 = FUN_5004bbf0((void *)((int)this + 0x28),param_2);
  if (iStack_b8 == 0) {
    param_3[8] = 0.0;
    param_3[3] = *param_1;
    param_3[4] = param_1[1];
    param_3[5] = param_1[2];
    param_3[10] = 1.4013e-45;
    return;
  }
  fVar10 = (float)(int)*(short *)(iStack_b8 + 0x14);
  param_3[9] = fVar10;
  param_3[10] = 0.0;
  if (fVar10 == -NAN) {
    param_3[8] = 0.0;
    param_3[3] = *param_1;
    param_3[4] = param_1[1];
    param_3[5] = param_1[2];
    param_3[10] = 1.4013e-45;
    return;
  }
  fVar5 = (float)FUN_5004c960(local_108,(short *)param_3[7],(int)fVar10,param_6);
  if ((int)fVar5 < 1) {
    fVar5 = 0.0;
  }
  param_3[8] = fVar5;
  pfVar6 = (float *)((int)fVar5 * 0x50 + *(int *)((int)local_108 + 4));
  if (pfVar6[8] == 0.0) {
    FUN_500adb20((byte *)s_Error__Problem_with_path__50142d68);
LAB_5004cb80:
    if ((int)fVar10 < 1) goto LAB_5004cb85;
  }
  else {
    if (*pfVar6 == fVar10) goto LAB_5004cb80;
    bVar2 = *(byte *)((int)fVar10 + (int)pfVar6[8]);
    if (bVar2 != 0) {
      fVar10 = *(float *)((int)pfVar6[5] + -0xc + (uint)bVar2 * 0xc);
      goto LAB_5004cb80;
    }
LAB_5004cb85:
    param_3[8] = 0.0;
  }
  fVar10 = param_3[8];
  iStack_d4 = 0;
  if ((fVar10 == 0.0) || (fVar10 == -NAN)) {
    param_3[8] = 0.0;
    param_3[3] = *param_1;
    param_3[4] = param_1[1];
    param_3[5] = param_1[2];
    param_3[10] = 1.4013e-45;
    goto LAB_5004d311;
  }
  if ((*(float *)(iStack_b8 + 0x10) == param_3[7]) && (param_6 != 0)) {
    param_3[3] = *param_2;
    param_3[4] = param_2[1];
    param_3[5] = param_2[2];
    goto LAB_5004d311;
  }
  if ((fVar10 == param_3[9]) && (param_6 != 0)) {
    iVar8 = *(int *)((int)local_108 + 4);
    iVar7 = (int)fVar10 * 0x50;
    pfVar6 = (float *)(iVar7 + 4 + iVar8);
    if (0.0 <= (param_2[1] - *(float *)(param_5 + 8)) *
               (*(float *)(iVar7 + 8 + iVar8) - *(float *)(param_5 + 8)) +
               (param_2[2] - *(float *)(param_5 + 0xc)) * (pfVar6[2] - *(float *)(param_5 + 0xc)) +
               (*param_2 - *(float *)(param_5 + 4)) *
               (*(float *)(iVar7 + 4 + iVar8) - *(float *)(param_5 + 4))) {
LAB_5004cce0:
      fStack_114 = *pfVar6;
      fStack_110 = pfVar6[1];
      fStack_10c = pfVar6[2];
    }
    else {
      fStack_114 = *param_2;
      fStack_110 = param_2[1];
      fStack_10c = param_2[2];
    }
  }
  else if ((fVar10 == param_3[6]) && (param_6 == 0)) {
    iVar8 = *(int *)((int)local_108 + 4);
    iVar7 = (int)fVar10 * 0x50;
    pfVar6 = (float *)(iVar7 + 4 + iVar8);
    if ((param_2[1] - *(float *)(param_5 + 8)) *
        (*(float *)(iVar7 + 8 + iVar8) - *(float *)(param_5 + 8)) +
        (param_2[2] - *(float *)(param_5 + 0xc)) * (pfVar6[2] - *(float *)(param_5 + 0xc)) +
        (*param_2 - *(float *)(param_5 + 4)) *
        (*(float *)(iVar7 + 4 + iVar8) - *(float *)(param_5 + 4)) <= 0.0) goto LAB_5004cce0;
    fStack_114 = *param_1;
    fStack_110 = param_1[1];
    fStack_10c = param_1[2];
  }
  else {
    iVar8 = (int)fVar10 * 0x50 + 4 + *(int *)((int)local_108 + 4);
    fStack_114 = *(float *)((int)fVar10 * 0x50 + 4 + *(int *)((int)local_108 + 4));
    fStack_110 = *(float *)(iVar8 + 4);
    fStack_10c = *(float *)(iVar8 + 8);
  }
  fStack_d0 = *(float *)(param_5 + 0x11c) + 1.0;
  pfVar6 = (float *)(param_5 + 4);
  uStack_d8 = *(undefined4 *)(param_5 + 0x130);
  fStack_cc = *(float *)(param_5 + 0x120) + 1.0;
  fStack_c8 = *(float *)(param_5 + 0x124) + 10.0;
  fStack_e0 = *(float *)(param_5 + 0x128) - 1.0;
  fStack_dc = *(float *)(param_5 + 300) - 1.0;
  fStack_c4 = fStack_114 - *pfVar6;
  fStack_c0 = fStack_110 - *(float *)(param_5 + 8);
  fStack_bc = fStack_10c - *(float *)(param_5 + 0xc);
  FUN_500fe050(&fStack_c4);
  fStack_ec = fStack_c4 * 64.0 + *pfVar6;
  fStack_e8 = fStack_c0 * 64.0 + *(float *)(param_5 + 8);
  fStack_e4 = fStack_bc * 64.0 + *(float *)(param_5 + 0xc);
  (*DAT_5015cac0)(pfVar6,&fStack_d0,&fStack_e0,&fStack_ec,param_5,0x2020003,&cStack_b4);
  if ((((fStack_b0 <= 0.99) && (iStack_84 != param_7)) || (cStack_b3 != '\0')) ||
     (cStack_b4 != '\0')) {
    bVar3 = false;
    if (((param_6 == 0) || (iStack_84 == 0)) ||
       (bVar4 = FUN_50038d50(iStack_84), CONCAT31(extraout_var,bVar4) == 0)) {
      local_108 = (void *)0x0;
      FUN_500c3570(&fStack_c4,afStack_7c);
      FUN_500fdd70(afStack_7c,&fStack_114,&fStack_f8,(float *)0x0);
      fStack_ec = fStack_f8 * 64.0 + fStack_114 * 64.0 + *pfVar6;
      fStack_e8 = fStack_f4 * 64.0 + fStack_110 * 64.0 + *(float *)(param_5 + 8);
      fStack_e4 = fStack_f0 * 64.0 + fStack_10c * 64.0 + *(float *)(param_5 + 0xc);
      (*DAT_5015cac0)(pfVar6,&fStack_d0,&fStack_e0,&fStack_ec,param_5,0x2020003,&cStack_70);
      fStack_ec = (fStack_114 * 64.0 + *pfVar6) - fStack_f8 * 64.0;
      fStack_e8 = (fStack_110 * 64.0 + *(float *)(param_5 + 8)) - fStack_f4 * 64.0;
      fStack_e4 = (fStack_10c * 64.0 + *(float *)(param_5 + 0xc)) - fStack_f0 * 64.0;
      (*DAT_5015cac0)(pfVar6,&fStack_d0,&fStack_e0,&fStack_ec,param_5,0x2020003,&cStack_38);
      if ((((0.1 < fStack_6c) && (cStack_6f == '\0')) && (cStack_70 == '\0')) ||
         ((((param_6 != 0 && (iStack_40 != 0)) &&
           (bVar4 = FUN_50038d50(iStack_40), CONCAT31(extraout_var_00,bVar4) != 0)) &&
          (iVar8 = FUN_50038db0(iStack_40), iVar8 != 0)))) {
        local_108 = (void *)0x1;
      }
      if ((((0.1 < fStack_34) && (cStack_37 == '\0')) && (cStack_38 == '\0')) ||
         (((param_6 != 0 && (iStack_8 != 0)) &&
          ((bVar4 = FUN_50038d50(iStack_8), CONCAT31(extraout_var_01,bVar4) != 0 &&
           (iVar8 = FUN_50038db0(iStack_8), iVar8 != 0)))))) {
        bVar3 = true;
      }
      if (local_108 == (void *)0x0) {
        pfVar1 = param_3 + 3;
        if (bVar3) {
          fVar10 = fStack_34 * 0.5 * 64.0;
          *pfVar1 = fStack_114 * fVar10 + *pfVar6;
          param_3[4] = fStack_110 * fVar10 + *(float *)(param_5 + 8);
          param_3[5] = fStack_10c * fVar10 + *(float *)(param_5 + 0xc);
          fVar10 = ((0.5 - fStack_34 * 0.5) * -1.0 - 0.5) * 64.0;
          *pfVar1 = fStack_f8 * fVar10 + *pfVar1;
          param_3[4] = fStack_f4 * fVar10 + param_3[4];
          param_3[5] = fStack_f0 * fVar10 + param_3[5];
        }
        else {
          *pfVar1 = *param_1;
          param_3[4] = param_1[1];
          param_3[5] = param_1[2];
        }
      }
      else {
        pfVar1 = param_3 + 3;
        if ((!bVar3) || (fStack_34 < fStack_6c)) {
          fVar10 = fStack_6c * 0.5 * 64.0;
          *pfVar1 = fStack_114 * fVar10 + *pfVar6;
          param_3[4] = fStack_110 * fVar10 + *(float *)(param_5 + 8);
          param_3[5] = fStack_10c * fVar10 + *(float *)(param_5 + 0xc);
          fVar10 = (0.5 - fStack_6c * 0.5) + 0.5;
        }
        else {
          fVar10 = fStack_34 * 0.5 * 64.0;
          *pfVar1 = fStack_114 * fVar10 + *pfVar6;
          param_3[4] = fStack_110 * fVar10 + *(float *)(param_5 + 8);
          param_3[5] = fStack_10c * fVar10 + *(float *)(param_5 + 0xc);
          fVar10 = -0.5 - (0.5 - fStack_34 * 0.5);
        }
        fVar10 = fVar10 * 64.0;
        *pfVar1 = fStack_f8 * fVar10 + *pfVar1;
        param_3[4] = fStack_f4 * fVar10 + param_3[4];
        param_3[5] = fStack_f0 * fVar10 + param_3[5];
      }
    }
    else {
      iVar8 = FUN_50038db0(iStack_84);
      if (iVar8 == 0) {
        param_3[3] = fStack_a0 * 64.0 + fStack_ac;
        param_3[4] = fStack_9c * 64.0 + fStack_a8;
        param_3[5] = fStack_98 * 64.0 + fStack_a4;
      }
      else {
        iStack_d4 = 1;
        param_3[3] = fStack_114;
        param_3[4] = fStack_110;
        param_3[5] = fStack_10c;
      }
    }
  }
  else {
    param_3[3] = fStack_114;
    param_3[4] = fStack_110;
    param_3[5] = fStack_10c;
  }
LAB_5004d311:
  pfVar6 = param_3 + 3;
  *param_3 = *param_1;
  param_3[1] = param_1[1];
  fStack_fc = param_1[2];
  param_3[2] = fStack_fc;
  fStack_104 = *pfVar6 - *param_3;
  fStack_100 = param_3[4] - param_3[1];
  fStack_fc = param_3[5] - fStack_fc;
  if (0.1 <= fStack_104 * fStack_104 + fStack_100 * fStack_100 + fStack_fc * fStack_fc) {
    FUN_500fe050(&fStack_104);
    if ((-0.717 <= fStack_104 * param_3[0x14] +
                   fStack_100 * param_3[0x15] + fStack_fc * param_3[0x16]) ||
       (3.0 <= DAT_5015ccdc - param_3[0x17])) {
      param_3[0x17] = DAT_5015ccdc;
      param_3[0x14] = fStack_104;
      param_3[0x15] = fStack_100;
      param_3[0x16] = fStack_fc;
    }
    else {
      *pfVar6 = *param_3;
      param_3[4] = param_3[1];
      param_3[5] = param_3[2];
      param_3[10] = 1.4013e-45;
    }
  }
  else {
    param_3[0x17] = DAT_5015ccdc;
    param_3[0x14] = fStack_104;
    param_3[0x15] = fStack_100;
    param_3[0x16] = fStack_fc;
  }
  fStack_104 = *pfVar6 - *param_1;
  fStack_100 = param_3[4] - param_1[1];
  fStack_fc = param_3[5] - param_1[2];
  FUN_500fe050(&fStack_104);
  fStack_104 = fStack_104 * 25.0;
  fStack_100 = fStack_100 * 25.0;
  fStack_fc = fStack_fc * 25.0;
  if ((iStack_d4 == 0) && (uVar9 = FUN_5004afd0(param_4,param_5,&fStack_104), (char)uVar9 == '\0'))
  {
    *pfVar6 = *param_1;
    param_3[4] = param_1[1];
    param_3[5] = param_1[2];
    param_3[10] = 1.4013e-45;
  }
  if ((*(float *)(DAT_5015ccc8 + 0x18) != 0.0) && (param_3[8] != 0.0)) {
    local_108 = (void *)0xfa0000fa;
    FUN_50084460(param_1,pfVar6,0xfa0000fa,1,0);
    FUN_50084b00(pfVar6,6);
    return;
  }
  return;
}

