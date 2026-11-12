// rea decompile_all
// name: FUN_50033570
// address: 0x50033570
// body: available
// range: 0x50033570-0x50036f0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50033570(void *this,int param_1)

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
      *(undefined **)(iVar4 + 0x20 + *(int *)((int)this + 100)) = &DAT_50132c98;
      *(undefined4 *)(iVar4 + 0x18 + *(int *)((int)this + 100)) = *(undefined4 *)((int)this + 0x60);
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
  *(undefined **)(*(int *)((int)this + 100) + 0x20) = &DAT_50131dc8;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x50) =
       *(undefined4 *)(*(int *)((int)this + 100) + 0x20);
  *(undefined **)(*(int *)((int)this + 100) + 0x1a0) = &DAT_50131888;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x170) =
       *(undefined4 *)(*(int *)((int)this + 100) + 0x1a0);
  *(undefined **)(*(int *)((int)this + 100) + 0xb0) = &DAT_50131ac8;
  *(undefined **)(*(int *)((int)this + 100) + 0xe0) = &DAT_50131af8;
  *(undefined **)(*(int *)((int)this + 100) + 0x110) = &DAT_50131b28;
  *(undefined **)(*(int *)((int)this + 100) + 0x140) = &DAT_50131b58;
  *(undefined **)(*(int *)((int)this + 100) + 0x1d0) = &DAT_50132488;
  *(undefined **)(*(int *)((int)this + 100) + 0x200) = &DAT_50132188;
  *(undefined **)(*(int *)((int)this + 100) + 0x230) = &DAT_50132578;
  *(undefined **)(*(int *)((int)this + 100) + 0x260) = &DAT_50132278;
  *(undefined **)(*(int *)((int)this + 100) + 800) = &DAT_50132788;
  *(undefined **)(*(int *)((int)this + 100) + 0x350) = &DAT_50132788;
  *(undefined **)(*(int *)((int)this + 100) + 0x380) = &DAT_501329f8;
  *(undefined **)(*(int *)((int)this + 100) + 0x3b0) = &DAT_501329f8;
  *(undefined **)(*(int *)((int)this + 100) + 0x2f0) = &DAT_50132c68;
  *(undefined **)(*(int *)((int)this + 100) + 0x470) = &DAT_50132c08;
  *(undefined **)(*(int *)((int)this + 100) + 0x440) = &DAT_50132998;
  *(undefined **)(*(int *)((int)this + 100) + 0x80) = &DAT_501319a8;
  *(undefined **)(*(int *)((int)this + 100) + 0x410) = &DAT_50132ae8;
  *(undefined **)(*(int *)((int)this + 100) + 0x3e0) = &DAT_50132878;
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
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_head_neck_501358c0);
  *(undefined2 *)(*(int *)((int)this + 100) + 10) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_head_neck_501358c0);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rbicep_chest_tight_501358a0);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ba) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lbicep_chest_tight_50135880);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ea) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lforearm_lbicep_t_50135864);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x24a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rforearm_rbicep_t_50135848);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x21a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_chest_tight_5013582c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x15c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_chest_tight_5013582c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x18c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_neck_head_50135818);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_neck_head_50135818);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_rbicep_tight_501357f8);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1bc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_lbicep_tight_501357d8);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ec) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lbicep_lforearm_t_501357bc);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x24c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rbicep_rforearm_t_501357a0);
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
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__baldhead_50133a44);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__crewhead_50135690);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_crewhead_b_50135680;
      goto LAB_5003408b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__beardhead_50135674);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_beardhead_b_50135664;
      goto LAB_5003408b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__hoodhead_50133a38);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_hoodhead_b_50135654;
      goto LAB_5003408b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bosshead_50135648);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_bosshead_b_50135638;
      goto LAB_5003408b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__maskhead_5013562c);
    sVar2 = (short)uVar6;
    if ((sVar2 == 0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar6 = (**(code **)(*piVar5 + 0x1c))(s__helmethead_50133d90);
      if (((short)uVar6 != 0) &&
         (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
        *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
      }
    }
    else {
      *(short *)(*(int *)((int)this + 100) + 2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x32) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskhead_b_5013561c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x30) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskhead_f_5013560c);
      if (sVar2 != 0) {
        **(short **)((int)this + 100) = sVar2;
      }
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x32) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_baldhead_b_50133d80;
LAB_5003408b:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x30) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__comface_50133d68);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__beardface_50135600);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_beardface_501355f0;
      goto LAB_500343e0;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__helmetface_50133d74);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_helmetface_501355e0;
      goto LAB_500343e0;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bossface_501355d4);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_bossface_501355c8;
      goto LAB_500343e0;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_comface_50133d5c;
