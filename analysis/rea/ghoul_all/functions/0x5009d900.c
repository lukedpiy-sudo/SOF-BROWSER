// rea decompile_all
// name: FUN_5009d900
// address: 0x5009d900
// body: available
// range: 0x5009d900-0x5009d98e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5009d900(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc1000000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0000000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x128) = 0x41000000;
  *(undefined4 *)(param_1 + 300) = 0x40000000;
  *(undefined4 *)(param_1 + 0x130) = 0x40800000;
  FUN_5009d730(param_1);
  FUN_500b3870(param_1,&PTR_s_objects_generic_security_camera__50148a88,(char *)0x0,0x501497e0);
  FUN_500b34f0(param_1);
  FUN_500b4160(param_1,PTR_s_camera_50148a8c,1);
  (*DAT_5015c9f4)(s_Ambient_Models_Camera_Alarm_wav_5014afcc);
                    /* WARNING: Could not recover jumptable at 0x5009d989. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f4)();
  return;
}

