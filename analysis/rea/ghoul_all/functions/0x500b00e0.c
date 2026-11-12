// rea decompile_all
// name: FUN_500b00e0
// address: 0x500b00e0
// body: available
// range: 0x500b00e0-0x500b01b4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500b00e0(int param_1)

{
  int *piVar1;
  longlong lVar2;
  
  piVar1 = FUN_500c3690();
  piVar1[1] = *(int *)(param_1 + 0x394);
  piVar1[2] = *(int *)(param_1 + 0x398);
  piVar1[3] = *(int *)(param_1 + 0x39c);
  piVar1[4] = *(int *)(param_1 + 0x3a0);
  piVar1[5] = *(int *)(param_1 + 0x3a4);
  piVar1[6] = *(int *)(param_1 + 0x3a8);
  piVar1[0xec] = *(int *)(param_1 + 0x3b0);
  lVar2 = __ftol();
  piVar1[0xbb] = (int)lVar2;
  piVar1[0x67] = 0;
  piVar1[0x56] = 0;
  piVar1[0x6e] = *(int *)(param_1 + 0x1b8);
  piVar1[0xd8] = *(int *)(param_1 + 0x360);
  piVar1[0x88] = *(int *)(param_1 + 0x220);
  piVar1[0xef] = *(int *)(param_1 + 0x3bc);
  piVar1[0x72] = *(int *)(param_1 + 0x1c8);
  piVar1[0x71] = *(int *)(param_1 + 0x1c4);
  piVar1[0xae] = (int)&LAB_500b0040;
  piVar1[0xad] = (int)(DAT_5015ccdc + *(float *)(param_1 + 0x3b4));
  return;
}

