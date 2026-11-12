// rea decompile_all
// name: FUN_500fded0
// address: 0x500fded0
// body: available
// range: 0x500fded0-0x500fdffd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500fded0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float local_1c;
  float local_18 [6];
  
  iVar6 = 0;
  local_1c = 1.0;
  iVar5 = 0;
  do {
    if (ABS(param_2[iVar5]) < local_1c) {
      iVar6 = iVar5;
      local_1c = ABS(param_2[iVar5]);
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 3);
  fVar1 = param_2[2];
  fVar2 = param_2[1];
  fVar3 = *param_2;
  local_18[2] = 0.0;
  local_18[1] = 0.0;
  local_18[0] = 0.0;
  local_18[iVar6] = 1.0;
  fVar3 = 1.0 / (fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
  fVar4 = (local_18[0] * *param_2 + local_18[2] * param_2[2] + local_18[1] * param_2[1]) * fVar3;
  fVar1 = param_2[1];
  fVar2 = param_2[2];
  local_18[0] = local_18[0] - fVar3 * *param_2 * fVar4;
  *param_1 = local_18[0];
  local_18[1] = local_18[1] - fVar3 * fVar1 * fVar4;
  param_1[1] = local_18[1];
  local_18[2] = local_18[2] - fVar3 * fVar2 * fVar4;
  param_1[2] = local_18[2];
  fVar1 = SQRT(local_18[0] * local_18[0] + local_18[1] * local_18[1] + local_18[2] * local_18[2]);
  if (fVar1 == 0.0) {
    return;
  }
  fVar1 = 1.0 / fVar1;
  *param_1 = local_18[0] * fVar1;
  param_1[1] = local_18[1] * fVar1;
  param_1[2] = local_18[2] * fVar1;
  return;
}

