// rea decompile_all
// name: FUN_500a76c0
// address: 0x500a76c0
// body: available
// range: 0x500a76c0-0x500a79a4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a76c0(undefined4 *param_1)

{
  float10 fVar1;
  
  param_1[0x47] = 0xc2be0000;
  param_1[0x48] = 0xc2200000;
  param_1[0x49] = 0xc2280000;
  param_1[0x4a] = 0x42be0000;
  param_1[0x4b] = 0x42200000;
  param_1[0x4c] = 0x42340000;
  (*DAT_5015c9f8)(s_environ_normalsmoke_50146558);
  (*DAT_5015c9f4)(s_impact_explosion_med_wav_50146574);
  FUN_500b3870((uint)param_1,&PTR_s_objects_iraq_flatbed_5014b530,(char *)0x0,0);
  if (param_1[0xef] == 0) {
    FUN_500b3dc0((uint)param_1,0x5014b9b4);
  }
  if ((*(byte *)(param_1 + 0x6e) & 8) == 0) {
    FUN_500b3dc0((uint)param_1,0x5014b9ac);
    FUN_500b3dc0((uint)param_1,0x5014b9a4);
    FUN_500b3dc0((uint)param_1,0x5014b99c);
    FUN_500b3dc0((uint)param_1,0x5014b994);
    FUN_500b3dc0((uint)param_1,0x5014b98c);
    FUN_500b3dc0((uint)param_1,0x5014b984);
    FUN_500b3dc0((uint)param_1,0x5014b97c);
    FUN_500b3dc0((uint)param_1,0x5014b974);
  }
  else {
    FUN_500b4540(param_1,param_1[0xab],s_headlight1_5014b180,&PTR_s_objects_generic_beam_5014b5d0,
                 0x5014b18c,(char *)0x0);
    FUN_500b4540(param_1,param_1[0xab],s_headlight2_5014b174,&PTR_s_objects_generic_beam_5014b5d0,
                 0x5014b18c,(char *)0x0);
    FUN_500b4090((uint)param_1,&DAT_5014b9ac);
    FUN_500b4090((uint)param_1,&DAT_5014b9a4);
    FUN_500b4090((uint)param_1,s_back1_5014b99c);
    FUN_500b4090((uint)param_1,s_back2_5014b994);
    FUN_500b4090((uint)param_1,&DAT_5014b98c);
    FUN_500b4090((uint)param_1,&DAT_5014b984);
    FUN_500b4090((uint)param_1,&DAT_5014b97c);
    FUN_500b4090((uint)param_1,&DAT_5014b974);
  }
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY01_50146508,&PTR_s_objects_iraq_flatbed_5014b508,
               0x501468c8,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY02_50146500,&PTR_s_objects_iraq_flatbed_5014b508,
               0x501468c8,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY03_50146550,&PTR_s_objects_iraq_flatbed_5014b508,
               0x501468c8,(char *)0x0);
  FUN_500b4540(param_1,param_1[0xab],s_DUMMY04_50146548,&PTR_s_objects_iraq_flatbed_5014b508,
               0x501468c8,(char *)0x0);
  if ((param_1[0x6e] & 0x10) == 0) {
    if ((param_1[0x6e] & 4) != 0) {
      param_1[0xb1] = FUN_500a7370;
      param_1[0xa5] = 0xbf800000;
      param_1[0x68] = param_1[0x68] | 0x800;
      param_1[3] = (float)param_1[3] + 1.0;
      if ((float)param_1[0x87] == 0.0) {
        param_1[0x87] = 0x43480000;
      }
      param_1[0x88] = 0x41f00000;
      fVar1 = (float10)fcos((float10)(float)param_1[5] * (float10)0.01745329252);
      param_1[0xd6] = (float)(fVar1 * (float10)DAT_5015cbd0 + (float10)(float)param_1[1]);
      fVar1 = (float10)fsin((float10)(float)param_1[5] * (float10)0.01745329252);
      param_1[0xd7] = (float)(fVar1 * (float10)DAT_5015cbd0 + (float10)(float)param_1[2]);
    }
    param_1[0xb4] = FUN_500a75c0;
  }
  else {
    param_1[0xc6] = 0;
    param_1[0xb1] = &LAB_500a7530;
    param_1[0xb4] = FUN_500a75c0;
    if ((float)param_1[0x87] == 0.0) {
      param_1[0x87] = 0x43480000;
      return;
    }
  }
  return;
}

