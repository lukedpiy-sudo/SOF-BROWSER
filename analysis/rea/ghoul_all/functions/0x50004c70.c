// rea decompile_all
// name: FUN_50004c70
// address: 0x50004c70
// body: available
// range: 0x50004c70-0x50004cc8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


float10 FUN_50004c70(void)

{
  int in_stack_00001000;
  int in_stack_00001008;
  
  FUN_501074f0();
  FUN_500c2990(&stack0x00000000,(float *)(in_stack_00001008 + 4),200.0,1,0,0);
  if (in_stack_00001000 != 0) {
    return (float10)5.0 / (float10)in_stack_00001000;
  }
  return (float10)20.0;
}

