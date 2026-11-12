// rea decompile_all
// name: FUN_5004afd0
// address: 0x5004afd0
// body: available
// range: 0x5004afd0-0x5004b5a0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __cdecl FUN_5004afd0(int *param_1,int param_2,float *param_3)

{
  float *pfVar1;
  int iVar2;
  float fVar3;
  ushort uVar4;
  ushort uVar5;
  bool bVar6;
  uint uVar7;
  undefined3 uVar9;
  undefined3 extraout_var;
  int iVar8;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  int iVar10;
  float10 fVar11;
  undefined4 uVar12;
  float local_a8;
  float local_a4;
  float local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  float fStack_94;
  double dStack_90;
  char local_88;
  char cStack_87;
  float fStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  float fStack_78;
  int iStack_58;
  float local_50;
  uint local_4c;
  undefined4 local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  char cStack_38;
  char cStack_37;
  int iStack_8;
  
  local_a8 = *(float *)(param_2 + 4) + *param_3;
  pfVar1 = (float *)(param_2 + 4);
  local_50 = *pfVar1;
  local_4c = *(uint *)(param_2 + 8);
  local_a4 = *(float *)(param_2 + 8) + param_3[1];
  local_48 = *(undefined4 *)(param_2 + 0xc);
  local_a0 = *(float *)(param_2 + 0xc) + param_3[2];
  if (*(int *)(param_2 + 0x19c) != 5) {
    fVar3 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2];
    if (fVar3 < 0.01 != (fVar3 == 0.01)) {
      return CONCAT31((int3)(CONCAT22((short)((uint)*(int *)(param_2 + 0x19c) >> 0x10),
                                      (ushort)(fVar3 < 0.01) << 8 | (ushort)NAN(fVar3) << 10 |
                                      (ushort)(fVar3 == 0.01) << 0xe) >> 8),1);
    }
    iVar10 = 0;
    while( true ) {
      local_a8 = *pfVar1 + *param_3;
      local_a4 = *(float *)(param_2 + 8) + param_3[1];
      local_a0 = *(float *)(param_2 + 0xc) + param_3[2];
      if (iVar10 == 1) {
        local_a0 = *(float *)(param_2 + 0xc);
      }
      if (*(int *)(param_2 + 0x19c) == 1) {
        uVar12 = 0;
      }
      else {
        uVar12 = 0x2020003;
      }
      uVar12 = (*DAT_5015cac0)(pfVar1,param_2 + 0x11c,param_2 + 0x128,&local_a8,param_2,uVar12,
                               &local_88);
      uVar7 = CONCAT31((int3)((uint)uVar12 >> 8),*(byte *)(param_2 + 0x1a0));
      if (((*(byte *)(param_2 + 0x1a0) & 1) != 0) &&
         (uVar7 = *(uint *)(param_2 + 0x38c), uVar7 == 0)) {
        uStack_9c = uStack_80;
        fStack_94 = fStack_78 + *(float *)(param_2 + 0x124) + 1.0;
        uStack_98 = uStack_7c;
        uVar7 = (*DAT_5015cac8)(&uStack_9c);
        if ((uVar7 & 0x38) != 0) goto LAB_5004b594;
      }
      if (((*(byte *)(param_2 + 0x1a0) & 2) != 0) && (*(int *)(param_2 + 0x38c) < 2)) {
        uStack_9c = uStack_80;
        fStack_94 = fStack_78 + *(float *)(param_2 + 0x124) + 1.0;
        uStack_98 = uStack_7c;
        uVar7 = (*DAT_5015cac8)(&uStack_9c);
        if ((uVar7 & 0x38) == 0) goto LAB_5004b594;
      }
      uVar7 = CONCAT22((short)(uVar7 >> 0x10),
                       (ushort)(fStack_84 < 1.0) << 8 | (ushort)NAN(fStack_84) << 10 |
                       (ushort)(fStack_84 == 1.0) << 0xe);
      if (fStack_84 == 1.0) break;
      iVar10 = iVar10 + 1;
      if (1 < iVar10) {
        return uVar7;
      }
    }
    if (*(int *)(param_2 + 0x19c) != 1) {
      uVar12 = (*DAT_5015cac0)(&uStack_80,param_2 + 0x11c,param_2 + 0x128,&uStack_80,param_2,
                               0x2020003,&cStack_38);
      uVar9 = (undefined3)((uint)uVar12 >> 8);
      uVar7 = CONCAT31(uVar9,cStack_37);
      if ((cStack_37 != '\0') || (uVar7 = CONCAT31(uVar9,cStack_38), cStack_38 != '\0'))
      goto LAB_5004b594;
    }
    goto LAB_5004b1f5;
  }
  uVar7 = 0;
  if ((*(int *)(param_2 + 0x330) == 0) ||
     (fVar3 = *(float *)(param_2 + 0x254) * *(float *)(param_2 + 0x254) +
              *(float *)(param_2 + 0x250) * *(float *)(param_2 + 0x250) +
              *(float *)(param_2 + 0x24c) * *(float *)(param_2 + 0x24c),
     uVar4 = (ushort)(fVar3 < 100.0), uVar5 = (ushort)(fVar3 == 100.0),
     uVar7 = (uint)(ushort)(uVar4 << 8 | uVar5 << 0xe), uVar4 == 0 && uVar5 == 0))
  goto LAB_5004b594;
  fVar3 = *param_3 * *param_3 + param_3[1] * param_3[1] + param_3[2] * param_3[2];
  if (fVar3 < 0.01 != (fVar3 == 0.01)) {
    return CONCAT31((uint3)(byte)(fVar3 < 0.01 | (byte)((ushort)((ushort)NAN(fVar3) << 10) >> 8) |
                                 (byte)((ushort)((ushort)(fVar3 == 0.01) << 0xe) >> 8)),1);
  }
  fVar11 = (float10)(**(code **)(*param_1 + 0x134))();
  fVar3 = (float)fVar11;
  dStack_90 = (double)CONCAT44(dStack_90._4_4_,fVar3);
  fStack_44 = local_a8;
  local_a0 = (float)(fVar11 + (float10)local_a0);
  iVar10 = param_2 + 0x128;
  fStack_40 = local_a4;
  fStack_3c = local_a0 - (fVar3 + fVar3);
  iVar2 = param_2 + 0x11c;
  (*DAT_5015cac0)(&local_a8,iVar2,iVar10,&fStack_44,param_2,0x2020003,&local_88);
  if ((local_88 != '\0') || (cStack_87 != '\0')) {
    if (iStack_58 != 0) {
      bVar6 = FUN_50038d50(iStack_58);
      if (CONCAT31(extraout_var,bVar6) != 0) {
        iVar8 = FUN_50038db0(iStack_58);
        if (iVar8 != 0) goto LAB_5004b427;
      }
    }
    fVar3 = dStack_90._0_4_ * 0.5;
    dStack_90 = (double)fVar3;
    local_a0 = local_a0 - fVar3;
    (*DAT_5015cac0)(&local_a8,iVar2,iVar10,&fStack_44,param_2,0x2020003,&local_88);
    if ((local_88 != '\0') || (cStack_87 != '\0')) {
      if (iStack_58 != 0) {
        bVar6 = FUN_50038d50(iStack_58);
        if (CONCAT31(extraout_var_00,bVar6) != 0) {
          iVar8 = FUN_50038db0(iStack_58);
          if (iVar8 != 0) goto LAB_5004b427;
        }
      }
      local_a0 = local_a0 - (float)dStack_90;
      (*DAT_5015cac0)(&local_a8,iVar2,iVar10,&fStack_44,param_2,0x2020003,&local_88);
      if ((local_88 != '\0') || (cStack_87 != '\0')) {
        uVar7 = 0;
        if (iStack_58 == 0) goto LAB_5004b594;
        bVar6 = FUN_50038d50(iStack_58);
        uVar7 = 0;
        if (CONCAT31(extraout_var_01,bVar6) == 0) goto LAB_5004b594;
        iVar8 = FUN_50038db0(iStack_58);
        uVar7 = 0;
        if (iVar8 == 0) goto LAB_5004b594;
      }
    }
  }
