// rea decompile_all
// name: FUN_20021760
// address: 0x20021760
// body: available
// range: 0x20021760-0x200217e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20021760(byte *param_1)

{
  byte bVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  bool bVar6;
  
  puVar2 = DAT_2024b1d8;
  do {
    if (puVar2 == (undefined4 *)0x0) {
      return &DAT_2015ee44;
    }
    pbVar3 = param_1;
    pbVar5 = (byte *)*puVar2;
    do {
      bVar1 = *pbVar3;
      bVar6 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_2002179a:
        iVar4 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
        goto LAB_2002179f;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar6 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_2002179a;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_2002179f:
    if (iVar4 == 0) {
LAB_200217dc:
      return (undefined1 *)puVar2[1];
    }
    iVar4 = 7;
    bVar6 = true;
    pbVar3 = param_1;
    pbVar5 = (byte *)s_matrix_20130c20;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar6 = *pbVar3 == *pbVar5;
      pbVar3 = pbVar3 + 1;
      pbVar5 = pbVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      iVar4 = 10;
      bVar6 = true;
      pbVar3 = (byte *)*puVar2;
      pbVar5 = (byte *)s_timescale_2011d508;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar6 = *pbVar3 == *pbVar5;
        pbVar3 = pbVar3 + 1;
        pbVar5 = pbVar5 + 1;
      } while (bVar6);
      if (bVar6) goto LAB_200217dc;
    }
    puVar2 = (undefined4 *)puVar2[7];
  } while( true );
}

