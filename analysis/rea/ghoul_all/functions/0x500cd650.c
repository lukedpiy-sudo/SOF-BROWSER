// rea decompile_all
// name: FUN_500cd650
// address: 0x500cd650
// body: available
// range: 0x500cd650-0x500cd769 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500cd650(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x34) = 0x401000;
  *(undefined4 *)(param_1 + 0x19c) = 5;
  *(undefined4 *)(param_1 + 0x158) = 2;
  *(undefined4 *)(param_1 + 0x284) = 0x3c23d70a;
  *(undefined4 *)(param_1 + 0x11c) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x124) = 0xc2000000;
  *(undefined4 *)(param_1 + 0x128) = 0x41800000;
  *(undefined4 *)(param_1 + 300) = 0x41800000;
  *(undefined4 *)(param_1 + 0x130) = 0x42240000;
  *(undefined4 *)(param_1 + 0x27c) = 200;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 4;
  fVar1 = DAT_5015ccdc + 0.1;
  *(undefined4 *)(param_1 + 0x2f0) = 100;
  *(undefined4 *)(param_1 + 0x2ec) = 100;
  *(undefined4 *)(param_1 + 0x2fc) = 0;
  *(float *)(param_1 + 0x2b4) = fVar1;
  if (*(float *)(DAT_5015cc9c + 0x18) != 0.0) {
    *(undefined4 *)(param_1 + 0x2f0) = 1000;
    *(undefined4 *)(param_1 + 0x2ec) = 1000;
  }
  *(undefined4 *)(param_1 + 0x30c) = 2;
  if (((*(byte *)(param_1 + 0x1b8) & 0x10) == 0) && (DAT_5015ccdc < 1.0)) {
    FUN_500b1870(param_1);
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(undefined4 *)(param_1 + 0x304) = 0;
  (*DAT_5015cb28)(param_1);
  return;
}

