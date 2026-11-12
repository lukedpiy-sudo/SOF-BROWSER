// rea decompile_all
// name: FUN_50096a40
// address: 0x50096a40
// body: available
// range: 0x50096a40-0x50096af9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50096a40(uint param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xbf800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc25c0000;
  *(undefined4 *)(param_1 + 0x124) = 0xc2820000;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0x425c0000;
  *(undefined4 *)(param_1 + 0x130) = 0x42820000;
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 1) == 0) {
    uVar1 = uVar1 | 1;
  }
  else {
    uVar1 = uVar1 & 0xfffffffe;
  }
  *(uint *)(param_1 + 0x1b8) = uVar1;
  *(uint *)(param_1 + 0x1b8) = uVar1 | 2;
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500969e0;
  FUN_500b3870(param_1,&PTR_s_objects_generic_blinds_50148088,(char *)0x0,0);
  FUN_500b2fd0(param_1,PTR_s_objects_generic_blinds_50148088,(int)PTR_s_blinds_5014808c,
               PTR_s_blinds_501480a0,s_blinds_50149f3c,0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  }
  return;
}

