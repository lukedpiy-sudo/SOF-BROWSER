// rea decompile_all
// name: FUN_200283c0
// address: 0x200283c0
// body: available
// range: 0x200283c0-0x200288f5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200283c0(float *param_1,float *param_2,int param_3,int param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  float local_74;
  float local_70;
  float local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  int local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  double local_14;
  float local_4;
  
  local_74 = *param_2 - *param_1;
  local_70 = param_2[1] - param_1[1];
  local_6c = param_2[2] - param_1[2];
  VectorLength(&local_74);
  local_7c = (float)param_3;
  iVar4 = __ftol();
  fVar1 = 1.0 / (float)iVar4;
  local_74 = local_74 * fVar1;
  local_70 = local_70 * fVar1;
  local_6c = local_6c * fVar1;
  local_40 = iVar4;
  local_24 = local_74;
  local_20 = local_70;
  local_1c = local_6c;
  VectorNormalize(&local_24);
  FUN_20054c90(&local_3c,&local_24);
  FUN_20055280(&local_24,&local_3c,&local_30);
  local_14 = (double)param_3;
  local_58 = *param_1;
  local_54 = param_1[1];
  local_50 = param_1[2];
  iVar5 = __ftol();
  local_64 = *param_1;
  local_60 = param_1[1];
  local_88 = local_64 + local_74;
  local_5c = param_1[2];
  local_84 = local_60 + local_70;
  local_80 = local_5c + local_6c;
  iVar7 = iVar5 / 2;
  local_18 = iVar7;
  iVar6 = FUN_200f9f57();
  local_68 = iVar6 % iVar5 - iVar7;
  fVar1 = (float)local_68;
  local_88 = local_3c * fVar1 + local_88;
  local_84 = local_38 * fVar1 + local_84;
  local_80 = local_34 * fVar1 + local_80;
  iVar6 = FUN_200f9f57();
  fVar3 = local_7c;
  fVar1 = (float)(iVar6 % iVar5 - iVar7);
  local_68 = 0;
  local_88 = local_30 * fVar1 + local_88;
  local_84 = local_2c * fVar1 + local_84;
  local_80 = local_28 * fVar1 + local_80;
  if (iVar4 != 1 && -1 < iVar4 + -1) {
    do {
      iVar4 = FUN_2003b170(&local_78);
      if (iVar4 == 0) {
        return;
      }
      FUN_20038110(local_78,200,0x200,7);
      fVar1 = (float)((float10)local_14 * (float10)0.14);
      local_7c = fVar1;
      FUN_200390a0(local_78,&local_64,&local_88,0xfa,0xfa,0xfa,0xfa,fVar1);
      local_7c = (float)-(uint)*(byte *)(local_78 + 0x2f);
      FUN_20038f70(local_78,0,0,0,0,0,0,(float)(int)local_7c + (float)(int)local_7c,0);
      if ((param_4 != 0) && (iVar4 = FUN_200f9f57(), iVar4 % 5 == 0)) {
        iVar7 = FUN_2003b170(&local_78);
        if (iVar7 == 0) {
          return;
        }
        local_4c = local_88;
        fVar2 = (float)-param_3;
        local_48 = local_84;
        local_44 = local_80;
        local_7c = fVar2;
        fVar8 = (float10)flrand(fVar2,fVar3);
        local_4c = (float)(fVar8 + (float10)local_4c);
        fVar8 = (float10)flrand(fVar2,fVar3);
        local_48 = (float)(fVar8 + (float10)local_48);
        fVar8 = (float10)flrand(fVar2,fVar3);
        local_44 = (float)(fVar8 + (float10)local_44);
        FUN_20038110(local_78,500,0x200,7);
        FUN_200390a0(local_78,&local_64,&local_4c,0xfa,0xfa,0xfa,0xfa,fVar1);
        FUN_20038f70(local_78,0,0,0,0,0,0,0,0);
        iVar7 = local_18;
      }
      local_64 = local_88;
      local_60 = local_84;
      local_5c = local_80;
      local_84 = local_84 + local_70;
      local_80 = local_80 + local_6c;
      local_58 = local_58 + local_74;
      local_54 = local_54 + local_70;
      local_50 = local_50 + local_6c;
      local_88 = local_88 + local_74;
      iVar4 = FUN_200f9f57();
      local_7c = (float)(iVar4 % iVar5 - iVar7);
      fVar1 = (float)(int)local_7c;
      local_88 = local_3c * fVar1 + local_88;
      local_84 = local_38 * fVar1 + local_84;
      local_80 = local_34 * fVar1 + local_80;
      iVar4 = FUN_200f9f57();
      local_7c = (float)(iVar4 % iVar5 - iVar7);
      fVar1 = (float)(int)local_7c;
      local_88 = local_30 * fVar1 + local_88;
      local_84 = local_2c * fVar1 + local_84;
      local_80 = local_28 * fVar1 + local_80;
      local_4 = local_80 - local_5c;
      local_64 = local_64 - (local_88 - local_64) * 0.06;
      local_60 = local_60 - (local_84 - local_60) * 0.06;
      local_5c = local_5c - local_4 * 0.06;
      local_88 = local_58 * 0.3 + local_88 * 0.7;
      local_84 = local_54 * 0.3 + local_84 * 0.7;
      local_80 = local_50 * 0.3 + local_80 * 0.7;
      if (local_68 == local_40 + -2) {
        local_88 = *param_2;
        local_84 = param_2[1];
        local_80 = param_2[2];
      }
      local_68 = local_68 + 1;
    } while (local_68 < local_40 + -1);
  }
  return;
}

