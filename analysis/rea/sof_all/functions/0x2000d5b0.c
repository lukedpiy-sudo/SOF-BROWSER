// rea decompile_all
// name: FUN_2000d5b0
// address: 0x2000d5b0
// body: available
// range: 0x2000d5b0-0x2000d69d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000d5b0(void)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  char *pcVar8;
  byte *pbVar9;
  char *pcVar10;
  bool bVar11;
  int local_4;
  
  iVar5 = 2;
  bVar11 = true;
  pcVar8 = &DAT_201e9c8c;
  pcVar10 = &DAT_2011d31c;
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar11 = *pcVar8 == *pcVar10;
    pcVar8 = pcVar8 + 1;
    pcVar10 = pcVar10 + 1;
  } while (bVar11);
  if ((!bVar11) && (DAT_201e9c8c != '\0')) {
    iVar5 = DAT_202250a0;
    if ((DAT_202250a0 == 0) && (PTR_s_timescale_2011d320 != (undefined *)0x0)) {
      iVar2 = 0;
      puVar6 = PTR_s_timescale_2011d320;
      do {
        uVar3 = Cvar_Get(puVar6,*(undefined4 *)((int)&PTR_DAT_2011d324 + iVar2),0,0);
        iVar5 = DAT_202250a0 + 1;
        iVar2 = DAT_202250a0 * 3;
        DAT_202250a0 = iVar5;
        (&DAT_2011d328)[iVar2] = uVar3;
        iVar2 = iVar5 * 0xc;
        puVar6 = (&PTR_s_timescale_2011d320)[iVar5 * 3];
      } while (puVar6 != (undefined *)0x0);
    }
    local_4 = 0;
    if (0 < iVar5) {
      ppuVar7 = &PTR_DAT_2011d324;
      do {
        pbVar4 = *(byte **)(ppuVar7[1] + 4);
        pbVar9 = *ppuVar7;
        do {
          bVar1 = *pbVar4;
          bVar11 = bVar1 < *pbVar9;
          if (bVar1 != *pbVar9) {
LAB_2000d66c:
            iVar2 = (1 - (uint)bVar11) - (uint)(bVar11 != 0);
            goto LAB_2000d671;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar11 = bVar1 < pbVar9[1];
          if (bVar1 != pbVar9[1]) goto LAB_2000d66c;
          pbVar4 = pbVar4 + 2;
          pbVar9 = pbVar9 + 2;
        } while (bVar1 != 0);
        iVar2 = 0;
LAB_2000d671:
        if (iVar2 != 0) {
          Cvar_Set(ppuVar7[-1],*ppuVar7);
          iVar5 = DAT_202250a0;
        }
        ppuVar7 = ppuVar7 + 3;
        local_4 = local_4 + 1;
      } while (local_4 < iVar5);
    }
  }
  return;
}

