// rea decompile_all
// name: FUN_2001b9c0
// address: 0x2001b9c0
// body: available
// range: 0x2001b9c0-0x2001bc67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001b9c0(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5
                 ,int param_6,undefined4 param_7,float *param_8,float *param_9)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  bool bVar7;
  float *pfVar8;
  int iVar9;
  float *pfVar10;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  
  local_68 = *param_2 - *param_8;
  local_64 = param_2[1] - param_8[1];
  local_60 = param_2[2] - param_8[2];
  local_74 = *param_3 - *param_8;
  local_70 = param_3[1] - param_8[1];
  local_6c = param_3[2] - param_8[2];
  if ((param_6 == DAT_20248df0) ||
     (((*param_9 == 0.0 && (param_9[1] == 0.0)) && (param_9[2] == 0.0)))) {
    bVar7 = false;
  }
  else {
    bVar7 = true;
    FUN_20054b30(param_9,&local_5c,&local_50,&local_44);
    fVar3 = local_54 * local_60;
    fVar2 = local_48 * local_60;
    fVar1 = local_50 * local_68;
    local_60 = local_3c * local_60 + local_44 * local_68 + local_40 * local_64;
    fVar6 = local_54 * local_6c;
    fVar5 = local_48 * local_6c;
    fVar4 = local_50 * local_74;
    local_6c = local_3c * local_6c + local_44 * local_74 + local_40 * local_70;
    local_74 = local_5c * local_74 + local_58 * local_70 + fVar6;
    local_70 = -(fVar4 + local_4c * local_70 + fVar5);
    local_68 = local_5c * local_68 + local_58 * local_64 + fVar3;
    local_64 = -(fVar1 + local_4c * local_64 + fVar2);
  }
  pfVar8 = (float *)FUN_2001b570(local_38,&local_68,&local_74,param_4,param_5,param_6,param_7);
  pfVar10 = local_38;
  for (iVar9 = 0xe; fVar2 = local_20, fVar1 = local_24, iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar10 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    pfVar10 = pfVar10 + 1;
  }
  if ((bVar7) && (local_38[1] != 1.0)) {
    local_24 = local_1c * local_44 + (local_24 * local_5c - local_20 * local_50);
    local_20 = local_1c * local_40 + (local_58 * fVar1 - local_20 * local_4c);
    local_1c = local_1c * local_3c + (local_54 * fVar1 - local_48 * fVar2);
  }
  local_38[2] = (*param_3 - *param_2) * local_38[1] + *param_2;
  local_38[3] = (param_3[1] - param_2[1]) * local_38[1] + param_2[1];
  local_28 = (param_3[2] - param_2[2]) * local_38[1] + param_2[2];
  pfVar8 = local_38;
  for (iVar9 = 0xe; iVar9 != 0; iVar9 = iVar9 + -1) {
    *param_1 = *pfVar8;
    pfVar8 = pfVar8 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

