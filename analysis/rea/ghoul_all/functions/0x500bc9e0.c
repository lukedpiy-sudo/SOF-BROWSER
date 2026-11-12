// rea decompile_all
// name: FUN_500bc9e0
// address: 0x500bc9e0
// body: available
// range: 0x500bc9e0-0x500bcbc2 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __fastcall FUN_500bc9e0(undefined4 *param_1)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = __ftol();
  param_1[0x12] = (int)lVar2;
  lVar2 = __ftol();
  param_1[10] = (int)lVar2;
  lVar2 = __ftol();
  param_1[0x13] = (int)lVar2;
  if ((int)lVar2 < 0) {
    param_1[0x13] = 0;
  }
  if (4 < (int)param_1[0x13]) {
    param_1[0x13] = 4;
  }
  param_1[0xc] = *(undefined4 *)(&DAT_50165b90 + param_1[0x13] * 0x58);
  param_1[0xd] = *(undefined4 *)(&DAT_50165b94 + param_1[0x13] * 0x58);
  param_1[0xe] = *(undefined4 *)(&DAT_50165b98 + param_1[0x13] * 0x58);
  param_1[0xf] = *(undefined4 *)(param_1[0x13] * 0x58 + 0x50165b9c);
  param_1[0x10] = *(undefined4 *)(param_1[0x13] * 0x58 + 0x50165ba0);
  param_1[0x11] = *(undefined4 *)(param_1[0x13] * 0x58 + 0x50165ba4);
  param_1[8] = *(undefined4 *)(param_1[0x13] * 0x58 + 0x50165b80);
  lVar2 = __ftol();
  param_1[0x14] = (int)lVar2;
  if ((int)lVar2 < 0) {
    param_1[0x14] = 0;
  }
  if (4 < (int)param_1[0x14]) {
    param_1[0x14] = 4;
  }
  *param_1 = *(undefined4 *)(&DAT_50165b60 + param_1[0x14] * 0x58);
  param_1[1] = *(undefined4 *)(&DAT_50165b64 + param_1[0x14] * 0x58);
  param_1[2] = *(undefined4 *)(&DAT_50165b68 + param_1[0x14] * 0x58);
  param_1[3] = *(undefined4 *)(param_1[0x14] * 0x58 + 0x50165b6c);
  param_1[4] = *(undefined4 *)(param_1[0x14] * 0x58 + 0x50165b70);
  param_1[5] = *(undefined4 *)(param_1[0x14] * 0x58 + 0x50165b74);
  param_1[6] = *(undefined4 *)(param_1[0x14] * 0x58 + 0x50165b78);
  param_1[9] = *(undefined4 *)(param_1[0x14] * 0x58 + 0x50165b84);
  param_1[0xb] = *(undefined4 *)(param_1[0x14] * 0x58 + 0x50165b8c);
  lVar2 = __ftol();
  iVar1 = (int)lVar2;
  if (iVar1 < 0) {
    param_1[7] = DAT_50165b7c;
    return;
  }
  if (4 < iVar1) {
    iVar1 = 4;
  }
  param_1[7] = (&DAT_50165b7c)[iVar1 * 0x16];
  return;
}

