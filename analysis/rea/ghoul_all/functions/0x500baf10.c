// rea decompile_all
// name: FUN_500baf10
// address: 0x500baf10
// body: available
// range: 0x500baf10-0x500baf59 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_500baf10(void)

{
  undefined4 uVar1;
  int *in_stack_00004004;
  
  FUN_501074f0();
  uVar1 = (**(code **)(*in_stack_00004004 + 0x94))();
  (*DAT_5015cb44)(0x47484c49,&stack0xffffffec,uVar1);
  return;
}

