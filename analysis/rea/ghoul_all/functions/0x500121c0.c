// rea decompile_all
// name: FUN_500121c0
// address: 0x500121c0
// body: available
// range: 0x500121c0-0x50012232 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 __thiscall
FUN_500121c0(void *this,int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (*(int **)(param_1 + 0x164) != (int *)0x0) {
    iVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    if (iVar1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar3 = (**(code **)(*piVar2 + 0x1c))(param_2);
      if ((short)uVar3 != 0) {
        uVar3 = (**(code **)(*(int *)this + 0xd4))
                          (param_1,uVar3,param_2,param_3,param_4,param_5,param_6,param_7);
        return uVar3;
      }
    }
  }
  return 0;
}

