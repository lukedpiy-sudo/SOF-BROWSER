// rea decompile_all
// name: FUN_2008fd20
// address: 0x2008fd20
// body: available
// range: 0x2008fd20-0x2009001d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2008fd20(undefined4 param_1,uint param_2)

{
  uint uVar1;
  float10 fVar2;
  float10 fVar3;
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
  
  uVar1 = param_2 & 0xff;
  local_3c = (float)(&DAT_20404c90)[uVar1 * 3];
  local_38 = (float)(&DAT_20404c94)[uVar1 * 3];
  local_34 = (float)(&DAT_20404c98)[uVar1 * 3];
  local_24 = local_3c;
  local_20 = local_38;
  local_1c = local_34;
  FUN_200c3980();
  local_3c = ((float)(param_2 >> 8 & 0xf) * 0.018666666 - 0.14) + local_3c;
  local_38 = ((float)(param_2 >> 0xc & 0xf) * 0.018666666 - 0.14) + local_38;
  local_34 = ((float)(param_2 >> 0x10 & 0xf) * 0.018666666 - 0.14) + local_34;
  fVar2 = (float10)FUN_200790d0();
  if (fVar2 <= (float10)1e-10) {
    FUN_2007ebc0(0);
  }
  else {
    FUN_200c3870((float)fVar2);
  }
  FUN_200c38a0(&local_3c);
  fVar2 = (float10)FUN_200790d0();
  if (fVar2 <= (float10)1e-10) {
    FUN_2007ebc0(0);
  }
  else {
    FUN_200c3870((float)fVar2);
  }
  local_c = local_3c;
  local_8 = local_38;
  local_4 = local_34;
  FUN_200c38a0(&local_24);
  fVar2 = (float10)FUN_200790d0();
  if (fVar2 <= (float10)1e-10) {
    FUN_2007ebc0(0);
  }
  else {
    FUN_200c3870((float)fVar2);
  }
  fVar3 = (float10)(param_2 >> 0x14 & 0x7ff) /
          ((float10)2047.0 / ((float10)3.1415927 + (float10)3.1415927));
  fVar2 = (float10)fcos(fVar3);
  fVar3 = (float10)fsin(fVar3);
  local_18 = (float)((float10)local_c * fVar3 + (float10)(float)((float10)local_24 * fVar2));
  local_14 = (float)((float10)local_20 * fVar2) + (float)((float10)local_8 * fVar3);
  local_10 = (float)(fVar2 * (float10)local_1c + (float10)(float)((float10)local_4 * fVar3));
  fVar2 = (float10)FUN_200790d0();
  if (fVar2 <= (float10)1e-10) {
    FUN_2007ebc0(0);
  }
  else {
    FUN_200c3870((float)fVar2);
  }
  local_30 = local_3c;
  local_2c = local_38;
  local_28 = local_34;
  FUN_200c38a0(&local_18);
  if ((int)param_2 < 0) {
    local_30 = local_30 * -1.0;
    local_2c = local_2c * -1.0;
    local_28 = local_28 * -1.0;
  }
  fVar2 = (float10)FUN_200790d0();
  if (fVar2 <= (float10)1e-10) {
    FUN_2007ebc0(0);
  }
  else {
    FUN_200c3870((float)fVar2);
  }
  FUN_200a1600(0,&local_3c);
  FUN_200a1600(1,&local_18);
  FUN_200a1600(2,&local_30);
  return;
}

