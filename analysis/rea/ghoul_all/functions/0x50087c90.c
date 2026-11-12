// rea decompile_all
// name: FUN_50087c90
// address: 0x50087c90
// body: available
// range: 0x50087c90-0x50087db5 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50087c90(undefined4 *param_1)

{
  param_1[0x47] = 0xc1880000;
  param_1[0x48] = 0xc1600000;
  param_1[0x49] = 0xc1880000;
  param_1[0x4a] = 0x41400000;
  param_1[0x4b] = 0x41600000;
  param_1[0x4c] = 0x42180000;
  FUN_500b50d0(1,0x50146700,0x50146850,0x50146840);
  FUN_500b3870((uint)param_1,&PTR_s_objects_castle_chair_big_50146700,(char *)0x0,0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY01_50146508,&PTR_s_objects_castle_chair_big_50146728,
               0x50146508,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY02_50146500,&PTR_s_objects_castle_chair_big_50146728,
               0x50146508,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY03_50146550,&PTR_s_objects_castle_chair_big_50146750,
               0x50146550,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY04_50146548,&PTR_s_objects_castle_chair_big_50146750,
               0x50146550,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY05_501468c8,&PTR_s_objects_castle_chair_big_50146778,
               0x501468c8,(char *)0x0);
  param_1[0xb3] = FUN_500b5110;
  param_1[0xf8] = param_1[4];
  param_1[0xf9] = param_1[5];
  param_1[0xfa] = param_1[6];
  return;
}

