// rea decompile_all
// name: FUN_5009ca00
// address: 0x5009ca00
// body: available
// range: 0x5009ca00-0x5009cc49 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5009ca00(undefined4 *param_1)

{
  undefined4 *puVar1;
  char *pcVar2;
  
  pcVar2 = &DAT_50149a54;
  param_1[0x47] = 0xc2de0000;
  param_1[0x48] = 0xc2940000;
  param_1[0x49] = 0xc2680000;
  param_1[0x4a] = 0x423c0000;
  param_1[0x4b] = 0x42960000;
  param_1[0x4c] = 0x42180000;
  param_1[0x6e] = param_1[0x6e] | 2;
  if (param_1[0xb] == 1) {
    pcVar2 = &DAT_5014af44;
  }
  FUN_500b3870((uint)param_1,&PTR_s_objects_generic_gun_big_50148790,pcVar2,0);
  puVar1 = FUN_500b4540(param_1,0x50148790,s_DUMMY01_50146508,
                        &PTR_s_objects_generic_gun_big_50148808,0x50146508,pcVar2);
  if (puVar1 != (undefined4 *)0x0) {
    FUN_500b4670(puVar1,0x50148808,s_DUMMY02_50146500,&PTR_s_objects_generic_gun_big_501487e0,
                 s_DUMMY02_50146500,pcVar2);
    FUN_500b4670(puVar1,0x50148808,s_DUMMY04_50146548,&PTR_s_objects_generic_gun_big_501487e0,
                 s_DUMMY02_50146500,pcVar2);
    FUN_500b4670(puVar1,0x50148808,s_DUMMY03_50146550,&PTR_s_objects_generic_gun_big_501487b8,
                 s_DUMMY03_50146550,pcVar2);
    FUN_500b4670(puVar1,0x50148808,s_DUMMY05_501468c8,&PTR_s_objects_generic_gun_big_501487b8,
                 s_DUMMY03_50146550,pcVar2);
  }
  param_1[0xc] = param_1[0xc] | 0x200;
  param_1[0x68] = param_1[0x68] | 0x800;
  param_1[0xbb] = (DAT_5015d950 * 5 + 10) * 0x28;
  if ((float)param_1[0x87] == 0.0) {
    param_1[0x87] = 0x42340000;
  }
  param_1[0x87] = (float)param_1[0x87] * 0.0017453292;
  if ((float)param_1[0xd6] == 0.0) {
    param_1[0xd6] = 0x43c80000;
  }
  if ((float)param_1[0xd8] == 0.0) {
    param_1[0xd8] = 0x41f00000;
  }
  if ((param_1[0x6e] & 4) != 0) {
    param_1[0xc3] = 1;
    param_1[0xae] = &LAB_5009bbb0;
    param_1[0xad] = (float)param_1[0xd8] * 0.1 + DAT_5015ccdc;
  }
  param_1[0xb4] = FUN_5009aec0;
  if ((param_1[0x6e] & 8) == 0) {
    param_1[0xa5] = 0x40490fdb;
    param_1[0x88] = 0;
    param_1[0x89] = 0;
  }
  else {
    param_1[0xa5] = _DAT_5015cbec * 0.017453292;
    param_1[0x88] = _DAT_5015cbf4 * 0.017453292;
    param_1[0x89] = _DAT_5015cbf0 * 0.017453292;
  }
                    /* WARNING: Could not recover jumptable at 0x5009cc44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*DAT_5015c9f8)();
  return;
}

