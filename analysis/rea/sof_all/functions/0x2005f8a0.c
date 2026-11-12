// rea decompile_all
// name: FUN_2005f8a0
// address: 0x2005f8a0
// body: available
// range: 0x2005f8a0-0x2005fd72 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2005f8a0(void)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_2005ad50();
  Cvar_Get(s_skill_20139e70,&DAT_2011e42c,0x14,0);
  Cvar_Get(s_fraglimit_20139e64,&DAT_2011c4ac,5,0);
  Cvar_Get(s_timelimit_20139e58,&DAT_2011c4ac,5,0);
  Cvar_Get(s_cheats_20139e50,&DAT_2011c4ac,4,0);
  uVar1 = FUN_20055450(&DAT_2011ee58,0x21,0xc,0);
  Cvar_Get(s_protocol_20139e44,uVar1);
  Cvar_Get(s_sv_suicidepenalty_20139e30,&DAT_2011e42c,5,0);
  Cvar_Get(s_sv_violence_201373cc,&DAT_2011c4ac,4,0);
  Cvar_Get(s_g_movescale_20139e24,&DAT_2011d31c,5,0);
  Cvar_Get(s_ai_maxcorpses_20139e14,&DAT_2011e60c,1,0);
  Cvar_Get(s_ai_corpselife_20139e04,&DAT_2011e60c,1,0);
  Cvar_Get(s_sv_quicksave_index_20139078,&DAT_2011c4ac,1,0);
  Cvar_Get(s_ctf_loops_20139df8,&DAT_2013060c,5,0);
  Cvar_Get(s_control_limit_20139de4,&DAT_20139df4,5,0);
  Cvar_Get(s_control_bonus_20139dd4,&DAT_2011d31c,5,0);
  Cvar_Get(s_team_red_blue_2011e350,&DAT_2011c4ac,1,0);
  Cvar_Get(s_ctf_control_delay_time_20139db8,&DAT_20139dd0,1,0);
  DAT_203fac60 = Cvar_Get(s_deathmatch_2011d664,&DAT_2011c4ac,0x10,0);
  uVar1 = FUN_20055450(&DAT_2011ee58,0,0x15,0);
  DAT_203fecb0 = Cvar_Get(s_dmflags_20138e8c,uVar1);
  DAT_203fecd0 = Cvar_Get(s_maxclients_2011d768,&DAT_2011d31c,0x15,0);
  _DAT_203fac68 = Cvar_Get(s_sv_maplist_201397e0,&DAT_2015ee44,0,0);
  DAT_203fec7c = Cvar_Get(s_sv_maplistfile_20139da0,s_ravdm_20139db0,1,0);
  DAT_203fec84 = Cvar_Get(s_welcome_mess_20139d90,s_Welcome_to_Soldier_of_Fortune_Mu_20127038,1,0);
  DAT_203fecb8 = Cvar_Get(&DAT_2011ee50,&DAT_2015ee44,0x14,0);
  DAT_203fecb4 = Cvar_Get(s_hostname_20139d7c,s_noname_20139d88,5,0);
  DAT_203feca4 = Cvar_Get(s_public_20139d74,&DAT_2011c4ac,0,0);
  _DAT_203fecbc = Cvar_Get(s_weaponarena_20139d68,&DAT_2011c4ac,0x10,0);
  DAT_203fec78 = Cvar_Get(s_filterban_20139d5c,&DAT_2011d31c,0,0);
  DAT_203fec80 = Cvar_Get(s_rcon_password_2011e46c,&DAT_2015ee44,0,0);
  DAT_203fec88 = Cvar_Get(s_timeout_20139d50,&DAT_20139d58,0,0);
  DAT_203fac54 = Cvar_Get(s_zombietime_20139d44,&DAT_2011e42c,0,0);
  DAT_203feccc = Cvar_Get(s_paused_2011d4b0,&DAT_2011c4ac,0,0);
  DAT_203fac5c = Cvar_Get(s_sv_max_ghoul_mp_20139d34,&DAT_2011e5e0,1,0);
  DAT_203fec8c = Cvar_Get(s_sv_reconnect_limit_20139d20,&DAT_2013060c,1,0);
  DAT_203fec70 = Cvar_Get(s_sv_jumpcinematic_20139d0c,&DAT_2011c4ac,1,0);
  _DAT_203fac6c = Cvar_Get(s_bot_num_20139d04,&DAT_2011c4ac,0,0);
  DAT_203fec90 = Cvar_Get(s_sv_flash_big_ents_20139cf0,&DAT_2011c4ac,0,0);
  DAT_203fac58 = Cvar_Get(s_sv_no_big_ents_20139ce0,&DAT_2011c4ac,0,0);
  DAT_203fecac = Cvar_Get(s_sv_enforcetime_20139cd0,&DAT_2011c4ac,0,0);
  DAT_203fec9c = Cvar_Get(s_sv_testsave_20139cc4,&DAT_2011c4ac,0,0);
  _DAT_203fac50 = Cvar_Get(s_sv_restartlevel_20139cb4,&DAT_2011c4ac,0,0);
  DAT_203fec98 = Cvar_Get(s_timedemo_2011d4fc,&DAT_2011c4ac,0,0);
  DAT_203fecc8 = Cvar_Get(s_showclamp_2011e4d8,&DAT_2011c4ac,0,0);
  iVar2 = 0;
  do {
    uVar1 = FUN_20055450(s_bot_name_i_20139428,iVar2,s________20139448,0,0);
    Cvar_Get(uVar1);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x20);
  DAT_203feca8 = Cvar_Get(s_allow_download_2011e340,&DAT_2011c4ac,1,0);
  DAT_203fec74 = Cvar_Get(s_allow_download_maps_2011e32c,&DAT_2011d31c,1,0);
  _DAT_203fecc4 = Cvar_Get(s_allow_download_models_2011e314,&DAT_2011d31c,1,0);
  _DAT_203fecc0 = Cvar_Get(s_allow_download_players_2011e2fc,&DAT_2011d31c,1,0);
  DAT_203fac64 = Cvar_Get(s_allow_download_sounds_2011e2e4,&DAT_2011d31c,1,0);
  DAT_203feca0 = Cvar_Get(s_allow_download_stringpackage_2011e2c4,&DAT_2011d31c,1,0);
  FUN_2001e700(&DAT_20367ebc,&DAT_20367ed0,DAT_20136a0c);
  iVar2 = FUN_20057ca0(s_str_server_20139ca8,8);
  if (iVar2 == 0) {
    Com_Error(0,s_SV_Init__couldn_t_register_serve_20139c74);
  }
  return;
}

