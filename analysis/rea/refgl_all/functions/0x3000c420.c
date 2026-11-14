// rea decompile_all
// name: FUN_3000c420
// address: 0x3000c420
// body: available
// range: 0x3000c420-0x3000c497 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3000c420(int param_1)

{
  float fVar1;
  
  if ((*(byte *)(param_1 + 0x39) & 6) != 0) {
    fVar1 = (float)*(byte *)(param_1 + 0x2f) * 1.53787e-05;
    (*DAT_300a4490)((float)*(byte *)(param_1 + 0x2c) * fVar1,
                    (float)*(byte *)(param_1 + 0x2d) * fVar1,
                    (float)*(byte *)(param_1 + 0x2e) * fVar1);
    return;
  }
  (*DAT_300a4718)(*(undefined1 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x2d),
                  *(undefined1 *)(param_1 + 0x2e),*(undefined1 *)(param_1 + 0x2f));
  return;
}

