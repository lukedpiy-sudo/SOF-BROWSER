// rea decompile_all
// name: FUN_500f2770
// address: 0x500f2770
// body: available
// range: 0x500f2770-0x500f280e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500f2770(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (((param_1 != 0) && (*(int *)(param_1 + 0x74) != 0)) &&
     (*(int *)(*(int *)(param_1 + 0x74) + 0x34c) != 0)) {
    iVar1 = (**(code **)(*DAT_5015c4d8 + 4))();
    iVar3 = **(int **)(*(int *)(param_1 + 0x74) + 0x34c);
    if (iVar1 == 0) {
      uVar2 = (**(code **)(iVar3 + 0x50))(param_2);
      return uVar2;
    }
    iVar3 = (**(code **)(iVar3 + 0x80))();
    uVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x50))(param_2);
    iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 0x74) + 0x34c) + 0x80))();
    if (0 < iVar3 != 0 < iVar1) {
      FUN_500efe50(param_1,(byte *)(*(int *)(param_1 + 0x74) + 0xcc));
    }
    return uVar2;
  }
  return 0;
}

