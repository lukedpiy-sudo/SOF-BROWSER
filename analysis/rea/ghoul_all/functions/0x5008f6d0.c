// rea decompile_all
// name: FUN_5008f6d0
// address: 0x5008f6d0
// body: available
// range: 0x5008f6d0-0x5008f872 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008f6d0(int param_1)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  float10 fVar6;
  
  fVar1 = *(float *)(param_1 + 0x414) * 0.1;
  if (*(float *)(param_1 + 0x440) < fVar1 == (*(float *)(param_1 + 0x440) == fVar1)) {
    fVar1 = *(float *)(param_1 + 0x414);
    *(float *)(param_1 + 0x24c) = fVar1 * *(float *)(param_1 + 0x428);
    *(float *)(param_1 + 0x250) = fVar1 * *(float *)(param_1 + 0x42c);
    *(float *)(param_1 + 0x254) = fVar1 * *(float *)(param_1 + 0x430);
    fVar6 = FUN_5010777b((double)((*(float *)(param_1 + 0x440) / *(float *)(param_1 + 0x414)) * 10.0
                                 ));
    iVar2 = 0x15;
    bVar5 = true;
    *(float *)(param_1 + 0x440) =
         (float)((float10)*(float *)(param_1 + 0x440) -
                fVar6 * (float10)*(float *)(param_1 + 0x414) * (float10)0.1);
    pcVar3 = *(char **)(param_1 + 0x1b4);
    pcVar4 = s_func_door_portcullis_50147690;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    fVar6 = fVar6 * (float10)0.1 + (float10)DAT_5015ccdc;
    if (bVar5) {
      *(float *)(param_1 + 0x420) = (float)fVar6;
      *(undefined1 **)(param_1 + 0x44c) = &LAB_5008f5d0;
      return;
    }
    *(float *)(param_1 + 0x2b4) = (float)fVar6;
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_5008f600;
  }
  else {
    if (*(float *)(param_1 + 0x440) != 0.0) {
      fVar1 = *(float *)(param_1 + 0x440) * 10.0;
      iVar2 = 0x15;
      bVar5 = true;
      *(float *)(param_1 + 0x24c) = fVar1 * *(float *)(param_1 + 0x428);
      *(float *)(param_1 + 0x250) = fVar1 * *(float *)(param_1 + 0x42c);
      *(float *)(param_1 + 0x254) = fVar1 * *(float *)(param_1 + 0x430);
      pcVar3 = *(char **)(param_1 + 0x1b4);
      pcVar4 = s_func_door_portcullis_50147690;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar5 = *pcVar3 == *pcVar4;
        pcVar3 = pcVar3 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        *(undefined1 **)(param_1 + 0x44c) = &LAB_5008f5d0;
        *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
        return;
      }
      *(undefined1 **)(param_1 + 0x2b8) = &LAB_5008f5d0;
      *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
      return;
    }
    *(undefined4 *)(param_1 + 0x24c) = 0;
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined4 *)(param_1 + 0x254) = 0;
    if (*(code **)(param_1 + 0x448) != (code *)0x0) {
      (**(code **)(param_1 + 0x448))();
      return;
    }
  }
  return;
}

