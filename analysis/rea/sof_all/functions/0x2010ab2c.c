// rea decompile_all
// name: FUN_2010ab2c
// address: 0x2010ab2c
// body: available
// range: 0x2010ab2c-0x2010ab7d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_2010ab2c(ushort param_1,ushort param_2)

{
  int iVar1;
  uint local_8;
  
  if (param_1 == 0xffff) {
    return 0;
  }
  if (param_1 < 0x100) {
    local_8 = (uint)*(ushort *)(PTR_DAT_2015d2bc + (uint)param_1 * 2);
  }
  else {
    iVar1 = FUN_2010a14e(1,&param_1,1,&local_8,0,0);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return local_8 & 0xffff & (uint)param_2;
}

