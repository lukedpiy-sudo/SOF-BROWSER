// rea decompile_all
// name: FUN_50108038
// address: 0x50108038
// body: available
// range: 0x50108038-0x5010805f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint __thiscall FUN_50108038(void *this,int param_1)

{
  uint uVar1;
  
  if (1 < DAT_501565a8) {
    uVar1 = FUN_5010c4e5(this,param_1,8);
    return uVar1;
  }
  return (byte)PTR_DAT_5015639c[param_1 * 2] & 8;
}

