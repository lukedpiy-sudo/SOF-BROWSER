// rea decompile_all
// name: FUN_5003e080
// address: 0x5003e080
// body: available
// range: 0x5003e080-0x5003e0fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5003e080(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  
  (**(code **)(*(int *)this + 0x8c))(param_1,param_2);
  iVar1 = (**(code **)(*(int *)this + 0x90))(param_1,param_2,0);
  if (iVar1 == 0) {
    *(undefined4 *)((int)this + 8) = 0;
  }
  else {
    iVar1 = (**(code **)(*param_1 + 0x7c))();
    if (iVar1 == 0) {
      *(undefined4 *)((int)this + 8) = 0;
    }
    else {
      *(undefined4 *)((int)this + 8) = 5;
    }
    (**(code **)(*(int *)this + 4))();
    if ((*(int *)((int)this + 0x18) == 0) || (DAT_5015ccdc <= *(float *)((int)this + 0x14))) {
      return 0;
    }
  }
  return 1;
}

