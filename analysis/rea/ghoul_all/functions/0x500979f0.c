// rea decompile_all
// name: FUN_500979f0
// address: 0x500979f0
// body: available
// range: 0x500979f0-0x50097aa4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500979f0(uint param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc2b60000;
  *(undefined4 *)(param_1 + 0x120) = 0xc2040000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1e00000;
  *(undefined4 *)(param_1 + 0x128) = 0x42b60000;
  *(undefined4 *)(param_1 + 300) = 0x42040000;
  *(undefined4 *)(param_1 + 0x130) = 0x41f00000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = &DAT_5014ab74;
  }
  else if (*(int *)(param_1 + 0x2c) == 2) {
    pcVar1 = &DAT_5014ab7c;
  }
  else {
    pcVar1 = &DAT_50149e74;
  }
  FUN_500b3870(param_1,&PTR_s_objects_generic_car_european_501481f0,pcVar1,0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x158) = 0;
    if (*(int **)(param_1 + 0x164) != (int *)0x0) {
      (**(code **)(**(int **)(param_1 + 0x164) + 0x10))(0,DAT_5015ccdc);
    }
    *(undefined1 **)(param_1 + 0x2c4) = &LAB_5009a330;
  }
  return;
}

