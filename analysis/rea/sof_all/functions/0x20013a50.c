// rea decompile_all
// name: FUN_20013a50
// address: 0x20013a50
// body: available
// range: 0x20013a50-0x20013ae2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20013a50(int param_1)

{
  FUN_200c7380();
  if (DAT_20390d4c != (code *)0x0) {
    (*DAT_20390d4c)();
  }
  DAT_201e7595 = 0;
  FUN_20001320();
  if (((DAT_201c1f24 == '\0') &&
      (((DAT_20249618 == 0 || (*(float *)(DAT_20249618 + 0x18) == 0.0)) &&
       (*(float *)(DAT_2024961c + 0x18) == 0.0)))) &&
     ((DAT_201c1f04 != 1 && (_DAT_20225e70 = DAT_201c1f10, param_1 == 0)))) {
    FUN_20018380(0,s_menu_loading_2011f680);
    FUN_20015fa0(0);
    DAT_201c1f28 = DAT_201e9480;
  }
  return;
}

