// rea decompile_all
// name: FUN_300062f0
// address: 0x300062f0
// body: available
// range: 0x300062f0-0x30006347 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300062f0(int param_1)

{
  if ((*(float *)(DAT_3008fcd8 + 0x18) != 0.0) && (DAT_30034dcc != 0)) {
    param_1 = *(int *)(DAT_30034dcc + 0x50);
  }
  if ((&DAT_3008ffd8)[DAT_3008ffe0] != param_1) {
    (&DAT_3008ffd8)[DAT_3008ffe0] = param_1;
    (*DAT_300a4778)(0xde1,param_1);
    *(int *)(&DAT_300a41e8 + DAT_300a44b8 * 4) = param_1;
  }
  return;
}

