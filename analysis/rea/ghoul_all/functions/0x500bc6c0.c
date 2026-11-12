// rea decompile_all
// name: FUN_500bc6c0
// address: 0x500bc6c0
// body: available
// range: 0x500bc6c0-0x500bc767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500bc6c0(undefined4 *param_1)

{
  param_1[0x47] = 0xc2b60000;
  param_1[0x48] = 0xc2840000;
  param_1[0x49] = 0xc2040000;
  param_1[0x4a] = 0x42b60000;
  param_1[0x4b] = 0x42840000;
  param_1[0x4c] = 0x42680000;
  param_1[0x6e] = param_1[0x6e] | 2;
  FUN_500b3870((uint)param_1,&PTR_s_objects_siberia_snowcat_5014e658,(char *)0x0,0);
  if ((*(byte *)(param_1 + 0x6e) & 4) != 0) {
    FUN_500b4540(param_1,0x5014e658,s_HEADLIGHT01_5014e8c4,&PTR_s_objects_generic_beam_5014e5b8,
                 0x5014b18c,(char *)0x0);
    FUN_500b4540(param_1,0x5014e658,s_HEADLIGHT02_5014e8b8,&PTR_s_objects_generic_beam_5014e5b8,
                 0x5014b18c,(char *)0x0);
  }
  return;
}

