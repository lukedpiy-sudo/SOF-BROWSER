// rea decompile_all
// name: FUN_20055c20
// address: 0x20055c20
// body: available
// range: 0x20055c20-0x20056294 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_20055c20(void)

{
  char cVar1;
  BOOL BVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  bool bVar6;
  undefined *puStack_14;
  undefined4 *puStack_10;
  undefined4 *puStack_c;
  undefined4 *puStack_8;
  undefined4 *puStack_4;
  
  if (DAT_20390da0 != (HMODULE)0x0) {
    (*DAT_20390d50)();
    if (DAT_20390da0 != (HMODULE)0x0) {
      BVar2 = FreeLibrary(DAT_20390da0);
      if (BVar2 == 0) {
        Sys_Error(s_Sound_Lib_FreeLibrary_failed_201380e8);
      }
    }
    DAT_20390da0 = (HMODULE)0x0;
  }
  if (DAT_20390da4 == 0) {
    DAT_20390da4 = Cvar_Get(s_snd_dll_20138750,&DAT_2015ee44,1,0);
  }
  iVar3 = __strcmpi(*(char **)(DAT_20390da4 + 4),s_a3dsnd_dll_20138744);
  if (iVar3 == 0) {
    Com_Printf(s_Attempting_A3D_2_0_support_20138728);
    iVar3 = FUN_20023d20();
    if (iVar3 == 0) {
      Com_Printf(s_A3D_NOT_supported_20138714);
      Cvar_Set(s_snd_dll_20138750,s_defsnd_dll_20138708);
    }
  }
  iVar3 = __strcmpi(*(char **)(DAT_20390da4 + 4),s_eaxsnd_dll_201386fc);
  if (iVar3 == 0) {
    Com_Printf(s_Attempting_EAX_2_0_support_201386e0);
    cVar1 = FUN_20024310(DAT_20403564);
    if (cVar1 == '\0') {
      Com_Printf(s_EAX_NOT_supported_201386cc);
      Cvar_Set(s_snd_dll_20138750,s_defsnd_dll_20138708);
    }
  }
  iVar3 = __strcmpi(*(char **)(DAT_20390da4 + 4),&DAT_2015ee44);
  if (iVar3 == 0) {
    iVar3 = FUN_20023d20();
    if (iVar3 == 0) {
      cVar1 = FUN_20024310(DAT_20403564);
      if (cVar1 == '\0') {
        Cvar_Set(s_snd_dll_20138750,s_defsnd_dll_20138708);
      }
      else {
        Com_Printf(s_Found_EAX_support_201386a0);
        Cvar_Set(s_snd_dll_20138750,s_eaxsnd_dll_201386fc);
      }
    }
    else {
      Com_Printf(s_Found_A3D_2_0_support_201386b4);
      Cvar_Set(s_snd_dll_20138750,s_a3dsnd_dll_20138744);
    }
  }
  iVar3 = __strcmpi(*(char **)(DAT_20390da4 + 4),s_defsnd_dll_20138708);
  if (iVar3 == 0) {
    Com_Printf(s_Setting_Default_Sound_support_20138680);
  }
  Com_Printf(s_________Loading__s_________20138664,*(undefined4 *)(DAT_20390da4 + 4));
  DAT_20390da0 = LoadLibraryA(*(LPCSTR *)(DAT_20390da4 + 4));
  if (DAT_20390da0 == (HMODULE)0x0) {
    bVar6 = true;
    iVar3 = 1;
    pcVar4 = *(char **)(DAT_20390da4 + 4);
    pcVar5 = &DAT_2015ee44;
    do {
      if (iVar3 == 0) break;
      iVar3 = iVar3 + -1;
      bVar6 = *pcVar4 == *pcVar5;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (bVar6);
    if (bVar6) {
      Sys_Error(s_Couldn_t_load_default_sound_dll__20138640);
    }
    Cvar_Set(s_snd_dll_20138750,s_defsnd_dll_20138708);
    DAT_20390da0 = LoadLibraryA(*(LPCSTR *)(DAT_20390da4 + 4));
    if (DAT_20390da0 == (HMODULE)0x0) {
      Sys_Error(s_LoadLibrary___s___failed_20138624,*(undefined4 *)(DAT_20390da4 + 4));
    }
  }
  DAT_20390d9c = GetProcAddress(DAT_20390da0,s_S_Init_2013861c);
  if (DAT_20390d9c == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_Init_failed_on___201385f8,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d50 = GetProcAddress(DAT_20390da0,s_S_Shutdown_201385ec);
  if (DAT_20390d50 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_Shutdown_failed_201385c4,*(undefined4 *)(DAT_20390da4 + 4));
  }
  _DAT_20390d70 = GetProcAddress(DAT_20390da0,s_S_Touch_201385bc);
  if (_DAT_20390d70 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_Touch_failed_on_20138598,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d90 = GetProcAddress(DAT_20390da0,s_S_FreeSound_2013858c);
  if (DAT_20390d90 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_FreeSound_faile_20138564,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d7c = GetProcAddress(DAT_20390da0,s_S_StartSound_20138554);
  if (DAT_20390d7c == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_StartSound_fail_20138528,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d94 = GetProcAddress(DAT_20390da0,s_S_StartLocalSound_20138514);
  if (DAT_20390d94 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_StartLocalSound_201384e4,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d4c = GetProcAddress(DAT_20390da0,s_S_StopAllSounds_201384d4);
  if (DAT_20390d4c == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_StopAllSounds_f_201384a8,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d78 = GetProcAddress(DAT_20390da0,s_S_Update_2013849c);
  if (DAT_20390d78 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_Update_failed_o_20138474,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d6c = GetProcAddress(DAT_20390da0,s_S_Activate_20138468);
  if (DAT_20390d6c == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_Activate_failed_20138440,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d44 = GetProcAddress(DAT_20390da0,s_S_BeginRegistration_2013842c);
  if (DAT_20390d44 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_BeginRegistrati_201383fc,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d88 = GetProcAddress(DAT_20390da0,s_S_RegisterSound_201383ec);
  if (DAT_20390d88 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_RegisterSound_f_201383c0,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d58 = GetProcAddress(DAT_20390da0,s_S_EndRegistration_201383ac);
  if (DAT_20390d58 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_EndRegistration_2013837c,*(undefined4 *)(DAT_20390da4 + 4));
  }
  _DAT_20390d98 = GetProcAddress(DAT_20390da0,s_S_FindName_20138370);
  if (_DAT_20390d98 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_FindName_failed_20138348,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d5c = GetProcAddress(DAT_20390da0,s_S_RegisterMusicSet_20138334);
  if (DAT_20390d5c == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_RegisterMusicSe_20138304,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d60 = GetProcAddress(DAT_20390da0,s_S_RegisterAmbientSet_201382ec);
  if (DAT_20390d60 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_RegisterAmbient_201382b8,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d68 = GetProcAddress(DAT_20390da0,s_S_SetMusicIntensity_201382a4);
  if (DAT_20390d68 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_SetMusicIntensi_20138274,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d64 = GetProcAddress(DAT_20390da0,s_S_SetMusicDesignerInfo_2013825c);
  if (DAT_20390d64 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_SetMusicDesigne_20138228,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d8c = GetProcAddress(DAT_20390da0,s_S_SetGeneralAmbientSet_20138210);
  if (DAT_20390d8c == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_SetGeneralAmbie_201381dc,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d54 = GetProcAddress(DAT_20390da0,s_S_SetSoundProcType_201381c8);
  if (DAT_20390d54 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_SetSoundProcTyp_20138198,*(undefined4 *)(DAT_20390da4 + 4));
  }
  DAT_20390d48 = GetProcAddress(DAT_20390da0,s_S_SetSoundStruct_20138184);
  if (DAT_20390d48 == (FARPROC)0x0) {
    Sys_Error(s_GetProcAddress_S_SetSoundStruct_f_20138154,*(undefined4 *)(DAT_20390da4 + 4));
  }
  puStack_10 = &DAT_201e7588;
  puStack_c = &DAT_2015eef8;
  puStack_14 = &DAT_201ca530;
  puStack_8 = &DAT_201c1f00;
  puStack_4 = &DAT_20403564;
  (*DAT_20390d48)(&puStack_14);
  DAT_20390d84 = GetProcAddress(DAT_20390da0,s_S_A3D_ExportRenderGeom_2013813c);
  if (DAT_20390d84 == (FARPROC)0x0) {
    DAT_20390d84 = (FARPROC)0x0;
    DAT_20403648 = 0;
  }
  else if (DAT_20403648 != 0) {
    (*DAT_20390d84)(&DAT_20403570);
  }
  _DAT_20390d80 = GetProcAddress(DAT_20390da0,s_SNDEAX_SetEnvironment_20138124);
  if (_DAT_20390d80 == (FARPROC)0x0) {
    _DAT_20390d80 = (FARPROC)0x0;
  }
  _DAT_20390d74 = GetProcAddress(DAT_20390da0,s_SNDEAX_SetEnvironmentLevel_20138108);
  if (_DAT_20390d74 == (FARPROC)0x0) {
    _DAT_20390d74 = (FARPROC)0x0;
  }
  return;
}

