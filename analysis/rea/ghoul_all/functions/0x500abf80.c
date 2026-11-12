// rea decompile_all
// name: FUN_500abf80
// address: 0x500abf80
// body: available
// range: 0x500abf80-0x500ac021 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500abf80(uint param_1)

{
  if ((*(byte *)(param_1 + 0x1b8) & 1) == 0) {
    FUN_500b4160(param_1,&DAT_5014ab24,0);
    FUN_500b3dc0(param_1,0x5014c5b8);
  }
  else {
    FUN_500b4090(param_1,s_SPRITEBALL_FLASH_5014c5b8);
    FUN_500b4160(param_1,&DAT_5014c014,0);
  }
  if ((*(byte *)(param_1 + 0x1b8) & 1) != 0) {
    (*DAT_5015cb00)(*(int *)(param_1 + 0x3bc) + 0x487,&DAT_50133b5c);
    *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) & 0xfffffffe;
    return;
  }
  (*DAT_5015cb00)(*(int *)(param_1 + 0x3bc) + 0x487,&DAT_50144224);
  *(uint *)(param_1 + 0x1b8) = *(uint *)(param_1 + 0x1b8) | 1;
  return;
}

