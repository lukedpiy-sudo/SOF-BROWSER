// rea decompile_all
// name: FUN_30023efc
// address: 0x30023efc
// body: available
// range: 0x30023efc-0x30023f38 inclusive
// range: 0x30023f40-0x30023f51 inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x30023f4d to 0x3002828f FUN_3002828f (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_30023efc(void)

{
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_3002c820;
  puStack_10 = &LAB_30026ce4;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  if (DAT_300aa538 != (code *)0x0) {
    local_8 = 1;
    ExceptionList = &pvStack_14;
    (*DAT_300aa538)();
  }
  local_8 = 0xffffffff;
  FUN_3002828f();
  return;
}

