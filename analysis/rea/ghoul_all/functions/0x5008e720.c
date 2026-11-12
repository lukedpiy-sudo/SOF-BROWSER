// rea decompile_all
// name: FUN_5008e720
// address: 0x5008e720
// body: available
// range: 0x5008e720-0x5008e81a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5008e720(int param_1)

{
  *(undefined4 *)(param_1 + 0x158) = 1;
  *(undefined4 *)(param_1 + 0x19c) = 0;
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
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x2ec) = 100;
  *(code **)(param_1 + 0x2c4) = FUN_50096c00;
  *(char **)(param_1 + 0x1b4) = s_environ_inferno_50147110;
  *(code **)(param_1 + 0x2c0) = FUN_50096c00;
  *(float *)(param_1 + 4) = (*(float *)(param_1 + 0x140) + *(float *)(param_1 + 0x134)) * 0.5;
  *(float *)(param_1 + 8) = (*(float *)(param_1 + 0x144) + *(float *)(param_1 + 0x138)) * 0.5;
  *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 0x148) + *(float *)(param_1 + 0x13c)) * 0.5;
                    /* WARNING: Could not recover jumptable at 0x5008e815. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

