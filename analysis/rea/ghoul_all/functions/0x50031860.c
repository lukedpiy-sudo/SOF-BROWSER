// rea decompile_all
// name: FUN_50031860
// address: 0x50031860
// body: available
// range: 0x50031860-0x500333f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50031860(void *this,int param_1)

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
      *(undefined **)(iVar4 + 0x20 + *(int *)((int)this + 100)) = &DAT_50131018;
      *(undefined4 *)(iVar4 + 0x18 + *(int *)((int)this + 100)) = *(undefined4 *)((int)this + 0x60);
      iVar7 = *(int *)((int)this + 100) + iVar4;
      iVar8 = iVar8 + 1;
      iVar4 = iVar4 + 0x30;
      *(undefined4 *)(iVar7 + 0x1c) = *(undefined4 *)(iVar7 + 0x18);
    } while (iVar8 < *(int *)((int)this + 0x60));
  }
  (**(code **)(*(int *)this + 0x130))(param_1);
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_head_chest_50134710);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 8) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_head_chest_50134710);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x38) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rbicep_chest_501346fc);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x1b8) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lbicep_chest_501346e8);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x1e8) = sVar2;
  }
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
  *(undefined **)(*(int *)((int)this + 100) + 0x20) = &DAT_50130838;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x50) =
       *(undefined4 *)(*(int *)((int)this + 100) + 0x20);
  *(undefined **)(*(int *)((int)this + 100) + 0x1a0) = &DAT_50130658;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x170) =
       *(undefined4 *)(*(int *)((int)this + 100) + 0x1a0);
  *(undefined **)(*(int *)((int)this + 100) + 0xb0) = &DAT_50130688;
  *(undefined **)(*(int *)((int)this + 100) + 0xe0) = &DAT_501306b8;
  *(undefined **)(*(int *)((int)this + 100) + 0x110) = &DAT_501306e8;
  *(undefined **)(*(int *)((int)this + 100) + 0x140) = &DAT_501307a8;
  *(undefined **)(*(int *)((int)this + 100) + 0x230) = &DAT_50130bc8;
  *(undefined **)(*(int *)((int)this + 100) + 0x260) = &DAT_50130a78;
  *(undefined **)(*(int *)((int)this + 100) + 0x410) = &DAT_50130ef8;
  *(undefined **)(*(int *)((int)this + 100) + 0x3e0) = &DAT_50130d78;
  *(undefined **)(*(int *)((int)this + 100) + 0x1d0) = &DAT_50130b98;
  *(undefined **)(*(int *)((int)this + 100) + 0x200) = &DAT_50130a48;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x18) = 1;
  *(undefined4 *)(*(int *)((int)this + 100) + 0x48) = 0;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_50134684);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x9a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_50134684);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xfa) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_50134684);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xca) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_50134684);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x12a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_50134684);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x15a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_hips_50134684);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x18a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_head_chest_5013466c);
  *(undefined2 *)(*(int *)((int)this + 100) + 10) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_head_chest_5013466c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rbicep_chest_50134654);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ba) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lbicep_chest_5013463c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ea) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lforearm_lbicep_50134620);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x24a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rforearm_rbicep_50134604);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x21a) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_chest_501345ec);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x15c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_chest_501345ec);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x18c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_head_501345d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0xc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_head_501345d4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x3c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_rbicep_501345bc);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1bc) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_chest_lbicep_501345a4);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x1ec) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lbicep_lforearm_50134588);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x24c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rbicep_rforearm_5013456c);
  *(undefined2 *)(*(int *)((int)this + 100) + 0x21c) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lbicep_lforearm_50134554);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x246) = sVar2;
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rbicep_rforearm_5013453c);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x216) = sVar2;
  }
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
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__headbald_50133dbc);
  sVar2 = (short)uVar6;
  if ((sVar2 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__headcrew_5013446c);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 2) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_headcrew_f_5013445c);
      if (sVar2 != 0) {
        **(short **)((int)this + 100) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_headcrew_b_5013444c;
      goto LAB_50032130;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__headbeard_50133938);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 2) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_headbeard_f_5013443c);
      if (sVar2 != 0) {
        **(short **)((int)this + 100) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_headbeard_b_5013442c;
      goto LAB_50032130;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__headhelmet_5013392c);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x32) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 2) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_headhelmet_f_5013391c);
      if (sVar2 != 0) {
        **(short **)((int)this + 100) = sVar2;
      }
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x32) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 2) = sVar2;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_headbald_f_50133dac);
    if (sVar2 != 0) {
      **(short **)((int)this + 100) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_headbald_b_50133d9c;
LAB_50032130:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x30) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__chest_50134424);
  sVar2 = (short)uVar6;
  if ((sVar2 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__coatchest_50134358);
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
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coatchest_head_50134344);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coatchest_head_50134344);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x36) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coatchest_rbicep_5013432c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coatchest_lbicep_50134314);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coathips_coatchest_501342fc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x156) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coathips_coatchest_501342fc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x186) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coatchest_coathips_501342e4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_coatchest_coathips_501342e4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coatchest_rfshldr_501342cc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coatchest_lfshldr_501342b4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coatchest_rbshldr_5013429c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coatchest_lbshldr_50134284);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coatchest_f_50134274);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s_gz_coatchest_b_50134264;
      goto LAB_500327db;
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
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_head_50134414);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_head_50134414);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x36) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_rbicep_50134400);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1b6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_lbicep_501343ec);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1e6) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_501343dc);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x156) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_chest_501343dc);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x186) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_501343cc);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x158) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_chest_hips_501343cc);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x188) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_rfshldr_501343b8);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x90) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_lfshldr_501343a4);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0xf0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_rbshldr_50134390);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0xc0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_lbshldr_5013437c);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x120) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_chest_f_50134370);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x150) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s_gz_chest_b_50134364;
LAB_500327db:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x180) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rbicep_5013425c);
  if (((short)uVar6 != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
    *(short *)(*(int *)((int)this + 100) + 0x1b2) = (short)uVar6;
    *(undefined4 *)(*(int *)((int)this + 100) + 0x1c8) = 0xb;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbicep_50134250);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1b0) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lbicep_50134248);
  if (((short)uVar6 != 0) &&
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
    *(short *)(*(int *)((int)this + 100) + 0x1e2) = (short)uVar6;
    *(undefined4 *)(*(int *)((int)this + 100) + 0x1f8) = 0xc;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbicep_5013423c);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x1e0) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearm_50134230);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lforearmcuff_501341fc);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lforearmcuff_501341ec);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x240) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_lforearmcuff_lbicep_501341d0;
      goto LAB_500329c3;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x242) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lforearm_50134224);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x240) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lforearm_lbicep_5013420c;
