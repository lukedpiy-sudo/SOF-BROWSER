// rea decompile_all
// name: FUN_20024290
// address: 0x20024290
// body: available
// range: 0x20024290-0x20024302 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20024290(void)

{
  if (DAT_2026a9f4 != (int *)0x0) {
    (**(code **)(*DAT_2026a9f4 + 8))(DAT_2026a9f4);
  }
  if (DAT_2026a9f0 != (int *)0x0) {
    (**(code **)(*DAT_2026a9f0 + 8))(DAT_2026a9f0);
  }
  if (DAT_2026a9ec != (int *)0x0) {
    (**(code **)(*DAT_2026a9ec + 8))(DAT_2026a9ec);
  }
  if (DAT_2026a9e8 != (int *)0x0) {
    (**(code **)(*DAT_2026a9e8 + 8))(DAT_2026a9e8);
  }
  if (DAT_2026a9e4 != (int *)0x0) {
    (**(code **)(*DAT_2026a9e4 + 8))(DAT_2026a9e4);
  }
  DAT_2026a9e4 = (int *)0x0;
  DAT_2026a9e8 = (int *)0x0;
  DAT_2026a9ec = (int *)0x0;
  DAT_2026a9f0 = (int *)0x0;
  DAT_2026a9f4 = (int *)0x0;
                    /* WARNING: Could not recover jumptable at 0x200242fd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  CoUninitialize();
  return;
}

