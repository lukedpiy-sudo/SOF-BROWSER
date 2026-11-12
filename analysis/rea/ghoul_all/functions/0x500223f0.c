// rea decompile_all
// name: FUN_500223f0
// address: 0x500223f0
// body: available
// range: 0x500223f0-0x50022569 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall
FUN_500223f0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            char *param_5,uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_EBX;
  undefined4 uVar5;
  uint uVar6;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x18))(4);
  }
  uVar1 = (**(code **)(*(int *)this + 0xb4))(param_1);
  switch(uVar1) {
  case 1:
    uVar1 = 0x20;
    break;
  default:
    uVar1 = 0;
    break;
  case 3:
  case 4:
    uVar1 = 1;
    break;
  case 5:
    uVar1 = 0x40;
    break;
  case 6:
  case 0xc:
  case 0x12:
    uVar1 = 0x10;
    break;
  case 7:
    uVar1 = 4;
    break;
  case 9:
  case 0xb:
  case 0x10:
  case 0x11:
  case 0x1d:
    uVar1 = 8;
    break;
  case 0xe:
    uVar1 = 2;
  }
  if ((param_5 != (char *)0x0) &&
     (iVar2 = (**(code **)(*(int *)this + 0x158))(param_1,param_5,param_6), iVar2 != 0)) {
    return param_5;
  }
  pcVar3 = (char *)(**(code **)(*(int *)this + 0x17c))(param_1,param_6);
  if ((pcVar3 == (char *)0x0) &&
     (iVar2 = param_1, uVar5 = param_2, uVar6 = param_6,
     pcVar3 = (char *)(**(code **)(*(int *)this + 0x1bc))(param_1,unaff_EBX,uVar1,param_1,param_2),
     pcVar3 == (char *)0x0)) {
    if (((uVar6 & 2) != 0) &&
       (iVar4 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_jstraitup_up_l_2_5013b4a0,param_6)
       , iVar4 != 0)) {
      return s_std_jstraitup_up_l_2_5013b4a0;
    }
    iVar4 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_jstraitup_up_a_a_5013b868,param_6);
    if (iVar4 != 0) {
      return s_std_jstraitup_up_a_a_5013b868;
    }
    iVar4 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_jupto_n_a_a_50135e58,param_6);
    if (iVar4 != 0) {
      return s_std_jupto_n_a_a_50135e58;
    }
    pcVar3 = (char *)(**(code **)(*(int *)this + 0x1c))
                               (param_1,iVar2,unaff_EBX,uVar1,param_2,uVar5,param_6);
  }
  return pcVar3;
}

