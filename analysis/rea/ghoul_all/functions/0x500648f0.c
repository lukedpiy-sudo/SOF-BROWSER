// rea decompile_all
// name: FUN_500648f0
// address: 0x500648f0
// body: available
// range: 0x500648f0-0x50064924 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * __thiscall FUN_500648f0(void *this,byte param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)((int)this + 0x30);
  while (puVar1 != (undefined4 *)0x0) {
    *(undefined4 *)((int)this + 0x30) = *puVar1;
    FUN_50106b60((undefined *)puVar1);
    puVar1 = *(undefined4 **)((int)this + 0x30);
  }
  if ((param_1 & 1) != 0) {
    FUN_50106b60(this);
  }
  return this;
}

