// rea decompile_all
// name: FUN_20067350
// address: 0x20067350
// body: available
// range: 0x20067350-0x20067457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x20067453 to 0x200670c0 FUN_200670c0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20067350(void)

{
  DAT_20403550 = Cvar_Get(s_vid_ref_2013ad28,&DAT_2013ad30,1,0);
  DAT_2040364c = Cvar_Get(s_vid_xpos_2013ac40,&DAT_2013060c,1,0);
  DAT_20403650 = Cvar_Get(s_vid_ypos_2013ac34,&DAT_2013ade8,1,0);
  DAT_20403658 = Cvar_Get(s_vid_fullscreen_2013ac24,&DAT_2011d31c,1,0);
  DAT_2040355c = Cvar_Get(s_win_noalttab_2013a878,&DAT_2011d31c,1,0);
  DAT_20403568 = Cvar_Get(s_win_noaltenter_2013add8,&DAT_2011d31c,1,0);
  _DAT_20403554 = Cvar_Get(s_win_broken_2013adcc,&DAT_2011d31c,1,0);
  _DAT_20403654 = Cvar_Get(s_r_force_sgi_software_2013adb4,&DAT_2011c4ac,0x28,FUN_20067320);
  Cmd_AddCommand(s_vid_restart_2013ada8,&LAB_20066d50);
  Cmd_AddCommand(s_vid_front_2013ad9c,&LAB_20066d60);
  Cmd_AddCommand(s_vid_modes_2013ad90,&LAB_20066dc0);
  FUN_20107e3e(s_FX_GLIDE_NO_SPLASH_0_2013ad78);
  FUN_200670c0();
  return;
}

