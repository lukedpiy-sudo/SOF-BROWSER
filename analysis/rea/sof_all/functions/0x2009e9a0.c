// rea decompile_all
// name: FUN_2009e9a0
// address: 0x2009e9a0
// body: available
// range: 0x2009e9a0-0x2009e9c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2009e9a0(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,char *param_5
                 )

{
  char *in_ECX;
  
  if (*in_ECX != '\0') {
    *param_5 = in_ECX[2];
    return;
  }
  *param_5 = *(char *)(param_3 + *(int *)(in_ECX + 8));
  return;
}

