// rea decompile_all
// name: FUN_500b7130
// address: 0x500b7130
// body: available
// range: 0x500b7130-0x500b74ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __fastcall FUN_500b7130(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 in_EAX;
  int iVar3;
  undefined4 uVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float local_10;
  float local_8;
  float local_4;
  
  iVar3 = *(int *)(param_1 + 8);
  fVar5 = (float10)0.0;
  if (iVar3 == 0) {
    return CONCAT31((int3)((uint)in_EAX >> 8),1);
  }
  switch(*(undefined4 *)(param_1 + 0xc)) {
  case 1:
    if (*(float *)(iVar3 + 600) == 0.0) {
      *(undefined4 *)(iVar3 + 600) = 0x41f00000;
      goto switchD_500b7154_default;
    }
    fVar5 = (float10)*(float *)(iVar3 + 0x10) - (float10)*(float *)(param_1 + 0x20);
    if (fVar5 <= (float10)85.0) {
      *(float *)(iVar3 + 600) = *(float *)(iVar3 + 600) + 30.0;
      goto switchD_500b7154_default;
    }
    *(undefined4 *)(iVar3 + 600) = 0;
    *(float *)(*(int *)(param_1 + 8) + 0x10) = *(float *)(param_1 + 0x20) + 90.0;
    iVar3 = *(int *)(param_1 + 8);
    fVar2 = -*(float *)(iVar3 + 0x124);
    local_10 = *(float *)(iVar3 + 0x128);
    fVar1 = fVar2 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c);
    local_8 = fVar2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30);
    local_4 = fVar2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34);
    goto LAB_500b73c7;
  case 2:
    if (*(float *)(iVar3 + 600) == 0.0) {
      *(undefined4 *)(iVar3 + 600) = 0xc1f00000;
      goto switchD_500b7154_default;
    }
    fVar5 = (float10)*(float *)(param_1 + 0x20) - (float10)*(float *)(iVar3 + 0x10);
    if (fVar5 <= (float10)85.0) {
      *(float *)(iVar3 + 600) = *(float *)(iVar3 + 600) - 30.0;
      goto switchD_500b7154_default;
    }
    *(undefined4 *)(iVar3 + 600) = 0;
    *(float *)(*(int *)(param_1 + 8) + 0x10) = *(float *)(param_1 + 0x20) - 90.0;
    iVar3 = *(int *)(param_1 + 8);
    fVar2 = -*(float *)(iVar3 + 0x124);
    fVar1 = fVar2 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c);
    local_8 = fVar2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30);
    local_4 = fVar2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34);
    local_10 = *(float *)(iVar3 + 0x11c);
    break;
  case 3:
    if (*(float *)(iVar3 + 0x260) == 0.0) {
      *(undefined4 *)(iVar3 + 0x260) = 0xc1f00000;
      goto switchD_500b7154_default;
    }
    fVar5 = (float10)*(float *)(param_1 + 0x28) - (float10)*(float *)(iVar3 + 0x18);
    if ((float10)85.0 < fVar5) {
      *(undefined4 *)(iVar3 + 0x260) = 0;
      *(float *)(*(int *)(param_1 + 8) + 0x18) = *(float *)(param_1 + 0x28) - 90.0;
      iVar3 = *(int *)(param_1 + 8);
      fVar2 = -*(float *)(iVar3 + 0x124);
      local_10 = *(float *)(iVar3 + 300);
      fVar1 = fVar2 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c);
      local_8 = fVar2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30);
      local_4 = fVar2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34);
      goto LAB_500b73c7;
    }
    fVar1 = *(float *)(iVar3 + 0x260) - 30.0;
LAB_500b741b:
    *(float *)(iVar3 + 0x260) = fVar1;
switchD_500b7154_default:
    iVar3 = *(int *)(param_1 + 8);
    fVar5 = ((float10)*(float *)(param_1 + 0x1c) - fVar5) * (float10)0.01745329252;
    fVar6 = (float10)fcos(fVar5);
    fVar6 = fVar6 * (float10)*(float *)(param_1 + 0x18);
    fVar1 = *(float *)(param_1 + 0x3c);
    fVar2 = *(float *)(param_1 + 0x40);
    fVar5 = (float10)fsin(fVar5);
    fVar5 = fVar5 * (float10)*(float *)(param_1 + 0x18);
    fVar7 = (float10)DAT_501557a4;
    fVar8 = (float10)DAT_501557a8;
    *(float *)(iVar3 + 4) =
         (float)((float10)DAT_501557a0 * fVar5 +
                (float10)(float)(fVar6 * (float10)*(float *)(param_1 + 0x38))) +
         *(float *)(param_1 + 0x2c);
    *(float *)(iVar3 + 8) =
         (float)(fVar7 * fVar5 + (float10)(float)(fVar6 * (float10)fVar1)) +
         *(float *)(param_1 + 0x30);
    *(float *)(iVar3 + 0xc) =
         (float)(fVar8 * fVar5 + fVar6 * (float10)fVar2 + (float10)*(float *)(param_1 + 0x34));
    return (uint)(iVar3 + 4) & 0xffffff00;
  case 4:
    if (*(float *)(iVar3 + 0x260) == 0.0) {
      *(undefined4 *)(iVar3 + 0x260) = 0x41f00000;
      goto switchD_500b7154_default;
    }
    fVar5 = (float10)*(float *)(iVar3 + 0x18) - (float10)*(float *)(param_1 + 0x28);
    if (fVar5 <= (float10)85.0) {
      fVar1 = *(float *)(iVar3 + 0x260) + 30.0;
      goto LAB_500b741b;
    }
    *(undefined4 *)(iVar3 + 0x260) = 0;
    *(float *)(*(int *)(param_1 + 8) + 0x18) = *(float *)(param_1 + 0x28) + 90.0;
    iVar3 = *(int *)(param_1 + 8);
    fVar2 = -*(float *)(iVar3 + 0x124);
    fVar1 = fVar2 * *(float *)(param_1 + 0x38) + *(float *)(param_1 + 0x2c);
    local_8 = fVar2 * *(float *)(param_1 + 0x3c) + *(float *)(param_1 + 0x30);
    local_4 = fVar2 * *(float *)(param_1 + 0x40) + *(float *)(param_1 + 0x34);
    local_10 = *(float *)(iVar3 + 0x120);
    break;
  default:
    goto switchD_500b7154_default;
  }
  local_10 = -local_10;
LAB_500b73c7:
  *(float *)(iVar3 + 4) = DAT_501557a0 * local_10 + fVar1;
  *(float *)(iVar3 + 8) = DAT_501557a4 * local_10 + local_8;
  *(float *)(iVar3 + 0xc) = DAT_501557a8 * local_10 + local_4;
  uVar4 = FUN_500b2c20(*(int *)(param_1 + 8));
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}

