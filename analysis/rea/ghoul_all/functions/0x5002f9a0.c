// rea decompile_all
// name: FUN_5002f9a0
// address: 0x5002f9a0
// body: available
// range: 0x5002f9a0-0x5002f9e1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5002f9a0(void *this,int param_1)

{
  int iVar1;
  
  if (((*(byte *)((int)this + 0x1ac) & 8) != 0) &&
     (*(char **)((int)this + 4) == s_std_plimp_rt_n_n_50139978)) {
    iVar1 = (*DAT_5015cb24)(0,1);
    if (iVar1 != 0) {
      FUN_5001e5a0(this,&DAT_50133c54,param_1);
    }
  }
  return;
}

