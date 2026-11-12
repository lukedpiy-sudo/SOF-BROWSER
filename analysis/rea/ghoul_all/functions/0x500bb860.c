// rea decompile_all
// name: FUN_500bb860
// address: 0x500bb860
// body: available
// range: 0x500bb860-0x500bb8c9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __thiscall FUN_500bb860(void *this,undefined1 *param_1,undefined1 *param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  
  *(undefined1 *)this = *param_2;
  *(undefined1 *)((int)this + 1) = *param_1;
  *(undefined1 *)((int)this + 0xc) = 0;
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x10) = 1;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)((int)this + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x11) = 1;
  **(undefined4 **)((int)this + 8) = 0;
  *(undefined4 *)(*(int *)((int)this + 8) + 8) = 0;
  uVar1 = *(undefined4 *)((int)this + 8);
  pvVar2 = operator_new(0x14);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x10) = 0;
  *(undefined1 *)((int)pvVar2 + 0x11) = 0;
  *(void **)((int)this + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 0x10) = 0;
  return this;
}

