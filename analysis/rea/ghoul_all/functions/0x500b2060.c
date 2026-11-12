// rea decompile_all
// name: FUN_500b2060
// address: 0x500b2060
// body: available
// range: 0x500b2060-0x500b20d0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500b2060(void)

{
  int iVar1;
  int in_stack_00001000;
  float *in_stack_00001008;
  float in_stack_0000100c;
  int in_stack_00001010;
  
  FUN_501074f0();
  FUN_500c2990(&stack0x00000000,in_stack_00001008,in_stack_0000100c,1,0,0);
  iVar1 = 0;
  if (0 < in_stack_00001000) {
    do {
      if (*(int **)(*(int *)(&stack0x00000000 + iVar1 * 4) + 0x450) != (int *)0x0) {
        (**(code **)(**(int **)(*(int *)(&stack0x00000000 + iVar1 * 4) + 0x450) + 0x90))
                  ((float)in_stack_00001010,in_stack_00001008);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < in_stack_00001000);
  }
  return;
}

