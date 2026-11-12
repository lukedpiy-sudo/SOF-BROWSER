// rea decompile_all
// name: FUN_50042e40
// address: 0x50042e40
// body: available
// range: 0x50042e40-0x50042ef1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50042e40(void *this,int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  longlong lVar3;
  
  (**(code **)(*(int *)this + 0x8c))(param_1,param_2);
  iVar1 = (**(code **)(*(int *)this + 0x90))(param_1,param_2,0);
  if (iVar1 != 0) {
    iVar1 = (**(code **)(*param_1 + 0x18c))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
      iVar1 = (**(code **)(*piVar2 + 0xc4))();
      if (iVar1 != 0) {
        FUN_5010777b((double)(*(float *)((int)this + 0x10) + 0.5));
        lVar3 = __ftol();
        *(int *)((int)this + 8) = (int)lVar3;
        goto LAB_50042ebe;
      }
    }
  }
  *(undefined4 *)((int)this + 8) = 1;
LAB_50042ebe:
  (**(code **)(*(int *)this + 4))();
  if ((double)*(int *)(param_2 + 0x2ec) < (double)*(int *)(param_2 + 0x2f0) * 0.75) {
    return 1;
  }
  return 0;
}

