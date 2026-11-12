// rea decompile_all
// name: FUN_200be540
// address: 0x200be540
// body: available
// range: 0x200be540-0x200be58f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200be540(float *param_1,float param_2)

{
  float fVar1;
  float *in_ECX;
  
  fVar1 = (*param_1 * *in_ECX + param_1[1] * in_ECX[1] + param_1[2] * in_ECX[2]) - in_ECX[6];
  if (fVar1 < -param_2) {
    return 2;
  }
  if (param_2 < fVar1) {
    return 1;
  }
  return 0;
}

