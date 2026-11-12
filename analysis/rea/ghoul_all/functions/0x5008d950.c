// rea decompile_all
// name: FUN_5008d950
// address: 0x5008d950
// body: available
// range: 0x5008d950-0x5008d9cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_5008d950(int param_1)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = *(int *)(param_1 + 0x2ec) + 10;
  *(int *)(param_1 + 0x2ec) = iVar1;
  *(float *)(param_1 + 0x2b4) = DAT_5015ccdc + 0.1;
  FUN_500be590((float)iVar1 * 0.01,0.0,0.0);
  if (0x46 < *(int *)(param_1 + 0x2ec)) {
    *(undefined1 **)(param_1 + 0x2b8) = &LAB_5008d900;
    fVar2 = (float10)(*DAT_5015cb20)(0x40000000,0x41200000);
    *(float *)(param_1 + 0x2b4) = (float)(fVar2 + (float10)DAT_5015ccdc);
  }
  return;
}

