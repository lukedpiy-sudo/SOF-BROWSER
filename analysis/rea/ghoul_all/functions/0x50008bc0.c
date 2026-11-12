// rea decompile_all
// name: FUN_50008bc0
// address: 0x50008bc0
// body: available
// range: 0x50008bc0-0x50008c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 *
FUN_50008bc0(uint param_1,uint param_2,uint param_3,undefined4 *param_4,undefined4 *param_5,
            float param_6)

{
  undefined4 *this;
  undefined4 *puVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_5011310b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = operator_new(0x7c);
  local_4 = 0;
  puVar1 = (undefined4 *)0x0;
  if (this != (undefined4 *)0x0) {
    FUN_5000dd60(this,param_1,param_2,param_3,param_4,param_5,param_6,0);
    *this = &PTR_FUN_501253d8;
    this[0xf] = 5;
    puVar1 = this;
  }
  ExceptionList = local_c;
  return puVar1;
}

