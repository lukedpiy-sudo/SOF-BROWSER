// rea decompile_all
// name: FUN_5000bdd0
// address: 0x5000bdd0
// body: available
// range: 0x5000bdd0-0x5000be13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_5000bdd0(int *param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (**(code **)(*param_1 + 0x18c))();
  if (iVar1 == 0) {
    (*DAT_5015ca24)(s_action__NextFlags__ai_has_no_bod_5012f730);
    return 0;
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x18c))();
  uVar3 = (**(code **)(*piVar2 + 0x84))(param_2);
  return uVar3;
}

