// rea decompile_all
// name: FUN_5001c580
// address: 0x5001c580
// body: available
// range: 0x5001c580-0x5001c6ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall FUN_5001c580(void *this,int param_1,int param_2)

{
  void *this_00;
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_44 [52];
  undefined4 uStack_10;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
  iVar3 = *(int *)(param_2 + 8);
  while ((iVar3 != 0x14 && (this_00 != (void *)0x0))) {
    if (*(int *)(param_2 + 0xc) == 1) {
      piVar1 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar2 = (**(code **)(*piVar1 + 0x1c))();
      if (((short)uVar2 != 0) && (iVar3 = FUN_500a4250(this_00,(short)uVar2), iVar3 != 0)) {
        uStack_4 = 0;
        (**(code **)(**(int **)(param_1 + 0x164) + 200))(DAT_5015ccdc,auStack_44,uVar2,5);
        (**(code **)(*(int *)this + 0xe4))(param_1,uStack_10,&stack0xffffff9c,uStack_8,1,0);
      }
    }
    else if (*(int *)(param_2 + 0xc) == 2) {
      (**(code **)(*(int *)this + 0x140))(param_1,param_2);
    }
    param_2 = (**(code **)(*(int *)this + 0x138))();
    this_00 = (void *)FUN_500a5820(&DAT_5015c79c,*(int **)(param_1 + 0x164));
    iVar3 = *(int *)(param_2 + 8);
  }
  return;
}

