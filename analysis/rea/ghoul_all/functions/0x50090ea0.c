// rea decompile_all
// name: FUN_50090ea0
// address: 0x50090ea0
// body: available
// range: 0x50090ea0-0x50091148 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50090ea0(int param_1)

{
  float *pfVar1;
  float *pfVar2;
  uint uVar3;
  float fVar4;
  
  (*DAT_5015c9f4)(s_Ambient_Buttons_HiTech_Elevator1_50147854);
  pfVar2 = (float *)(param_1 + 0x228);
  pfVar1 = (float *)(param_1 + 0x10);
  FUN_500c3440(pfVar1,pfVar2);
  *(undefined4 *)(param_1 + 0x19c) = 3;
  *(undefined4 *)(param_1 + 0x158) = 3;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  if (*(float *)(param_1 + 0x21c) == 0.0) {
    *(undefined4 *)(param_1 + 0x21c) = 0x42200000;
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
  if (DAT_5015cbcc == 0) {
    DAT_5015cbcc = 4;
  }
  *(undefined4 *)(param_1 + 0x234) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(param_1 + 0xc);
  fVar4 = (ABS(*pfVar2) * *(float *)(param_1 + 0x14c) +
          ABS(*(float *)(param_1 + 0x22c)) * *(float *)(param_1 + 0x150) +
          ABS(*(float *)(param_1 + 0x230)) * *(float *)(param_1 + 0x154)) - (float)DAT_5015cbcc;
  *(float *)(param_1 + 0x240) = fVar4 * *pfVar2 + *(float *)(param_1 + 0x234);
  *(float *)(param_1 + 0x244) = fVar4 * *(float *)(param_1 + 0x22c) + *(float *)(param_1 + 0x238);
  *(float *)(param_1 + 0x248) = fVar4 * *(float *)(param_1 + 0x230) + *(float *)(param_1 + 0x23c);
  *(code **)(param_1 + 0x2c4) = FUN_50090c30;
  if (*(int *)(param_1 + 0x1c8) == 0) {
    *(code **)(param_1 + 0x2c8) = FUN_50090c30;
    *(float *)(param_1 + 0x2e8) = DAT_5015ccdc - 10.0;
  }
  uVar3 = *(uint *)(param_1 + 0x30);
  *(uint *)(param_1 + 0x30) = uVar3 | 8;
  if ((*(uint *)(param_1 + 0x1b8) & 2) != 0) {
    *(uint *)(param_1 + 0x30) =
         CONCAT22((short)(uVar3 >> 0x10),CONCAT11((char)(uVar3 >> 8),(char)(uVar3 | 8))) | 0x1000;
  }
  if (*(int *)(param_1 + 0x2ec) == 0) {
    if ((*(int *)(param_1 + 0x1c8) == 0) && ((*(uint *)(param_1 + 0x1b8) & 1) != 0)) {
      *(undefined1 **)(param_1 + 0x2c0) = &LAB_50090d50;
    }
  }
  else {
    *(int *)(param_1 + 0x2f0) = *(int *)(param_1 + 0x2ec);
    *(undefined1 **)(param_1 + 0x2d0) = &LAB_50090de0;
    *(undefined4 *)(param_1 + 0x30c) = 1;
  }
  *(undefined4 *)(param_1 + 0x424) = 1;
  *(undefined4 *)(param_1 + 0x414) = *(undefined4 *)(param_1 + 0x21c);
  *(undefined4 *)(param_1 + 0x410) = *(undefined4 *)(param_1 + 0x220);
  *(undefined4 *)(param_1 + 0x418) = *(undefined4 *)(param_1 + 0x224);
  *(undefined4 *)(param_1 + 0x420) = *(undefined4 *)(param_1 + 0x360);
  *(undefined4 *)(param_1 + 0x3d4) = *(undefined4 *)(param_1 + 0x234);
  *(undefined4 *)(param_1 + 0x3d8) = *(undefined4 *)(param_1 + 0x238);
  *(undefined4 *)(param_1 + 0x3dc) = *(undefined4 *)(param_1 + 0x23c);
  *(float *)(param_1 + 0x3e0) = *pfVar1;
  *(undefined4 *)(param_1 + 0x3e4) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 1000) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x3ec) = *(undefined4 *)(param_1 + 0x240);
  *(undefined4 *)(param_1 + 0x3f0) = *(undefined4 *)(param_1 + 0x244);
  *(undefined4 *)(param_1 + 0x3f4) = *(undefined4 *)(param_1 + 0x248);
  *(float *)(param_1 + 0x3f8) = *pfVar1;
  *(undefined4 *)(param_1 + 0x3fc) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x400) = *(undefined4 *)(param_1 + 0x18);
  (*DAT_5015cb28)(param_1);
  *(code **)(param_1 + 0x2b8) = FUN_50090e70;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

