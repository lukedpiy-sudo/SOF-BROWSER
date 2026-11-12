// rea decompile_all
// name: FUN_500186d0
// address: 0x500186d0
// body: available
// range: 0x500186d0-0x5001870c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500186d0(undefined4 *param_1)

{
  int iVar1;
  
  if ((param_1 != (undefined4 *)0x0) && ((int *)param_1[0x114] != (int *)0x0)) {
    iVar1 = (**(code **)(*(int *)param_1[0x114] + 0x18c))();
    (**(code **)(*(int *)param_1[0x114] + 0x1e0))(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x7c) = *param_1;
    }
  }
  return;
}

