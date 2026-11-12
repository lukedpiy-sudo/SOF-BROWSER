// rea decompile_all
// name: FUN_2007f3b0
// address: 0x2007f3b0
// body: available
// range: 0x2007f3b0-0x2007fd41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2007f3b0(float param_1,int param_2,int param_3,undefined4 *param_4,char param_5,
                 char param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined2 extraout_var;
  int *piVar5;
  int in_ECX;
  undefined2 extraout_var_00;
  undefined2 extraout_var_01;
  undefined1 uVar6;
  undefined2 extraout_var_02;
  uint uVar7;
  float *pfVar8;
  int *piVar9;
  undefined4 *puVar10;
  float10 fVar11;
  undefined4 *local_364;
  undefined4 *local_360;
  undefined1 local_359;
  float fStack_358;
  int local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  float local_344;
  float local_340;
  float local_33c;
  int iStack_338;
  undefined4 local_334;
  undefined1 auStack_330 [4];
  undefined4 uStack_32c;
  undefined4 uStack_328;
  undefined4 uStack_324;
  undefined4 local_320 [4];
  int local_310;
  undefined1 local_30c [64];
  undefined4 local_2cc;
  undefined1 local_2c8 [64];
  undefined4 local_288;
  int local_284;
  float local_280;
  undefined1 local_27c [12];
  undefined1 local_270 [4];
  float local_26c [15];
  undefined4 local_230;
  undefined1 local_22c [64];
  undefined4 local_1ec;
  int local_1e8;
  float local_1e4;
  undefined1 local_1e0 [64];
  undefined4 local_1a0;
  undefined1 local_19c [64];
  undefined4 local_15c;
  int local_158;
  float local_154;
  undefined1 auStack_150 [64];
  undefined4 local_110;
  undefined4 local_cc;
  int iStack_c8;
  float fStack_c4;
  undefined1 local_c0 [64];
  undefined4 local_80;
  undefined1 auStack_7c [64];
  undefined4 local_3c;
  int iStack_38;
  float fStack_34;
  undefined1 local_30 [36];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_2010c16b;
  local_c = ExceptionList;
  if ((*(char *)(in_ECX + 0x96) == '\0') || (*(short *)(in_ECX + 0xae) == 0)) {
    local_344 = 0.0;
    local_340 = 0.0;
    local_33c = 1.0;
    ExceptionList = &local_c;
    FUN_200802f0(&local_344);
    *(undefined1 *)(in_ECX + 0x168) = 0;
    *(undefined4 *)(in_ECX + 0x164) = 0xbf800000;
    *(undefined4 *)(in_ECX + 400) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x194) = 0;
    *(undefined4 *)(in_ECX + 0x1ac) = 0;
    *(undefined2 *)(in_ECX + 0x1b0) = 0;
    *(undefined1 *)(in_ECX + 0x1b2) = 1;
    FUN_20082060();
