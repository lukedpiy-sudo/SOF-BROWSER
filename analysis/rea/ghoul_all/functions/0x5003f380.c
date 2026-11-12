// rea decompile_all
// name: FUN_5003f380
// address: 0x5003f380
// body: available
// range: 0x5003f380-0x5003f494 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5003f380(void *this,int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (0.7 < *(float *)((int)this + 0xa4)) {
LAB_5003f42a:
    piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
    if (piVar2 != (int *)0x0) {
      pcVar4 = s_cch_xcchcower_mid_a_a_50138f80;
      iVar1 = (**(code **)(*piVar2 + 0x1c))
                        (param_2,param_3,param_3,2,1,s_cch_xcchcower_mid_a_a_50138f80,0);
      if ((iVar1 == 0) &&
         (iVar1 = (**(code **)(*piVar2 + 0x1c))
                            (param_2,param_3,param_3,2,1,s_cch_xcchcower2_mid_a_a_50138fd8,0),
         iVar1 == 0)) {
        return;
      }
      (**(code **)(*(int *)this + 0x28))
                (pcVar4,param_2,iVar1,param_3,param_3,*(undefined4 *)((int)this + 0x60),0,0,0,0);
    }
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x18c))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
      iVar1 = (**(code **)(*piVar2 + 0xb4))(param_2);
      if ((iVar1 == 0) && (*(float *)((int)this + 0xa4) != 0.0)) goto LAB_5003f42a;
    }
    iVar1 = *(int *)this;
    uVar3 = (**(code **)(iVar1 + 0x14))
                      (param_1,param_2,param_2 + 4,param_3,0,0,param_3,param_3,
                       *(undefined4 *)((int)this + 0x60),0,0,0,0);
    (**(code **)(iVar1 + 0x28))(param_1,param_2,uVar3);
    if (*(char *)((int)this + 0xa8) != '\0') {
      (**(code **)(*param_1 + 0x1fc))(3);
      return;
    }
  }
  return;
}

