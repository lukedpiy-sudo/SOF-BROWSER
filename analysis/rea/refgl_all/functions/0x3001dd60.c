// rea decompile_all
// name: FUN_3001dd60
// address: 0x3001dd60
// body: available
// range: 0x3001dd60-0x3001ddd0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_3001dd60(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  if (DAT_300aa2f8 < 1000) {
    while( true ) {
      if (*param_2 == 1) {
        return;
      }
      if (param_2[1] != DAT_3008fe98) {
        return;
      }
      if (*param_2 != -1) break;
      FUN_3001dd60(param_1,(int *)param_2[10],param_3,param_4);
      param_2 = (int *)param_2[0xb];
      if (999 < DAT_300aa2f8) {
        return;
      }
    }
    (&DAT_300a5478)[DAT_300aa2f8] = param_2;
    DAT_300aa2f8 = DAT_300aa2f8 + 1;
  }
  return;
}

