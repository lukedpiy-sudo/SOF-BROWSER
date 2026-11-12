// rea decompile_all
// name: FUN_50075f10
// address: 0x50075f10
// body: available
// range: 0x50075f10-0x50075fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_50075f10(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_24 [4];
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114883;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0x18);
  puVar3 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    local_4 = 1;
    *puVar1 = &PTR_FUN_501296f4;
    (*DAT_5015cb48)(0x53454558,local_24,0x18,0);
    iVar2 = FUN_500ba8c0(iStack_14);
    puVar1[4] = iVar2;
    iVar2 = FUN_500ba8c0(iStack_10);
    puVar1[5] = iVar2;
    puVar1[1] = uStack_20;
    puVar1[2] = uStack_1c;
    puVar1[3] = uStack_18;
    puVar3 = puVar1;
  }
  ExceptionList = local_c;
  return puVar3;
}

