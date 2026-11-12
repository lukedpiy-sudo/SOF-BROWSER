// rea decompile_all
// name: FUN_500189f0
// address: 0x500189f0
// body: available
// range: 0x500189f0-0x50018ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall
FUN_500189f0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
            undefined4 param_9)

{
  int *piVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  
  piVar1 = *(int **)(param_1 + 0x450);
  if (((*(int *)((int)this + 0xc) == 0) &&
      (pcVar6 = *(char **)((int)this + 4), pcVar6 != (char *)0x0)) && (*(int *)(pcVar6 + 0x38) != 0)
     ) {
    return pcVar6;
  }
  if ((*(char **)((int)this + 4) == s_sit_i_n_50141958) &&
     (iVar3 = (**(code **)(*(int *)this + 0x4c))(param_1,s_sit_itostand_n_501419b0), iVar3 != 0)) {
    return s_sit_itostand_n_501419b0;
  }
  pcVar6 = *(char **)((int)this + 4);
  if ((piVar1 == (int *)0x0) || (iVar3 = (**(code **)(*piVar1 + 0x160))(), iVar3 != 0)) {
    iVar3 = *(int *)this;
    uVar5 = (**(code **)(*piVar1 + 0x164))(param_6,param_7,param_8,param_9);
    pcVar6 = (char *)(**(code **)(iVar3 + 0x24))(param_1,param_2,param_3,uVar5);
    return pcVar6;
  }
  if (*(int *)(*(char **)((int)this + 4) + 0x38) != 0) {
    if ((*(char **)((int)this + 4) == s_std_wsniff_n_50141850) &&
       (iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wsniff_frm_50141a60,param_9),
       iVar3 != 0)) {
      return s_std_wsniff_frm_50141a60;
    }
    pcVar2 = *(char **)((int)this + 4);
    if ((((((pcVar2 != (char *)0x0) && (pcVar2 != s_std_wlooklt_to_50141bc0)) &&
          (pcVar2 != s_std_wlooklt_frm_50141b10)) &&
         ((pcVar2 != s_std_wlookrt_to_50141d20 && (pcVar2 != s_std_wlookrt_frm_50141c70)))) &&
        (pcVar2 != s_std_wlookltrt_n_50141c18)) &&
       ((((pcVar2 != s_std_w_n_50141748 && (pcVar2 != s_std_wlooklt_n_50141b68)) &&
         (pcVar2 != s_std_wlookrt_n_50141cc8)) || (uVar4 = FUN_50107636(), (int)uVar4 % 3 != 0)))) {
      *(undefined4 *)((int)this + 0xc) = 0;
      return pcVar6;
    }
    pcVar2 = *(char **)((int)this + 4);
    *(undefined4 *)((int)this + 0x80) = DAT_5015ccdc;
    if ((pcVar2 == s_std_w_n_50141748) || (pcVar2 == s_std_wlookltrt_n_50141c18)) {
      uVar4 = FUN_50107636();
      iVar3 = (int)uVar4 % 3;
      if (iVar3 == 0) {
        iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlooklt_to_50141bc0,param_9);
        if (iVar3 == 0) {
          return pcVar6;
        }
        return s_std_wlooklt_to_50141bc0;
      }
      if (iVar3 == 1) {
        iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlookrt_to_50141d20,param_9);
        if (iVar3 == 0) {
          return pcVar6;
        }
        return s_std_wlookrt_to_50141d20;
      }
      if (iVar3 != 2) {
        return pcVar6;
      }
      iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlookltrt_n_50141c18,param_9);
      if (iVar3 == 0) {
        return pcVar6;
      }
      return s_std_wlookltrt_n_50141c18;
    }
    if (pcVar2 == s_std_wlooklt_n_50141b68) {
      iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlooklt_frm_50141b10,param_9);
      if (iVar3 == 0) {
        return pcVar6;
      }
      return s_std_wlooklt_frm_50141b10;
    }
    if (pcVar2 == s_std_wlookrt_n_50141cc8) {
      iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlookrt_frm_50141c70,param_9);
      if (iVar3 == 0) {
        return pcVar6;
      }
      return s_std_wlookrt_frm_50141c70;
    }
    if ((pcVar2 != s_std_wlooklt_frm_50141b10) && (pcVar2 != s_std_wlookrt_frm_50141c70)) {
      if (pcVar2 == s_std_wlookrt_to_50141d20) {
        iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlookrt_n_50141cc8,param_9);
        if (iVar3 == 0) {
          return pcVar6;
        }
        return s_std_wlookrt_n_50141cc8;
      }
      if (pcVar2 == s_std_wlooklt_to_50141bc0) {
        iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_wlooklt_n_50141b68,param_9);
        if (iVar3 == 0) {
          return pcVar6;
        }
        return s_std_wlooklt_n_50141b68;
      }
      goto LAB_50018a83;
    }
  }
  iVar3 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_w_n_50141748,param_9);
  if (iVar3 == 0) {
    return pcVar6;
  }
LAB_50018a83:
  return s_std_w_n_50141748;
}

