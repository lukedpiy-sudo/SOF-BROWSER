// rea decompile_all
// name: FUN_20066090
// address: 0x20066090
// body: available
// range: 0x20066090-0x200660fd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20066090(int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  if (param_1 == 0) {
    if (DAT_20403508 != 0) {
      FUN_20011670();
      FUN_2000df40();
      DAT_20403508 = 0;
    }
    DAT_20403530 = 0;
    iVar1 = DAT_20403508;
  }
  else {
    DAT_20403508 = 0;
    iVar1 = DAT_20403530;
  }
  if ((iVar1 == 0) && (DAT_20403520 != (HMODULE)0x0)) {
    BVar2 = FreeLibrary(DAT_20403520);
    if (BVar2 == 0) {
      Com_Error(0,s_FreeLibrary_failed_for_player_li_2013aa48);
    }
    DAT_20403520 = (HMODULE)0x0;
  }
  return;
}

