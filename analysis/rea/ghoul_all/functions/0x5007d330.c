// rea decompile_all
// name: FUN_5007d330
// address: 0x5007d330
// body: available
// range: 0x5007d330-0x5007d3a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5007d330(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
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
    if (piVar3 != (int *)0x0) goto LAB_5007d38a;
  }
  FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleCacheStr_50145a84);
LAB_5007d38a:
  uVar2 = (**(code **)(*piVar3 + 0x14))();
  (*DAT_5015caac)(uVar2);
  (**(code **)*piVar3)(1);
  return;
}

