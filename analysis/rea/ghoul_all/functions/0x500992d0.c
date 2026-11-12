// rea decompile_all
// name: FUN_500992d0
// address: 0x500992d0
// body: available
// range: 0x500992d0-0x50099391 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500992d0(undefined4 *param_1)

{
  param_1[0x48] = 0xc1400000;
  param_1[0x49] = 0xc1400000;
  param_1[0x47] = 0xc1100000;
  param_1[0x4a] = 0x41100000;
  param_1[0x4b] = 0x41400000;
  param_1[0x4c] = 0x41400000;
  FUN_500b3870((uint)param_1,&PTR_s_objects_generic_comp_monitor2_50148510,(char *)0x0,0);
  FUN_500b4540(param_1,0x50148510,s_DUMMY01_50146508,&PTR_s_objects_generic_comp_monitor2_501484e8,
               0x50146508,(char *)0x0);
  if (param_1[0xb] != 0) {
    FUN_500b2fd0((int)param_1,PTR_s_objects_generic_comp_monitor2_50148510,(int)PTR_s_tower_50148514
                 ,PTR_s_monitor2_50148528,s_monitor2_d_5014ade0,1);
  }
  param_1[0xb3] = &LAB_500991a0;
  DAT_501889ab = 1;
  (*DAT_5015c9f8)(s_environ_normalsmoke_50146558);
                    /* WARNING: Could not recover jumptable at 0x5009938c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f4)();
  return;
}

