// rea decompile_all
// name: FUN_500370b0
// address: 0x500370b0
// body: available
// range: 0x500370b0-0x50038af6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500370b0(void *this,int param_1)

{
  char cVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  float10 fVar9;
  char *pcVar10;
  
  (**(code **)(*(int *)this + 0x134))(param_1);
  iVar8 = 0;
  if (0 < *(int *)((int)this + 0x60)) {
    iVar4 = 0;
    do {
      *(undefined4 *)(iVar4 + 0x28 + *(int *)((int)this + 100)) = 0;
      *(undefined4 *)(iVar4 + 0x24 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 8 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 6 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 2 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 0x14 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 4 + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 0xc + *(int *)((int)this + 100)) = 0;
      *(undefined2 *)(iVar4 + 10 + *(int *)((int)this + 100)) = 0;
      *(undefined4 *)(iVar4 + 0x10 + *(int *)((int)this + 100)) = 0;
      *(undefined **)(*(int *)((int)this + 100) + 0x20 + iVar4) = &DAT_50131858;
      *(undefined4 *)(*(int *)((int)this + 100) + 0x18 + iVar4) = *(undefined4 *)((int)this + 0x60);
      iVar7 = *(int *)((int)this + 100) + iVar4;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 0x30;
      *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar7 + 0x18);
    } while (iVar8 < *(int *)((int)this + 0x60));
  }
  (**(code **)(*(int *)this + 0x130))(param_1);
  fVar9 = (float10)(*DAT_5015cb20)(0,0x3f800000);
  if ((float10)0.7 <= fVar9) {
    FUN_5001cf30(this,param_1,s_g_half_head_5013342c,s_to_gbolt_Cap_chest_head_501346d0,1);
    pcVar10 = s_g_half_head_5013342c;
  }
  else {
    FUN_5001cf30(this,param_1,s_g_neck_torn_anim2_501346bc,s_to_gbolt_Cap_chest_head_501346d0,1);
    pcVar10 = s_g_neck_torn_anim2_501346bc;
  }
  FUN_5001cf30(this,param_1,pcVar10,s_to_gbolt_Cap_chest_head_501346d0,0);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_head_b_501346ac);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x34) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_head_f_5013469c);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 4) = sVar2;
  }
  *(undefined **)(*(int *)((int)this + 100) + 0x20) = &DAT_50131258;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x50) =
       *(undefined4 *)(*(int *)((int)this + 100) + 0x20);
  *(undefined **)(*(int *)((int)this + 100) + 0x1a0) = &DAT_50131048;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x170) =
       *(undefined4 *)(*(int *)((int)this + 100) + 0x1a0);
  *(undefined **)(*(int *)((int)this + 100) + 0xb0) = &DAT_50131078;
  *(undefined **)(*(int *)((int)this + 100) + 0xe0) = &DAT_501310a8;
  *(undefined **)(*(int *)((int)this + 100) + 0x110) = &DAT_501310d8;
  *(undefined **)(*(int *)((int)this + 100) + 0x140) = &DAT_50131108;
  *(undefined **)(*(int *)((int)this + 100) + 0x230) = &DAT_50131528;
  *(undefined **)(*(int *)((int)this + 100) + 0x260) = &DAT_50131438;
  *(undefined **)(*(int *)((int)this + 100) + 0x410) = &DAT_50131798;
  *(undefined **)(*(int *)((int)this + 100) + 0x3e0) = &DAT_50131678;
  *(undefined **)(*(int *)((int)this + 100) + 0x1d0) = &DAT_501314f8;
  *(undefined **)(*(int *)((int)this + 100) + 0x200) = &DAT_50131408;
  *(undefined **)(*(int *)((int)this + 100) + 0x2f0) = &DAT_50131828;
  *(undefined **)(*(int *)((int)this + 100) + 0x470) = &DAT_501317f8;
  *(undefined **)(*(int *)((int)this + 100) + 0x440) = &DAT_501316d8;
  *(undefined **)(*(int *)((int)this + 100) + 0x80) = &DAT_501311c8;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x18) = 1;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x48) = 0;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_tight_501358d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x9a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_tight_501358d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xfa) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_tight_501358d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xca) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_tight_501358d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x12a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_tight_501358d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x15a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_tight_501358d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x18a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_neck_chest_50135bd4);
  *(undefined2 *)(*(int *)((int)this + 100) + 10) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_neck_chest_50135bd4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rbicep_chest_tight_501358a0);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ea) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lbicep_chest_tight_50135880);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ba) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lforearm_lbicep_tight_50135bb4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x24a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rforearm_rbicep_tight_50135b94);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x21a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_chest_tight_5013582c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x15c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_chest_tight_5013582c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x18c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_neck_50135b7c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_neck_50135b7c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_rbicep_tight_501357f8);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ec) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_lbicep_tight_501357d8);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1bc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lbicep_lforearm_tight_50135b5c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x24c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rbicep_rforearm_tight_50135b3c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x21c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_rcalf_tight_50135780);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3cc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_lcalf_tight_50135760);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3fc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lcalf_lthigh_tight_50135740);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3fa) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rcalf_rthigh_tight_50135720);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3ca) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_shoulder_rf_50133d20);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x94) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_shoulder_lf_50133d34);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0xf4) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_shoulder_rb_50134528);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0xc4) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_shoulder_lb_50134514);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x124) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_chest_f_50133d10);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x154) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_chest_b_50134504);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x184) = sVar2;
  }
  *(undefined4 *)(*(int *)((int)this + 100) + 0x198) = 7;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x168) = 3;
  *(undefined4 *)(*(int *)((int)this + 100) + 0xa8) = 5;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x108) = 4;
  *(undefined4 *)(*(int *)((int)this + 100) + 0xd8) = 6;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x138) = 8;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x31c) = 0x11;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x318) = 0x11;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x34c) = 0x10;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x348) = 0x10;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x37c) = 0x13;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x378) = 0x13;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x3ac) = 0x12;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x3a8) = 0x12;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x1c8) = 0xb;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x1f8) = 0xc;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x2ec) = 0xd;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x28c) = 0x18;
  *(undefined4 *)(*(int *)((int)this + 100) + 700) = 0x19;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x43c) = 0x14;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x46c) = 0x15;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_gut_f_50133964);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x274) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_gut_b_501344f8);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x2a4) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_groin_50133830);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x2d4) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_sbolt_heel_l_501339c4);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x454) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_sbolt_heel_r_501339b4);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x424) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_cap_head_neck_5013569c);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 100) = sVar2;
  }
  FUN_5001cf30(this,param_1,s_g_guts_lrg_501344d4,s_to_gbolt_Cap_chest_hips_501344e0,7);
  FUN_5001cf30(this,param_1,s_g_guts_lrg_501344d4,s_to_gbolt_Cap_chest_hips_501344e0,8);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0xb);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0xc);
  FUN_5001cf30(this,param_1,s_g_arm_torn_anim1_50134494,s_to_gbolt_Cap_chest_rbicep_501344a8,9);
  FUN_5001cf30(this,param_1,s_g_arm_torn_anim1_50134494,s_to_gbolt_Cap_chest_lbicep_50134478,10);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0x10);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0x11);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0x12);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0x13);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0x14);
  FUN_5001cf30(this,param_1,s_g_bone_anim1_501344c4,s_to_gbolt_5012fc74,0x15);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__crewhair_50135b30);
  if ((short)uVar6 == 0) {
LAB_50037a7f:
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__MEDMHAIRMHEAD_50135b10);
    if ((short)uVar6 != 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
      if (cVar1 != '\0') {
        *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pcVar10 = s_gz_MEDMHAIRMHEAD_b_50135afc;
        goto LAB_50037aca;
      }
    }
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 == '\0') goto LAB_50037a7f;
    *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_crewhair_b_50135b20;
