// rea decompile_all
// name: FUN_500ae8f0
// address: 0x500ae8f0
// body: available
// range: 0x500ae8f0-0x500ae9f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ae8f0(int param_1,float *param_2)

{
  if ((((*(int *)(param_1 + 0x158) == 3) && (*(float *)(param_1 + 4) == DAT_5018bf0c)) &&
      (*(float *)(param_1 + 8) == DAT_5018bf10)) && (*(float *)(param_1 + 0xc) == DAT_5018bf14)) {
    *param_2 = *(float *)(param_1 + 0x140) * 0.5;
    param_2[1] = *(float *)(param_1 + 0x144) * 0.5;
    param_2[2] = *(float *)(param_1 + 0x148) * 0.5;
    *param_2 = *(float *)(param_1 + 0x134) * 0.5 + *param_2;
    param_2[1] = *(float *)(param_1 + 0x138) * 0.5 + param_2[1];
    param_2[2] = *(float *)(param_1 + 0x13c) * 0.5 + param_2[2];
    return;
  }
  *param_2 = *(float *)(param_1 + 0x11c) + *(float *)(param_1 + 0x128);
  param_2[1] = *(float *)(param_1 + 0x120) + *(float *)(param_1 + 300);
  param_2[2] = *(float *)(param_1 + 0x124) + *(float *)(param_1 + 0x130);
  *param_2 = *param_2 * 0.5 + *(float *)(param_1 + 4);
  param_2[1] = param_2[1] * 0.5 + *(float *)(param_1 + 8);
  param_2[2] = param_2[2] * 0.5 + *(float *)(param_1 + 0xc);
  return;
}

