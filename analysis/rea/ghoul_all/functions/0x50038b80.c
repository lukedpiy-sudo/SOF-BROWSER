// rea decompile_all
// name: FUN_50038b80
// address: 0x50038b80
// body: available
// range: 0x50038b80-0x50038c5d inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_50038b80(int param_1)

{
  undefined4 *puVar1;
  int *this;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011370b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  this = operator_new(0x1ec);
  local_4 = 0;
  if (this == (int *)0x0) {
    this = (int *)0x0;
  }
  else {
    FUN_50030c40(this,param_1);
    *this = (int)&PTR_LAB_50127718;
  }
  local_4 = 0xffffffff;
  (*DAT_5015cb44)(0x41494246,this,0x1ec);
  if (this != (int *)0x0) {
    (**(code **)(*this + 0xf0))(1);
  }
  if (*(int *)(param_1 + 0x60) != 0) {
    puVar2 = operator_new(*(int *)(param_1 + 0x60) * 4);
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x60)) {
      iVar4 = 0;
      do {
        iVar3 = iVar3 + 1;
        puVar1 = (undefined4 *)(*(int *)(param_1 + 100) + 0x24 + iVar4);
        iVar4 = iVar4 + 0x30;
        *(undefined4 *)(puVar2 + iVar3 * 4 + -4) = *puVar1;
      } while (iVar3 < *(int *)(param_1 + 0x60));
    }
    (*DAT_5015cb44)(0x4149475a,puVar2,*(int *)(param_1 + 0x60) << 2);
    FUN_50106b60(puVar2);
  }
  ExceptionList = pvStack_c;
  return;
}

