// rea decompile_all
// name: FUN_200125c0
// address: 0x200125c0
// body: available
// range: 0x200125c0-0x200125f4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200125c0(void)

{
  if (DAT_20225930 == (int *)0x0) {
    FUN_2000c770();
  }
  (**(code **)(*DAT_20225930 + 0x114))();
  if (DAT_20225820 == 0) {
                    /* WARNING: Could not recover jumptable at 0x200125ee. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*DAT_20225930 + 0x110))();
    return;
  }
  return;
}

