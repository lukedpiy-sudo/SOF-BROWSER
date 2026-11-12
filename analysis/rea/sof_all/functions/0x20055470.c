// rea decompile_all
// name: FUN_20055470
// address: 0x20055470
// body: available
// range: 0x20055470-0x2005551d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_20055470(undefined4 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  int iVar4;
  
  iVar4 = 0;
  pbVar2 = (byte *)*param_1;
  DAT_20390b10 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar3 = *pbVar2;
joined_r0x20055498:
    while (0x20 < bVar3) {
      if (bVar3 != 0x2f) {
        if (bVar3 != 0x22) goto LAB_200554eb;
        pbVar2 = pbVar2 + 1;
        while( true ) {
          bVar3 = *pbVar2;
          pbVar2 = pbVar2 + 1;
          if ((bVar3 == 0x22) || (bVar3 == 0)) break;
          if (iVar4 < 0x100) {
            (&DAT_20390b10)[iVar4] = bVar3;
            iVar4 = iVar4 + 1;
          }
        }
LAB_2005550e:
        (&DAT_20390b10)[iVar4] = 0;
        *param_1 = pbVar2;
        return &DAT_20390b10;
      }
      if (pbVar2[1] != 0x2f) {
        do {
          (&DAT_20390b10)[iVar4] = bVar3;
          iVar4 = iVar4 + 1;
          do {
            bVar3 = pbVar2[1];
            pbVar2 = pbVar2 + 1;
            if (bVar3 < 0x21) {
              if (iVar4 == 0x100) {
                iVar4 = 0;
              }
              goto LAB_2005550e;
            }
LAB_200554eb:
          } while (0xff < iVar4);
        } while( true );
      }
      bVar3 = *pbVar2;
      while ((bVar3 != 0 && (bVar3 != 10))) {
        pbVar1 = pbVar2 + 1;
        pbVar2 = pbVar2 + 1;
        bVar3 = *pbVar1;
      }
    }
    if (bVar3 != 0) {
      bVar3 = pbVar2[1];
      pbVar2 = pbVar2 + 1;
      goto joined_r0x20055498;
    }
  }
  *param_1 = 0;
  return &DAT_2015ee44;
}

