// rea decompile_all
// name: FUN_500988c0
// address: 0x500988c0
// body: available
// range: 0x500988c0-0x50098961 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500988c0(undefined4 *param_1)

{
  char *pcVar1;
  
  param_1[0x47] = 0xc1500000;
  param_1[0x48] = 0xc1500000;
  param_1[0x49] = 0xc18c0000;
  param_1[0x4a] = 0x41500000;
  param_1[0x4b] = 0x41500000;
  param_1[0x4c] = 0x41c00000;
  param_1[0xb3] = &LAB_500986e0;
  pcVar1 = s_office_50149d3c;
  if (param_1[0xb] == 1) {
    pcVar1 = s_office2_5014ac34;
  }
  FUN_500b3870((uint)param_1,&PTR_s_objects_generic_chair_office_50148380,pcVar1,0);
  FUN_500b4540(param_1,0x50148380,s_DUMMY02_50146500,&PTR_s_objects_generic_chair_office_50148358,
               0x50146508,pcVar1);
  if (param_1[0xb] == 1) {
    param_1[199] = 9;
  }
                    /* WARNING: Could not recover jumptable at 0x5009895c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f4)();
  return;
}