LAB_500329c3:
    sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x248) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearm_501341c4);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rforearmcuff_50134190);
    if (((short)uVar6 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rforearmcuff_50134180);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x210) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      pcVar10 = s__Cap_rforearmcuff_rbicep_50134164;
      goto LAB_50032ac9;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x212) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rforearm_501341b8);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x210) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rforearm_rbicep_501341a0;
LAB_50032ac9:
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
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__hips_501340d8);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_hips_fgut_501340c8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_hips_bgut_501340b8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_rthigh_501340a0);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x30c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_rthigh_501340a0);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x33c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_lthigh_50134088);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x36c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_hips_lthigh_50134088);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x39c) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_hips_50134070);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x30a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_hips_50134070);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x33a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_hips_50134058);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x36a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_hips_50134058);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x39a) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_50134044);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x306) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_rthigh_50134044);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x336) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_lthigh_50134030);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x366) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_hips_lthigh_50134030);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x396) = sVar2;
      }
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rthigh_50134028);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x302) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x332) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rfthigh_5013401c);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x300) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rbthigh_50134010);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x330) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_rcalf_50133ffc);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3c6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rthigh_rcalf_50133fe4);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3cc) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_rcalf_rthigh_50133fcc);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3ca) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_50133fb8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x308) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_rthigh_hips_50133fb8);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x338) = sVar2;
      }
      *(undefined4 *)(*(int *)((int)this + 100) + 0x318) = 0x11;
      *(undefined4 *)(*(int *)((int)this + 100) + 0x348) = 0x10;
      *(undefined **)(*(int *)((int)this + 100) + 800) = &DAT_50130ce8;
      *(undefined **)(*(int *)((int)this + 100) + 0x350) = &DAT_50130ce8;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lthigh_50133fb0);
    sVar2 = (short)uVar6;
    if ((sVar2 != 0) &&
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 != '\0')) {
      *(short *)(*(int *)((int)this + 100) + 0x362) = sVar2;
      *(short *)(*(int *)((int)this + 100) + 0x392) = sVar2;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lfthigh_50133fa4);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x360) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lbthigh_50133f98);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x390) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_lcalf_50133f84);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x3f6) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lthigh_lcalf_50133f6c);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3fc) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar5 + 0x1c))(s_gbolt_Cap_lcalf_lthigh_50133f54);
      *(undefined2 *)(*(int *)((int)this + 100) + 0x3fa) = uVar3;
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_50133f40);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x368) = sVar2;
      }
      piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      sVar2 = (**(code **)(*piVar5 + 0x1c))(s__Cap_lthigh_hips_50133f40);
      if (sVar2 != 0) {
        *(short *)(*(int *)((int)this + 100) + 0x398) = sVar2;
      }
      *(undefined4 *)(*(int *)((int)this + 100) + 0x378) = 0x13;
      *(undefined4 *)(*(int *)((int)this + 100) + 0x3a8) = 0x12;
      *(undefined **)(*(int *)((int)this + 100) + 0x380) = &DAT_50130e68;
      *(undefined **)(*(int *)((int)this + 100) + 0x3b0) = &DAT_50130e68;
    }
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x392) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x362) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x332) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x302) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x2a2) = sVar2;
    *(short *)(*(int *)((int)this + 100) + 0x272) = sVar2;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_fgut_50134144);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x270) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_bgut_50134130);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x2a0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_rbthigh_5013411c);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x330) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_rfthigh_50134108);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x300) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_lbthigh_501340f4);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x390) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_coathips_lfthigh_501340e0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x360) = sVar2;
    }
  }
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lcalf_50133f38);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__lcalfcuff_50133f0c);
    if (((short)uVar6 == 0) ||
       (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0'))
    goto LAB_500332e2;
    *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lcalfcuff_50133efc);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3f0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lcalfcuff_lthigh_50133ee4;
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x3f2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_lcalf_50133f2c);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3f0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_lcalf_lthigh_50133f18;
  }
  sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x3f8) = sVar2;
  }
LAB_500332e2:
  piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rcalf_50133edc);
  if (((short)uVar6 == 0) ||
     (cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6), cVar1 == '\0')) {
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar6 = (**(code **)(*piVar5 + 0x1c))(s__rcalfcuff_50133eb0);
    if ((short)uVar6 == 0) {
      return;
    }
    cVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x24))(uVar6);
    if (cVar1 == '\0') {
      return;
    }
    *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rcalfcuff_50133ea0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3c0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rcalfcuff_rthigh_50133e88;
  }
  else {
    *(short *)(*(int *)((int)this + 100) + 0x3c2) = (short)uVar6;
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar2 = (**(code **)(*piVar5 + 0x1c))(s_gz_rcalf_50133ed0);
    if (sVar2 != 0) {
      *(short *)(*(int *)((int)this + 100) + 0x3c0) = sVar2;
    }
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar10 = s__Cap_rcalf_rthigh_50133ebc;
  }
  sVar2 = (**(code **)(*piVar5 + 0x1c))(pcVar10);
  if (sVar2 != 0) {
    *(short *)(*(int *)((int)this + 100) + 0x3c8) = sVar2;
  }
  return;
}

