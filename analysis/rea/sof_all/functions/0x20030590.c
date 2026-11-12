// rea decompile_all
// name: FUN_20030590
// address: 0x20030590
// body: available
// range: 0x20030590-0x200307a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20030590(float *param_1,float *param_2,float *param_3,undefined4 param_4,undefined4 param_5
                 ,float param_6,int param_7)

{
  float *pfVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_70 [5];
  float local_5c;
  float local_58;
  float local_54;
  byte local_44;
  undefined1 local_38 [56];
  
  if (((*param_3 == 0.0) && (param_3[1] == 0.0)) && (param_3[2] == 0.0)) {
    local_70[1] = 1.0;
  }
  else {
    local_90 = _DAT_2027c444 * *param_3 + *param_2;
    local_8c = _DAT_2027c444 * param_3[1] + param_2[1];
    local_88 = _DAT_2027c444 * param_3[2] + param_2[2];
    if (param_7 == 0) {
      pfVar1 = (float *)FUN_200119c0(local_38,param_2,param_4,param_5,&local_90);
    }
    else {
      pfVar1 = (float *)FUN_20011a60(local_38,param_2,param_4,param_5,&local_90);
    }
    pfVar4 = local_70;
    for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
      *pfVar4 = *pfVar1;
      pfVar1 = pfVar1 + 1;
      pfVar4 = pfVar4 + 1;
    }
    if (local_70[1] <= 0.99) {
      if ((local_44 & 0x38) == 0) {
        param_6 = param_6 * -1.0;
        local_7c = param_6 * param_3[1];
        local_78 = param_6 * param_3[2];
        local_88 = (local_5c * param_6 * *param_3 + local_58 * local_7c + local_54 * local_78) * 1.8
        ;
        local_90 = local_5c * local_88;
        local_8c = local_58 * local_88;
        local_88 = local_54 * local_88;
        *param_3 = local_90 - param_6 * *param_3;
        local_74 = local_8c - local_7c;
        param_3[1] = local_74;
        local_84 = local_88 - local_78;
        param_3[2] = local_84;
        uVar2 = __ftol();
        if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x1e) {
          uVar2 = __ftol();
          if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x1e) {
            uVar2 = __ftol();
            if ((int)((uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f)) < 0x1e) {
              *param_3 = 0.0;
              param_3[1] = 0.0;
              param_3[2] = 0.0;
            }
          }
        }
      }
      else {
        *param_2 = local_90;
        param_2[1] = local_8c;
        param_2[2] = local_88;
      }
    }
    else {
      *param_2 = local_90;
      param_2[1] = local_8c;
      param_2[2] = local_88;
    }
  }
  pfVar1 = local_70;
  for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
    *param_1 = *pfVar1;
    pfVar1 = pfVar1 + 1;
    param_1 = param_1 + 1;
  }
  return;
}

