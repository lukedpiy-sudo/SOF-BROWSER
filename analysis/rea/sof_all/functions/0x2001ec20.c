// rea decompile_all
// name: Z_Touch
// address: 0x2001ec20
// body: available
// range: 0x2001ec20-0x2001ec55 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Z_Touch(int param_1)

{
  int iVar1;
  
                    /* 0x1ec20  22  Z_Touch */
  if (*(short *)(param_1 + -8) != 0x1d1d) {
    Com_Error(0,s_Z_Touch__bad_magic_2012142c);
  }
  iVar1 = 0;
  if (0 < *(int *)(param_1 + -4)) {
    do {
      iVar1 = iVar1 + 0x400;
    } while (iVar1 < *(int *)(param_1 + -4));
  }
  return;
}

