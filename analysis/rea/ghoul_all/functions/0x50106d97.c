// rea decompile_all
// name: FUN_50106d97
// address: 0x50106d97
// body: available
// range: 0x50106d97-0x50106df0 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_50106d97(void)

{
  size_t sVar1;
  exception *this;
  int unaff_EBP;
  
  FUN_50108dac();
  *(undefined1 *)(unaff_EBP + -0x20) = *(undefined1 *)(unaff_EBP + -0xd);
  FUN_500826d0((void *)(unaff_EBP + -0x20),'\0');
  sVar1 = _strlen("invalid string position");
  FUN_50082bb0((void *)(unaff_EBP + -0x20),(undefined4 *)"invalid string position",sVar1);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_50106bc5();
  *(undefined ***)(unaff_EBP + -0x3c) = &PTR_LAB_5012a0c4;
  __CxxThrowException_8(unaff_EBP + -0x3c,&DAT_5012dc70);
  FUN_50108dac();
  *(exception **)(unaff_EBP + -0x10) = this;
  *(undefined ***)this = &PTR_FUN_5012a0b0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_500826d0(this + 0xc,'\x01');
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  exception::~exception(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}

