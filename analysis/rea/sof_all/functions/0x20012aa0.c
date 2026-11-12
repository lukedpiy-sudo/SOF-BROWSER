// rea decompile_all
// name: FUN_20012aa0
// address: 0x20012aa0
// body: available
// range: 0x20012aa0-0x20012ae0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20012aa0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  FUN_20012b20((float)param_2,0x9f0000ff,(float)param_3,0x9f00ff00,(float)param_4,0x9fff0000,
               (float)param_5,0x9fff00ff,0,0xffffffff);
  return;
}

