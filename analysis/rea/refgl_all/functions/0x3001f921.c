// rea decompile_all
// name: FUN_3001f921
// address: 0x3001f921
// body: available
// range: 0x3001f921-0x3001f984 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_3001f921(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_300215bc();
  *(undefined4 **)(unaff_EBP + -0x14) = this_00;
  *(undefined **)(unaff_EBP + -0x10) = &DAT_30090008;
  FUN_3002145e(this_00,(undefined4 *)(unaff_EBP + -0x10));
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = *puVar1;
  FUN_300033d0(this,'\0');
  FUN_30004c90(this,puVar1,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_3002c6a4;
  return this_00;
}

