// rea decompile_all
// name: FUN_500f2840
// address: 0x500f2840
// body: available
// range: 0x500f2840-0x500f28a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500f2840(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  uint uVar2;
  void *this;
  undefined4 uVar3;
  
  uVar2 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  this = (void *)FUN_500a5e10(&DAT_5015c79c,uVar2);
  piVar1 = *(int **)(*(int *)(param_1 + 0x74) + 0x354);
  uVar3 = FUN_500a51d0(this,*(uint *)(param_1 + 0x164));
  (**(code **)(*piVar1 + 0xd0))
            (param_1,s_abolt_hip_r_5013399c,s_items_ctf_flag_5014507c,param_3,
             s_to_abolt_hip_r_501516bc,uVar3,param_2,0x3f800000);
  return;
}

