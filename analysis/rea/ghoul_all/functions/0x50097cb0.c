// rea decompile_all
// name: FUN_50097cb0
// address: 0x50097cb0
// body: available
// range: 0x50097cb0-0x50097d81 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50097cb0(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc2a80000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1e80000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1c00000;
  *(undefined4 *)(param_1 + 0x128) = 0x42a80000;
  *(undefined4 *)(param_1 + 300) = 0x41e80000;
  *(undefined4 *)(param_1 + 0x130) = 0x42380000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(code **)(param_1 + 0x2cc) = FUN_50097b60;
  *(code **)(param_1 + 0x2c4) = FUN_50097c40;
  *(code **)(param_1 + 0x2c8) = FUN_50097c40;
  *(undefined1 **)(param_1 + 0x2c0) = &LAB_50097c70;
  FUN_500b3870(param_1,&PTR_s_objects_generic_car_rolls_50148240,(char *)0x0,0);
  (**(code **)(**(int **)(param_1 + 0x164) + 0x4c))(DAT_5015ccdc);
  *(undefined4 *)(param_1 + 0x318) = 0;
  DAT_5018898a = 1;
  (*DAT_5015c9f4)(s_Ambient_Models_Alarm_CarDisarm_w_5014ab9c);
  (*DAT_5015c9f4)(s_Ambient_Models_Alarm_CarAlarm_wa_5014abc0);
                    /* WARNING: Could not recover jumptable at 0x50097d7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

