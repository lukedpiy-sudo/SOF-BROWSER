// rea decompile_all
// name: FUN_2002fe60
// address: 0x2002fe60
// body: available
// range: 0x2002fe60-0x2002fe97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002fe60(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float10 fVar4;
  
  fVar4 = (float10)fpatan((float10)param_1[1],(float10)*param_1);
  param_2[1] = (float)fVar4;
  fVar1 = param_1[1];
  fVar2 = *param_1;
  fVar3 = param_1[2];
  param_2[2] = 0.0;
  fVar4 = (float10)fpatan((float10)fVar3,
                          SQRT((float10)fVar1 * (float10)fVar1 + (float10)fVar2 * (float10)fVar2));
  *param_2 = (float)-fVar4;
  return;
}

