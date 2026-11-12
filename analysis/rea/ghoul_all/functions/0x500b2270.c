// rea decompile_all
// name: FUN_500b2270
// address: 0x500b2270
// body: available
// range: 0x500b2270-0x500b234f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500b2270(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  bool bVar9;
  
  *(undefined4 *)(param_1 + 0x120) = 0;
  iVar4 = DAT_5015c938;
  uVar5 = DAT_5015cca0;
  if (DAT_5015cca0 < DAT_5015cca0 + DAT_5015c938 * 0x464) {
    do {
      if (*(int *)(uVar5 + 0x78) != 0) {
        iVar2 = 0xe;
        bVar9 = true;
        pcVar6 = *(char **)(uVar5 + 0x1b4);
        pcVar8 = s_trigger_sound_5014cf30;
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          bVar9 = *pcVar6 == *pcVar8;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (bVar9);
        if (bVar9) {
          iVar2 = *(int *)(param_1 + 0x120);
          iVar1 = (int)(uVar5 - DAT_5015cca0) / 0x464;
          iVar3 = 0;
          iVar4 = DAT_5015c938;
          if (0 < iVar2) {
            piVar7 = (int *)(param_1 + 0x124);
            do {
              if (*piVar7 == iVar1) goto LAB_500b231c;
              iVar3 = iVar3 + 1;
              piVar7 = piVar7 + 1;
            } while (iVar3 < iVar2);
          }
          if (iVar2 != 0x10) {
            *(int *)(param_1 + 0x124 + iVar2 * 4) = iVar1;
            *(int *)(param_1 + 0x120) = *(int *)(param_1 + 0x120) + 1;
            iVar4 = DAT_5015c938;
          }
        }
      }
LAB_500b231c:
      uVar5 = uVar5 + 0x464;
    } while (uVar5 < DAT_5015cca0 + iVar4 * 0x464);
  }
  *(undefined4 *)(param_1 + 0x164) = 1;
  return;
}

