// rea decompile_all
// name: FUN_50109744
// address: 0x50109744
// body: available
// range: 0x50109744-0x501097df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl
FUN_50109744(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,int param_7)

{
  undefined4 uVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_5012a148;
  puStack_10 = &LAB_5010f6dc;
  local_14 = ExceptionList;
  DAT_5018c2e4 = param_1;
  DAT_5018c2e8 = param_3;
  local_8 = 1;
  ExceptionList = &local_14;
  uVar1 = FUN_50107185(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_5010980a();
  ExceptionList = local_14;
  return uVar1;
}