LAB_50037aca:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x30) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__comface_50133d68);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_comface_50133d5c);
      if (sVar2 != 0) {
        **(short **)((int)this + 100) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__neck_501355c0);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x62) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_neck_50135aec);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_neck_50135aec);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x36) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_neck_chest_50135adc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_neck_chest_50135adc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x38) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__tightchest_50135560);
  sVar2 = (short)uVar6;
  if (sVar2 == 0) {
LAB_50037e10:
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__armorchest_50135258);
    sVar2 = (short)uVar6;
    if (sVar2 != 0) {
      cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
      if (cVar1 != '\0') {
        *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_tight_50135518);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_tight_50135518);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_armorchest_rfshldr_50135240);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_armorchest_lfshldr_50135228);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_armorchest_rbshldr_50135210);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_armorchest_lbshldr_501351f8);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_armorchest_f_501351e8);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pcVar10 = s_gz_armorchest_b_501351d8;
        goto LAB_50037fb7;
      }
    }
  }
  else {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 == '\0') goto LAB_50037e10;
    *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_tight_50135548);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_tight_50135530);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_tight_50135518);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_tight_50135518);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tightchest_rfshldr_50135500);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tightchest_lfshldr_501354e8);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tightchest_rbshldr_501354d0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tightchest_lbshldr_501354b8);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tightchest_fgut_50135ac8);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_tightchest_bgut_50135ab4;
