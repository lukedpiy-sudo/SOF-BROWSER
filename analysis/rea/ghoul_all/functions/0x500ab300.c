// rea decompile_all
// name: FUN_500ab300
// address: 0x500ab300
// body: available
// range: 0x500ab300-0x500ab3e2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ab300(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x128) = 0x40c00000;
  *(undefined4 *)(param_1 + 300) = 0x40c00000;
  *(undefined4 *)(param_1 + 0x130) = 0x40a00000;
  FUN_500b3870(param_1,&PTR_s_objects_light_emergency_blue_5014bd60,(char *)0x0,0);
  FUN_500af6d0(param_1);
  (*DAT_5015c9f4)(s_Ambient_Models_Alarm_alarm1_wav_5014c530);
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    uVar1 = (*DAT_5015c9f4)(s_Ambient_Models_Alarm_alarm1_wav_5014c530);
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    *(undefined4 *)(param_1 + 0x40) = 0xf8;
    *(code **)(param_1 + 0x2b8) = FUN_500ab290;
    uVar2 = FUN_50107636();
    *(float *)(param_1 + 0x2b4) = (float)((int)uVar2 % 5) * 0.1 + DAT_5015ccdc;
  }
  else {
    (*DAT_5015c9f4)();
    FUN_500b4160(param_1,s_emergency_off_5014c520,0);
  }
  FUN_500b34f0(param_1);
  *(code **)(param_1 + 0x2c4) = FUN_500ab0d0;
  return;
}

