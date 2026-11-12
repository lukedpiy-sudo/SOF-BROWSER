// rea decompile_all
// name: FUN_2000df70
// address: 0x2000df70
// body: available
// range: 0x2000df70-0x2000e149 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_2000df70(void)

{
  code *local_9c;
  code *local_98;
  code *local_94;
  code *local_90;
  code *local_8c;
  code *local_88;
  code *local_84;
  code *local_80;
  code *local_7c;
  code *local_78;
  code *pcStack_74;
  code *pcStack_70;
  undefined4 uStack_6c;
  code *pcStack_68;
  undefined1 *puStack_64;
  undefined1 *puStack_60;
  undefined1 *puStack_5c;
  code *pcStack_58;
  code *pcStack_54;
  code *local_50;
  undefined4 *puStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
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
  
  if (DAT_20225054 != (int *)0x0) {
    (**(code **)((int)DAT_20225054 + 0xc))();
    FUN_20066090(0xffffffff);
    DAT_20225054 = (int *)0x0;
  }
  local_9c = Cvar_Get;
  local_98 = Cvar_Set;
  local_94 = Cvar_SetValue;
  local_90 = Cmd_Argc;
  local_8c = Cmd_Argv;
  local_88 = FUN_20018d50;
  local_84 = Com_Printf;
  local_80 = Com_sprintf;
  local_7c = Com_DPrintf;
  local_78 = FS_LoadFile;
  pcStack_74 = FS_FreeFile;
  pcStack_70 = irand;
  uStack_6c = DAT_202250ac;
  pcStack_68 = FUN_200494c0;
  puStack_64 = &LAB_20048e10;
  puStack_60 = &LAB_200490a0;
  puStack_5c = &LAB_20049100;
  pcStack_58 = FUN_20049190;
  pcStack_54 = FUN_20049390;
  local_50 = FUN_2008ea50;
  puStack_4c = &DAT_201e8fc8;
  puStack_48 = &LAB_200126e0;
  puStack_44 = &LAB_20012700;
  puStack_40 = &LAB_20012730;
  puStack_3c = &LAB_20012740;
  puStack_38 = &LAB_20012760;
  puStack_34 = &LAB_2000e150;
  puStack_30 = &LAB_2000e160;
  puStack_2c = &LAB_2000e170;
  pcStack_28 = FUN_2001e260;
  pcStack_24 = FUN_2001e290;
  pcStack_20 = FUN_2001e310;
  pcStack_1c = FUN_2001e650;
  pcStack_18 = FUN_2001cb00;
  pcStack_14 = FUN_2001cb70;
  pcStack_10 = FUN_2001cbf0;
  pcStack_c = FUN_2001e700;
  pcStack_8 = FUN_2001e730;
  pcStack_4 = FUN_2001e7b0;
  DAT_20225054 = (int *)FUN_20066100(&local_9c,&local_50,0,0xffffffff);
  if (DAT_20225054 == (int *)0x0) {
    Com_Error(1,s_Client_failed_to_load_player_DLL_2011e77c);
  }
  if (*DAT_20225054 != 1) {
    Com_Error(1,s_player_is_version__i__not__i_2011e75c,*DAT_20225054,1);
  }
                    /* WARNING: Could not recover jumptable at 0x2000e147. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)DAT_20225054[2])();
  return;
}

