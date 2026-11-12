// rea decompile_all
// name: FUN_500f8590
// address: 0x500f8590
// body: available
// range: 0x500f8590-0x500f8d25 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500f8590(int param_1)

{
  float fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float10 fVar8;
  float *pfVar9;
  float fStack_c;
  float fStack_8;
  float fStack_4;
  
  uVar5 = FUN_50107636();
  if ((int)uVar5 % 3 == 0) {
    fVar8 = (float10)(*DAT_5015cb20)(0xbe19999a,0x3e19999a);
    fVar2 = (float10)_DAT_5018b438;
    _DAT_5018b438 = (float)(fVar8 + fVar2);
    if (fVar8 + fVar2 < (float10)0.0) {
      _DAT_5018b438 = 0.0;
    }
    if (1.0 < _DAT_5018b438) {
      _DAT_5018b438 = 1.0;
    }
  }
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x90) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x8c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x88) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x84) = 0;
  iVar6 = *(int *)(param_1 + 0x74);
  if (*(char *)(iVar6 + 0x68) == '\0') {
    fStack_c = *(float *)(param_1 + 4) + *(float *)(iVar6 + 0x28);
    fStack_8 = *(float *)(param_1 + 8) + *(float *)(iVar6 + 0x2c);
    fStack_4 = *(float *)(param_1 + 0xc) + *(float *)(iVar6 + 0x30);
    pfVar9 = &fStack_c;
LAB_500f8661:
    uVar5 = (*DAT_5015cac8)(pfVar9);
  }
  else {
    if (*(char *)(iVar6 + 0x68) != '\x01') {
      pfVar9 = (float *)(param_1 + 4);
      goto LAB_500f8661;
    }
    uVar5 = 0;
  }
  uVar7 = *(uint *)(*(int *)(param_1 + 0x74) + 0x98);
  if ((uVar5 & 0x38) == 0) {
    uVar7 = uVar7 & 0xfffffffe;
  }
  else {
    uVar7 = uVar7 | 1;
  }
  *(uint *)(*(int *)(param_1 + 0x74) + 0x98) = uVar7;
  iVar6 = *(int *)(param_1 + 0x74);
  if (*(int *)(iVar6 + 0x2dc) == 0) {
LAB_500f869a:
    if ((uVar5 & 9) != 0) goto LAB_500f869e;
LAB_500f8705:
    if ((uVar5 & 0x10) == 0) {
      if ((uVar5 & 0x20) == 0) goto LAB_500f87ed;
      fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * 0.2 + *(float *)(iVar6 + 0x90);
      fVar4 = *(float *)(iVar6 + 0x90) / fVar1;
      fVar3 = (1.0 - fVar4) * 0.03;
      *(float *)(iVar6 + 0x84) = fVar4 * *(float *)(iVar6 + 0x84) + fVar3;
      *(float *)(iVar6 + 0x88) = (1.0 - fVar4) * 0.08 + fVar4 * *(float *)(iVar6 + 0x88);
      fVar3 = fVar4 * *(float *)(iVar6 + 0x8c) + fVar3;
    }
    else {
      fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * 0.6 + *(float *)(iVar6 + 0x90);
      fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
      fVar4 = 1.0 - fVar3;
      *(float *)(iVar6 + 0x84) = fVar4 * 0.0 + fVar3 * *(float *)(iVar6 + 0x84);
      *(float *)(iVar6 + 0x88) = fVar4 * 0.1 + fVar3 * *(float *)(iVar6 + 0x88);
      fVar3 = fVar4 * 0.05 + fVar3 * *(float *)(iVar6 + 0x8c);
    }
  }
  else {
    if ((uVar5 & 8) == 0) {
      if (*(int *)(iVar6 + 0x2dc) == 0) goto LAB_500f869a;
      goto LAB_500f8705;
    }
LAB_500f869e:
    fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * 0.6 + *(float *)(iVar6 + 0x90);
    fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
    fVar4 = 1.0 - fVar3;
    *(float *)(iVar6 + 0x84) = fVar3 * *(float *)(iVar6 + 0x84) + fVar4;
    *(float *)(iVar6 + 0x88) = fVar4 * 0.3 + fVar3 * *(float *)(iVar6 + 0x88);
    fVar3 = fVar4 * 0.0 + fVar3 * *(float *)(iVar6 + 0x8c);
  }
  *(float *)(iVar6 + 0x8c) = fVar3;
  *(float *)(iVar6 + 0x90) = fVar1;
