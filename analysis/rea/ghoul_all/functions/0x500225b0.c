// rea decompile_all
// name: FUN_500225b0
// address: 0x500225b0
// body: available
// range: 0x500225b0-0x5002266e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * __thiscall FUN_500225b0(void *this,undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 in_stack_00000018;
  
  if ((*(int *)((int)this + 4) != 0) && (*(int *)(*(int *)((int)this + 4) + 0x4c) == 0)) {
    iVar1 = (**(code **)(*(int *)this + 0xb4))(param_1);
    if (*(int *)(*(int *)((int)this + 4) + 0x4c) == 0) {
      if (iVar1 == 0xb) {
        iVar2 = (**(code **)(*(int *)this + 0x158))
                          (param_1,s_std_xcock_n_s_2_5013e4c0,in_stack_00000018);
        if (iVar2 != 0) {
          return s_std_xcock_n_s_2_5013e4c0;
        }
      }
      else if (iVar1 == 7) {
        iVar2 = (**(code **)(*(int *)this + 0x158))
                          (param_1,s_std_xcock_n_r_2_5013e518,in_stack_00000018);
        if (iVar2 != 0) {
          return s_std_xcock_n_r_2_5013e518;
        }
      }
    }
    if ((*(int *)(*(int *)((int)this + 4) + 0x4c) == 1) && (iVar1 == 0xb)) {
      iVar1 = (**(code **)(*(int *)this + 0x158))
                        (param_1,s_cch_xcock_n_s_2_5013e570,in_stack_00000018);
      if (iVar1 != 0) {
        return s_cch_xcock_n_s_2_5013e570;
      }
    }
  }
  return (char *)0x0;
}

