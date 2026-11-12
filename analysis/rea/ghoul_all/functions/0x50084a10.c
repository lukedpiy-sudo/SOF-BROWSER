// rea decompile_all
// name: FUN_50084a10
// address: 0x50084a10
// body: available
// range: 0x50084a10-0x50084a5a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50084a10(undefined4 param_1,undefined1 param_2,undefined1 param_3)

{
  (*DAT_5015ca70)(1);
  (*DAT_5015ca70)(0x2e);
  (*DAT_5015ca84)(param_1);
  (*DAT_5015ca70)(param_2);
  (*DAT_5015ca70)(param_3);
  (*DAT_5015ca60)(param_1,1);
  return;
}

