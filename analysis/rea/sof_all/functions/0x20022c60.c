// rea decompile_all
// name: FUN_20022c60
// address: 0x20022c60
// body: available
// range: 0x20022c60-0x20022c9e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_20022c60(uint param_1)

{
  undefined4 *puVar1;
  
  DAT_2024afd0 = 0;
  for (puVar1 = DAT_2024b1d8; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[7]) {
    if ((puVar1[3] & param_1) != 0) {
      FUN_20055750(&DAT_2024afd0,*puVar1,puVar1[1]);
    }
  }
  return &DAT_2024afd0;
}