LAB_500343e0:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      **(short **)((int)this + 100) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__neck_501355c0);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bossneck_50135594);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x62) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_neck_head_boss_50135580);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_neck_head_boss_50135580);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x36) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_head_neck_boss_5013556c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_head_neck_boss_5013556c;
      goto LAB_50034581;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x62) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_neck_head_501355b0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_neck_head_501355b0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x36) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_head_neck_501355a0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 8) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_head_neck_501355a0;
LAB_50034581:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x38) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__tightchest_50135560);
  sVar2 = (short)uVar6;
  if ((sVar2 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bulkychest_5013548c);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_bulky_50135474);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_bulky_5013545c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_bulky_50135444);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_bulky_50135444);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkychest_rfshldr_5013542c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkychest_lfshldr_50135414);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkychest_rbshldr_501353fc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkychest_lbshldr_501353e4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkychest_f_501353d4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_bulkychest_b_501353c4;
      goto LAB_5003478d;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__chest_b_t_501353b8);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_bulky_50135474);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_bulky_5013545c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
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
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_b_t_rfshldr_501353a0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_b_t_lfshldr_50135388);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_b_t_rbshldr_50135370);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_b_t_lbshldr_50135358);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_b_t_f_50135348);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_chest_b_t_b_50135338;
      goto LAB_5003478d;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bosschest_5013532c);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_boss_50135314);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_boss_501352fc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_boss_501352e4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_boss_501352e4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosschest_rfshldr_501352cc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosschest_lfshldr_501352b4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosschest_rbshldr_5013529c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosschest_lbshldr_50135284);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosschest_f_50135274);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_bosschest_b_50135264;
      goto LAB_5003478d;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__armorchest_50135258);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_bulky_50135444);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_bulky_50135444);
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
      goto LAB_5003478d;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__maskchest_501351cc);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_bulky_50135474);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_bulky_5013545c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_bulky_50135444);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_bulky_50135444);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskchest_f_501351bc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskchest_b_501351ac);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x180) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_no_gore_for_me_please_50135194);
      *(undefined2 *)(*(int *)((int)this + 100) + 0xc) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_no_gore_for_me_please_50135194);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3c) = uVar3;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__maskneck_50135188);
    sVar2 = (short)uVar6;
    if ((sVar2 == 0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar6 = (**(code **)(*piVar5 + 0x1c))(s__hoodneck_5013512c);
      sVar2 = (short)uVar6;
      if ((sVar2 != 0) &&
         (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
        *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_hoodneck_rfshldr_50135118);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_hoodneck_lfshldr_50135104);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_hoodneck_rbshldr_501350f0);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pcVar10 = s_gz_hoodneck_lbshldr_501350dc;
        goto LAB_500352ba;
      }
    }
    else {
      *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskneck_rfshldr_50135174);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskneck_lfshldr_50135160);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_maskneck_rbshldr_5013514c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_maskneck_lbshldr_50135138;
LAB_500352ba:
      sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
      }
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x182) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x152) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x122) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0xf2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0xc2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x92) = sVar2;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_tight_50135548);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_tight_50135530);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
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
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tightchest_f_501354a8);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_tightchest_b_50135498;
LAB_5003478d:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x180) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbicep_b_b_501350d0);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbicep_b_t_5013509c);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbicep_b_t_5013508c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rbicep_chest_bulky_501350a8;
LAB_500354ec:
      sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rbicep_rforearm_t_5013500c;
      goto LAB_500355c2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbicep_t_b_50135080);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbicep_t_b_50135070);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rbicep_chest_tight_50135058;
      goto LAB_50035443;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbicep_t_t_50135034);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbicep_t_t_50135024);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rbicep_chest_tight_50135058;
      goto LAB_500354ec;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbossbicep_50135000);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbossbicep_50134ff0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rbicep_chest_boss_50134fd8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rbicep_rforearm_boss_50134fbc;
      goto LAB_500355c2;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbicep_b_b_501350c0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rbicep_chest_bulky_501350a8;
