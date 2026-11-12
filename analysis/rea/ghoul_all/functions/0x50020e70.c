// rea decompile_all
// name: FUN_50020e70
// address: 0x50020e70
// body: available
// range: 0x50020e70-0x5002107c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall
FUN_50020e70(void *this,int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float10 fVar5;
  int in_stack_00000020;
  undefined4 in_stack_00000024;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x18))(4);
  }
  if (*(char *)(param_1 + 0x1b8) < '\0') {
    return (char *)0x0;
  }
  if (param_4 == 0) {
    fVar1 = 0.0;
    fVar3 = 0.0;
    fVar2 = 0.0;
  }
  else {
    fVar1 = *(float *)(param_4 + 4) - *(float *)(param_1 + 4);
    fVar3 = *(float *)(param_4 + 8) - *(float *)(param_1 + 8);
    fVar2 = *(float *)(param_4 + 0xc) - *(float *)(param_1 + 0xc);
  }
  if (fVar1 * fVar1 + fVar3 * fVar3 + fVar2 * fVar2 <= 65000.0) {
LAB_50020fef:
    if (in_stack_00000020 != -1) {
      if (in_stack_00000020 != 1) goto LAB_5002103b;
LAB_5002101a:
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_xroll_lt_a_a_501380b8,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_xroll_lt_a_a_501380b8;
      }
      goto LAB_5002103b;
    }
  }
  else {
    fVar5 = (float10)(*DAT_5015cb20)(0,0x3f800000);
    if (fVar5 < (float10)0.25) {
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_jbackflip_n_p_n_5013c310,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_jbackflip_n_p_n_5013c310;
      }
    }
    if ((float)fVar5 < 0.25) {
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_xrolltocch_fwd_a_a_5013a9f8,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_xrolltocch_fwd_a_a_5013a9f8;
      }
    }
    if ((float)fVar5 < 0.5) {
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_jdive2prone_n_a_n_50136e80,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_jdive2prone_n_a_n_50136e80;
      }
    }
    if (in_stack_00000020 != -1) {
      if (in_stack_00000020 != 1) goto LAB_50020fef;
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_xroll_lt_a_a_501380b8,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_xroll_lt_a_a_501380b8;
      }
      goto LAB_5002101a;
    }
    iVar4 = (**(code **)(*(int *)this + 0x158))
                      (param_1,s_std_xroll_rt_a_a_50138060,in_stack_00000024);
    if (iVar4 != 0) {
      return s_std_xroll_rt_a_a_50138060;
    }
  }
  iVar4 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_xroll_rt_a_a_50138060,in_stack_00000024)
  ;
  if (iVar4 != 0) {
    return s_std_xroll_rt_a_a_50138060;
  }
LAB_5002103b:
  iVar4 = (**(code **)(*(int *)this + 0x158))
                    (param_1,s_std_jbackflip_n_p_n_5013c310,in_stack_00000024);
  if (iVar4 != 0) {
    return s_std_jbackflip_n_p_n_5013c310;
  }
  iVar4 = (**(code **)(*(int *)this + 0x158))
                    (param_1,s_std_xrolltocch_fwd_a_a_5013a9f8,in_stack_00000024);
  return (char *)(-(uint)(iVar4 != 0) & 0x5013a9f8);
}

