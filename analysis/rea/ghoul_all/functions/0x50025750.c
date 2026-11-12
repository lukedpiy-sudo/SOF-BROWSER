// rea decompile_all
// name: FUN_50025750
// address: 0x50025750
// body: available
// range: 0x50025750-0x500257c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50025750(void *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  if (*(char **)((int)this + 4) == s_cch_xonknees_n_n_n_501389a8) {
    iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,s_cch_sonknees_2frnt_n_n_50138950);
    if (iVar1 != 0) {
      FUN_5001e5a0(this,s_Scream_50133650,param_1);
      pcVar2 = s_cch_sonknees_2frnt_n_n_50138950;
    }
  }
  iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,s_cch_sdead_2bk_n_n_501367f8);
  if (iVar1 != 0) {
    FUN_5001e5a0(this,s_Scream_50133650,param_1);
    return s_cch_sdead_2bk_n_n_501367f8;
  }
  return pcVar2;
}

