// rea decompile_all
// name: FUN_200cbe30
// address: 0x200cbe30
// body: available
// range: 0x200cbe30-0x200cbe60 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_200cbe30(undefined1 *param_1)

{
  char cVar1;
  int in_ECX;
  
  if (((*(int *)(in_ECX + 4) != 0) && (cVar1 = FUN_200ca2d0(), cVar1 != '\0')) &&
     (param_1 = *(undefined1 **)(*(int *)(in_ECX + 4) + 0x40), param_1 == (undefined1 *)0x0)) {
    return &DAT_201116cc;
  }
  return param_1;
}

