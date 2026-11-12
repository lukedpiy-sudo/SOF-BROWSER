// rea decompile_all
// name: FUN_20067860
// address: 0x20067860
// body: available
// range: 0x20067860-0x20067abc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_20067860(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *in_ECX;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  undefined1 local_4;
  char local_3;
  
  if (*(char *)((int)in_ECX + 0x19) != '\0') {
    *param_3 = 0.0;
    return true;
  }
  if (*(char *)(in_ECX + 6) != '\0') {
    return false;
  }
  if (*param_2 < 0.0) {
    if (*param_1 < *in_ECX) {
      return false;
    }
  }
  else if (in_ECX[3] < *param_1) {
    return false;
  }
  if (param_2[1] < 0.0) {
    if (param_1[1] < in_ECX[1]) {
      return false;
    }
  }
  else if (in_ECX[4] < param_1[1]) {
    return false;
  }
  if (param_2[2] < 0.0) {
    if (param_1[2] < in_ECX[2]) {
      return false;
    }
  }
  else if (in_ECX[5] < param_1[2]) {
    return false;
  }
  iVar4 = FUN_200c3c60();
  local_4 = 1;
  local_3 = '\0';
  if (ABS(param_2[iVar4]) < 0.02) {
    return false;
  }
  fVar1 = param_2[iVar4];
  fVar2 = (in_ECX[iVar4 + 3] - param_1[iVar4]) * (1.0 / fVar1);
  *param_3 = fVar2;
  local_28 = *param_2 * fVar2 + *param_1;
  local_24 = param_2[1] * fVar2 + param_1[1];
  local_20 = param_2[2] * fVar2 + param_1[2];
  local_1c = local_28;
  local_18 = local_24;
  local_14 = local_20;
  FUN_200802f0(&local_28);
  local_4 = 0;
  fVar1 = (in_ECX[iVar4] - param_1[iVar4]) * (1.0 / fVar1);
  local_28 = *param_2 * fVar1 + *param_1;
  local_24 = param_2[1] * fVar1 + param_1[1];
  local_20 = param_2[2] * fVar1 + param_1[2];
  if (local_3 == '\0') {
    FUN_200c3bb0(&local_28);
    FUN_200c3b70(&local_28);
  }
  if (fVar1 < *param_3) {
    *param_3 = fVar1;
  }
  cVar3 = FUN_20067640(&local_1c,0);
  return cVar3 != '\0';
}

