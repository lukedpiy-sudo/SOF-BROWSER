// rea decompile_all
// name: FUN_500ffb90
// address: 0x500ffb90
// body: available
// range: 0x500ffb90-0x500ffe94 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_500ffb90(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  int iVar6;
  undefined1 auStack_64 [100];
  
  (*DAT_5015c9f8)(s_environ_onfireburst_501464bc);
  (*DAT_5015c9f8)(s_environ_quickfireburst_50151550);
  (*DAT_5015c9f8)(s_spark_50155c50);
  (*DAT_5015c9f8)(s_environ_wallspark_50153cfc);
  (*DAT_5015c9f8)(&DAT_50146f5c);
  (*DAT_5015c9f8)(s_gotshot_50146f6c);
  (*DAT_5015c9f8)(s_exphit_50146f64);
  (*DAT_5015c9f8)(s_lighthit_50146f74);
  (*DAT_5015c9f4)(s_weapons_fx_tink_gen1_wav_50155c34);
  (*DAT_5015c9f4)(s_weapons_fx_tink_gen2_wav_50155c18);
  (*DAT_5015c9f4)(s_weapons_fx_tink_metal1_wav_50155bfc);
  (*DAT_5015c9f4)(s_weapons_fx_tink_metal2_wav_50155be0);
  (*DAT_5015c9f4)(s_weapons_fx_tink_metal3_wav_50155bc4);
  (*DAT_5015c9f4)(s_weapons_fx_tink_shot1_wav_50155ba8);
  (*DAT_5015c9f4)(s_weapons_fx_tink_shot2_wav_50155b8c);
  (*DAT_5015c9f4)(s_weapons_fx_tink_shot3_wav_50155b70);
  (*DAT_5015c9f4)(s_weapons_fx_tink_hvy1_wav_50155b54);
  (*DAT_5015c9f4)(s_weapons_fx_tink_hvy2_wav_50155b38);
  (*DAT_5015c9f4)(s_weapons_fx_tink_hvy3_wav_50155b1c);
  _DAT_5018c260 = (*DAT_5015c9f4)(s_weapons_fx_crack_crack1_wav_50155b00);
  _DAT_5018c264 = (*DAT_5015c9f4)(s_weapons_fx_crack_crack2_wav_50155ae4);
  _DAT_5018c268 = (*DAT_5015c9f4)(s_weapons_fx_crack_crack3_wav_50155ac8);
  (*DAT_5015c9f8)(s_weapons_world_airexplode_50133ddc);
  (*DAT_5015c9f8)(s_weapons_world_grenadeexplode_50155938);
  (*DAT_5015c9f4)(s_Weapons_gren_throw_wav_50133c3c);
  (*DAT_5015c9f8)(s_weapons_world_c4explode_50155a18);
  _DAT_5018c290 = (*DAT_5015c9f4)(s_Weapons_FX_FlyBy_FlyBy1_wav_50154ff4);
  _DAT_5018c294 = (*DAT_5015c9f4)(s_Weapons_FX_FlyBy_FlyBy2_wav_50154fd8);
  _DAT_5018c298 = (*DAT_5015c9f4)(s_Weapons_FX_FlyBy_FlyBy3_wav_50154fbc);
  _DAT_5018c29c = (*DAT_5015c9f4)(s_Weapons_FX_FlyBy_FlyBy4_wav_50154fa0);
  _DAT_5018c26c = (*DAT_5015c9f4)(s_Weapons_FX_Rics_ric1_wav_50155150);
  _DAT_5018c270 = (*DAT_5015c9f4)(s_Weapons_FX_Rics_ric2_wav_50155134);
  _DAT_5018c274 = (*DAT_5015c9f4)(s_Weapons_FX_Rics_ric3_wav_50155118);
  _DAT_5018c278 = (*DAT_5015c9f4)(s_Weapons_FX_Rics_ric4_wav_50155aac);
  _DAT_5018c27c = (*DAT_5015c9f4)(s_Weapons_FX_Rics_ric5_wav_50155a90);
  _DAT_5018c280 = (*DAT_5015c9f4)(s_Weapons_FX_Rics_ric6_wav_50155a74);
  puVar1 = FUN_500a5c10(&DAT_5015c79c,s_Items_Projectiles_501338d4,s_shell_5014c13c,1,(char *)0x0,
                        (char *)0x0,'\0');
  FUN_500a4de0(puVar1);
  puVar1 = FUN_500a5c10(&DAT_5015c79c,s_Items_Pick_ups_Armor_50143c54,s_armor_50143c4c,1,(char *)0x0
                        ,(char *)0x0,'\0');
  FUN_500a4de0(puVar1);
  (*DAT_5015c9f4)(s_dm_armorpu_wav_50144cb4);
  (*DAT_5015c9f4)(s_dm_healthpu_wav_50144c88);
  (*DAT_5015c9f4)(s_weapons_gpistol_cock_wav_5014b9f4);
  (*DAT_5015c9f4)(s_misc_talk_wav_50147a3c);
  (*DAT_5015c9f4)(s_misc_type_wav_50155a64);
  (*DAT_5015c9f4)(s_weapons_FlshGren_FlshExp_wav_50154f44);
  iVar2 = 1;
  do {
    pcVar5 = s_impact_gore_impact_d_wav_50133c90;
    puVar3 = auStack_64;
    uVar4 = 100;
    iVar6 = iVar2;
    FUN_500fe2b0();
    (*DAT_5015c9f4)(auStack_64,puVar3,uVar4,pcVar5,iVar6);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  iVar2 = 1;
  do {
    pcVar5 = s_impact_player_hit_d_wav_501544a4;
    puVar3 = auStack_64;
    uVar4 = 100;
    iVar6 = iVar2;
    FUN_500fe2b0();
    (*DAT_5015c9f4)(auStack_64,puVar3,uVar4,pcVar5,iVar6);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  (*DAT_5015c9f4)(s_impact_player_armor_wav_5015448c);
  (*DAT_5015c9f4)(s_player_jump_wav_50154650);
  (*DAT_5015c9f4)(s_misc_padd_warning_wav_5015420c);
  (*DAT_5015c9f4)(s_misc_padd_warning2_wav_50155a4c);
  (*DAT_5015c9f4)(s_misc_padd_max_wav_50154224);
  (*DAT_5015c9f4)(s_weapons_knife_throwloop_wav_50155a30);
  return;
}

