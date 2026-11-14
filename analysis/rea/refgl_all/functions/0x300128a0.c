// rea decompile_all
// name: FUN_300128a0
// address: 0x300128a0
// body: available
// range: 0x300128a0-0x3001298c inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_300128a0(int param_1)

{
  DAT_300a46c0 = 0x46180400;
  DAT_300a4214 = *(float *)(param_1 + 0xc) + 90.0;
  if (*(float *)(param_1 + 4) == 0.0) {
    DAT_300a4768 = *(float *)(param_1 + 0x10);
  }
  else {
    DAT_300a4768 = *(float *)(param_1 + 0x10) / *(float *)(param_1 + 4);
  }
  DAT_300a44f8 = (float)*(byte *)(param_1 + 0x18) * 0.003921569;
  DAT_300a44fc = (float)*(byte *)(param_1 + 0x19) * 0.003921569;
  DAT_300a4500 = (float)*(byte *)(param_1 + 0x1a) * 0.003921569;
  DAT_300a4504 = (float)*(byte *)(param_1 + 0x1b) * 0.003921569;
  DAT_300a46e0 = DAT_300a46e0 | 0x10;
  if (((byte)DAT_300a4588 & 0x10) != 0) {
    *(int *)(DAT_3008fcd4 + 0x10) = *(int *)(DAT_3008fcd4 + 0x10) + 1;
  }
  return;
}

