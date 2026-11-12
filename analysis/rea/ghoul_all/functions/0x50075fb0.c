// rea decompile_all
// name: FUN_50075fb0
// address: 0x50075fb0
// body: available
// range: 0x50075fb0-0x5007602a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_50075fb0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 local_1c [4];
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501148a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x10);
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_4 = 1;
    *puVar1 = &PTR_FUN_5012970c;
    (*DAT_5015cb48)(0x53574556,local_1c,0x10,0);
    puVar1[3] = uStack_10;
    puVar1[1] = uStack_18;
    puVar1[2] = uStack_14;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}

