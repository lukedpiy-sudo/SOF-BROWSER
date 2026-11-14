// rea decompile_all
// name: FUN_30017240
// address: 0x30017240
// body: available
// range: 0x30017240-0x300172a5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30017240(int param_1)

{
  if (1.0 <= *(float *)(param_1 + 4)) {
    DAT_300a46e0 = DAT_300a46e0 & 0xffffffef;
    if (((byte)DAT_300a4588 & 0x10) == 0) {
      *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
    }
    if (*(char *)(param_1 + 0x14) != '\0') {
      if (*(float *)(DAT_3008fc8c + 0x18) != 0.0) {
        (*DAT_300a45d4)(0x4100);
        return;
      }
      (*DAT_300a45d4)(0x100);
    }
  }
  return;
}

