// rea decompile_all
// name: FUN_500b9ec0
// address: 0x500b9ec0
// body: available
// range: 0x500b9ec0-0x500ba196 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_500b9ec0(void)

{
  undefined4 uStack_e4;
  undefined4 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  undefined1 *puStack_d0;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  code *pcStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  undefined1 *puStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined1 *puStack_90;
  code *pcStack_8c;
  undefined1 *puStack_88;
  undefined1 *puStack_84;
  undefined1 *puStack_80;
  undefined1 *puStack_7c;
  code *pcStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  code *pcStack_34;
  code *pcStack_30;
  code *local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  if (DAT_5015d9b8 != (int *)0x0) {
    (**(code **)((int)DAT_5015d9b8 + 0xc))();
    (*DAT_5015cb1c)(0);
    DAT_5015d9b8 = (int *)0x0;
  }
  local_4c = DAT_5015cb4c;
  local_48 = DAT_5015cb50;
  local_44 = DAT_5015cb54;
  local_40 = DAT_5015ca14;
  local_3c = DAT_5015ca18;
  local_38 = DAT_5015ca1c;
  local_2c = DAT_5015ca24;
  uStack_28 = DAT_5015cb64;
  uStack_24 = DAT_5015cb68;
  uStack_20 = DAT_5015cb24;
  uStack_1c = DAT_5015d9b0;
  uStack_14 = DAT_5015cae8;
  uStack_10 = DAT_5015caec;
  uStack_c = DAT_5015caf0;
  uStack_8 = DAT_5015caf4;
  uStack_4 = DAT_5015caf8;
  uStack_e4 = DAT_5015cae0;
  uStack_c0 = DAT_5015c9f8;
  uStack_9c = DAT_5015cb5c;
  uStack_98 = DAT_5015cab0;
  uStack_94 = DAT_5015cabc;
  uStack_bc = DAT_5015c9f4;
  uStack_b8 = DAT_5015ca48;
  uStack_a0 = DAT_5015cb78;
  uStack_74 = DAT_5015ca90;
  uStack_70 = DAT_5015ca94;
  uStack_6c = DAT_5015ca98;
  pcStack_34 = FUN_500adb20;
  pcStack_30 = FUN_500fe2b0;
  puStack_e0 = &DAT_5015ccdc;
  puStack_dc = &LAB_50106640;
  puStack_d8 = &LAB_50106890;
  puStack_d4 = &LAB_500eeba0;
  puStack_cc = &LAB_500eec70;
  puStack_d0 = &LAB_50106ae0;
  puStack_b4 = &LAB_500ffb60;
  puStack_b0 = &LAB_500f6360;
  puStack_ac = &LAB_500f6370;
  puStack_a8 = &LAB_500f6390;
  puStack_a4 = &LAB_500f63a0;
  puStack_c8 = &LAB_50106b00;
  puStack_90 = &LAB_500ff2c0;
  pcStack_8c = FUN_500ff2d0;
  puStack_88 = &LAB_500ff5c0;
  puStack_84 = &LAB_500ffa20;
  puStack_80 = &LAB_500fece0;
  puStack_7c = &LAB_500fedf0;
  pcStack_78 = FUN_500fed70;
  uStack_68 = DAT_5015ca9c;
  uStack_64 = DAT_5015caa0;
  uStack_60 = DAT_5015cb04;
  uStack_58 = DAT_5015cb0c;
  uStack_54 = DAT_5015cb44;
  uStack_5c = DAT_5015cb08;
  uStack_50 = DAT_5015cb48;
  pcStack_c4 = FUN_50106b20;
  DAT_5015d9b8 = (int *)(*DAT_5015cb18)(&local_4c,0,&uStack_e4,0);
  if (DAT_5015d9b8 == (int *)0x0) {
    (*DAT_5015cb10)(s_Game_failed_to_load_player_DLL_5014d594);
  }
  if (*DAT_5015d9b8 != 1) {
    (*DAT_5015cb10)(s_player_is_version__i__not__i_5014d574,*DAT_5015d9b8,1);
  }
  (*(code *)DAT_5015d9b8[2])();
  (*DAT_5015ca24)(s______InitPlayer_Complete______5014d554);
  return DAT_5015d9b8[1];
}

