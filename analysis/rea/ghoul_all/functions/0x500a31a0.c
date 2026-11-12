// rea decompile_all
// name: FUN_500a31a0
// address: 0x500a31a0
// body: available
// range: 0x500a31a0-0x500a32a8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a31a0(undefined4 *param_1)

{
  int *this;
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50114ddb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_5012982c;
  this = param_1 + 1;
  local_4 = 0;
  piVar3 = *(int **)param_1[1];
  if (piVar3 != (int *)param_1[1]) {
    do {
      if ((undefined *)piVar3[2] != (undefined *)0x0) {
        FUN_500a6860(&DAT_5018b490,(undefined *)piVar3[2]);
      }
      piVar3[2] = 0;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*this);
  }
  piVar3 = (int *)*this;
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    FUN_500a6340(this,&local_10,piVar2);
    piVar2 = piVar1;
  }
  if (param_1[7] == 0) goto LAB_500a324e;
  if (*(char *)(param_1 + 3) == '\0') {
    if (param_1[4] != 0) {
      piVar3 = *(int **)(param_1[4] + 0x1c);
      goto LAB_500a323d;
    }
  }
  else if (param_1[5] != 0) {
    piVar3 = *(int **)(param_1[5] + 0xc);
LAB_500a323d:
    (**(code **)(*piVar3 + 0x7c))(param_1[7]);
  }
  (**(code **)(*(int *)param_1[7] + 0xd4))();
LAB_500a324e:
  piVar3 = (int *)*this;
  piVar2 = (int *)*piVar3;
  while (piVar2 != piVar3) {
    piVar1 = (int *)*piVar2;
    *(int *)piVar2[1] = *piVar2;
    *(int *)(*piVar2 + 4) = piVar2[1];
    FUN_50106b60((undefined *)piVar2);
    param_1[2] = param_1[2] + -1;
    piVar2 = piVar1;
  }
  FUN_50106b60((undefined *)*this);
  *this = 0;
  param_1[2] = 0;
  ExceptionList = pvStack_c;
  return;
}

