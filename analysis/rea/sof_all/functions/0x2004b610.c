// rea decompile_all
// name: FUN_2004b610
// address: 0x2004b610
// body: available
// range: 0x2004b610-0x2004b659 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_2004b610(int param_1)

{
  char *pcVar1;
  undefined1 local_40 [64];
  
  if (param_1 == -1) {
    return s_<KEY_NOT_FOUND>_20136718;
  }
  pcVar1 = (char *)(&DAT_20135350)[param_1 * 4];
  if (pcVar1 == (char *)0x0) {
    pcVar1 = s_<UNKNOWN_KEYNUM>_20136704;
  }
  Com_sprintf(local_40,0x40,s_KEY__s_20136728,pcVar1);
  pcVar1 = (char *)FUN_200581a0(local_40);
  return pcVar1;
}

