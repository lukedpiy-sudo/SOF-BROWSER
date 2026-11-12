// rea decompile_all
// name: FUN_500b69f0
// address: 0x500b69f0
// body: available
// range: 0x500b69f0-0x500b6a21 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_500b69f0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(int *)((int)this + 8) - iVar1 >> 2;
  }
  if (((param_1 <= uVar2) && (0 < (int)param_1)) &&
     (iVar1 = *(int *)(iVar1 + -4 + param_1 * 4), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 0x1c);
  }
  return 0;
}

