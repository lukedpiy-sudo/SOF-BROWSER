// rea decompile_all
// name: FUN_50016e10
// address: 0x50016e10
// body: available
// range: 0x50016e10-0x50016eb6 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50016e10(int param_1)

{
  int *this;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011366b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(500);
  local_4 = 0;
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_50036f40(this,param_1);
    *this = (int)&PTR_LAB_501267a8;
    this[0x7c] = *(int *)(param_1 + 0x1f0);
    this[0x7b] = *(int *)(param_1 + 0x1ec);
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x4149424b,this,500);
  if (this != (int *)0x0) {
    (**(code **)(*this + 0xf0))(1);
  }
  FUN_5001d9b0(param_1);
  ExceptionList = pvStack_c;
  return;
}

