// rea decompile_all
// name: FUN_50110308
// address: 0x50110308
// body: available
// range: 0x50110308-0x5011036e inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl FUN_50110308(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_5018c308 = param_1;
  puVar1 = &DAT_501589f8;
  do {
    if (param_1 == *puVar1) {
      _DAT_5018c304 = *(undefined4 *)(iVar2 * 8 + 0x501589fc);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x50158b60);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_5018c304 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_5018c304 = 8, 0xca < param_1)) {
    _DAT_5018c304 = 0x16;
  }
  return;
}

