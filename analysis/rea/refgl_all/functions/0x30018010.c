// rea decompile_all
// name: FUN_30018010
// address: 0x30018010
// body: available
// range: 0x30018010-0x3001803b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __thiscall FUN_30018010(void *this,int *param_1)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    *param_1 = *(int *)((int)this + 8);
  }
  iVar1 = *(int *)((int)this + 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)((int)this + 4);
  }
  *(int *)((int)this + 8) = iVar1 + -1;
  return *(int *)this + (iVar1 + -1) * 0x1c;
}

