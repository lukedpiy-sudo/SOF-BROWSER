// rea decompile_all
// name: FUN_500fe4e0
// address: 0x500fe4e0
// body: available
// range: 0x500fe4e0-0x500fe50f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool __cdecl FUN_500fe4e0(uint *param_1)

{
  uint *puVar1;
  
  puVar1 = FUN_50107030(param_1,&DAT_501557e4);
  if (puVar1 != (uint *)0x0) {
    return false;
  }
  puVar1 = FUN_50107030(param_1,&DAT_501557e0);
  return puVar1 == (uint *)0x0;
}

