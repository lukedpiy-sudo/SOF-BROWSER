// rea decompile_all
// name: FUN_500ac120
// address: 0x500ac120
// body: available
// range: 0x500ac120-0x500ac191 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ac120(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  
  if (*(int *)(param_1 + 0x164) != 0) {
    if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
      pcVar4 = &DAT_5014c5cc;
    }
    else {
      pcVar4 = s_shot_off_5014c5d4;
    }
    FUN_500b4160(param_1,pcVar4,0);
    uVar1 = (**(code **)(**(int **)(param_1 + 0x164) + 0x88))();
    iVar2 = FUN_500a5e10(&DAT_5015c79c,uVar1);
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x24) + 0x30))(&DAT_5012fe04);
    if (((short)uVar3 != 0) && (*(int **)(param_1 + 0x164) != (int *)0x0)) {
      (**(code **)(**(int **)(param_1 + 0x164) + 0x5c))(&DAT_5015c88c,uVar3);
    }
  }
  return;
}

