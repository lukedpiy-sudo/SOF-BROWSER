// rea decompile_all
// name: FUN_500af800
// address: 0x500af800
// body: available
// range: 0x500af800-0x500af8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: e763201e522a4b123fb330eede09834c44ddf2bb90702e50eea219801be95539
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void __cdecl FUN_500af800(int param_1)

{
  uint uVar1;
  
  *(undefined4 *)(param_1 + 0x19c) = 2;
  (*DAT_5015ca0c)(param_1,*(undefined4 *)(param_1 + 0x1a4));
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if ((uVar1 & 8) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x20;
  }
  if ((uVar1 & 0x10) != 0) {
    *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) | 0x40;
  }
  if ((uVar1 & 7) == 0) {
    *(undefined4 *)(param_1 + 0x158) = 3;
    (*DAT_5015cb28)(param_1);
    return;
  }
  if ((uVar1 & 1) == 0) {
    *(uint *)(param_1 + 0x1b8) = uVar1 | 1;
  }
  uVar1 = *(uint *)(param_1 + 0x1b8);
  if (((uVar1 & 4) != 0) && ((uVar1 & 2) == 0)) {
    *(uint *)(param_1 + 0x1b8) = uVar1 | 2;
  }
  *(code **)(param_1 + 0x2c4) = FUN_500af790;
  if ((*(byte *)(param_1 + 0x1b8) & 4) != 0) {
    *(undefined4 *)(param_1 + 0x158) = 3;
    (*DAT_5015cb28)(param_1);
    return;
  }
  *(undefined4 *)(param_1 + 0x158) = 0;
  *(uint *)(param_1 + 0x118) = *(uint *)(param_1 + 0x118) | 1;
  (*DAT_5015cb28)(param_1);
  return;
}

