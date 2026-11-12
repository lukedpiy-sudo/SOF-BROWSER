// rea decompile_all
// name: FUN_2001fb10
// address: 0x2001fb10
// body: available
// range: 0x2001fb10-0x2001fb5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2001fb10(void)

{
  FUN_20017e10();
  FUN_20017e50();
  FUN_20022f10();
  FUN_20057f40(8);
  if (DAT_20249e4c != 0) {
    FUN_200fa9ae(DAT_20249e4c);
    DAT_20249e4c = 0;
  }
  if (DAT_204076d0 != (undefined4 *)0x0) {
    (**(code **)*DAT_204076d0)(1);
    DAT_204076d0 = (undefined4 *)0x0;
  }
  return;
}

