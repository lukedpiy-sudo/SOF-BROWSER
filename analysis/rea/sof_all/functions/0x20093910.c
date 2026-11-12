// rea decompile_all
// name: FUN_20093910
// address: 0x20093910
// body: available
// range: 0x20093910-0x20093b12 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20093910(float *param_1,undefined4 *param_2,float param_3,undefined4 param_4,char param_5)

{
  float *pfVar1;
  undefined1 *in_ECX;
  float10 fVar2;
  undefined4 local_18;
  undefined4 uStack_14;
  float fStack_10;
  undefined4 local_c;
  undefined4 uStack_8;
  float fStack_4;
  
  if ((in_ECX[0x131] != '\0') && (in_ECX[0x130] != param_5)) {
    if (*(int *)(in_ECX + 0xb8) != -1) {
      if (in_ECX[0x130] == '\0') {
        (**(code **)(DAT_20403c04 + 0x24))(1,in_ECX + 0xb8);
      }
      else {
        (**(code **)(DAT_20403c04 + 0x24))(0x10);
      }
    }
    *(undefined4 *)(in_ECX + 0xb8) = 0xffffffff;
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb0));
    *(undefined4 *)(in_ECX + 0xb0) = 0;
    FUN_200f9f75(*(undefined4 *)(in_ECX + 0xb4));
    *(undefined4 *)(in_ECX + 0xb4) = 0;
    in_ECX[0x131] = 0;
  }
  in_ECX[0x131] = 1;
  in_ECX[0x130] = param_5;
  *(undefined4 *)(in_ECX + 0xc) = param_4;
  *(undefined4 *)(in_ECX + 0x1c) = *param_2;
  *(undefined4 *)(in_ECX + 0x20) = param_2[1];
  *(undefined4 *)(in_ECX + 0x24) = param_2[2];
  local_18 = *param_2;
  uStack_14 = param_2[1];
  fStack_10 = (float)param_2[2];
  fStack_4 = fStack_10 - 500.0;
  local_c = local_18;
  uStack_8 = uStack_14;
  fVar2 = (float10)(*DAT_20403d64)(&local_18,&local_c);
  *(float *)(in_ECX + 8) = (float)fVar2;
  if (fVar2 < (float10)0.0) {
    *in_ECX = 0;
    return;
  }
  *in_ECX = 1;
  *(float *)(in_ECX + 0xc) = (float)(((float10)1.0 - fVar2) * (float10)*(float *)(in_ECX + 0xc));
  *(float *)(in_ECX + 4) = (float)((float10)fStack_10 - (float10)495.0 * fVar2);
  fVar2 = fVar2 * (float10)24.75;
  if (fVar2 <= (float10)1.0) {
    if (fVar2 < (float10)0.0) {
      fVar2 = (float10)0.0;
    }
  }
  else {
    fVar2 = (float10)1.0;
  }
  pfVar1 = (float *)(in_ECX + 0x10);
  *pfVar1 = *param_1;
  *(float *)(in_ECX + 0x14) = param_1[1];
  *(float *)(in_ECX + 0x18) = param_1[2];
  *pfVar1 = (float)(fVar2 * (float10)*pfVar1);
  *(float *)(in_ECX + 0x14) = (float)(fVar2 * (float10)*(float *)(in_ECX + 0x14));
  *(float *)(in_ECX + 0x18) = (float)(fVar2 * (float10)*(float *)(in_ECX + 0x18));
  *(float *)(in_ECX + 0x18) = (float)(((float10)1.0 - fVar2) + (float10)*(float *)(in_ECX + 0x18));
  FUN_200c3870(SQRT(*(float *)(in_ECX + 0x18) * *(float *)(in_ECX + 0x18) +
                    *(float *)(in_ECX + 0x14) * *(float *)(in_ECX + 0x14) + *pfVar1 * *pfVar1));
  *pfVar1 = param_3 * *pfVar1;
  *(float *)(in_ECX + 0x14) = param_3 * *(float *)(in_ECX + 0x14);
  *(float *)(in_ECX + 0x18) = param_3 * *(float *)(in_ECX + 0x18);
  *pfVar1 = *(float *)(in_ECX + 0x1c) + *pfVar1;
  *(float *)(in_ECX + 0x14) = *(float *)(in_ECX + 0x20) + *(float *)(in_ECX + 0x14);
  *(float *)(in_ECX + 0x18) = *(float *)(in_ECX + 0x24) + *(float *)(in_ECX + 0x18);
  return;
}

