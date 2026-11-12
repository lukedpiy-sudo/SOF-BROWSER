// rea decompile_all
// name: FUN_20031d00
// address: 0x20031d00
// body: available
// range: 0x20031d00-0x20032e7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_20031d00(int param_1,float *param_2,float param_3,float param_4,float param_5,float param_6)

{
  float fVar1;
  float *pfVar2;
  float fVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  float *in_ECX;
  uint uVar8;
  uint uVar9;
  float10 fVar10;
  float10 fVar11;
  float10 extraout_ST0;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c;
  undefined1 local_48;
  undefined1 local_44;
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
  float local_c;
  float local_8;
  float local_4;
  
  if (in_ECX[0x28] == in_ECX[0x29]) {
    local_5c = in_ECX[0x28];
  }
  else {
    fVar10 = (float10)flrand(in_ECX[0x28],in_ECX[0x29]);
    local_5c = (float)fVar10;
  }
  if (in_ECX[0xc] == 5.60519e-45) {
    iVar5 = FUN_2003b230(&param_1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  else {
    iVar5 = FUN_2003b170(&param_1);
    if (iVar5 == 0) {
      return 0;
    }
  }
  fVar3 = param_3;
  if (((uint)param_5 & 0x20) != 0) {
    local_5c = local_5c * param_4;
  }
  if (local_5c < 0.0 != (local_5c == 0.0)) {
    return 0;
  }
  if (((uint)in_ECX[0x38] & 0x1000) == 0) {
    if (param_6 == 0.0) {
      if (*in_ECX != in_ECX[1]) {
        fVar10 = (float10)flrand(*in_ECX,in_ECX[1]);
      }
      else {
        fVar10 = (float10)*in_ECX;
      }
      local_3c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x24));
      local_38 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x28));
      local_34 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x2c));
      if (in_ECX[2] == in_ECX[3]) {
        fVar10 = (float10)in_ECX[2];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[2],in_ECX[3]);
      }
      local_3c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x3c) + (float10)local_3c);
      local_38 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x40) + (float10)local_38);
      local_34 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x44) + (float10)local_34);
      if (in_ECX[4] == in_ECX[5]) {
        fVar10 = (float10)in_ECX[4];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[4],in_ECX[5]);
      }
      local_3c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x30) + (float10)local_3c);
      local_38 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x34) + (float10)local_38);
      fVar10 = fVar10 * (float10)*(float *)((int)fVar3 + 0x38) + (float10)local_34;
    }
    else {
      if (*in_ECX != in_ECX[1]) {
        fVar10 = (float10)flrand(*in_ECX,in_ECX[1]);
      }
      else {
        fVar10 = (float10)*in_ECX;
      }
      local_3c = (float)fVar10;
      if (in_ECX[2] == in_ECX[3]) {
        fVar10 = (float10)in_ECX[2];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[2],in_ECX[3]);
      }
      local_38 = (float)fVar10;
      if (in_ECX[4] == in_ECX[5]) {
        fVar10 = (float10)in_ECX[4];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[4],in_ECX[5]);
      }
    }
    local_34 = (float)fVar10;
    if (((uint)param_5 & 1) != 0) {
      local_3c = local_3c * param_4;
      local_38 = local_38 * param_4;
      local_34 = local_34 * param_4;
    }
    if (((uint)in_ECX[0x38] & 0x100) == 0) {
      if (in_ECX[6] != in_ECX[7]) {
        fVar10 = (float10)flrand(in_ECX[6],in_ECX[7]);
      }
      else {
        fVar10 = (float10)in_ECX[6];
      }
      local_30 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x24));
      local_2c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x28));
      local_28 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x2c));
      if (in_ECX[8] == in_ECX[9]) {
        fVar10 = (float10)in_ECX[8];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[8],in_ECX[9]);
      }
      local_30 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x3c) + (float10)local_30);
      local_2c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x40) + (float10)local_2c);
      local_28 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x44) + (float10)local_28);
      if (in_ECX[10] == in_ECX[0xb]) {
        fVar10 = (float10)in_ECX[10];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[10],in_ECX[0xb]);
      }
      local_30 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x30) + (float10)local_30);
      local_2c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x34) + (float10)local_2c);
      fVar10 = fVar10 * (float10)*(float *)((int)fVar3 + 0x38) + (float10)local_28;
    }
    else {
      if (in_ECX[6] != in_ECX[7]) {
        fVar10 = (float10)flrand(in_ECX[6],in_ECX[7]);
      }
      else {
        fVar10 = (float10)in_ECX[6];
      }
      local_30 = (float)fVar10;
      if (in_ECX[8] == in_ECX[9]) {
        fVar10 = (float10)in_ECX[8];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[8],in_ECX[9]);
      }
      local_2c = (float)fVar10;
      if (in_ECX[10] == in_ECX[0xb]) {
        fVar10 = (float10)in_ECX[10];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[10],in_ECX[0xb]);
      }
    }
    local_28 = (float)fVar10;
    if (((uint)param_5 & 2) != 0) {
      local_30 = local_30 * param_4;
      local_2c = local_2c * param_4;
      local_28 = local_28 * param_4;
    }
  }
  else {
    local_3c = *(float *)((int)param_3 + 0x18) - *param_2;
    local_38 = *(float *)((int)param_3 + 0x1c) - param_2[1];
    local_34 = *(float *)((int)param_3 + 0x20) - param_2[2];
    fVar10 = (float10)VectorNormalize(&local_3c);
    fVar10 = fVar10 / (float10)local_5c;
    local_3c = (float)((float10)local_3c * fVar10);
    local_38 = (float)((float10)local_38 * fVar10);
    local_34 = (float)(fVar10 * (float10)local_34);
    if (in_ECX[2] == in_ECX[3]) {
      param_3 = in_ECX[2];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[2],in_ECX[3]);
      param_3 = (float)fVar10;
    }
    if (in_ECX[4] == in_ECX[5]) {
      fVar10 = (float10)in_ECX[4];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[4],in_ECX[5]);
    }
    local_3c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x30) +
                      (float10)param_3 * (float10)*(float *)((int)fVar3 + 0x3c) + (float10)local_3c)
    ;
    local_38 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x34) +
                      (float10)param_3 * (float10)*(float *)((int)fVar3 + 0x40) + (float10)local_38)
    ;
    local_34 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x38) +
                      (float10)(param_3 * *(float *)((int)fVar3 + 0x44) + local_34));
    fVar11 = ((float10)param_3 * (float10)-1.9) / (float10)local_5c;
    fVar10 = (fVar10 * (float10)-1.9) / (float10)local_5c;
    local_30 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x30) +
                      (float10)(float)(fVar11 * (float10)*(float *)((int)fVar3 + 0x3c)));
    local_2c = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x34) +
                      (float10)(float)(fVar11 * (float10)*(float *)((int)fVar3 + 0x40)));
    local_28 = (float)(fVar10 * (float10)*(float *)((int)fVar3 + 0x38) +
                      fVar11 * (float10)*(float *)((int)fVar3 + 0x44));
  }
  if (in_ECX[0x30] == in_ECX[0x31]) {
    fVar10 = (float10)in_ECX[0x30];
  }
  else {
    fVar10 = (float10)flrand(in_ECX[0x30],in_ECX[0x31]);
  }
  if (((uint)param_5 & 0x10) != 0) {
    fVar10 = fVar10 * (float10)param_4;
  }
  switch(in_ECX[0x6d]) {
  case 0.0:
    bVar4 = __ftol();
    param_3 = (float)CONCAT31(param_3._1_3_,bVar4);
    fVar10 = (float10)bVar4 * (float10)in_ECX[0x32] - (float10)bVar4;
    goto LAB_20032253;
  case 1.4013e-45:
    uVar8 = __ftol();
    param_3 = (float)(uVar8 & 0xff);
    bVar4 = __ftol();
    param_3 = (float)CONCAT31(param_3._1_3_,bVar4);
    fVar10 = extraout_ST0 - (float10)bVar4;
LAB_20032253:
    param_6 = (float)(fVar10 / (float10)local_5c);
    break;
  case 2.8026e-45:
  case 4.2039e-45:
    param_6 = (float)fVar10;
    param_3 = (float)CONCAT31(param_3._1_3_,1);
  }
  fVar1 = in_ECX[0x38];
  uVar9 = 0;
  uVar8 = ((int)SUB41(fVar1,0) & 0x10U) >> 4;
  if (((uint)fVar1 & 2) != 0) {
    uVar9 = 8;
  }
  if (((uint)fVar1 & 4) != 0) {
    uVar9 = uVar9 | 0x200;
  }
  if (((uint)fVar1 & 8) != 0) {
    uVar9 = uVar9 | 0x400;
  }
  if ((((uint)fVar1 & 0x400) != 0) &&
     (fVar10 = (float10)flrand(0,0x3f800000), fVar10 < (float10)0.5)) {
    uVar9 = uVar9 | 0x200;
  }
  fVar1 = in_ECX[0x38];
  if (((uint)fVar1 & 0x40) != 0) {
    uVar9 = uVar9 | 0x4000;
  }
  if (SUB41(fVar1,0) < '\0') {
    uVar9 = uVar9 | 0x8000;
  }
  if (((uint)fVar1 & 0x2000) != 0) {
    uVar9 = uVar9 | 1;
  }
  if (((uint)fVar1 & 0x800) != 0) {
    uVar9 = uVar9 | 0x80;
  }
  if (((uint)fVar1 & 0x80000) != 0) {
    uVar9 = uVar9 | 0x800;
  }
  uVar6 = __ftol();
  FUN_20038110(param_1,uVar6,uVar9,0x23);
  if ((in_ECX[0xc] != 4.2039e-45) && (in_ECX[0xc] != 5.60519e-45)) {
    uVar7 = FUN_20037e40(in_ECX + 0x18);
    *(undefined4 *)(param_1 + 0x34) = uVar7;
  }
  switch(in_ECX[0x6e]) {
  case 0.0:
    flrand(0,0x3f800000);
    local_44 = __ftol();
    local_48 = __ftol();
    local_4c = __ftol();
    goto switchD_20032344_default;
  case 1.4013e-45:
    if (in_ECX[0x2a] != in_ECX[0x2b]) {
      flrand(in_ECX[0x2a],in_ECX[0x2b]);
    }
    local_44 = __ftol();
    if (in_ECX[0x2c] != in_ECX[0x2d]) {
      flrand(in_ECX[0x2c],in_ECX[0x2d]);
    }
    local_48 = __ftol();
    if (in_ECX[0x2e] != in_ECX[0x2f]) {
      flrand(in_ECX[0x2e],in_ECX[0x2f]);
    }
    break;
  case 2.8026e-45:
  case 4.2039e-45:
    local_44 = __ftol();
    local_48 = __ftol();
    break;
  default:
    goto switchD_20032344_default;
  }
  local_4c = __ftol();
