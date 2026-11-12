// rea decompile_all
// name: FUN_20011550
// address: 0x20011550
// body: available
// range: 0x20011550-0x2001166a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20011550(void)

{
  undefined1 *puVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  bool bVar5;
  
  _DAT_202252d4 = &DAT_20225838;
  if ((*(float *)(DAT_2022508c + 0x18) != 0.0) && (DAT_201e947c == '\0')) {
    iVar2 = 10;
    bVar5 = true;
    pcVar3 = &DAT_201c1f2c;
    pcVar4 = s_localhost_2011d7dc;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      DAT_20225820 = 1;
      bVar5 = true;
      goto LAB_20011598;
    }
  }
  DAT_20225820 = 0;
  bVar5 = false;
LAB_20011598:
  _DAT_20225914 = *(undefined4 *)(DAT_2022508c + 0x18);
  puVar1 = &DAT_2011d31c;
  if (!bVar5) {
    puVar1 = &DAT_2011c4ac;
  }
  Cvar_Set(s_predicting_2011e360,puVar1);
  if (DAT_20225054 != 0) {
    **(undefined4 **)(DAT_20225054 + 4) = 0xffffffff;
    if (DAT_20225930 != 0) {
      (**(code **)(DAT_20225054 + 0x28))(DAT_20225930);
    }
    DAT_20225930 = 0;
    DAT_20225930 = (**(code **)(DAT_20225054 + 0x24))();
    iVar2 = 10;
    bVar5 = true;
    pcVar3 = &DAT_201c1f2c;
    pcVar4 = s_localhost_2011d7dc;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar5 = *pcVar3 == *pcVar4;
      pcVar3 = pcVar3 + 1;
      pcVar4 = pcVar4 + 1;
    } while (bVar5);
    if (!bVar5) {
      (**(code **)(DAT_20225054 + 0x20))();
    }
    DAT_20225258 = 0;
    DAT_2022592c._2_2_ = 0;
    DAT_202258cc = DAT_201e7f28;
    DAT_2022591c = DAT_201e7f28;
    _DAT_20225928 = DAT_201e7f28;
    DAT_2022581c = 0;
    DAT_20225408 = 0;
    _DAT_20225824 = 0;
    _DAT_2022525c = 0;
  }
  return;
}