LAB_50035443:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1b8) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rbicep_rforearm_b_50135040;
LAB_500355c2:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x216) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbicep_b_b_50134fb0);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbicep_b_t_50134f7c);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbicep_b_t_50134f6c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lbicep_chest_bulky_50134f88;
LAB_500357f4:
      sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lbicep_lforearm_t_50134eec;
      goto LAB_500358ca;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbicep_t_b_50134f60);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbicep_t_b_50134f50);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lbicep_chest_tight_50134f38;
      goto LAB_5003574b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbicep_t_t_50134f14);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbicep_t_t_50134f04);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lbicep_chest_tight_50134f38;
      goto LAB_500357f4;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbossbicep_50134ee0);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbossbicep_50134ed0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lbicep_chest_boss_50134eb8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e8) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lbicep_lforearm_boss_50134e9c;
      goto LAB_500358ca;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbicep_b_b_50134fa0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lbicep_chest_bulky_50134f88;
LAB_5003574b:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1e8) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lbicep_lforearm_b_50134f20;
LAB_500358ca:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x246) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearm_b_b_50134e8c);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearm_b_t_50134e6c);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_lforearm_b_t_50134e5c;
      goto LAB_5003597e;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearm_t_t_50134e34);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_lforearm_t_t_50134e24;
LAB_50035a9d:
      sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x240) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lforearm_lbicep_t_50134dcc;
      goto LAB_50035b3f;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearm_t_b_50134e14);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_lforearm_t_b_50134e04;
      goto LAB_50035a9d;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearm_t_c_50134df4);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_lforearm_t_c_50134de4;
      goto LAB_50035a9d;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbossforearm_50134dbc);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbossforearm_50134dac);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x240) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lforearm_lbicep_boss_50134d90;
      goto LAB_50035b3f;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_lforearm_b_b_50134e7c;
LAB_5003597e:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x240) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lforearm_lbicep_b_50134e44;
LAB_50035b3f:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x248) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearm_b_b_50134d80);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearm_b_t_50134d60);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_rforearm_b_t_50134d50;
      goto LAB_50035bf3;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearm_t_t_50134d28);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_rforearm_t_t_50134d18;
LAB_50035d12:
      sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x210) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rforearm_rbicep_t_50134cc0;
      goto LAB_50035db4;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearm_t_b_50134d08);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_rforearm_t_b_50134cf8;
      goto LAB_50035d12;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearm_t_c_50134ce8);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_rforearm_t_c_50134cd8;
      goto LAB_50035d12;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbossforearm_50134cb0);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbossforearm_50134ca0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x210) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rforearm_rbicep_boss_50134c84;
      goto LAB_50035db4;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_rforearm_b_b_50134d70;
LAB_50035bf3:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x210) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rforearm_rbicep_b_50134d38;
LAB_50035db4:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x218) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__coathips_50134158);
  sVar2 = (short)uVar6;
  if ((sVar2 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__tighthips_50134c78);
    sVar2 = (short)uVar6;
    if ((sVar2 == 0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bulkyhips_50134c04);
      sVar2 = (short)uVar6;
      if ((sVar2 == 0) ||
         (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        uVar6 = (**(code **)(*piVar5 + 0x1c))(s__bosships_50134b88);
        sVar2 = (short)uVar6;
        if ((sVar2 == 0) ||
           (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0'))
        goto LAB_50036389;
        *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x2d2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosships_fgut_50134b74);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bosships_bgut_50134b60);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_boss_50134b48);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x156) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_boss_50134b48);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x186) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_boss_50134b30);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x306) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_boss_50134b30);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x336) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_lthigh_boss_50134b18);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x366) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pcVar10 = s__Cap_hips_lthigh_boss_50134b18;
      }
      else {
        *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x2d2) = sVar2;
        *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkyhips_fgut_50134bf0);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_bulkyhips_bgut_50134bdc);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_bulky_50134bc4);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x156) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_bulky_50134bc4);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x186) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_bulky_50134bac);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x306) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_bulky_50134bac);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x336) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_lthigh_bulky_50134b94);
        if (sVar2 != 0) {
          *(short *)(*(int *)((int)this + 100) + 0x366) = sVar2;
        }
        piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
        pcVar10 = s__Cap_hips_lthigh_bulky_50134b94;
      }
    }
    else {
      *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x2d2) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tighthips_f_50134c68);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_tighthips_b_50134c58);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_tight_50134c40);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x156) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_tight_50134c40);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x186) = sVar2;
      }
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
      pcVar10 = s__Cap_hips_lthigh_tight_50134c10;
    }
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x396) = sVar2;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x2d2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_lfthigh_501340e0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x480) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_lbthigh_501340f4);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x4b0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_rfthigh_50134108);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_rbthigh_5013411c);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
    }
  }
