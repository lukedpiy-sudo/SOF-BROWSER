// rea decompile_all
// name: FUN_30003960
// address: 0x30003960
// body: available
// range: 0x30003960-0x300039dc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30003960(int param_1)

{
  int iVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_3002b51b;
  pvStack_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &pvStack_c;
  if (*(char **)(param_1 + 0x14) != (char *)0x0) {
    ExceptionList = &pvStack_c;
    FUN_30007620(*(char **)(param_1 + 0x14));
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    (*DAT_3008fdf8)(*(int *)(param_1 + 0x10));
  }
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + -1) == '\0') {
      FUN_3001f8bc((char *)(iVar1 + -1));
    }
    else {
      *(char *)(iVar1 + -1) = *(char *)(iVar1 + -1) + -1;
    }
  }
  *(undefined4 *)(param_1 + 0x1c) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  ExceptionList = pvStack_c;
  return;
}

