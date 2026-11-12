// rea decompile_all
// name: FUN_500f0fe0
// address: 0x500f0fe0
// body: available
// range: 0x500f0fe0-0x500f1458 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500f0fe0(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  char *pcVar9;
  
  if ((((param_1 == 0) || (*(int *)(param_1 + 0x74) == 0)) ||
      (piVar1 = *(int **)(*(int *)(param_1 + 0x74) + 0x354), piVar1 == (int *)0x0)) ||
     (iVar6 = piVar1[1], iVar6 == 0)) {
    return 0;
  }
  iVar5 = *(int *)(iVar6 + 0x4c);
  iVar4 = (**(code **)(*piVar1 + 0xb4))(param_1);
  if (((double)*(int *)(param_1 + 0x308) <= 0.0) ||
     (-5.0 <= *(float *)(*(int *)(param_1 + 0x74) + 0x3c))) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  if ((0.0 <= (double)*(int *)(param_1 + 0x308)) ||
     (bVar3 = true, *(float *)(*(int *)(param_1 + 0x74) + 0x3c) <= 5.0)) {
    bVar3 = false;
  }
  bVar7 = *(int *)(iVar6 + 0x54) != 8;
  bVar8 = *(int *)(iVar6 + 0x54) != 7;
  if (iVar5 == 0) {
    if ((bVar2) && (param_3 == 0)) {
      if (bVar7) {
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
        if (iVar4 == 0xe) {
          iVar6 = (**(code **)(iVar6 + 0x1c))
                            (param_1,param_1,param_2,2,0,s_std_hleanltsht_to_l_2_5013d808);
          return iVar6;
        }
        iVar6 = (**(code **)(iVar6 + 0x1c))
                          (param_1,param_1,param_2,2,0,s_std_hleanltsht_to_a_n_5013d7b0,0);
        return iVar6;
      }
      iVar5 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x354) + 0x6c))();
      if ((iVar5 == 0) && ((*(uint *)(iVar6 + 0x48) & 0x8000000) == 0)) {
        return iVar6;
      }
      if (iVar4 == 0xe) {
        pcVar9 = s_std_hleanltsht_mid_l_2_5013d8b8;
        param_3 = 0;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
      else {
        pcVar9 = s_std_hleanltsht_mid_a_n_5013d860;
        param_3 = 0;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
    }
    else if ((bVar3) && (param_3 == 0)) {
      iVar5 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (bVar8) {
        if (iVar4 == 0xe) {
          iVar6 = (**(code **)(iVar5 + 0x1c))
                            (param_1,param_1,param_2,2,0,s_std_hleanrtsht_to_l_2_5013da18);
          return iVar6;
        }
        iVar6 = (**(code **)(iVar5 + 0x1c))
                          (param_1,param_1,param_2,2,0,s_std_hleanrtsht_to_a_n_5013d9c0,0);
        return iVar6;
      }
      iVar5 = (**(code **)(iVar5 + 0x6c))();
      if ((iVar5 == 0) && ((*(uint *)(iVar6 + 0x48) & 0x8000000) == 0)) {
        return iVar6;
      }
      if (iVar4 == 0xe) {
        pcVar9 = s_std_hleanrtsht_mid_l_2_5013dac8;
        param_3 = 0;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
      else {
        pcVar9 = s_std_hleanrtsht_mid_a_n_5013da70;
        param_3 = 0;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
    }
    else if (bVar7) {
      if (bVar8) {
        return 0;
      }
      iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (iVar4 == 0xe) {
        pcVar9 = s_std_hleanrtsht_frm_l_2_5013db78;
      }
      else {
        pcVar9 = s_std_hleanrtsht_frm_a_n_5013db20;
      }
    }
    else {
      iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (iVar4 == 0xe) {
        pcVar9 = s_std_hleanltsht_frm_l_2_5013d968;
      }
      else {
        pcVar9 = s_std_hleanltsht_frm_a_n_5013d910;
      }
    }
  }
  else {
    if (iVar5 != 1) {
      return 0;
    }
    if ((bVar2) && (param_3 == 1)) {
      iVar5 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (bVar7) {
        if (iVar4 == 0xe) {
          iVar6 = (**(code **)(iVar5 + 0x1c))
                            (param_1,param_1,param_2,2,1,s_cch_hleanltsht_to_l_2_5013dc28);
          return iVar6;
        }
        iVar6 = (**(code **)(iVar5 + 0x1c))
                          (param_1,param_1,param_2,2,1,s_cch_hleanltsht_to_a_n_5013dbd0,0);
        return iVar6;
      }
      iVar5 = (**(code **)(iVar5 + 0x6c))();
      if ((iVar5 == 0) && ((*(uint *)(iVar6 + 0x48) & 0x8000000) == 0)) {
        return iVar6;
      }
      if (iVar4 == 0xe) {
        pcVar9 = s_cch_hleanltsht_mid_l_2_5013dcd8;
        param_3 = 1;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
      else {
        pcVar9 = s_cch_hleanltsht_mid_a_n_5013dc80;
        param_3 = 1;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
    }
    else if ((bVar3) && (param_3 == 1)) {
      iVar5 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (bVar8) {
        if (iVar4 == 0xe) {
          iVar6 = (**(code **)(iVar5 + 0x1c))
                            (param_1,param_1,param_2,2,1,s_cch_hleanrtsht_to_l_2_5013de38);
          return iVar6;
        }
        iVar6 = (**(code **)(iVar5 + 0x1c))
                          (param_1,param_1,param_2,2,1,s_cch_hleanrtsht_to_a_n_5013dde0,0);
        return iVar6;
      }
      iVar5 = (**(code **)(iVar5 + 0x6c))();
      if ((iVar5 == 0) && ((*(uint *)(iVar6 + 0x48) & 0x8000000) == 0)) {
        return iVar6;
      }
      if (iVar4 == 0xe) {
        pcVar9 = s_cch_hleanrtsht_mid_l_2_5013dee8;
        param_3 = 1;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
      else {
        pcVar9 = s_cch_hleanrtsht_mid_a_n_5013de90;
        param_3 = 1;
        iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      }
    }
    else if (bVar7) {
      if (bVar8) {
        return 0;
      }
      iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (iVar4 == 0xe) {
        pcVar9 = s_cch_hleanrtsht_frm_l_2_5013df98;
      }
      else {
        pcVar9 = s_cch_hleanrtsht_frm_a_n_5013df40;
      }
    }
    else {
      iVar6 = **(int **)(*(int *)(param_1 + 0x74) + 0x354);
      if (iVar4 == 0xe) {
        pcVar9 = s_cch_hleanltsht_frm_l_2_5013dd88;
      }
      else {
        pcVar9 = s_cch_hleanltsht_frm_a_n_5013dd30;
      }
    }
  }
  iVar6 = (**(code **)(iVar6 + 0x1c))(param_1,param_1,param_2,2,param_3,pcVar9,0);
  return iVar6;
}

