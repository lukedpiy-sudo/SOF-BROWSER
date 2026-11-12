// rea decompile_all
// name: FUN_500fef60
// address: 0x500fef60
// body: available
// range: 0x500fef60-0x500fefe6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500fef60(int *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (DAT_5015d8d5 != '\0') {
    FUN_500c3880(param_1);
    return;
  }
  if ((param_3 != 0) &&
     (100.0 < (float)param_1[0x95] * (float)param_1[0x95] +
              (float)param_1[0x94] * (float)param_1[0x94] +
              (float)param_1[0x93] * (float)param_1[0x93])) {
    uVar1 = (*DAT_5015c9f4)(s_Weapons_gren_bounce_wav_501559e8,0x3f19999a,0x40000000,0,0);
    (*DAT_5015ca48)(param_1,2,uVar1);
  }
  return;
}

