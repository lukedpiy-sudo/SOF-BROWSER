// rea decompile_all
// name: FUN_5009de30
// address: 0x5009de30
// body: available
// range: 0x5009de30-0x5009df05 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_5009de30(uint param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1300000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1400000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x128) = 0x41300000;
  *(undefined4 *)(param_1 + 300) = 0x41400000;
  *(undefined4 *)(param_1 + 0x130) = 0x40e00000;
  if ((*(int *)(param_1 + 0x2c) == 1) || (pcVar1 = &DAT_50149780, *(int *)(param_1 + 0x2c) != 2)) {
    pcVar1 = s_sinkclean_5014b060;
  }
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_5009dd80;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_5009dba0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x200;
  FUN_500b3870(param_1,&PTR_s_objects_generic_sink_50148b28,(char *)0x0,0);
  FUN_500b2fd0(param_1,PTR_s_objects_generic_sink_50148b28,(int)PTR_DAT_50148b2c,PTR_DAT_50148b40,
               pcVar1,0);
  (*DAT_5015c9f4)(s_Ambient_Gen_WtrFX_SprayBig_wav_5014ae40);
  (*DAT_5015c9f4)(s_Impact_Break_Ceramic_wav_5014b038);
                    /* WARNING: Could not recover jumptable at 0x5009df00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

