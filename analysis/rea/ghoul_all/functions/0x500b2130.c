// rea decompile_all
// name: FUN_500b2130
// address: 0x500b2130
// body: available
// range: 0x500b2130-0x500b2262 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_500b2130(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  char *pcVar7;
  char *pcVar8;
  bool bVar9;
  
  if (*(int *)((int)this + 0x164) == 0) {
    *(undefined4 *)((int)this + 0x120) = 0;
    iVar4 = DAT_5015c938;
    uVar6 = DAT_5015cca0;
    if (DAT_5015cca0 < DAT_5015cca0 + DAT_5015c938 * 0x464) {
      do {
        if (*(int *)(uVar6 + 0x78) != 0) {
          iVar2 = 0xe;
          bVar9 = true;
          pcVar7 = *(char **)(uVar6 + 0x1b4);
          pcVar8 = s_trigger_sound_5014cf30;
          do {
            if (iVar2 == 0) break;
            iVar2 = iVar2 + -1;
            bVar9 = *pcVar7 == *pcVar8;
            pcVar7 = pcVar7 + 1;
            pcVar8 = pcVar8 + 1;
          } while (bVar9);
          if (bVar9) {
            iVar2 = *(int *)((int)this + 0x120);
            iVar1 = (int)(uVar6 - DAT_5015cca0) / 0x464;
            iVar3 = 0;
            iVar4 = DAT_5015c938;
            if (0 < iVar2) {
              piVar5 = (int *)((int)this + 0x124);
              do {
                if (*piVar5 == iVar1) goto LAB_500b21ea;
                iVar3 = iVar3 + 1;
                piVar5 = piVar5 + 1;
              } while (iVar3 < iVar2);
            }
            if (iVar2 != 0x10) {
              *(int *)((int)this + iVar2 * 4 + 0x124) = iVar1;
              *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + 1;
              iVar4 = DAT_5015c938;
            }
          }
        }
LAB_500b21ea:
        uVar6 = uVar6 + 0x464;
      } while (uVar6 < DAT_5015cca0 + iVar4 * 0x464);
    }
    *(undefined4 *)((int)this + 0x164) = 1;
  }
  iVar4 = *(int *)((int)this + 0x120);
  iVar2 = 0;
  if (0 < iVar4) {
    piVar5 = (int *)((int)this + 0x124);
    while (*piVar5 != param_1) {
      iVar2 = iVar2 + 1;
      piVar5 = piVar5 + 1;
      if (iVar4 <= iVar2) {
        return;
      }
    }
    *(undefined4 *)((int)this + iVar2 * 4 + 0x124) = *(undefined4 *)((int)this + iVar4 * 4 + 0x120);
    *(int *)((int)this + 0x120) = *(int *)((int)this + 0x120) + -1;
  }
  return;
}

