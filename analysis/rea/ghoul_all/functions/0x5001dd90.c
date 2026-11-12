// rea decompile_all
// name: FUN_5001dd90
// address: 0x5001dd90
// body: available
// range: 0x5001dd90-0x5001ddb0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_5001dd90(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_50126eb0;
  if ((undefined *)param_1[0x19] != (undefined *)0x0) {
    FUN_50106b60((undefined *)param_1[0x19]);
  }
  *param_1 = &PTR_FUN_50126470;
  return;
}

