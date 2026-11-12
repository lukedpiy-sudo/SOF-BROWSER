// rea decompile_all
// name: FUN_2002ff30
// address: 0x2002ff30
// body: available
// range: 0x2002ff30-0x2002ffa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002ff30(float *param_1,float *param_2,float param_3,float *param_4,float param_5,
                 float *param_6,float param_7)

{
  *param_1 = param_3 * *param_2;
  param_1[1] = param_3 * param_2[1];
  param_1[2] = param_3 * param_2[2];
  *param_1 = param_5 * *param_4 + *param_1;
  param_1[1] = param_5 * param_4[1] + param_1[1];
  param_1[2] = param_5 * param_4[2] + param_1[2];
  *param_1 = param_7 * *param_6 + *param_1;
  param_1[1] = param_7 * param_6[1] + param_1[1];
  param_1[2] = param_7 * param_6[2] + param_1[2];
  return;
}

