// rea decompile_all
// name: FUN_50085ea0
// address: 0x50085ea0
// body: available
// range: 0x50085ea0-0x50085f23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50085ea0(uint param_1)

{
  *(undefined4 *)(param_1 + 0x11c) = 0xc1000000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1000000;
  *(undefined4 *)(param_1 + 0x124) = 0xc1000000;
  *(undefined4 *)(param_1 + 0x128) = 0x41000000;
  *(undefined4 *)(param_1 + 300) = 0x41000000;
  *(undefined4 *)(param_1 + 0x130) = 0x41000000;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  FUN_500b3870(param_1,&PTR_s_objects_bosnia_searchbeam_50146100,(char *)0x0,0);
  FUN_500b41d0(*(int **)(param_1 + 0x164),&DAT_501462e4,1);
  *(undefined1 **)(param_1 + 0x2b8) = &LAB_50085be0;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  return;
}