LAB_500f87ed:
  iVar6 = *(int *)(param_1 + 0x74);
  if (0.0 < *(float *)(iVar6 + 0x4dc)) {
    fVar1 = *(float *)(iVar6 + 0x4dc);
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * fVar1 + *(float *)(iVar6 + 0x90);
      fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
      fVar4 = 1.0 - fVar3;
      *(float *)(iVar6 + 0x84) =
           fVar3 * *(float *)(iVar6 + 0x84) + *(float *)(iVar6 + 0x4f0) * fVar4;
      *(float *)(iVar6 + 0x88) =
           fVar3 * *(float *)(iVar6 + 0x88) + *(float *)(iVar6 + 0x4f4) * fVar4;
      *(float *)(iVar6 + 0x8c) =
           fVar4 * *(float *)(iVar6 + 0x4f8) + fVar3 * *(float *)(iVar6 + 0x8c);
      *(float *)(iVar6 + 0x90) = fVar1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if ((0.0 < *(float *)(iVar6 + 0x4e0)) &&
     (fVar1 = *(float *)(iVar6 + 0x4e0), fVar1 < 0.0 == (fVar1 == 0.0))) {
    fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * fVar1 + *(float *)(iVar6 + 0x90);
    fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
    fVar4 = 1.0 - fVar3;
    *(float *)(iVar6 + 0x84) = fVar4 * 0.85 + fVar3 * *(float *)(iVar6 + 0x84);
    *(float *)(iVar6 + 0x88) = fVar4 * 0.7 + fVar3 * *(float *)(iVar6 + 0x88);
    *(float *)(iVar6 + 0x8c) = fVar4 * 0.3 + fVar3 * *(float *)(iVar6 + 0x8c);
    *(float *)(iVar6 + 0x90) = fVar1;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if (0.0 < *(float *)(iVar6 + 0x4e4)) {
    fVar1 = *(float *)(iVar6 + 0x4e4);
    if (*(int *)(iVar6 + 0x558) == 0) {
      if (fVar1 < 0.0 == (fVar1 == 0.0)) {
        fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * fVar1 + *(float *)(iVar6 + 0x90);
        fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
        fVar4 = 1.0 - fVar3;
        *(float *)(iVar6 + 0x84) = fVar3 * *(float *)(iVar6 + 0x84) + fVar4;
        *(float *)(iVar6 + 0x88) = fVar3 * *(float *)(iVar6 + 0x88) + fVar4;
        *(float *)(iVar6 + 0x8c) = fVar3 * *(float *)(iVar6 + 0x8c) + fVar4;
        *(float *)(iVar6 + 0x90) = fVar1;
      }
    }
    else if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * fVar1 + *(float *)(iVar6 + 0x90);
      fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
      fVar4 = (1.0 - fVar3) * 0.5;
      *(float *)(iVar6 + 0x84) = fVar3 * *(float *)(iVar6 + 0x84) + fVar4;
      *(float *)(iVar6 + 0x88) = fVar3 * *(float *)(iVar6 + 0x88) + (1.0 - fVar3);
      *(float *)(iVar6 + 0x8c) = fVar3 * *(float *)(iVar6 + 0x8c) + fVar4;
      *(float *)(iVar6 + 0x90) = fVar1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if (0.0 < *(float *)(iVar6 + 0x534)) {
    fVar1 = *(float *)(iVar6 + 0x534);
    if (fVar1 < 0.0 == (fVar1 == 0.0)) {
      fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * fVar1 + *(float *)(iVar6 + 0x90);
      fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
      fVar4 = 1.0 - fVar3;
      *(float *)(iVar6 + 0x84) =
           fVar3 * *(float *)(iVar6 + 0x84) + *(float *)(iVar6 + 0x528) * fVar4;
      *(float *)(iVar6 + 0x88) =
           *(float *)(iVar6 + 0x52c) * fVar4 + fVar3 * *(float *)(iVar6 + 0x88);
      *(float *)(iVar6 + 0x8c) =
           fVar3 * *(float *)(iVar6 + 0x8c) + *(float *)(iVar6 + 0x530) * fVar4;
      *(float *)(iVar6 + 0x90) = fVar1;
    }
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if ((*(float *)(iVar6 + 0x4ec) != 0.0) &&
     (fVar1 = *(float *)(iVar6 + 0x4ec), fVar1 < 0.0 == (fVar1 == 0.0))) {
    fVar1 = (1.0 - *(float *)(iVar6 + 0x90)) * fVar1 + *(float *)(iVar6 + 0x90);
    fVar3 = *(float *)(iVar6 + 0x90) / fVar1;
    fVar4 = 1.0 - fVar3;
    *(float *)(iVar6 + 0x84) = fVar4 * 0.7764706 + fVar3 * *(float *)(iVar6 + 0x84);
    *(float *)(iVar6 + 0x88) = fVar4 * 0.67058825 + fVar3 * *(float *)(iVar6 + 0x88);
    *(float *)(iVar6 + 0x8c) = fVar4 * 0.078431375 + fVar3 * *(float *)(iVar6 + 0x8c);
    *(float *)(iVar6 + 0x90) = fVar1;
  }
  if ((*(int *)(param_1 + 0x2ec) < 0) &&
     (iVar6 = *(int *)(param_1 + 0x2ec) + -2, *(int *)(param_1 + 0x2ec) = iVar6, iVar6 < -100)) {
    *(undefined4 *)(param_1 + 0x2ec) = 0xffffff9c;
  }
  *(float *)(*(int *)(param_1 + 0x74) + 0x4dc) = *(float *)(*(int *)(param_1 + 0x74) + 0x4dc) - 0.06
  ;
  if (*(float *)(*(int *)(param_1 + 0x74) + 0x4dc) < 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4dc) = 0;
  }
  *(float *)(*(int *)(param_1 + 0x74) + 0x4e0) = *(float *)(*(int *)(param_1 + 0x74) + 0x4e0) - 0.1;
  if (*(float *)(*(int *)(param_1 + 0x74) + 0x4e0) < 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4e0) = 0;
  }
  if (0.995 < *(float *)(*(int *)(param_1 + 0x74) + 0x4e4)) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4e4) = 0x3f7eb852;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  *(float *)(iVar6 + 0x4e4) =
       *(float *)(iVar6 + 0x4e4) - (1.0 - *(float *)(iVar6 + 0x4e4)) * *(float *)(iVar6 + 0x4e8);
  if (*(float *)(*(int *)(param_1 + 0x74) + 0x4e4) < 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4e4) = 0;
  }
  *(float *)(*(int *)(param_1 + 0x74) + 0x4ec) = *(float *)(*(int *)(param_1 + 0x74) + 0x4ec) * 0.88
  ;
  iVar6 = *(int *)(param_1 + 0x74);
  if (*(float *)(iVar6 + 0x4ec) < 0.3) {
    *(float *)(iVar6 + 0x4ec) = *(float *)(iVar6 + 0x4ec) - 0.06;
  }
  if (*(float *)(*(int *)(param_1 + 0x74) + 0x4ec) < 0.0) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4ec) = 0;
  }
  iVar6 = *(int *)(param_1 + 0x74);
  if ((*(int *)(iVar6 + 0x558) != 0) && (*(byte *)(iVar6 + 0x68) < 2)) {
    *(uint *)(iVar6 + 0x98) = *(uint *)(iVar6 + 0x98) | 4;
    return;
  }
  *(uint *)(iVar6 + 0x98) = *(uint *)(iVar6 + 0x98) & 0xfffffffb;
  return;
}

