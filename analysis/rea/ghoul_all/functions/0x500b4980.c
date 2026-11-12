// rea decompile_all
// name: FUN_500b4980
// address: 0x500b4980
// body: available
// range: 0x500b4980-0x500b4a36 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __cdecl FUN_500b4980(int param_1,undefined4 param_2,undefined4 param_3)

{
  short sVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  int unaff_retaddr;
  undefined4 in_stack_00000030;
  
  if (*(int **)(param_1 + 0x164) == (int *)0x0) {
    return 0;
  }
  uVar2 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
  pvVar3 = (void *)FUN_500a5e10(&DAT_5015c79c,uVar2);
  if ((pvVar3 == (void *)0x0) || (*(int **)((int)pvVar3 + 0x24) == (int *)0x0)) {
    (*DAT_5015ca24)(s_ERROR__SimpleModelFindBolt___can_5014d448,param_3);
    return 0;
  }
  sVar1 = (**(code **)(**(int **)((int)pvVar3 + 0x24) + 0x1c))(in_stack_00000030);
  if (sVar1 == 0) {
    (*DAT_5015ca24)(s_ERROR__SimpleModelFindBolt___can_5014d47c,in_stack_00000030);
    return 0;
  }
  pvVar3 = (void *)FUN_500a51d0(pvVar3,*(uint *)(unaff_retaddr + 0x164));
  if (pvVar3 != (void *)0x0) {
    uVar4 = FUN_500a4250(pvVar3,sVar1);
    return uVar4;
  }
  (*DAT_5015ca24)(s_ERROR__SimpleModelFindBolt___can_5014d4b0,param_2);
  return 0;
}

