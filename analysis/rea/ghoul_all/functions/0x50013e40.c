// rea decompile_all
// name: FUN_50013e40
// address: 0x50013e40
// body: available
// range: 0x50013e40-0x50013fb8 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_50013e40(undefined4 *param_1)

{
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50113588;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_50126470;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 1;
  param_1[4] = 0;
  param_1[5] = 0;
  fVar1 = DAT_5015ccdc;
  param_1[7] = 1;
  param_1[6] = fVar1;
  param_1[8] = 0;
  param_1[9] = DAT_5015ccdc - 10.0;
  fVar1 = DAT_5015ccdc - 10.0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[10] = fVar1;
  fVar1 = DAT_5015ccdc;
  param_1[0xe] = 0;
  param_1[0xd] = fVar1;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  *param_1 = &PTR_FUN_501261f8;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  local_4 = 0;
  param_1[0x16] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x17] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x18] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  FUN_5000a1e0(&DAT_5018b468,(undefined4 *)0x0);
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((int)param_1 + 0x76) = 0;
  param_1[0x1e] = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined1 *)((int)param_1 + 0x7d) = 0;
  *(undefined1 *)((int)param_1 + 0x7e) = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0x41a00000;
  param_1[0x22] = 0x42480000;
  param_1[0x23] = 0x3d23d70a;
  param_1[0x24] = 0x3cf5c28f;
  param_1[0x25] = 0x3d4ccccd;
  param_1[0x26] = 0;
  param_1[0x27] = 0x96;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  ExceptionList = local_c;
  return param_1;
}

