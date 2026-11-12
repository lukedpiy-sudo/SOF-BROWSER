// rea decompile_all
// name: FUN_50106b6b
// address: 0x50106b6b
// body: available
// range: 0x50106b6b-0x50106bc4 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * FUN_50106b6b(void)

{
  undefined4 *this;
  undefined1 *puVar1;
  size_t sVar2;
  undefined4 *this_00;
  int unaff_EBP;
  
  FUN_50108dac();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_500826d0((void *)(unaff_EBP + -0x20),'\0');
  sVar2 = _strlen("string too long");
  FUN_50082bb0((void *)(unaff_EBP + -0x20),(undefined4 *)"string too long",sVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50106bc5();
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_5012a090;
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_5012db48);
  FUN_50108dac();
  *(undefined4 **)(unaff_EBP + -0x14) = this_00;
  *(undefined1 **)(unaff_EBP + -0x10) = &DAT_5015911c;
  FUN_50108c54(this_00,(undefined4 *)(unaff_EBP + -0x10));
  puVar1 = *(undefined1 **)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  this = this_00 + 3;
  *(undefined1 *)this = *puVar1;
  FUN_500826d0(this,'\0');
  FUN_50106e7f(this,puVar1,0,0xffffffff);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *this_00 = &PTR_FUN_5012a0b0;
  return this_00;
}

