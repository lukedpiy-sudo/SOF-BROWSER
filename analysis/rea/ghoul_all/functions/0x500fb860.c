// rea decompile_all
// name: FUN_500fb860
// address: 0x500fb860
// body: available
// range: 0x500fb860-0x500fb946 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * __fastcall FUN_500fb860(undefined1 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50115ad8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = local_11;
  param_1[1] = local_11;
  param_1[0xc] = 0;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)(param_1 + 8) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  **(undefined4 **)(param_1 + 8) = 0;
  *(undefined4 *)(*(int *)(param_1 + 8) + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 8);
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)(param_1 + 4) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_4 = 0;
  param_1[0x14] = local_11;
  param_1[0x15] = local_11;
  param_1[0x20] = 0;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)(param_1 + 0x1c) = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0x1c) + 8) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x1c);
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  *(void **)(param_1 + 0x18) = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(int *)(*(int *)(param_1 + 0x18) + 8) = *(int *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x24) = 0;
  ExceptionList = local_c;
  return param_1;
}

