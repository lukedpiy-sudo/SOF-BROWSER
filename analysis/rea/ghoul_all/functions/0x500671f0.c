// rea decompile_all
// name: FUN_500671f0
// address: 0x500671f0
// body: available
// range: 0x500671f0-0x500672c0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500671f0(undefined4 *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_501143bb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_FUN_50128814;
  local_4 = 0;
  piVar3 = *(int **)param_1[3];
  local_10 = param_1;
  if (piVar3 != (int *)param_1[3]) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)param_1[3]);
  }
  piVar3 = (int *)param_1[3];
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_50106b60((undefined *)piVar2);
    param_1[4] = param_1[4] + -1;
    piVar2 = piVar1;
  }
  piVar3 = (int *)param_1[3];
  local_4 = 0xffffffff;
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    FUN_500499f0(param_1 + 2,(int *)&local_10,piVar2);
    piVar2 = piVar1;
  }
  FUN_50106b60((undefined *)param_1[3]);
  param_1[3] = 0;
  param_1[4] = 0;
  ExceptionList = pvStack_c;
  return;
}

