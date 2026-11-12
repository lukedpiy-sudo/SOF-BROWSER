// rea decompile_all
// name: FUN_500a1e60
// address: 0x500a1e60
// body: available
// range: 0x500a1e60-0x500a1f40 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a1e60(uint param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0c00000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1100000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1300000;
  *(undefined4 *)(param_1 + 0x128) = 0x41100000;
  *(undefined4 *)(param_1 + 300) = 0x41100000;
  *(undefined4 *)(param_1 + 0x130) = 0x41600000;
  *(undefined1 **)(param_1 + 0x2c4) = &LAB_500a1e30;
  *(undefined1 **)(param_1 + 0x2c8) = &LAB_500a1e30;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500a1ce0;
  *(undefined1 **)(param_1 + 0x2d0) = &LAB_500a1d80;
  pcVar1 = s_urinal_50149458;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = s_urinal2_5014b280;
  }
  (*DAT_5015c9f4)(s_Ambient_Models_Urinal_Flush_wav_5014b260);
  (*DAT_5015c9f4)(s_Ambient_Gen_WtrFX_SprayBig_wav_5014ae40);
  (*DAT_5015c9f8)(s_environ_k_waterspout3_5014b020);
  FUN_500b3870(param_1,&PTR_s_objects_generic_urinal_50148fd8,(char *)0x0,0);
  FUN_500b2fd0(param_1,PTR_s_objects_generic_urinal_50148fd8,(int)PTR_s_urinal_50148fdc,
               PTR_s_urinal_50148ff0,pcVar1,0);
  *(uint *)(param_1 + 0x34) = *(uint *)(param_1 + 0x34) | 0x10000000;
  return;
}

