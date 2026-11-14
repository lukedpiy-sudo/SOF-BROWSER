// rea decompile_all
// name: FUN_30021bea
// address: 0x30021bea
// body: available
// range: 0x30021bea-0x30021c31 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_30021bea(undefined4 param_1)

{
  DAT_300abb28 = HeapAlloc(DAT_300abb30,0,0x140);
  if (DAT_300abb28 == (LPVOID)0x0) {
    return 0;
  }
  DAT_300abb20 = 0;
  DAT_300abb24 = 0;
  DAT_300abb1c = DAT_300abb28;
  DAT_300abb2c = param_1;
  DAT_300abb14 = 0x10;
  return 1;
}

