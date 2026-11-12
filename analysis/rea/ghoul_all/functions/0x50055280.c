// rea decompile_all
// name: FUN_50055280
// address: 0x50055280
// body: available
// range: 0x50055280-0x5005560f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_50055280(int param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  float local_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  undefined4 uStack_8;
  float local_4;
  
  FUN_50096c00();
  if ((*(int *)(*(int *)(param_1 + 0x45c) + 0x34) == 0) &&
     (fVar1 = *(float *)(*(int *)(param_1 + 0x45c) + 0x3c),
     fVar1 < DAT_5015ccdc != (fVar1 == DAT_5015ccdc))) {
    FUN_500543a0(param_1);
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 0x34);
  if (iVar5 != 0) {
    bVar4 = FUN_50054280(param_1,iVar5);
    if (CONCAT31(extraout_var,bVar4) == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x34) = 0;
    }
    iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 0x34);
    if ((iVar5 != 0) &&
       (((iVar5 = (*DAT_5015cad0)(iVar5 + 4,param_1 + 4), iVar5 == 0 ||
         (iVar5 = *(int *)(*(int *)(param_1 + 0x45c) + 0x34),
         *(float *)(param_1 + 0xc) < *(float *)(iVar5 + 0xc))) ||
        (iVar5 = FUN_50050d70(param_1,iVar5), iVar5 == 0)))) {
      *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x34) = 0;
      *(float *)(*(int *)(param_1 + 0x45c) + 0x3c) = DAT_5015ccdc + 15.0;
    }
  }
  iVar5 = *(int *)(param_1 + 0x45c);
  iVar2 = *(int *)(iVar5 + 0x34);
  if (iVar2 == 0) {
LAB_500555fd:
    uVar7 = FUN_50096c00();
    return uVar7 & 0xffffff00;
  }
  local_18 = *(float *)(param_1 + 4) - *(float *)(iVar2 + 4);
  local_4 = *(float *)(iVar2 + 0xc);
  fVar1 = *(float *)(param_1 + 8) - *(float *)(iVar2 + 8);
  fVar3 = local_4 - *(float *)(iVar2 + 0xc);
  if (local_18 * local_18 + fVar1 * fVar1 + fVar3 * fVar3 < 100.0) {
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(float *)(*(int *)(param_1 + 0x45c) + 0x3c) = DAT_5015ccdc + 5.0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    lVar8 = __ftol();
    *(short *)(param_2 + 6) = (short)lVar8;
  }
  else {
    if (((*(int *)(iVar5 + 0x30) != 0) || (DAT_5015ccdc + 9.0 <= *(float *)(iVar5 + 0x38))) ||
       ((*(float *)(iVar5 + 0x38) <= DAT_5015ccdc + 4.0 ||
        (iVar5 = FUN_50053cf0(param_1), iVar5 == 0)))) {
      if ((*(float *)(*(int *)(param_1 + 0x45c) + 0x38) < DAT_5015ccdc + 9.0) &&
         (DAT_5015ccdc + 1.0 < *(float *)(*(int *)(param_1 + 0x45c) + 0x38))) {
        FUN_50054070(param_1);
      }
    }
    else {
      *(float *)(*(int *)(param_1 + 0x45c) + 0x28) = DAT_5015ccdc + 1.0;
    }
    iVar5 = *(int *)(param_1 + 0x45c);
    if (*(int *)(iVar5 + 0x30) != 0) {
      FUN_50050600(param_1);
      FUN_500524f0(param_1,(float *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x34) + 4));
      uVar9 = FUN_5004fb40(param_1,*(int *)(*(int *)(param_1 + 0x45c) + 0x30));
      if ((int)uVar9 != 0) {
        FUN_500501d0(param_1);
        uVar7 = FUN_50096c00();
        return uVar7 & 0xffffff00;
      }
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x48c) = 0;
      *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x490) = 0;
      goto LAB_500555fd;
    }
    if (DAT_5015ccdc <= *(float *)(iVar5 + 0x38)) {
      iVar2 = *(int *)(iVar5 + 0x34);
      if (iVar5 != 0) {
        local_18 = *(float *)(iVar2 + 4) - *(float *)(param_1 + 4);
        fStack_14 = *(float *)(iVar2 + 8) - *(float *)(param_1 + 8);
        fStack_10 = *(float *)(iVar2 + 0xc) - *(float *)(param_1 + 0xc);
        FUN_500c3570(&local_18,&fStack_c);
        *(float *)(*(int *)(param_1 + 0x74) + 0x4fc) = fStack_c;
        *(undefined4 *)(*(int *)(param_1 + 0x45c) + 0x24) = uStack_8;
        FUN_500504d0(*(undefined4 *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x400) + 0x20c),param_1);
      }
      FUN_500525e0(param_1,(float *)(*(int *)(*(int *)(param_1 + 0x45c) + 0x34) + 4));
      uVar7 = FUN_50096c00();
      return uVar7 & 0xffffff00;
    }
    *(undefined4 *)(iVar5 + 0x34) = 0;
    *(float *)(*(int *)(param_1 + 0x45c) + 0x3c) = DAT_5015ccdc + 10.0;
    *(undefined4 *)(param_2 + 0x10) = 0;
    *(undefined4 *)(param_2 + 0x14) = 0;
    lVar8 = __ftol();
    *(short *)(param_2 + 6) = (short)lVar8;
  }
  lVar8 = __ftol();
  *(short *)(param_2 + 4) = (short)lVar8;
  *(undefined2 *)(param_2 + 8) = 0;
  uVar6 = FUN_50096c00();
  return CONCAT31((int3)((uint)uVar6 >> 8),1);
}

