// rea decompile_all
// name: FUN_50006b50
// address: 0x50006b50
// body: available
// range: 0x50006b50-0x50006c04 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __thiscall
FUN_50006b50(void *this,int param_1,int param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if ((0 < *(int *)(param_1 + 0x2ec)) && (*(int *)((int)this + 0x22c) != 0)) {
    if (*(int *)(param_2 + 0x74) != 0) {
      iVar2 = (**(code **)(*(int *)this + 0x150))();
      if (iVar2 != 0) {
        (*DAT_5015cab0)(param_2,0x601);
      }
    }
    uVar4 = 0;
    uVar3 = 2;
    iVar2 = (**(code **)(**(int **)((int)this + 0x22c) + 0x14))
                      (param_1,param_3,param_4,param_5,&DAT_5018bf0c,&DAT_5018bf0c,2,9,0,0);
    if (iVar2 != 0) {
      iVar1 = *(int *)this;
      uVar3 = (**(code **)(iVar1 + 0xa0))
                        (0,*(undefined4 *)((int)this + 0x18c),iVar2,param_1,uVar3,uVar4,param_5,
                         0x41200000,1,param_1);
      (**(code **)(iVar1 + 0x114))(uVar3);
    }
  }
  return;
}

