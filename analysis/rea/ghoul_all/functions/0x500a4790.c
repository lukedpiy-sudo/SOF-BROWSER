// rea decompile_all
// name: FUN_500a4790
// address: 0x500a4790
// body: available
// range: 0x500a4790-0x500a486d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a4790(void *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int *piVar3;
  void *local_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114edb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_10 = param_1;
  local_10 = operator_new(0x5bc);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500a4310(local_10,(int)param_1);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x47474f42,puVar1 + 9,0x598);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_500a4c30(puVar1);
    FUN_50106b60((undefined *)puVar1);
  }
  if (*(char *)((int)param_1 + 0x29) == '\0') {
    local_10 = *(void **)((int)param_1 + 0x20);
    (*DAT_5015cb44)(0x47474f4e,&local_10,4);
    piVar3 = (int *)**(int **)((int)param_1 + 0x1c);
    if (piVar3 != *(int **)((int)param_1 + 0x1c)) {
      do {
        puVar2 = (undefined1 *)piVar3[3];
        if (puVar2 == (undefined1 *)0x0) {
          puVar2 = &DAT_50129750;
        }
        (*DAT_5015cb44)(0x53545247,puVar2,piVar3[4] + 1);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)((int)param_1 + 0x1c));
    }
  }
  ExceptionList = pvStack_c;
  return;
}

