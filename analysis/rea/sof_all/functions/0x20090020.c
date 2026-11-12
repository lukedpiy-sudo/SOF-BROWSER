// rea decompile_all
// name: FUN_20090020
// address: 0x20090020
// body: available
// range: 0x20090020-0x200902b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20090020(float *param_1,uint *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  int iVar8;
  float10 fVar9;
  float local_30;
  float local_2c;
  float local_28;
  
  fVar1 = param_1[4];
  fVar2 = *param_1;
  fVar3 = param_1[8];
  local_2c = param_1[5];
  local_30 = param_1[1];
  local_28 = param_1[9];
  fVar9 = (float10)FUN_200790d0();
  if (fVar9 <= (float10)1e-10) {
    local_30 = 0.0;
    local_2c = 0.0;
    local_28 = 0.0;
  }
  else {
    FUN_200c3870();
  }
  fVar9 = (float10)FUN_200790d0();
  if ((float10)1e-10 < fVar9) {
    FUN_200c3870();
  }
  uVar7 = FUN_2008fae0();
  *param_2 = uVar7;
  uVar7 = uVar7 & 0xff;
  fVar4 = (float)(&DAT_20404c90)[uVar7 * 3];
  fVar5 = (float)(&DAT_20404c94)[uVar7 * 3];
  fVar6 = (float)(&DAT_20404c98)[uVar7 * 3];
  FUN_200c3980();
  FUN_200c38a0();
  fVar9 = (float10)FUN_200790d0();
  if (fVar9 <= (float10)1e-10) {
    FUN_2007ebc0();
  }
  else {
    FUN_200c3870();
  }
  FUN_200c38a0();
  fVar9 = (float10)FUN_200790d0();
  if (fVar9 <= (float10)1e-10) {
    FUN_2007ebc0();
  }
  else {
    FUN_200c3870();
  }
  fVar9 = (float10)fpatan((float10)fVar2 * (float10)local_30 +
                          (float10)fVar1 * (float10)local_2c + (float10)fVar3 * (float10)local_28,
                          (float10)local_30 * (float10)fVar4 +
                          (float10)fVar5 * (float10)local_2c + (float10)fVar6 * (float10)local_28);
  if (fVar9 < (float10)0.0) {
    fVar9 = (float10)3.1415927 + (float10)3.1415927 + fVar9;
  }
  FUN_200fc6f3((double)((fVar9 * (float10)2047.0) / ((float10)3.1415927 + (float10)3.1415927)));
  iVar8 = __ftol();
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (0x7ff < iVar8) {
    iVar8 = 0x7ff;
  }
  *param_2 = *param_2 | iVar8 << 0x14;
  FUN_200c38a0();
  FUN_200902c0();
  fVar9 = (float10)FUN_20090310();
  if (fVar9 < (float10)0.0) {
    *param_2 = *param_2 | 0x80000000;
  }
  return;
}

