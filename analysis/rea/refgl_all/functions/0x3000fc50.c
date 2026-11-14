// rea decompile_all
// name: FUN_3000fc50
// address: 0x3000fc50
// body: available
// range: 0x3000fc50-0x3000fd69 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_3000fc50(char param_1)

{
  if (*(float *)(DAT_3008ff64 + 0x18) == 0.0) {
    if ((*(float *)(DAT_3008fc8c + 0x18) != 0.0) || (param_1 != '\0')) {
      (*DAT_300a4258)(0,0,0,0);
    }
    (*DAT_300a45d4)();
    _DAT_3008fff0 = 1.0;
  }
  else {
    if (*(float *)(DAT_3008fc8c + 0x18) != 0.0) {
      (*DAT_300a4258)(0x3f800000,0,0x3f000000,0x3f000000);
      (*DAT_300a45d4)(0x4000);
    }
    DAT_3008fda4 = DAT_3008fda4 + 1;
    if ((DAT_3008fda4 & 1) == 0) {
      _DAT_3008ffec = 1.0;
      _DAT_3008fff0 = 0.5;
      DAT_300a433c = 0x206;
      goto LAB_3000fd40;
    }
    _DAT_3008fff0 = 0.49999;
  }
  DAT_300a433c = 0x203;
  _DAT_3008ffec = 0.0;
LAB_3000fd40:
  if (DAT_300a469c == DAT_300a433c) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  (*DAT_300a4600)((double)_DAT_3008ffec,(double)_DAT_3008fff0);
  return;
}

