// rea decompile_all
// name: FUN_50086b60
// address: 0x50086b60
// body: available
// range: 0x50086b60-0x50086d46 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086b60(undefined4 *param_1)

{
  char *pcVar1;
  float10 fVar2;
  
  param_1[0x47] = 0xc2c00000;
  param_1[0x48] = 0xc21c0000;
  param_1[0x49] = 0xc2340000;
  param_1[0x4a] = 0x42c00000;
  param_1[0x4b] = 0x421c0000;
  param_1[0x4c] = 0x42340000;
  param_1[0x6e] = param_1[0x6e] | 2;
  if (param_1[0xb] == 1) {
    pcVar1 = s_truck2_50146590;
  }
  else if (param_1[0xb] == 2) {
    pcVar1 = s_truck3_50146598;
  }
  else {
    pcVar1 = s_truck_50146248;
  }
  (*DAT_5015c9f8)(s_environ_normalsmoke_50146558);
  (*DAT_5015c9f4)(s_impact_explosion_med_wav_50146574);
  FUN_500b3870((uint)param_1,&PTR_s_objects_bosnia_truck_old_501461f0,pcVar1,0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY01_50146508,&PTR_s_objects_bosnia_truck_old_50146218,
               0x50146508,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY02_50146500,&PTR_s_objects_bosnia_truck_old_50146218,
               0x50146508,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY03_50146550,&PTR_s_objects_bosnia_truck_old_50146218,
               0x50146508,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY04_50146548,&PTR_s_objects_bosnia_truck_old_50146218,
               0x50146508,(char *)0x0);
  if ((param_1[0x6e] & 0x10) != 0) {
    param_1[0xc6] = 0;
    param_1[0xb1] = &LAB_50086950;
    param_1[0xb0] = &LAB_50086990;
    if ((float)param_1[0x87] == 0.0) {
      param_1[0x87] = 0x43480000;
    }
  }
  if ((param_1[0x6e] & 4) != 0) {
    param_1[0xb1] = FUN_50086790;
    param_1[0xa5] = 0xbf800000;
    param_1[0x68] = param_1[0x68] | 0x800;
    param_1[3] = (float)param_1[3] + 1.0;
    if ((float)param_1[0x87] == 0.0) {
      param_1[0x87] = 0x43480000;
    }
    param_1[0x88] = 0x41f00000;
    fVar2 = (float10)fcos((float10)(float)param_1[5] * (float10)0.01745329252);
    param_1[0xd6] = (float)(fVar2 * (float10)DAT_5015cbd0 + (float10)(float)param_1[1]);
    fVar2 = (float10)fsin((float10)(float)param_1[5] * (float10)0.01745329252);
    param_1[0xd7] = (float)(fVar2 * (float10)DAT_5015cbd0 + (float10)(float)param_1[2]);
  }
  param_1[0xb4] = FUN_50086ab0;
  return;
}

