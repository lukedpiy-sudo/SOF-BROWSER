// rea decompile_all
// name: FUN_50077fb0
// address: 0x50077fb0
// body: available
// range: 0x50077fb0-0x50078002 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __thiscall FUN_50077fb0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1[0x11] == 0) {
    iVar1 = (**(code **)(*param_1 + 4))();
    iVar2 = (**(code **)(*(int *)this + 4))();
    return iVar2 != iVar1;
  }
  if (param_1[0x11] == 3) {
    iVar1 = (**(code **)(*param_1 + 0x10))();
    iVar2 = (**(code **)(*(int *)this + 0x10))();
    return iVar2 != iVar1;
  }
  return false;
}

