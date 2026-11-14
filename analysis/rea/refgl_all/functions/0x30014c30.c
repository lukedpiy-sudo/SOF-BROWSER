// rea decompile_all
// name: FUN_30014c30
// address: 0x30014c30
// body: available
// range: 0x30014c30-0x30014d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl
FUN_30014c30(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float local_18;
  float local_14;
  float local_10;
  
  local_18 = *param_1 - *param_2;
  local_14 = param_1[1] - param_2[1];
  local_10 = param_1[2] - param_2[2];
  fVar1 = SQRT(local_18 * local_18 + local_14 * local_14 + local_10 * local_10);
  if (fVar1 <= 1e-10) {
    FUN_300169d0(&local_18,0);
  }
  else {
    FUN_3001e0e0(&local_18,fVar1);
  }
  fVar2 = local_14 * param_3[1] + local_18 * *param_3 + local_10 * param_3[2];
  fVar3 = *param_3 * fVar2 - (local_18 - *param_3 * fVar2);
  fVar1 = param_3[1] * fVar2 - (local_14 - param_3[1] * fVar2);
  fVar2 = param_3[2] * fVar2 - (local_10 - param_3[2] * fVar2);
  *param_6 = (fVar3 * *param_4 + fVar1 * param_4[1] + fVar2 * param_4[2] + 1.0) * 0.5;
  param_6[1] = (fVar3 * *param_5 + fVar1 * param_5[1] + fVar2 * param_5[2] + 1.0) * 0.5;
  return;
}

