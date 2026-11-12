// rea decompile_all
// name: FUN_200280f0
// address: 0x200280f0
// body: available
// range: 0x200280f0-0x200283bd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200280f0(float *param_1,float *param_2,float param_3,float param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  undefined4 uVar5;
  float10 fVar6;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  pfVar3 = param_2;
  if (param_3 != 0.0) {
    if (param_3 == 1.0) {
      local_24 = *param_2;
      local_20 = param_2[1];
      local_1c = param_2[2];
    }
    else {
      fVar1 = (param_3 - 1.0) / param_3;
      fVar2 = 1.0 / param_3;
      local_24 = fVar2 * *param_2 + fVar1 * *param_1;
      local_20 = fVar2 * param_2[1] + fVar1 * param_1[1];
      local_1c = fVar2 * param_2[2] + fVar1 * param_1[2];
    }
    fVar6 = (float10)flrand(0xc2b40000,0x42b40000);
    local_24 = (float)(fVar6 + (float10)local_24);
    fVar6 = (float10)flrand(0xc2b40000,0x42b40000);
    local_20 = (float)(fVar6 + (float10)local_20);
    fVar6 = (float10)flrand(0xc2b40000,0x42b40000);
    local_1c = (float)(fVar6 + (float10)local_1c);
    local_c = (local_24 - *param_1) * 1.1 + *param_1;
    local_8 = (local_20 - param_1[1]) * 1.1 + param_1[1];
    local_4 = (local_1c - param_1[2]) * 1.1 + param_1[2];
    iVar4 = FUN_2003b170(&param_2);
    if (iVar4 != 0) {
      FUN_20038110(param_2,500,0x200,7);
      FUN_200390a0(param_2,param_1,&local_c,0xfa,0xfa,0xfa,0xfa,param_5 * 10.0);
      FUN_20038f70(param_2,0,0,0,0,0,0,
                   (float)(int)-(uint)*(byte *)((int)param_2 + 0x2f) +
                   (float)(int)-(uint)*(byte *)((int)param_2 + 0x2f),0);
      fVar6 = (float10)flrand(0,0x3f800000);
      fVar2 = param_5;
      fVar1 = param_4;
      if (fVar6 < (float10)param_4) {
        local_18 = *pfVar3;
        local_14 = pfVar3[1];
        local_10 = pfVar3[2];
        fVar6 = (float10)flrand(0xc2a00000,0x42a00000);
        local_18 = (float)(fVar6 * (float10)param_3 + (float10)local_18);
        fVar6 = (float10)flrand(0xc2a00000,0x42a00000);
        local_14 = (float)(fVar6 * (float10)param_3 + (float10)local_14);
        fVar6 = (float10)flrand(0xc2a00000,0x42a00000);
        local_10 = (float)(fVar6 * (float10)param_3 + (float10)local_10);
        fVar6 = (float10)flrand(0x3dcccccd,fVar2);
        fVar6 = (float10)flrand(0,fVar1,(float)fVar6);
        uVar5 = __ftol((float)fVar6);
        param_5 = (float)irand(1,uVar5);
        FUN_200280f0(&local_24,&local_18,(float)(int)param_5);
      }
      FUN_200280f0(&local_24,pfVar3,param_3 - 1.0,fVar1,fVar2);
    }
  }
  return;
}

