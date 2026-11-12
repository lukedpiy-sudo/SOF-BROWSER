// rea decompile_all
// name: FUN_201025c5
// address: 0x201025c5
// body: available
// range: 0x201025c5-0x20102607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_201025c5(int param_1)

{
  int *piVar1;
  
  piVar1 = &DAT_2015d730;
  if (DAT_2015d730 != param_1) {
    do {
      piVar1 = piVar1 + 3;
      if (&DAT_2015d730 + DAT_2015d7b0 * 3 <= piVar1) break;
    } while (*piVar1 != param_1);
  }
  if ((&DAT_2015d730 + DAT_2015d7b0 * 3 <= piVar1) || (*piVar1 != param_1)) {
    piVar1 = (int *)0x0;
  }
  return piVar1;
}

