// rea decompile_all
// name: FUN_500713c0
// address: 0x500713c0
// body: available
// range: 0x500713c0-0x500714b5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_500713c0(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*(int *)this + 0x48))();
  if ((iVar2 != 0) && (*(int *)(*param_2 + 0x44) == 5)) {
    FUN_500c3880(param_1);
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x4c))();
  if ((iVar2 != 0) && ((*(int *)(*param_2 + 0x48) != 7 && (*(int *)(*param_2 + 0x44) == 3)))) {
    FUN_500c3880(param_1);
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x70))();
  if ((iVar2 != 0) && (*(int *)(*param_2 + 0x44) == 2)) {
    FUN_500c3880(param_1);
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x74))();
  if ((iVar2 != 0) && (*(int *)(*param_2 + 0x44) == 0)) {
    FUN_500c3880(param_1);
    return 0;
  }
  iVar2 = (**(code **)(*(int *)this + 0x84))();
  if (iVar2 != 0) {
    if (((int *)*param_2)[0x11] == 1) {
      cVar1 = (**(code **)(*(int *)*param_2 + 0xc))();
      if (cVar1 == '\0') goto LAB_5007149a;
    }
    if (((int *)*param_2)[0x11] == 0) {
      cVar1 = (**(code **)(*(int *)*param_2 + 0x18))();
      if (cVar1 == '\0') {
LAB_5007149a:
        FUN_500c3880(param_1);
        return 0;
      }
    }
  }
  return 0xffffffff;
}

