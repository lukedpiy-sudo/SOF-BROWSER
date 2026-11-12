// rea decompile_all
// name: FUN_20017170
// address: 0x20017170
// body: available
// range: 0x20017170-0x200171e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20017170(void)

{
  Cmd_AddCommand(s_viewpos_2011f92c,&LAB_20017120);
  DAT_20230eb0 = Cvar_Get(s_crosshair_2011f920,&DAT_2011c4ac,1,0);
  DAT_20230ebc = Cvar_Get(s_cl_testblend_2011f910,&DAT_2011c4ac,0,0);
  DAT_20230eb8 = Cvar_Get(s_cl_testlights_2011d4d4,&DAT_2011c4ac,0,0);
  DAT_2023d2c0 = Cvar_Get(s_cl_stats_2011f904,&DAT_2011c4ac,0,0);
  return;
}

