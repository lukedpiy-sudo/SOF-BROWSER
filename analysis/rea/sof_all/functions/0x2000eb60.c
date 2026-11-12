// rea decompile_all
// name: FUN_2000eb60
// address: 0x2000eb60
// body: available
// range: 0x2000eb60-0x2000ec16 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000eb60(void)

{
  byte bVar1;
  undefined1 uVar2;
  
  bVar1 = FUN_2001e260(&DAT_20367ebc);
  if ((bVar1 & 1) != 0) {
    bVar1 = bVar1 & 0xfe;
    uVar2 = FUN_2001e260(&DAT_20367ebc);
    (*DAT_20390d68)(uVar2);
  }
  if ((bVar1 & 2) != 0) {
    bVar1 = bVar1 & 0xfd;
    uVar2 = FUN_2001e260(&DAT_20367ebc);
    (*DAT_20390d64)(uVar2);
  }
  if ((bVar1 & 4) != 0) {
    bVar1 = bVar1 & 0xfb;
    uVar2 = FUN_2001e260(&DAT_20367ebc);
    (*DAT_20390d8c)(uVar2);
  }
  if ((bVar1 & 8) != 0) {
    bVar1 = bVar1 & 0xf7;
    uVar2 = FUN_2001e260(&DAT_20367ebc);
    (*DAT_20390d54)(uVar2);
  }
  if (bVar1 != 0) {
    Com_Error(1,s_Invalid_soundinfo_type____2011ef58);
  }
  return;
}

