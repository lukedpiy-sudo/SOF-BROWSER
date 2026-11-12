// rea decompile_all
// name: FUN_500bd430
// address: 0x500bd430
// body: available
// range: 0x500bd430-0x500bd4d5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_500bd430(void)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int in_stack_00001000;
  int in_stack_00001008;
  
  FUN_501074f0();
  bVar1 = false;
  iVar5 = 0;
  FUN_500c2990(&stack0x00000000,(float *)(in_stack_00001008 + 4),600.0,0,0,0);
  iVar4 = 0;
  if (0 < in_stack_00001000) {
    do {
      iVar2 = *(int *)(&stack0x00000000 + iVar4 * 4);
      if ((*(int **)(iVar2 + 0x450) != (int *)0x0) && (0 < *(int *)(iVar2 + 0x2ec))) {
        iVar2 = (**(code **)(**(int **)(iVar2 + 0x450) + 0x28))(iVar2);
        if (iVar2 == 3) {
          iVar5 = iVar5 + 4;
          bVar1 = true;
        }
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < in_stack_00001000);
  }
  if (*(int *)(in_stack_00001008 + 0x2ec) < 0x32) {
    iVar5 = iVar5 + 2;
  }
  if (*(int *)(in_stack_00001008 + 0x2ec) < 0x19) {
    iVar5 = iVar5 + 2;
  }
  if ((iVar5 < 9) || (uVar3 = 3, !bVar1)) {
    uVar3 = 2;
  }
  return uVar3;
}

