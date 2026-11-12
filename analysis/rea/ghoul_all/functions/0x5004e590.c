// rea decompile_all
// name: FUN_5004e590
// address: 0x5004e590
// body: available
// range: 0x5004e590-0x5004e686 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5004e590(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113b9b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  piVar1 = operator_new(0x58);
  local_4 = 0;
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    *piVar1 = (int)&PTR_LAB_50125150;
    piVar1[1] = *(int *)(param_1 + 4);
    piVar1[2] = *(int *)(param_1 + 8);
    piVar1[3] = *(int *)(param_1 + 0xc);
    piVar1[4] = *(int *)(param_1 + 0x10);
    piVar3 = (int *)(param_1 + 0x14);
    piVar4 = piVar1 + 5;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    piVar3 = (int *)(param_1 + 0x2c);
    piVar4 = piVar1 + 0xb;
    for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
      *piVar4 = *piVar3;
      piVar3 = piVar3 + 1;
      piVar4 = piVar4 + 1;
    }
    piVar1[0x11] = *(int *)(param_1 + 0x44);
    piVar1[0x12] = *(int *)(param_1 + 0x48);
    piVar1[0x13] = *(int *)(param_1 + 0x4c);
    piVar1[0x14] = *(int *)(param_1 + 0x50);
    iVar2 = FUN_500ba390(*(int *)(param_1 + 0x14));
    piVar1[5] = iVar2;
    iVar2 = FUN_500ba390(*(int *)(param_1 + 0x2c));
    piVar1[0xb] = iVar2;
    *piVar1 = (int)&PTR_LAB_50128618;
    piVar1[0x15] = *(int *)(param_1 + 0x54);
    *piVar1 = (int)&PTR_LAB_50125100;
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x41494e53,piVar1,0x58);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x14))(1);
  }
  ExceptionList = pvStack_c;
  return;
}

