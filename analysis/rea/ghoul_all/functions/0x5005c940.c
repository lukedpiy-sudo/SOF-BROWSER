// rea decompile_all
// name: FUN_5005c940
// address: 0x5005c940
// body: available
// range: 0x5005c940-0x5005ca9c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5005c940(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_11;
  void *local_c;
  undefined1 *puStack_8;
  undefined1 local_4;
  undefined3 uStack_3;
  
  puStack_8 = &LAB_5011415c;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined1 *)(param_1 + 1) = local_11;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined1 *)(param_1 + 5) = local_11;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  local_4 = 1;
  uStack_3 = 0;
  *(undefined1 *)(param_1 + 0x14) = local_11;
  *(undefined1 *)((int)param_1 + 0x51) = local_11;
  *(undefined1 *)(param_1 + 0x17) = 0;
  FUN_50063f30((int)(param_1 + 0x14));
  local_4 = 2;
  *(undefined1 *)(param_1 + 0x19) = local_11;
  *(undefined1 *)((int)param_1 + 0x65) = local_11;
  *(undefined1 *)(param_1 + 0x1c) = 0;
  FUN_50063f30((int)(param_1 + 0x19));
  _local_4 = CONCAT31(uStack_3,3);
  *(undefined1 *)(param_1 + 0x1e) = local_11;
  *(undefined1 *)((int)param_1 + 0x79) = local_11;
  *(undefined1 *)(param_1 + 0x21) = 0;
  iVar1 = FUN_5006b2e0(0,1);
  param_1[0x20] = iVar1;
  *(undefined1 *)(iVar1 + 0x15) = 1;
  *(undefined4 *)param_1[0x20] = 0;
  *(undefined4 *)(param_1[0x20] + 8) = 0;
  uVar2 = FUN_5006b2e0(param_1[0x20],0);
  param_1[0x1f] = uVar2;
  *(undefined4 *)uVar2 = uVar2;
  *(undefined4 *)(param_1[0x1f] + 8) = param_1[0x1f];
  param_1[0x22] = 0;
  *(undefined1 *)(param_1 + 0x25) = local_11;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  *(undefined1 *)(param_1 + 0x29) = local_11;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  *param_1 = &PTR_FUN_50128718;
  param_1[9] = 500;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = 8;
  param_1[0x10] = 0x96;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  *(undefined2 *)(param_1 + 0x23) = 0;
  *(undefined2 *)(param_1 + 0x24) = 0;
  *(undefined2 *)((int)param_1 + 0x8e) = 0;
  ExceptionList = local_c;
  return param_1;
}

