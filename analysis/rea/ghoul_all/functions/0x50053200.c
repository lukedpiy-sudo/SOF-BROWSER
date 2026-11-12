// rea decompile_all
// name: FUN_50053200
// address: 0x50053200
// body: available
// range: 0x50053200-0x5005357e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50053200(int param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float local_50;
  float local_4c;
  undefined4 local_48;
  float local_44;
  float local_40;
  undefined1 local_38 [4];
  float fStack_34;
  
  if (*(int *)(param_1 + 0x45c) == 0) {
    return;
  }
  iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x34c) + 0x2c);
  if ((iVar5 == 7) || (iVar5 == 10)) {
    iVar7 = 0x15e;
  }
  else {
    iVar7 = 0x1e;
    if (iVar5 != 1) {
      iVar7 = 100;
    }
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 0x30);
  pfVar1 = (float *)(param_1 + 4);
  fVar2 = *pfVar1 - *(float *)(iVar5 + 4);
  fVar4 = *(float *)(param_1 + 8) - *(float *)(iVar5 + 8);
  fVar3 = *(float *)(param_1 + 0xc) - *(float *)(iVar5 + 0xc);
  fVar2 = fVar2 * fVar2 + fVar4 * fVar4 + fVar3 * fVar3;
  if ((float)(iVar7 * iVar7 + (10 - iVar7) * 0x28) <= fVar2) {
LAB_50053334:
    if (fVar2 <= (float)(iVar7 * iVar7 + (iVar7 * 5 + 0x32) * 8)) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x5c) = 0;
    }
    else {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x5c) = *(undefined4 *)(DAT_5015c96c + 0x18);
      FUN_50053000(param_1,1);
    }
  }
  else {
    FUN_500fdd70((float *)(*(int *)(param_1 + 0x74) + 0x4fc),&local_44,(float *)0x0,(float *)0x0);
    local_48 = *(undefined4 *)(param_1 + 0xc);
    local_50 = *pfVar1 - local_44 * 200.0;
    local_4c = *(float *)(param_1 + 8) - local_40 * 200.0;
    (*DAT_5015cac0)(pfVar1,&DAT_5018bf0c,&DAT_5018bf0c,&local_50,param_1,0x2010003,local_38);
    if (fStack_34 != 1.0) goto LAB_50053334;
    *(float *)(*(int *)(param_1 + 0x45c) + 0x5c) = -*(float *)(DAT_5015c96c + 0x18);
    FUN_50053000(param_1,0);
  }
  iVar5 = FUN_50052a40(param_1);
  if (iVar5 != 0) {
    *(uint *)(*(int *)(param_1 + 0x45c) + 0x14) =
         (uint)(*(int *)(*(int *)(param_1 + 0x45c) + 0x14) != 1);
    fVar9 = (float10)(*DAT_5015cb20)(0x3f800000,0x40a00000);
    *(float *)(*(int *)(param_1 + 0x45c) + 0x18) =
         (float)(fVar9 + (float10)DAT_5015ccdc + (float10)1.0);
  }
  iVar5 = FUN_50052ed0(param_1);
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(param_1 + 0x45c), 2 < *(int *)(*(int *)(iVar5 + 0x400) + 0x210))) {
    *(uint *)(iVar5 + 0x14) = (uint)(*(int *)(iVar5 + 0x14) != 1);
    fVar9 = (float10)(*DAT_5015cb20)(0x3f800000,0x40a00000);
    *(float *)(*(int *)(param_1 + 0x45c) + 0x18) =
         (float)(fVar9 + (float10)DAT_5015ccdc + (float10)1.0);
  }
  iVar5 = FUN_50052d70(param_1,*(int *)(*(int *)(param_1 + 0x45c) + 0x30));
  if ((iVar5 != 0) &&
     (iVar5 = *(int *)(param_1 + 0x45c), 2 < *(int *)(*(int *)(iVar5 + 0x400) + 0x210))) {
    *(uint *)(iVar5 + 0x14) = (uint)(*(int *)(iVar5 + 0x14) != 1);
    fVar9 = (float10)(*DAT_5015cb20)(0x3f800000,0x40a00000);
    *(float *)(*(int *)(param_1 + 0x45c) + 0x18) =
         (float)(fVar9 + (float10)DAT_5015ccdc + (float10)1.0);
  }
  iVar5 = *(int *)(param_1 + 0x45c);
  if (*(float *)(iVar5 + 0x18) < DAT_5015ccdc) {
    *(uint *)(iVar5 + 0x14) = (uint)(*(int *)(iVar5 + 0x14) != 1);
    fVar9 = (float10)(*DAT_5015cb20)(0x3f800000,0x40400000);
    *(float *)(*(int *)(param_1 + 0x45c) + 0x18) =
         (float)(fVar9 + (float10)DAT_5015ccdc + (float10)1.0);
    iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x210);
    if (iVar5 < 2) {
      uVar6 = FUN_50107636();
      bVar8 = SBORROW4((int)uVar6 % 10,5);
      iVar5 = (int)uVar6 % 10 + -5;
    }
    else {
      if (2 < iVar5) goto LAB_5005353a;
      uVar6 = FUN_50107636();
      bVar8 = SBORROW4((int)uVar6 % 10,3);
      iVar5 = (int)uVar6 % 10 + -3;
    }
    if (bVar8 != iVar5 < 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x14) = 2;
      fVar9 = (float10)(*DAT_5015cb20)(0,0x3f800000);
      *(float *)(*(int *)(param_1 + 0x45c) + 0x18) =
           (float)(fVar9 + (float10)DAT_5015ccdc + (float10)0.5);
    }
  }
LAB_5005353a:
  iVar5 = *(int *)(param_1 + 0x45c);
  if (*(int *)(iVar5 + 0x14) == 1) {
    *(undefined4 *)(iVar5 + 0x60) = *(undefined4 *)(DAT_5015c96c + 0x18);
    return;
  }
  if (*(int *)(iVar5 + 0x14) != 2) {
    *(float *)(iVar5 + 0x60) = -*(float *)(DAT_5015c96c + 0x18);
    return;
  }
  *(undefined4 *)(iVar5 + 0x60) = 0;
  return;
}

