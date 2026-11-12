// rea decompile_all
// name: FUN_2005cdb0
// address: 0x2005cdb0
// body: available
// range: 0x2005cdb0-0x2005d1fa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2005cdb0(void)

{
  code *pcStack_18c;
  undefined1 *puStack_188;
  undefined1 *puStack_184;
  undefined1 *puStack_180;
  undefined1 *puStack_17c;
  code *pcStack_178;
  undefined1 *puStack_174;
  undefined1 *puStack_170;
  code *pcStack_16c;
  code *pcStack_168;
  code *pcStack_164;
  code *pcStack_160;
  code *local_15c;
  undefined1 *local_158;
  undefined1 *local_154;
  undefined1 *local_150;
  undefined1 *local_14c;
  undefined1 *local_148;
  undefined1 *local_144;
  undefined1 *local_140;
  undefined1 *local_13c;
  undefined1 *local_138;
  undefined1 *puStack_134;
  code *pcStack_130;
  undefined1 *puStack_128;
  code *pcStack_124;
  code *pcStack_120;
  undefined1 *local_11c;
  code *local_118;
  code *local_114;
  undefined1 *puStack_110;
  undefined1 *puStack_10c;
  undefined1 *puStack_108;
  undefined1 *puStack_104;
  undefined1 *puStack_100;
  undefined1 *puStack_fc;
  undefined1 *puStack_f8;
  undefined1 *puStack_f4;
  undefined1 *puStack_f0;
  code *pcStack_ec;
  code *pcStack_e8;
  code *pcStack_e4;
  undefined1 *puStack_e0;
  undefined1 *puStack_dc;
  undefined1 *puStack_d8;
  undefined1 *puStack_d4;
  code *pcStack_d0;
  undefined1 *puStack_cc;
  undefined1 *puStack_c8;
  code *pcStack_c4;
  code *pcStack_c0;
  undefined1 *puStack_bc;
  undefined1 *puStack_b8;
  undefined1 *puStack_b4;
  undefined1 *puStack_b0;
  code *pcStack_ac;
  undefined1 *puStack_a8;
  undefined1 *puStack_a4;
  code *pcStack_a0;
  code *pcStack_9c;
  code *pcStack_98;
  undefined1 *puStack_94;
  undefined1 *puStack_90;
  undefined1 *puStack_8c;
  code *pcStack_88;
  code *pcStack_84;
  undefined4 *puStack_80;
  undefined1 *puStack_7c;
  code *pcStack_78;
  code *pcStack_74;
  code *pcStack_70;
  undefined1 *local_6c;
  code *pcStack_68;
  code *pcStack_64;
  code *pcStack_60;
  code *pcStack_5c;
  code *pcStack_58;
  code *local_54;
  undefined1 *local_50;
  undefined1 *local_4c;
  code *pcStack_48;
  code *pcStack_44;
  code *pcStack_40;
  undefined1 *puStack_3c;
  code *pcStack_38;
  code *pcStack_34;
  code *pcStack_30;
  code *pcStack_2c;
  code *pcStack_28;
  code *pcStack_24;
  code *pcStack_20;
  code *pcStack_1c;
  code *pcStack_18;
  code *pcStack_14;
  code *pcStack_10;
  code *pcStack_c;
  code *pcStack_8;
  code *pcStack_4;
  
  if (DAT_20396dd8 != (int *)0x0) {
    (**(code **)((int)DAT_20396dd8 + 8))();
    FUN_20065ef0();
    DAT_20396dd8 = (int *)0x0;
  }
  local_11c = &LAB_2005cd90;
  local_118 = FUN_20061a80;
  local_114 = FUN_2005c210;
  local_15c = FUN_200618d0;
  local_14c = &LAB_2005c5a0;
  local_158 = &LAB_2005c2a0;
  local_154 = &LAB_2005c2e0;
  local_150 = &LAB_2005c3b0;
  local_148 = &LAB_2005c490;
  local_144 = &LAB_2005c670;
  local_13c = &LAB_2005c790;
  local_140 = &LAB_20061a00;
  local_6c = &LAB_2005c930;
  local_138 = &LAB_2005c870;
  local_54 = FUN_20063e60;
  local_50 = &LAB_20063c10;
  local_4c = &LAB_20064720;
  puStack_bc = &LAB_20064e60;
  puStack_b8 = &LAB_20065280;
  puStack_b4 = &LAB_20064770;
  puStack_b0 = &LAB_2001c580;
  puStack_170 = &LAB_2005c970;
  pcStack_16c = FUN_2005ca10;
  pcStack_ac = FUN_2001c370;
  puStack_a8 = &LAB_2005ccb0;
  pcStack_48 = FUN_20054750;
  pcStack_18c = FUN_2005d530;
  puStack_188 = &LAB_2005d550;
  puStack_184 = &LAB_2005d570;
  puStack_180 = &LAB_2005d590;
  puStack_17c = &LAB_2005d5f0;
  pcStack_178 = FUN_200594e0;
  puStack_7c = &LAB_2005ca40;
  puStack_134 = &LAB_2005cd30;
  pcStack_130 = FUN_20061f50;
  puStack_174 = &LAB_2005cae0;
  puStack_110 = &LAB_2005cb40;
  puStack_10c = &LAB_2005cb40;
  puStack_108 = &LAB_2005cb60;
  puStack_104 = &LAB_2005cb80;
  puStack_100 = &LAB_2005cba0;
  puStack_fc = &LAB_2005cbc0;
  puStack_f8 = &LAB_2005cbe0;
  puStack_f4 = &LAB_2005cc00;
  puStack_f0 = &LAB_2005cc20;
  pcStack_ec = FUN_2001cb00;
  pcStack_e8 = FUN_2001cb70;
  pcStack_e4 = FUN_2001cbf0;
  puStack_e0 = &LAB_2005cc50;
  puStack_dc = &LAB_2005cc80;
  puStack_d8 = &LAB_2005cc40;
  puStack_d4 = &LAB_2005c8c0;
  pcStack_44 = FUN_2001f090;
  pcStack_40 = Z_Free;
  puStack_3c = &LAB_2001f010;
  pcStack_30 = Cvar_Get;
  pcStack_2c = Cvar_Set;
  pcStack_24 = FUN_20022170;
  pcStack_28 = Cvar_SetValue;
  pcStack_20 = FUN_20022c60;
  pcStack_1c = FUN_200216d0;
  pcStack_168 = Cmd_Argc;
  pcStack_164 = Cmd_Argv;
  pcStack_160 = FUN_20018d50;
  pcStack_4 = FUN_20018180;
  puStack_a4 = &LAB_2001bfb0;
  pcStack_a0 = FUN_2001c090;
  puStack_128 = &LAB_200232f0;
  pcStack_124 = FUN_20023470;
  pcStack_120 = FUN_20016630;
  pcStack_9c = FUN_2008ea40;
  pcStack_98 = FUN_200494c0;
  puStack_94 = &LAB_20048e10;
  puStack_90 = &LAB_200490a0;
  puStack_8c = &LAB_20049100;
  pcStack_88 = FUN_20049190;
  pcStack_84 = FUN_20049390;
  puStack_80 = &DAT_20396ddc;
  pcStack_18 = FS_LoadFile;
  pcStack_14 = FS_FreeFile;
  pcStack_10 = FUN_20025760;
  pcStack_c = FUN_20024d60;
  pcStack_8 = FUN_20024df0;
  pcStack_38 = FUN_20060230;
  pcStack_34 = FUN_20060490;
  pcStack_78 = FUN_2001e700;
  pcStack_74 = FUN_2001e730;
  pcStack_70 = FUN_2001e7b0;
  pcStack_d0 = FUN_20057f20;
  puStack_cc = &LAB_20058280;
  pcStack_c4 = FUN_20058800;
  puStack_c8 = &LAB_200584c0;
  pcStack_c0 = FUN_20058110;
  pcStack_68 = FUN_20065bf0;
  pcStack_64 = FUN_20066100;
  pcStack_60 = FUN_20066090;
  pcStack_5c = flrand;
  pcStack_58 = irand;
  DAT_20396dd8 = (int *)FUN_20065f20(&pcStack_18c);
  if (DAT_20396dd8 == (int *)0x0) {
    Com_Error(1,s_failed_to_load_game_DLL_201396ec);
  }
  if (*DAT_20396dd8 != 3) {
    Com_Error(1,s_game_is_version__i__not__i_201396d0,*DAT_20396dd8,3);
  }
                    /* WARNING: Could not recover jumptable at 0x2005d1f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_20396dd8[1])();
  return;
}

