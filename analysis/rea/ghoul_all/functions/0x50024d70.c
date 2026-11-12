// rea decompile_all
// name: FUN_50024d70
// address: 0x50024d70
// body: available
// range: 0x50024d70-0x50024e4a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50024d70(void *this,int param_1)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)0x0;
  iVar1 = (*DAT_5015cb24)(0,2);
  if (iVar1 == 1) {
    iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sviolent_n_n_n_50139fa8);
    if (iVar1 != 0) {
      FUN_5001e5a0(this,s_Scream_50133650,param_1);
      pcVar2 = s_std_sviolent_n_n_n_50139fa8;
      *(undefined4 *)((int)this + 0x1b8) = 1;
    }
  }
  else if (iVar1 != 2) {
    iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_schest_2frnt_n_n_5013a0b0);
    if (iVar1 == 0) {
      return (char *)0x0;
    }
    FUN_5001e5a0(this,s_Scream_50133650,param_1);
    *(undefined4 *)((int)this + 0x1b8) = 1;
    return s_std_schest_2frnt_n_n_5013a0b0;
  }
  iVar1 = (**(code **)(*(int *)this + 0x4c))(param_1,s_std_sblown_2bk_n_n_50136278);
  if (iVar1 == 0) {
    return pcVar2;
  }
  FUN_5001e5a0(this,s_Scream_50133650,param_1);
  *(undefined4 *)((int)this + 0x1b8) = 1;
  *(undefined4 *)((int)this + 0x1b4) = 1;
  return s_std_sblown_2bk_n_n_50136278;
}

