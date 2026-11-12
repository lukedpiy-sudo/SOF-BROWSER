// rea decompile_all
// name: FUN_5008f880
// address: 0x5008f880
// body: available
// range: 0x5008f880-0x5008f991 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008f880(int param_1,float *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  float10 fVar5;
  
  *(undefined4 *)(param_1 + 0x24c) = 0;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(float *)(param_1 + 0x428) = *param_2 - *(float *)(param_1 + 4);
  *(float *)(param_1 + 0x42c) = param_2[1] - *(float *)(param_1 + 8);
  *(float *)(param_1 + 0x430) = param_2[2] - *(float *)(param_1 + 0xc);
  fVar5 = (float10)FUN_500fe050((float *)(param_1 + 0x428));
  *(float *)(param_1 + 0x440) = (float)fVar5;
  *(undefined4 *)(param_1 + 0x448) = param_3;
  if ((*(float *)(param_1 + 0x414) != *(float *)(param_1 + 0x410)) ||
     (*(float *)(param_1 + 0x414) != *(float *)(param_1 + 0x418))) {
    *(undefined4 *)(param_1 + 0x434) = 0;
    *(code **)(param_1 + 0x2b8) = FUN_5008fed0;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
    return;
  }
  iVar1 = param_1;
  if ((*(uint *)(param_1 + 0x1a0) & 0x400) != 0) {
    iVar1 = *(int *)(param_1 + 0x344);
  }
  if (DAT_5015d228 == iVar1) {
    FUN_5008f6d0(param_1);
    return;
  }
  iVar1 = 0x15;
  bVar4 = true;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  pcVar2 = *(char **)(param_1 + 0x1b4);
  pcVar3 = s_func_door_portcullis_50147690;
  do {
    if (iVar1 == 0) break;
    iVar1 = iVar1 + -1;
    bVar4 = *pcVar2 == *pcVar3;
    pcVar2 = pcVar2 + 1;
    pcVar3 = pcVar3 + 1;
  } while (bVar4);
  if (!bVar4) {
    *(code **)(param_1 + 0x2b8) = FUN_5008f6d0;
    return;
  }
  *(undefined1 **)(param_1 + 0x44c) = &LAB_5008f5d0;
  return;
}

