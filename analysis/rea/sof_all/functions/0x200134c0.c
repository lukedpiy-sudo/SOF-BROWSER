// rea decompile_all
// name: FUN_200134c0
// address: 0x200134c0
// body: available
// range: 0x200134c0-0x20013701 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_200134c0(void)

{
  DAT_20225e94 = Cvar_Get(s_viewsize_2011f484,&DAT_2011f668,1,0);
  DAT_20225a4c = Cvar_Get(s_scr_conspeed_2011f650,s_10000_2011f660,0,0);
  _DAT_20225a68 = Cvar_Get(s_scr_showturtle_2011f640,&DAT_2011c4ac,0,0);
  DAT_2022fef0 = Cvar_Get(s_scr_showpause_2011f630,&DAT_2011d31c,0,0);
  DAT_202259f0 = Cvar_Get(s_scr_centertime_2011f61c,&DAT_2011f62c,0,0);
  DAT_20225980 = Cvar_Get(s_cinem_centertime_2011f608,&DAT_2011f62c,0,0);
  _DAT_20225a48 = Cvar_Get(s_scr_printspeed_2011f5f4,&DAT_2011f604,0,0);
  DAT_2022ff04 = Cvar_Get(s_netgraph_2011f5e8,&DAT_2011c4ac,0,0);
  DAT_2022fef4 = Cvar_Get(s_timegraph_2011f5dc,&DAT_2011c4ac,0,0);
  DAT_20225a60 = Cvar_Get(s_debuggraph_2011f5d0,&DAT_2011c4ac,0,0);
  DAT_20225a54 = Cvar_Get(s_graphheight_2011f5c4,&DAT_2011f668,0,0);
  DAT_2022fefc = Cvar_Get(s_graphscale_2011f5b8,&DAT_2011d31c,0,0);
  DAT_202259ec = Cvar_Get(s_graphshift_2011f5ac,&DAT_2011c4ac,0,0);
  DAT_2022fee8 = Cvar_Get(s_graphwidth_2011f5a0,&DAT_2011c4a8,0,0);
  DAT_20225a58 = Cvar_Get(s_graphsize_2011f590,&DAT_2011f59c,0,0);
  DAT_20230324 = Cvar_Get(s_scr_drawall_2011f584,&DAT_2011c4ac,0,0);
  DAT_202259e8 = Cvar_Get(s_gl_clear_2011f578,&DAT_2011c4ac,0,0);
  DAT_20225e78 = Cvar_Get(s_scr_menuoverlay_2011f568,&DAT_2011c4ac,0,0);
  Cmd_AddCommand(s_timerefresh_2011f55c,&LAB_20013fd0);
  Cmd_AddCommand(s_loading_2011f554,&LAB_20013f40);
  Cmd_AddCommand(s_sizeup_2011f54c,&LAB_200132b0);
  Cmd_AddCommand(s_sizedown_2011f540,&LAB_200132d0);
  Cmd_AddCommand(&DAT_2011f53c,&LAB_200132f0);
  Cmd_AddCommand(s_cloud_2011f534,&LAB_200133f0);
  Cmd_AddCommand(s_terrain_2011f52c,&LAB_200133c0);
  FUN_20009e20();
  DAT_20225e98 = 0x3f800000;
  DAT_20230314 = 1;
  return;
}

