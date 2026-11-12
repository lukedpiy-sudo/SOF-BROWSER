// rea decompile_all
// name: FUN_5006a560
// address: 0x5006a560
// body: available
// range: 0x5006a560-0x5006a7b6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5006a560(void *this,int param_1)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_8 [2];
  
  iVar3 = param_1;
  if (param_1 == 0) {
    return;
  }
  piVar6 = *(int **)((int)this + 0xa8);
  local_8[0] = 0;
  for (; piVar6 != *(int **)((int)this + 0xac); piVar6 = piVar6 + 1) {
    if (*(int *)(*piVar6 + 8) == param_1) {
      return;
    }
  }
  *(uint *)(param_1 + 0x1a0) = *(uint *)(param_1 + 0x1a0) | 0x800000;
  if (*(int *)(param_1 + 0x1b4) == 0) {
    return;
  }
  param_1 = 0;
  piVar6 = this;
  do {
    piVar6 = piVar6 + 1;
    pbVar8 = *(byte **)(iVar3 + 0x1b4);
    pbVar4 = (byte *)(*piVar6 + 4);
    do {
      bVar1 = *pbVar8;
      bVar9 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_5006a5f3:
        iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_5006a5f8;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar8[1];
      bVar9 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_5006a5f3;
      pbVar8 = pbVar8 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar5 = 0;
LAB_5006a5f8:
    if (iVar5 == 0) {
      piVar6 = *(int **)((int)this + param_1 * 4 + 4);
      goto LAB_5006a63a;
    }
    param_1 = param_1 + 1;
  } while (param_1 < 0x28);
  pcVar2 = *(char **)(iVar3 + 0x1b4);
  if (*pcVar2 != 'c') {
    return;
  }
  if (pcVar2[1] != 't') {
    return;
  }
  if (pcVar2[2] != 'f') {
    return;
  }
  piVar6 = *(int **)((int)this + 0x94);
LAB_5006a63a:
  if (piVar6 == (int *)0x0) {
    return;
  }
  *(int *)(iVar3 + 0x460) = piVar6[0x15];
  (**(code **)(*piVar6 + 4))(iVar3);
  FUN_500632d0((void *)((int)this + 0xa4),*(undefined4 **)((int)this + 0xac),1,
               (undefined4 *)&stack0xfffffff4);
  iVar7 = 0xd;
  bVar9 = false;
  iVar5 = 0;
  bVar10 = true;
  pbVar8 = *(byte **)(iVar3 + 0x1b4);
  pbVar4 = (byte *)s_ctf_flag_red_50144c48;
  do {
    if (iVar7 == 0) break;
    iVar7 = iVar7 + -1;
    bVar9 = *pbVar8 < *pbVar4;
    bVar10 = *pbVar8 == *pbVar4;
    pbVar8 = pbVar8 + 1;
    pbVar4 = pbVar4 + 1;
  } while (bVar10);
  if (!bVar10) {
    iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
  }
  if ((iVar5 == 0) && (*(int *)((int)this + 0xbc) == 0)) {
    *(int *)((int)this + 0xbc) = iVar3;
  }
  else {
    iVar7 = 0xe;
    bVar9 = false;
    iVar5 = 0;
    bVar10 = true;
    pbVar8 = *(byte **)(iVar3 + 0x1b4);
    pbVar4 = (byte *)s_ctf_flag_blue_50144c38;
    do {
      if (iVar7 == 0) break;
      iVar7 = iVar7 + -1;
      bVar9 = *pbVar8 < *pbVar4;
      bVar10 = *pbVar8 == *pbVar4;
      pbVar8 = pbVar8 + 1;
      pbVar4 = pbVar4 + 1;
    } while (bVar10);
    if (!bVar10) {
      iVar5 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
    }
    if ((iVar5 == 0) && (*(int *)((int)this + 0xc0) == 0)) {
      *(int *)((int)this + 0xc0) = iVar3;
    }
  }
  if ((*(uint *)(iVar3 + 0x1b8) & 0x10000) == 0) {
    if ((((*(int *)((int)this + 0xb4) == 0) || (iVar5 = *(int *)(iVar3 + 0x460), iVar5 < 1)) ||
        (0x27 < iVar5)) ||
       ((iVar5 = *(int *)((int)this + iVar5 * 4 + 4),
        FUN_5006b100((void *)(iVar5 + 0x148),local_8,(uint *)&stack0x00000000),
        local_8[0] == *(int *)(iVar5 + 0x14c) || (iVar5 = *(int *)(local_8[0] + 0x10), iVar5 == 0)))
       ) goto LAB_5006a78a;
    uVar11 = 1;
  }
  else {
    if (((*(int *)((int)this + 0xb4) == 0) || (iVar5 = *(int *)(iVar3 + 0x460), iVar5 < 1)) ||
       ((0x27 < iVar5 ||
        ((iVar5 = *(int *)((int)this + iVar5 * 4 + 4),
         FUN_5006b100((void *)(iVar5 + 0x148),local_8,(uint *)&stack0x00000000),
         local_8[0] == *(int *)(iVar5 + 0x14c) || (iVar5 = *(int *)(local_8[0] + 0x10), iVar5 == 0))
        )))) goto LAB_5006a78a;
    uVar11 = 2;
  }
  FUN_500678c0(*(void **)((int)this + 0xb4),uVar11,iVar5);
LAB_5006a78a:
  if (*(char *)(iVar3 + 0x1b8) < '\0') {
    (*DAT_5015c9f8)(s_environ_irespawn_50144c24);
    (*DAT_5015c9f4)(s_dm_irespawn_wav_50144c14);
  }
  return;
}

