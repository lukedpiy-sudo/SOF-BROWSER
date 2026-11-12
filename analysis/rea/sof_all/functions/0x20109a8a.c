// rea decompile_all
// name: FUN_20109a8a
// address: 0x20109a8a
// body: available
// range: 0x20109a8a-0x20109adf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20109a8a(void)

{
  size_t sVar1;
  
  sVar1 = _strlen(DAT_204087f8);
  DAT_204087f4 = (uint)(sVar1 == 3);
  if (sVar1 == 3) {
    DAT_204087f0 = 2;
  }
  else {
    DAT_204087f0 = FUN_20109eb0(DAT_204087f8);
  }
  EnumSystemLocalesA(FUN_20109ae0,1);
  if ((DAT_20408800 & 4) == 0) {
    DAT_20408800 = 0;
  }
  return;
}

