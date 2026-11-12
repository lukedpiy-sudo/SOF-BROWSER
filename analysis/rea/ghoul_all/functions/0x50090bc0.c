// rea decompile_all
// name: FUN_50090bc0
// address: 0x50090bc0
// body: available
// range: 0x50090bc0-0x50090c22 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090bc0(int *param_1)

{
  float fVar1;
  
  param_1[0x109] = 0;
  param_1[0xc] = param_1[0xc] & 0xfffffff7U | 0x10;
  FUN_500c2f80(param_1,param_1[0xcb]);
  param_1[10] = 1;
  if (0.0 <= (float)param_1[0x108]) {
    fVar1 = DAT_5015ccdc + (float)param_1[0x108];
    param_1[0xae] = (int)FUN_50090b70;
    param_1[0xad] = (int)fVar1;
  }
  return;
}

