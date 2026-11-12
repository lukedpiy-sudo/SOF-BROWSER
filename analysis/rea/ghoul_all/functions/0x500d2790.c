// rea decompile_all
// name: FUN_500d2790
// address: 0x500d2790
// body: available
// range: 0x500d2790-0x500d285d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500d2790(float *param_1,float *param_2,float *param_3)

{
  if (1.0 < ABS(*param_2 - *param_3)) {
    if (*param_3 <= *param_2) {
      if (*param_2 < *param_1) {
        return 0;
      }
    }
    else if (*param_1 < *param_2) {
      return 0;
    }
  }
  if (1.0 < ABS(param_2[1] - param_3[1])) {
    if (param_3[1] <= param_2[1]) {
      if (param_2[1] < param_1[1]) {
        return 0;
      }
    }
    else if (param_1[1] < param_2[1]) {
      return 0;
    }
  }
  if (1.0 < ABS(param_2[2] - param_3[2])) {
    if (param_3[2] <= param_2[2]) {
      if (param_2[2] < param_1[2]) {
        return 0;
      }
    }
    else if (param_1[2] < param_2[2]) {
      return 0;
    }
  }
  return 1;
}

