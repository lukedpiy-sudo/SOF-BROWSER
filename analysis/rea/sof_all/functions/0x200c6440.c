// rea decompile_all
// name: FUN_200c6440
// address: 0x200c6440
// body: available
// range: 0x200c6440-0x200c6459 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_200c6440(void)

{
  char *pcVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x38) == 0) {
    pcVar1 = s_default_20158314;
  }
  else {
    pcVar1 = *(char **)(in_ECX + 0x34);
    if (pcVar1 == (char *)0x0) {
      return "";
    }
  }
  return pcVar1;
}

