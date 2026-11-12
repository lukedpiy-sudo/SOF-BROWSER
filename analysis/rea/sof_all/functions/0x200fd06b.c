// rea decompile_all
// name: FUN_200fd06b
// address: 0x200fd06b
// body: available
// range: 0x200fd06b-0x200fd0b2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200fd06b(undefined4 param_1)

{
  DAT_20408b80 = HeapAlloc(DAT_20408b64,0,0x140);
  if (DAT_20408b80 == (LPVOID)0x0) {
    return 0;
  }
  DAT_20408b78 = 0;
  DAT_20408b7c = 0;
  DAT_20408b74 = DAT_20408b80;
  DAT_20408b84 = param_1;
  DAT_20408b6c = 0x10;
  return 1;
}

