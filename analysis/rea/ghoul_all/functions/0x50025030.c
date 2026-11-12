// rea decompile_all
// name: FUN_50025030
// address: 0x50025030
// body: available
// range: 0x50025030-0x50025408 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50025030(void *this,int param_1)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)0x0;
  iVar2 = *(int *)(*(int *)(*(int *)((int)this + 0x44) * 0x30 + 0x20 + *(int *)((int)this + 100)) +
                  8);
  if (iVar2 == 5) {
    iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sthroat_2side_n_n_50138378);
    if (iVar2 == 0) {
      (*DAT_5015ca24)(s_eek__That_hurt_my_neck__50133764);
      return (char *)0x0;
    }
    piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    sVar1 = (**(code **)(*piVar3 + 0x1c))(s_sbolt_mouth_5012f8c8);
    if (sVar1 != 0) {
      FUN_50084500(param_1,sVar1);
    }
    FUN_5001e5a0(this,s_Choke_50133780,param_1);
    *(undefined4 *)((int)this + 0x1b8) = 1;
    pcVar4 = s_std_sthroat_2side_n_n_50138378;
    if (DAT_5015d8d5 == '\0') {
      DAT_5015d258 = DAT_5015d258 + 1;
      return s_std_sthroat_2side_n_n_50138378;
    }
  }
  else if (iVar2 == 6) {
    iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_shead_2frnt_n_n_501364e0);
    if (iVar2 != 0) {
      *(undefined4 *)((int)this + 0x1b8) = 1;
      pcVar4 = s_std_shead_2frnt_n_n_501364e0;
      if (DAT_5015d8d5 == '\0') {
        DAT_5015d260 = DAT_5015d260 + 1;
        return s_std_shead_2frnt_n_n_501364e0;
      }
    }
  }
  else {
    if (iVar2 == 0xf) {
      iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sleglt_2bk_n_n_501365e8);
      if (iVar2 != 0) {
        FUN_5001e5a0(this,s_Scream_50133650,param_1);
        return s_std_sleglt_2bk_n_n_501365e8;
      }
      (*DAT_5015ca24)(s_eek__That_hurt_my_left_foot__50133744);
      return (char *)0x0;
    }
    if (iVar2 == 0x12) {
      iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_slegrt_2bk_n_n_50136590);
      if (iVar2 != 0) {
        FUN_5001e5a0(this,s_Scream_50133650,param_1);
        return s_std_slegrt_2bk_n_n_50136590;
      }
      (*DAT_5015ca24)(s_eek__That_hurt_my_right_foot__50133724);
      return (char *)0x0;
    }
    if (iVar2 == 0x13) {
      iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sgroin_2side_n_n_50138320);
      if (iVar2 == 0) {
        (*DAT_5015ca24)(s_eek__That_hurt_my_groin__50133700);
        return (char *)0x0;
      }
      FUN_5001e5a0(this,s_Crotch_5013371c,param_1);
      pcVar4 = s_std_sgroin_2side_n_n_50138320;
      if (DAT_5015d8d5 == '\0') {
        DAT_5015d25c = DAT_5015d25c + 1;
        return s_std_sgroin_2side_n_n_50138320;
      }
    }
    else if ((iVar2 == 0x10) || (iVar2 == 0x11)) {
      iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_slegrt_2bk_n_n_50136590);
      if (iVar2 != 0) {
        FUN_5001e5a0(this,s_Scream_50133650,param_1);
        return s_std_slegrt_2bk_n_n_50136590;
      }
      (*DAT_5015ca24)(s_Couldn_t_find_right_leg_death__50133658);
    }
    else {
      if ((iVar2 == 0xd) || (iVar2 == 0xe)) {
        iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sleglt_2bk_n_n_501365e8);
        if (iVar2 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sleglt_2bk_n_n_501365e8;
        }
        (*DAT_5015ca24)(s_Couldn_t_find_left_leg_death__50133678);
        return (char *)0x0;
      }
      if ((iVar2 == 1) || (iVar2 == 4)) {
        iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sshoulder_rt_n_n_50136640);
        if (iVar2 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sshoulder_rt_n_n_50136640;
        }
        (*DAT_5015ca24)(s_Couldn_t_find_right_shoulder_dea_50133698);
        return (char *)0x0;
      }
      if ((iVar2 == 2) || (iVar2 == 3)) {
        iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sshoulder_lt_n_n_50136698);
        if (iVar2 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sshoulder_lt_n_n_50136698;
        }
        (*DAT_5015ca24)(s_Couldn_t_find_left_shoulder_deat_501336c0);
        return (char *)0x0;
      }
      if (*(int *)((int)this + 0x44) == 0xd) {
        iVar2 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sgut_2side_n_n_5013a108);
        if (iVar2 != 0) {
          FUN_5001e5a0(this,s_Scream_50133650,param_1);
          return s_std_sgut_2side_n_n_5013a108;
        }
        (*DAT_5015ca24)(s_Couldn_t_find_gut_death__501336e4);
        return (char *)0x0;
      }
    }
  }
  return pcVar4;
}

