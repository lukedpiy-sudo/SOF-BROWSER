// rea decompile_all
// name: FUN_5006e720
// address: 0x5006e720
// body: available
// range: 0x5006e720-0x5006e89f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5006e720(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = *(int *)(param_1 + 0x74);
  if (*(int *)(iVar5 + 0x2dc) == 0) {
    iVar2 = *(int *)(param_3 + 0x74);
    if ((iVar2 != 0) && (param_3 != param_1)) {
      iVar5 = **(int **)(iVar5 + 0x350);
      if (**(int **)(iVar2 + 0x350) == param_1) {
        *(int *)(iVar2 + 0x308) = *(int *)(iVar2 + 0x308) + 4;
        uVar1 = (*DAT_5015c9f4)(s_dm_assassin_killtarget_wav_50144f7c);
        (*DAT_5015ca48)(param_3,2,uVar1);
      }
      else {
        if (iVar5 == param_3) {
          *(int *)(iVar2 + 0x308) = *(int *)(iVar2 + 0x308) + 1;
          uVar1 = (*DAT_5015c9f4)(s_dm_frag_wav_50144ca8,0x3f800000,0x40400000,0,1);
          (*DAT_5015ca48)(param_3,2,uVar1);
          return;
        }
        *(int *)(iVar2 + 0x308) = *(int *)(iVar2 + 0x308) + -1;
        uVar1 = (*DAT_5015c9f4)(s_dm_assassin_badkill_wav_50144f64);
        (*DAT_5015ca48)(param_3,2,uVar1);
        (*DAT_5015cab0)(param_3,0x800);
      }
      *(int *)(*(int *)(*(int *)(param_1 + 0x74) + 0x350) + 4) = param_3;
      if (iVar5 == param_3) {
        iVar5 = 0;
        iVar2 = FUN_5006b5c0();
        if (1 < iVar2) {
          uVar3 = FUN_50107636();
          iVar2 = (int)uVar3 % DAT_5015d8c8 + 1;
          do {
            iVar4 = iVar2 + 1;
            iVar5 = DAT_5015cca0 + iVar2 * 0x464;
            if (DAT_5015d8c8 < iVar4) {
              iVar4 = 1;
            }
            iVar2 = iVar4;
          } while ((((*(int *)(iVar5 + 0x78) == 0) ||
                    (*(int *)(*(int *)(iVar5 + 0x74) + 0x2dc) != 0)) ||
                   (*(int *)(iVar5 + 0x74) == 0)) || (iVar5 == param_3));
        }
        *(int *)(*(int *)(*(int *)(param_3 + 0x74) + 0x350) + 4) = iVar5;
        return;
      }
      *(int *)(*(int *)(*(int *)(param_3 + 0x74) + 0x350) + 4) = iVar5;
      return;
    }
    *(int *)(iVar5 + 0x308) = *(int *)(iVar5 + 0x308) + -1;
  }
  return;
}

