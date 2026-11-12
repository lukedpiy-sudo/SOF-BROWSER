// rea decompile_all
// name: FUN_2004b3f0
// address: 0x2004b3f0
// body: available
// range: 0x2004b3f0-0x2004b450 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2004b3f0(void)

{
  int iVar1;
  
  if ((((DAT_203647b0 != 0) || (DAT_203647c4 != 0)) && ((DAT_20364824 != 0 || (DAT_203648f0 != 0))))
     || (((DAT_203647b4 != 0 || (DAT_203647c8 != 0)) && (DAT_203648c8 != 0)))) {
    iVar1 = FUN_20065e60();
    if (iVar1 != 0) {
      FUN_200fb453(iVar1,&DAT_20136700);
      return iVar1;
    }
  }
  return 0;
}

