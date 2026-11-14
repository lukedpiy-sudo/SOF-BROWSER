// rea decompile_all
// name: FUN_30016ab0
// address: 0x30016ab0
// body: available
// range: 0x30016ab0-0x30016b7e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_30016ab0(void)

{
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  float local_c [3];
  
  if (DAT_300a37c8 != 0) {
    if (DAT_300a37b0 != 0) {
      local_18 = DAT_300a37a4;
      local_14 = DAT_300a37a8;
      local_10 = DAT_300a37ac;
      FUN_3001d280(&local_18);
      FUN_3001ca90((float *)&DAT_3008fd10,local_c,(float *)0x0,(float *)0x0);
    }
    if (DAT_300a3748 != 0) {
      _DAT_300a37c4 = DAT_3008fd38 - _DAT_300a37c0;
      if (_DAT_300a37c4 <= 0.1) {
        if (_DAT_300a37c4 < 0.0) {
          _DAT_300a37c4 = 0.0;
        }
      }
      else {
        _DAT_300a37c4 = 0.1;
      }
      _DAT_300a37c0 = DAT_3008fd38;
      FUN_30018350(&DAT_300a37b4,0x300a3748,0x300a3748);
    }
  }
  return;
}

