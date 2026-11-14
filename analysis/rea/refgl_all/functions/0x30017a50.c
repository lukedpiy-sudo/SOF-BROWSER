// rea decompile_all
// name: FUN_30017a50
// address: 0x30017a50
// body: available
// range: 0x30017a50-0x30017adc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_30017a50(int param_1)

{
  FUN_30006400(DAT_300a3740);
  FUN_3001b650();
  (*DAT_300a4710)(7);
  (*DAT_300a42f4)(0,0);
  (*DAT_300a4520)(param_1 + 0xc);
  (*DAT_300a42f4)(0,0x3f800000);
  (*DAT_300a4520)(param_1 + 0x18);
  (*DAT_300a42f4)(0x3f800000,0x3f800000);
  (*DAT_300a4520)(param_1 + 0x24);
  (*DAT_300a42f4)(0x3f800000,0);
  (*DAT_300a4520)(param_1 + 0x30);
  (*DAT_300a45f4)();
  DAT_300a40f8 = DAT_300a40f8 + 1;
  return;
}

