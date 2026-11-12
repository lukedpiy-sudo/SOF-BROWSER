// rea decompile_all
// name: FUN_5010d49e
// address: 0x5010d49e
// body: available
// range: 0x5010d49e-0x5010d4e5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_5010d49e(undefined4 param_1)

{
  DAT_5018c958 = HeapAlloc(DAT_5018c960,0,0x140);
  if (DAT_5018c958 == (LPVOID)0x0) {
    return 0;
  }
  DAT_5018c950 = 0;
  DAT_5018c954 = 0;
  DAT_5018c94c = DAT_5018c958;
  DAT_5018c95c = param_1;
  DAT_5018c944 = 0x10;
  return 1;
}

