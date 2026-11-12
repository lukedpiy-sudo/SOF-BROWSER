// rea decompile_all
// name: FUN_500148f0
// address: 0x500148f0
// body: available
// range: 0x500148f0-0x500149ae inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_500148f0(undefined4 *param_1)

{
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_501135eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_50013e40(param_1);
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *param_1 = &PTR_FUN_501260b0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  *(undefined2 *)(param_1 + 0x2e) = 0;
  *(undefined2 *)((int)param_1 + 0xba) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  param_1[0x21] = 0x41f00000;
  param_1[0x22] = 0x428c0000;
  fVar1 = (float)DAT_5015d950;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0x96;
  param_1[0x23] = fVar1 * 0.01 + 0.06;
  ExceptionList = local_c;
  return param_1;
}

