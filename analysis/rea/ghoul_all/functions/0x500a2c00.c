// rea decompile_all
// name: FUN_500a2c00
// address: 0x500a2c00
// body: available
// range: 0x500a2c00-0x500a2c9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500a2c00(uint param_1)

{
  void *this;
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114d7b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x2c);
  local_4 = 0;
  if (this == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500a2870(this,param_1);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x47474249,puVar1 + 3,0x20);
  puVar1[7] = 0;
  FUN_500a31a0(puVar1);
  FUN_50106b60((undefined *)puVar1);
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_500baf10();
  }
  ExceptionList = pvStack_c;
  return;
}