switchD_20032344_default:
  fVar1 = in_ECX[0xc];
  if (fVar1 == 1.4013e-45) {
    if (in_ECX[0xd] == in_ECX[0xe]) {
      local_58 = in_ECX[0xd];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0xd],in_ECX[0xe]);
      local_58 = (float)fVar10;
    }
    uVar9 = (uint)param_5 & 4;
    if (uVar9 != 0) {
      local_58 = local_58 * param_4;
    }
    if (((uint)in_ECX[0x38] & 1) == 0) {
      if (in_ECX[0x11] == in_ECX[0x12]) {
        local_54 = in_ECX[0x11];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[0x11],in_ECX[0x12]);
        local_54 = (float)fVar10;
      }
      if (((uint)param_5 & 8) != 0) {
        local_54 = local_54 * param_4;
      }
    }
    else {
      local_54 = local_58;
    }
    fVar1 = in_ECX[0x15];
    if (fVar1 == 0.0) {
      fVar10 = (float10)FUN_2002fe00(&local_3c,&local_24);
      if (fVar10 < (float10)0.1) {
        FUN_2002fe00(&local_30,&local_24);
      }
      if (in_ECX[0x16] == in_ECX[0x17]) {
        fVar10 = (float10)in_ECX[0x16];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[0x16],in_ECX[0x17]);
      }
      local_24 = (float)((float10)local_24 * fVar10 + (float10)*param_2);
      local_20 = (float)((float10)local_20 * fVar10 + (float10)param_2[1]);
      local_1c = (float)((float10)local_1c * fVar10 + (float10)param_2[2]);
    }
    else if (fVar1 == 1.4013e-45) {
      if ((float *)((int)fVar3 + 0x18) != (float *)0x0) {
        local_24 = *(float *)((int)fVar3 + 0x18);
        local_20 = *(float *)((int)fVar3 + 0x1c);
        local_1c = *(float *)((int)fVar3 + 0x20);
      }
    }
    else if (fVar1 == 4.2039e-45) {
      fVar10 = (float10)FUN_2002fe00(&local_3c,&local_24);
      if (fVar10 < (float10)0.1) {
        FUN_2002fe00(&local_30,&local_24);
      }
      if (in_ECX[0x16] == in_ECX[0x17]) {
        fVar10 = (float10)in_ECX[0x16];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[0x16],in_ECX[0x17]);
      }
      local_3c = 0.0;
      local_38 = 0.0;
      local_34 = 0.0;
      local_24 = (float)((float10)local_24 * fVar10 + (float10)*param_2);
      local_20 = (float)((float10)local_20 * fVar10 + (float10)param_2[1]);
      local_1c = (float)((float10)local_1c * fVar10 + (float10)param_2[2]);
    }
    else {
      local_24 = 0.0;
      local_20 = 0.0;
      local_1c = 0.0;
    }
    pfVar2 = param_2;
    if (in_ECX[0xf] == in_ECX[0x10]) {
      param_2 = (float *)in_ECX[0xf];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0xf],in_ECX[0x10]);
      param_2 = (float *)(float)fVar10;
    }
    if (uVar9 != 0) {
      param_2 = (float *)((float)param_2 * param_4);
    }
    if (in_ECX[0x13] == in_ECX[0x14]) {
      fVar10 = (float10)in_ECX[0x13];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x13],in_ECX[0x14]);
    }
    if (((uint)param_5 & 8) != 0) {
      fVar10 = fVar10 * (float10)param_4;
    }
    if (((uint)in_ECX[0x38] & 0x10000) == 0) {
      param_5 = (float)(((float10)(float)param_2 - (float10)local_58) *
                       ((float10)1.0 / (float10)local_5c));
      param_4 = (float)((fVar10 - (float10)local_54) * ((float10)1.0 / (float10)local_5c));
    }
    else {
      param_5 = 0.0;
      param_4 = 0.0;
    }
    FUN_200390a0(param_1,pfVar2,&local_24,local_44,local_48,local_4c,param_3,local_58);
    FUN_20038f70(param_1,&local_3c,&local_30,&local_3c,&local_30,param_5,param_4,param_6,uVar8);
    *(float *)(param_1 + 0x1c) = local_54;
    if (in_ECX[0x15] == 0.0) {
      if (in_ECX[0x16] == in_ECX[0x17]) {
        param_4 = in_ECX[0x16];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[0x16],in_ECX[0x17]);
        param_4 = (float)fVar10;
      }
      fVar10 = (float10)VectorLength(param_1 + 0x94);
      param_4 = (float)((float10)param_4 / fVar10);
      FUN_200381e0(param_1,param_4);
      return param_1;
    }
  }
  else if ((fVar1 == 4.2039e-45) || (fVar1 == 5.60519e-45)) {
    if (in_ECX[0xd] == in_ECX[0xe]) {
      param_3 = in_ECX[0xd];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0xd],in_ECX[0xe]);
      param_3 = (float)fVar10;
    }
    uVar9 = (uint)param_5 & 4;
    if (uVar9 != 0) {
      param_3 = param_3 * param_4;
    }
    if (in_ECX[0xf] == in_ECX[0x10]) {
      fVar10 = (float10)in_ECX[0xf];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0xf],in_ECX[0x10]);
    }
    if (uVar9 != 0) {
      fVar10 = fVar10 * (float10)param_4;
    }
    if (((uint)in_ECX[0x38] & 0x10000) == 0) {
      param_4 = (float)((fVar10 - (float10)param_3) / (float10)local_5c);
    }
    else {
      param_4 = 0.0;
    }
    FUN_2002fea0((int)fVar3 + 0x24,&local_24);
    if (in_ECX[0x61] == in_ECX[0x62]) {
      fVar10 = (float10)in_ECX[0x61];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x61],in_ECX[0x62]);
    }
    local_18 = (float)((float10)local_24 * (float10)360.0 * (float10)0.15915494309189535 + fVar10);
    if (in_ECX[99] == in_ECX[100]) {
      fVar10 = (float10)in_ECX[99];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[99],in_ECX[100]);
    }
    local_14 = (float)((float10)local_20 * (float10)360.0 * (float10)0.15915494309189535 + fVar10);
    if (in_ECX[0x65] == in_ECX[0x66]) {
      fVar10 = (float10)in_ECX[0x65];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x65],in_ECX[0x66]);
    }
    local_10 = (float)((float10)local_1c * (float10)360.0 * (float10)0.15915494309189535 + fVar10);
    if (in_ECX[0x67] == in_ECX[0x68]) {
      fVar10 = (float10)in_ECX[0x67];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x67],in_ECX[0x68]);
    }
    local_c = (float)fVar10;
    if (in_ECX[0x69] == in_ECX[0x6a]) {
      fVar10 = (float10)in_ECX[0x69];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x69],in_ECX[0x6a]);
    }
    local_8 = (float)fVar10;
    if (in_ECX[0x6b] == in_ECX[0x6c]) {
      fVar10 = (float10)in_ECX[0x6b];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x6b],in_ECX[0x6c]);
    }
    local_4 = (float)fVar10;
    if (in_ECX[0xc] == 5.60519e-45) {
      param_4 = 0.0;
      param_6 = 0.0;
    }
    FUN_2003a500(param_1,param_2,&local_18,param_3,0,uVar6);
    FUN_2003a580(param_1,&local_3c,&local_30,&local_c,uVar8,param_4,param_6);
    FUN_2003af50(param_1,in_ECX + 0x70,in_ECX + 0x18,in_ECX + 0x71);
  }
  else {
    if (in_ECX[0xd] == in_ECX[0xe]) {
      local_58 = in_ECX[0xd];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0xd],in_ECX[0xe]);
      local_58 = (float)fVar10;
    }
    uVar9 = (uint)param_5 & 4;
    if (uVar9 != 0) {
      local_58 = local_58 * param_4;
    }
    if (((uint)in_ECX[0x38] & 1) == 0) {
      if (in_ECX[0x11] == in_ECX[0x12]) {
        local_54 = in_ECX[0x11];
      }
      else {
        fVar10 = (float10)flrand(in_ECX[0x11],in_ECX[0x12]);
        local_54 = (float)fVar10;
      }
      if (((uint)param_5 & 8) != 0) {
        local_54 = local_54 * param_4;
      }
    }
    else {
      local_54 = local_58;
    }
    if (in_ECX[0xf] == in_ECX[0x10]) {
      local_50 = in_ECX[0xf];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0xf],in_ECX[0x10]);
      local_50 = (float)fVar10;
    }
    if (uVar9 != 0) {
      local_50 = local_50 * param_4;
    }
    if (in_ECX[0x13] == in_ECX[0x14]) {
      fVar10 = (float10)in_ECX[0x13];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x13],in_ECX[0x14]);
    }
    if (((uint)param_5 & 8) != 0) {
      fVar10 = fVar10 * (float10)param_4;
    }
    if (((uint)in_ECX[0x38] & 1) != 0) {
      fVar10 = (float10)local_50;
    }
    if (((uint)in_ECX[0x38] & 0x10000) == 0) {
      local_50 = (float)(((float10)local_50 - (float10)local_58) *
                        ((float10)1.0 / (float10)local_5c));
      param_5 = (float)((fVar10 - (float10)local_54) * ((float10)1.0 / (float10)local_5c));
    }
    else {
      local_50 = 0.0;
      param_5 = 0.0;
    }
    if (in_ECX[0x34] == in_ECX[0x35]) {
      param_4 = in_ECX[0x34];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x34],in_ECX[0x35]);
      param_4 = (float)fVar10;
    }
    FUN_20039e00(param_1,param_2,local_58,local_54,local_44,local_48,local_4c,param_3,param_4);
    if (in_ECX[0x36] == in_ECX[0x37]) {
      param_4 = in_ECX[0x36];
    }
    else {
      fVar10 = (float10)flrand(in_ECX[0x36],in_ECX[0x37]);
      param_4 = (float)fVar10;
    }
    FUN_20039d30(param_1,&local_3c,&local_30,param_4,local_50,param_5,param_6,uVar8);
    if (((uint)in_ECX[0x38] & 0x200) != 0) {
      *(byte *)(param_1 + 0x74) = *(byte *)(param_1 + 0x74) | 4;
    }
    if (in_ECX[0xc] == 2.8026e-45) {
      switch(in_ECX[0x15]) {
      case 0.0:
        FUN_20039dd0(param_1,(int)fVar3 + 0x24,0);
        return param_1;
      case 1.4013e-45:
        FUN_20039dd0(param_1,(int)fVar3 + 0x3c,0);
        return param_1;
      case 2.8026e-45:
        FUN_20039dd0(param_1,(int)fVar3 + 0x30,0);
        return param_1;
      case 4.2039e-45:
        local_24 = *(float *)((int)fVar3 + 0x24) * -1.0;
        local_20 = *(float *)((int)fVar3 + 0x28) * -1.0;
        local_1c = *(float *)((int)fVar3 + 0x2c) * -1.0;
        FUN_20039dd0(param_1,&local_24,0);
        return param_1;
      }
    }
  }
  return param_1;
}

