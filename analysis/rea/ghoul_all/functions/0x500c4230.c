// rea decompile_all
// name: FUN_500c4230
// address: 0x500c4230
// body: available
// range: 0x500c4230-0x500c4489 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c4230(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined2 uVar11;
  undefined4 uVar12;
  int iVar13;
  
  pbVar7 = *(byte **)(param_1 + 0x1b4);
  if (pbVar7 == (byte *)0x0) {
LAB_500c4260:
    bVar8 = false;
  }
  else {
    iVar3 = 0xe;
    bVar8 = false;
    iVar4 = 0;
    bVar9 = true;
    pbVar5 = (byte *)s_m_x_mskinboss_50146f80;
    pbVar6 = pbVar7;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar8 = *pbVar5 < *pbVar6;
      bVar9 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar4 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar4 != 0) goto LAB_500c4260;
    bVar8 = true;
  }
  if (pbVar7 == (byte *)0x0) {
LAB_500c42a2:
    bVar9 = false;
  }
  else {
    iVar3 = 0x11;
    bVar9 = false;
    iVar4 = 0;
    bVar10 = true;
    pbVar5 = (byte *)s_m_x_mraiderboss1_501337e8;
    pbVar6 = pbVar7;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar9 = *pbVar5 < *pbVar6;
      bVar10 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if (iVar4 != 0) {
      iVar4 = 0x11;
      bVar9 = false;
      iVar3 = 0;
      bVar10 = true;
      pbVar5 = (byte *)s_m_x_mraiderboss2_501337d4;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *pbVar5 < *pbVar7;
        bVar10 = *pbVar5 == *pbVar7;
        pbVar5 = pbVar5 + 1;
        pbVar7 = pbVar7 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar3 != 0) goto LAB_500c42a2;
    }
    bVar9 = true;
  }
  if (((bVar8) || (bVar9)) && (*(int *)(param_1 + 0x318) != 100)) {
    return;
  }
  if (*(int *)(param_1 + 0x30c) == 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x1a0) & 0x10) != 0) {
    return;
  }
  if (*(int *)(param_1 + 0x2ec) < 1) {
    if ((DAT_501590b4 != '\0') ||
       (*(float *)(param_1 + 0x36c) < DAT_5015ccdc == (*(float *)(param_1 + 0x36c) == DAT_5015ccdc))
       ) goto LAB_500c43dc;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x164) == 0) {
      uVar12 = 1;
      iVar4 = param_1;
      iVar2 = (*DAT_5015c9f8)(s_environ_onfireburst_501464bc);
      FUN_50085340(&DAT_5015c518,iVar2,iVar4,uVar12,iVar3);
      fVar1 = DAT_5015ccdc + 2.0;
    }
    else {
      iVar13 = 0;
      uVar12 = 1;
      uVar11 = 0;
      iVar4 = param_1;
      iVar2 = (*DAT_5015c9f8)(s_environ_onfireburst_501464bc);
      FUN_500853c0(&DAT_5015c518,iVar2,iVar4,uVar11,uVar12,iVar13,iVar3);
      fVar1 = DAT_5015ccdc + 2.0;
    }
  }
  else {
    if (*(float *)(param_1 + 0x378) < DAT_5015ccdc == (*(float *)(param_1 + 0x378) == DAT_5015ccdc))
    goto LAB_500c43dc;
    iVar3 = 0;
    if (*(int *)(param_1 + 0x164) == 0) {
      uVar12 = 1;
      iVar4 = param_1;
      iVar2 = (*DAT_5015c9f8)(s_weapons_world_mpgzap_50151568);
      FUN_50085340(&DAT_5015c518,iVar2,iVar4,uVar12,iVar3);
    }
    else {
      iVar13 = 0;
      uVar12 = 1;
      uVar11 = 0;
      iVar4 = param_1;
      iVar2 = (*DAT_5015c9f8)(s_weapons_world_mpgzap_50151568);
      FUN_500853c0(&DAT_5015c518,iVar2,iVar4,uVar11,uVar12,iVar13,iVar3);
    }
    fVar1 = DAT_5015ccdc + 1.0;
  }
  *(float *)(param_1 + 0x36c) = fVar1;
LAB_500c43dc:
  *(undefined4 *)(param_1 + 0x374) = param_2;
  iVar3 = *(int *)(param_1 + 0x74);
  if (iVar3 == 0) {
    if (*(int **)(param_1 + 0x450) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x450) + 0x6c))(2,0x41c80000,2,0x41c80000);
    }
    return;
  }
  *(float *)(iVar3 + 0x4e4) = *(float *)(iVar3 + 0x4e4) + 0.3;
  if (0.9 < *(float *)(*(int *)(param_1 + 0x74) + 0x4e4)) {
    *(undefined4 *)(*(int *)(param_1 + 0x74) + 0x4e4) = 0x3f666666;
  }
  iVar3 = *(int *)(param_1 + 0x74);
  if ((*(float *)(iVar3 + 0x4e8) < 0.0 != (*(float *)(iVar3 + 0x4e8) == 0.0)) ||
     (0.2 < *(float *)(iVar3 + 0x4e8))) {
    *(undefined4 *)(iVar3 + 0x4e8) = 0x3e4ccccd;
  }
  FUN_50083b60(param_1,0x14,0x1e);
  return;
}

