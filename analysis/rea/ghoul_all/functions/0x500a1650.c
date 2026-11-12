// rea decompile_all
// name: FUN_500a1650
// address: 0x500a1650
// body: available
// range: 0x500a1650-0x500a17aa inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a1650(undefined4 *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  param_1[0x47] = 0xc1900000;
  param_1[0x48] = 0xc1980000;
  param_1[0x49] = 0xc1b00000;
  param_1[0x4a] = 0x41980000;
  param_1[0x4b] = 0x41980000;
  param_1[0x4c] = 0x41e00000;
  param_1[0x6e] = param_1[0x6e] | 2;
  param_1[0xb3] = FUN_500a1350;
  param_1[0xb1] = &LAB_500a1630;
  param_1[0xb4] = FUN_500a0b00;
  param_1[0xa4] = 0;
  FUN_500b3870((uint)param_1,&PTR_s_objects_generic_tv_ceiling_50148f88,(char *)0x0,0);
  FUN_500b4540(param_1,0x50148f88,s_DUMMY01_50146508,&PTR_s_objects_generic_tv_ceiling_50148f60,
               0x50146508,(char *)0x0);
  uVar3 = 0x3fc00000;
  puVar2 = param_1;
  FUN_500b34f0((int)param_1);
  param_1[0xae] = FUN_500a15f0;
  uVar1 = FUN_50107636();
  param_1[0xad] = (float)((int)uVar1 % 5) * 0.1 + DAT_5015ccdc + 0.1;
  DAT_501889ab = 1;
  DAT_501889aa = 1;
  DAT_50188928._1_1_ = 0x79;
  DAT_5018892c = 0x79;
  (*DAT_5015c9f4)(s_Impact_Glassbreak_Monitor_wav_5014adb8,puVar2,uVar3);
  (*DAT_5015c9f4)(s_Ambient_Gen_Electric_buzz_wav_5014ad98);
  (*DAT_5015c9f4)(s_Ambient_Models_Monitor_Static_wa_5014b1e8);
  (*DAT_5015c9f8)(s_environ_normalsmoke_50146558);
  if (param_1[0xef] == 1) {
    FUN_500b2fd0((int)param_1,PTR_s_objects_generic_tv_ceiling_50148f60,(int)PTR_DAT_50148f64,
                 PTR_DAT_50148f78,s_tv_br0_5014b20c,1);
  }
  return;
}

