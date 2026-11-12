// rea decompile_all
// name: FUN_500415f0
// address: 0x500415f0
// body: available
// range: 0x500415f0-0x500416fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500415f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iStack_14;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501138f6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = operator_new(0xe8);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_500412e0(local_10,param_1);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x41495344,piVar2,0xdc);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x30))(1);
  }
  iStack_14 = *(int *)(param_1 + 0xe4);
  (*DAT_5015cb44)(0x41494f4e,&iStack_14,4);
  if ((iStack_14 != 0) &&
     (piVar2 = (int *)**(int **)(param_1 + 0xe0), piVar2 != *(int **)(param_1 + 0xe0))) {
    do {
      piVar1 = (int *)piVar2[2];
      local_10 = operator_new(0x44);
      local_4 = 1;
      if (local_10 == (void *)0x0) {
        puVar3 = (uint *)0x0;
      }
      else {
        puVar3 = FUN_50041710(local_10,piVar1);
      }
      local_4 = 0xffffffff;
      (*DAT_5015cb44)(0x5344534f,puVar3,0x44);
      FUN_50106b60((undefined *)puVar3);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(param_1 + 0xe0));
  }
  ExceptionList = pvStack_c;
  return;
}

