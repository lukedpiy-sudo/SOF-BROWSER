// rea decompile_all
// name: FUN_20001eb0
// address: 0x20001eb0
// body: available
// range: 0x20001eb0-0x20001fa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20001eb0(int param_1)

{
  MCIERROR MVar1;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  if (param_1 == 0) {
    if ((DAT_2015eb04 != 0) && (DAT_2015eaf8 != 0)) {
      param_1 = DAT_20403564;
      MVar1 = mciSendCommandA(DAT_2015eae8,0x809,0,(DWORD_PTR)&param_1);
      if (MVar1 != 0) {
        Com_DPrintf(s_MCI_PAUSE_failed___i__2011c2c0,MVar1);
      }
      DAT_2015eafc = DAT_2015eaf8;
      DAT_2015eaf8 = 0;
    }
  }
  else if (((DAT_2015eb04 != 0) && (DAT_2015eaf4 != 0)) && (DAT_2015eafc != 0)) {
    local_c = DAT_20403564;
    local_8 = DAT_2015ea78 & 0xff;
    local_4 = (uint)(byte)((char)DAT_2015ea78 + 1);
    MVar1 = mciSendCommandA(DAT_2015eae8,0x806,9,(DWORD_PTR)&local_c);
    if (MVar1 != 0) {
      Com_DPrintf(s_CDAudio__MCI_PLAY_failed___i__2011c2e0,MVar1);
      return;
    }
    DAT_2015eaf8 = 1;
    return;
  }
  return;
}

