// rea decompile_all
// name: FUN_500b2900
// address: 0x500b2900
// body: available
// range: 0x500b2900-0x500b2983 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b2900(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1200000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1900000;
  *(undefined4 *)(param_1 + 0x128) = 0x41200000;
  *(undefined4 *)(param_1 + 300) = 0x41200000;
  *(undefined4 *)(param_1 + 0x130) = 0x41a00000;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_500b2880;
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500b2800;
  FUN_500b3870(param_1,&PTR_s_objects_newyork_trashcan_5014d010,(char *)0x0,0);
  FUN_500b4160(param_1,PTR_s_trashcan_5014d014,0);
  DAT_501889ad = 1;
  DAT_5018893d = 0x79;
  DAT_5018893e = 0x79;
  return;
}

