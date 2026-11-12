// rea decompile_all
// name: FUN_20100583
// address: 0x20100583
// body: available
// range: 0x20100583-0x201005e9 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e1ad533d4cc0333c2136fe0894217de2d61feea098240326e78633f9e4ddcbf9
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_20100583(uint param_1)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = 0;
  DAT_20408398 = param_1;
  puVar1 = &DAT_2015d4f0;
  do {
    if (param_1 == *puVar1) {
      _DAT_20408394 = *(undefined4 *)(iVar2 * 8 + 0x2015d4f4);
      return;
    }
    puVar1 = puVar1 + 2;
    iVar2 = iVar2 + 1;
  } while ((int)puVar1 < 0x2015d658);
  if ((0x12 < param_1) && (param_1 < 0x25)) {
    _DAT_20408394 = 0xd;
    return;
  }
  if ((param_1 < 0xbc) || (_DAT_20408394 = 8, 0xca < param_1)) {
    _DAT_20408394 = 0x16;
  }
  return;
}

