// rea decompile_all
// name: FUN_20036160
// address: 0x20036160
// body: available
// range: 0x20036160-0x20036aa8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20036160(uint *param_1,float param_2,int param_3)

{
  float fVar1;
  float *pfVar2;
  int in_ECX;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  uint uVar9;
  uint uVar10;
  float local_250;
  float local_24c;
  float local_248;
  uint local_244;
  float local_240;
  int local_23c;
  uint *local_238;
  int local_234;
  float local_230;
  float local_22c;
  int local_228;
  float local_224;
  float local_220;
  float local_21c;
  float local_218;
  float local_214;
  float local_210;
  float local_20c;
  float local_208;
  float local_204;
  float local_200;
  float local_1fc;
  float local_1f8;
  uint local_1f0;
  uint local_1ec;
  uint local_1e8;
  float local_1e4;
  float local_1e0;
  uint local_1d8;
  uint local_1d4;
  uint local_1d0;
  float local_1cc;
  int local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  uint local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  uint local_1a0;
  uint local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  float local_188 [4];
  float local_178;
  int local_160;
  float local_150 [4];
  float local_140;
  float local_118 [4];
  float local_108;
  float local_e0 [5];
  undefined1 local_cc [36];
  undefined1 local_a8 [56];
  undefined1 local_70 [56];
  undefined1 local_38 [56];
  
  local_22c = *(float *)(in_ECX + 0x54);
  local_230 = 1.0;
  if ((float)param_1[1] != 0.0) {
    local_230 = (float)param_1[1];
  }
  if ((*(byte *)(in_ECX + 0x28) & 4) != 0) {
    local_230 = (param_2 * *(float *)(in_ECX + 0x60) + (1.0 - param_2) * *(float *)(in_ECX + 100)) *
                local_230;
    local_22c = local_22c * local_230;
  }
  local_228 = in_ECX;
  if (*(int *)(in_ECX + 0x20) == 3) {
    fVar7 = (float10)flrand(0,0x40c8f5c3);
    local_1cc = (float)fVar7;
  }
  local_244 = *(uint *)(in_ECX + 0x24);
  if (param_1[2] != 0) {
    local_244 = param_1[2];
  }
  if (((*(byte *)(in_ECX + 0x28) & 0x10) != 0) &&
     (fVar1 = ((float)param_1[4] - DAT_201e8ff4) * ((float)param_1[4] - DAT_201e8ff4) +
              ((float)param_1[5] - DAT_201e8ff8) * ((float)param_1[5] - DAT_201e8ff8) +
              ((float)param_1[3] - DAT_201e8ff0) * ((float)param_1[3] - DAT_201e8ff0),
     262144.0 < fVar1)) {
    if (fVar1 - 262144.0 <= 262144.0) {
      local_244 = __ftol();
    }
    else {
      local_244 = 1;
    }
  }
  if ((*(int *)(in_ECX + 0x20) == 2) && (*(float *)(in_ECX + 0x74) != 0.0)) {
    local_218 = (float)param_1[3] - (float)param_1[6];
    local_214 = (float)param_1[4] - (float)param_1[7];
    local_210 = (float)param_1[5] - (float)param_1[8];
    VectorLength(&local_218);
    local_244 = __ftol();
  }
  if (((*(byte *)(in_ECX + 0x28) & 0x20) != 0) || (*(int *)(in_ECX + 0x20) == 8)) {
    local_1f0 = param_1[9];
    local_1ec = param_1[10];
    local_1e8 = param_1[0xb];
    local_1d8 = param_1[0xf];
    local_1d4 = param_1[0x10];
    local_1d0 = param_1[0x11];
    local_218 = (float)param_1[0xc];
    local_214 = (float)param_1[0xd];
    local_210 = (float)param_1[0xe];
  }
  if ((int)local_244 < 1) {
    local_244 = 1;
  }
  puVar4 = param_1 + 0x12;
  if ((*param_1 & 0x10) == 0) {
    puVar4 = (uint *)(in_ECX + 0x30);
  }
  if ((*param_1 & 0x20) == 0) {
    puVar5 = (uint *)(in_ECX + 0x3c);
  }
  else {
    puVar5 = param_1 + 0x15;
  }
  local_234 = 0;
  local_238 = puVar5;
  if (0 < (int)local_244) {
    do {
      switch(*(undefined4 *)(in_ECX + 0x20)) {
      case 0:
        if ((*(byte *)(in_ECX + 0x28) & 1) == 0) {
          local_250 = (float)param_1[3];
          local_24c = (float)param_1[4];
          local_248 = (float)param_1[5];
        }
        else {
          local_250 = 0.0;
          local_24c = 0.0;
          local_248 = 0.0;
        }
        break;
      case 1:
        if ((*(byte *)(in_ECX + 0x28) & 1) == 0) {
          fVar7 = (float10)flrand(*puVar4,*puVar5);
          local_250 = (float)(fVar7 * (float10)(float)param_1[9] + (float10)(float)param_1[3]);
          local_24c = (float)(fVar7 * (float10)(float)param_1[10] + (float10)(float)param_1[4]);
          local_248 = (float)(fVar7 * (float10)(float)param_1[0xb] + (float10)(float)param_1[5]);
          fVar7 = (float10)flrand(puVar4[1],puVar5[1]);
          uVar10 = puVar5[2];
          uVar9 = puVar4[2];
          goto LAB_200365d2;
        }
        local_1c8 = (int)local_238 - (int)puVar4;
        local_23c = (int)&local_250 - (int)puVar4;
        local_240 = 4.2039e-45;
        puVar5 = puVar4;
        do {
          fVar7 = (float10)flrand(*puVar5,*(undefined4 *)(local_1c8 + (int)puVar5));
          *(float *)(local_23c + (int)puVar5) = (float)fVar7;
          puVar5 = puVar5 + 1;
          local_240 = (float)((int)local_240 + -1);
        } while (local_240 != 0.0);
        local_240 = 0.0;
        puVar5 = local_238;
        break;
      case 2:
        local_23c = local_234 + 1;
        fVar1 = 1.0 - (float)local_23c / (float)(int)local_244;
        local_248 = fVar1 * (float)param_1[5];
        local_240 = 1.0 - fVar1;
        local_250 = local_240 * (float)param_1[6] + fVar1 * (float)param_1[3];
        local_24c = local_240 * (float)param_1[7] + fVar1 * (float)param_1[4];
        fVar1 = local_240 * (float)param_1[8];
LAB_20036585:
        local_248 = fVar1 + local_248;
        fVar7 = (float10)flrand(*puVar4,*puVar5);
        local_250 = (float)(fVar7 * (float10)(float)param_1[9] + (float10)local_250);
        local_24c = (float)(fVar7 * (float10)(float)param_1[10] + (float10)local_24c);
        local_248 = (float)(fVar7 * (float10)(float)param_1[0xb] + (float10)local_248);
        fVar7 = (float10)flrand(puVar4[1],puVar5[1]);
        uVar10 = puVar5[2];
        uVar9 = puVar4[2];
LAB_200365d2:
        local_250 = (float)(fVar7 * (float10)(float)param_1[0xf] + (float10)local_250);
        local_24c = (float)(fVar7 * (float10)(float)param_1[0x10] + (float10)local_24c);
        local_248 = (float)(fVar7 * (float10)(float)param_1[0x11] + (float10)local_248);
        fVar7 = (float10)flrand(uVar9,uVar10);
        local_250 = (float)(fVar7 * (float10)(float)param_1[0xc] + (float10)local_250);
        local_24c = (float)(fVar7 * (float10)(float)param_1[0xd] + (float10)local_24c);
        local_248 = (float)(fVar7 * (float10)(float)param_1[0xe] + (float10)local_248);
        break;
      case 3:
        local_248 = (float)param_1[5];
        local_23c = local_234 + 1;
        fVar7 = ((float10)local_23c / (float10)(int)local_244 + (float10)local_1cc) *
                (float10)6.283185307179586;
        fVar8 = (float10)fcos(fVar7);
        local_250 = (float)(fVar8 * (float10)local_22c + (float10)(float)param_1[3]);
        fVar7 = (float10)fsin(fVar7);
        local_24c = (float)(fVar7 * (float10)local_22c + (float10)(float)param_1[4]);
        break;
      case 4:
        if ((*(byte *)(in_ECX + 0x28) & 1) == 0) {
          local_248 = (float)param_1[5];
          local_240 = (float)local_234 * *(float *)(in_ECX + 0x74);
          local_250 = local_240 * (float)param_1[9] + (float)param_1[3];
          local_24c = local_240 * (float)param_1[10] + (float)param_1[4];
          fVar1 = local_240 * (float)param_1[0xb];
          goto LAB_20036585;
        }
        fVar7 = (float10)flrand(*puVar4,*puVar5);
        local_250 = (float)((float10)local_234 * (float10)*(float *)(in_ECX + 0x74) + fVar7);
        fVar7 = (float10)flrand(puVar4[1],puVar5[1]);
        local_24c = (float)fVar7;
        fVar7 = (float10)flrand(puVar4[2],puVar5[2]);
        local_248 = (float)fVar7;
        break;
      case 5:
        local_250 = (float)param_1[6];
        local_24c = (float)param_1[7];
        local_248 = (float)param_1[8];
        break;
      case 6:
        local_224 = (float)param_1[3];
        local_220 = (float)param_1[4];
        local_21c = (float)param_1[5] - 512.0;
        pfVar2 = (float *)FUN_2002fdb0(local_a8,param_1 + 3,&DAT_20390c24,&DAT_20390c24,&local_224);
        pfVar6 = local_150;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_250 = local_150[2];
        pfVar2 = local_150;
        pfVar6 = local_e0;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_248 = local_140;
        local_24c = local_150[3];
        puVar5 = local_238;
        in_ECX = local_228;
        break;
      case 7:
        local_224 = (float)param_1[3];
        local_220 = (float)param_1[4];
        local_21c = (float)param_1[5] + 512.0;
        pfVar2 = (float *)FUN_2002fdb0(local_70,param_1 + 3,&DAT_20390c24,&DAT_20390c24,&local_224);
        pfVar6 = local_118;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_250 = local_118[2];
        pfVar2 = local_118;
        pfVar6 = local_e0;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_248 = local_108;
        local_24c = local_118[3];
        puVar5 = local_238;
        in_ECX = local_228;
        break;
      case 8:
        local_224 = (float)param_1[9] * 512.0 + (float)param_1[3];
        local_220 = (float)param_1[10] * 512.0 + (float)param_1[4];
        local_21c = (float)param_1[0xb] * 512.0 + (float)param_1[5];
        pfVar2 = (float *)FUN_2002fdb0(local_38,param_1 + 3,&DAT_20390c24,&DAT_20390c24,&local_224);
        pfVar6 = local_188;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_250 = local_188[2];
        local_248 = local_178;
        pfVar2 = local_188;
        pfVar6 = local_e0;
        for (iVar3 = 0xe; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar2;
          pfVar2 = pfVar2 + 1;
          pfVar6 = pfVar6 + 1;
        }
        local_24c = local_188[3];
        puVar5 = local_238;
        in_ECX = local_228;
        if (local_160 != 0) {
          FUN_2002fe60(local_cc,&local_1e4);
          local_1e4 = local_1e4 * 57.29578;
          local_1e0 = local_1e0 * 57.29578;
          FUN_20054b30(&local_1e4,&local_1b8,&local_1ac,&local_194);
          param_1[9] = local_1b8;
          param_1[10] = local_1b4;
          param_1[0xb] = local_1b0;
          param_1[0xf] = local_1ac;
          param_1[0x10] = local_1a8;
          param_1[0x11] = local_1a4;
          param_1[0xc] = local_194;
          param_1[0xd] = local_190;
          param_1[0xe] = local_18c;
          puVar5 = local_238;
          in_ECX = local_228;
        }
      }
      if ((*(uint *)(in_ECX + 0x28) & 2) == 0) {
        local_20c = local_230;
      }
      else {
        local_23c = local_234 + 1;
        fVar1 = 1.0 - (float)local_23c / (float)(int)local_244;
        local_20c = (fVar1 * *(float *)(in_ECX + 0x58) + (1.0 - fVar1) * *(float *)(in_ECX + 0x5c))
                    * local_230;
      }
      if ((*(uint *)(in_ECX + 0x28) & 0x20) != 0) {
        local_208 = local_250 - (float)param_1[3];
        local_204 = local_24c - (float)param_1[4];
        local_200 = local_248 - (float)param_1[5];
        VectorNormalize(&local_208);
        FUN_2002fe60(&local_208,&local_1fc);
        local_1fc = local_1fc * 57.29578;
        local_1f8 = local_1f8 * 57.29578;
        FUN_20054b30(&local_1fc,&local_208,&local_1c4,&local_1a0);
        param_1[9] = (uint)local_208;
        param_1[10] = (uint)local_204;
        param_1[0xb] = (uint)local_200;
        param_1[0xf] = local_1c4;
        param_1[0x10] = local_1c0;
        param_1[0x11] = local_1bc;
        param_1[0xc] = local_1a0;
        param_1[0xd] = local_19c;
        param_1[0xe] = local_198;
      }
      local_23c = FUN_20031d00(0,&local_250,param_1,local_20c,*(undefined4 *)(in_ECX + 0x2c),
                               *(uint *)(in_ECX + 0x28) & 1);
      if (local_23c != 0) {
        *(int *)(param_3 + 0x38) = local_23c;
        *(int *)(local_23c + 0x88) = param_3;
        FUN_200424f0(local_23c);
        if ((*(byte *)(in_ECX + 0x28) & 1) != 0) {
          FUN_20038200(local_23c,param_1,&local_250);
        }
      }
      local_234 = local_234 + 1;
    } while (local_234 < (int)local_244);
  }
  if (((*(byte *)(in_ECX + 0x28) & 0x20) != 0) || (*(int *)(in_ECX + 0x20) == 8)) {
    param_1[9] = local_1f0;
    param_1[10] = local_1ec;
    param_1[0xb] = local_1e8;
    param_1[0xf] = local_1d8;
    param_1[0x10] = local_1d4;
    param_1[0x11] = local_1d0;
    param_1[0xc] = (uint)local_218;
    param_1[0xd] = (uint)local_214;
    param_1[0xe] = (uint)local_210;
  }
  return;
}

