// rea decompile_all
// name: FUN_500ac280
// address: 0x500ac280
// body: available
// range: 0x500ac280-0x500ac3ac inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500ac280(uint param_1)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0e00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  *(undefined4 *)(param_1 + 300) = 0x40e00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41700000;
  if ((*(uint *)(param_1 + 0x1b8) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x2ec) = 999999;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(code **)(param_1 + 0x2cc) = FUN_500ac120;
  FUN_500b3870(param_1,&PTR_s_objects_light_lamp_hang_5014bf18,(char *)0x0,0);
  FUN_500af6d0(param_1);
  if ((*(uint *)(param_1 + 0x1b8) & 8) != 0) {
    FUN_500b3dc0(param_1,0x5014c5f0);
    FUN_500b3dc0(param_1,0x5014c5e0);
    (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
    *(undefined4 *)(param_1 + 0x2cc) = 0;
    iVar2 = (*DAT_5015cb28)(param_1);
    *(code **)(param_1 + 0x2c4) = FUN_500ac1a0;
    return iVar2;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x10) != 0) {
    iVar2 = (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
    *(code **)(param_1 + 0x2c4) = FUN_500ac1a0;
    return iVar2;
  }
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500ac090;
  uVar3 = FUN_50107636();
  fVar1 = (float)((int)uVar3 % 5) + DAT_5015ccdc;
  *(code **)(param_1 + 0x2c4) = FUN_500ac1a0;
  *(float *)(param_1 + 0x2b4) = fVar1;
  return (int)uVar3 / 5;
}

