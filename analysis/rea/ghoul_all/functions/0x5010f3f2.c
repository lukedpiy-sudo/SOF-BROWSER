// rea decompile_all
// name: FUN_5010f3f2
// address: 0x5010f3f2
// body: available
// range: 0x5010f3f2-0x5010f42a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5010f3f2(void)

{
  if ((DAT_5018c2dc == 1) || ((DAT_5018c2dc == 0 && (DAT_5018c2e0 == 1)))) {
    FUN_5010f42b(0xfc);
    if (DAT_5018c58c != (code *)0x0) {
      (*DAT_5018c58c)();
    }
    FUN_5010f42b(0xff);
  }
  return;
}

