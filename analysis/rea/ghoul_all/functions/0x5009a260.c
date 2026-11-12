// rea decompile_all
// name: FUN_5009a260
// address: 0x5009a260
// body: available
// range: 0x5009a260-0x5009a321 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_5009a260(uint param_1)

{
  char *pcVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc2820000;
  *(undefined4 *)(param_1 + 0x124) = 0xc3d08000;
  *(undefined4 *)(param_1 + 0x128) = 0x40800000;
  *(undefined4 *)(param_1 + 300) = 0x42180000;
  *(undefined4 *)(param_1 + 0x130) = 0x42100000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = s_flag_pole2_5014ae68;
  }
  else if (*(int *)(param_1 + 0x2c) == 2) {
    pcVar1 = s_flag_pole3_5014ae74;
  }
  else {
    pcVar1 = s_flag_pole_50149abc;
  }
  FUN_500b3870(param_1,&PTR_s_objects_generic_flag_pole_50148678,pcVar1,0);
  (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  *(code **)(param_1 + 0x2b8) = FUN_5009a1f0;
  uVar2 = FUN_50107636();
  *(float *)(param_1 + 0x2b4) = (float)((int)uVar2 % 5) * 0.1 + DAT_5015ccdc;
  return (int)uVar2 / 5;
}

