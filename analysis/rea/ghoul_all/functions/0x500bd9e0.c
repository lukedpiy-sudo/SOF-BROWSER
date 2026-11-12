// rea decompile_all
// name: FUN_500bd9e0
// address: 0x500bd9e0
// body: available
// range: 0x500bd9e0-0x500bdb41 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500bd9e0(void)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  bool bVar9;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = 0;
  local_10 = 0;
  if (1 < DAT_5015c938) {
    local_4 = 2;
    iVar4 = DAT_5015c938;
    iVar2 = DAT_5015cca0;
    do {
      iVar6 = iVar2 + 0x464;
      if (((*(int *)(iVar2 + 0x4dc) != 0) && (*(int *)(iVar2 + 0x63c) != 0)) &&
         ((*(uint *)(iVar2 + 0x604) & 0x400) == 0)) {
        local_c = local_c + 1;
        *(int *)(iVar2 + 0x7a8) = iVar6;
        local_10 = local_10 + 1;
        iVar3 = iVar2 + 0x8c8;
        iVar5 = iVar6;
        iVar4 = DAT_5015c938;
        local_8 = local_4;
        if (local_4 < DAT_5015c938) {
          do {
            if (((*(int *)(iVar3 + 0x78) != 0) &&
                (pbVar8 = *(byte **)(iVar3 + 0x1d8), pbVar8 != (byte *)0x0)) &&
               ((*(uint *)(iVar3 + 0x1a0) & 0x400) == 0)) {
              pbVar7 = *(byte **)(iVar2 + 0x63c);
              do {
                bVar1 = *pbVar7;
                bVar9 = bVar1 < *pbVar8;
                if (bVar1 != *pbVar8) {
LAB_500bdab9:
                  iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                  goto LAB_500bdabe;
                }
                if (bVar1 == 0) break;
                bVar1 = pbVar7[1];
                bVar9 = bVar1 < pbVar8[1];
                if (bVar1 != pbVar8[1]) goto LAB_500bdab9;
                pbVar7 = pbVar7 + 2;
                pbVar8 = pbVar8 + 2;
              } while (bVar1 != 0);
              iVar4 = 0;
LAB_500bdabe:
              if (iVar4 == 0) {
                *(int *)(iVar5 + 0x33c) = iVar3;
                local_10 = local_10 + 1;
                *(int *)(iVar3 + 0x344) = iVar6;
                *(uint *)(iVar3 + 0x1a0) = *(uint *)(iVar3 + 0x1a0) | 0x400;
                iVar5 = iVar3;
              }
            }
            local_8 = local_8 + 1;
            iVar3 = iVar3 + 0x464;
            iVar4 = DAT_5015c938;
          } while (local_8 < DAT_5015c938);
        }
      }
      bVar9 = local_4 < iVar4;
      iVar2 = iVar6;
      local_4 = local_4 + 1;
    } while (bVar9);
  }
  (*DAT_5015ca24)(s__i_teams_with__i_entities_5014ff68,local_c,local_10);
  return;
}

