// rea decompile_all
// name: FUN_50077000
// address: 0x50077000
// body: available
// range: 0x50077000-0x500770a2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __thiscall FUN_50077000(void *this,int *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_501149cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar2 = operator_new(0x50);
  local_4 = 0;
  if (puVar2 != (undefined4 *)0x0) {
    iVar3 = (**(code **)(*param_1 + 4))();
    iVar1 = *(int *)((int)this + 0x4c);
    *puVar2 = &PTR_LAB_50129390;
    _strncpy((char *)(puVar2 + 1),&DAT_5015911c,0x40);
    puVar2[0x13] = iVar1 / iVar3;
    puVar2[0x11] = 0;
    puVar2[0x12] = 0xffffffff;
    *puVar2 = &PTR_FUN_50129328;
    ExceptionList = local_c;
    return puVar2;
  }
  ExceptionList = local_c;
  return (undefined4 *)0x0;
}

