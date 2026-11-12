// rea decompile_all
// name: Com_DPrintf
// address: 0x2001c8e0
// body: available
// range: 0x2001c8e0-0x2001c931 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void Com_DPrintf(void)

{
  uint uVar1;
  
                    /* 0x1c8e0  6  Com_DPrintf */
  FUN_200fa720();
  if (DAT_2024961c != 0) {
    uVar1 = __ftol();
    if ((uVar1 & 1) != 0) {
      FUN_200fb04d();
      Com_Printf();
    }
  }
  return;
}

