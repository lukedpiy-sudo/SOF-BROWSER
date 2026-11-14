// rea decompile_all
// name: FUN_3001d410
// address: 0x3001d410
// body: available
// range: 0x3001d410-0x3001d470 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_3001d410(void)

{
  int iVar1;
  char *in_stack_00010004;
  int in_stack_00010008;
  byte *in_stack_0001000c;
  
  FUN_30020910();
  iVar1 = FUN_30020b2c(&stack0x00000000,in_stack_0001000c,(undefined4 *)&stack0x00010010);
  if (in_stack_00010008 <= iVar1) {
    FUN_30010fd0((byte *)s_Com_sprintf__overflow_of__i_in___30031a74);
  }
  _strncpy(in_stack_00010004,&stack0x00000000,in_stack_00010008 - 1);
  return;
}

