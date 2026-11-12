// rea decompile_all
// name: FUN_500a4870
// address: 0x500a4870
// body: available
// range: 0x500a4870-0x500a492a inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_500a4870(undefined4 *param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_50114efb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = local_11;
  *(undefined1 *)((int)param_1 + 5) = local_11;
  *(undefined1 *)(param_1 + 4) = 0;
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = 0;
  *(undefined1 *)((int)pvVar2 + 0x14) = 1;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  param_1[3] = pvVar2;
  *(undefined1 *)((int)pvVar2 + 0x15) = 1;
  *(undefined4 *)param_1[3] = 0;
  *(undefined4 *)(param_1[3] + 8) = 0;
  uVar1 = param_1[3];
  pvVar2 = operator_new(0x18);
  *(undefined4 *)((int)pvVar2 + 4) = uVar1;
  *(undefined1 *)((int)pvVar2 + 0x14) = 0;
  *(undefined1 *)((int)pvVar2 + 0x15) = 0;
  param_1[2] = pvVar2;
  *(void **)pvVar2 = pvVar2;
  *(undefined4 *)(param_1[2] + 8) = param_1[2];
  param_1[5] = 0;
  local_4 = 0;
  *(undefined1 *)(param_1 + 6) = local_11;
  pvVar2 = operator_new(0x18);
  *(void **)pvVar2 = pvVar2;
  *(void **)((int)pvVar2 + 4) = pvVar2;
  param_1[7] = pvVar2;
  param_1[8] = 0;
  *param_1 = &PTR_LAB_50129854;
  param_1[9] = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  ExceptionList = local_c;
  return param_1;
}

