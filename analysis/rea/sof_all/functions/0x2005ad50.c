// rea decompile_all
// name: FUN_2005ad50
// address: 0x2005ad50
// body: available
// range: 0x2005ad50-0x2005af66 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005ad50(void)

{
  Cmd_AddCommand(s_adddownload_201395c0,&LAB_2005ab30);
  Cmd_AddCommand(s_heartbeat_201395b4,&LAB_2005a740);
  Cmd_AddCommand(&DAT_201395ac,&LAB_2005a3f0);
  Cmd_AddCommand(s_status_201395a4,&LAB_2005a470);
  Cmd_AddCommand(s_serverinfo_20139598,&LAB_2005a750);
  Cmd_AddCommand(s_dumpuser_2013958c,&LAB_2005a770);
  Cmd_AddCommand(&DAT_20139588,&LAB_200614a0);
  Cmd_AddCommand(s_newsave_20139580,&LAB_20061690);
  Cmd_AddCommand(s_savesleft_20139574,&LAB_20061740);
  Cmd_AddCommand(s_gserver_2013956c,&LAB_2005aad0);
  Cmd_AddCommand(s_demomap_20139564,&LAB_20059f20);
  Cmd_AddCommand(s_gamemap_2013955c,&LAB_200613d0);
  if (*(float *)(DAT_20249618 + 0x18) != 0.0) {
    Cmd_AddCommand(&DAT_2011e19c,&LAB_2005a660);
  }
  Cmd_AddCommand(s_list_dmflags_2013954c,FUN_200599c0);
  Cmd_AddCommand(s_set_dmflags_20139540,&LAB_20059b70);
  Cmd_AddCommand(s_unset_dmflags_20139530,&LAB_20059ca0);
  Cmd_AddCommand(s_serverrecord_20139520,&LAB_2005a7c0);
  Cmd_AddCommand(s_serverstop_20139514,&LAB_2005a950);
  Cmd_AddCommand(&DAT_2013950c,&LAB_2005a130);
  Cmd_AddCommand(s_quicksave_20139500,&LAB_2005a2a0);
  Cmd_AddCommand(s_quickload_201394f4,&LAB_2005a2f0);
  Cmd_AddCommand(&DAT_201394ec,&LAB_20059fe0);
  Cmd_AddCommand(&DAT_201394e4,&LAB_2005a380);
  Cmd_AddCommand(s_killserver_201394d8,&LAB_2005a990);
  Cmd_AddCommand(s_getgamestats_201394c8,&LAB_2005a9b0);
  Cmd_AddCommand(s_updateinven_201394bc,&LAB_2005aa90);
  Cmd_AddCommand(s_filter_add_201394b0,&LAB_20059590);
  Cmd_AddCommand(s_filter_remove_201394a0,&LAB_20059780);
  Cmd_AddCommand(s_filter_list_20139494,&LAB_20059840);
  Cmd_AddCommand(s_filter_write_20139484,&LAB_200598b0);
  Cmd_AddCommand(s_bot_add_2013947c,FUN_2005ab70);
  Cmd_AddCommand(s_bot_rem_20139474,&LAB_2005ac30);
  Cmd_AddCommand(s_hackkillbots_20139464,&LAB_2005ad00);
  return;
}

