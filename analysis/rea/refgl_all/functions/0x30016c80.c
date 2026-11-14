// rea decompile_all
// name: FUN_30016c80
// address: 0x30016c80
// body: available
// range: 0x30016c80-0x30016ce5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30016c80(int param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3002b85b;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x80) != 0) {
    ExceptionList = &local_c;
    FUN_30017760(param_1);
    FUN_30018190((int *)(param_1 + 0x6c));
    *(undefined4 *)(param_1 + 0x80) = 0;
  }
  local_4 = 0xffffffff;
  FUN_30018190((int *)(param_1 + 0x6c));
  ExceptionList = local_c;
  return;
}

