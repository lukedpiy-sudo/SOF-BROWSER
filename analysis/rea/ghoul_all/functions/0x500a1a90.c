// rea decompile_all
// name: FUN_500a1a90
// address: 0x500a1a90
// body: available
// range: 0x500a1a90-0x500a1c11 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500a1a90(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0a00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1100000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1100000;
  *(undefined4 *)(param_1 + 0x128) = 0x40c00000;
  *(undefined4 *)(param_1 + 300) = 0x41100000;
  *(undefined4 *)(param_1 + 0x130) = 0x40e00000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(code **)(param_1 + 0x2cc) = FUN_500a17b0;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500a1a70;
  *(code **)(param_1 + 0x2d0) = FUN_500a0b00;
  FUN_500b3870(param_1,&PTR_s_objects_generic_tv_wall_50148fb0,(char *)0x0,0);
  FUN_500b2fd0(param_1,PTR_s_objects_generic_tv_wall_50148fb0,(int)PTR_s_tv_wall_50148fb4,
               PTR_s_tv_wall_50148fc8,s_tv_wall_50149478,0);
  if (*(int *)(param_1 + 0x3bc) == 0) {
    FUN_500b3dc0(param_1,0x5014b238);
    FUN_500b3dc0(param_1,0x5014b230);
    FUN_500b3dc0(param_1,0x5014b228);
    FUN_500b3dc0(param_1,0x5014b220);
  }
  else {
    FUN_500b3dc0(param_1,0x5014b1e0);
    FUN_500b3dc0(param_1,0x501464e4);
    uVar3 = (*DAT_5015c9f4)(s_ambient_models_Panel_Panel1_wav_5014b240);
    *(undefined4 *)(param_1 + 0x3c) = uVar3;
    *(undefined4 *)(param_1 + 0x40) = 0xf8;
  }
  uVar3 = 0x3fc00000;
  uVar2 = param_1;
  FUN_500b34f0(param_1);
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_500a1a50;
  uVar1 = FUN_50107636();
  *(float *)(param_1 + 0x2b4) = (float)((int)uVar1 % 5) * 0.1 + DAT_5015ccdc;
  DAT_501889ab = 1;
  DAT_501889aa = 1;
  DAT_50188928._1_1_ = 0x79;
  DAT_5018892c = 0x79;
  (*DAT_5015c9f4)(s_Impact_Glassbreak_Monitor_wav_5014adb8,uVar2,uVar3);
  (*DAT_5015c9f4)(s_Ambient_Gen_Electric_buzz_wav_5014ad98);
                    /* WARNING: Could not recover jumptable at 0x500a1c0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

