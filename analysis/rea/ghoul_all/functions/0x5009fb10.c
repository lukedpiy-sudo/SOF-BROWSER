// rea decompile_all
// name: FUN_5009fb10
// address: 0x5009fb10
// body: available
// range: 0x5009fb10-0x5009fb70 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009fb10(int *param_1)

{
  FUN_500b4b50((float)param_1);
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  param_1[0xf] = 0;
  param_1[0xad] = -0x40800000;
  if ((*(byte *)(param_1 + 0x6e) & 2) != 0) {
    FUN_500b00e0((int)param_1);
    FUN_500c3880(param_1);
  }
  if (((param_1[0x6e] & 0x10U) != 0) && ((param_1[0x6e] & 2U) == 0)) {
    FUN_500c3880(param_1);
  }
  return;
}

