// rea decompile_all
// name: FUN_5005bf20
// address: 0x5005bf20
// body: available
// range: 0x5005bf20-0x5005bf91 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_5005bf20(void *this,char *param_1)

{
  _strncpy(this,param_1,0x200);
  *(undefined4 *)((int)this + 0x200) = *(undefined4 *)(param_1 + 0x200);
  *(undefined4 *)((int)this + 0x204) = *(undefined4 *)(param_1 + 0x204);
  *(undefined4 *)((int)this + 0x208) = *(undefined4 *)(param_1 + 0x208);
  *(undefined4 *)((int)this + 0x20c) = *(undefined4 *)(param_1 + 0x20c);
  *(undefined4 *)((int)this + 0x210) = *(undefined4 *)(param_1 + 0x210);
  *(undefined4 *)((int)this + 0x214) = *(undefined4 *)(param_1 + 0x214);
  *(undefined4 *)((int)this + 0x218) = *(undefined4 *)(param_1 + 0x218);
  return this;
}

