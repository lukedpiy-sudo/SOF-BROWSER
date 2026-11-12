// rea decompile_all
// name: FUN_500c1fe0
// address: 0x500c1fe0
// body: available
// range: 0x500c1fe0-0x500c211a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int __cdecl FUN_500c1fe0(uint param_1)

{
  float fVar1;
  undefined2 uVar2;
  uint uVar3;
  int iVar4;
  undefined2 uVar5;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1700000;
  *(undefined4 *)(param_1 + 0x120) = 0xc2040000;
  *(undefined4 *)(param_1 + 0x124) = 0xc2c60000;
  *(undefined4 *)(param_1 + 0x128) = 0x41d80000;
  *(undefined4 *)(param_1 + 300) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
  FUN_500b3870(param_1,&PTR_s_objects_uganda_gutted_cow_50150f40,(char *)0x0,0);
  *(undefined4 *)(param_1 + 0x11c) = 0xc1700000;
  *(undefined4 *)(param_1 + 0x120) = 0xc2040000;
  *(undefined4 *)(param_1 + 0x124) = 0xc2c60000;
  *(undefined4 *)(param_1 + 0x128) = 0x41d80000;
  *(undefined4 *)(param_1 + 300) = 0x41c80000;
  *(undefined4 *)(param_1 + 0x130) = 0x3f800000;
  (*DAT_5015cb28)(param_1);
  if ((*(uint *)(param_1 + 0x1b8) & 4) != 0) {
    *(code **)(param_1 + 0x2b8) = FUN_500c1e20;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 2.0;
  }
  if ((*(uint *)(param_1 + 0x1b8) & 8) != 0) {
    uVar5 = 0;
    uVar3 = param_1;
    uVar2 = (*DAT_5015c9f8)(s_environ_bloodrain_501472fc,param_1,0,0);
    FUN_50085530(uVar2,uVar3,uVar5);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 0x10) != 0) {
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_500c1e50;
    uVar3 = FUN_50107636();
    fVar1 = (float)((int)uVar3 % 10) + DAT_5015ccdc;
    *(undefined1 **)(param_1 + 0x2cc) = &LAB_500c1eb0;
    *(float *)(param_1 + 0x2b4) = fVar1;
    return (int)uVar3 / 10;
  }
  iVar4 = (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500c1eb0;
  return iVar4;
}

