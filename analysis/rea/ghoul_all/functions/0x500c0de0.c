// rea decompile_all
// name: FUN_500c0de0
// address: 0x500c0de0
// body: available
// range: 0x500c0de0-0x500c0f29 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c0de0(int *param_1,int param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  byte *pbVar6;
  char *pcVar7;
  byte *pbVar8;
  bool bVar9;
  bool bVar10;
  
  if ((*(byte *)(param_1 + 0x6e) & 2) != 0) {
    uVar2 = param_1[0xc6] & 0x80000001;
    if ((int)uVar2 < 0) {
      uVar2 = (uVar2 - 1 | 0xfffffffe) + 1;
    }
    if (uVar2 == 0) {
      return;
    }
  }
  iVar3 = 8;
  bVar9 = true;
  pcVar5 = *(char **)(param_2 + 0x1b4);
  pcVar7 = s_grenade_501338e8;
  do {
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    bVar9 = *pcVar5 == *pcVar7;
    pcVar5 = pcVar5 + 1;
    pcVar7 = pcVar7 + 1;
  } while (bVar9);
  if (bVar9) {
    fVar1 = (float)param_1[0x87] * 10.0;
    *(float *)(param_2 + 0x24c) = fVar1 * (float)param_1[0x8a];
    *(float *)(param_2 + 0x250) = fVar1 * (float)param_1[0x8b];
    *(float *)(param_2 + 0x254) = fVar1 * (float)param_1[0x8c];
  }
  else if (0 < *(int *)(param_2 + 0x2ec)) {
    if (*(byte **)(param_2 + 0x1c8) != (byte *)0x0) {
      iVar4 = 10;
      bVar9 = false;
      iVar3 = 0;
      bVar10 = true;
      pbVar6 = (byte *)s_sib2_heli_50150d64;
      pbVar8 = *(byte **)(param_2 + 0x1c8);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar9 = *pbVar6 < *pbVar8;
        bVar10 = *pbVar6 == *pbVar8;
        pbVar6 = pbVar6 + 1;
        pbVar8 = pbVar8 + 1;
      } while (bVar10);
      if (!bVar10) {
        iVar3 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
      }
      if (iVar3 == 0) {
        return;
      }
    }
    fVar1 = (float)param_1[0x87] * 10.0;
    *(float *)(param_2 + 0x24c) = fVar1 * (float)param_1[0x8a];
    *(float *)(param_2 + 0x250) = fVar1 * (float)param_1[0x8b];
    *(float *)(param_2 + 0x254) = fVar1 * (float)param_1[0x8c];
    iVar3 = *(int *)(param_2 + 0x74);
    if (iVar3 != 0) {
      *(undefined4 *)(iVar3 + 0x518) = *(undefined4 *)(param_2 + 0x24c);
      *(undefined4 *)(iVar3 + 0x51c) = *(undefined4 *)(param_2 + 0x250);
      *(undefined4 *)(iVar3 + 0x520) = *(undefined4 *)(param_2 + 0x254);
      if (*(float *)(param_2 + 0x2e4) < DAT_5015ccdc) {
        *(float *)(param_2 + 0x2e4) = DAT_5015ccdc + 1.5;
      }
    }
  }
  if ((*(byte *)(param_1 + 0x6e) & 1) != 0) {
    FUN_500c3880(param_1);
  }
  return;
}

