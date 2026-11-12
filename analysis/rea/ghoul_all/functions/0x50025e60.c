// rea decompile_all
// name: FUN_50025e60
// address: 0x50025e60
// body: available
// range: 0x50025e60-0x50025f35 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50025e60(int param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  longlong lVar9;
  
  pbVar6 = *(byte **)(param_1 + 0x1b4);
  if (pbVar6 != (byte *)0x0) {
    iVar3 = 0x11;
    bVar7 = false;
    iVar1 = 0;
    bVar8 = true;
    pbVar4 = (byte *)s_m_x_mraiderboss1_501337e8;
    pbVar5 = pbVar6;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pbVar4 < *pbVar5;
      bVar8 = *pbVar4 == *pbVar5;
      pbVar4 = pbVar4 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar1 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar1 == 0) {
      return;
    }
    iVar3 = 0x11;
    bVar7 = false;
    iVar1 = 0;
    bVar8 = true;
    pbVar4 = (byte *)s_m_x_mraiderboss2_501337d4;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar7 = *pbVar4 < *pbVar6;
      bVar8 = *pbVar4 == *pbVar6;
      pbVar4 = pbVar4 + 1;
      pbVar6 = pbVar6 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar1 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (iVar1 == 0) {
      return;
    }
  }
  (**(code **)(*param_2 + 0x94))();
  lVar9 = __ftol();
  iVar1 = (int)lVar9;
  if (iVar1 != 0) {
    piVar2 = FUN_500c3690();
    if (iVar1 < 0x32) {
      iVar1 = 0x32;
    }
    piVar2[0xc6] = iVar1;
    piVar2[1] = *(int *)(param_1 + 4);
    piVar2[2] = *(int *)(param_1 + 8);
    piVar2[3] = *(int *)(param_1 + 0xc);
    piVar2[3] = (int)((*(float *)(param_1 + 0x130) - (float)piVar2[0x49]) + 2.0 + (float)piVar2[3]);
    piVar2[4] = *(int *)(param_1 + 0x10);
    piVar2[5] = *(int *)(param_1 + 0x14);
    piVar2[6] = *(int *)(param_1 + 0x18);
    (**(code **)(*param_2 + 0x98))();
    FUN_500aa6d0((char *)piVar2);
  }
  return;
}

