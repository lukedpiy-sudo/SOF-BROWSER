// rea decompile_all
// name: FUN_50077d20
// address: 0x50077d20
// body: available
// range: 0x50077d20-0x50077d5c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50077d20(void *this,undefined4 param_1)

{
  *(undefined ***)this = &PTR_LAB_50129390;
  _strncpy((char *)((int)this + 4),&DAT_5015911c,0x40);
  *(undefined4 *)((int)this + 0x44) = 3;
  *(undefined4 *)((int)this + 0x48) = 0xffffffff;
  *(undefined ***)this = &PTR_FUN_501294c0;
  *(undefined4 *)((int)this + 0x4c) = param_1;
  return this;
}