LAB_5004b427:
  if (*(int *)(param_2 + 0x38c) == 0) {
    uStack_9c = uStack_80;
    fStack_94 = fStack_78 + *(float *)(param_2 + 0x124) + 1.0;
    uStack_98 = uStack_7c;
    uVar7 = (*DAT_5015cac8)(&uStack_9c);
    if ((uVar7 & 0x38) != 0) goto LAB_5004b594;
  }
  (*DAT_5015cac0)(&uStack_80,iVar2,iVar10,&uStack_80,param_2,0x2020003,&cStack_38);
  if ((cStack_37 != '\0') || (cStack_38 != '\0')) {
    uVar7 = 0;
    if (iStack_8 == 0) goto LAB_5004b594;
    bVar6 = FUN_50038d50(iStack_8);
    uVar7 = 0;
    if (CONCAT31(extraout_var_02,bVar6) == 0) goto LAB_5004b594;
    iVar10 = FUN_50038db0(iStack_8);
    uVar7 = 0;
    if (iVar10 == 0) goto LAB_5004b594;
  }
  if ((((iStack_58 != 0) && (iStack_58 != *(int *)(param_2 + 0x330))) &&
      ((*(int *)(iStack_58 + 0x74) != 0 || (*(int *)(iStack_58 + 0x450) != 0)))) &&
     ((*(byte *)(iStack_58 + 0x2f8) & 2) == 0)) {
    fVar3 = (*(float *)(iStack_58 + 0x130) + *(float *)(iStack_58 + 0xc) +
            *(float *)(param_2 + 0x124)) - 1.0;
    uVar7 = CONCAT22((short)((uint)iStack_58 >> 0x10),
                     (ushort)(fVar3 < fStack_78) << 8 | (ushort)(NAN(fVar3) || NAN(fStack_78)) << 10
                     | (ushort)(fVar3 == fStack_78) << 0xe);
    if (fVar3 < fStack_78) goto LAB_5004b594;
  }
  bVar6 = FUN_500b1220(param_1,param_2,pfVar1,5.60519e-45);
  uVar7 = CONCAT31(extraout_var_03,bVar6);
  if (uVar7 == 0) {
    if ((*(uint *)(param_2 + 0x1a0) & 0x100) != 0) {
      return CONCAT31((int3)(*(uint *)(param_2 + 0x1a0) >> 8),1);
    }
    bVar6 = FUN_500b1220(param_1,param_2,&local_50,5.60519e-45);
    uVar7 = 0;
    if (CONCAT31(extraout_var_04,bVar6) != 0) {
      *pfVar1 = local_50;
      *(uint *)(param_2 + 8) = local_4c;
      *(undefined4 *)(param_2 + 0xc) = local_48;
      uVar7 = local_4c;
LAB_5004b594:
      return uVar7 & 0xffffff00;
    }
  }
LAB_5004b1f5:
  return CONCAT31((int3)(uVar7 >> 8),1);
}

