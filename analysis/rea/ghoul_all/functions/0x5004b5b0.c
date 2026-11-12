// rea decompile_all
// name: FUN_5004b5b0
// address: 0x5004b5b0
// body: available
// range: 0x5004b5b0-0x5004b7b8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl
FUN_5004b5b0(float *param_1,float param_2,float *param_3,float param_4,float *param_5)

{
  float10 fVar1;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_48 = *param_3 - *param_1;
  local_44 = param_3[1] - param_1[1];
  local_40 = param_3[2] - param_1[2];
  if ((*param_5 - *param_1) * local_48 +
      (param_5[1] - param_1[1]) * local_44 + local_40 * (param_5[2] - param_1[2]) < 0.0) {
    return 0;
  }
  if (0.0 <= (*param_3 - *param_5) * local_48 +
             (param_3[1] - param_5[1]) * local_44 + local_40 * (param_3[2] - param_5[2])) {
    fVar1 = (float10)FUN_500fe050(&local_48);
    fVar1 = -((fVar1 * (float10)param_2) / ((float10)param_4 - (float10)param_2));
    local_3c = (float)((float10)local_48 * fVar1 + (float10)*param_1);
    local_38 = (float)((float10)local_44 * fVar1 + (float10)param_1[1]);
    local_34 = (float)((float10)local_40 * fVar1 + (float10)param_1[2]);
    FUN_500fded0(&local_18,&local_48);
    local_30 = *param_5 - local_3c;
    local_2c = param_5[1] - local_38;
    local_28 = param_5[2] - local_34;
    FUN_500fe050(&local_30);
    local_4 = local_10 * param_4 + param_3[2];
    local_24 = (local_18 * param_4 + *param_3) - local_3c;
    local_20 = (local_14 * param_4 + param_3[1]) - local_38;
    local_1c = local_4 - local_34;
    FUN_500fe050(&local_24);
    if (param_4 < param_2) {
      local_48 = local_48 * -1.0;
      local_44 = local_44 * -1.0;
      local_40 = local_40 * -1.0;
    }
    if (local_24 * local_48 + local_20 * local_44 + local_1c * local_40 <=
        local_30 * local_48 + local_2c * local_44 + local_28 * local_40) {
      return 1;
    }
    return 0;
  }
  return 0;
}

