// rea decompile_all
// name: FUN_300190a0
// address: 0x300190a0
// body: available
// range: 0x300190a0-0x300190de inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_300190a0(void)

{
  int iVar1;
  
  iVar1 = 0;
  _DAT_300a41d4 = 0;
  _DAT_300a41d8 = 0;
  do {
    *(undefined4 *)((int)&DAT_300a41b0 + iVar1) = 0x461c3c00;
    *(undefined4 *)((int)&DAT_300a4198 + iVar1) = 0x461c3c00;
    *(undefined4 *)((int)&DAT_300a4140 + iVar1) = 0xc61c3c00;
    *(undefined4 *)((int)&DAT_300a4128 + iVar1) = 0xc61c3c00;
    iVar1 = iVar1 + 4;
  } while (iVar1 < 0x18);
  DAT_300a41d0 = 0;
  return;
}

