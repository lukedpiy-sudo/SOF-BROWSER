// rea decompile_all
// name: FUN_200ac200
// address: 0x200ac200
// body: available
// range: 0x200ac200-0x200ac50f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_200ac200(float *param_1,float *param_2,float *param_3,float *param_4,float *param_5,
                 float *param_6)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
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
  
  local_18 = *param_4 - *param_3;
  local_30 = *param_5;
  local_2c = param_5[1];
  local_14 = param_4[1] - param_3[1];
  local_28 = param_5[2];
  local_10 = param_4[2] - param_3[2];
  FUN_200c38a0(&local_18);
  fVar1 = (*param_2 - *param_1) * local_30 +
          (param_2[1] - param_1[1]) * local_2c + (param_2[2] - param_1[2]) * local_28;
  fVar2 = ABS(fVar1);
  if (fVar2 < 0.01) {
    return (uint)(ushort)((ushort)(fVar2 < 0.01) << 8 | (ushort)NAN(fVar2) << 10 |
                         (ushort)(fVar2 == 0.01) << 0xe);
  }
  fVar1 = -(((local_2c * param_1[1] + local_28 * param_1[2] + local_30 * *param_1) -
            (local_28 * param_3[2] + local_30 * *param_3 + local_2c * param_3[1])) / fVar1);
  if (fVar1 < 0.0) {
    return (uint)(ushort)((ushort)(fVar1 < 0.0) << 8 | (ushort)NAN(fVar1) << 10 |
                         (ushort)(fVar1 == 0.0) << 0xe);
  }
  if (fVar1 >= 1.0 && (fVar1 == 1.0) == 0) {
    return (uint)(byte)(fVar1 < 1.0 | (byte)((ushort)((ushort)(fVar1 == 1.0) << 0xe) >> 8)) << 8;
  }
  local_24 = (*param_2 - *param_1) * fVar1 + *param_1;
  local_20 = (param_2[1] - param_1[1]) * fVar1 + param_1[1];
  local_1c = (param_2[2] - param_1[2]) * fVar1 + param_1[2];
  local_3c = (local_24 - *param_3) - *param_5;
  local_38 = (local_20 - param_3[1]) - param_5[1];
  local_34 = (local_1c - param_3[2]) - param_5[2];
  FUN_200c38a0(&local_18);
  fVar1 = local_3c * local_30 + local_38 * local_2c + local_34 * local_28;
  if (fVar1 >= 0.0 && (fVar1 == 0.0) == 0) {
    return (uint)(byte)(fVar1 < 0.0 | (byte)((ushort)((ushort)(fVar1 == 0.0) << 0xe) >> 8)) << 8;
  }
  local_3c = local_24;
  local_38 = local_20;
  local_34 = local_1c;
  FUN_20068250(param_4);
  FUN_200c38a0(param_5);
  fVar3 = (float10)FUN_20090310(&local_30);
  fVar4 = (float10)0.0;
  if (fVar3 < fVar4) {
    return (uint)(ushort)((ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
  }
  FUN_200802f0(&local_24);
  FUN_20068250(param_3);
  FUN_200802f0(&local_3c);
  FUN_200c38a0(&local_18);
  fVar3 = (float10)FUN_20090310(&local_30);
  fVar4 = (float10)0.0;
  if (fVar3 < fVar4) {
    return (uint)(ushort)((ushort)(fVar3 < fVar4) << 8 | (ushort)(NAN(fVar3) || NAN(fVar4)) << 10 |
                         (ushort)(fVar3 == fVar4) << 0xe);
  }
  FUN_200802f0(&local_3c);
  FUN_200c38a0(param_5);
  fVar3 = (float10)FUN_20090310(&local_30);
  fVar4 = (float10)0.0;
  if (fVar3 >= fVar4 && (fVar3 == fVar4) == 0) {
    return (uint)(byte)(fVar3 < fVar4 | (byte)((ushort)((ushort)(fVar3 == fVar4) << 0xe) >> 8)) << 8
    ;
  }
  fVar4 = (float10)FUN_20090310(param_5);
  fVar3 = (float10)FUN_200ac510();
  fVar3 = (float10)(float)fVar4 / fVar3;
  fVar4 = (float10)*param_6;
  if (fVar3 >= fVar4 && (fVar3 == fVar4) == 0) {
    return (uint)(byte)(fVar3 < fVar4 | (byte)((ushort)((ushort)(fVar3 == fVar4) << 0xe) >> 8)) << 8
    ;
  }
  FUN_200802f0(&local_24);
  *param_6 = (float)fVar3;
  return CONCAT31((int3)((uint)(float)fVar3 >> 8),1);
}

