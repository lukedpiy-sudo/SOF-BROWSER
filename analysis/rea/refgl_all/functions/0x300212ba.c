// rea decompile_all
// name: FUN_300212ba
// address: 0x300212ba
// body: available
// range: 0x300212ba-0x30021371 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_300212ba(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 1) {
    DAT_300aa4ec = GetVersion();
    iVar1 = FUN_30021ae5(0);
    if (iVar1 == 0) {
      return 0;
    }
    _DAT_300aa4f8 = DAT_300aa4ec >> 8 & 0xff;
    _DAT_300aa4f4 = DAT_300aa4ec & 0xff;
    DAT_300aa4ec = DAT_300aa4ec >> 0x10;
    _DAT_300aa4f0 = _DAT_300aa4f4 * 0x100 + _DAT_300aa4f8;
    DAT_300abb38 = GetCommandLineA();
    DAT_300aa4b4 = FUN_300273f4();
    FUN_30026f20();
    FUN_300271a7();
    FUN_300270ee();
    FUN_30023552();
    DAT_300aa4b0 = DAT_300aa4b0 + 1;
  }
  else if (param_2 == 0) {
    if (DAT_300aa4b0 < 1) {
      return 0;
    }
    DAT_300aa4b0 = DAT_300aa4b0 + -1;
    if (DAT_300aa524 == 0) {
      FUN_30023590();
    }
    FUN_300270cb();
    FUN_30021b42();
  }
  return 1;
}

