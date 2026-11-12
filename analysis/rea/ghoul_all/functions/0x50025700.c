// rea decompile_all
// name: FUN_50025700
// address: 0x50025700
// body: available
// range: 0x50025700-0x5002574a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50025700(void *this,int param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,s_lf_sautofire_end_n_n_50138690);
  if (iVar1 != 0) {
    FUN_5001e5a0(this,s_Scream_50133650,param_1);
    *(undefined4 *)((int)this + 0x1b8) = 1;
    return s_lf_sautofire_end_n_n_50138690;
  }
  return (char *)0x0;
}

