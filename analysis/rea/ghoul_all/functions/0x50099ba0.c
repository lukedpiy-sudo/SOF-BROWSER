// rea decompile_all
// name: FUN_50099ba0
// address: 0x50099ba0
// body: available
// range: 0x50099ba0-0x50099c56 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50099ba0(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1400000;
  *(undefined4 *)(param_1 + 0x128) = 0x40800000;
  *(undefined4 *)(param_1 + 300) = 0x41000000;
  *(undefined4 *)(param_1 + 0x130) = 0x41400000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_50099b00;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_50099940;
  *(undefined1 **)(param_1 + 0x2c8) = &LAB_50099940;
  FUN_500b3870(param_1,&PTR_s_objects_generic_fire_extinguishe_501485d8,(char *)0x0,0);
  FUN_500b2fd0(param_1,PTR_s_objects_generic_fire_extinguishe_501485d8,(int)PTR_s_exting_501485dc,
               PTR_s_exting_501485f0,s_exting_50149b2c,0);
  (*DAT_5015c9f4)(s_Impact_Exting_ExtingLeak_wav_5014adf4);
                    /* WARNING: Could not recover jumptable at 0x50099c51. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