LAB_2007fd18:
    if (*(int *)(in_ECX + 0x1c8) == 0) {
      DAT_20403d68 = '\0';
    }
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  if ((-1.0 < *(float *)(in_ECX + 0x164)) &&
     (ExceptionList = &local_c, *(float *)(in_ECX + 0x164) < param_1 - 0.15)) {
    local_350 = 0;
    local_34c = 0;
    local_348 = 0x3f800000;
    ExceptionList = &local_c;
    FUN_200802f0(&local_350);
    *(undefined1 *)(in_ECX + 0x168) = 0;
    *(undefined4 *)(in_ECX + 0x164) = 0xbf800000;
    *(undefined4 *)(in_ECX + 400) = 0xbf800000;
    *(undefined4 *)(in_ECX + 0x194) = 0;
    *(undefined4 *)(in_ECX + 0x1ac) = 0;
    *(undefined2 *)(in_ECX + 0x1b0) = 0;
    *(undefined1 *)(in_ECX + 0x1b2) = 1;
    FUN_20082060();
  }
  fVar11 = (float10)FUN_2007d090(param_1,&local_359,&local_364);
  local_364 = (undefined4 *)(float)fVar11;
  iVar2 = FUN_200884a0(CONCAT22(extraout_var_02,*(undefined2 *)(in_ECX + 0xae)),&local_334);
  if (iVar2 == 0) goto LAB_2007fd18;
  local_354 = iVar2;
  FUN_2007cfa0(local_320,local_364,local_334);
  uVar6 = 1;
  if (((*(int *)(in_ECX + 0x194) != iVar2) ||
      (*(float *)(in_ECX + 0x130) <= param_1 - *(float *)(in_ECX + 400))) ||
     ((uVar7 = CONCAT22(extraout_var_00,*(short *)(in_ECX + 0xae)),
      *(short *)(in_ECX + 0x1b0) == *(short *)(in_ECX + 0xae) &&
      (*(float *)(in_ECX + 0x1ac) == *(float *)(in_ECX + 0x9c))))) {
LAB_2007f551:
    *(undefined4 *)(in_ECX + 0x1ac) = *(undefined4 *)(in_ECX + 0x9c);
    puVar3 = local_320;
    puVar10 = (undefined4 *)(in_ECX + 0x198);
    for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar10 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar10 = puVar10 + 1;
    }
    uVar7 = (uint)*(ushort *)(in_ECX + 0xae);
    *(int *)(in_ECX + 0x194) = local_354;
    *(ushort *)(in_ECX + 0x1b0) = *(ushort *)(in_ECX + 0xae);
    *(float *)(in_ECX + 400) = param_1;
  }
  else {
    if (*(char *)(in_ECX + 0x1b2) != '\0') {
      *(int *)(in_ECX + 0x1a0) = local_310;
    }
    if (*(int *)(in_ECX + 0x1a0) != local_310) goto LAB_2007f551;
    local_320[1] = *(undefined4 *)(in_ECX + 0x1a4);
    local_320[2] = *(undefined4 *)(in_ECX + 0x1a8);
    uVar6 = 0;
  }
  *(undefined1 *)(in_ECX + 0x1b2) = uVar6;
  *(float *)(in_ECX + 0x164) = param_1;
  local_2cc = 0;
  local_288 = 0;
  local_1a0 = 0;
  local_15c = 0;
  if ((*(short *)(in_ECX + 0x94) == 0) ||
     (cVar1 = FUN_20088d00(uVar7,*(short *)(in_ECX + 0x94),local_320,local_1e0), cVar1 == '\0')) {
    FUN_200a1100(in_ECX + 4,param_2);
    FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
    local_284 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
    local_280 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
  }
  else {
    local_230 = 0;
    local_1ec = 0;
    FUN_200a1100(in_ECX + 4,param_2);
    FUN_200a1100(param_2 + 0x44,in_ECX + 0x48);
    local_1e8 = *(int *)(in_ECX + 0x8c) * *(int *)(param_2 + 0x88);
    local_1e4 = *(float *)(in_ECX + 0x90) * *(float *)(param_2 + 0x8c);
    FUN_200a1100(local_19c,local_270);
    FUN_200a1100(local_22c,local_1e0);
    local_284 = local_158 * local_1e8;
    local_280 = local_1e4 / local_154;
  }
  if (param_6 != '\0') {
    puVar3 = operator_new(0x38);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_FUN_2011245c;
      FUN_200802f0(in_ECX + 0x16c);
      FUN_200802f0(in_ECX + 0x16c);
      FUN_200802f0(param_3 + 0x40);
      fVar11 = (float10)FUN_200790d0();
      puVar3[0xd] = (float)fVar11;
    }
    local_364 = puVar3;
    FUN_2009e320(*(undefined4 *)(param_3 + 8),&local_364);
    FUN_20082480(*(undefined4 *)(param_3 + 0x18),local_30);
    FUN_20082680(*(undefined4 *)(param_3 + 0x28),local_30c);
  }
  uVar7 = 0;
  local_360 = (undefined4 *)0x0;
  if ((param_5 == '\0') || (DAT_20404c8d != '\0')) {
LAB_2007f871:
    puVar3 = (undefined4 *)0x0;
    FUN_200a1410(local_27c,param_3 + 0x4c);
    FUN_200a14c0(&local_350,param_3 + 0x58);
    if ((local_360 == (undefined4 *)0x0) && (DAT_20404c8c == '\0')) {
      local_360 = (undefined4 *)(local_354 + 0x2c);
    }
    uStack_32c = 0;
    auStack_330[0] = local_359;
    uStack_328 = 0;
    uStack_324 = 0;
    uStack_4 = 0;
    if (DAT_20404c8d == '\0') {
      fStack_358 = 0.0;
      iStack_338 = 0;
      while ((local_364 = puVar3, *(int *)(param_3 + 4) != 0 &&
             (puVar3 < (undefined4 *)(*(int *)(param_3 + 8) - *(int *)(param_3 + 4) >> 2)))) {
        local_230 = 0;
        local_1ec = 0;
        iVar2 = *(int *)(param_3 + 0x24) + iStack_338;
        FUN_200a1100(local_30c,iVar2 + 0x44);
        FUN_200a1100(iVar2,local_2c8);
        local_1e8 = *(int *)(iVar2 + 0x88) * local_284;
        local_1e4 = local_280 / *(float *)(iVar2 + 0x8c);
        iVar2 = (int)puVar3 * 4;
        cVar1 = (**(code **)(**(int **)(iVar2 + *(int *)(param_3 + 4)) + 0x18))
                          ((int)fStack_358 + *(int *)(param_3 + 0x14),local_270);
        if ((cVar1 != '\0') &&
           ((DAT_20404c8c != '\0' ||
            (cVar1 = (**(code **)(**(int **)(iVar2 + *(int *)(param_3 + 4)) + 0x20))(local_360),
            cVar1 != '\0')))) {
          FUN_200a8890(uStack_328,1,*(int *)(param_3 + 4) + iVar2);
        }
        iStack_338 = iStack_338 + 0x90;
        fStack_358 = (float)((int)fStack_358 + 0x24);
        puVar3 = (undefined4 *)((int)local_364 + 1);
      }
    }
    uVar4 = FUN_200a7640();
    FUN_2008a520(CONCAT22(extraout_var_01,*(undefined2 *)(in_ECX + 0xae)),in_ECX + 0xb4,uVar4);
    if (DAT_20404c8d == '\0') {
      FUN_2008a5b0(CONCAT22(extraout_var,*(undefined2 *)(in_ECX + 0xae)),in_ECX + 0xc4,uVar4);
    }
    local_33c = (float)*(byte *)(in_ECX + 0xac) * 0.003921569;
    local_364 = (undefined4 *)(uint)*(byte *)(in_ECX + 0xad);
    local_340 = (float)*(byte *)(in_ECX + 0xab) * 0.003921569;
    local_344 = (float)*(byte *)(in_ECX + 0xaa) * 0.003921569;
    fStack_358 = (float)(int)local_364 * 0.003921569;
    if (DAT_20404c8d == '\0') {
      (**(code **)(DAT_20403c04 + 0x68))();
      (**(code **)(DAT_20403c04 + 0x54))(local_30c);
    }
    if (DAT_20403d68 != '\0') {
      if (*(int *)(in_ECX + 0x1c8) == 0) {
        if (local_360 == (undefined4 *)0x0) {
          local_360 = (undefined4 *)(local_354 + 0x2c);
        }
        FUN_20093b20(local_360,local_30c,fStack_358 * fStack_358);
      }
      FUN_20093e10(local_30c);
    }
    FUN_200a7090(local_320,param_3 + 0x40,local_27c,&local_350,auStack_330,&local_344,fStack_358,
                 *(undefined1 *)((int)param_4 + 0x2f));
    if (DAT_20404c8d == '\0') {
      (**(code **)(DAT_20403c04 + 100))();
    }
    uStack_4 = 0xffffffff;
    FUN_200f9f75(uStack_32c);
  }
  else {
    param_5 = '\x01';
    local_360 = (undefined4 *)(local_354 + 0x2c);
    if (*(char *)(local_354 + 0x44) == '\0') {
      pfVar8 = local_26c;
      do {
        if ((uVar7 & 1) == 0) {
          local_350 = local_360[3];
        }
        else {
          local_350 = *local_360;
        }
        if ((uVar7 & 2) == 0) {
          local_34c = local_360[4];
        }
        else {
          local_34c = local_360[1];
        }
        if ((uVar7 & 4) == 0) {
          local_348 = local_360[5];
        }
        else {
          local_348 = local_360[2];
        }
        FUN_200a1410(&local_344,&local_350);
        pfVar8[-1] = local_344;
        *pfVar8 = local_340;
        pfVar8[1] = local_33c;
        uVar7 = uVar7 + 1;
        pfVar8 = pfVar8 + 3;
      } while ((int)uVar7 < 8);
      cVar1 = (**(code **)*param_4)(local_270);
      if (cVar1 == '\0') {
        param_5 = '\0';
        goto LAB_2007f871;
      }
    }
    if (*(int *)(in_ECX + 0x1c8) == 0) {
      DAT_20403d68 = '\0';
    }
  }
  piVar5 = *(int **)(in_ECX + 0xf0);
  piVar9 = (int *)*piVar5;
  if (piVar9 == piVar5) {
    ExceptionList = local_c;
    return;
  }
  do {
    local_80 = 0;
    local_3c = 0;
    local_110 = 0;
    local_cc = 0;
    if (((short)piVar9[2] == 0) ||
       (cVar1 = FUN_20088d00(CONCAT22((short)((uint)local_c0 >> 0x10),*(undefined2 *)(in_ECX + 0xae)
                                     ),CONCAT22((short)((uint)piVar5 >> 0x10),(short)piVar9[2]),
                             local_320,local_c0), cVar1 == '\0')) {
      FUN_2007f3b0(param_1,local_30c,param_3,param_4,param_5,0);
    }
    else {
      FUN_200a1100(local_c0,local_30c);
      FUN_200a1100(local_2c8,auStack_7c);
      iStack_c8 = iStack_38 * local_284;
      fStack_c4 = fStack_34 * local_280;
      FUN_2007f3b0(param_1,auStack_150,param_3,param_4,param_5,0);
    }
    piVar9 = (int *)*piVar9;
    piVar5 = *(int **)(in_ECX + 0xf0);
  } while (piVar9 != piVar5);
  ExceptionList = local_c;
  return;
}

