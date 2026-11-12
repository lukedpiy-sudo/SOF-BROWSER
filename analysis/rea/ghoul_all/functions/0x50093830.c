// rea decompile_all
// name: FUN_50093830
// address: 0x50093830
// body: available
// range: 0x50093830-0x50093c18 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50093830(int param_1)

{
  uint uVar1;
  float fVar2;
  uint uVar3;
  
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined4 *)(param_1 + 0x230) = 0;
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 0x40) == 0) {
    if ((char)uVar1 < '\0') {
      *(undefined4 *)(param_1 + 0x228) = 0x3f800000;
      if ((uVar1 & 0x4000) != 0) goto LAB_500938b3;
      uVar3 = *(uint *)(param_1 + 0x118) | 0x10;
    }
    else {
      *(undefined4 *)(param_1 + 0x22c) = 0x3f800000;
      if ((uVar1 & 0x4000) != 0) goto LAB_500938b3;
      uVar3 = *(uint *)(param_1 + 0x118) | 0x20;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x230) = 0x3f800000;
    if ((uVar1 & 0x4000) != 0) goto LAB_500938b3;
    uVar3 = *(uint *)(param_1 + 0x118) | 8;
  }
  *(uint *)(param_1 + 0x118) = uVar3;
LAB_500938b3:
  if ((uVar1 & 2) != 0) {
    *(float *)(param_1 + 0x228) = -*(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x22c) = -*(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x230) = -*(float *)(param_1 + 0x230);
  }
  if (DAT_5015cbd0 == 0) {
    DAT_5015cbd0 = 0x5a;
  }
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x18);
  fVar2 = (float)DAT_5015cbd0;
  *(float *)(param_1 + 0x240) = fVar2 * *(float *)(param_1 + 0x228) + *(float *)(param_1 + 0x10);
  *(float *)(param_1 + 0x244) = fVar2 * *(float *)(param_1 + 0x22c) + *(float *)(param_1 + 0x14);
  *(float *)(param_1 + 0x248) = fVar2 * *(float *)(param_1 + 0x230) + *(float *)(param_1 + 0x18);
  fVar2 = (float)DAT_5015cbd0;
  *(undefined4 *)(param_1 + 0x19c) = 2;
  *(float *)(param_1 + 0x41c) = fVar2;
  *(undefined4 *)(param_1 + 0x158) = 3;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined1 **)(param_1 + 700) = &LAB_500930b0;
  *(code **)(param_1 + 0x2c4) = FUN_50092960;
  if ((*(int *)(param_1 + 0x1c8) == 0) || ((*(uint *)(param_1 + 0x1b8) & 0x2000) != 0)) {
    *(code **)(param_1 + 0x2c8) = FUN_50092a80;
    *(float *)(param_1 + 0x2e8) = DAT_5015ccdc - 10.0;
  }
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x42c80000;
  }
  if (*(float *)(param_1 + 0x220) == 0.0) {
    *(undefined4 *)(param_1 + 0x220) = *(undefined4 *)(param_1 + 0x21c);
  }
  if (*(float *)(param_1 + 0x224) == 0.0) {
    *(undefined4 *)(param_1 + 0x224) = *(undefined4 *)(param_1 + 0x21c);
  }
  if (*(float *)(param_1 + 0x360) == 0.0) {
    *(undefined4 *)(param_1 + 0x360) = 0x40400000;
  }
  if (*(int *)(param_1 + 0x310) == 0) {
    *(undefined4 *)(param_1 + 0x310) = 2;
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_1 + 0x240);
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x244);
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(param_1 + 0x234);
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(param_1 + 0x238);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(param_1 + 0x23c);
    *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 0x14);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0x18);
    *(float *)(param_1 + 0x228) = -*(float *)(param_1 + 0x228);
    *(float *)(param_1 + 0x22c) = -*(float *)(param_1 + 0x22c);
    *(float *)(param_1 + 0x230) = -*(float *)(param_1 + 0x230);
  }
  if (*(int *)(param_1 + 0x2ec) != 0) {
    *(undefined4 *)(param_1 + 0x30c) = 1;
    *(undefined1 **)(param_1 + 0x2d0) = &LAB_50093290;
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2ec);
  }
  if ((*(int *)(param_1 + 0x1c8) != 0) &&
     ((*(int *)(param_1 + 0x1ac) != 0 || (*(short *)(param_1 + 0x1b0) != 0)))) {
    (*DAT_5015c9f4)(s_misc_talk_wav_50147a3c);
    *(code **)(param_1 + 0x2c0) = FUN_500932e0;
  }
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x424) = 1;
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3e0) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x23c);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(param_1 + 0x3f8) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x248);
  if (*(int *)(param_1 + 0x1d8) == 0) {
    *(int *)(param_1 + 0x344) = param_1;
  }
  (*DAT_5015cb28)(param_1);
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_50093380;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

