// rea decompile_all
// name: FUN_200c85a0
// address: 0x200c85a0
// body: available
// range: 0x200c85a0-0x200c8681 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200c85a0(void)

{
  int iVar1;
  
  iVar1 = DAT_20406554;
  if (DAT_20406554 != 0) {
    FUN_200cb840();
    FUN_200f9f75(iVar1);
    DAT_20406554 = 0;
  }
  FUN_200216c0(0);
  FUN_20057f40(4);
  FUN_20012810();
  Cvar_SetValue(s_menu_animated_20158360,0);
  if (DAT_20406568 != '\0') {
    Cmd_RemoveCommand(&DAT_20158628);
    Cmd_RemoveCommand(s_popmenu_20158604);
    Cmd_RemoveCommand(s_menuoff_201585f0);
    Cmd_RemoveCommand(s_select_201585e8);
    Cmd_RemoveCommand(s_checkpass_201585dc);
    Cmd_RemoveCommand(s_changepass_201585d0);
    Cmd_RemoveCommand(s_freshgame_201585c4);
    Cmd_RemoveCommand(s_return_201585bc);
    Cmd_RemoveCommand(s_refresh_201585b4);
    Cmd_RemoveCommand(s_userweapons_2015859c);
    Cmd_RemoveCommand(s_useritems_20158590);
    Cmd_RemoveCommand(s_userammo_20158584);
    Cmd_RemoveCommand(s_usermisc_20158578);
    DAT_20406568 = '\0';
  }
  return;
}

