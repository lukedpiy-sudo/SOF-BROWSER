// rea decompile_all
// name: FUN_5003e4b0
// address: 0x5003e4b0
// body: available
// range: 0x5003e4b0-0x5003e531 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_5003e4b0(void *this,int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *(int *)((int)this + 0x60);
  if (iVar1 == 0) {
    return 0;
  }
  if ((((*(int *)(iVar1 + 0x74) != 0) || (*(int *)(iVar1 + 0x450) != 0)) &&
      (*(int *)(iVar1 + 0x78) != 0)) &&
     ((0 < *(int *)(iVar1 + 0x2ec) && (DAT_5015ccdc - *(float *)((int)this + 0x70) <= 15.0)))) {
    iVar1 = (**(code **)(*param_1 + 0x18c))();
    if (iVar1 == 0) {
      return 0;
    }
    piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
    iVar1 = (**(code **)(*piVar2 + 0xc4))(param_2);
    if (iVar1 != 0) {
      return 0;
    }
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  return 0;
}

