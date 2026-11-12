// rea decompile_all
// name: FUN_500b2ec0
// address: 0x500b2ec0
// body: available
// range: 0x500b2ec0-0x500b2fcc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b2ec0(int *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  short sVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  
  if (param_1 == (int *)0x0) {
    FUN_500adb20((byte *)s_ERROR__trying_to_set_skin__s_on_N_5014d234);
    return;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x88))();
  uVar3 = (**(code **)(*piVar2 + 0x40))(param_4);
  if ((short)uVar3 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x88))();
    uVar4 = (**(code **)(*piVar2 + 0x50))(uVar3,param_4,0);
    if ((short)uVar4 != 0) {
      (**(code **)(*param_1 + 0x2c))(uVar3,uVar4,0);
      return;
    }
  }
  iVar5 = (**(code **)(*param_1 + 0x88))();
  if (iVar5 != 0) {
    piVar2 = (int *)(**(code **)(*param_1 + 0x88))();
    sVar1 = (**(code **)(*piVar2 + 0x40))(param_4);
    if (sVar1 != 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x88))();
      (**(code **)(*param_1 + 0x88))();
      uVar3 = (**(code **)(*piVar2 + 0x40))(param_4,param_4,0);
      sVar1 = (**(code **)(param_3 + 0x50))(uVar3);
      if (sVar1 == 0) {
        FUN_500adb20((byte *)s_WARNING__Can_t_find_skin__s_5014d214);
        return;
      }
      FUN_500adb20((byte *)s_WARNING__unknown_error_in_SetSki_5014d1dc);
      return;
    }
  }
  FUN_500adb20((byte *)s_WARNING__Can_t_find_material__s_5014d1b8);
  return;
}

