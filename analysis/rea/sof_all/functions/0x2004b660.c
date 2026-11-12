// rea decompile_all
// name: FUN_2004b660
// address: 0x2004b660
// body: available
// range: 0x2004b660-0x2004b69d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2004b660(int param_1,char *param_2)

{
  int iVar1;
  
  while( true ) {
    if (0xff < param_1) {
      return 0;
    }
    if (((char *)(&DAT_20365298)[param_1] != (char *)0x0) &&
       (iVar1 = __strcmpi((char *)(&DAT_20365298)[param_1],param_2), iVar1 == 0)) break;
    param_1 = param_1 + 1;
  }
  return param_1;
}

