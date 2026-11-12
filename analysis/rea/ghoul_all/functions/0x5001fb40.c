// rea decompile_all
// name: FUN_5001fb40
// address: 0x5001fb40
// body: available
// range: 0x5001fb40-0x5001fd3a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_5001fb40(void *this,float *param_1,float *param_2,float *param_3)

{
  bool bVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 in_stack_00000024;
  
  uVar3 = (**(code **)(*(int *)this + 0xb4))(param_1);
  switch(uVar3) {
  case 1:
    iVar4 = 0;
    bVar2 = false;
    bVar1 = false;
    break;
  default:
    iVar4 = 0;
    bVar2 = false;
    bVar1 = false;
    break;
  case 3:
  case 4:
    iVar4 = 0;
    bVar2 = false;
    bVar1 = false;
    break;
  case 5:
    iVar4 = 0;
    bVar2 = false;
    bVar1 = false;
    break;
  case 6:
  case 0xc:
  case 0x12:
    iVar4 = 0x10;
    bVar2 = false;
    bVar1 = false;
    break;
  case 7:
    iVar4 = 0;
    bVar2 = false;
    bVar1 = true;
    break;
  case 9:
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x1d:
    iVar4 = 8;
    bVar2 = false;
    bVar1 = false;
    break;
  case 0xe:
    iVar4 = 0;
    bVar2 = true;
    bVar1 = false;
  }
  if ((int *)param_1[0x59] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x59] + 0x18))(4);
  }
  if (ABS(*param_1 * *param_2 + param_2[2] * param_1[2] + param_2[1] * param_1[1]) < 0.8) {
    if (0.0 <= *param_1 * *param_3 + param_3[2] * param_1[2] + param_3[1] * param_1[1]) {
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_waimstraf_lt_ms_2_50139030,in_stack_00000024), iVar4 != 0
         )) {
        return s_std_waimstraf_lt_ms_2_50139030;
      }
      if ((bVar1) &&
         (iVar4 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_waimstraf_lt_r_2_50139088,in_stack_00000024), iVar4 != 0)
         ) {
        return s_std_waimstraf_lt_r_2_50139088;
      }
      if ((bVar2) &&
         (iVar4 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_waimstraf_lt_l_2_50137718,in_stack_00000024), iVar4 != 0)
         ) {
        return s_std_waimstraf_lt_l_2_50137718;
      }
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_waimstraf_lt_p_2_501390e0,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_waimstraf_lt_p_2_501390e0;
      }
    }
    else {
      if ((iVar4 != 0) &&
         (iVar4 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_waimstraf_rt_ms_2_50139138,in_stack_00000024), iVar4 != 0
         )) {
        return s_std_waimstraf_rt_ms_2_50139138;
      }
      if ((bVar1) &&
         (iVar4 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_waimstraf_rt_r_2_50139190,in_stack_00000024), iVar4 != 0)
         ) {
        return s_std_waimstraf_rt_r_2_50139190;
      }
      if ((bVar2) &&
         (iVar4 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_waimstraf_rt_l_2_50137770,in_stack_00000024), iVar4 != 0)
         ) {
        return s_std_waimstraf_rt_l_2_50137770;
      }
      iVar4 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_std_waimstraf_rt_p_2_501391e8,in_stack_00000024);
      if (iVar4 != 0) {
        return s_std_waimstraf_rt_p_2_501391e8;
      }
    }
  }
  return (char *)0x0;
}

