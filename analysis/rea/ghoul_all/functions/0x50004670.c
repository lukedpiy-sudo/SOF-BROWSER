// rea decompile_all
// name: FUN_50004670
// address: 0x50004670
// body: available
// range: 0x50004670-0x500046b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50004670(void *this,int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (*(int *)((int)this + 0x184) != 0) {
    bVar1 = FUN_500887e0(*(int *)((int)this + 0x184),param_1);
    if (CONCAT31(extraout_var,bVar1) != 0) {
      (**(code **)(*(int *)this + 100))(1);
    }
  }
  if (*(int **)((int)this + 0x22c) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x22c) + 0x38))(*(undefined4 *)((int)this + 0x184),param_1);
  }
  return;
}

