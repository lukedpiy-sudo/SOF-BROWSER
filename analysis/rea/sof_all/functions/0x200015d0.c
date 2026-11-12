// rea decompile_all
// name: FUN_200015d0
// address: 0x200015d0
// body: available
// range: 0x200015d0-0x200017b9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_200015d0(void)

{
  MCIERROR MVar1;
  int iVar2;
  char *pcVar3;
  undefined1 local_30 [4];
  undefined4 local_2c;
  undefined1 local_24 [4];
  int local_20;
  undefined4 local_1c;
  undefined1 local_14 [4];
  MCIDEVICEID local_10;
  char *local_c;
  
  DAT_2015ea74 = Cvar_Get(s_cd_nocd_2011c2d8,&DAT_2011c4ac,1,0);
  DAT_2015ea70 = Cvar_Get(s_cd_loopcount_2011c498,&DAT_2011c4a8,0,0);
  DAT_2015eaec = Cvar_Get(s_cd_looptrack_2011c484,&DAT_2011c494,0,0);
  if (*(float *)(DAT_2015ea74 + 0x18) != 0.0) {
    return 0xffffffff;
  }
  local_c = s_cdaudio_2011c47c;
  MVar1 = mciSendCommandA(0,0x803,0x2100,(DWORD_PTR)local_14);
  if (MVar1 != 0) {
    Com_Printf(s_CDAudio_Init__MCI_OPEN_failed____2011c458,MVar1);
    return 0xffffffff;
  }
  DAT_2015eae8 = local_10;
  local_2c = 10;
  MVar1 = mciSendCommandA(local_10,0x80d,0x400,(DWORD_PTR)local_30);
  if (MVar1 != 0) {
    Com_Printf(s_MCI_SET_TIME_FORMAT_failed___i__2011c434,MVar1);
    mciSendCommandA(DAT_2015eae8,0x804,0,0);
    return 0xffffffff;
  }
  iVar2 = 0;
  do {
    (&DAT_2015ea80)[iVar2] = (char)iVar2;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 100);
  DAT_2015eb00 = 1;
  DAT_2015eb04 = 1;
  DAT_2015eaf4 = 0;
  local_1c = 7;
  MVar1 = mciSendCommandA(DAT_2015eae8,0x814,0x102,(DWORD_PTR)local_24);
  if (MVar1 == 0) {
    if (local_20 == 0) {
      pcVar3 = s_CDAudio__drive_not_ready_2011c37c;
    }
    else {
      local_1c = 3;
      MVar1 = mciSendCommandA(DAT_2015eae8,0x814,0x102,(DWORD_PTR)local_24);
      if (MVar1 == 0) {
        if (local_20 != 0) {
          DAT_2015eaf4 = 1;
          DAT_2015eaf0._0_1_ = (undefined1)local_20;
          goto LAB_20001736;
        }
        pcVar3 = s_CDAudio__no_music_tracks_2011c338;
      }
      else {
        pcVar3 = s_CDAudio__get_tracks___status_fai_2011c354;
      }
    }
  }
  else {
    pcVar3 = s_CDAudio__drive_ready_test___get_s_2011c3b0;
  }
  Com_DPrintf(pcVar3);
  DAT_2015eaf4 = 0;
  DAT_2015eb04 = 0;
LAB_20001736:
  Cmd_AddCommand(&DAT_2011c430,&LAB_200017c0);
  Com_Printf(s_CD_Audio_Initialized_2011c418);
  return 0;
}

