// rea decompile_all
// name: FUN_50067aa0
// address: 0x50067aa0
// body: available
// range: 0x50067aa0-0x50068812 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_50067aa0(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined1 local_15;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_501145e4;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 0x29) = local_15;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x31] = &PTR_FUN_50128824;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  local_4 = 1;
  uStack_3 = 0;
  *param_1 = &PTR_FUN_50128820;
  puVar1 = operator_new(0x15c);
  local_4 = 2;
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50065e20(puVar1);
  }
  local_4 = 1;
  param_1[1] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 3;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_knife_50144708,0,1,0x41f00000,1,0xffffffff,1,
                          s_Knife_50144718,0x30f,0x30f,0x326,1);
  }
  local_4 = 1;
  param_1[2] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 4;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_pistol_501446e8,0,3,0x41f00000,0x1e,0xffffffff,2,
                          s_9mm_Ammo_501446fc,0x310,0x310,0x327,1);
  }
  local_4 = 1;
  param_1[3] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 5;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_shotgun_501446c4,0,4,0x41f00000,5,0xffffffff,3,
                          s_12_gauge_shells_501446d8,0x311,0x311,0x328,1);
  }
  local_4 = 1;
  param_1[4] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 6;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_pistol2_501446a4,0,2,0x41f00000,5,0xffffffff,4,
                          s__44_Ammo_501446b8,0x312,0x312,0x329,1);
  }
  local_4 = 1;
  param_1[5] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 7;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_auto_50144688,0,5,0x41f00000,0x1e,0xffffffff,5,
                          s_5_56_Ammo_50144698,0x313,0x313,0x32a,1);
  }
  local_4 = 1;
  param_1[6] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 8;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_battery_5014466c,0,7,0x41f00000,0x1e,0xffffffff,6,
                          s_Battery_50144680,0x314,0x314,0x32b,0);
  }
  local_4 = 1;
  param_1[7] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 9;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_gas_50144648,0,8,0x41f00000,0x1e,0xffffffff,7,
                          s_Flamethrower_Gas_50144658,0x315,0x315,0x32c,0);
  }
  local_4 = 1;
  param_1[8] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 10;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_rocket_50144624,0,6,0x41f00000,5,0xffffffff,8,
                          s_NM_22_Rockets_50144638,0x316,0x316,0x32d,0);
  }
  local_4 = 1;
  param_1[9] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0xb;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_slug_5014460c,0,9,0x41f00000,10,0xffffffff,9,
                          s_Slugs_5014461c,0x325,0x325,0x32e,0);
  }
  local_4 = 1;
  param_1[10] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0xc;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_pistol_501445f8,0,3,0x41f00000,0x1e,0xffffffff,10,
                          s_9mm_Ammo_501446fc,0x310,0x310,0x327,1);
  }
  local_4 = 1;
  param_1[0xb] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0xd;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_shotgun_501445e0,0,4,0x41f00000,5,0xffffffff,0xb,
                          s_12_gauge_shells_501446d8,0x311,0x311,0x328,1);
  }
  local_4 = 1;
  param_1[0xc] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0xe;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_pistol2_501445c8,0,2,0x41f00000,5,0xffffffff,0xc,
                          s__44_Ammo_501446b8,0x312,0x312,0x329,1);
  }
  local_4 = 1;
  param_1[0xd] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0xf;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_auto_501445b4,0,5,0x41f00000,0x1e,0xffffffff,0xd,
                          s_5_56_Ammo_50144698,0x313,0x313,0x32a,1);
  }
  local_4 = 1;
  param_1[0xe] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x10;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_battery_5014459c,0,7,0x41f00000,0x1e,0xffffffff,0xe,
                          s_Battery_50144680,0x314,0x314,0x32b,0);
  }
  local_4 = 1;
  param_1[0xf] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x11;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_gas_50144588,0,8,0x41f00000,0x1e,0xffffffff,0xf,
                          s_Flamethrower_Gas_50144658,0x315,0x315,0x32c,0);
  }
  local_4 = 1;
  param_1[0x10] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x12;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_rocket_50144574,0,6,0x41f00000,5,0xffffffff,0x10,
                          s_NM_22_Rockets_50144638,0x316,0x316,0x32d,0);
  }
  local_4 = 1;
  param_1[0x11] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x13;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066d60(pvVar2,s_item_ammo_sp_slug_50144560,0,9,0x41f00000,10,0xffffffff,0x11,
                          s_Slugs_5014461c,0x325,0x325,0x32e,0);
  }
  local_4 = 1;
  param_1[0x12] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x14;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_pistol2_50144540,1,2,0x41f00000,0,0xffffffff,0x12,
                          s__44_Pistol_50144554,0x317,0x312,0x329,1);
  }
  local_4 = 1;
  param_1[0x13] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x15;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_pistol1_50144520,1,3,0x41f00000,0,0xffffffff,0x13,
                          s_9mm_Pistol_50144534,0x318,0x310,0x327,1);
  }
  local_4 = 1;
  param_1[0x14] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x16;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_machinepistol_501444f0,1,4,0x41f00000,0,0xffffffff,
                          0x14,s_9mm_Suppressed_SMG_5014450c,0x319,0x310,0x327,1);
  }
  local_4 = 1;
  param_1[0x15] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x17;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_assault_rifle_501444c8,1,5,0x41f00000,0,0xffffffff,
                          0x15,s_5_56_SMG_501444e4,0x31a,0x313,0x32a,1);
  }
  local_4 = 1;
  param_1[0x16] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x18;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_sniper_rifle_50144498,1,6,0x41f00000,0,0xffffffff,
                          0x16,s_5_56_Sniper_Rifle_501444b4,0x31b,0x313,0x32a,1);
  }
  local_4 = 1;
  param_1[0x17] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x19;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_autoshotgun_50144468,1,7,0x42700000,0,0xffffffff,0x17
                          ,s_Repeating_Slug_Thrower_50144480,0x31c,0x325,0x32e,0);
  }
  local_4 = 1;
  param_1[0x18] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x1a;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_shotgun_50144440,1,8,0x41f00000,0,0xffffffff,0x18,
                          s_12_Gauge_Shotgun_50144454,0x31d,0x311,0x328,1);
  }
  local_4 = 1;
  param_1[0x19] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x1b;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_machinegun_50144414,1,9,0x41f00000,0,0xffffffff,0x19,
                          s_Heavy_Machinegun_5014442c,0x31e,0x313,0x32a,1);
  }
  local_4 = 1;
  param_1[0x1a] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x1c;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_rocketlauncher_501443e0,1,10,0x42960000,0,0xffffffff,
                          0x1a,s_M_1943_Rocket_Launcher_501443fc,799,0x316,0x32d,0);
  }
  local_4 = 1;
  param_1[0x1b] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x1d;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_microwavepulse_501443b4,1,0xb,0x42b40000,0,0xffffffff
                          ,0x1b,s_Microwave_Pulse_501443d0,800,0x314,0x32b,0);
  }
  local_4 = 1;
  param_1[0x1c] = puVar1;
  pvVar2 = operator_new(0x164);
  local_4 = 0x1e;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066b00(pvVar2,s_item_weapon_flamethrower_50144388,1,0xc,0x42700000,0,0xffffffff,
                          0x1c,s_L_32_Flame_Gun_501443a4,0x321,0x315,0x32c,0);
  }
  local_4 = 1;
  param_1[0x1d] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x1f;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_equip_armor_5012f7cc,(int *)0x2,0,0x41f00000,0x32,
                          0xffffffff,0x1d,s_Armor_50144380,0x308,0x308,0x309);
  }
  local_4 = 1;
  param_1[0x1e] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x20;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_equip_flashpack_5014435c,(int *)0x3,1,0x41f00000,1,6,
                          0x1e,s_Flashpack_50144374,0x306,0x306,0x30a);
  }
  local_4 = 1;
  param_1[0x1f] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x21;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_equip_c4_50144348,(int *)0x3,2,0x41f00000,1,4,0x1f,
                          &DAT_50144358,0x322,0x322,0x30b);
  }
  local_4 = 1;
  param_1[0x20] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x22;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500668a0(pvVar2,s_item_equip_light_goggles_50144310,3,3,0x41f00000,100,100,0x20,
                          s_Light_Amplification_Goggles_5014432c,0x323,0x323,0x32f);
  }
  local_4 = 1;
  param_1[0x21] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x23;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_equip_claymore_501442f4,(int *)0x3,4,0x41f00000,1,
                          0xffffffff,0x21,&DAT_50144308,0x324,0x324,0x330);
  }
  local_4 = 1;
  param_1[0x22] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x24;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_50066630(pvVar2,s_item_equip_medkit_501442d8,3,5,0x41f00000,1,2,0x22,
                          s_MedKit_501442ec,0x333,0x333,0x334);
  }
  local_4 = 1;
  param_1[0x23] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x25;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_equip_grenade_501442bc,(int *)0x3,6,0x41f00000,1,6,
                          0x23,s_Grenade_501442d0,0x337,0x337,0x338);
  }
  local_4 = 1;
  param_1[0x24] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x26;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_ctf_flag_501442a4,(int *)0x3,7,0x41f00000,1,
                          0xffffffff,0x24,&DAT_501442b4,0x33a,0x33b,0x33a);
  }
  local_4 = 1;
  param_1[0x25] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x27;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_health_small_50144280,(int *)0x5,0,0x41f00000,0x19,
                          0xffffffff,0x25,s_Small_Health_50144294,0x30c,0x30c,0x30c);
  }
  local_4 = 1;
  param_1[0x26] = puVar1;
  pvVar2 = operator_new(0x15c);
  local_4 = 0x28;
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_health_large_5014425c,(int *)0x5,1,0x41f00000,0x32,
                          0xffffffff,0x26,s_Large_Health_50144270,0x30c,0x30c,0x30c);
  }
  local_4 = 1;
  param_1[0x27] = puVar1;
  pvVar2 = operator_new(0x15c);
  _local_4 = CONCAT31(uStack_3,0x29);
  if (pvVar2 == (void *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1 = FUN_500660b0(pvVar2,(int *)s_item_control_flag_50144238,(int *)0x3,8,0x41f00000,1,
                          0xffffffff,0x27,s_Control_Flag_5014424c,0,0,0);
  }
  param_1[0x28] = puVar1;
  param_1[0x2d] = 0;
  *(undefined1 *)(param_1 + 0x2e) = 0;
  ExceptionList = local_c;
  return param_1;
}

