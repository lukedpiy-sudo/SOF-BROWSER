// rea decompile_all
// name: FUN_500c40d0
// address: 0x500c40d0
// body: available
// range: 0x500c40d0-0x500c422b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c40d0(int param_1,undefined4 param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  undefined2 uVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  
  if (DAT_501590b4 != '\0') {
    return;
  }
  pbVar6 = *(byte **)(param_1 + 0x1b4);
  if (pbVar6 == (byte *)0x0) {
LAB_500c410e:
    bVar7 = false;
  }
  else {
    iVar2 = 0xe;
    bVar7 = false;
    iVar3 = 0;
    bVar8 = true;
    pbVar4 = (byte *)s_m_x_mskinboss_50146f80;
    pbVar5 = pbVar6;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar7 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar3 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar3 != 0) goto LAB_500c410e;
    bVar7 = true;
  }
  if (pbVar6 == (byte *)0x0) {
LAB_500c414e:
    bVar8 = false;
  }
  else {
    iVar2 = 0x11;
    bVar8 = false;
    iVar3 = 0;
    bVar9 = true;
    pbVar4 = (byte *)s_m_x_mraiderboss1_501337e8;
    pbVar5 = pbVar6;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pbVar4 < *pbVar5;
      bVar9 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 != 0) {
      iVar3 = 0x11;
      bVar8 = false;
      iVar2 = 0;
      bVar9 = true;
      pbVar4 = (byte *)s_m_x_mraiderboss2_501337d4;
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar8 = *pbVar4 < *pbVar6;
        bVar9 = *pbVar4 == *pbVar6;
        pbVar4 = pbVar4 + 1;
        pbVar6 = pbVar6 + 1;
      } while (bVar9);
      if (!bVar9) {
        iVar2 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
      }
      if (iVar2 != 0) goto LAB_500c414e;
    }
    bVar8 = true;
  }
  if ((((!bVar7) && (!bVar8)) || (*(int *)(param_1 + 0x318) == 100)) &&
     ((*(int *)(param_1 + 0x30c) != 0 && ((*(byte *)(param_1 + 0x1a0) & 0x10) == 0)))) {
    if ((*(float *)(param_1 + 0x36c) <= DAT_5015ccdc + 2.0) && (*(int *)(param_1 + 0x2ec) < 1)) {
      if (*(int *)(param_1 + 0x164) != 0) {
        iVar13 = 0;
        iVar12 = 0;
        uVar11 = 1;
        uVar10 = 0;
        iVar2 = param_1;
        iVar3 = (*DAT_5015c9f8)(s_environ_onfireburst_501464bc);
        FUN_500853c0(&DAT_5015c518,iVar3,iVar2,uVar10,uVar11,iVar12,iVar13);
      }
      fVar1 = DAT_5015ccdc + 4.0;
      *(undefined4 *)(param_1 + 0x374) = param_2;
      *(float *)(param_1 + 0x36c) = fVar1;
      return;
    }
    if (*(int *)(param_1 + 0x164) != 0) {
      iVar13 = 0;
      iVar12 = 0;
      uVar11 = 1;
      uVar10 = 0;
      iVar2 = param_1;
      iVar3 = (*DAT_5015c9f8)(s_environ_quickfireburst_50151550);
      FUN_500853c0(&DAT_5015c518,iVar3,iVar2,uVar10,uVar11,iVar12,iVar13);
    }
    *(undefined4 *)(param_1 + 0x374) = param_2;
  }
  return;
}

