// rea decompile_all
// name: FUN_50057260
// address: 0x50057260
// body: available
// range: 0x50057260-0x500572d8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_50057260(int param_1)

{
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50113c5b;
  local_c = ExceptionList;
  if (param_1 != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x45c) == 0) {
      ExceptionList = &local_c;
      puVar1 = operator_new(0x410);
      local_4 = 0;
      if (puVar1 == (undefined4 *)0x0) {
        puVar1 = (undefined4 *)0x0;
      }
      else {
        puVar1 = FUN_5004f3d0(puVar1);
      }
      *(undefined4 **)(param_1 + 0x45c) = puVar1;
    }
    local_4 = 0xffffffff;
    FUN_5004f470(*(int *)(param_1 + 0x45c));
  }
  ExceptionList = local_c;
  return;
}

