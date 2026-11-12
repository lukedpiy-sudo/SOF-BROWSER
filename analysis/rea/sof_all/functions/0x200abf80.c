// rea decompile_all
// name: FUN_200abf80
// address: 0x200abf80
// body: available
// range: 0x200abf80-0x200ac1f1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4
FUN_200abf80(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
            float *param_6,float *param_7,int param_8)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  fVar1 = param_6[2] * param_4[2] + *param_4 * *param_6 + param_4[1] * param_6[1];
  if (ABS(fVar1) < 0.01) {
    return 0;
  }
  fVar1 = -(((param_4[1] * param_5[1] + param_5[2] * param_4[2] + *param_4 * *param_5) -
            (param_1[1] * param_4[1] + *param_4 * *param_1 + param_1[2] * param_4[2])) / fVar1);
  if (fVar1 < -0.001) {
    return 0;
  }
  if (*param_7 < fVar1) {
    return 0;
  }
  local_c = *param_6 * fVar1 + *param_5;
  local_8 = param_6[1] * fVar1 + param_5[1];
  local_4 = param_6[2] * fVar1 + param_5[2];
  fVar2 = local_c - *param_1;
  fVar3 = local_8 - param_1[1];
  fVar4 = local_4 - param_1[2];
  local_18 = *param_2 - *param_1;
  local_14 = param_2[1] - param_1[1];
  local_10 = param_2[2] - param_1[2];
  FUN_200c38a0(&local_18);
  if (fVar4 * param_4[2] + fVar2 * *param_4 + fVar3 * param_4[1] < -0.5) {
    return 0;
  }
  local_18 = *param_3 - *param_2;
  local_14 = param_3[1] - param_2[1];
  local_10 = param_3[2] - param_2[2];
  FUN_200c38a0(&local_18);
  fVar5 = (float10)FUN_20090310(param_4);
  if (fVar5 < (float10)-0.5) {
    return 0;
  }
  FUN_200802f0(&local_c);
  FUN_20068250(param_3);
  FUN_200802f0(param_1);
  FUN_20068250(param_3);
  FUN_200c38a0(&local_18);
  fVar5 = (float10)FUN_20090310(param_4);
  if (fVar5 < (float10)-0.5) {
    return 0;
  }
  *param_7 = fVar1;
  if (param_8 != 0) {
    FUN_200802f0(&local_c);
  }
  return 1;
}

