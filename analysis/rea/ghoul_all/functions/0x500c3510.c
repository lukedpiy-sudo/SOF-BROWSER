// rea decompile_all
// name: FUN_500c3510
// address: 0x500c3510
// body: available
// range: 0x500c3510-0x500c3567 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 __cdecl FUN_500c3510(float *param_1)

{
  float10 fVar1;
  longlong lVar2;
  
  if ((param_1[1] == 0.0) && (*param_1 == 0.0)) {
    return (float10)0.0;
  }
  fpatan((float10)param_1[1],(float10)*param_1);
  lVar2 = __ftol();
  fVar1 = (float10)(int)lVar2;
  if (fVar1 < (float10)0.0) {
    fVar1 = fVar1 + (float10)360.0;
  }
  return fVar1;
}

