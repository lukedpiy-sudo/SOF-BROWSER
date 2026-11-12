// rea decompile_all
// name: FUN_500155b0
// address: 0x500155b0
// body: available
// range: 0x500155b0-0x50015654 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_500155b0(void *this,undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 in_stack_0000001c;
  
  if (((*(int *)((int)this + 4) != 0) && (*(int *)(*(int *)((int)this + 4) + 0x38) == 0)) &&
     (iVar1 = (**(code **)(*(int *)this + 0x6c))(), iVar1 == 0)) {
    return *(char **)((int)this + 4);
  }
  uVar2 = FUN_50107636();
  if ((int)uVar2 % 0x3c == 0) {
    iVar1 = (**(code **)(*(int *)this + 0x158))(param_1,s_std_imoo_n_50141fe0,in_stack_0000001c);
    if (iVar1 != 0) {
      (**(code **)(*(int *)this + 0x174))(param_1);
      return s_std_imoo_n_50141fe0;
    }
  }
  else {
    uVar2 = FUN_50107636();
    if (((int)uVar2 % 0x3c == 0) &&
       (iVar1 = (**(code **)(*(int *)this + 0x158))
                          (param_1,s_std_ilooking_n_50142038,in_stack_0000001c), iVar1 != 0)) {
      return s_std_ilooking_n_50142038;
    }
  }
  return s_std_i_n_50141ed8;
}

