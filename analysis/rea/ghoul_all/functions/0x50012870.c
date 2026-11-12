// rea decompile_all
// name: FUN_50012870
// address: 0x50012870
// body: available
// range: 0x50012870-0x50012bd2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_50012870(undefined4 *param_1)

{
  float fVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_50113528;
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
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  *param_1 = &PTR_FUN_50126338;
  local_4 = 0;
  param_1[0x11] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x12] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x13] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x14] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x15] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x16] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x17] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x18] = 0;
  FUN_5000a1e0(&DAT_5018b468,(undefined4 *)0x0);
  param_1[0x19] = 0;
  FUN_5000a1e0(&DAT_5018b468,(undefined4 *)0x0);
  param_1[0x1a] = 0;
  FUN_5000a1e0(&DAT_5018b468,(undefined4 *)0x0);
  param_1[0x1b] = 0;
  FUN_5000a1e0(&DAT_5018b468,(undefined4 *)0x0);
  *(undefined2 *)(param_1 + 0x1c) = 0;
  *(undefined2 *)((int)param_1 + 0x72) = 0;
  *(undefined2 *)(param_1 + 0x1d) = 0;
  *(undefined2 *)((int)param_1 + 0x76) = 0;
  param_1[0x1e] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x1f] = 0;
  FUN_500150e0(&DAT_5018b490,(undefined4 *)0x0);
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x28] = 0;
  param_1[0x2b] = 0;
  param_1[0x2a] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[0x33] = 0;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  param_1[0x38] = 0;
  param_1[0x39] = 0;
  param_1[0x3a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x4b] = 0;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x4f] = 0;
  param_1[0x50] = 100;
  param_1[0x51] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 8;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  *(undefined1 *)(param_1 + 0x2c) = 0;
  param_1[2] = 0;
  param_1[0x56] = 0xffffffff;
  param_1[0x57] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x55] = 0;
  param_1[0x29] = 1;
  *(undefined1 *)((int)param_1 + 0xb1) = 1;
  ExceptionList = local_c;
  return param_1;
}

