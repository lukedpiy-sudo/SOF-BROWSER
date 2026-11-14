// rea decompile_all
// name: FUN_30017dd0
// address: 0x30017dd0
// body: available
// range: 0x30017dd0-0x30017e21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_30017dd0(float *param_1)

{
  if (_DAT_300a40e0 * (*param_1 - DAT_3008fd04) +
      _DAT_300a40e4 * (param_1[1] - DAT_3008fd08) + _DAT_300a40e8 * (param_1[2] - DAT_3008fd0c) <
      0.0) {
    return 1;
  }
  return 0;
}

