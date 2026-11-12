// rea decompile_all
// name: FUN_50067360
// address: 0x50067360
// body: available
// range: 0x50067360-0x500673ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_50067360(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  int iVar3;
  
  fVar1 = *(float *)((int)this + 0x10);
  iVar3 = *(int *)((int)this + 8) + 1;
  *(float *)((int)this + 0x10) = param_1;
  fVar1 = (param_1 - fVar1) + *(float *)((int)this + 0x14);
  *(int *)((int)this + 8) = iVar3;
  *(float *)((int)this + 0x14) = fVar1;
  fVar2 = 1.0 / (float)iVar3;
  *(float *)((int)this + 0x18) = fVar2 * fVar1;
  fVar1 = (param_1 - *(float *)((int)this + 0xc)) + *(float *)((int)this + 0x1c);
  *(float *)((int)this + 0x1c) = fVar1;
  *(float *)((int)this + 0x20) = fVar2 * fVar1;
  return;
}

