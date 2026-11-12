// rea decompile_all
// name: FUN_500ab760
// address: 0x500ab760
// body: available
// range: 0x500ab760-0x500ab7fc inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ab760(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc0e00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1b00000;
  *(undefined4 *)(param_1 + 0x128) = 0x40e00000;
  *(undefined4 *)(param_1 + 300) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41b00000;
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500ab690;
  if ((*(uint *)(param_1 + 0x1b8) & 2) == 0) {
    *(undefined4 *)(param_1 + 0x2ec) = 999999;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  FUN_500b3870(param_1,&PTR_s_objects_light_lantern_5014bdd8,(char *)0x0,0);
  FUN_500af6d0(param_1);
  (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  *(code **)(param_1 + 0x2c4) = FUN_500ab6c0;
  return;
}

