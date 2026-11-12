// rea decompile_all
// name: FUN_50011e40
// address: 0x50011e40
// body: available
// range: 0x50011e40-0x50011ec9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_50011e40(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  uint uVar4;
  
  piVar1 = *(int **)(param_1 + 0x164);
  piVar2 = (int *)(**(code **)(*piVar1 + 0x88))();
  uVar3 = (**(code **)(*piVar2 + 0x40))(param_3);
  if ((short)uVar3 == 0) {
    return 0;
  }
  piVar2 = (int *)(**(code **)(*piVar1 + 0x88))();
  uVar4 = (**(code **)(*piVar2 + 0x50))(uVar3,param_3,0);
  if ((short)uVar4 == 0) {
    return uVar4 & 0xff;
  }
  (**(code **)(*piVar1 + 0x2c))(uVar3,uVar4,0);
  return 1;
}

