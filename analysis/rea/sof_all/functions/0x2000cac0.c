// rea decompile_all
// name: FUN_2000cac0
// address: 0x2000cac0
// body: available
// range: 0x2000cac0-0x2000d5ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_2000cac0(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined1 local_80 [128];
  
  DAT_201c1f00 = 1;
  DAT_201c1f0c = FUN_20055930();
  _DAT_201e8fb8 = 0;
  _DAT_201e8fc0 = 0;
  FUN_20005820();
  DAT_2022506c = Cvar_Get(s_sc_framerate_2011e678,&DAT_2011e688,0,0);
  DAT_20225060 = Cvar_Get(s_cl_blend_2011e66c,&DAT_2011d31c,0,0);
  DAT_202250a4 = Cvar_Get(s_cl_lights_2011e660,&DAT_2011d31c,0,0);
  DAT_2015eef0 = Cvar_Get(s_cl_quads_2011e654,&DAT_2011d31c,0,0);
  DAT_20225078 = Cvar_Get(s_cl_entities_2011e648,&DAT_2011d31c,0,0);
  DAT_2015ee60 = Cvar_Get(s_cl_gun_2011e640,&DAT_2011d31c,0,0);
  DAT_201e755c = Cvar_Get(s_cl_footsteps_2011e630,&DAT_2011d31c,0,0);
  DAT_20225098 = Cvar_Get(s_cl_predict_2011e624,&DAT_2011d31c,0,0);
  DAT_2022508c = Cvar_Get(s_cl_predict_weapon_2011e610,&DAT_2011d31c,0,0);
  _DAT_20225914 = *(undefined4 *)(DAT_2022508c + 0x18);
  DAT_2015ee54 = Cvar_Get(s_cl_minfps_2011e600,&DAT_2011e60c,0,0);
  DAT_20225050 = Cvar_Get(s_cl_maxfps_2011d700,&DAT_2011e688,0,0);
  DAT_2015ee58 = Cvar_Get(s_cl_showfps_2011e5f4,&DAT_2011c4ac,0,0);
  DAT_2015ee64 = Cvar_Get(s_cl_showlocation_2011e5e4,&DAT_2011c4ac,0,0);
  DAT_2015ee08 = Cvar_Get(s_cl_upspeed_2011e5d4,&DAT_2011e5e0,0,0);
  DAT_2015eca4 = Cvar_Get(s_cl_forwardspeed_2011e5c4,&DAT_2011e5e0,0,0);
  DAT_2015edd0 = Cvar_Get(s_cl_sidespeed_2011e5b0,&DAT_2011e5c0,0,0);
  DAT_2015ecc4 = Cvar_Get(s_cl_yawspeed_2011e5a0,&DAT_2011e5ac,0,0);
  DAT_2015ee0c = Cvar_Get(s_cl_pitchspeed_2011e58c,&DAT_2011e59c,0,0);
  DAT_2015ee10 = Cvar_Get(s_cl_anglespeedkey_2011e574,&DAT_2011e588,0,0);
  DAT_201e7544 = Cvar_Get(s_cl_obit_filter_2011e564,&DAT_2011c4ac,0,0);
  DAT_201e7534 = Cvar_Get(s_cl_ffmult_2011e554,&DAT_2011e560,1,0);
  DAT_2015eca0 = Cvar_Get(s_cl_run_2011e54c,&DAT_2011c4ac,1,0);
  DAT_201ca524 = Cvar_Get(s_freelook_2011e540,&DAT_2011c4ac,1,0);
  DAT_201e7554 = Cvar_Get(s_lookspring_2011e534,&DAT_2011c4ac,1,0);
  DAT_201e7570 = Cvar_Get(s_lookstrafe_2011e528,&DAT_2011c4ac,1,0);
  DAT_201c1ef8 = Cvar_Get(s_m_pitch_2011e518,s_0_022_2011e520,1,0);
  DAT_20225064 = Cvar_Get(s_m_yaw_2011e510,s_0_022_2011e520,0,0);
  DAT_20225070 = Cvar_Get(s_m_forward_2011e504,&DAT_2011d31c,0,0);
  DAT_20225048 = Cvar_Get(s_m_side_2011e4fc,&DAT_2011d31c,0,0);
  DAT_201e7530 = Cvar_Get(s_cl_shownet_2011e4f0,&DAT_2011c4ac,0,0);
  DAT_201e7550 = Cvar_Get(s_cl_showmiss_2011e4e4,&DAT_2011c4ac,0,0);
  DAT_20225058 = Cvar_Get(s_showclamp_2011e4d8,&DAT_2011c4ac,0,0);
  DAT_201e7548 = Cvar_Get(s_cl_timeout_2011e4c8,&DAT_2011e4d4,0,0);
  DAT_202250a8 = Cvar_Get(s_paused_2011d4b0,&DAT_2011c4ac,0,0);
  DAT_201e7560 = Cvar_Get(s_timedemo_2011d4fc,&DAT_2011c4ac,0,0);
  DAT_201e757c = Cvar_Get(s_cl_subtitles_2011e4b8,&DAT_2011d31c,1,0);
  DAT_20225068 = Cvar_Get(s_cl_download_percent_2011e4a4,&DAT_2011c4ac,0,0);
  _DAT_2015ee48 = Cvar_Get(s_cl_download_filename_2011e48c,&DAT_2015ee44,0,0);
  DAT_2015ee5c = Cvar_Get(s_cl_downloading_2011e47c,&DAT_2015ee44,0,0);
  DAT_2022504c = Cvar_Get(s_rcon_password_2011e46c,&DAT_2015ee44,0,0);
  DAT_2015ee68 = Cvar_Get(s_rcon_address_2011e45c,&DAT_2015ee44,0,0);
  DAT_2015ee4c = Cvar_Get(s_r_lightlevel_2011e44c,&DAT_2011c4ac,0,0);
  DAT_20225090 = Cvar_Get(s_shownames_2011e440,&DAT_2011c4ac,1,0);
  DAT_202250ac = Cvar_Get(s_ghl_specular_2011e430,&DAT_2011d31c,1,0);
  DAT_20225088 = Cvar_Get(s_ghl_light_method_2011e418,&DAT_2011e42c,1,0);
  DAT_201e756c = Cvar_Get(s_freezeworld_2011d4f0,&DAT_2011c4ac,0,0);
  DAT_20225094 = Cvar_Get(s_cl_speeds_2011e40c,&DAT_2011c4ac,0,0);
  DAT_2015ee50 = Cvar_Get(s_cl_pitchdebug_2011e3fc,&DAT_2011c4ac,0,0);
  DAT_20225084 = Cvar_Get(s_cl_nolangames_2011e3ec,&DAT_2011c4ac,1,0);
  iVar2 = 0;
  do {
    Com_sprintf(local_80,0x80,s_adr_i_2011da08,iVar2);
    Cvar_Get(local_80,&DAT_2015ee44,1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 0x14);
  _DAT_201e754c = Cvar_Get(s_password_2011e3e0,&DAT_2015ee44,2,0);
  _DAT_201e7580 = Cvar_Get(s_spectator_password_2011e3cc,&DAT_2015ee44,2,0);
  DAT_201e7574 = Cvar_Get(s_spectator_2011e3c0,&DAT_2011c4ac,2,0);
  _DAT_201e7558 = Cvar_Get(&DAT_2011e3b0,s_unnamed_2011e3b8,3,0);
  DAT_201e7564 = Cvar_Get(s_teamname_2011e39c,s_mullins_2011e3a8,3,0);
  DAT_2022507c = Cvar_Get(&DAT_2011e394,s_mullins_2011e3a8,3,0);
  _DAT_2022505c = Cvar_Get(&DAT_2011d70c,&DAT_2011e38c,3,0);
  DAT_201e7568 = Cvar_Get(&DAT_2011e388,&DAT_2011d31c,3,0);
  _DAT_201ca528 = Cvar_Get(s_bestweap_2011e374,&DAT_2011e380,3,0);
  _DAT_201e753c = Cvar_Get(&DAT_2011e36c,&DAT_2011e370,3,0);
  uVar1 = FUN_20021760(s_cl_predict_weapon_2011e610,2,0);
  _DAT_201e7538 = Cvar_Get(s_predicting_2011e360,uVar1);
  _DAT_201e7540 = Cvar_Get(s_team_red_blue_2011e350,&DAT_2011c4ac,3,0);
  DAT_203feca8 = Cvar_Get(s_allow_download_2011e340,&DAT_2011d31c,1,0);
  DAT_203fec74 = Cvar_Get(s_allow_download_maps_2011e32c,&DAT_2011d31c,1,0);
  _DAT_203fecc4 = Cvar_Get(s_allow_download_models_2011e314,&DAT_2011d31c,3,0);
  _DAT_203fecc0 = Cvar_Get(s_allow_download_players_2011e2fc,&DAT_2011d31c,1,0);
  DAT_203fac64 = Cvar_Get(s_allow_download_sounds_2011e2e4,&DAT_2011d31c,1,0);
  DAT_203feca0 = Cvar_Get(s_allow_download_stringpackage_2011e2c4,&DAT_2011d31c,1,0);
  DAT_20225074 = Cvar_Get(s_sv_altpmodlistfile_2011e2a8,s_custom_2011e2bc,0x11,0);
  Cmd_AddCommand(&DAT_2011dd70,&LAB_2000b1e0);
  Cmd_AddCommand(s_pause_2011c530,&LAB_2000b230);
  Cmd_AddCommand(s_pingservers_2011e29c,&LAB_2000bd50);
  Cmd_AddCommand(s_serverstatus_2011e28c,&LAB_2000b5a0);
  Cmd_AddCommand(&DAT_2011dd30,&LAB_2000b500);
  Cmd_AddCommand(s_skins_2011e284,&LAB_2000bfb0);
  Cmd_AddCommand(s_userinfo_2011e278,&LAB_2000c730);
  Cmd_AddCommand(s_snd_restart_2011e26c,&LAB_2000c750);
  Cmd_AddCommand(s_changing_2011e260,&LAB_2000bc20);
  Cmd_AddCommand(s_record_2011e258,&LAB_2000ac70);
  Cmd_AddCommand(&DAT_2011c538,&LAB_2000ac00);
  Cmd_AddCommand(s_maxfpsfromrate_2011e248,&LAB_2000afd0);
  Cmd_AddCommand(&DAT_2011e240,&LAB_2000b2b0);
  Cmd_AddCommand(&DAT_2011e238,&LAB_2000b2b0);
  Cmd_AddCommand(s_connect_2011e230,&LAB_2000b700);
  Cmd_AddCommand(s_reconnect_2011e224,&LAB_2000bcc0);
  Cmd_AddCommand(&DAT_2011e21c,&LAB_2000b7f0);
  Cmd_AddCommand(s_setenv_2011e214,&LAB_2000b0c0);
  Cmd_AddCommand(s_precache_2011e208,&LAB_200112f0);
  Cmd_AddCommand(s_reset_predn_2011e1fc,FUN_2000c770);
  Cmd_AddCommand(s_cl_touch_2011e1f0,&LAB_2000c7a0);
  Cmd_AddCommand(s_saveconfig_2011e1e4,&LAB_2000c7b0);
  Cmd_AddCommand(s_savekeys_2011e1d8,&LAB_2000c860);
  Cmd_AddCommand(s_addfave_2011e1d0,&LAB_2000c910);
  Cmd_AddCommand(s_remfave_2011e1c8,&LAB_2000ca00);
  puVar3 = &DAT_2015ee70;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  Cmd_AddCommand(s_ignore_2011e1c0,&LAB_2000ab60);
  Cmd_AddCommand(s_unignore_2011e1b4,&LAB_2000ab90);
  Cmd_AddCommand(s_listignore_2011e1a8,&LAB_2000aaf0);
  Cmd_AddCommand(s_players_2011e1a0,0);
  Cmd_AddCommand(&DAT_2011e19c,0);
  Cmd_AddCommand(s_say_team_2011e190,0);
  Cmd_AddCommand(s_score_2011e188,0);
  Cmd_AddCommand(&DAT_2011e180,0);
  Cmd_AddCommand(s_loadpoint_2011e174,0);
  Cmd_AddCommand(s_destroyents_2011e168,0);
  Cmd_AddCommand(s_playlevel_2011e15c,0);
  Cmd_AddCommand(s_elbow_2011e154,0);
  Cmd_AddCommand(s_bigelbow_2011e148,0);
  Cmd_AddCommand(s_defaultweapons_2011e138,0);
  Cmd_AddCommand(s_updateinvfinal_2011e128,0);
  Cmd_AddCommand(s_heretic_2011e120,0);
  Cmd_AddCommand(s_ninja_2011e118,0);
  Cmd_AddCommand(s_phantom_2011e110,0);
  Cmd_AddCommand(&DAT_2011e108,0);
  Cmd_AddCommand(s_killallmonsters_2011e0f8,0);
  Cmd_AddCommand(s_putaway_2011e0f0,0);
  Cmd_AddCommand(&DAT_2011e0e8,0);
  Cmd_AddCommand(s_gimme_2011e0e0,0);
  Cmd_AddCommand(s_teamview_2011e0d4,0);
  Cmd_AddCommand(s_playerlist_2011e0c8,0);
  Cmd_AddCommand(s_entlist_2011e0c0,0);
  Cmd_AddCommand(s_givesnipertutorial_2011e0ac,0);
  Cmd_AddCommand(s_givemoretutorial_2011e098,0);
  Cmd_AddCommand(s_turnoffmissionmsg_2011e084,0);
  Cmd_AddCommand(s_turnonmissionmsg_2011e070,0);
  Cmd_AddCommand(s_listpickups_2011e064,0);
  Cmd_AddCommand(&DAT_2011e060,0);
  Cmd_AddCommand(s_reload_2011e058,0);
  Cmd_AddCommand(s_weapprev_2011e04c,0);
  Cmd_AddCommand(s_weapnext_2011e040,0);
  Cmd_AddCommand(s_weaponselect_2011e030,0);
  Cmd_AddCommand(s_weapondrop_2011e024,0);
  Cmd_AddCommand(s_weaponlose_2011e018,0);
  Cmd_AddCommand(s_weaponbestsafe_2011e008,0);
  Cmd_AddCommand(s_weaponbestunsafe_2011dff4,0);
  Cmd_AddCommand(s_itemuse_2011dfec,0);
  Cmd_AddCommand(s_itemnext_2011dfe0,0);
  Cmd_AddCommand(s_itemprev_2011dfd4,0);
  Cmd_AddCommand(s_itemdrop_2011dfc8,0);
  Cmd_AddCommand(s_sv_precache_2011dfbc,0);
  Cmd_AddCommand(&DAT_2011c4f8,0);
  return;
}

