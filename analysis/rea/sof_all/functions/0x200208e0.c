// rea decompile_all
// name: FUN_200208e0
// address: 0x200208e0
// body: available
// range: 0x200208e0-0x200209c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x200209c3 to 0x20020720 FUN_20020720 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200208e0(void)

{
  DAT_2024af68 = Cvar_Get(s_con_notifytime_201305fc,&DAT_2013060c,1,0);
  DAT_2024afb4 = Cvar_Get(s_con_buffersize_2013057c,s_32768_201305f4,1,0);
  DAT_2024afc0 = Cvar_Get(s_con_maxlines_2013058c,&DAT_201305f0,1,0);
  DAT_2024afb8 = Cvar_Get(s_console_20121250,&DAT_2011c4ac,8,0);
  Cmd_AddCommand(s_toggleconsole_201305e0,FUN_20020370);
  Cmd_AddCommand(s_togglechat_201305d4,&LAB_20020490);
  Cmd_AddCommand(s_messagemode_201305c8,&LAB_200206b0);
  Cmd_AddCommand(s_messagemode2_201305b8,&LAB_200206d0);
  Cmd_AddCommand(s_clear_201305b0,FUN_20020720);
  Cmd_AddCommand(s_condump_201305a8,&LAB_20020530);
  Cmd_AddCommand(s_conchars_2013059c,&LAB_20020300);
  DAT_2024af7c = 0;
  DAT_2024af74 = 0;
  FUN_20020720();
  return;
}

