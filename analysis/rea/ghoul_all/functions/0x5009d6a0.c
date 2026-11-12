// rea decompile_all
// name: FUN_5009d6a0
// address: 0x5009d6a0
// body: available
// range: 0x5009d6a0-0x5009d72b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009d6a0(int *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 0xef;
  *piVar1 = *piVar1 + -1;
  param_1[5] = (int)((float)param_1[5] + (float)param_1[0x87]);
  if (*piVar1 == 0) {
    param_1[0xef] = param_1[0xc6];
    param_1[0x87] = (int)((float)param_1[0x87] * -1.0);
  }
  if (((*(byte *)(param_1 + 0x6e) & 8) != 0) && ((float)param_1[0xb5] < DAT_5015ccdc)) {
    FUN_5009d5c0(param_1);
    param_1[0xb5] = (int)(DAT_5015ccdc + 1.0);
  }
  param_1[0xae] = (int)FUN_5009d6a0;
  param_1[0xad] = (int)(DAT_5015ccdc + 0.1);
  return;
}

