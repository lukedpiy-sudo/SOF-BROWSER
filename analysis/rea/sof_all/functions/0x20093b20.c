// rea decompile_all
// name: FUN_20093b20
// address: 0x20093b20
// body: available
// range: 0x20093b20-0x20093e0e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20093b20(undefined4 param_1,undefined4 param_2,float param_3)

{
  float fVar1;
  void *pvVar2;
  char *in_ECX;
  int iVar3;
  undefined4 *puVar4;
  float10 fVar5;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
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
  undefined1 local_4;
  undefined1 local_3;
  
  if (*in_ECX == '\0') {
    return;
  }
  local_4 = 1;
  *(float *)(in_ECX + 0xc) = param_3 * *(float *)(in_ECX + 0xc);
  local_3 = 0;
  FUN_20067ac0(param_1,param_2);
  local_4c = local_10 - local_1c;
  local_48 = local_c - local_18;
  local_44 = local_8 - local_14;
  fVar5 = (float10)FUN_200c3c00();
  param_3 = (float)(fVar5 * (float10)0.25);
  if ((float10)60.0 < fVar5 * (float10)0.25) {
    param_3 = 60.0;
  }
  local_4c = *(float *)(in_ECX + 0x1c) - *(float *)(in_ECX + 0x10);
  local_48 = *(float *)(in_ECX + 0x20) - *(float *)(in_ECX + 0x14);
  local_44 = *(float *)(in_ECX + 0x24) - *(float *)(in_ECX + 0x18);
  fVar1 = local_48 * local_48 + local_44 * local_44;
  if (local_4c * local_4c + fVar1 < 0.01) {
    local_4c = 1.0;
  }
  FUN_200c3870(SQRT(local_4c * local_4c + fVar1));
  local_3c = local_48;
  local_40 = local_4c;
  local_38 = local_44;
  FUN_200c3980();
  FUN_200c3870(SQRT(local_40 * local_40 + local_3c * local_3c + local_38 * local_38));
  local_34 = local_4c;
  local_30 = local_48;
  local_2c = local_44;
  FUN_200c38a0(&local_40);
  FUN_200c3870(SQRT(local_34 * local_34 + local_30 * local_30 + local_2c * local_2c));
  param_3 = 32.0 / param_3;
  local_40 = local_40 * param_3;
  local_3c = local_3c * param_3;
  local_38 = local_38 * param_3;
  local_34 = local_34 * param_3;
  local_30 = local_30 * param_3;
  local_2c = local_2c * param_3;
  FUN_200a0cc0();
  FUN_200a1600(0,&local_40);
  FUN_200a1600(1,&local_34);
  FUN_200a1600(2,&local_4c);
  FUN_200a0c70();
  FUN_200a14c0(&local_28,in_ECX + 0x1c);
  local_28 = local_28 * -1.0;
  local_24 = local_24 * -1.0;
  local_20 = local_20 * -1.0;
  FUN_200a15d0(3,&local_28);
  FUN_200a0c70();
  if (*(int *)(in_ECX + 0xb0) == 0) {
    if (in_ECX[0x130] == '\0') goto LAB_20093de4;
    pvVar2 = operator_new(0x1000);
    *(void **)(in_ECX + 0xb0) = pvVar2;
    pvVar2 = operator_new(0x1000);
    *(void **)(in_ECX + 0xb4) = pvVar2;
  }
  if (in_ECX[0x130] != '\0') {
    puVar4 = *(undefined4 **)(in_ECX + 0xb0);
    for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    puVar4 = *(undefined4 **)(in_ECX + 0xb4);
    for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
  }
LAB_20093de4:
  in_ECX[0xfc] = -0x60;
  in_ECX[0xfd] = -0x7a;
  in_ECX[0xfe] = '\x01';
  in_ECX[0xff] = '\0';
  in_ECX[0x100] = '`';
  in_ECX[0x101] = 'y';
  in_ECX[0x102] = -2;
  in_ECX[0x103] = -1;
  in_ECX[0x104] = -0x60;
  in_ECX[0x105] = -0x7a;
  in_ECX[0x106] = '\x01';
  in_ECX[0x107] = '\0';
  in_ECX[0x108] = '`';
  in_ECX[0x109] = 'y';
  in_ECX[0x10a] = -2;
  in_ECX[0x10b] = -1;
  return;
}

