// rea decompile_all
// name: FUN_50080a50
// address: 0x50080a50
// body: available
// range: 0x50080a50-0x50080af3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50080a50(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    piVar3 = (int *)0x0;
  }
  else {
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    piVar1 = *(int **)(*(int *)(param_1 + 0x144) + 4);
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    if (piVar3 != (int *)0x0) goto LAB_50080aae;
  }
  FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleResetAI__50145d4c);
LAB_50080aae:
  iVar2 = (**(code **)(*piVar3 + 0x10))();
  (**(code **)*piVar3)(1);
  if (iVar2 != 0) {
    if (*(int **)(iVar2 + 0x450) == (int *)0x0) {
      FUN_500adb20((byte *)s_entity__s_had_no_ai__aborting_Ha_50145d1c);
      return;
    }
    (**(code **)(**(int **)(iVar2 + 0x450) + 0xd8))(iVar2);
  }
  return;
}

