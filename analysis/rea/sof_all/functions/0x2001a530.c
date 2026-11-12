// rea decompile_all
// name: FUN_2001a530
// address: 0x2001a530
// body: available
// range: 0x2001a530-0x2001a58e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_2001a530(char *param_1)

{
  int iVar1;
  
  if ((param_1 == (char *)0x0) || (*param_1 != '*')) {
    Com_Error(1,s_CM_InlineModel__bad_name_for_mod_20120554,param_1);
  }
  iVar1 = FUN_200f9e9e(param_1 + 1);
  if ((iVar1 < 1) || (DAT_20248dec <= iVar1)) {
    Com_Error(1,s_CM_InlineModel__bad_number_for_m_20120528,param_1);
  }
  return DAT_20246d00 + iVar1 * 0x38;
}

