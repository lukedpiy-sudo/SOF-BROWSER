// rea decompile_all
// name: FUN_50047700
// address: 0x50047700
// body: available
// range: 0x50047700-0x500477e4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50047700(void *param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  void **ppvVar4;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_50113a43;
  piVar1 = *(int **)((int)param_1 + 100);
  local_4 = 1;
  ppvVar4 = &local_c;
  piVar3 = (int *)*piVar1;
  local_c = ExceptionList;
  while (ExceptionList = ppvVar4, piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    FUN_500499f0((void *)((int)param_1 + 0x60),&local_10,piVar3);
    ppvVar4 = ExceptionList;
    piVar3 = piVar2;
  }
  FUN_50106b60(*(undefined **)((int)param_1 + 100));
  *(undefined4 *)((int)param_1 + 100) = 0;
  *(undefined4 *)((int)param_1 + 0x68) = 0;
  piVar1 = *(int **)((int)param_1 + 0x10);
  local_4 = local_4 & 0xffffff00;
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    FUN_500499f0((void *)((int)param_1 + 0xc),&local_10,piVar3);
    piVar3 = piVar2;
  }
  FUN_50106b60(*(undefined **)((int)param_1 + 0x10));
  *(undefined4 *)((int)param_1 + 0x10) = 0;
  *(undefined4 *)((int)param_1 + 0x14) = 0;
  piVar1 = *(int **)((int)param_1 + 4);
  local_4 = 0xffffffff;
  piVar3 = (int *)*piVar1;
  while (piVar3 != piVar1) {
    piVar2 = (int *)*piVar3;
    FUN_500499f0(param_1,&local_10,piVar3);
    piVar3 = piVar2;
  }
  FUN_50106b60(*(undefined **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}

