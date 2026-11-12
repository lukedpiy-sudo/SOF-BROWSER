// rea decompile_all
// name: FUN_5001d790
// address: 0x5001d790
// body: available
// range: 0x5001d790-0x5001d867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001d790(void *this,int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  if (param_2 == 0) {
    if (*(int *)((int)this + 0x40) == 0) goto LAB_5001d85f;
LAB_5001d7f3:
    if (param_2 != 0) goto LAB_5001d85f;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar2 = (**(code **)(*piVar1 + 0x1c))(s_quake_ground2_50133438);
    if ((short)uVar2 != 0) {
      (**(code **)(**(int **)(param_1 + 0x164) + 0x68))(&DAT_501590bc,uVar2,5);
    }
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar3 = s_quake_ground_5012f83c;
  }
  else {
    if (*(int *)((int)this + 0x40) != 0) goto LAB_5001d7f3;
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    uVar2 = (**(code **)(*piVar1 + 0x1c))(s_quake_ground_5012f83c);
    if ((short)uVar2 != 0) {
      (**(code **)(**(int **)(param_1 + 0x164) + 0x68))(&DAT_501590bc,uVar2,5);
    }
    piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    pcVar3 = s_quake_ground2_50133438;
  }
  uVar2 = (**(code **)(*piVar1 + 0x1c))(pcVar3);
  if ((short)uVar2 != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 100))(&DAT_501590bc,uVar2,5);
  }
LAB_5001d85f:
  *(int *)((int)this + 0x40) = param_2;
  return;
}

