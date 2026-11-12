// rea decompile_all
// name: FUN_500c4530
// address: 0x500c4530
// body: available
// range: 0x500c4530-0x500c463b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500c4530(float *param_1,float *param_2,float *param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_18 = *param_2 - *param_1;
  local_14 = param_2[1] - param_1[1];
  local_10 = param_2[2] - param_1[2];
  local_c = *param_3 - *param_1;
  local_8 = param_3[1] - param_1[1];
  local_4 = param_3[2] - param_1[2];
  if ((0.0 <= local_8 * local_14 + local_c * local_18 + local_4 * local_10) &&
     ((*param_3 - *param_2) * local_18 +
      (param_3[1] - param_2[1]) * local_14 + local_10 * (param_3[2] - param_2[2]) <= 0.0)) {
    FUN_500fe050(&local_18);
    fVar1 = (float10)FUN_500fe050(&local_c);
    fVar2 = (float10)local_8 * (float10)local_14 +
            (float10)local_c * (float10)local_18 + (float10)local_4 * (float10)local_10;
    if (SQRT((float10)1.0 - fVar2 * fVar2) * fVar1 < (float10)param_4) {
      return 1;
    }
  }
  return 0;
}

