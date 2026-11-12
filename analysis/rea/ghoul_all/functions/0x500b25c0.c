// rea decompile_all
// name: FUN_500b25c0
// address: 0x500b25c0
// body: available
// range: 0x500b25c0-0x500b265b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b25c0(uint param_1)

{
  char *pcVar1;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1000000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1000000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1980000;
  *(undefined4 *)(param_1 + 0x128) = 0x41000000;
  *(undefined4 *)(param_1 + 300) = 0x41000000;
  *(undefined4 *)(param_1 + 0x130) = 0x41980000;
  pcVar1 = s_gumball_5014d0a4;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = s_gumball2_5014d188;
  }
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500b2400;
  FUN_500b3870(param_1,&PTR_s_objects_newyork_gumball_5014cf98,(char *)0x0,0);
  FUN_500b2fd0(param_1,PTR_s_objects_newyork_gumball_5014cf98,(int)PTR_s_gumball_5014cf9c,
               PTR_s_gumball_5014cfb0,pcVar1,0);
  DAT_50188928._1_1_ = 0x79;
                    /* WARNING: Could not recover jumptable at 0x500b2656. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f4)();
  return;
}

