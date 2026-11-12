// rea decompile_all
// name: FUN_5000cf20
// address: 0x5000cf20
// body: available
// range: 0x5000cf20-0x5000d074 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_5000cf20(float *param_1,float *param_2,int param_3,float *param_4,float *param_5)

{
  float10 fVar1;
  float local_c;
  float local_8;
  float local_4;
  
  local_c = *param_2 - *param_1;
  local_8 = param_2[1] - param_1[1];
  local_4 = param_2[2] - param_1[2];
  fVar1 = FUN_500fe130(&local_c);
  if (param_3 == 0) {
    if ((float10)92.0 <= fVar1) {
      if (fVar1 <= (float10)_DAT_5015d908 * (float10)512.0) {
        *param_4 = (float)((float10)10.0 -
                          ((fVar1 - (float10)92.0) /
                          ((float10)_DAT_5015d908 * (float10)512.0 - (float10)92.0)) * (float10)10.0
                          );
      }
      else {
        *param_4 = 1.0;
      }
    }
    else {
      *param_4 = 10.0;
    }
  }
  else if ((float10)92.0 <= fVar1) {
    if (fVar1 <= (float10)_DAT_5015d908 * (float10)512.0) {
      *param_4 = (float)((float10)2.0 -
                        (fVar1 - (float10)92.0) /
                        ((float10)_DAT_5015d908 * (float10)512.0 - (float10)92.0));
    }
    else {
      *param_4 = 1.0;
    }
  }
  else {
    *param_4 = 2.0;
  }
  if (fVar1 <= (float10)_DAT_5015d908 * (float10)512.0) {
    if ((float10)92.0 <= fVar1) goto LAB_5000d061;
    fVar1 = fVar1 * (float10)0.010869565 * fVar1 * (float10)0.010869565;
  }
  else {
    fVar1 = (fVar1 - (float10)_DAT_5015d908 * (float10)512.0) * (float10)0.00390625 +
            (float10)*param_5;
  }
  *param_5 = (float)fVar1;
LAB_5000d061:
  if (param_3 == 0) {
    *param_5 = *param_5 * 0.4;
  }
  return;
}

