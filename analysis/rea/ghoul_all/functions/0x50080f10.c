// rea decompile_all
// name: FUN_50080f10
// address: 0x50080f10
// body: available
// range: 0x50080f10-0x50081057 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50080f10(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  longlong lVar6;
  undefined1 local_c [12];
  
  if (*(int *)(param_1 + 0x148) == 0) {
    piVar4 = (int *)0x0;
LAB_50080f65:
    FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleSetViewA_50145df0);
  }
  else {
    piVar4 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    piVar5 = *(int **)(*(int *)(param_1 + 0x144) + 4);
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_50106b60((undefined *)piVar5);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    if (piVar4 == (int *)0x0) goto LAB_50080f65;
  }
  (**(code **)(*piVar4 + 0xc))(local_c);
  if (*(int *)(param_1 + 0x148) == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = *(int **)(*(int *)(*(int *)(param_1 + 0x144) + 4) + 8);
    piVar1 = *(int **)(*(int *)(param_1 + 0x144) + 4);
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + -1;
    if (piVar5 != (int *)0x0) goto LAB_50080fdc;
  }
  FUN_500817d0(param_1,(byte *)s_Invalid_stack_for_HandleSetViewA_50145df0);
LAB_50080fdc:
  iVar3 = (**(code **)(*piVar5 + 0x10))();
  iVar2 = *(int *)(iVar3 + 0x74);
  lVar6 = __ftol();
  *(short *)(iVar2 + 0x14) = (short)lVar6;
  iVar2 = *(int *)(iVar3 + 0x74);
  lVar6 = __ftol();
  *(short *)(iVar2 + 0x16) = (short)lVar6;
  iVar2 = *(int *)(iVar3 + 0x74);
  lVar6 = __ftol();
  *(short *)(iVar2 + 0x18) = (short)lVar6;
  (*DAT_5015cb28)(iVar3);
  (**(code **)*piVar5)(1);
  (**(code **)*piVar4)(1);
  return;
}

