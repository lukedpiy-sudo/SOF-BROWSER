// rea decompile_all
// name: FUN_50098430
// address: 0x50098430
// body: available
// range: 0x50098430-0x50098599 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50098430(undefined4 *param_1)

{
  char *pcVar1;
  
  param_1[0x47] = 0xc1200000;
  param_1[0x48] = 0xc1100000;
  param_1[0x49] = 0xc1400000;
  param_1[0x4a] = 0x41200000;
  param_1[0x4b] = 0x41100000;
  param_1[0x4c] = 0x41900000;
  param_1[0x9f] = 0x32;
  if (param_1[0xb] == 1) {
    pcVar1 = s_legsb_5014ac04;
    param_1[0xf0] = 0xe;
    param_1[199] = 0x11;
  }
  else if (param_1[0xb] == 2) {
    pcVar1 = s_legsplastic_5014ac0c;
    param_1[0xf0] = 0;
    param_1[199] = 0x1f;
  }
  else {
    pcVar1 = &DAT_50149d88;
    param_1[0xf0] = 0x1c;
    param_1[199] = 8;
  }
  FUN_500b50d0(4,0x501482e0,0x50149260,0x50149230);
  FUN_500b3870((uint)param_1,&PTR_s_objects_generic_chair_legs_501482e0,pcVar1,0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY01_50146508,&PTR_s_objects_generic_chair_legs_50148308,
               0x50146508,pcVar1);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY02_50146500,&PTR_s_objects_generic_chair_legs_50148308,
               0x50146508,pcVar1);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY03_50146550,&PTR_s_objects_generic_chair_legs_50148308,
               0x50146508,pcVar1);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY04_50146548,&PTR_s_objects_generic_chair_legs_50148308,
               0x50146508,pcVar1);
  param_1[0xb3] = FUN_500b5110;
  param_1[0xf8] = param_1[4];
  param_1[0xf9] = param_1[5];
  param_1[0xfa] = param_1[6];
  return;
}

