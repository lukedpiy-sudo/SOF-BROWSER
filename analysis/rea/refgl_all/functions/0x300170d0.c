// rea decompile_all
// name: FUN_300170d0
// address: 0x300170d0
// body: available
// range: 0x300170d0-0x30017141 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_300170d0(void *this,float param_1,float *param_2,float *param_3,float param_4)

{
  longlong lVar1;
  
  if (*(float *)((int)this + 0x50) != 0.0) {
    *param_2 = 0.0;
    *param_3 = *(float *)((int)this + 0x50);
    return;
  }
  if (*(char *)((int)this + 0x54) != '\0') {
    *param_2 = 0.0;
    lVar1 = __ftol();
    *param_3 = (float)(int)lVar1;
    return;
  }
  *param_2 = param_4;
  *param_3 = param_1 / *(float *)((int)this + 0x48) + param_4;
  return;
}

