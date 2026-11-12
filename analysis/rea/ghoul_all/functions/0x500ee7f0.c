// rea decompile_all
// name: FUN_500ee7f0
// address: 0x500ee7f0
// body: available
// range: 0x500ee7f0-0x500ee8a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_500ee7f0(float param_1)

{
  float fVar1;
  
  if (_DAT_5015d934 + _DAT_5015d1bc <= DAT_5015ccdc) {
    fVar1 = _DAT_5015d930 * *(float *)(DAT_5015cb88 + 0x18);
    if (fVar1 < 0.1) {
      fVar1 = 0.1;
    }
    _DAT_5015cda4 = fVar1 * param_1 * 0.7 + _DAT_5015cda4;
    if (1.0 < _DAT_5015cda4) {
      _DAT_5015cda4 = 1.0;
    }
    if (((*(float *)(DAT_5015cb88 + 0x18) < 0.1) || (_DAT_5015d930 < 0.1)) && (0.4 < _DAT_5015cda4))
    {
      _DAT_5015cda4 = 0.4;
    }
  }
  return;
}

