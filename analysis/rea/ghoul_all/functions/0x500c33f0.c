// rea decompile_all
// name: FUN_500c33f0
// address: 0x500c33f0
// body: available
// range: 0x500c33f0-0x500c343d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_500c33f0(void)

{
  int iVar1;
  
  iVar1 = DAT_50189a40 * 0x20;
  DAT_50189a40 = DAT_50189a40 + 1 & 7;
  __ftol();
  __ftol();
  __ftol();
  FUN_500fe2b0();
  return &DAT_50189a50 + iVar1;
}

