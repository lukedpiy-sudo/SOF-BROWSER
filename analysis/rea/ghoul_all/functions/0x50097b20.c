// rea decompile_all
// name: FUN_50097b20
// address: 0x50097b20
// body: available
// range: 0x50097b20-0x50097b5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50097b20(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  if (piVar2 != (int *)0x0) {
    uVar1 = (**(code **)(*piVar2 + 0x1c))(s_dummy01_5014ab94);
    iVar3 = (*DAT_5015c9f8)(s_environ_helismoke_5012f9a4);
    FUN_50085590(iVar3,param_1,uVar1);
  }
  return;
}

