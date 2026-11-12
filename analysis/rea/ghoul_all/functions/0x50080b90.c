// rea decompile_all
// name: FUN_50080b90
// address: 0x50080b90
// body: available
// range: 0x50080b90-0x50080c96 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50080b90(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int *piVar4;
  float10 fVar5;
  
  if (*(int *)(param_1 + 0x148) == 0) {
    piVar3 = (int *)0x0;
LAB_50080be1:
    FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleSetCvar__50145d70);
  }
  else {
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    piVar4 = *(int **)(*(int *)(param_1 + 0x144) + 4);
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
    FUN_50106b60((undefined *)piVar4);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    if (piVar3 == (int *)0x0) goto LAB_50080be1;
  }
  if (*(int *)(param_1 + 0x148) == 0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    piVar1 = *(int **)(*(int *)(param_1 + 0x144) + 4);
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    if (piVar4 != (int *)0x0) goto LAB_50080c4b;
  }
  FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleSetCvar__50145d70);
LAB_50080c4b:
  if (piVar3[0x11] == 4) {
    uVar2 = (**(code **)(*piVar3 + 0x14))();
    uVar2 = (**(code **)(*piVar4 + 0x14))(uVar2);
    (*DAT_5015cb50)(uVar2);
  }
  else {
    fVar5 = (float10)(**(code **)(*piVar3 + 8))();
    uVar2 = (**(code **)(*piVar4 + 0x14))((float)fVar5);
    (*DAT_5015cb54)(uVar2);
  }
  (**(code **)*piVar3)(1);
  (**(code **)*piVar4)(1);
  return;
}

