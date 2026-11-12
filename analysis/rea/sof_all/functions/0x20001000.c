// rea decompile_all
// name: FUN_20001000
// address: 0x20001000
// body: available
// range: 0x20001000-0x2000130d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20001000(int param_1,undefined4 param_2)

{
  byte bVar1;
  MCIERROR MVar2;
  uint uVar3;
  float10 fVar4;
  char *pcVar5;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  undefined1 local_20 [4];
  int local_1c;
  undefined4 local_18;
  uint local_14;
  undefined1 local_10 [4];
  int local_c;
  undefined4 local_8;
  
  if (DAT_2015eb04 == 0) {
    return;
  }
  if (DAT_2015eaf4 == 0) {
    DAT_2015eaf4 = 0;
    local_8 = 7;
    MVar2 = mciSendCommandA(DAT_2015eae8,0x814,0x102,(DWORD_PTR)local_10);
    if (MVar2 == 0) {
      if (local_c == 0) {
        pcVar5 = s_CDAudio__drive_not_ready_2011c37c;
      }
      else {
        local_8 = 3;
        MVar2 = mciSendCommandA(DAT_2015eae8,0x814,0x102,(DWORD_PTR)local_10);
        if (MVar2 == 0) {
          if (local_c != 0) {
            DAT_2015eaf4 = 1;
            DAT_2015eaf0 = CONCAT31(DAT_2015eaf0._1_3_,(char)local_c);
            goto LAB_2000106c;
          }
          pcVar5 = s_CDAudio__no_music_tracks_2011c338;
        }
        else {
          pcVar5 = s_CDAudio__get_tracks___status_fai_2011c354;
        }
      }
    }
    else {
      pcVar5 = s_CDAudio__drive_ready_test___get_s_2011c3b0;
    }
    Com_DPrintf(pcVar5);
    if (DAT_2015eaf4 == 0) {
      return;
    }
  }
LAB_2000106c:
  bVar1 = (&DAT_2015ea80)[param_1];
  uVar3 = (uint)bVar1;
  if ((bVar1 == 0) || ((DAT_2015eaf0 & 0xff) < uVar3)) {
    if ((DAT_2015eb04 != 0) && (DAT_2015eaf8 != 0)) {
      MVar2 = mciSendCommandA(DAT_2015eae8,0x808,0,0);
      if (MVar2 != 0) {
        Com_DPrintf(s_MCI_STOP_failed___i__2011c300,MVar2);
      }
      DAT_2015eafc = 0;
      DAT_2015eaf8 = 0;
    }
  }
  else {
    local_18 = 0x4001;
    local_14 = uVar3;
    MVar2 = mciSendCommandA(DAT_2015eae8,0x814,0x112,(DWORD_PTR)local_20);
    if (MVar2 != 0) {
      Com_DPrintf(s_MCI_STATUS_failed___i__2011c398,MVar2);
      return;
    }
    if (local_1c != 0x440) {
      Com_Printf(s_CDAudio__track__i_is_not_audio_2011c318,uVar3);
      return;
    }
    local_18 = 1;
    local_14 = uVar3;
    MVar2 = mciSendCommandA(DAT_2015eae8,0x814,0x112,(DWORD_PTR)local_20);
    if (MVar2 != 0) {
      Com_DPrintf(s_MCI_STATUS_failed___i__2011c398,MVar2);
      return;
    }
    if (DAT_2015eaf8 != 0) {
      if ((DAT_2015ea78 & 0xff) == uVar3) {
        return;
      }
      if (DAT_2015eb04 != 0) {
        MVar2 = mciSendCommandA(DAT_2015eae8,0x808,0,0);
        if (MVar2 != 0) {
          Com_DPrintf(s_MCI_STOP_failed___i__2011c300,MVar2);
        }
        DAT_2015eafc = 0;
        DAT_2015eaf8 = 0;
      }
    }
    local_24 = local_1c << 8 | uVar3;
    local_2c = DAT_20403564;
    local_28 = uVar3;
    MVar2 = mciSendCommandA(DAT_2015eae8,0x806,0xd,(DWORD_PTR)&local_2c);
    if (MVar2 != 0) {
      Com_DPrintf(s_CDAudio__MCI_PLAY_failed___i__2011c2e0,MVar2);
      return;
    }
    DAT_2015eb08 = param_2;
    DAT_2015ea78 = CONCAT31(DAT_2015ea78._1_3_,bVar1);
    DAT_2015eaf8 = 1;
    fVar4 = (float10)FUN_200216d0(s_cd_nocd_2011c2d8);
    if (((fVar4 != (float10)0.0) && (DAT_2015eb04 != 0)) && (DAT_2015eaf8 != 0)) {
      param_1 = DAT_20403564;
      MVar2 = mciSendCommandA(DAT_2015eae8,0x809,0,(DWORD_PTR)&param_1);
      if (MVar2 != 0) {
        Com_DPrintf(s_MCI_PAUSE_failed___i__2011c2c0,MVar2);
      }
      DAT_2015eafc = DAT_2015eaf8;
      DAT_2015eaf8 = 0;
      return;
    }
  }
  return;
}

