// rea decompile_all
// name: FUN_5009e440
// address: 0x5009e440
// body: available
// range: 0x5009e440-0x5009e4d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5009e440(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1400000;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  *(undefined4 *)(param_1 + 300) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41400000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_5009e280;
  FUN_500b3870(param_1,&PTR_s_objects_generic_speaker_50148ba0,(char *)0x0,0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    FUN_500b3dc0(param_1,0x5014b09c);
    *(undefined4 *)(param_1 + 0x124) = 0xc0a00000;
  }
  DAT_501889ab = 1;
  return;
}

