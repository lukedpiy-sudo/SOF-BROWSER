// rea decompile_all
// name: FUN_5001cdc0
// address: 0x5001cdc0
// body: available
// range: 0x5001cdc0-0x5001ce29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5001cdc0(void *this,int param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 != 0) && ((param_3 & *(uint *)(param_2 + 0x48)) == 0)) {
    iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,param_2);
    if (iVar1 != 0) {
      if (*(int **)(param_1 + 0x450) == (int *)0x0) {
        return 1;
      }
      iVar1 = **(int **)(param_1 + 0x450);
      if (*(int *)(param_2 + 0x38) == 6) {
        uVar2 = (**(code **)(iVar1 + 0x1e8))(param_1,*(undefined4 *)(param_2 + 0x4c),1);
        return uVar2;
      }
      uVar2 = (**(code **)(iVar1 + 0x1e8))(param_1,*(undefined4 *)(param_2 + 0x4c),0);
      return uVar2;
    }
  }
  return 0;
}

