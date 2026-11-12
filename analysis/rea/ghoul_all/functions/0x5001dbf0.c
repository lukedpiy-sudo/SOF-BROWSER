// rea decompile_all
// name: FUN_5001dbf0
// address: 0x5001dbf0
// body: available
// range: 0x5001dbf0-0x5001dd6c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 * __fastcall FUN_5001dbf0(undefined4 *param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  
  FUN_50011190(param_1);
  param_1[0x10] = 0;
  param_1[0x11] = 0xffffffff;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  puVar3 = param_1 + 0x12;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *param_1 = &PTR_LAB_50127030;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0x3f800000;
  param_1[7] = 1;
  param_1[6] = DAT_5015ccdc;
  param_1[8] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[3] = 1;
  param_1[0x6b] = 0;
  param_1[0x6a] = 0;
  param_1[0x6c] = DAT_5015ccdc;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[5] = 0;
  puVar3 = param_1 + 0x3e;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x4e;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x5e] = DAT_5015ccdc;
  param_1[0x5f] = DAT_5015ccdc;
  param_1[0x60] = DAT_5015ccdc - 10.0;
  param_1[0x61] = DAT_5015ccdc - 10.0;
  fVar1 = DAT_5015ccdc;
  param_1[99] = 0;
  param_1[0x62] = fVar1;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 1;
  param_1[0x77] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  puVar3 = param_1 + 0x1d;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = param_1 + 0x2d;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  param_1[0x3d] = 1;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  *(undefined1 *)(param_1 + 0x7a) = 1;
  *(undefined1 *)((int)param_1 + 0x1e9) = 0;
  *(undefined1 *)((int)param_1 + 0x1ea) = 1;
  param_1[0x69] = 0;
  return param_1;
}