LAB_50036389:
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rtightthigh_50134b08);
  sVar2 = (short)uVar6;
  if ((sVar2 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbulkythigh_50134aa0);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x302) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x332) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbulkythigh_f_50134a8c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x300) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbulkythigh_b_50134a78);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x330) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_rcalf_bulky_50134a60);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_bulky_50134a48);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x308) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rthigh_hips_bulky_50134a48;
      goto LAB_5003669f;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbossthigh_50134a3c);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x302) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x332) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbossthigh_f_50134a2c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x300) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbossthigh_b_50134a1c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x330) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_rcalf_boss_50134a04);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_boss_501349ec);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x308) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rthigh_hips_boss_501349ec;
      goto LAB_5003669f;
    }
  }
  else {
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
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_tight_50134ab0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x308) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rthigh_hips_tight_50134ab0;
LAB_5003669f:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x338) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__ltightthigh_501349dc);
  sVar2 = (short)uVar6;
  if ((sVar2 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbulkythigh_50134974);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x362) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x392) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbulkythigh_f_50134960);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x360) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbulkythigh_b_5013494c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x390) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_lcalf_bulky_50134934);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_bulky_5013491c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x368) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lthigh_hips_bulky_5013491c;
      goto LAB_500369cb;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbossthigh_50134910);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x362) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x392) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbossthigh_f_50134900);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x360) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbossthigh_b_501348f0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x390) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_lcalf_boss_501348d8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_boss_501348c0);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x368) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lthigh_hips_boss_501348c0;
      goto LAB_500369cb;
    }
  }
  else {
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
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_tight_50134984);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x368) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lthigh_hips_tight_50134984;
LAB_500369cb:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x398) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__ltightcalf_501348b4);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lcalf_t_b_50134898);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_lcalf_t_b_50134888;
      goto LAB_50036bca;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbulkycalf_5013487c);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbulkycalf_5013486c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lcalf_lthigh_bulky_50134854;
      goto LAB_50036bf3;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbosscalf_50134848);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbosscalf_50134838);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lcalf_lthigh_boss_50134820;
      goto LAB_50036bf3;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lcalfcuff_50133f0c);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_lcalfcuff_50133efc;
      goto LAB_50036bca;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_ltightcalf_501348a4;
LAB_50036bca:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3f0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lcalf_lthigh_tight_50134808;
LAB_50036bf3:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3f8) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rtightcalf_501347fc);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rcalf_t_b_501347e0);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_rcalf_t_b_501347d0;
      goto LAB_50036df2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbulkycalf_501347c4);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbulkycalf_501347b4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rcalf_rthigh_bulky_5013479c;
      goto LAB_50036e1b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbosscalf_50134790);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbosscalf_50134780);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rcalf_rthigh_boss_50134768;
      goto LAB_50036e1b;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rcalfcuff_50133eb0);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_rcalfcuff_50133ea0;
      goto LAB_50036df2;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_rtightcalf_501347ec;
LAB_50036df2:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3c0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rcalf_rthigh_tight_50134750;
LAB_50036e1b:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3c8) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbootfoot_50134744);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lshoefoot_50134738);
    if (((short)uVar6 == 0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0'))
    goto LAB_50036e9d;
  }
  *(short *)(*(int *)((int)this + 100) + 0x452) = (short)uVar6;
LAB_50036e9d:
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbootfoot_5013472c);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rshoefoot_50134720);
    if ((short)uVar6 == 0) {
      return;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 == '\0') {
      return;
    }
  }
  *(short *)(*(int *)((int)this + 100) + 0x422) = (short)uVar6;
  return;
}

