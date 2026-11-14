// rea decompile_all
// name: FUN_30004b80
// address: 0x30004b80
// body: available
// range: 0x30004b80-0x30004c44 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_30004b80(void *this,undefined1 *param_1)

{
  int local_28 [2];
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_3002b6b8;
  local_c = ExceptionList;
  local_20[0] = *param_1;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  ExceptionList = &local_c;
  FUN_30004c90(local_20,param_1,0,0xffffffff);
  local_10 = 0;
  local_4 = 0;
  FUN_30005330(this,local_28,(int *)local_20);
  if (local_1c == 0) {
    ExceptionList = local_c;
    return local_28[0] + 0x1c;
  }
  if (*(char *)(local_1c + -1) != '\0') {
    *(char *)(local_1c + -1) = *(char *)(local_1c + -1) + -1;
    ExceptionList = local_c;
    return local_28[0] + 0x1c;
  }
  FUN_3001f8bc((char *)(local_1c + -1));
  ExceptionList = local_c;
  return local_28[0] + 0x1c;
}

