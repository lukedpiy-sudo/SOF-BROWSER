// rea decompile_all
// name: FUN_500d87e0
// address: 0x500d87e0
// body: available
// range: 0x500d87e0-0x500d8c71 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500d87e0(int param_1,byte *param_2,undefined4 param_3)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float fVar4;
  uint uVar5;
  char *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  int iVar10;
  byte *pbVar11;
  byte *pbVar12;
  bool bVar13;
  bool bVar14;
  int *piStack_74;
  int *piStack_70;
  char *local_6c;
  float fStack_68;
  char *local_64;
  int iStack_60;
  float fStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  float fStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 auStack_38 [4];
  float fStack_34;
  float fStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar10 = 5;
  bVar13 = false;
  iVar7 = 0;
  bVar14 = true;
  pbVar11 = param_2;
  pbVar12 = &DAT_501523c0;
  do {
    if (iVar10 == 0) break;
    iVar10 = iVar10 + -1;
    bVar13 = *pbVar11 < *pbVar12;
    bVar14 = *pbVar11 == *pbVar12;
    pbVar11 = pbVar11 + 1;
    pbVar12 = pbVar12 + 1;
  } while (bVar14);
  if (!bVar14) {
    iVar7 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
  }
  if (iVar7 == 0) {
    local_6c = s_enemy_hind_501523b4;
    local_64 = &DAT_501523c0;
  }
  else {
    local_6c = s_enemy_chopper_501523c8;
    local_64 = s_cobrass_501523d8;
  }
  DAT_501889b9 = 1;
  DAT_501889ba = 1;
  DAT_501889bb = 1;
  (*DAT_5015c9f8)(s_weapons_othermz_heli_50152a28);
  FUN_50106b20(0x1c);
  uVar5 = *(uint *)(param_1 + 0x118);
  *(uint *)(param_1 + 0x118) = uVar5 | 4;
  if ((*(byte *)(param_1 + 0x1b8) & 0x20) != 0) {
    *(uint *)(param_1 + 0x118) = uVar5 | 0x104;
  }
  pfVar2 = (float *)(param_1 + 0x11c);
  pfVar3 = (float *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x34) = 0x400000;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500d87b0;
  pfVar1 = (float *)(param_1 + 4);
  *pfVar2 = -280.0;
  *(undefined4 *)(param_1 + 0x120) = 0xc38c0000;
  *(undefined4 *)(param_1 + 0x124) = 0xc2480000;
  *pfVar3 = 280.0;
  *(undefined4 *)(param_1 + 300) = 0x438c0000;
  *(undefined4 *)(param_1 + 0x130) = 0x428c0000;
  fStack_5c = *pfVar1;
  uStack_58 = *(undefined4 *)(param_1 + 8);
  uStack_54 = *(undefined4 *)(param_1 + 0xc);
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    if (*(int *)(param_1 + 0x450) != 0) {
      FUN_500d4070(param_1,pfVar1,pfVar1);
    }
    fStack_5c = *pfVar1;
    uStack_54 = *(undefined4 *)(param_1 + 0xc);
    uStack_58 = *(undefined4 *)(param_1 + 8);
    *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + 200.0;
    fStack_50 = *pfVar1;
    uStack_4c = *(undefined4 *)(param_1 + 8);
    uStack_48 = 0xc4160000;
    (*DAT_5015cac0)(pfVar1,pfVar2,pfVar3,&fStack_50,param_1,3,auStack_38);
    if ((fStack_34 < 1.0) && (fStack_34 != 0.0)) {
      fStack_5c = fStack_30;
      uStack_58 = uStack_2c;
      uStack_54 = uStack_28;
    }
    uStack_3c = *(undefined4 *)(param_1 + 0x124);
    uStack_44 = 0;
    uStack_40 = 0;
    (*DAT_5015cac0)(pfVar1,&uStack_44,0,&fStack_50,param_1,3,auStack_38);
    if ((1.0 <= fStack_34) || (fStack_34 == 0.0)) {
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) - 200.0;
    }
    else {
      *pfVar1 = fStack_30;
      *(undefined4 *)(param_1 + 8) = uStack_2c;
      *(undefined4 *)(param_1 + 0xc) = uStack_28;
    }
  }
  *(undefined4 *)(param_1 + 0x2f0) = 1000;
  *(undefined4 *)(param_1 + 0x2ec) = 1000;
  (*DAT_5015cb28)(param_1);
  pcVar6 = local_6c;
  if (*(float *)(param_1 + 0x120) <= *pfVar2) {
    fVar4 = *(float *)(param_1 + 0x120);
  }
  else {
    fVar4 = *pfVar2;
  }
  if (*pfVar3 <= *(float *)(param_1 + 300)) {
    piStack_74 = *(int **)(param_1 + 300);
  }
  else {
    piStack_74 = (int *)*pfVar3;
  }
  piStack_70 = (int *)ABS(fVar4);
  if (ABS(fVar4) <= (float)piStack_74) {
    piStack_70 = piStack_74;
  }
  fStack_68 = ABS(*(float *)(param_1 + 0x124));
  if (fStack_68 <= *(float *)(param_1 + 0x130)) {
    fStack_68 = *(float *)(param_1 + 0x130);
  }
  fStack_68 = fStack_68 + fStack_68;
  piStack_74 = FUN_50008e90(8,param_1);
  *(int **)(param_1 + 0x450) = piStack_74;
  if (piStack_74 != (int *)0x0) {
    FUN_5006b100(&DAT_5018b440,&iStack_60,(uint *)&piStack_74);
    if (iStack_60 == DAT_5018b444) {
      local_6c = DAT_501546ec;
      DAT_501546ec = DAT_501546ec + 1;
      piVar8 = (int *)FUN_500a6440(&DAT_5018b440,(uint *)&piStack_74);
      *piVar8 = (int)local_6c;
      puVar9 = (undefined4 *)FUN_50010ba0(&DAT_5018b454,(int *)&local_6c);
      *puVar9 = piStack_74;
    }
  }
  if (*(int **)(param_1 + 0x450) != (int *)0x0) {
    iVar7 = (**(code **)(**(int **)(param_1 + 0x450) + 0x238))();
    if (iVar7 != 0) {
      *(float *)(iVar7 + 0x108) = -(float)piStack_70;
      *(float *)(iVar7 + 0x10c) = -(float)piStack_70;
      *(float *)(iVar7 + 0x110) = -fStack_68;
      *(int **)(iVar7 + 0x114) = piStack_70;
      *(int **)(iVar7 + 0x118) = piStack_70;
      *(float *)(iVar7 + 0x11c) = fStack_68;
      *(float *)(iVar7 + 0xd8) = *pfVar1;
      *(undefined4 *)(iVar7 + 0xdc) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(iVar7 + 0xe0) = *(undefined4 *)(param_1 + 0xc);
      *(float *)(iVar7 + 0x120) = fStack_5c;
      *(undefined4 *)(iVar7 + 0x124) = uStack_58;
      *(undefined4 *)(iVar7 + 0x128) = uStack_54;
      *(undefined4 *)(iVar7 + 0x1b4) = *(undefined4 *)(param_1 + 0x358);
      FUN_500b2fd0(param_1,pcVar6,(int)local_64,param_2,param_3,0);
      if (((*(byte *)(param_1 + 0x1b8) & 0x10) == 0) || (DAT_5015d950 < 2)) {
        *(undefined1 *)(iVar7 + 0xb1) = 1;
      }
      else {
        *(undefined1 *)(iVar7 + 0xb1) = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x19c) = 6;
  *(undefined4 *)(param_1 + 0x158) = 2;
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) | 0x800;
  *(undefined4 *)(param_1 + 0x30c) = 1;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2b8) = 0;
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_500d7510;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

