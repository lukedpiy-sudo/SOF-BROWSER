// rea decompile_all
// name: FUN_50091c60
// address: 0x50091c60
// body: available
// range: 0x50091c60-0x50091cee inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50091c60(int *param_1,undefined4 param_2,int param_3)

{
  float10 fVar1;
  
  param_1[0xcb] = param_3;
  if ((float)param_1[0xad] != 0.0) {
    param_1[0xad] = 0;
    return;
  }
  if ((float)param_1[0xd9] != 0.0) {
    param_1[0xad] = (int)(DAT_5015ccdc + (float)param_1[0xd9]);
    return;
  }
  FUN_500c2f80(param_1,param_3);
  fVar1 = (float10)(*DAT_5015cb20)(-(float)param_1[0xda],param_1[0xda]);
  param_1[0xad] = (int)(float)(fVar1 + (float10)(float)param_1[0xd8] + (float10)DAT_5015ccdc);
  return;
}

