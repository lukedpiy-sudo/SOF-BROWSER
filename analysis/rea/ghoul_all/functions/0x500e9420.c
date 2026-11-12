// rea decompile_all
// name: FUN_500e9420
// address: 0x500e9420
// body: available
// range: 0x500e9420-0x500e94de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500e9420(int *param_1)

{
  FUN_500e91c0(param_1,0x5014e680);
  param_1[0xae] = (int)&LAB_500e9390;
  (*DAT_5015c9f4)(s_Ambient_Models_Tank_tanklp_wav_50153d90);
  (*DAT_5015c9f8)(s_environ_helismoke_5012f9a4);
  (*DAT_5015c9f8)(s_weapons_othermz_tank_50153d78);
  (*DAT_5015c9f8)(s_weapons_world_rocketexplode_50152a98);
  (*DAT_5015c9f8)(s_weapons_othermz_machinegun_50143f0c);
  (*DAT_5015c9f8)(s_environ_kf_exhaust01_5012faac);
  (*DAT_5015c9f8)(s_environ_snowspray_5012fa6c);
  (*DAT_5015c9f8)(s_environ_machgun_smoke2_5012fa2c);
  (*DAT_5015c9f4)(s_impact_surfs_metal1_wav_50153d60);
  (*DAT_5015c9f4)(s_impact_surfs_metal2_wav_50153d48);
  (*DAT_5015c9f4)(s_impact_surfs_metal3_wav_50153d30);
  (*DAT_5015c9f8)(s_environ_wallspark_50153cfc);
  FUN_500a5c10(&DAT_5015c79c,s_effects_explosion_50153d10,s_explode80_50153d24,1,(char *)0x0,
               (char *)0x0,'\0');
  return;
}

