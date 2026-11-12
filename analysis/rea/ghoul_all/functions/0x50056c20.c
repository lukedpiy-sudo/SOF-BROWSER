// rea decompile_all
// name: FUN_50056c20
// address: 0x50056c20
// body: available
// range: 0x50056c20-0x50056cbe inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50056c20(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *local_8;
  undefined4 local_4;
  
  piVar1 = *(int **)(param_1 + 0x28);
  piVar5 = (int *)*piVar1;
  while (piVar5 != piVar1) {
    piVar2 = (int *)*piVar5;
    *(int *)piVar5[1] = *piVar5;
    *(int *)(*piVar5 + 4) = piVar5[1];
    FUN_50106b60((undefined *)piVar5);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    piVar5 = piVar2;
  }
  puVar3 = *(undefined4 **)(param_1 + 0x28);
  puVar4 = (undefined4 *)*puVar3;
  puVar6 = local_8;
  while (local_8 = puVar4, local_8 != puVar3) {
    puVar4 = (undefined4 *)*local_8;
    puVar6 = (undefined4 *)FUN_50049a30(&local_8,&local_4);
    piVar1 = (int *)*puVar6;
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
    FUN_50106b60((undefined *)piVar1);
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + -1;
    puVar6 = local_8;
  }
  local_8 = puVar6;
  FUN_50106b60(*(undefined **)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}

