// rea decompile_all
// name: FUN_500113d0
// address: 0x500113d0
// body: available
// range: 0x500113d0-0x50011449 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_500113d0(int param_1,int param_2)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined1 auStack_64 [100];
  
  if ((*(int **)(param_1 + 0x164) != (int *)0x0) && (param_2 != 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    iVar2 = FUN_500a5e10(&DAT_5015c79c,uVar1);
    in_EAX = 0;
    if (iVar2 != 0) {
      FUN_500fe2b0();
      piVar3 = (int *)(**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
      uVar1 = (**(code **)(*piVar3 + 0xc))(auStack_64);
      return uVar1;
    }
  }
  return in_EAX & 0xffff0000;
}

