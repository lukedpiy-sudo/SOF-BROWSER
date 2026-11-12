// rea decompile_all
// name: FUN_5008d7b0
// address: 0x5008d7b0
// body: available
// range: 0x5008d7b0-0x5008d8a1 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008d7b0(int param_1)

{
  float fVar1;
  float10 fVar2;
  
  *(undefined4 *)(param_1 + 0x19c) = 0;
  if (*(int *)(param_1 + 0x158) != 1) {
    *(undefined4 *)(param_1 + 0x158) = 0;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0x2030003;
  *(undefined4 *)(param_1 + 0x11c) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0e00000;
  *(undefined4 *)(param_1 + 0x128) = 0x40a00000;
  *(undefined4 *)(param_1 + 300) = 0x40a00000;
  *(undefined4 *)(param_1 + 0x130) = 0x41400000;
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_500b2c20(param_1);
  (*DAT_5015cb28)(param_1);
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_5008d760;
  *(code **)(param_1 + 0x2c4) = FUN_5008d700;
  *(undefined4 *)(param_1 + 0x2b4) = 0;
  if (*(float *)(param_1 + 0x368) == 0.0) {
    fVar1 = 10.0;
  }
  else {
    fVar1 = *(float *)(param_1 + 0x368);
  }
  *(float *)(param_1 + 0x368) = fVar1;
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    fVar2 = (float10)(*DAT_5015cb20)(fVar1 * 0.5,fVar1 * 1.5);
    *(float *)(param_1 + 0x2b4) = (float)(fVar2 + (float10)DAT_5015ccdc);
    return;
  }
  return;
}

