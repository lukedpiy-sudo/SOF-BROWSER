// rea decompile_all
// name: FUN_50049cd0
// address: 0x50049cd0
// body: available
// range: 0x50049cd0-0x50049d24 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * __thiscall FUN_50049cd0(void *this,void *param_1,void *param_2)

{
  void *pvVar1;
  void *this_00;
  void *pvVar2;
  
  pvVar1 = *(void **)((int)this + 8);
  this_00 = param_1;
  for (; param_2 != pvVar1; param_2 = (void *)((int)param_2 + 0x88)) {
    FUN_5004ab80(this_00,param_2);
    this_00 = (void *)((int)this_00 + 0x88);
  }
  pvVar1 = *(void **)((int)this + 8);
  for (pvVar2 = this_00; pvVar2 != pvVar1; pvVar2 = (void *)((int)pvVar2 + 0x88)) {
    FUN_50047700(pvVar2);
  }
  *(void **)((int)this + 8) = this_00;
  return param_1;
}