LAB_50037fb7:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x180) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rtightbicep_50135aa4);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rtightbicep_50135a94);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lbicep_chest_tight_50134f38);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lbicep_lforearm_tight_50135a78);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x216) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__ltightbicep_50135a68);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_ltightbicep_50135a58);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rbicep_chest_tight_50135058);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rbicep_rforearm_tight_50135a3c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x246) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__ltightforearm_50135a2c);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_ltightforearm_50135a18);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x240) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lforearm_lbicep_tight_501359fc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x248) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rtightforearm_501359ec);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rtightforearm_501359d8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x210) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rforearm_rbicep_tight_501359bc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x218) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__dresships_501359b0);
  sVar2 = (short)uVar6;
  if (sVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x392) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x362) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x332) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x302) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_dresships_fgut_5013599c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_dresships_bgut_50135988);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_dresships_rbthigh_50135970);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x330) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_dresships_rfthigh_50135958);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x300) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_dresships_lbthigh_50135940);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x390) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_dresships_lfthigh_50135928);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x360) = sVar2;
      }
      goto LAB_50038960;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__tighthips_50134c78);
  sVar2 = (short)uVar6;
  if (sVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tighthips_fgut_50135914);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tighthips_bgut_50135900);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_rthigh_tight_50135704);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x30c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_rthigh_tight_50135704);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x33c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_lthigh_tight_501356e8);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x36c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_lthigh_tight_501356e8);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x39c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_hips_tight_501356cc);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x30a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_hips_tight_501356cc);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x33a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_hips_tight_501356b0);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x36a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_hips_tight_501356b0);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x39a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_tight_50134c28);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x306) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_tight_50134c28);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x336) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_lthigh_tight_50134c10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x366) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_lthigh_tight_50134c10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x396) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rtightthigh_50134b08);
  sVar2 = (short)uVar6;
  if (sVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x302) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x332) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rtightthigh_f_50134af4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x300) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rtightthigh_b_50134ae0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x330) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_rcalf_tight_50134ac8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_rcalf_tight_50135780);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3cc) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rcalf_rthigh_tight_50135720);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3ca) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_tight_50134ab0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x308) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_tight_50134ab0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x338) = sVar2;
      }
      *(undefined4 *)(*(int *)((int)this + 100) + 0x318) = 0x11;
      *(undefined4 *)(*(int *)((int)this + 100) + 0x348) = 0x10;
      *(undefined **)(*(int *)((int)this + 100) + 800) = &DAT_501315e8;
      *(undefined **)(*(int *)((int)this + 100) + 0x350) = &DAT_501315e8;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__ltightthigh_501349dc);
  sVar2 = (short)uVar6;
  if (sVar2 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x362) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x392) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_ltightthigh_f_501349c8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x360) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_ltightthigh_b_501349b4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x390) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_lcalf_tight_5013499c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_lcalf_tight_50135760);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3fc) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lcalf_lthigh_tight_50135740);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3fa) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_tight_50134984);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x368) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_tight_50134984);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x398) = sVar2;
      }
      *(undefined4 *)(*(int *)((int)this + 100) + 0x378) = 0x13;
      *(undefined4 *)(*(int *)((int)this + 100) + 0x3a8) = 0x12;
      *(undefined **)(*(int *)((int)this + 100) + 0x380) = &DAT_50131708;
      *(undefined **)(*(int *)((int)this + 100) + 0x3b0) = &DAT_50131708;
    }
  }
LAB_50038960:
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__ltightcalf_501348b4);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_ltightcalf_501348a4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lcalf_lthigh_tight_50134808);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f8) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rtightcalf_501347fc);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rtightcalf_501347ec);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rcalf_rthigh_tight_50134750);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c8) = sVar2;
      }
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lheels_501358f8);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x452) = (short)uVar6;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rheels_501358f0);
  if ((short)uVar6 != 0) {
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 != '\0') {
      *(short *)(*(int *)((int)this + 100) + 0x422) = (short)uVar6;
    }
  }
  return;
}

