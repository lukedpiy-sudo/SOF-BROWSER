// rea decompile_all
// name: FUN_5004f700
// address: 0x5004f700
// body: available
// range: 0x5004f700-0x5004f7bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5004f700(int param_1,undefined4 param_2,float param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  byte *pbVar5;
  char *pcVar6;
  byte *pbVar7;
  bool bVar8;
  bool bVar9;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = 7;
  bVar8 = true;
  pcVar4 = *(char **)(param_1 + 0x1b4);
  pcVar6 = s_player_50142e48;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar8 = *pcVar4 == *pcVar6;
    pcVar4 = pcVar4 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar8);
  if (!bVar8) {
    iVar1 = *(int *)(param_1 + 0x160);
    if (iVar1 == 0) {
      return;
    }
    iVar2 = 7;
    bVar8 = false;
    iVar3 = 0;
    bVar9 = true;
    pbVar5 = *(byte **)(iVar1 + 0x1b4);
    pbVar7 = (byte *)s_player_50142e48;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *pbVar5 < *pbVar7;
      bVar9 = *pbVar5 == *pbVar7;
      pbVar5 = pbVar5 + 1;
      pbVar7 = pbVar7 + 1;
    } while (bVar9);
    if (!bVar9) {
      iVar3 = (1 - (uint)bVar8) - (uint)(bVar8 != 0);
    }
    if (iVar3 != 0) {
      return;
    }
    if (iVar1 != 0) goto LAB_5004f75a;
  }
  iVar1 = param_1;
LAB_5004f75a:
  iVar2 = *(int *)(iVar1 + 0x45c);
  if (iVar2 != 0) {
    if (*(float *)(iVar2 + 4) < DAT_5015ccdc != (*(float *)(iVar2 + 4) == DAT_5015ccdc)) {
      *(undefined4 *)(iVar2 + 8) = 0;
    }
    *(float *)(*(int *)(iVar1 + 0x45c) + 4) = DAT_5015ccdc + 1.0;
    if (*(float *)(*(int *)(iVar1 + 0x45c) + 8) < param_3) {
      *(float *)(*(int *)(iVar1 + 0x45c) + 8) = param_3;
    }
    *(undefined4 *)(*(int *)(iVar1 + 0x45c) + 0xc) = param_4;
  }
  return;
}

