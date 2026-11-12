// rea decompile_all
// name: FUN_50010090
// address: 0x50010090
// body: available
// range: 0x50010090-0x500101b0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall FUN_50010090(void *this,undefined4 param_1,int param_2)

{
  float10 extraout_ST0;
  longlong lVar1;
  
  __ftol();
  lVar1 = __ftol();
  if (extraout_ST0 == (float10)((float)((uint)lVar1 & 0xffff) * 0.005493164)) {
    (**(code **)(*(int *)this + 0x2c))(param_1,param_2);
    return 1;
  }
  lVar1 = __ftol();
  *(float *)(param_2 + 0x14) = (float)((uint)lVar1 & 0xffff) * 0.005493164;
  (**(code **)(*(int *)this + 0x2c))(param_1,param_2);
  return 1;
}

