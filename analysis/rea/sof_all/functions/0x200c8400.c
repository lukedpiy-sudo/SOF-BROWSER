// rea decompile_all
// name: FUN_200c8400
// address: 0x200c8400
// body: available
// range: 0x200c8400-0x200c8590 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c8400(void)

{
  DAT_2040654c = Cvar_Get(s_tip_duration_20158660,&DAT_20158670,1,0);
  DAT_20406564 = Cvar_Get(s_cursor_blink_speed_20158648,&DAT_2015865c,1,0);
  DAT_20406550 = Cvar_Get(s_ghl_no_texture_stack_20158630,&DAT_2011c4ac,1,0);
  Cmd_AddCommand(&DAT_20158628,&LAB_200c78f0);
  Cmd_AddCommand(s_intermission_20158618,&LAB_200c7950);
  Cmd_AddCommand(s_reloadall_2015860c,&LAB_200c79b0);
  Cmd_AddCommand(s_popmenu_20158604,&LAB_200c7510);
  Cmd_AddCommand(s_killmenu_201585f8,&LAB_200c75d0);
  Cmd_AddCommand(s_menuoff_201585f0,FUN_200c7380);
  Cmd_AddCommand(s_select_201585e8,&LAB_200c8050);
  Cmd_AddCommand(s_checkpass_201585dc,&LAB_200c8070);
  Cmd_AddCommand(s_changepass_201585d0,&LAB_200c8110);
  Cmd_AddCommand(s_freshgame_201585c4,&LAB_200c8240);
  Cmd_AddCommand(s_return_201585bc,&LAB_200c73d0);
  Cmd_AddCommand(s_refresh_201585b4,&LAB_200c8270);
  Cmd_AddCommand(s_hackteam_201585a8,&LAB_200c83a0);
  Cmd_AddCommand(s_userweapons_2015859c,&LAB_200c82a0);
  Cmd_AddCommand(s_useritems_20158590,&LAB_200c82c0);
  Cmd_AddCommand(s_userammo_20158584,&LAB_200c82e0);
  Cmd_AddCommand(s_usermisc_20158578,&LAB_200c8300);
  DAT_20406554 = 0;
  (*DAT_20390d88)(s_menu_small_click_wav_20158560);
  (*DAT_20390d88)(s_menu_small_invalid_wav_20158370);
  (*DAT_20390d88)(s_menu_small_select_wav_20158548);
  (*DAT_20390d88)(s_menu_small_hilite_wav_20158530);
  DAT_20406568 = 1;
  return;
}

