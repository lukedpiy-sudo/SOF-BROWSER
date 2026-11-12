// rea decompile_all
// name: FUN_200014b0
// address: 0x200014b0
// body: available
// range: 0x200014b0-0x200015c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_200014b0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  MCIERROR MVar4;
  bool bVar5;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  iVar2 = DAT_2015eb04;
  iVar1 = DAT_2015ea74;
  bVar5 = DAT_2015eb04 == 0;
  uVar3 = __ftol();
  if (uVar3 != bVar5) {
    if (*(float *)(iVar1 + 0x18) != 0.0) {
      if ((iVar2 != 0) && (DAT_2015eaf8 != 0)) {
        MVar4 = mciSendCommandA(DAT_2015eae8,0x808,0,0);
        if (MVar4 != 0) {
          Com_DPrintf(s_MCI_STOP_failed___i__2011c300,MVar4);
        }
        DAT_2015eafc = 0;
        DAT_2015eaf8 = 0;
      }
      DAT_2015eb04 = 0;
      return;
    }
    DAT_2015eb04 = 1;
    if ((DAT_2015eaf4 != 0) && (DAT_2015eafc != 0)) {
      local_c = DAT_20403564;
      local_8 = DAT_2015ea78 & 0xff;
      local_4 = (uint)(byte)((char)DAT_2015ea78 + 1);
      MVar4 = mciSendCommandA(DAT_2015eae8,0x806,9,(DWORD_PTR)&local_c);
      if (MVar4 != 0) {
        Com_DPrintf(s_CDAudio__MCI_PLAY_failed___i__2011c2e0,MVar4);
        return;
      }
      DAT_2015eaf8 = 1;
    }
  }
  return;
}

