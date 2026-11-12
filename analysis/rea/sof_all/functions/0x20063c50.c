// rea decompile_all
// name: FUN_20063c50
// address: 0x20063c50
// body: available
// range: 0x20063c50-0x20063e58 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20063c50(int param_1)

{
  float fVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float10 extraout_ST0;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 extraout_ST1;
  int local_8;
  int local_4;
  
  iVar6 = 0;
  iVar5 = 1;
  local_8 = 1;
  local_4 = 2;
  bVar2 = false;
  if ((*(uint *)(param_1 + 0x118) & 8) == 0) {
    if ((*(uint *)(param_1 + 0x118) & 0x10) == 0) goto LAB_20063cb4;
    iVar6 = 0;
    local_8 = 0;
    local_4 = 1;
    bVar2 = true;
  }
  else {
    iVar6 = 1;
    local_8 = 2;
    local_4 = 0;
  }
  iVar5 = 2;
LAB_20063cb4:
  __ftol();
  __ftol();
  __ftol();
  __ftol();
  __ftol();
  uVar3 = __ftol();
  uVar4 = __ftol();
  fVar8 = extraout_ST0;
  fVar7 = extraout_ST1;
  if ((int)((uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f)) <
      (int)((uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f))) {
    fVar7 = (float10)*(float *)(param_1 + 0x128 + iVar5 * 4);
    fVar8 = (float10)*(float *)(param_1 + 0x10 + local_8 * 4) + (float10)90.0;
  }
  fVar9 = (float10)fcos(fVar8 * (float10)0.01745329252);
  fVar8 = (float10)fsin(fVar8 * (float10)0.01745329252);
  fVar8 = fVar8 * fVar7;
  if (bVar2) {
    fVar8 = -fVar8;
  }
  fVar1 = (float)(fVar7 * fVar9) + *(float *)(param_1 + 4 + iVar6 * 4);
  if ((float)(fVar7 * fVar9) <= 0.0) {
    *(float *)(param_1 + 0x134 + iVar6 * 4) = fVar1;
    *(undefined4 *)(param_1 + 0x140 + iVar6 * 4) = *(undefined4 *)(param_1 + 4 + iVar6 * 4);
  }
  else {
    *(float *)(param_1 + 0x140 + iVar6 * 4) = fVar1;
    *(undefined4 *)(param_1 + 0x134 + iVar6 * 4) = *(undefined4 *)(param_1 + 4 + iVar6 * 4);
  }
  fVar7 = fVar8 + (float10)*(float *)(param_1 + 4 + iVar5 * 4);
  if (fVar8 <= (float10)0.0) {
    *(float *)(param_1 + 0x134 + iVar5 * 4) = (float)fVar7;
    *(undefined4 *)(param_1 + 0x140 + iVar5 * 4) = *(undefined4 *)(param_1 + 4 + iVar5 * 4);
  }
  else {
    *(float *)(param_1 + 0x140 + iVar5 * 4) = (float)fVar7;
    *(undefined4 *)(param_1 + 0x134 + iVar5 * 4) = *(undefined4 *)(param_1 + 4 + iVar5 * 4);
  }
  *(float *)(param_1 + 0x134 + local_4 * 4) =
       *(float *)(param_1 + 0x11c + local_4 * 4) + *(float *)(param_1 + 4 + local_4 * 4);
  *(float *)(param_1 + 0x140 + local_4 * 4) =
       *(float *)(param_1 + 0x128 + local_4 * 4) + *(float *)(param_1 + 4 + local_4 * 4);
  return;
}

