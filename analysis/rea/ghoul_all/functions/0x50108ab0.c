// rea decompile_all
// name: FUN_50108ab0
// address: 0x50108ab0
// body: available
// range: 0x50108ab0-0x50108b67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_50108ab0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    DAT_5018c310 = GetVersion();
    iVar1 = FUN_5010d399(0);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_5018c31c = DAT_5018c310 >> 8 & 0xff;
    _DAT_5018c318 = DAT_5018c310 & 0xff;
    DAT_5018c310 = DAT_5018c310 >> 0x10;
    _DAT_5018c314 = _DAT_5018c318 * 0x100 + _DAT_5018c31c;
    DAT_5018d994 = GetCommandLineA();
    DAT_5018c2d4 = FUN_5010f2a0();
    FUN_5010edcc();
    FUN_5010f053();
    FUN_5010ef9a();
    FUN_5010a31c();
    DAT_5018c2d0 = DAT_5018c2d0 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_5018c2d0 < 1) {
      return 0;
    }
    DAT_5018c2d0 = DAT_5018c2d0 + -1;
    if (DAT_5018c348 == 0) {
      FUN_5010a35a();
    }
    FUN_5010ef77();
    FUN_5010d3f6();
  }
  return 1;
}

