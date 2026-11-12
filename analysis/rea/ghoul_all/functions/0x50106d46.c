// rea decompile_all
// name: FUN_50106d46
// address: 0x50106d46
// body: available
// range: 0x50106d46-0x50106d7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_50106d46(void)

{
  undefined *extraout_ECX;
  undefined4 local_20;
  byte bStack_1c;
  
  FUN_50106d7f(&local_20);
  __CxxThrowException_8(&local_20,&DAT_5012db48);
  FUN_50106d09();
  if ((bStack_1c & 1) != 0) {
    FUN_50106b60(extraout_ECX);
  }
  return extraout_ECX;
}

