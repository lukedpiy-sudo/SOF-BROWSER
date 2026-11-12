// rea decompile_all
// name: FUN_50089950
// address: 0x50089950
// body: available
// range: 0x50089950-0x50089a21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50089950(int param_1)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  
  if (DAT_5015d928 != 0) {
    iVar3 = 0;
    iVar1 = DAT_5015c938;
    fVar2 = DAT_5015cca0;
    fVar4 = DAT_5015cca0;
    if ((uint)DAT_5015cca0 < (uint)((int)DAT_5015cca0 + DAT_5015c938 * 0x464)) {
      do {
        if ((((*(int *)((int)fVar4 + 0x78) != 0) && (*(int *)((int)fVar4 + 0x450) != 0)) &&
            (-1 < *(int *)((int)fVar4 + 0x2ec))) && (DAT_50189b58 != fVar4)) {
          FUN_5008bb10(fVar4,param_1,(float)param_1,(float *)&DAT_5018bf0c,(float *)((int)fVar4 + 4)
                       ,(float *)(param_1 + 4),100000,0,0x20,0x19,0,0);
          iVar3 = iVar3 + 1;
          iVar1 = DAT_5015c938;
          fVar2 = DAT_5015cca0;
        }
        fVar4 = (float)((int)fVar4 + 0x464);
      } while ((uint)fVar4 < (uint)((int)fVar2 + iVar1 * 0x464));
    }
    (*DAT_5015ca24)(s_killed__d_monsters_50146b1c,iVar3);
    return;
  }
  (*DAT_5015ca28)(param_1,2,s_Cheats_not_available__50146ac0);
  return;
}

