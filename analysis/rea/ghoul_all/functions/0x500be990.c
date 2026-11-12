// rea decompile_all
// name: FUN_500be990
// address: 0x500be990
// body: available
// range: 0x500be990-0x500beaa5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500be990(uint *param_1)

{
  undefined **ppuVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  byte *pbVar7;
  undefined **ppuVar8;
  bool bVar9;
  byte abStack_200 [256];
  byte abStack_100 [256];
  
  pbVar2 = (byte *)(*DAT_5015cb5c)(0x700);
  if (pbVar2 != (byte *)0x0) {
    pbVar7 = &DAT_5015911c;
    pbVar3 = pbVar2;
    do {
      bVar6 = *pbVar3;
      bVar9 = bVar6 < *pbVar7;
      if (bVar6 != *pbVar7) {
LAB_500be9de:
        iVar4 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
        goto LAB_500be9e3;
      }
      if (bVar6 == 0) break;
      bVar6 = pbVar3[1];
      bVar9 = bVar6 < pbVar7[1];
      if (bVar6 != pbVar7[1]) goto LAB_500be9de;
      pbVar3 = pbVar3 + 2;
      pbVar7 = pbVar7 + 2;
    } while (bVar6 != 0);
    iVar4 = 0;
LAB_500be9e3:
    if (iVar4 != 0) {
      bVar6 = *pbVar2;
      while (bVar6 != 0) {
        pbVar3 = abStack_100;
        if (bVar6 == 0x5c) {
          pbVar2 = pbVar2 + 1;
        }
        bVar6 = *pbVar2;
        while ((bVar6 != 0 && (bVar6 != 0x5c))) {
          *pbVar3 = bVar6;
          pbVar7 = pbVar2 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar2 = pbVar2 + 1;
          bVar6 = *pbVar7;
        }
        *pbVar3 = 0;
        if (*pbVar2 == 0x5c) {
          pbVar2 = pbVar2 + 1;
        }
        pbVar3 = abStack_200;
        bVar6 = *pbVar2;
        while ((bVar6 != 0 && (bVar6 != 0x5c))) {
          *pbVar3 = bVar6;
          pbVar7 = pbVar2 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar2 = pbVar2 + 1;
          bVar6 = *pbVar7;
        }
        *pbVar3 = 0;
        iVar4 = FUN_5010839e(pbVar3,abStack_200);
        bVar6 = 0;
        ppuVar8 = &PTR_s_nothing_5014f3c0;
        do {
          iVar5 = __strcmpi((char *)abStack_100,*ppuVar8);
          if (iVar5 == 0) {
            if (iVar4 != 0) {
              *param_1 = *param_1 | 1 << (bVar6 & 0x1f);
            }
            break;
          }
          ppuVar1 = ppuVar8 + 1;
          ppuVar8 = ppuVar8 + 1;
          bVar6 = bVar6 + 1;
        } while (*ppuVar1 != (undefined *)0x0);
        bVar6 = *pbVar2;
      }
    }
  }
  return;
}

