// rea decompile_all
// name: FUN_20001e30
// address: 0x20001e30
// body: available
// range: 0x20001e30-0x20001eab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_20001e30(void)

{
  MCIERROR MVar1;
  
  if (DAT_2015eb00 != 0) {
    if ((DAT_2015eb04 != 0) && (DAT_2015eaf8 != 0)) {
      MVar1 = mciSendCommandA(DAT_2015eae8,0x808,0,0);
      if (MVar1 != 0) {
        Com_DPrintf(s_MCI_STOP_failed___i__2011c300,MVar1);
      }
      DAT_2015eafc = 0;
      DAT_2015eaf8 = 0;
    }
    MVar1 = mciSendCommandA(DAT_2015eae8,0x804,2,0);
    if (MVar1 != 0) {
      Com_DPrintf(s_CDAudio_Shutdown__MCI_CLOSE_fail_2011c5b4);
    }
  }
  return;
}

