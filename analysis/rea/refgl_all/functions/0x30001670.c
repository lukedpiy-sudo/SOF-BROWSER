// rea decompile_all
// name: FUN_30001670
// address: 0x30001670
// body: available
// range: 0x30001670-0x300017c1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_30001670(void)

{
  DWORD DVar1;
  int iVar2;
  
  if ((DAT_30034db8 != '\0') && (DAT_30034db9 != '\0')) {
    DVar1 = timeGetTime();
    if (100.0 <= (float)DVar1 - _DAT_30034da4) {
      _DAT_30034da4 = _DAT_30034da4 + 100.0;
      (*DAT_300a47d8)(0,0,DAT_3008ffc4,DAT_3008ffc8,0x80e0,0x1401,DAT_30034db4);
      iVar2 = AVIStreamWrite(DAT_30034db0,DAT_30034da0,1,DAT_30034db4,
                             DAT_3008ffc4 * DAT_3008ffc8 * 3,0x10,0,0);
      if (iVar2 != 0) {
        FUN_30010fd0((byte *)s_Could_not_write_frame__d_of_AVI_3002e268);
        if (DAT_30034dac != 0) {
          AVIStreamRelease(DAT_30034dac);
          DAT_30034dac = 0;
        }
        if (DAT_30034db0 != 0) {
          AVIStreamRelease(DAT_30034db0);
          DAT_30034db0 = 0;
        }
        if (DAT_30034da8 != 0) {
          AVIFileRelease(DAT_30034da8);
          DAT_30034da8 = 0;
        }
        if (DAT_30034db4 != (undefined *)0x0) {
          FUN_3001fcd0(DAT_30034db4);
          DAT_30034db4 = (undefined *)0x0;
        }
        AVIFileExit();
        DAT_30034db9 = '\0';
        DAT_30034db8 = '\0';
        FUN_30010fd0((byte *)s_Record__d_frames_3002e248);
      }
      DAT_30034da0 = DAT_30034da0 + 1;
    }
  }
  return;
}

