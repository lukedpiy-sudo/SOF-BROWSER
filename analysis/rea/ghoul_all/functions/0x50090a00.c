// rea decompile_all
// name: FUN_50090a00
// address: 0x50090a00
// body: available
// range: 0x50090a00-0x50090b4c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090a00(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x158) = 3;
  if ((*(byte *)(param_1 + 0x1b8) & 0x20) == 0) {
    *(undefined4 *)(param_1 + 0x19c) = 2;
  }
  else {
    *(undefined4 *)(param_1 + 0x19c) = 3;
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
    }
    else {
      *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
  }
  if ((uVar1 & 2) != 0) {
    *(float *)(param_1 + 0x228) = -*(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x22c) = -*(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x230) = -*(float *)(param_1 + 0x230);
  }
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x42c80000;
  }
  if (*(int *)(param_1 + 0x310) == 0) {
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  *(code **)(param_1 + 0x2c4) = FUN_50090910;
  if (*(int *)(param_1 + 0x310) != 0) {
    *(undefined1 **)(param_1 + 700) = &LAB_50090860;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    FUN_50090910(param_1);
  }
  if ((*(uint *)(param_1 + 0x1b8) & 0x40) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
  }
  if ((char)*(uint *)(param_1 + 0x1b8) < '\0') {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
  }
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  (*DAT_5015cb28)(param_1);
  *(code **)(param_1 + 0x2b8) = FUN_500909d0;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

