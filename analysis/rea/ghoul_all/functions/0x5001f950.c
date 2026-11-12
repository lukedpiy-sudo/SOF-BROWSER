// rea decompile_all
// name: FUN_5001f950
// address: 0x5001f950
// body: available
// range: 0x5001f950-0x5001faf6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_5001f950(void *this,float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 in_stack_00000024;
  
  uVar2 = (**(code **)(*(int *)this + 0xb4))(param_1);
  switch(uVar2) {
  case 1:
    iVar3 = 0;
    bVar1 = false;
    break;
  default:
    iVar3 = 0;
    bVar1 = false;
    break;
  case 3:
  case 4:
    iVar3 = 0;
    bVar1 = false;
    break;
  case 5:
    iVar3 = 0;
    bVar1 = false;
    break;
  case 6:
  case 0xc:
  case 0x12:
    iVar3 = 0x10;
    bVar1 = false;
    break;
  case 7:
    iVar3 = 4;
    bVar1 = false;
    break;
  case 9:
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x1d:
    iVar3 = 8;
    bVar1 = false;
    break;
  case 0xe:
    iVar3 = 0;
    bVar1 = true;
  }
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 0x18))(4);
  }
  if (ABS(*param_1 * *param_2 + param_2[2] * param_1[2] + param_2[1] * param_1[1]) < 0.8) {
    if (0.0 <= *param_1 * *param_3 + param_3[2] * param_1[2] + param_3[1] * param_1[1]) {
      if ((iVar3 != 0) &&
         (iVar3 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_raimstraf_lt_mrs_2_50137df8,in_stack_00000024),
         iVar3 != 0)) {
        return s_std_raimstraf_lt_mrs_2_50137df8;
      }
      if ((bVar1) &&
         (iVar3 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_raimstraf_lt_l_2_501381c0,in_stack_00000024), iVar3 != 0)
         ) {
        return s_std_raimstraf_lt_l_2_501381c0;
      }
      iVar3 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_raimstraf_lt_p_cbn_50137d48,in_stack_00000024);
      if (iVar3 != 0) {
        return s_std_raimstraf_lt_p_cbn_50137d48;
      }
    }
    else {
      if ((iVar3 != 0) &&
         (iVar3 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_raimstraf_rt_mrs_2_50137e50,in_stack_00000024),
         iVar3 != 0)) {
        return s_std_raimstraf_rt_mrs_2_50137e50;
      }
      if ((bVar1) &&
         (iVar3 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_raimstraf_rt_l_2_5013b290,in_stack_00000024), iVar3 != 0)
         ) {
        return s_std_raimstraf_rt_l_2_5013b290;
      }
      iVar3 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_raimstraf_rt_p_cbn_50137da0,in_stack_00000024);
      if (iVar3 != 0) {
        return s_std_raimstraf_rt_p_cbn_50137da0;
      }
    }
  }
  return (char *)0x0;
}

