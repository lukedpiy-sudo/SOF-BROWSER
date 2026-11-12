// rea decompile_all
// name: FUN_500c2430
// address: 0x500c2430
// body: available
// range: 0x500c2430-0x500c24d2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500c2430(uint param_1)

{
  char *pcVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc1500000;
  *(undefined4 *)(param_1 + 0x120) = 0xc1800000;
  *(undefined4 *)(param_1 + 0x124) = 0xc25c0000;
  *(undefined4 *)(param_1 + 0x128) = 0x41980000;
  *(undefined4 *)(param_1 + 300) = 0x41880000;
  *(undefined4 *)(param_1 + 0x130) = 0x42400000;
  pcVar1 = &DAT_50151144;
  if (*(int *)(param_1 + 0x2c) == 1) {
    pcVar1 = s_beef_f_50151444;
  }
  FUN_500b3870(param_1,&PTR_s_objects_uganda_side_o_beef_50151008,pcVar1,0);
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_500c22a0;
    iVar2 = (*DAT_5015cb24)(1,10);
    *(float *)(param_1 + 0x2b4) = (float)iVar2 + DAT_5015ccdc;
  }
  *(undefined1 **)(param_1 + 0x2cc) = &LAB_500c2300;
  return;
}

