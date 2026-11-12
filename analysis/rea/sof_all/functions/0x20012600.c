// rea decompile_all
// name: FUN_20012600
// address: 0x20012600
// body: available
// range: 0x20012600-0x200126b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20012600(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  char *pcVar3;
  bool bVar4;
  
  DAT_201e8fa8 = param_1;
  if (DAT_20225054 != 0) {
    **(undefined4 **)(DAT_20225054 + 4) = 0xffffffff;
    if (DAT_20225930 != 0) {
      (**(code **)(DAT_20225054 + 0x28))(DAT_20225930);
    }
    DAT_20225930 = 0;
    DAT_20225930 = (**(code **)(DAT_20225054 + 0x24))();
    iVar1 = 10;
    bVar4 = true;
    pcVar2 = &DAT_201c1f2c;
    pcVar3 = s_localhost_2011d7dc;
    do {
      if (iVar1 == 0) break;
      iVar1 = iVar1 + -1;
      bVar4 = *pcVar2 == *pcVar3;
      pcVar2 = pcVar2 + 1;
      pcVar3 = pcVar3 + 1;
    } while (bVar4);
    if (!bVar4) {
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

