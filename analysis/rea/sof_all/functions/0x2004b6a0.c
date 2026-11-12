// rea decompile_all
// name: FUN_2004b6a0
// address: 0x2004b6a0
// body: available
// range: 0x2004b6a0-0x2004b86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2004b6a0(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  
  pcVar4 = &DAT_20365ea1 + DAT_20367ea4 * 0x100;
  if ((*pcVar4 == '\\') || (*pcVar4 == '/')) {
    pcVar4 = &DAT_20365ea2 + DAT_20367ea4 * 0x100;
  }
  if (DAT_20364768 == 0) {
    pcVar2 = pcVar4;
    do {
      cVar1 = *pcVar2;
      pcVar2[(int)&DAT_20364c70 - (int)pcVar4] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    DAT_20364d88 = 1;
    pcVar2 = (char *)FUN_200193d0(pcVar4);
    if (pcVar2 == (char *)0x0) {
      DAT_20364d88 = 0;
      pcVar2 = (char *)FUN_200217f0(pcVar4);
      if (pcVar2 == (char *)0x0) {
        return;
      }
    }
    iVar5 = DAT_20367ea4 * 0x100;
    (&DAT_20365ea1)[iVar5] = 0x2f;
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4[(int)(&DAT_20365ea2 + (iVar5 - (int)pcVar2))] = cVar1;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar3 = 0xffffffff;
    pcVar4 = pcVar2;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    (&DAT_20365ea1)[iVar5 + ~uVar3] = 0x20;
    DAT_20365e9c = ~uVar3 + 2;
    (&DAT_20365ea0)[DAT_20365e9c + iVar5] = 0;
    iVar5 = (int)&DAT_20364d90 - (int)pcVar2;
    do {
      cVar1 = *pcVar2;
      pcVar2[iVar5] = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    DAT_20364768 = 1;
  }
  else {
    if (DAT_20364d88 == 0) {
      pcVar4 = (char *)FUN_200218c0(&DAT_20364c70,&DAT_20364d90);
      if (pcVar4 != (char *)0x0) goto LAB_2004b766;
      DAT_20364d88 = 1;
      pcVar4 = (char *)FUN_20019250(&DAT_20364c70,0);
      if (pcVar4 != (char *)0x0) goto LAB_2004b766;
      DAT_20364d88 = 0;
      pcVar4 = (char *)FUN_200218c0(&DAT_20364c70,0);
    }
    else {
      pcVar4 = (char *)FUN_20019250();
      if (pcVar4 != (char *)0x0) goto LAB_2004b766;
      DAT_20364d88 = 0;
      pcVar4 = (char *)FUN_200218c0(&DAT_20364c70,0);
      if (pcVar4 != (char *)0x0) goto LAB_2004b766;
      DAT_20364d88 = 1;
      pcVar4 = (char *)FUN_20019250(&DAT_20364c70,0);
    }
    if (pcVar4 != (char *)0x0) {
LAB_2004b766:
      iVar5 = DAT_20367ea4 * 0x100;
      (&DAT_20365ea1)[iVar5] = 0x2f;
      pcVar2 = pcVar4;
      do {
        cVar1 = *pcVar2;
        pcVar2[(int)(&DAT_20365ea2 + (iVar5 - (int)pcVar4))] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      uVar3 = 0xffffffff;
      pcVar2 = pcVar4;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      (&DAT_20365ea1)[iVar5 + ~uVar3] = 0x20;
      DAT_20365e9c = ~uVar3 + 2;
      (&DAT_20365ea0)[DAT_20365e9c + iVar5] = 0;
      iVar5 = (int)&DAT_20364d90 - (int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[iVar5] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      DAT_20364768 = 1;
      return;
    }
  }
  return;
}

