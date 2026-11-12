// rea decompile_all
// name: FUN_500d0150
// address: 0x500d0150
// body: available
// range: 0x500d0150-0x500d01cd inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500d0150(undefined4 *param_1)

{
  undefined4 *puVar1;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvStack_c = ExceptionList;
  puStack_8 = &LAB_501155e8;
  ExceptionList = &pvStack_c;
  *param_1 = &PTR_LAB_501241c8;
  puVar1 = (undefined4 *)param_1[0xa4];
  local_4 = 0;
  while (puVar1 != (undefined4 *)0x0) {
    param_1[0xa4] = puVar1[10];
    param_1[0xa5] = param_1[0xa5] + -1;
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
    puVar1 = (undefined4 *)param_1[0xa4];
  }
  local_4 = 0xffffffff;
  FUN_50004a80(param_1);
  ExceptionList = pvStack_c;
  return;
}

