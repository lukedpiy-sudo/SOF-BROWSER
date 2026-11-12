// rea decompile_all
// name: FUN_500af990
// address: 0x500af990
// body: available
// range: 0x500af990-0x500afaae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500af990(int param_1)

{
  uint uVar1;
  
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  *(float *)(param_1 + 0x11c) = *(float *)(param_1 + 0x11c) + 1.0;
  *(float *)(param_1 + 0x120) = *(float *)(param_1 + 0x120) + 1.0;
  *(float *)(param_1 + 0x124) = *(float *)(param_1 + 0x124) + 1.0;
  *(float *)(param_1 + 0x128) = *(float *)(param_1 + 0x128) - 1.0;
  *(float *)(param_1 + 300) = *(float *)(param_1 + 300) - 1.0;
  *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x130) - 1.0;
  if (*(int *)(param_1 + 0x310) == 0) {
    *(undefined4 *)(param_1 + 0x310) = 100;
  }
  uVar1 = *(uint *)(param_1 + 0x1b8);
  *(undefined4 *)(param_1 + 0x19c) = 2;
  if (uVar1 == 0) {
    *(undefined4 *)(param_1 + 0x158) = 3;
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_500af920;
    *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.2;
  }
  else {
    *(undefined4 *)(param_1 + 0x158) = 0;
    *(code **)(param_1 + 0x2c4) = FUN_500af940;
    *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
  }
  if ((uVar1 & 2) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
  }
  if ((uVar1 & 4) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
  }
  *(undefined4 *)(param_1 + 0x15c) = 0x2020003;
  (*DAT_5015cb28)(param_1);
  return;
}

