// rea decompile_all
// name: FUN_2002fea0
// address: 0x2002fea0
// body: available
// range: 0x2002fea0-0x2002ff2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2002fea0(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = SQRT((float10)param_1[2] * (float10)param_1[2] +
               (float10)param_1[1] * (float10)param_1[1] + (float10)*param_1 * (float10)*param_1);
  if (fVar1 == (float10)0.0) {
    fVar1 = (float10)local_4;
  }
  else {
    fVar1 = (float10)1.0 / fVar1;
    local_c = (float)(fVar1 * (float10)*param_1);
    local_8 = (float)(fVar1 * (float10)param_1[1]);
    fVar1 = fVar1 * (float10)param_1[2];
  }
  fVar2 = (float10)fpatan((float10)local_8,(float10)local_c);
  param_2[2] = 0.0;
  param_2[1] = (float)fVar2;
  fVar1 = (float10)fpatan(fVar1,SQRT((float10)local_8 * (float10)local_8 +
                                     (float10)local_c * (float10)local_c));
  *param_2 = (float)-fVar1;
  return;
}

