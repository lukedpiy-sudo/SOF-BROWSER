// rea decompile_all
// name: FUN_2004b870
// address: 0x2004b870
// body: available
// range: 0x2004b870-0x2004bad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_2004b870(int param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  
  if ((param_1 == 0xd) || (param_1 == 0xe)) {
    DAT_20365e9c = 1;
    DAT_20367ea4 = DAT_20367ea4 + 1 & 0x1f;
    iVar4 = DAT_20367ea4 * 0x100;
    DAT_20367ea8 = DAT_20367ea4;
    (&DAT_20365ea0)[iVar4] = 0x5d;
    (&DAT_20365ea1)[iVar4] = 0;
    DAT_20364768 = 0;
    return 1;
  }
  if (param_1 == 9) {
    FUN_2004b6a0();
    return 1;
  }
  DAT_20364768 = 0;
  if ((param_1 == 8) || (param_1 == 0x25)) {
    if (1 < DAT_20365e9c) {
      DAT_20365e9c = DAT_20365e9c + -1;
      (&DAT_20365ea0)[DAT_20365e9c + DAT_20367ea4 * 0x100] = 0;
      return 1;
    }
  }
  else {
    if (param_1 == 0x26) {
      do {
        DAT_20367ea8 = DAT_20367ea8 - 1 & 0x1f;
        if (DAT_20367ea8 == DAT_20367ea4) {
          DAT_20367ea8 = DAT_20367ea4 + 1 & 0x1f;
          break;
        }
      } while ((&DAT_20365ea1)[DAT_20367ea8 * 0x100] == '\0');
      pcVar5 = &DAT_20365ea0 + DAT_20367ea4 * 0x100;
      pcVar2 = &DAT_20365ea0 + DAT_20367ea8 * 0x100;
      iVar4 = (int)pcVar5 - (int)pcVar2;
      do {
        cVar1 = *pcVar2;
        pcVar2[iVar4] = cVar1;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
LAB_2004b95f:
      uVar3 = 0xffffffff;
      do {
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      DAT_20365e9c = ~uVar3 - 1;
      return 1;
    }
    if (param_1 == 0x28) {
      if (DAT_20367ea8 != DAT_20367ea4) {
        do {
          DAT_20367ea8 = DAT_20367ea8 + 1 & 0x1f;
          if (DAT_20367ea8 == DAT_20367ea4) {
            (&DAT_20365ea0)[DAT_20367ea4 * 0x100] = 0x5d;
            DAT_20365e9c = 1;
            return 1;
          }
        } while ((&DAT_20365ea1)[DAT_20367ea8 * 0x100] == '\0');
        pcVar5 = &DAT_20365ea0 + DAT_20367ea4 * 0x100;
        pcVar2 = &DAT_20365ea0 + DAT_20367ea8 * 0x100;
        iVar4 = (int)pcVar5 - (int)pcVar2;
        do {
          cVar1 = *pcVar2;
          pcVar2[iVar4] = cVar1;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        goto LAB_2004b95f;
      }
    }
    else {
      if (param_1 == 0x21) {
        DAT_2024af8c = DAT_2024af8c + -2;
        return 1;
      }
      if (param_1 == 0x22) {
        if (DAT_2024af8c + 2 <= DAT_2024af88) {
          DAT_2024af8c = DAT_2024af8c + 2;
          DAT_20364768 = 0;
          return 1;
        }
        DAT_2024af8c = DAT_2024af88;
        return 1;
      }
      if (param_1 == 0x24) {
        DAT_2024af8c = (DAT_2024af88 - DAT_2024af78) + 10;
        return 1;
      }
      if (param_1 == 0x23) {
        DAT_2024af8c = DAT_2024af88;
        return 1;
      }
      if (((0x1f < param_2) && (param_2 < 0x100)) && (DAT_20365e9c < 0xff)) {
        iVar4 = DAT_20367ea4 * 0x100;
        (&DAT_20365ea0)[DAT_20365e9c + iVar4] = (char)param_2;
        DAT_20365e9c = DAT_20365e9c + 1;
        (&DAT_20365ea0)[DAT_20365e9c + iVar4] = 0;
        return 1;
      }
    }
  }
  return 0;
}

