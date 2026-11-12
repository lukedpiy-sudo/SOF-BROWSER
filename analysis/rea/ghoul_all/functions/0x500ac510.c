// rea decompile_all
// name: FUN_500ac510
// address: 0x500ac510
// body: available
// range: 0x500ac510-0x500ac664 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500ac510(undefined4 *param_1)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = (*DAT_5015cb24)(0,2);
  param_1[0x47] = 0xc1300000;
  param_1[0x48] = 0xc1300000;
  param_1[0x49] = 0xc25c0000;
  param_1[0x4a] = 0x41300000;
  param_1[0x4b] = 0x41300000;
  param_1[0x4c] = 0x41b80000;
  uVar1 = param_1[0x6e];
  param_1[0x6e] = uVar1 | 2;
  if ((uVar1 & 1) == 0) {
    param_1[0xc3] = 1;
  }
  else {
    param_1[0xc3] = 0;
  }
  pcVar3 = s_candle_5014c204;
  if (param_1[0xb] == 1) {
    pcVar3 = s_candle2_5014c1fc;
  }
  FUN_500b50d0(0,0x5014bc98,0x5014bf48,0x5014bf40);
  FUN_500b3870((uint)param_1,&PTR_s_objects_light_candle_5014bc98,pcVar3,0);
  FUN_500b4540(param_1,0x5014bc98,s_DUMMY01_50146508,
               &PTR_s_objects_light_candle_5014bc20 + (iVar2 % 3) * 10,0x50146508,(char *)0x0);
  FUN_500b4540(param_1,0x5014bc98,s_DUMMY02_50146500,
               &PTR_s_objects_light_candle_5014bc20 + ((iVar2 + 1) % 3) * 10,0x50146508,(char *)0x0)
  ;
  FUN_500b4540(param_1,0x5014bc98,s_DUMMY03_50146550,
               &PTR_s_objects_light_candle_5014bc20 + ((iVar2 + 2) % 3) * 10,0x50146508,(char *)0x0)
  ;
  param_1[0xb3] = FUN_500b5110;
  FUN_500af6d0((int)param_1);
  param_1[0xb1] = &LAB_500ac3f0;
  return;
}

