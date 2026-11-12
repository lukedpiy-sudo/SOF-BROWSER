// rea decompile_all
// name: FUN_500905d0
// address: 0x500905d0
// body: available
// range: 0x500905d0-0x50090858 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500905d0(int param_1)

{
  float fVar1;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x158) = 3;
  *(undefined4 *)(param_1 + 0x19c) = 2;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined1 **)(param_1 + 700) = &LAB_50090180;
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x41a00000;
  }
  else {
    *(float *)(param_1 + 0x21c) = *(float *)(param_1 + 0x21c) * 0.1;
  }
  if (*(float *)(param_1 + 0x220) == 0.0) {
    *(undefined4 *)(param_1 + 0x220) = 0x40a00000;
  }
  else {
    *(float *)(param_1 + 0x220) = *(float *)(param_1 + 0x220) * 0.1;
  }
  if (*(float *)(param_1 + 0x224) == 0.0) {
    *(undefined4 *)(param_1 + 0x224) = 0x40a00000;
  }
  else {
    *(float *)(param_1 + 0x224) = *(float *)(param_1 + 0x224) * 0.1;
  }
  if (*(int *)(param_1 + 0x310) == 0) {
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  if (DAT_5015cbcc == 0) {
    DAT_5015cbcc = 8;
  }
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0xc);
  if (DAT_5015cbd4 == 0) {
    fVar1 = (*(float *)(param_1 + 0x130) - *(float *)(param_1 + 0x124)) - (float)DAT_5015cbcc;
  }
  else {
    fVar1 = (float)DAT_5015cbd4;
  }
  *(code **)(param_1 + 0x2c4) = FUN_500902e0;
  *(float *)(param_1 + 0x248) = *(float *)(param_1 + 0x248) - fVar1;
  FUN_50090420(param_1);
  if (*(int *)(param_1 + 0x1c8) == 0) {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_1 + 0x248);
    (*DAT_5015cb28)(param_1);
    *(undefined4 *)(param_1 + 0x424) = 1;
  }
  else {
    *(undefined4 *)(param_1 + 0x424) = 2;
  }
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x248);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x18);
  *(code **)(param_1 + 0x2b8) = FUN_50090580;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

