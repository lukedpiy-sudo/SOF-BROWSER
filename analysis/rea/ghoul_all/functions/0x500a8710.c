// rea decompile_all
// name: FUN_500a8710
// address: 0x500a8710
// body: available
// range: 0x500a8710-0x500a87a9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500a8710(int param_1)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  *(undefined4 *)(param_1 + 0x11c) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x120) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x124) = 0xc0800000;
  *(undefined4 *)(param_1 + 0x128) = 0x40800000;
  *(undefined4 *)(param_1 + 300) = 0x40800000;
  *(undefined4 *)(param_1 + 0x130) = 0x40800000;
  *(undefined4 *)(param_1 + 0x3c0) = 0x15;
  *(undefined4 *)(param_1 + 0x2ec) = 10;
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 2;
  FUN_500a6090(&DAT_5015c79c,param_1,s_objects_generic_urn_5014941c,&DAT_50149418,(char *)0x0,
               (char *)0x0);
  FUN_500b3570(param_1,2);
  uVar2 = 0;
  uVar1 = (*DAT_5015c9f8)(s_environ_sprinkler_5014b9bc,param_1,0,0);
  FUN_50085530(uVar1,param_1,uVar2);
  return;
}

