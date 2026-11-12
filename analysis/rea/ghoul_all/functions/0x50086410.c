// rea decompile_all
// name: FUN_50086410
// address: 0x50086410
// body: available
// range: 0x50086410-0x50086468 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086410(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc1e00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1e00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1a80000;
  *(undefined4 *)(param_1 + 0x128) = 0x41e00000;
  *(undefined4 *)(param_1 + 300) = 0x41e00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41a80000;
  FUN_500b3870(param_1,&PTR_s_objects_bosnia_tank_jack_501461a0,(char *)0x0,0);
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_50086350;
  return;
}

