// rea decompile_all
// name: FUN_50086270
// address: 0x50086270
// body: available
// range: 0x50086270-0x50086348 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50086270(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  param_1[0x47] = 0xc2200000;
  param_1[0x48] = 0xc2200000;
  param_1[0x49] = 0xc1000000;
  param_1[0x4a] = 0x42200000;
  param_1[0x4b] = 0x42200000;
  param_1[0x4c] = 0x42c80000;
  FUN_500b3870((uint)param_1,&PTR_s_objects_bosnia_searchlight_50146128,(char *)0x0,0);
  param_1[0xbc] = param_1[0xbb];
  param_1[0xb0] = 0;
  puVar1 = FUN_500b4540(param_1,0x50146128,s_DUMMY01_50146508,
                        &PTR_s_objects_bosnia_searchlight_50146150,0x50146508,(char *)0x0);
  (*DAT_5015c9f8)(s_environ_tv_smoke_501464d0);
  if (puVar1 != (undefined4 *)0x0) {
    if ((*(byte *)(param_1 + 0x6e) & 0xc) != 0) {
      FUN_500b41d0((int *)puVar1[7],&DAT_501462bc,1);
    }
    FUN_500b4670(puVar1,0x50146150,s_DUMMY02_50146500,&PTR_s_objects_bosnia_searchlight_50146178,
                 s_DUMMY02_50146500,(char *)0x0);
  }
  param_1[0xb3] = &LAB_50085ae0;
  return;
}

