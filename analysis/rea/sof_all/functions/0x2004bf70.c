// rea decompile_all
// name: FUN_2004bf70
// address: 0x2004bf70
// body: available
// range: 0x2004bf70-0x2004c000 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004bf70(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  
  piVar5 = &DAT_20365298;
  iVar6 = 0;
  do {
    if (((*piVar5 != 0) && (iVar6 != -0x10)) &&
       ((DAT_201c1f04 != 3 || ((&DAT_2013535d)[iVar6] == '\0')))) {
      Z_Free(*piVar5);
      uVar3 = 0xffffffff;
      *piVar5 = 0;
      pcVar4 = &DAT_2015ee44;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar2 = Z_Malloc(~uVar3);
      pcVar4 = &DAT_2015ee44;
      do {
        cVar1 = *pcVar4;
        pcVar4[iVar2 + -0x2015ee44] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      *(undefined1 *)(iVar2 + (~uVar3 - 1)) = 0;
      *piVar5 = iVar2;
      DAT_20364d70 = 1;
    }
    iVar6 = iVar6 + 0x10;
    piVar5 = piVar5 + 1;
    if (0xfff < iVar6) {
      DAT_20364d70 = 1;
      return;
    }
  } while( true );
}

