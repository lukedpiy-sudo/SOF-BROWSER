// rea decompile_all
// name: FUN_50018cd0
// address: 0x50018cd0
// body: available
// range: 0x50018cd0-0x50018e4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_50018cd0(void *this,int param_1)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  undefined4 in_stack_0000001c;
  
  piVar1 = *(int **)(param_1 + 0x450);
  if (((*(int *)((int)this + 4) == 0) || (*(int *)(*(int *)((int)this + 4) + 0x38) != 0)) ||
     (iVar2 = (**(code **)(*(int *)this + 0x6c))(), iVar2 != 0)) {
    if ((*(char **)((int)this + 4) == s_std_itosit_n_50141a08) &&
       (iVar2 = (**(code **)(*(int *)this + 0x158))(param_1,s_sit_i_n_50141958,in_stack_0000001c),
       iVar2 != 0)) {
      return s_sit_i_n_50141958;
    }
    if ((*(char **)((int)this + 4) == s_std_wsniff_n_50141850) &&
       (iVar2 = (**(code **)(*(int *)this + 0x158))
                          (param_1,s_std_wsniff_frm_50141a60,in_stack_0000001c), iVar2 != 0)) {
      return s_std_wsniff_frm_50141a60;
    }
    if (*(char **)((int)this + 4) != s_sit_i_n_50141958) {
      uVar3 = FUN_50107636();
      if (((int)uVar3 % 5 == 0) &&
         (iVar2 = (**(code **)(*(int *)this + 0x158))
                            (param_1,s_std_itosit_n_50141a08,in_stack_0000001c), iVar2 != 0)) {
        return s_std_itosit_n_50141a08;
      }
      if ((((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x7c))(), iVar2 != 0)) &&
          (uVar3 = FUN_50107636(), (int)uVar3 % 3 == 0)) &&
         ((*(char **)((int)this + 4) != s_std_ibark_n_501415e8 &&
          (iVar2 = (**(code **)(*(int *)this + 0x158))
                             (param_1,s_std_ibark_n_501415e8,in_stack_0000001c), iVar2 != 0)))) {
        (**(code **)(*(int *)this + 0x174))(param_1);
        return s_std_ibark_n_501415e8;
      }
      iVar2 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_ipant_n_50141640,in_stack_0000001c);
      if (iVar2 == 0) {
        return s_std_w_n_50141748;
      }
      return s_std_ipant_n_50141640;
    }
    uVar3 = FUN_50107636();
    if (((int)uVar3 % 5 == 0) &&
       (iVar2 = (**(code **)(*(int *)this + 0x158))
                          (param_1,s_sit_itostand_n_501419b0,in_stack_0000001c), iVar2 != 0)) {
      return s_sit_itostand_n_501419b0;
    }
  }
  return *(char **)((int)this + 4);
}

