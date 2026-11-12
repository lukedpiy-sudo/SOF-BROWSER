// rea decompile_all
// name: FUN_50075780
// address: 0x50075780
// body: available
// range: 0x50075780-0x50075887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __cdecl FUN_50075780(int param_1)

{
  undefined4 *puVar1;
  undefined1 local_98 [4];
  char acStack_94 [64];
  undefined4 uStack_54;
  int iStack_50;
  char acStack_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114739;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x8c);
  local_4 = 0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &PTR_LAB_50129390;
    _strncpy((char *)(puVar1 + 1),&DAT_5015911c,0x40);
    puVar1[0x11] = 5;
    puVar1[0x12] = 0xffffffff;
    local_4 = CONCAT31(local_4._1_3_,1);
    *puVar1 = &PTR_FUN_50129528;
    (*DAT_5015cb48)(0x53535452,local_98,0x8c,0);
    _strncpy((char *)(puVar1 + 0x13),acStack_4c,0x40);
    _strncpy((char *)(puVar1 + 1),acStack_94,0x40);
    puVar1[0x11] = uStack_54;
    puVar1[0x12] = iStack_50;
    if ((param_1 != 0) && (iStack_50 != -1)) {
      *(undefined4 **)(param_1 + 0x188 + iStack_50 * 4) = puVar1;
    }
    ExceptionList = local_c;
    return puVar1;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

