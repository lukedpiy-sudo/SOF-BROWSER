// rea decompile_all
// name: FUN_2001abf0
// address: 0x2001abf0
// body: available
// range: 0x2001abf0-0x2001ad62 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2001abf0(float *param_1,int param_2,float *param_3,float *param_4)

{
  int iVar1;
  float fVar2;
  float *pfVar3;
  float fVar4;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_30[0] = *param_1 - *param_3;
  local_30[1] = param_1[1] - param_3[1];
  local_30[2] = param_1[2] - param_3[2];
  if ((param_2 != DAT_20248df0) &&
     (((*param_4 != 0.0 || (param_4[1] != 0.0)) || (param_4[2] != 0.0)))) {
    FUN_20054b30(param_4,local_30 + 3,&local_18,&local_c);
    fVar4 = local_30[1];
    fVar2 = local_30[0];
    local_30[0] = local_30[3] * local_30[0] + local_20 * local_30[1] + local_1c * local_30[2];
    local_30[1] = -(local_18 * fVar2 + local_14 * local_30[1] + local_10 * local_30[2]);
    local_30[2] = local_c * fVar2 + local_4 * local_30[2] + local_8 * fVar4;
  }
  while (-1 < param_2) {
    iVar1 = DAT_20246d64 + param_2 * 0x3c;
    pfVar3 = *(float **)(DAT_20246d64 + 0x24 + param_2 * 0x3c);
    if (*(byte *)(pfVar3 + 4) < 3) {
      fVar2 = local_30[*(byte *)(pfVar3 + 4)];
    }
    else {
      fVar2 = local_30[0] * *pfVar3 + local_30[1] * pfVar3[1] + local_30[2] * pfVar3[2];
    }
    if (0.0 <= fVar2 - pfVar3[3]) {
      param_2 = *(int *)(iVar1 + 0x30);
    }
    else {
      param_2 = *(int *)(iVar1 + 0x34);
    }
  }
  DAT_20246d5c = DAT_20246d5c + 1;
  return *(undefined4 *)(DAT_20246ce4 + (param_2 * 3 + 3) * -0x14);
}

